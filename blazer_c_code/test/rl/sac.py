from Blazer_Model import Model
import numpy as np
from matplotlib import pyplot as plt
from tqdm import trange
from accrl.env import MyEnv
from accrl.reward import master_reward
import argparse
import torch
import time
import ray

def calc_state(obs):
    ret = np.empty([14], dtype=np.float32)
    ret[0] = obs[0]                 # ego speed
    ret[1] = obs[1] - obs[0]        # set speed diff
    ret[2] = obs[0] * obs[2] + 10   # desired gap
    ret[3] = ret[2] - obs[3]        # distance error
            ## -= too far, += too close
    ret[4:14] = obs[4:14]           # relative speed
    return ret

def main(args):
    md = Model(automatic_control=False)

    obs = md.reset(drive_trace="US06", SOC=50)
    obs = calc_state(obs)
#    stop_cond = len(md)
    stop_cond = 2000
    speeds = np.empty((stop_cond, 3))
    jerk   = np.empty((stop_cond, 1))
    powers = np.empty((stop_cond, 5))
    fuels  = np.empty((stop_cond, 2))
    SOC    = np.empty((stop_cond, 1))
    dist   = np.empty((stop_cond, 2))
    rewards= np.empty((stop_cond, 10))

    ray.init(include_dashboard=False)
    network = load_sac(args.checkpoint)
    action_last = [0,0,0]

    for i in trange(stop_cond):
        obs = obs[:12]
        obs = np.concatenate((obs, [MyEnv.bool_condition(obs), action_last[0], action_last[1], action_last[2]]))
        with torch.no_grad():
            action = network.compute_actions({0:obs})[0].reshape((-1,)).astype(np.double)
            action_last = action
        action *= 100_000
        obs = md.step(action)
        obs = calc_state(obs)
        reward, info = master_reward(obs, action, md)
        obs = fix_nan(obs)

        speeds[i,0] = (obs[0])
        speeds[i,1] = (obs[4])
        speeds[i,2] = (obs[1] + obs[0])
        powers[i,:] = [obs[5], obs[6], action[0], action[1], action[2]]
        jerk[i,0]   = (obs[7])
        SOC[i,0]    = obs[9]
        dist[i,0]   = obs[3]
        dist[i,1]   = obs[2]
        rewards[i,:] = [
                info['intrusion'],
                info['departure'],
                info['departure_adj'],
                info['set_speed'],
                info['set_speed_adj'],
                info['jerk'],
                info['eff'],
                info['fuel'],
                info['soc'],
                info['total']
        ]


    fig, ax = plt.subplots(6,2)

    xs = np.arange(len(speeds))
    ax[0,0].plot(xs, speeds[:,0], label="ego-speed")
    ax[0,0].plot(xs, speeds[:,2], label="driver-set-speed")
    ax[0,0].plot(xs, speeds[:,1]+speeds[:,0], label="Target-speed")
    ax[0,0].legend()
    ax[1,0].plot(xs, powers[:,0], label="engine power (W)")
    ax[1,0].plot(xs, powers[:,1], label="Motor power (W)")
    ax[1,0].legend()
    ax[2,0].plot(xs, jerk[:,0], label="ego-vehicle jerk")
    ax[2,0].legend()
    ax[3,0].plot(xs, SOC[:,0], label="SOC")
    ax[3,0].legend()
    ax[4,0].plot(xs, dist[:,0], label="Distance Error (+= too close)")
    ax[4,0].plot(xs, dist[:,1], label="Desired Headway")
    ax[4,0].legend()
    ax[5,0].plot(xs, powers[:,2], label="Motor power request (W)")
    ax[5,0].plot(xs, powers[:,3], label="Engine power request (W)")
    ax[5,0].plot(xs, powers[:,4], label="Brake power request (W)")
    ax[5,0].legend()

    ax[0,1].plot(xs, rewards[:,0], label="intrusion reward")
    ax[0,1].plot(xs, rewards[:,1], label="departure reward")
    ax[0,1].plot(xs, rewards[:,2], label="departure adjusted reward")
    ax[0,1].legend()
    ax[1,1].plot(xs, rewards[:,3], label="set speed")
    ax[1,1].plot(xs, rewards[:,4], label="set speed adjusted")
    ax[1,1].legend()
    ax[2,1].plot(xs, rewards[:,5], label="jerk reward")
    ax[2,1].legend()
    ax[3,1].plot(xs, rewards[:,6], label="eff reward")
    ax[3,1].legend()
    ax[4,1].plot(xs, rewards[:,7], label="fuel reward")
    ax[4,1].plot(xs, rewards[:,8], label="soc reward")
    ax[4,1].legend()
    ax[5,1].plot(xs, rewards[:,9], label="total reward")
    ax[5,1].legend()
    
    plt.show()

def fix_nan(state):
    mask = np.isnan(state)
    state[mask] = 0
    return state

def load_sac(cpt):
    import ray.rllib.agents.sac as sac
    from accrl.env import MyEnv
    config={
        "framework": "torch",
        "num_gpus": 1 if torch.cuda.is_available() else 0,
        "num_workers": 1,
        "log_level": "WARN",
        "Q_model": {
            "fcnet_hiddens": [32, 50, 128]
        },
        "policy_model": {
            "fcnet_hiddens": [32, 50, 128]
        }
    }
    agent = sac.SACTrainer(config=config, env=MyEnv)
    agent.restore(cpt)
    return agent


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("checkpoint", help="Path to the checkpoint file to load")
    args = parser.parse_args()
    main(args)

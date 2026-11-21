from Blazer_Model import Model
from Blazer_Model import master_reward
import numpy as np
from matplotlib import pyplot as plt
from tqdm import trange

def main():
    md = Model(automatic_control=True)

    obs = md.reset(drive_trace="US06", SOC=50)
    stop_cond = len(md)
    speeds = np.empty((stop_cond, 2))
    jerk   = np.empty((stop_cond, 1))
    powers = np.empty((stop_cond, 5))
    fuels  = np.empty((stop_cond, 2))
    SOC    = np.empty((stop_cond, 1))
    dist   = np.empty((stop_cond, 2))
    rewards= np.empty((stop_cond, 8))

    for i in trange(stop_cond):
        action = np.array([obs[5], obs[6], 0])
        obs = md.step(action)
        reward, info = master_reward(obs, action, md)
        obs = fix_nan(obs)

        speeds[i,0] = (obs[0])
        speeds[i,1] = (obs[0] + obs[5])
        powers[i,:] = [obs[5], obs[6], action[0], action[1], action[2]]
        jerk[i,0]   = (obs[11])
        SOC[i,0]    = obs[13]
        dist[i,0]   = obs[3]
        dist[i,1]   = obs[2]
        rewards[i,:] = [
                info['intrusion'],
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
    ax[0,0].plot(xs, speeds[:,1], label="Target-speed")
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


if __name__ == "__main__":
    main()
    main()

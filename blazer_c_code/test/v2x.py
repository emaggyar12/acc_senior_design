
from Blazer_Model import Model
from Blazer_Model import master_reward
import numpy as np
from matplotlib import pyplot as plt
from tqdm import trange

def main():
    md = Model(automatic_control=False, v2x=True, pid=True, ignore_veh=True)

    obs = md.reset(drive_trace="US06", SOC=50)
    stop_cond = len(md)
    speeds = np.empty((stop_cond, 3))
    dist   = np.empty((stop_cond, 2))
    times  = np.empty((stop_cond, 2))

    for i in trange(stop_cond):
        action = np.array([100000, 0, 0])
        obs = md.step(action)

        speeds[i,0] = (obs[0])
        dist[i,0]   = obs[19]
        times[i,0]  = obs[21]
        times[i,1]  = obs[20]


    fig, ax = plt.subplots(3,1)

    xs = np.arange(len(speeds))
    ax[0].plot(xs, speeds[:,0], label="ego-speed")
    ax[0].legend()
    ax[1].plot(xs, dist[:,0], label="Dist to intersection")
    ax[1].legend()
    ax[2].plot(xs, times[:,0], label="Time to next state")
    ax[2].plot(xs, times[:,1], label="current state")
    ax[2].legend()

    
    plt.show()


def fix_nan(state):
    mask = np.isnan(state)
    state[mask] = 0
    return state


if __name__ == "__main__":
    main()

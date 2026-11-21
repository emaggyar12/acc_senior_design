from Blazer_Model import Model
import numpy as np
from matplotlib import pyplot as plt
from tqdm import trange
from accrl.fcnet import FullyConnectedNetwork
import torch


def main():
    md = Model(automatic_control=False)
    obs = md.reset(drive_trace="IM240", SOC=50)
    speeds = np.empty((len(md), 1))
    jerk   = np.empty((len(md), 1))
    powers = np.empty((len(md), 2))
    fuels  = np.empty((len(md), 2))
    SOC    = np.empty((len(md), 1))

    network = FullyConnectedNetwork([48,100,50,10], 6)
    network.load_state_dict(torch.load("models/out.pth"))

    for i in trange(len(md)):
        obs = torch.tensor(obs[:12], dtype=torch.float32).reshape((1,12))
        print(obs.shape)
        with torch.no_grad():
            action = network(obs).cpu().numpy().reshape((-1,)).astype(np.double)
        print(action.shape)
        print(action)
        obs = md.step(action)
        obs = fix_nan(obs)

        speeds[i,0] = (a[0])
        powers[i,:] = [a[5], a[6]]
        jerk[i,0] = (a[7])
        SOC[i,0] = a[9]


    fig, ax = plt.subplots(4)

    xs = np.arange(len(speeds))
    ax[0].plot(xs, speeds[:,0], label="ego-speed")
    ax[0].legend()
    ax[1].plot(xs, powers[:,0], label="engine power (W)")
    ax[1].plot(xs, powers[:,1], label="Motor power (W)")
    ax[1].legend()
    ax[2].plot(xs, jerk[:,0], label="ego-vehicle jerk")
    ax[2].legend()
    ax[3].plot(xs, SOC[:,0], label="SOC")
    ax[3].legend()
    plt.show()


def fix_nan(state):
    mask = torch.isnan(state)
    state[mask] = 0
    return state


if __name__ == "__main__":
    main()

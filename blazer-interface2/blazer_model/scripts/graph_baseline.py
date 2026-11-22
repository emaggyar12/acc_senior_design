from blazer_model.envs.baseline import BaselineEnv
from blazer_model.utils.grapher import Grapher
from tqdm import trange
import numpy as np
from matplotlib import pyplot as plt

def main():
    md = BaselineEnv()
    md.reset(drive_trace="US06", SOC=50, time_gap=2, set_speed=30)
    grapher = Grapher(md)


    action = np.empty((2,)) ## baseline model is implemented in simulink, so the action here does nothing
    for _ in trange(len(md)):
        state, r, done, info = md.step(action)
        grapher.add_obs(state, action, r, info)
    fig, ax = grapher.plot()
    plt.show()

if __name__ == "__main__":
    main()
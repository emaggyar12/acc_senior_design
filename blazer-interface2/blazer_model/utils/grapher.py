from matplotlib import pyplot as plt
import numpy as np

class Grapher:
    def __init__(self, model, stop_cond=None):
        self.md = model
        self.stop_cond = len(self.md) if stop_cond is None else stop_cond
        self.speeds = np.empty((self.stop_cond, 3))
        self.jerk = np.empty((self.stop_cond, 1))
        self.powers = np.empty((self.stop_cond, 6))
        self.fuels = np.empty((self.stop_cond, 2))
        self.SOC = np.empty((self.stop_cond, 1))
        self.dist = np.empty((self.stop_cond, 2))
        self.rewards = np.empty((self.stop_cond, 8))
        self.count = 0

    def add_obs(self, obs, action, reward, info):
        self.speeds[self.count, 0] = (obs[0])
        self.speeds[self.count, 1] = obs[5] + obs[0]
        self.speeds[self.count, 2] = (obs[1])  # set speed
        self.powers[self.count, :] = [obs[6], obs[7], obs[8], obs[9], obs[10], obs[18]]
        self.jerk[self.count, 0] = (obs[11])
        self.SOC[self.count, 0] = obs[13]
        self.dist[self.count, 0] = obs[3]
        self.dist[self.count, 1] = obs[4]
        self.rewards[self.count, :] = [
                info['intrusion'],
                info['set_speed'],
                info['set_speed_adj'],
                info['jerk'],
                info['eff'],
                info['fuel'],
                info['soc'],
                info['total']
        ]
        self.count += 1

    def plot(self):
        fig, ax = plt.subplots(6, 2)
        xs = np.arange(len(self.speeds))

        ax[0, 0].plot(xs, self.speeds[:, 0], label="ego-speed")
        ax[0, 0].plot(xs, self.speeds[:, 1], label="Target-speed")
        ax[0, 0].plot(xs, self.speeds[:, 0] + self.speeds[:, 2], label="Set Speed")
        ax[0, 0].legend()

        ax[1, 0].plot(xs, self.powers[:, 0], label="engine power (W)")
        ax[1, 0].plot(xs, self.powers[:, 1], label="Motor power (W)")
        ax[1, 0].plot(xs, self.powers[:, 5], label="Braking power (W)")
        ax[1, 0].plot(xs, self.powers[:, 2], '--', label="Max Engine power (W)")
        ax[1, 0].plot(xs, self.powers[:, 3], '--', label="Max Motor power (W)")
        ax[1, 0].plot(xs, self.powers[:, 4], '--', label="Min Motor power (W)")
        ax[1, 0].legend()

        ax[2, 0].plot(xs, self.jerk[:, 0], label="ego-vehicle jerk")
        ax[2, 0].legend()

        ax[3, 0].plot(xs, self.SOC[:, 0], label="SOC")
        ax[3, 0].legend()

        ax[4, 0].plot(xs, self.dist[:, 0], label="Following Distance")
        ax[4, 0].plot(xs, self.dist[:, 1], label="Distance Error (+= too close)")
        ax[4, 0].legend()

        ax[5, 0].plot(xs, self.speeds[:, 2], label="Set speed error")
        ax[5, 0].legend()

        ax[0, 1].plot(xs, self.rewards[:, 0], label="intrusion reward")
        ax[0, 1].legend()

        ax[1, 1].plot(xs, self.rewards[:, 1], label="set speed")
        ax[1, 1].plot(xs, self.rewards[:, 2], label="set speed adjusted")
        ax[1, 1].legend()

        ax[2, 1].plot(xs, self.rewards[:, 3], label="jerk reward")
        ax[2, 1].legend()

        ax[3, 1].plot(xs, self.rewards[:, 4], label="eff reward")
        ax[3, 1].legend()

        ax[4, 1].plot(xs, self.rewards[:, 5], label="fuel reward")
        ax[4, 1].plot(xs, self.rewards[:, 6], label="soc reward")
        ax[4, 1].legend()

        ax[5, 1].plot(xs, self.rewards[:, 7], label="total reward")
        ax[5, 1].legend()

        return fig, ax

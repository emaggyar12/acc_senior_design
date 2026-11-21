from Blazer_Model import Model
import numpy as np
from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation
from tqdm import trange
import pygame


def main():
    md = Model(automatic_control=False)
    md.reset(drive_trace="UDDS", SOC=60)
    print(md.step_size())
    speeds = np.empty((len(md), 2))
    jerk   = np.empty((len(md), 1))
    powers = np.empty((len(md), 6))
    fuels  = np.empty((len(md), 2))
    SOC    = np.empty((len(md), 1))
    limits = np.empty((len(md), 2))

    a1 = np.array([10_000, -10_000, 0])
    b = np.array([0,0,0])
    c = np.array([0,0,-150_000])
    pygame.init()
    fig, ax = plt.subplots(5)
    print("w: engine | e: motor+ | d: motor- | a: brake")

    xs = np.arange(0, len(md)*0.05, 0.05)
    def update(i):
        keys = pygame.key.get_pressed()
        a1[0] = 150_000 if keys[pygame.K_w] else 0
        if keys[pygame.K_e]:
            a1[1] = 100_000
        elif keys[pygame.K_d]:
            a1[1] = -100_000
        else:
            a1[1] = 0
        a1[2] = -50_000 if keys[pygame.K_a] else 0
        a = md.step(a1.astype(np.double))
        speeds[i,0] = (a[0])
        speeds[i,1] = a[0] + a[5]
        powers[i,:] = [a[6], a[7], a[8], a1[0], a1[1], a1[2]]
        limits[i,:] = [a[9], a[10]]
        jerk[i,0] = (a[11])
        SOC[i,0] = a[13]

        ax[0].clear()
        ax[1].clear()
        ax[2].clear()
        ax[3].clear()
        ax[4].clear()

        ax[0].plot(xs[:i], speeds[:i,0], label="ego-speed")
        ax[0].plot(xs[:i], speeds[:i,1], label="target-speed")
        ax[0].legend()
        ax[1].plot(xs[:i], powers[:i,0], label="engine power (W)")
        ax[1].plot(xs[:i], powers[:i,1], label="Motor power (W)")
        ax[1].plot(xs[:i], powers[:i,2], '--', label="Max Engine Power(W)")
        ax[1].plot(xs[:i], limits[:i,0], '--', label="Max Motor Power(W)")
        ax[1].plot(xs[:i], limits[:i,1], '--', label="Min Motor Power(W)")
        ax[1].legend()
        ax[2].plot(xs[:i], jerk[:i,0], label="ego-vehicle jerk")
        ax[2].legend()
        ax[3].plot(xs[:i], SOC[:i,0], label="SOC")
        ax[3].legend()
        ax[4].plot(xs[:i], powers[:i, 3], label="Engine Demand (W)")
        ax[4].plot(xs[:i], powers[:i, 4], label="Motor Demand (W)")
        ax[4].plot(xs[:i], powers[:i, 5], label="Brake Demand (W)")
        ax[4].legend()

    def init():
        ax[0].set_ylim(0, 50)
        ax[0].set_xlim(0, len(md))
        ax[1].set_ylim(-100_000, 100_000)
        ax[1].set_xlim(0, len(md))
        ax[2].set_ylim(0, 100)
        ax[2].set_xlim(0, len(md))
        ax[4].set_ylim(-100_000, 100_000)
        ax[4].set_xlim(0, len(md))




    ani = FuncAnimation(fig, update, frames=len(md), interval=50)

    plt.show()

if __name__ == "__main__":
    main()

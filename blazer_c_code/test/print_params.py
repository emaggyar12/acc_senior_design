from Blazer_Model import Model
import numpy as np
from matplotlib import pyplot as plt
from tqdm import trange


def main():
    md = Model(automatic_control=True)
    print("here")
    md.reset(drive_trace="US06")
    md.debug()

def pid_params():
    md = Model(automatic_control=True, pid=True)
    print("here")
    md.reset(drive_trace="US06")
    md.debug()


if __name__ == "__main__":
#    pid_params()
    main()

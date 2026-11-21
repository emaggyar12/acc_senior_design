from Blazer_Model import Model
import numpy as np

model = Model()
state = model.reset(drive_trace="US06", SOC=70, time_gap=2.5)

print("Initial ego speed:", state[0], "m/s")

state = model.step(np.array([0.0, 0.0, 0.0]))

print("Ego speed after one step:", state[0], "m/s")
print("Lead vehicle speed:", state[0] + state[5], "m/s")
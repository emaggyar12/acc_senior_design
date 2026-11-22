from blazer_model.envs.pedal_only import PedalEnv
import inspect
import numpy as np

# env = PedalEnv()

# state = env.reset(
#     drive_trace="US06",
#     SOC=70,
#     time_gap=2.5,
#     set_speed=30
# )

# print("State length:", len(state))
# print("Initial ego speed:", state[0], "m/s")

# print(inspect.signature(PedalEnv.step))
# print(inspect.getsource(PedalEnv.step))

# print(inspect.getsource(PedalEnv.transform_action))
# print("Action space:", PedalEnv().action_space)

env = PedalEnv()
state = env.reset(
    drive_trace="US06",
    SOC=70,
    time_gap=2.5,
    set_speed=30
)

print("Initial speed:", state[0], "m/s")

for i in range(150):
    if i < 100:
        action = np.array([0.5, 0.0])
    else:
        action = np.array([0.0, 0.5])

    state, reward, done, info = env.step(action)

    if i % 10 == 0:
        print(f"Step {i}: {state[0]:.2f} m/s")

    if done:
        break
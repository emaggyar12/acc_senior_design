# Blazer Model Python Interface

This provides an interface to the simulink model of the blazer vehicle, 
providing a simple way to simulate complex vehicle physics. This model 
has a simple (and flexible) interface that is returned as a numpy array.

## Setup
### Build From Source
1. Clone this repository
    ```bash
    git clone --recursive https://apcsi5.engr.utk.edu/cavs/blazer-c-interface.git
    ```
2. In a virtual environment, build and install the package
    ```bash
   pip install -e .
    ```
### Download Compiled Binary
1. Download from the following links:
    - [3.7](https://apcsi5.engr.utk.edu/cavs/blazer-c-interface/-/jobs/artifacts/master/raw/dist%2fblazer_model_c-1.6.0-cp37-cp37m-linux_x86_64.whl?job=run:3.7)
    - [3.8](https://apcsi5.engr.utk.edu/cavs/blazer-c-interface/-/jobs/artifacts/master/raw/dist%2fblazer_model_c-1.6.0-cp38-cp38-linux_x86_64.whl?job=run:3.8)
    - [3.9](https://apcsi5.engr.utk.edu/cavs/blazer-c-interface/-/jobs/artifacts/master/raw/dist%2fblazer_model_c-1.6.0-cp39-cp39-linux_x86_64.whl?job=run:3.9)
    - [3.10](https://apcsi5.engr.utk.edu/cavs/blazer-c-interface/-/jobs/artifacts/master/raw/dist%2fblazer_model_c-1.6.0-cp310-cp310-linux_x86_64.whl?job=run:3.10)

## Interface

The model has 3 main interface functions:

<details>
    <summary>Interface Functions</summary>

```python
 def __init__(self, v2x=False, automatic_control=False, pid=False):
     """
     Create an instance of the blazer model. This does not initialize all model parameters. 
     Call reset to initialize model params and get initial state
     
     :param v2x: simulate V2X data
     :param automatic_control: follow the drivetrace as close as possible (ignore acc inputs)
     :param pid: Use the PID variant of the blazer model. When ture, the step function will
        ignore the actions provided. 
     """
```

```python
 def reset(self, drive_trace="US06", SOC=70, time_gap=2.5, set_speed=None) -> np.ndarray:
     """
     Reset the simulation
     :param drive_trace:
         1: US06
         2: UDDS
         3: HWFET
         4: IM240
         5: NYCC
         6: SC03
         7: HUDDS
     :param SOC: initial state of charge of the HV battery. Think of this as the 
     battery percentage (on a scale of 0-100).
     :param time_gap (double): the gap setting to be used during this simulation
     :param set_speed (double): set speed the vehicle should maintain when there is no target vehicle
        random if None
     :return: current state (np.ndarray)
     """
```

```python
 def step(self, action: np.ndarray) -> np.ndarray:
     """
     Step the blazer model simulation. Must call reset first. 

     action: np.ndarray (3,) (1-dimensional)
         0: Engine power (W)
         1: Motor Power(W)
         2: Foundation Brakes Power (W)

     ret: state (np.ndarray)
         0 : ego_speed (m/s)
         1 : set_speed_error (m/s)
         2 : desired_headway (m)
         3 : following_veh_dist (m)
         4 : headway_error (m)
         5 : following_veh_spd (m/s) (relative speed)
         6 : real engine power (W)
         7 : real motor power (W)
         8 : max engine power (W)
         9 : max motor power (W)
         10: min motor power (W)
         11: ego-vehicle jerk (m/s^3)
         12: road grade (gradians)
         13: SOC (expressed as %, values 0-100) 
         14: Electric motor speed (RPM)
         15: Engine speed (RPM)
         16: electric fuel flow (L/hr) [we probably won't have fuel flow in the car]
         17: e10 fuel flow (L/hr) [if we do it'll be too noisy. Use this for your reward function *only*]
         18: real braking power (W) [This will be the same as the action for RL mode]
         ## The following will be zero unless v2x is True
         19: distance to next intersection (m)
         20: current phase (0=red, 1=yellow, 2=green) (ie down the light starting at 0)
         21: time to next phase (decaseconds (1/10ths of a second))
         22: next phase (0=red, 1=yellow, 2=green) (will always go R->G->Y->R->...)
         23: intersection present (1=True, 0=False). When false, state values 18-21 should be treated as garbage
     """
```

```python
def change_set_speed(self, speed: float):
    """
    Change the set speed within the model. The new set speed should be
    on the closed interval [0,35] m/s. The new set speed is in effect on the
    next call of the step function. You do not need to call this function
    during or immediately after reset (setting the initial set speed is
    handled for you)
    """
```

```python
def v2x_data(self)->np.ndarray:
    """
    Get the signal phase information about each traffic light in the simulation. 
        The information returned from this function should not be available to the
        agent at every time step, this is mostly for visualization and debugging. 
    
    This returns an array of shape num_intersectionsx8 where each row describes an
        intersection that the ego-vehicle has not passed and each column is
        0: current state (0:red, 1:yellow, 2:green)
        1: next state 
        2: time to next state
        3: distance to intersection (will always be positive because passed intersections are not included)
        4: distance until this intersection will be shown in the observation space
        5: time in seconds that this intersection is in the red phase
        6: time in seconds that this intersection is in the yellow phase
        7: time in seconds that this intersection is in the green phase
    """

</details>

There are also a few utility functions provided. 

<details>
    <summary>Utility Functions Interface</summary>

```python
 def accel_to_power(self, accel: float) -> float:
     """
     Converts a given acceleration to power. This function is dependent on
     the vehicle's current state (grade and velocity specifically). 
     """
```

```python
 def __len__(self) -> int:
     """
     Number of steps in the simulation (if the simulation is 600 seconds long, this will be (600 / step_size)

     :return: num_steps (int)
     """
```

```python
def step_size(self) -> float:
"""
Size of one step, in seconds. In other words, there are (1/step_size) in 1 seconds.
This should never change.

        :return: step_size (float)
        """
```

> Note: the following functions use `motor_speed` and `engine_speed`, which is before
the transmission. You cannot use `vehicle_speed`->rpm to get motor/engine speed. 
Use the speed in the returned state, or just leave the speed parameter as None and
these functions will use the current motor/engine speed. 
```python

def motor_efficiency(self, motor_power, motor_speed=None) -> float:
    """
    Return the efficiency of the motor at a certain power. This function is
    dependent on the motor speed, leaving motor_speed as None will use the
    current motor speed in the simulation. This will return -inf if the motor
    is not capable of producing the commanded power at the specified speed. 

    :param motor_power (float): power(in Watts) to poll the efficiency map with
    :param motor_speed (float): speed(RPM) to poll the efficiency map with. 
        Leave as None to use current motor speed. 
    """
```

```python
def engine_efficiency(self, engine_power, engine_speed=None) -> float:
    """
    Return the efficiency of the engine at a certain power. This function is
    dependent on the engine speed, leaving engine_speed as None will use the
    current engine speed in the simulation. This will return -inf if the engine
    is not capable of producing the commanded power at the specified speed.

    :param engine_power (float): power(in Watts) to poll the efficiency map with
    :param engine_speed (float): speed(RPM) to poll the efficiency map with. 
        Leave as None to use current engine speed. 
    """
```
</details>

## Drive traces

The list of official drive cycles is provided [here](https://www.epa.gov/vehicle-and-fuel-emissions-testing/dynamometer-drive-schedules).
These are the main ones used in the model and official ones from the EPA, but
MathWorks provides ~60 more to test on. If you need more drive cycles,
they can be added. (note that the length of the drive cycles is not the same)

If you use `automatic_control`, the model will ignore all ACC signals and try to
follow the drive trace. You should see the ego-speed match the drive trace you
selected AND the motor power and engine power changing accordingly. Braking power 
is not simulated as power, but as a pedal position so providing that value in
automatic mode is not possible. 

## Reward Function
The reward function is in `src/extern/python/Blazer_Model/reward.py`

It can be imported with 
```python
from Blazer_Model import master_reward
```

## OpenAI Gym
The OpenAI Gym environment is provided in `src/extern/python/Blazer_Model/env.py`

It can be imported with 
```python
from Blazer_Model import BlazerGymEnvironment
```

A variant of the gym environment without the follow-based done condition is 
also provided. It can be imported with 
```python
from Blazer_Model.env import SetSpeedBlazerEnv
```

## PID Variant
The Blazer Model can be run to evaluate the PID version. In this mode, the actions
given to the step function are *ignored*. This parameter is still required, so
just pass in an np.empty with size (3,). 

A test script for the PID variant is provided in `test/pid.py`

# Changelog
- 1.6.0:
<details>
    - `veh_ignore` option will cause the PID controller to follow only the set speed
    - state element 18 was added to show the power commanded to the brakes by the PID controller
    - added an option to specify an early cutoff time for the mode (in seconds)
    - added PID gym environment (feel free to change it)
</details>

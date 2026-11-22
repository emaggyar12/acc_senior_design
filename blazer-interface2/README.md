# Blazer Model Python Interface

This provides an interface to the simulink model of the blazer vehicle, 
providing a simple way to simulate complex vehicle physics. This model 
has a simple (and flexible) interface that is returned as a numpy array.

## Setup
1. Clone this repository
    ```bash
    git clone --recursive https://mabe2.mabe.utk.edu/cavs/blazer-interface2.git
    ```
2. In a virtual environment, build and install the package
    ```bash
   pip install -e .
    ```

## Interface

The model has 3 main interface functions:

<details>
    <summary>Interface Functions</summary>

```python
 def __init__(self):
     """
     Create an instance of the blazer model. This does not initialize all model parameters. 
     Call reset to initialize model params and get initial state.
     """
```

```python
 def reset(self, drive_trace=None, SOC=None, time_gap=None, stop_time=None, set_speed=None, seed=None) -> np.ndarray:
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
     :param stop_time (int): time in seconds to run the simulation for. Leave as None to run the entire drive trace
     :param set_speed (double): set speed the vehicle should maintain when there is no target vehicle
        random if None
     :param seed: seed for the random number generator
     :return: current state (np.ndarray)
     """
```

```python
 def step(self, action: np.ndarray) -> np.ndarray:
     """
     Step the blazer model simulation. Must call reset first. 

     action: np.ndarray (3,) (1-dimensional)
         0: Accelerator Pedal Position
         1: Brake Pedal Position

     ret: 
        state (np.ndarray)
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
        reward (float): see the master_reward in reward_2021.py. You don't have to use this. 
        done: if the done condition is met. (simulation over). You can add like "if hit car" to the done condition
        info: dictionary of whatever other info you want
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

## Environments

There are two environments provided. One which takes pedal inputs, one which runs the algorithm that is implemented in the car. 

Once you install this repository using the install instructions above, you can import the environments respectively as follows:

```python
from blazer_model.envs.pedal_only import PedalEnv
from blazer_model.envs.baseline import BaselineEnv
```

## Utilities

### Grapher
The class used to generate pretty graphs can be imported as follows

```python
from blazer_model.utils.grapher import Grapher
```

You can find an example of its usage at `blzer_model/scripts/graph_baseline.py`

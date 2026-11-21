from blazer_model_c import rl_model, pid_model
import numpy as np
import pickle
import os
from scipy.interpolate import CloughTocher2DInterpolator
import warnings

import time
import random


class Model:
    def __init__(self, 
            *,
            v2x=False, 
            automatic_control=False, 
            pid=False, 
            ignore_veh=False, 
            num_intersections=4, 
            avg_lead_dist=5000):
        """
        Create an instance of the blazer model. This does not initialize all model parameters.
        Call reset to initialize model params and get initial state

        :param v2x: simulate V2X data
        :param automatic_control: follow the drivetrace as close as possible (ignore acc inputs)
        :param pid: Use the PID variant of the blazer model. When ture, the step function will
           ignore the actions provided. 
        :param ignore_veh: If True, the PID will not follow the lead vehicle. The lead-vehicle
            signals will be updated, but will be garbage. This only affects PID mode.
        :param num_intersections: The number of intersections to model over the drive trace.
        :param avg_lead_dist: The average distance (in meters) before the model will 
            provide information about the next intersection
        """

        self.model = None
        self.v2x = v2x
            
        self.automatic_control = automatic_control
        data_path = os.path.join(os.path.dirname(__file__), "data", "data.pkl")
        with open(data_path, "rb") as f:
            self.model_data = pickle.load(f)
        if self.model_data is None:
            raise RuntimeError(f"Unable to load efficiency data. Expected to be in {data_path}")
        
        motor_points = (self.model_data['motor']['powers'].ravel(),
                        self.model_data['motor']['speeds'].ravel())
        motor_vals = self.model_data['motor']['effs'].ravel()
        self.motor_interp = CloughTocher2DInterpolator(motor_points, motor_vals, fill_value=np.NINF)

        engine_points = (self.model_data['engine']['powers'].ravel(),
                        self.model_data['engine']['speeds'].ravel())
        engine_vals = self.model_data['engine']['effs'].ravel()
        self.engine_interp = CloughTocher2DInterpolator(engine_points, engine_vals, fill_value=np.NINF)
        self.pid = pid
        self.ignore_veh = ignore_veh
        self.num_intersections = num_intersections
        self.avg_lead_dist = avg_lead_dist


    def reset(self, drive_trace="US06", SOC=70, time_gap=2.5, *, set_speed=None, end_time=None) -> np.ndarray:
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
        :param SOC (double): the initial State of Charge of the HV battery
        :param time_gap (double): the gap setting to be used during this simulation
        :param set_speed (double): set speed the vehicle should maintain when there is no target vehicle
        :param end_time (int): number of steps to take in the environment before terminating. If left at None,
            will stop at the end of the drive cycle (or 1000s for constant)
        :return: current state (np.ndarray)
        """
        assert 0 <= SOC <= 100, \
                "SOC must be within (0,100)"
        assert 0.5 <= time_gap <= 7, \
                "time_gap must be within [0.5,7]. Too large defeats purpose of ACC. Too small is dangerous."
        self.time_gap = time_gap

        ## mark model for deletion in case there's a memory leak in MATLAB code
        if set_speed is None:
            self.set_speed = random.randint(5, 35)
        else:
            assert 2 <= set_speed <= 40, "set speed must be between [2, 40]"
            self.set_speed = set_speed

        if self.model is None:
            if self.pid:
                self.model = pid_model(self.v2x,  self.automatic_control, self.ignore_veh, self.avg_lead_dist, self.num_intersections)
            else:
                self.model = rl_model(self.v2x, self.automatic_control, self.avg_lead_dist, self.num_intersections)

        obs = np.array(self.model.reset(drive_trace, SOC, time_gap, self.set_speed))
        self.end_time = end_time
        return obs


    def step(self, action: np.ndarray) -> np.ndarray:
        """
        Step the blazer model simulation. Must call reset first.
        :param action: np.ndarray (3,) (1-dimensional)
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
        assert len(action.shape) == 1, "Action must be a 1-dimensional array"
        action = action.astype(np.double)
        obs = np.array(self.model.step(action))

        return obs


    def accel_to_power(self, accel: float) -> float:
        """
        Converts a given acceleration to power. This function is dependent on
        the vehicle's current state (grade and velocity specifically). 
        """
        return self.model.accel_to_power(accel)


    def __len__(self) -> int:
        """
        Number of steps in the simulation (if the simulation is 600 seconds long, this will be (600 / step_size)

        :return: num_steps (int)
        """
        if self.end_time is not None:
            return min(int(self.end_time / self.step_size()), self.model.num_steps())
        else:
            return self.model.num_steps()


    def step_size(self) -> float:
        """
        Size of one step, in seconds. In other words, there are (1/step_size) in 1 seconds.
        This should never change.

        :return: step_size (float)
        """
        return self.model.step_size()


    def debug(self) -> None:
        """
        Prints all of the model parameters. Not really usefuel unless you want to
        go into the matlab code...
        """
        self.model.debug()
        print()


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
        if engine_speed is None:
            engine_speed = self.model.engine_speed()

        ret = self.engine_interp(engine_power, engine_speed)
        if engine_speed == 0 and engine_power < 1000:
            ## engine CAN produce torque at 0 speed, should not return nan here
            return 0
        return ret


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
        if motor_speed is None:
            motor_speed = self.model.motor_speed()

        if motor_power < 0: 
            motor_power *= -1 ## assume motor is equally efficient as generator

        ret = self.motor_interp(motor_power, motor_speed)
        if motor_speed <= 100 and motor_power < 1000:
            ## motor CAN produce torque at 0 speed, should not return nan here
            return 50
        if motor_power < 8_000 and -10_000 < motor_speed < 10_00:
            return 50
        return ret

    def change_set_speed(self, new_speed):
        """
        Change the set speed within the model. The new set speed should be
        on the closed interval [0,35] m/s. The new set speed is in effect on the
        next call of the step function. You do not need to call this function
        during or immediately after reset (setting the initial set speed is
        handled for you)
        """
        self.set_speed = new_speed
        self.model.set_speed(new_speed)

    
    def v2x_data(self):
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
        if not self.v2x:
            raise ValueError("No V2X data available when v2x is not enabled...")
        return self.model.light_data()

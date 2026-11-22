import gym
import numpy as np
import random
from pysimlink import Model
from blazer_model.utils.dt_data import DT_LENGTHS, AVAIL_DTS
import os
from scipy.interpolate import CloughTocher2DInterpolator
import pickle


class BlazerEnv(gym.Env):
    DT = AVAIL_DTS
    SOC_MIN = 10
    SOC_MAX = 90
    TG_MIN = 1.5
    TG_MAX = 5
    SS_MIN = 5
    SS_MAX = 38
    model: "Model"
    count: 0
    tg: 0
    tfinal: -1
    cur_dt: 0

    def __init__(self, *args, **kwargs):
        data_path = os.path.join(os.path.dirname(__file__),"..", "data", "data.pkl")
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

        self.setup_model(*args, **kwargs)
        self.setup_space()

    def __len__(self):
        # Do this in a strange order so step_size gets evaluated first.
        return int((1/self.step_size()) * self.tfinal)

    def accel_to_pwr(self, accel, speed, grade=0):
        """
        Convert acceleration to power

        :param accel: accelaration in m/s^2
        :param speed: speed in m/s
        :param grade: grade in gradians
        :return: Power (in Watts) to achieve provided acceleration
        """
        mass = 2026     # mass of vehicle in kilograms
        gravity = 9.81  # a of gravity in m/s^2
        Crr = 118.55    # rolling resistance coefficient
        rho = 1.2       # density of air
        Cd = .379       # aerodynamic drag coefficient
        Af = 3.535790981

        force = Crr + mass * accel + (speed**2) * .5 * rho * Cd * Af + mass * gravity * (grade/100.0);
        power = force * speed

        return power

    def transform_action(self, action):
        """
        Transform the action to [app, bpp]
        """
        return action


    def setup_space(self):
        raise NotImplementedError

    def setup_model(self, *args, **kwargs):
        raise NotImplementedError

    def model_reset_callback(self):
        pass

    def change_params(self, action):
        raise NotImplementedError

    def reward(self, state, action):
        raise NotImplementedError

    def get_found_pwr(self, speed, grade):
        raise NotImplementedError

    def reset(self, *, drive_trace=None, SOC=None, time_gap=None, stop_time=None, set_speed=None, seed=None):
        """
        :param drive_trace: Name of the drive trace to use. See AVAIL_DTS for the list of supported drive traces
        :param SOC: state of charge of the HV battery (0-100)
        :param time_gap: how far in seconds of a gap to keep from the car in front
        :param stop_time: Length of time to run the simulation. Leave as None to run the entire drive trace.
        :param set_speed: Set speed for ACC. Go *up to* this speed.
        :param seed: Seed for the random number generator
        :return:
        """
        random.seed(seed)
        if drive_trace is not None:
            assert drive_trace in self.DT, "Unknown drive trace"
            dt = self.DT.index(drive_trace)
        else:
            dt = random.randrange(0, len(self.DT))
        self.cur_dt = dt

        if SOC is not None:
            assert 0 < SOC < 100, "SOC must be within (0,100)"
            soc = round(SOC,0)
        else:
            soc = round(random.uniform(self.SOC_MIN, self.SOC_MAX), 0)

        if time_gap is not None:
            assert self.TG_MIN <= time_gap <= self.TG_MAX, f"Time gap must be on the interval [{self.TG_MIN}, {self.TG_MAX}]"
            self.tg = round(time_gap, 1)
        else:
            self.tg = round(random.uniform(self.TG_MIN, self.TG_MAX), 1)

        if set_speed is not None:
            assert self.SS_MIN <= set_speed <= self.SS_MAX
            ss = round(set_speed, 0)
        else:
            ss = round(random.randrange(self.SS_MIN, self.SS_MAX), 0)

        self.model.reset()
        self.model.set_block_param("Blazer_Plant_Model/DT_SELECTOR", param="Value", model_name="Blazer_MiL_Model/Model1", value=dt+1)
        self.model.set_block_param("BattHev/SOC_INIT_DEV", param="Gain", model_name="Blazer_Plant_Model/GM Blazer/Electric Plant/Battery/Battery", value=soc/100)
        self.model.set_block_param("HSC_Model/ACC Controller/SetSpdMPS", param="Value", model_name="Blazer_MiL_Model/Model", value=ss)

        if stop_time is not None:
            self.tfinal = min(DT_LENGTHS[dt], stop_time)
        else:
            self.tfinal = DT_LENGTHS[dt]

        self.model_reset_callback()
        self.model.step(2)  # Take 2 steps to get through the memory blocks

        state = self._get_state()

        self.count = 0
        return state

    def done(self, state):
        return self.count >= self.tfinal / (self.model.step_size * 100)

    def step(self, action):
        assert not np.any(np.isnan(action)), "actions cannot contain nan's"
        action = self.transform_action(action)
        action = action.astype(np.double)
        self.count += 1
        state = self._get_state()
        self.change_params(action)
        self.model.step(100)
        r, info = self.reward(state, action)
        done = self.done(state)

        return state, r, done, info

    def _get_state(self) -> np.ndarray:
        """
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

         16: electric fuel flow (L/hr) [we won't have fuel flow in the car]
         17: e10 fuel flow (L/hr) [Use this for your reward function *only*]
         18: real braking power (W) [This will be the same as the action for RL mode]
        """

        plant_outputs = self.model.get_signal("Blazer_MiL_Model/Subsystem3/Bus Creator", model_name="Blazer_MiL_Model", )
        hsc_outputs = self.model.get_signal("Blazer_MiL_Model/Memory1", model_name="Blazer_MiL_Model")

        ret = np.empty((19,))
        ret[0] = plant_outputs.VehSpd / 3.6 # kph -> m/s
        ss = hsc_outputs.SetSpeedMs
        ret[1] = ss - ret[0]
        ret[2] = ret[0] * self.tg
        ret[3] = hsc_outputs.RelDist
        ret[4] = (-ret[3]) - ret[2]
        ret[5] = self.model.get_signal("HSC_Model/ACC Controller/HostPerceptionModel/Switch", model_name="Blazer_MiL_Model/Model", sig_name="TargetRelSpd")
        ret[6] = hsc_outputs.DesEngPwr
        ret[7] = hsc_outputs.DesElecPwr
        ret[8] = hsc_outputs.EngAxleTrqDmd
        ret[9] = hsc_outputs.BattPwrDischrgLmt
        ret[10] = hsc_outputs.BattPwrChrgLmt
        ret[11] = self.model.get_signal("HSC_Model/ACC Controller/HostPerceptionModel/jerkDeriv/Diff", model_name="Blazer_MiL_Model/Model")
        ret[11] = min(ret[11], 100) ## Can be eroneous
        ret[11] = max(ret[11], -100)
        ret[12] = plant_outputs.grade
        ret[13] = plant_outputs.SOC
        ret[14] = plant_outputs.MotorSpd
        ret[15] = plant_outputs.EngSpd
        ret[16] = self.model.get_signal("Blazer_Plant_Model/Visualization/Performance Calculations/California Phase II Gasoline density kg//m^3", model_name="Blazer_MiL_Model/Model1", sig_name="BattFuel")
        ret[17] = self.model.get_signal("Blazer_Plant_Model/Visualization/Performance Calculations/m^3 to L", model_name="Blazer_MiL_Model/Model1")
        ret[18] = self.get_found_pwr(ret[0], ret[12])

        ret = np.nan_to_num(ret)

        return ret

    def step_size(self):
        return self.model.step_size * 10

    def motor_eff(self, motor_power, motor_speed):
        """
        Return the efficiency of the motor at a certain power. This function is
        dependent on the motor speed, leaving motor_speed as None will use the
        current motor speed in the simulation. This will return -inf if the motor
        is not capable of producing the commanded power at the specified speed.

        :param motor_power (float): power(in Watts) to poll the efficiency map with
        :param motor_speed (float): speed(RPM) to poll the efficiency map with.
        :return: efficiency (0-100)
        """
        if motor_power < 0:
            motor_power *= -1 ## assume motor is equally efficient as generator

        ret = self.motor_interp(motor_power, motor_speed)
        if motor_speed <= 100 and motor_power < 1000:
            ## motor CAN produce torque at 0 speed, should not return nan here
            return 50
        if motor_power < 8_000 and -10_000 < motor_speed < 10_00:
            return 50
        return ret

    def eng_eff(self, engine_power, engine_speed):
        """
        Return the efficiency of the engine at a certain power. This function is
        dependent on the engine speed, leaving engine_speed as None will use the
        current engine speed in the simulation. This will return -inf if the engine
        is not capable of producing the commanded power at the specified speed.

        :param engine_power (float): power(in Watts) to poll the efficiency map with
        :param engine_speed (float): speed(RPM) to poll the efficiency map with.
        :return: efficiency (0-100)
        """
        if engine_speed is None:
            engine_speed = self.model.engine_speed()

        ret = self.engine_interp(engine_power, engine_speed)
        if engine_speed == 0 and engine_power < 1000:
            ## engine CAN produce torque at 0 speed, should not return nan here
            return 0
        return ret

    def change_set_speed(self, speed: float):
        """
        Change the set speed within the model. The new set speed should be
        on the closed interval [0,35] m/s. The new set speed is in effect on the
        next call of the step function. You do not need to call this function
        during or immediately after reset (setting the initial set speed is
        handled for you)
        """
        assert 0 <= speed <= 35, "speed must be within [0,35]"
        self.model.set_block_param("HSC_Model/ACC Controller/SetSpdMPS", param="Value",
                                   model_name="Blazer_MiL_Model/Model", value=speed)

import gym
import numpy as np
from Blazer_Model.Model import Model
from Blazer_Model.reward import master_reward
import random

class BlazerGymEnvironment(gym.Env):
    DT = ["US06", "UDDS", "HWFET", "IM240", "NYCC", "SC03", "HUDDS"]
    SOC_MIN = 10
    SOC_MAX = 90
    TG_MIN = 1.5
    TG_MAX = 5

    def __init__(self):
        low = np.array([0, -50_000, -150_000], dtype=np.float32)
        high = np.array([250_000, 100_000, 0], dtype=np.float32)
        random.seed(None)
        self.model = Model()
        self.setup_space()
        self.action_space = gym.spaces.Box(low=low, high=high, shape=(3,))
    
    def setup_model(self):
        self.model = Model()

    def setup_space(self):
        """
        Initialize the observation space. This environment uses the all but the last
        two variables from the state (fuel flow rate and battery current), and adds
        a new variable (the switching condition). This is separate so you can override it. 
        """
        self.observation_space = gym.spaces.Box(low=-np.inf, high=np.inf, shape=(17,))

    @staticmethod
    def bool_condition(state_vec):
        speed_buff = state_vec[0] * 0.2
        dec = np.abs(state_vec[1]) < speed_buff
        if dec and state_vec[3] < 0: 
            return 1
        else:
            return 0

    def reset(self):
        dt= random.choice(self.DT) 
        soc = round(random.uniform(self.SOC_MIN, self.SOC_MAX), 0)
        tg = round(random.uniform(self.TG_MIN, self.TG_MAX), 1)
        state = self.model.reset(drive_trace=dt, SOC=soc, time_gap=tg)

        self.count = 0
        obs = self._fix_nan(state)

        obs = np.concatenate((obs[:-2], [BlazerGymEnvironment.bool_condition(obs)]))

        return obs

    def step(self, action):
        if np.any(np.isnan(action)):
            print("action contains nan's")
            nanIdx = np.isnan(action)
            action[nanIdx] = 0
        action = action.astype(np.double)
        ## prevent nans from happening if the rl model asks for invalid power
        engine_eff, motor_eff = self.model.engine_efficiency(action[0]), self.model.motor_efficiency(action[1])
        orig_action = np.copy(action)
        inf_mask = [np.isinf(engine_eff), np.isinf(motor_eff), 0]
        action[inf_mask] = 0
        self.count += 1

        obs = self.model.step(action)

        done = False
        if np.any(np.isnan(obs)):
            raise Exception(f"Bad environment?: {obs}")

        obs = self._fix_nan(obs)
        done = self._is_done(obs)

        reward = self._reward(obs, orig_action)
        obs = self.filter_obs(obs)
        return obs, reward, done, self.lastInfo

    def _filter_obs(self, obs):
        return np.concatenate((obs[:-2], [MyEnv.bool_condition(obs)]))

    def _is_done(self, obs):
        """
        Determine if this should end the episode in this environment. This
        environment ends if we can't keep up with the set speed or we collide 
        or the drive trace ends
        """
        done = False
        if self.count >= len(self.model):
            done = True

        if obs[3] < -15: # we've colided with the car in front...by a lot
            done = True

        if (obs[3] > obs[2]+50) and obs[1] > 6:
            ## We're not keeping up and there's a big difference in 
            #  the ego-speed and set-speed. 
            done = True

        return done

    def _reward(self, obs, act):
        reward, info = master_reward(obs, act, self.model)

        self.lastInfo = info
        return reward


    def _fix_nan(self, obs):
        nanIdx = np.isnan(obs)
        obs[nanIdx] = 0
        return obs


class SetSpeedBlazerEnv(BlazerGymEnvironment):
    obs_filter = [
        True,   # ego_speed
        True,   # set_speed_error
        False,  # desired_headway
        False,  # following_veh_dist
        False,  # headway_error
        False,  # following_veh_spd
        True,   # real_engine_power
        True,   # real_motor_power
        True,   # max_engine_power
        True,   # max_motor_power
        True,   # min_motor_power
        True,   # jerk
        True,   # road_grade
        True,   # soc
        True,   # motor RPM
        True,   # engine RPM
        False,  # elec. equiv. fuel flow rate
        False,  # fuel flow rate
        False,  # real braking power
    ]
    def _is_done(self, obs):
        return self.count >= len(self.model)

    def filter_obs(self, obs):
        return obs[SetSpeedBlazerEnv.obs_filter]

    def setup_space(self):
        self.observation_space = gym.spaces.Box(low=-np.inf, high=np.inf, shape=(12,))

    def setup_model(self):
        self.model = Model(veh_ignore=True)


class PIDBlazerEnv(BlazerGymEnvironment):
    """
    Actions will do nothing in this environment...
    """
    obs_filter = [
        True,   # ego_speed
        True,   # set_speed_error
        False,  # desired_headway
        False,  # following_veh_dist
        False,  # headway_error
        False,  # following_veh_spd
        True,   # real_engine_power
        True,   # real_motor_power
        True,   # max_engine_power
        True,   # max_motor_power
        True,   # min_motor_power
        True,   # jerk
        True,   # road_grade
        True,   # soc
        True,   # motor RPM
        True,   # engine RPM
        False,  # elec. equiv. fuel flow rate
        False,  # fuel flow rate
        True,  # real braking power
    ]
    def _is_done(self, obs):
        return self.count >= len(self.model)

    def filter_obs(self, obs):
        return obs[SetSpeedBlazerEnv.obs_filter]

    def setup_space(self):
        self.observation_space = gym.spaces.Box(low=-np.inf, high=np.inf, shape=(12,))

    def setup_model(self):
        self.model = Model(veh_ignore=True, pid=True)

import os
import numpy as np
import gym
from pysimlink import Model
from blazer_model.envs.blazer_base import BlazerEnv
from blazer_model.utils.reward_2021 import master_reward
import numpy as np


class BaselineEnv(BlazerEnv):
    def setup_space(self):
        low = np.array([0, 0], dtype=np.float32)
        high = np.array([1, 1], dtype=np.float32)
        self.observation_space = gym.spaces.Box(low=-np.inf, high=np.inf, shape=(19,))
        self.action_space = gym.spaces.Box(low=low, high=high, shape=(2,))

    def setup_model(self, *args, **kwargs):
        self.model = Model("Blazer_MiL_Model", os.path.join(os.path.dirname(__file__), "../models", "lookup_model.zip"), *args, **kwargs)#, force_rebuild=True)

    def change_params(self, action):
        pass

    def get_found_pwr(self, speed, grade):
        accel = self.model.get_signal("HSC_Model/ACC Controller/ACC Classical/ACC Lookup", model_name="Blazer_MiL_Model/Model", sig_name="EBCM_Decel")
        pwr = self.accel_to_pwr(accel, speed, grade)
        return pwr

    def reward(self, state, action):
        reward, info = master_reward(state, action, self)
        return reward, info

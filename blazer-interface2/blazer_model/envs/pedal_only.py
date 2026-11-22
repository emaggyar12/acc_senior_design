import os
import numpy as np
import gym
from pysimlink import Model
from blazer_model.envs.blazer_base import BlazerEnv
from blazer_model.utils.reward_2021 import master_reward
import numpy as np


class PedalEnv(BlazerEnv):
    def setup_space(self):
        low = np.array([0, 0], dtype=np.float32)
        high = np.array([1, 1], dtype=np.float32)
        self.observation_space = gym.spaces.Box(low=-np.inf, high=np.inf, shape=(19,))
        self.action_space = gym.spaces.Box(low=low, high=high, shape=(2,))

    def setup_model(self, *args, **kwargs):
        self.model = Model("Blazer_MiL_Model", os.path.join(os.path.dirname(__file__), "../models", "ext_model.zip"), *args, **kwargs)#, force_rebuild=True)

    def change_params(self, action):
        self.model.set_block_param("HSC_Model/ACC Controller/ACC Classical/ACC pedals/APP", param="Value", model_name="Blazer_MiL_Model/Model", value=action[0])
        self.model.set_block_param("HSC_Model/ACC Controller/ACC Classical/ACC pedals/BPP", param="Value", model_name="Blazer_MiL_Model/Model", value=action[1])

    def model_reset_callback(self):
        pass

    def reward(self, state, action):
        r, i = master_reward(state, action, self)
        return 0, i

    def get_found_pwr(self, speed, grade):
        return 0

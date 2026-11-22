import gymnasium as gym
import numpy as np
from gymnasium import spaces

from Blazer_Model.Model import Model
from Blazer_Model.reward import master_reward

# Number of values in the state vector returned by Model.reset / Model.step
# (see Model.step for what each index means; 19-23 are V2X and are zero
# unless the model is created with v2x=True).
STATE_SIZE = 24


def _make_filter(*indices):
    """Build a boolean mask over the full state vector that keeps `indices`."""
    mask = np.zeros(STATE_SIZE, dtype=bool)
    mask[list(indices)] = True
    return mask


class BlazerGymEnvironment(gym.Env):
    """
    Gymnasium environment wrapping the Blazer ACC model.

    Action (3,): engine power (W), motor power (W), foundation brake power (W).

    Observation (17,): state indices 0-15 (speeds, headway, powers, jerk,
    grade, SOC, motor/engine RPM) plus a switching-condition flag. Fuel flow
    (16, 17) is left out on purpose; it is used only by the reward function.

    Episodes terminate on a collision or when the ego vehicle falls far behind,
    and are truncated when the drive trace ends.
    """

    metadata = {"render_modes": []}

    DT = ["US06", "UDDS", "HWFET", "IM240", "NYCC", "SC03", "HUDDS"]
    SOC_MIN = 10
    SOC_MAX = 90
    TG_MIN = 1.5
    TG_MAX = 5
    SET_SPEED_MIN = 5
    SET_SPEED_MAX = 35

    obs_filter = _make_filter(*range(16))

    def __init__(self):
        super().__init__()
        low = np.array([0, -50_000, -150_000], dtype=np.float32)
        high = np.array([250_000, 100_000, 0], dtype=np.float32)
        self.action_space = spaces.Box(low=low, high=high, dtype=np.float32)
        self.setup_model()
        self.setup_space()
        self.count = 0

    def setup_model(self):
        """Create the underlying model. Subclasses override this."""
        self.model = Model()

    def setup_space(self):
        """Initialize the observation space. Subclasses override this."""
        self.observation_space = spaces.Box(
            low=-np.inf, high=np.inf, shape=(17,), dtype=np.float32
        )

    @staticmethod
    def bool_condition(state_vec):
        speed_buff = state_vec[0] * 0.2
        dec = np.abs(state_vec[1]) < speed_buff
        if dec and state_vec[3] < 0:
            return 1
        else:
            return 0

    def reset(self, *, seed=None, options=None):
        """
        Start a new episode with a random drive trace, SOC, time gap and set
        speed. Pass `seed` for reproducible episodes. Any of `drive_trace`,
        `SOC`, `time_gap` or `set_speed` can be fixed through `options`.
        """
        super().reset(seed=seed)
        options = options or {}

        dt = options.get("drive_trace", self.np_random.choice(self.DT))
        soc = options.get("SOC", round(self.np_random.uniform(self.SOC_MIN, self.SOC_MAX), 0))
        tg = options.get("time_gap", round(self.np_random.uniform(self.TG_MIN, self.TG_MAX), 1))
        set_speed = options.get(
            "set_speed",
            int(self.np_random.integers(self.SET_SPEED_MIN, self.SET_SPEED_MAX + 1)),
        )

        state = self.model.reset(
            drive_trace=str(dt), SOC=float(soc), time_gap=float(tg), set_speed=set_speed
        )
        self.count = 0
        state = self._fix_nan(state)

        info = {"drive_trace": str(dt), "SOC": float(soc), "time_gap": float(tg),
                "set_speed": set_speed}
        return self.filter_obs(state), info

    def step(self, action):
        action = np.array(action, dtype=np.double)  # copy; never mutate the caller's array
        if np.any(np.isnan(action)):
            print("action contains nan's")
            action[np.isnan(action)] = 0
        orig_action = np.copy(action)

        ## prevent nans from happening if the rl model asks for invalid power
        engine_eff = self.model.engine_efficiency(action[0])
        motor_eff = self.model.motor_efficiency(action[1])
        inf_mask = np.array([np.any(np.isinf(engine_eff)), np.any(np.isinf(motor_eff)), False])
        action[inf_mask] = 0
        self.count += 1

        state = self.model.step(action)
        if np.any(np.isnan(state)):
            raise Exception(f"Bad environment?: {state}")

        terminated = self._is_terminated(state)
        truncated = self._is_truncated()
        reward, info = master_reward(state, orig_action, self.model)

        return self.filter_obs(state), float(reward), terminated, truncated, info

    def filter_obs(self, state):
        """Convert a full state vector into this environment's observation."""
        obs = state[self.obs_filter]
        obs = np.concatenate((obs, [BlazerGymEnvironment.bool_condition(state)]))
        return obs.astype(np.float32)

    def _is_terminated(self, state):
        """
        End the episode early if we collide with the lead vehicle or can't
        keep up with the set speed.
        """
        if state[3] < -15:  # we've colided with the car in front...by a lot
            return True

        if (state[3] > state[2] + 50) and state[1] > 6:
            ## We're not keeping up and there's a big difference in
            #  the ego-speed and set-speed.
            return True

        return False

    def _is_truncated(self):
        """The drive trace has ended."""
        return self.count >= len(self.model)

    def _fix_nan(self, state):
        state[np.isnan(state)] = 0
        return state


class SetSpeedBlazerEnv(BlazerGymEnvironment):
    """Only tracks the set speed; the lead vehicle is ignored."""

    obs_filter = _make_filter(
        0,   # ego_speed
        1,   # set_speed_error
        6,   # real_engine_power
        7,   # real_motor_power
        8,   # max_engine_power
        9,   # max_motor_power
        10,  # min_motor_power
        11,  # jerk
        12,  # road_grade
        13,  # soc
        14,  # motor RPM
        15,  # engine RPM
    )

    def _is_terminated(self, state):
        return False

    def filter_obs(self, state):
        return state[self.obs_filter].astype(np.float32)

    def setup_space(self):
        self.observation_space = spaces.Box(
            low=-np.inf, high=np.inf, shape=(int(self.obs_filter.sum()),), dtype=np.float32
        )

    def setup_model(self):
        self.model = Model(ignore_veh=True)


class PIDBlazerEnv(SetSpeedBlazerEnv):
    """
    Actions will do nothing in this environment; the built-in PID drives.
    """

    obs_filter = _make_filter(0, 1, *range(6, 16), 18)  # adds real braking power

    def setup_model(self):
        self.model = Model(ignore_veh=True, pid=True)

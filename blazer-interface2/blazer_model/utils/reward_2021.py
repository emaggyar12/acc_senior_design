import numpy as np
MIN_VAL = -1


def master_reward(state_vec, action_vec, model):
    HI = headway_intrusion_reward(state_vec)
    HD = headway_departure_reward(state_vec)
    SS = set_speed_reward(state_vec)
    JP = jerk_penalty(state_vec)
    # EF = eff_reward(state_vec, action_vec, model)
    EF = 0
    FU = fuel_reward(state_vec)
    SO = soc_reward(state_vec)
    RW = reaction_reward(state_vec, action_vec)

    speed_buff = state_vec[0] * 0.2
    HD_ADJ = HD
    SS_ADJ = SS
    if np.abs(state_vec[1]) < speed_buff and state_vec[3] < 0:
        HD_ADJ = 0
    else:
        SS_ADJ = 0
        ## don't penalize for headway departure if we can't keep up because of
        #  the set speed. But also, don't slow down randomly

        ## Don't penalize the set speed if we can't reach because there's a
        #  vehicle in front AND we're not speeding

    tot = 10 * HI + 8 * HD_ADJ + 8 * SS_ADJ + 0 * JP + 0 * SO + 0 * FU + 0 * EF + 2 * RW
    reward_info = {
            "intrusion"    : HI,
            "departure"    : HD,
            "departure_adj": HD_ADJ,
            "set_speed"    : SS,
            "set_speed_adj": SS_ADJ,
            "jerk"         : JP,
            "eff"          : EF,
            "fuel"         : FU,
            "soc"          : SO,
            "rw"           : RW,
            "total"        : tot
    }
    if np.isnan(tot):
        print(f"nan: {reward_info}")
        raise Exception("isNan")
    return tot, reward_info


# def testing_reward(state_vec):
#     return (state_vec[0] - state_vec[1]) ** 2

def farthest_follow_dist(speed_mph):
    if speed_mph > 20: return 100
    return -0.2 * (20 - speed_mph) ** 2 + 100  # Why Argonne...


def closest_follow_dist(speed_mph):
    return 5 + 4 * (speed_mph ** 0.45)


def mps_to_mph(speed_mph):
    return speed_mph * 2.237


def headway_intrusion_reward(state_vec):
    desired_headway = state_vec[2]
    dist_err = state_vec[4]
    speed_mps = state_vec[0]
    speed_mph = mps_to_mph(speed_mps)

    if dist_err == 0: return 1
    if dist_err < 0: return 0  ## this is intrusion only

    maxDiff = -closest_follow_dist(speed_mph) + desired_headway
    reward = lambda max_diff, act_diff: -2 * np.tanh((act_diff) / max_diff) + 1

    pos_reward = reward(maxDiff, dist_err)

    return pos_reward


def headway_departure_reward(state_vec):
    desired_headway = state_vec[2]
    dist_err = state_vec[4]
    speed_mps = state_vec[0]
    speed_mph = mps_to_mph(speed_mps)

    if -dist_err > farthest_follow_dist(speed_mph):
        return MIN_VAL

    if dist_err > 0: return 0

    reward = lambda max_diff, act_diff: np.tanh(-1 / (max_diff / 2) * -act_diff) + 1

    max_diff = farthest_follow_dist(speed_mph) - desired_headway
    pos_reward = reward(max_diff, dist_err)

    return pos_reward


def set_speed_reward(state_vec):
    err = state_vec[1]
    # max_error = max(ego_speed, set_speed, 0) ## they shouldn't be <0..I think?
    max_error = 1.25

    pos_reward = lambda x, y: -((x + y) * (x - y)) / (y ** 2)

    return pos_reward(err, max_error)


def jerk_penalty(state_vec):
    jerk = np.abs(state_vec[11])
    max_jerk = 5
    acceptable = 2

    coeff = 1
    if jerk > acceptable: coeff = -1
    if jerk > max_jerk: return MIN_VAL

    reward = lambda max_val, act_jerk: -1 * (1 - np.exp(-4 * act_jerk / max_val))

    penalty = reward(acceptable, jerk)
    return penalty


def eff_reward(state_vec, action_vec, model):
    ## reward as function of action is still an MDP right?
    motor_speed = state_vec[14]
    engine_speed = state_vec[15]

    engine_power = action_vec[0]
    motor_power = action_vec[1]

    motor_eff = model.motor_efficiency(motor_power, motor_speed) / 100.0
    engine_eff = model.engine_efficiency(engine_power, engine_speed) / 100.0

    if np.all(np.isinf([engine_eff, motor_eff])):
        return MIN_VAL
    if engine_power + motor_power > 10 and action_vec[2] < -10:
        ## don't brake and accelerate at the same time
        return MIN_VAL

    mot_eff = 0 if np.isinf(motor_eff) else motor_eff
    eng_eff = 0 if np.isinf(engine_eff) else engine_eff
    ## penalize bad power requests

    reward = (mot_eff ** 2 + eng_eff ** 4) / 2

    return reward


def fuel_reward(state_vec):
    motor_ff = state_vec[16]
    engine_ff = state_vec[17]

    tot_fuel_flow = motor_ff + engine_ff

    max_flow = .005

    reward = lambda max_val, act_val: np.arctan(-(1 / max_val) * act_val) + 1

    return reward(max_flow, tot_fuel_flow)


def soc_reward(state_vec):
    soc = state_vec[13] / 100.0
    pos_reward = (-1 * 160_000 * ((soc - 0.30) ** 3) * (soc - 0.90)) / 2187
    return pos_reward


def reaction_reward(state_vec, action_vec):
    last_engine = state_vec[6]
    last_motor = state_vec[7]
    next_engine = action_vec[0]
    next_motor = action_vec[1]
    max_diff = 20_000

    diff_m = np.abs(next_motor - last_motor)
    diff_e = np.abs(next_engine - last_engine)

    def rew(diff):
        a = np.power(max_diff, 3)
        b = np.power(diff, 3)
        c = a - b
        ## Numpy doesn't like to deal with fractional powers of negative numbers.
        #  Even if the result is not an imaginary number
        rt = np.sign(c) * (np.abs(c)) ** (1 / 3)
        return rt / max_diff

    return (rew(diff_m) + rew(diff_e)) / 2



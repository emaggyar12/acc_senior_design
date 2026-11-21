import numpy as np
from Blazer_Model.Model import Model

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

"""

MIN_VAL = -1

def master_reward(state_vec, action_vec, model):
    HI = headway_intrusion_reward(state_vec)
    HD = headway_departure_reward(state_vec)
    SS = set_speed_reward(state_vec)
    JP = jerk_penalty(state_vec)
    EF = eff_reward(state_vec, action_vec, model)
    FU = fuel_reward(state_vec)
    SO = soc_reward(state_vec)
    RW = reaction_reward(state_vec, action_vec)

    SS_ADJ = SS
    if np.abs(state_vec[1]) > 1.25 and state_vec[4] > -5:
        SS_ADJ = 1

        ## don't penalize for headway departure if we can't keep up because of 
        #  the set speed. But also, don't slow down randomly

        ## Don't penalize the set speed if we can't reach because there's a
        #  vehicle in front AND we're not speeding

    tot = 4*HI + 2*SS_ADJ + 0*JP + 1*SO + 0*FU + 0*EF + 1*RW
    reward_info = {
        "intrusion": HI,
#        "departure": HD,
        #"departure_adj": HD_ADJ,
        "set_speed": SS,
        "set_speed_adj": SS_ADJ,
        "jerk": JP,
        "eff": EF,
        "fuel": FU,
        "soc": SO,
        "rw": RW,
        "total": tot
    }
    if np.isnan(tot):
        print(f"nan: {reward_info}")
        raise Exception("isNan")
    return tot, reward_info

# def testing_reward(state_vec):
#     return (state_vec[0] - state_vec[1]) ** 2

def farthest_follow_dist(speed_mph):
    if speed_mph > 20: return 100
    return -0.2 * (20 - speed_mph)**2 + 100 # Why Argonne...

def closest_follow_dist(speed_mph):
    return 5+4*(speed_mph**0.45)

def mps_to_mph(speed_mph):
    return speed_mph * 2.237

def headway_intrusion_reward(state_vec):
    desired_headway = state_vec[2]
    dist_err = state_vec[4]
    speed_mps = state_vec[0]
    speed_mph = mps_to_mph(speed_mps)

    if dist_err == 0: return 1
    if dist_err < 0: return 0 ## this is intrusion only
    
    maxDiff = -closest_follow_dist(speed_mph) + desired_headway
    reward = lambda max_diff, act_diff: -(act_diff-max_diff)*(act_diff-max_diff)/max_diff**2
    #reward = lambda max_diff, act_diff: -2*np.tanh((act_diff)/max_diff)+1

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

    reward = lambda max_diff, act_diff: np.tanh(-1 / (max_diff/2) * -act_diff) + 1

    max_diff = farthest_follow_dist(speed_mph) - desired_headway
    pos_reward = reward(max_diff, dist_err)

    return pos_reward

def set_speed_reward(state_vec):
    err = state_vec[1]
    #max_error = max(ego_speed, set_speed, 0) ## they shouldn't be <0..I think?
    max_error = 1.25

    pos_reward = lambda x, y: max(-((x+y)*(x-y))/(y**2), -1)

    return pos_reward(err, max_error)


def jerk_penalty(state_vec):
    jerk = np.abs(state_vec[11])
    max_jerk = 0.5
    acceptable = 0.2

    coeff = 1
    if jerk > acceptable: coeff = -1
    if jerk > max_jerk: return MIN_VAL

    reward = lambda max_val, act_jerk: -1 * (1 - np.exp(-11 * act_jerk / max_val +0.693)) ## 0.693~=ln(2)

    penalty = reward(acceptable, jerk)
    return penalty

def eff_reward(state_vec, action_vec, model: Model):
    motor_speed = state_vec[14]
    engine_speed = state_vec[15]

    engine_power = action_vec[0]
    motor_power = action_vec[1]

    motor_eff = model.motor_efficiency(motor_power, motor_speed)/100.0
    engine_eff = model.engine_efficiency(engine_power, engine_speed)/100.0


    if np.all(np.isinf([engine_eff, motor_eff])): 
        return MIN_VAL
    if engine_power + motor_power > 10 and action_vec[2] < -10:
        ## don't brake and accelerate at the same time
        return MIN_VAL

    mot_eff = 0 if np.isinf(motor_eff) else motor_eff
    eng_eff = 0 if np.isinf(engine_eff) else engine_eff
    ## penalize bad power requests

    reward = (mot_eff**2 + eng_eff**4)/2

    return reward


def fuel_reward(state_vec):
    motor_ff = state_vec[16]
    engine_ff = state_vec[17]

    tot_fuel_flow = motor_ff + engine_ff

    max_flow = .005

    reward = lambda max_val, act_val: np.arctan(-(1/max_val)*act_val)+1

    return reward(max_flow, tot_fuel_flow)

def soc_reward(state_vec):
    soc = state_vec[13]/100.0
    pos_reward = (-1 * 160_000 * ((soc - 0.30)**3) * (soc-0.90)) / 2187
    return max(pos_reward, -1)

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
        c = a-b
        ## Numpy doesn't like to deal with fractional powers of negative numbers.
        #  Even if the result is not an imaginary number
        rt = np.sign(c) * (np.abs(c)) ** (1 / 3)
        return rt/max_diff

    return max((rew(diff_m)+rew(diff_e))/2, -1)


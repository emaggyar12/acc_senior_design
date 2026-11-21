import numpy as np
from data import *
from matplotlib import pyplot as plt, cm
import plotly.graph_objects as go
import os
import pickle
from scipy.interpolate import CloughTocher2DInterpolator

def main():
    min_eng_fuel_cost = np.min(eng_eff)
    max_eng_fuel_cost = np.max(eng_eff)
    a = (eng_eff - min_eng_fuel_cost) / (max_eng_fuel_cost - min_eng_fuel_cost)
    adj_eng_eff = (1 - a)*100

    mot_spd_rps = mot_spd * np.pi/30
    eng_spd_rps = eng_spd * np.pi/30

    mot_powers = np.matmul(mot_spd_rps.reshape((-1,1)), mot_trq.reshape((1,-1)))

    eng_powers = np.matmul(eng_spd_rps, eng_trq.reshape((1,-1)))

    eng_spd_table = np.repeat(eng_spd, eng_powers.shape[1], axis=1)
    mot_spd_table = np.repeat(mot_spd.reshape((-1,1)), mot_powers.shape[1], axis=1)

    plot_surface(eng_powers, eng_spd_table, adj_eng_eff, "Engine Efficiency wrt Power", "graphs/eng_power.html")
    plot_surface(mot_powers, mot_spd_table, mot_eff, "Motor Efficiency wrt Power", "graphs/mot_power.html")

    motor_interp = CloughTocher2DInterpolator((mot_powers.ravel(), mot_spd_table.ravel()), mot_eff.ravel(), fill_value=np.NINF)
    eng_interp = CloughTocher2DInterpolator((eng_powers.ravel(), eng_spd_table.ravel()), adj_eng_eff.ravel(), fill_value=-1)

    power_eng_r = np.arange(0,200_000, 500)
    power_mot_r = np.arange(0,300_000, 500)

    spd_mot_r   = np.arange(0,12_000, 50)
    spd_eng_r   = np.arange(0, 8_000, 50)

    power_eng, spd_eng = np.meshgrid(power_eng_r, spd_eng_r)
    power_mot, spd_mot = np.meshgrid(power_mot_r, spd_mot_r)
    shp = power_eng.shape

    z_vals = eng_interp(power_eng.ravel(), spd_eng.ravel())
    z_vals = z_vals.reshape(shp)

    plot_surface(power_eng.reshape(shp), spd_eng.reshape(shp), z_vals, "testing", "graphs/garbo.html")

    print(power_eng.shape)

    to_write = {
        'motor': {
            'powers': mot_powers,
            'speeds': mot_spd_table,
            'effs': mot_spd_table
        },
        'engine':{
            'powers': eng_powers,
            'speeds': eng_spd_table,
            'effs': adj_eng_eff
        }
    }

    with open("data.pkl", "wb") as f:
        pickle.dump(to_write, f)

    
def plot_surface(powers, speeds, efficiency, title=None, fname=None):
    print(f"power: {powers.shape}, speeds: {speeds.shape}, eff: {efficiency.shape}")
    fig = go.Figure(data=[go.Surface(z=efficiency, x=speeds, y=powers)])
    fig.update_layout(title=title, 
        margin=dict(l=20,r=20,b=20,t=80),
        scene = dict(
        xaxis_title='Speed (RPM)',
        yaxis_title='Power (W)',
        zaxis_title='Efficiency',
        aspectratio={"x": 1, "y": 1, "z": 1}
        )
    )
    if fname is not None:
        fig.write_html(fname)
    else:
        fig.show()

def plot_standard_surf(trq, spd, eff, title=None, fname=None):
    torques = np.repeat(trq.reshape((1,-1)), eff.shape[0], axis=0)
    speeds = np.repeat(spd.reshape((1,-1)), eff.shape[1], axis=0).T

    fig = go.Figure(data=[go.Surface(z=eff, x=torques, y=speeds)])
    fig.update_layout(title=title, 
        margin=dict(l=20,r=20,b=20,t=80),
        scene = dict(
        xaxis_title='Torque (NM)',
        yaxis_title='Speed (RPM)',
        zaxis_title='Efficiency',
        aspectratio={"x": 1, "y": 1, "z": 1}
        )
    )
    if fname is not None:
        fig.write_html(fname)
    else:
        fig.show()

def pad(arr, magnitude=10000, setEqual=False):
    left = arr[:,0].reshape((-1,1))
    if setEqual:
        left = np.empty_like(left)
        left.fill(magnitude)
    else:
        left = left - magnitude

    right = arr[:,-1].reshape((-1,1))
    if setEqual:
        right = np.empty_like(right)
        right.fill(magnitude)
    else:
        right = right + magnitude

    arr = np.hstack((left, arr, right))

    top = arr[0,:].reshape((1,-1))
    if setEqual:
        top = np.empty_like(top)
        top.fill(magnitude)
    else:
        top = top - magnitude

    bot = arr[-1,:].reshape((1,-1))
    if setEqual:
        bot = np.empty_like(top)
        bot.fill(magnitude)
    else:
        bot = bot + magnitude

    arr = np.vstack((top, arr, bot))
    return arr


if __name__ == "__main__":
    main()

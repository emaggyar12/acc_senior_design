from Blazer_Model import Model
import numpy as np

def main():
    model = Model(automatic_control=True)
    model.reset()
    data = model.model_data

    ## motor test
    motor_spds = data['motor']['speeds'].ravel().reshape((-1,1))
    motor_pwrs = data['motor']['powers'].ravel().reshape((-1,1))
    motor_effs = data['motor']['effs'].ravel().reshape((-1,1))

    motor_data = np.hstack((motor_pwrs, motor_spds, motor_effs))
    motor_resu = np.empty((motor_data.shape[0], 1))
    for i, row in enumerate(motor_data):
        motor_resu[i,0] = model.motor_efficiency(row[0], row[1])

    np.testing.assert_allclose(motor_resu, motor_data[:,-1].reshape((-1,1)))


    ## engine test
    engine_spds = data['engine']['speeds'].ravel().reshape((-1,1))
    engine_pwrs = data['engine']['powers'].ravel().reshape((-1,1))
    engine_effs = data['engine']['effs'].ravel().reshape((-1,1))

    engine_data = np.hstack((engine_pwrs, engine_spds, engine_effs))
    engine_resu = np.empty((engine_data.shape[0], 1))
    for i, row in enumerate(engine_data):
        engine_resu[i,0] = model.engine_efficiency(row[0], row[1])

    np.testing.assert_allclose(engine_resu, engine_data[:,-1].reshape((-1,1)))

if __name__ == "__main__":
    main()

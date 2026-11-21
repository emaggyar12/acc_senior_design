#include <pybind11/pybind11.h>
#include "rl_model.hpp"
#include "pid_model.hpp"

namespace py = pybind11;

PYBIND11_MODULE(blazer_model_c, m) {
    py::class_<EcoCAR::BlazerModelPID>(m, "pid_model")
            .def(py::init<bool,bool,bool,double,int>())
            .def("reset", &EcoCAR::BlazerModelPID::reset)
            .def("step", &EcoCAR::BlazerModelPID::iter)
            .def("num_steps", &EcoCAR::BlazerModelPID::num_steps)
            .def("step_size", &EcoCAR::BlazerModelPID::step_size)
            .def("debug", &EcoCAR::BlazerModelPID::debug_params)
            .def("motor_speed", &EcoCAR::BlazerModelPID::motor_speed)
            .def("engine_speed", &EcoCAR::BlazerModelPID::engine_speed)
            .def("accel_to_power", &EcoCAR::BlazerModelPID::accel_to_power)
            .def("set_speed", &EcoCAR::BlazerModelRL::set_speed)
            .def("light_data", &EcoCAR::BlazerModel::traffic_lights, py::return_value_policy::take_ownership);
    py::class_<EcoCAR::BlazerModelRL>(m, "rl_model")
            .def(py::init<bool,bool,double,int>())
            .def("reset", &EcoCAR::BlazerModelRL::reset)
            .def("step", &EcoCAR::BlazerModelRL::iter)
            .def("num_steps", &EcoCAR::BlazerModelRL::num_steps)
            .def("step_size", &EcoCAR::BlazerModelRL::step_size)
            .def("debug", &EcoCAR::BlazerModelRL::debug_params)
            .def("motor_speed", &EcoCAR::BlazerModelRL::motor_speed)
            .def("engine_speed", &EcoCAR::BlazerModelRL::engine_speed)
            .def("accel_to_power", &EcoCAR::BlazerModelRL::accel_to_power)
            .def("set_speed", &EcoCAR::BlazerModelRL::set_speed)
            .def("light_data", &EcoCAR::BlazerModel::traffic_lights, py::return_value_policy::take_ownership);
}

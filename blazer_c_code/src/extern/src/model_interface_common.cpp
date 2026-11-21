#include "model_interface.hpp"
extern "C"{
#include "rtwtypes.h"
#include "ext_work.h"
}

namespace ec = EcoCAR;
using namespace EcoCAR::NAMESPACE_PID;

ec::BlazerModel::BlazerModel(bool v2x_, bool automatic_control, double alt, int ni) : gen(rd()) {
    initialized=false;
    automatic = automatic_control;
    v2x = v2x_;
    memset(OverrunFlags, 0, sizeof(boolean_T)*NUMST);
    memset(eventFlags, 0, sizeof(boolean_T)*NUMST);
    avg_lead_dist = alt;
    num_intersections = ni;
    popped_intersections = 0;
}

ec::BlazerModel::~BlazerModel() {
    common_reset();
}

state_info_t ec::BlazerModel::get_state(bool accel_check/*=true*/){
    state_info_t ret;
    ret.ego_speed = get_signal_val(HSCMMI, sig_map,(hsc_name + "/Diagnostics/kph to mps").c_str(), "Veh Spd_m/s");
    NAN_CHECK(ret.ego_speed);

    ret.driver_set_speed = setSpeed; //get_signal_val(HSCMMI, "HSC_Model/ACC Controller /Gain");
    NAN_CHECK(ret.driver_set_speed);

    if(is_pid)
        ret.time_gap = get_block_param(mmi, (mil_name + "/Subsystem3/Constant11").c_str(), "Value", block_map);
    else
        ret.time_gap = get_block_param(mmi, (mil_name + "/Subsystem3/TimeGap").c_str(), "Value", block_map);
    NAN_CHECK(ret.time_gap);

    ret.target_speed = get_signal_val(HSCMMI, sig_map, (hsc_name + "/ACC Controller /HostPerceptionModel/Switch").c_str());
    NAN_CHECK(ret.target_speed);

    ret.target_dist = get_signal_val(HSCMMI, sig_map, (hsc_name + "/ACC Controller /HostPerceptionModel/Switch1").c_str());
    NAN_CHECK(ret.target_dist);

    double mot_trq = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Energy_Management_Control_Process/Calculate Motor Torque/Switch1").c_str(), "motor_trq_demand_Nm");
    double mot_spd = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Energy_Management_Control_Process/Calculate Motor Torque/RPM_to_rad//s").c_str(), nullptr);
    ret.mot_pwr = mot_trq * mot_spd;
    NAN_CHECK(ret.mot_pwr);

    ret.eng_pwr = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Energy_Management_Control_Process/Choosing the Engine source/Switch3").c_str(), "ACC_Correc_Eng");
    NAN_CHECK(ret.eng_pwr);

    ret.elec_fuel_flow = get_signal_val(plantMMI, sig_map, nullptr, "BattFuel");
    NAN_CHECK(ret.elec_fuel_flow);

    ret.e10_fuel_flow = get_signal_val(plantMMI, sig_map, nullptr, "TotFuel") - ret.elec_fuel_flow;
    NAN_CHECK(ret.e10_fuel_flow);

    ret.ego_jerk = get_signal_val(plantMMI, sig_map, "Blazer_Plant_Model/Visualization/Gain", "g");
    NAN_CHECK(ret.ego_jerk);

    ret.grade = get_block_param(plantMMI, "Blazer_Plant_Model/Environment/Constant2", "Value", block_map);
    NAN_CHECK(ret.grade);

    ret.soc = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Input_Wrapper/Cast To Boolean35").c_str(), nullptr);
    NAN_CHECK(ret.soc);

    ret.engine_spd = get_signal_val(plantMMI, sig_map, "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion", nullptr);
    NAN_CHECK(ret.engine_spd);

    ret.motor_spd = get_signal_val(plantMMI, sig_map, "Blazer_Plant_Model/Visualization/rad//s to rpm", nullptr);
    NAN_CHECK(ret.motor_spd);

    ret.max_eng_pwr = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Energy_Management_Control_Process/Product").c_str(), nullptr);
    NAN_CHECK(ret.max_eng_pwr);

    ret.max_mot_pwr = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Battery_Management_Control_Process/Memory").c_str(), nullptr);
    NAN_CHECK(ret.max_mot_pwr);

    ret.min_mot_pwr = get_signal_val(HSCMMI, sig_map, (hsc_name + "/Battery_Management_Control_Process/Memory1").c_str(), nullptr);
    NAN_CHECK(ret.min_mot_pwr);

    ret.xdot_ref = get_signal_val(plantMMI, sig_map, "Blazer_Plant_Model/Multiport Switch", nullptr);
    NAN_CHECK(ret.xdot_ref);

    if(is_pid){
        if(accel_check){
            double tmpAccel = get_signal_val(HSCMMI, sig_map, (hsc_name + "/ACC Controller /ACC Classical/ACC Lookup/Product2").c_str(), nullptr);
            ret.found_pwr = accel_to_power_internal(tmpAccel, ret.grade, ret.ego_speed);
        }else{
            ret.found_pwr = 0;
        }
    }else{
        ret.found_pwr = get_block_param(HSCMMI, (hsc_name + "/ACC Controller /ACC Classical/ACC ext/FoundationBrakesBlock").c_str(), "Value", block_map);
    }
    NAN_CHECK(ret.found_pwr);

    return ret;
}

double ec::BlazerModel::accel_to_power(double accel){
    state_info_t cur_state = get_state(false);
    return accel_to_power_internal(accel, cur_state.grade, cur_state.ego_speed);
}

double ec::BlazerModel::accel_to_power_internal(double accel, double grade, double speed){
    static const double mass = 2026; // mass of vehicle in kilograms
    static const double gravity = 9.81; // a of gravity in m/s^2
    static const double Crr = 118.55; // rolling resistance coefficient
    static const double rho = 1.2; // density of air
    static const double Cd = .379; // aerodynamic drag coefficient
    static const double Af = 3.535790981;

    double force = Crr + mass * accel + pow(speed,2) * .5 * rho * Cd * Af + mass * gravity * (grade/100.0);
    double power = force * speed;

    return power;
}

double ec::BlazerModel::step_size() const{
    return TARGET_TIMESTEP;
    //return Blazer_MiL_Model_M->Timing.stepSize0;
}

void ec::BlazerModel::print_params(const rtwCAPI_ModelMappingInfo *Mmi){
    print_model_params(Mmi);
    print_block_params(Mmi);
    print_signals(Mmi);
};

void ec::BlazerModel::debug_params(){
    print_params(mmi);
    printf("\n\n\n----------------------------------\n\n\n");
    print_params(HSCMMI);
    printf("\n\n\n----------------------------------\n\n\n");
    print_params(plantMMI);
    printf("\n\n\n----------------------------------\n\n\n");
    print_params(batteryMMI);
}

void ec::BlazerModel::fill_state(std::vector<double> &fdata){
    /* fdata should be a STATE_LEN-element double array */
    state_info_t cur_state = get_state();

    fdata[0]  = cur_state.ego_speed;
    fdata[1]  = cur_state.driver_set_speed - cur_state.ego_speed;
    fdata[2]  = cur_state.time_gap * cur_state.ego_speed;
    fdata[3]  = cur_state.target_dist;
    fdata[4]  = fdata[2] - fdata[3];
    fdata[5]  = cur_state.target_speed;
    fdata[6]  = cur_state.eng_pwr;
    fdata[7]  = cur_state.mot_pwr;
    fdata[8]  = cur_state.max_eng_pwr;
    fdata[9]  = cur_state.max_mot_pwr;
    fdata[10] = cur_state.min_mot_pwr;
    fdata[11] = cur_state.ego_jerk;
    fdata[12] = cur_state.grade;
    fdata[13] = cur_state.soc;
    fdata[14] = cur_state.motor_spd;
    fdata[15] = cur_state.engine_spd;
    fdata[16] = cur_state.elec_fuel_flow;
    fdata[17] = cur_state.e10_fuel_flow;
    fdata[18] = cur_state.found_pwr;

    // v2x shit
    if(!v2x || intersections.empty()) return;

    cur_state_t state = intersections.front().get_state();
    if(!state.is_valid) return;

    fdata[19] = state.distance_to;
    fdata[20] = state.cur_state;
    fdata[21] = state.time_to_next_state;
    fdata[22] = state.next_state;
    fdata[23] = 1;
}

double ec::BlazerModel::motor_speed(){
    state_info_t cur_state = get_state();
    return cur_state.motor_spd;
}

double ec::BlazerModel::engine_speed(){
    state_info_t cur_state = get_state();
    return cur_state.engine_spd;
}

void ec::BlazerModel::common_reset(){
    model_param.clear();
    sig_map.clear();
    block_map.clear();
}

void ec::BlazerModel::set_speed(double spd){
    if(spd < 0 || spd > 35){
        throw std::runtime_error("Set speed must be on the interval [0,35]");
        return;
    }
    setSpeed = spd;
}


void ec::BlazerModel::step_v2x(){
    double veh_pos = get_signal_val(HSCMMI, sig_map, (hsc_name + "/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1").c_str());
    NAN_CHECK(veh_pos);

    for(size_t i = 0; i < intersections.size(); i++){
        intersections.at(i).step(veh_pos);
    }
    if(!intersections.empty()){
        if(intersections[0].should_pop()){
            intersections.pop_front();
            popped_intersections++;
        }
    }
}

pybind11::array_t<double> ec::BlazerModel::traffic_lights() const{
    if(!v2x){
        throw std::runtime_error("V2X is not enabled. No traffic light data available");
        exit(1);
    }
    static constexpr size_t num_vars = 8;
    double *ret_data = (double*)calloc(num_vars * intersections.size(), sizeof(double));
    for(size_t i=0; i < intersections.size(); i++){
        size_t offset = (i)*num_vars;
        cur_state_t tmp = intersections.at(i).get_state();
        ret_data[offset+0] = (double)tmp.cur_state;
        ret_data[offset+1] = (double)tmp.next_state;
        ret_data[offset+2] = (double)tmp.time_to_next_state;
        ret_data[offset+3] = (double)tmp.distance_to;
        ret_data[offset+4] = (double)intersections.at(i).dist_to_valid();
        ret_data[offset+5] = (double)intersections.at(i).states.time_red;
        ret_data[offset+6] = (double)intersections.at(i).states.time_yellow;
        ret_data[offset+7] = (double)intersections.at(i).states.time_green;
    }
    py::buffer_info ret(
        ret_data,
        sizeof(double),
        py::format_descriptor<double>::format(),
        2,
        {(size_t)intersections.size(), (size_t)num_vars},
        {sizeof(double) * num_vars, sizeof(double) * 1}
    );

    return py::array_t<double>(ret);
}

void ec::BlazerModel::init_intersections(){
    if(v2x){
        if(setSpeed <= 3.0){
            throw std::runtime_error("Initial set speed must be greater than 3.0m/s. The initial set speed is treated as the max *optimal* speed used to travel through all intersections. ");
        }
        std::uniform_real_distribution<>::param_type new_val(3.0, setSpeed);
        speed_dis.param(new_val);
        double optimal_speed = speed_dis(gen);
        popped_intersections = 0;

        double avg_spacing;
        avg_spacing = (tFinal() / num_intersections) * optimal_speed;
        std::normal_distribution<>::param_type pos_params(avg_spacing*0.1, 10);
        position_maker.param(pos_params);
        std::normal_distribution<>::param_type lead_params(avg_lead_dist, 2);
        lead_maker.param(lead_params);

        state_times_t tmpStates{10, 10, 10};
        std::uniform_real_distribution<>::param_type timings_vals(3.0, 15.0);
        speed_dis.param(timings_vals);

        for(int i=0; i < num_intersections; i++){
            tmpStates.time_red = speed_dis(gen);
            tmpStates.time_yellow = speed_dis(gen);
            tmpStates.time_green = speed_dis(gen);
            intersections.push_back(
                Intersection(i * avg_spacing + position_maker(gen), lead_maker(gen), tmpStates, i % 3, 0.0)
            );
        }
    }
}

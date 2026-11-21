#pragma once
#define PI 3.14159265
#define STATE_LEN 24
#define TARGET_TIMESTEP 0.05 
// ^^ also in intersection.hpp
#define NUMST 4
#ifdef PID_INC
#define RT_MDL Blazer_MiL_Model_PID_M
#else
#define RT_MDL Blazer_MiL_Model_M
#endif
#define FIRST_TID 1

#define NAN_CHECK(num) if(isnan(num)) num=0;

extern "C"{
#include "rtw_capi.h"
#include "rtw_modelmap_logging.h"
#include "rtw_matlogging.h"
#include "rtw_modelmap.h"
}

#include <string>
#include "model_utils.hpp"
#include <math.h>
#include <stdexcept>
#include <vector>
#include <unordered_map>
#include "intersection.hpp"

#include "pybind11/pybind11.h"
#include "pybind11/numpy.h"
#include "pybind11/stl.h"

typedef struct state_info {
    double ego_speed;
    double driver_set_speed;
    double time_gap;
    double target_speed;
    double target_dist;
    double max_eng_pwr;
    double eng_pwr;
    double mot_pwr;
    double found_pwr;
    double max_mot_pwr;
    double min_mot_pwr;
    double elec_fuel_flow;
    double e10_fuel_flow;
    double ego_jerk;
    double grade;
    double soc;
    double motor_spd;  // rpm
    double engine_spd; // rpm
    double xdot_ref;
} state_info_t;

typedef struct action_info {
    double elec_pwr;
    double eng_pwr;
    double found_pwr;
} action_info_t;

namespace py = pybind11;

namespace EcoCAR{
    class BlazerModel{
        public:
            BlazerModel(bool v2x, bool automatic_control, double alt, int ni);
            ~BlazerModel();

//            virtual std::vector<double> iter(pybind11::array_t<double, pybind11::array::c_style | pybind11::array::forcecast> state) = 0;
//            virtual std::vector<double> reset(
//                    std::string drive_cycle, 
//                    double SOC, 
//                    double setSpeed,
//                    double timeGap
//            ) = 0;
            double accel_to_power(double accel);
            void debug_params();
            double motor_speed();
            double engine_speed();
            double step_size() const;
            virtual void set_speed(double spd);
            pybind11::array_t<double> traffic_lights() const;

        protected:
            bool initialized;
            bool automatic;
            bool v2x;
            std::string drive_trace;
            state_info_t get_state(bool accel_check=true);
            void print_params(const rtwCAPI_ModelMappingInfo *mmi);
            void fill_state(std::vector<double> &fdata);
            void common_reset();
            virtual void specific_reset() = 0;
            virtual void step() = 0;
            virtual double tFinal() const = 0;
            void init_intersections();
            void step_v2x();

            double accel_to_power_internal(double a, double g, double s);

            rtwCAPI_ModelMappingInfo *mmi;
            rtwCAPI_ModelMappingInfo *plantMMI;
            rtwCAPI_ModelMappingInfo *HSCMMI;
            rtwCAPI_ModelMappingInfo *batteryMMI;
            double setSpeed;
            double _timeGap;
            boolean_T OverrunFlags[NUMST];    /* ISR overrun flags */
            boolean_T eventFlags[NUMST];      /* necessary for overlapping preemption */
            std::unordered_map<EcoCAR::NAMESPACE_PID::map_key_1s,size_t,EcoCAR::NAMESPACE_PID::pair_hash,EcoCAR::NAMESPACE_PID::Compare> model_param;
            std::unordered_map<EcoCAR::NAMESPACE_PID::map_key_2s,size_t,EcoCAR::NAMESPACE_PID::pair_hash,EcoCAR::NAMESPACE_PID::Compare> sig_map;
            std::unordered_map<EcoCAR::NAMESPACE_PID::map_key_2s,size_t,EcoCAR::NAMESPACE_PID::pair_hash,EcoCAR::NAMESPACE_PID::Compare> block_map;

            std::string hsc_name;
            std::string mil_name;
            bool is_pid;

            // v2x stuff
            double avg_lead_dist;
            int num_intersections;
            size_t popped_intersections;
            std::deque<Intersection> intersections;
            std::normal_distribution<> position_maker;
            std::uniform_real_distribution<> speed_dis;
            std::normal_distribution<> lead_maker;
            std::random_device rd;
            std::mt19937 gen;
    };
};

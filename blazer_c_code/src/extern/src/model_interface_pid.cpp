#include "pid_model.hpp"
#include <stdexcept>
#include <stdio.h>
#include <math.h>

namespace ec = EcoCAR;
namespace ecp = EcoCAR::PID;
namespace py = pybind11;

ec::BlazerModelPID::~BlazerModelPID(){
    specific_reset();
}

std::vector<double> ec::BlazerModelPID::iter(py::array_t<double, py::array::c_style | py::array::forcecast> state) {
    if(!initialized){
        throw std::runtime_error("Model not initialized. Call reset() before stepping");
    }

    py::buffer_info buf = state.request();
    double* data = static_cast<double*>(buf.ptr);
    if(sizeof(double) != buf.itemsize){
        throw std::runtime_error("Numpy array should be an array of float64 (double)");
    }
    if(buf.shape[0] != 3){
        std::stringstream ss("");
        ss << "Action array should be 1-dimension with size (3,). Passed array of size (" << (int)buf.shape[0] << ",).";
        throw std::runtime_error(ss.str().c_str());
    }


    action_info_t action;
    action.eng_pwr = data[0];
    action.elec_pwr = data[1];
    action.found_pwr = data[2];

//    ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /ACC Classical/ACC ext/FoundationBrakesBlock", "Value", action.found_pwr);
//    ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /ACC Classical/ACC ext/EnginePowerBlock", "Value", action.eng_pwr);
//    ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /ACC Classical/ACC ext/MotorPowerBlock", "Value", action.elec_pwr);

    int num_iter = int(TARGET_TIMESTEP / Blazer_MiL_Model_PID_M->Timing.stepSize0);

    for(int i = 0; i < num_iter; i++)
        step();
    step_v2x();

    std::vector<double> ret;
    ret.resize(STATE_LEN, 0);
    fill_state(ret);
    if(rtmGetErrorStatus(Blazer_MiL_Model_PID_M) != NULL){
        throw std::runtime_error("Something bad in the simulink model...");

    }

    return ret;
}

std::vector<double> ec::BlazerModelPID::reset(std::string drive_trace, double SOC, double timeGap, double _setSpeed){
    common_reset();
    specific_reset();
    is_pid = true;

    hsc_name = "PID_HSC_Model";
    mil_name = "Blazer_MiL_Model_PID";
    Blazer_MiL_Model_PID_initialize();
    initialized=true;
    mmi = &(rtmGetDataMapInfo(Blazer_MiL_Model_PID_M).mmi);
    plantMMI = mmi->InstanceMap.childMMIArray[1];
    batteryMMI = plantMMI->InstanceMap.childMMIArray[3];
    HSCMMI = mmi->InstanceMap.childMMIArray[0];
    setSpeed = _setSpeed;

    if(automatic)
        ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /Change", "Value", 0.0);
    else
        ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /Change", "Value", 1.0);

    if(drive_trace == std::string("US06")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 600.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 1.0);
    }else if(drive_trace == std::string("UDDS")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 1369.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 2.0);
    }else if(drive_trace == std::string("HWFET")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 765.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 3.0);
    }else if(drive_trace == std::string("IM240")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 240.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 4.0);
    }else if(drive_trace == std::string("NYCC")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 598.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 5.0);
    }else if(drive_trace == std::string("SC03")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 600.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 6.0);
    }else if(drive_trace == std::string("HUDDS")){
        Blazer_MiL_Model_PID_M->Timing.tFinal = 1060.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 7.0);
    }else{
        throw std::runtime_error("Unknown drive trace specified");
    }

    // set the SOC to whatever the input variable was. This is the initial condition
    ecp::set_block_param(batteryMMI, "BattHev/SOC_INIT_DEV", "Gain", SOC/100.0);

    // set the time_gap to the input variable
    ecp::set_block_param(mmi, "Blazer_MiL_Model_PID/Subsystem3/Constant11", "Value", timeGap);
    if(ignore_veh){
        ecp::set_block_param(mmi, "Blazer_MiL_Model_PID/Subsystem3/Constant10", "Value", 0.0);
    }else{
        ecp::set_block_param(mmi, "Blazer_MiL_Model_PID/Subsystem3/Constant10", "Value", 1.0);
    }
    ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /SetSpdMPS", "Value", setSpeed);
    ecp::set_block_param(HSCMMI, "PID_HSC_Model/Input_Wrapper/Activate MIL//HIL Version", "Value", 1.0);
    init_intersections();

    std::vector<double> ret;
    ret.resize(STATE_LEN, 0);
    fill_state(ret);

    return ret;
}

void ec::BlazerModelPID::step(){
    int_T i;

    /* Disable interrupts here */

    /***********************************************
     * Check and see if base step time is too fast *
     ***********************************************/
    if (OverrunFlags[0]++) {
        rtmSetErrorStatus(RT_MDL, "Overrun");
    }

    /*************************************************
     * Check and see if an error status has been set *
     * by an overrun or by the generated code.       *
     *************************************************/
    if (rtmGetErrorStatus(RT_MDL) != NULL) {
        char buf[256];
        sprintf(buf, "Model is in errored state: %s", rtmGetErrorStatus(RT_MDL));
        throw std::runtime_error(buf);
        return;
    }

    /* Save FPU context here (if necessary) */
    /* Reenable interrupts here */
    
    /*************************************************
     * Update EventFlags and check subrate overrun   *
     *************************************************/
    for (i = FIRST_TID+1; i < NUMST; i++) {
        if (rtmStepTask(RT_MDL,i) && eventFlags[i]++) {
            OverrunFlags[0]--;
            OverrunFlags[i]++;
            /* Sampling too fast */
            rtmSetErrorStatus(RT_MDL, "Overrun");
            throw std::runtime_error("Task overrun");
            return;
        }
        if (++rtmTaskCounter(RT_MDL,i) == rtmCounterLimit(RT_MDL,i))
            rtmTaskCounter(RT_MDL, i) = 0;
    }

    /* Set model inputs associated with base rate here */

    /*******************************************
     * Step the model for the base sample time *
     *******************************************/
    Blazer_MiL_Model_PID_step(0);

    /* Get model outputs associated with base rate here */

    /************************************************************************
     * Model step complete for base sample time, now it is okay to          *
     * re-interrupt this ISR.                                               *
     ************************************************************************/
    OverrunFlags[0]--;

    /*********************************************************
     * Step the model for any other sample times (subrates) *
     *********************************************************/
    for (i = FIRST_TID+1; i < NUMST; i++) {
        /*************************************************************
         * If task "i" is running, don't run any lower priority task *
         *************************************************************/
        if (OverrunFlags[i]) return; 

        if (eventFlags[i]) {
            OverrunFlags[i]++;

            /* Set model inputs associated with subrate here */

            /******************************************
             * Step the model for sample time "i" *
             ******************************************/
            Blazer_MiL_Model_PID_step(i);

            /* Get model outputs associated with subrate here */
            
            /**********************************************
             * Indicate task complete for sample time "i" *
             **********************************************/
            OverrunFlags[i]--;
            eventFlags[i]--;
        }
    }

    rtExtModeCheckEndTrigger();

    rtExtModeCheckEndTrigger();
    /* Disable interrupts here */
    /* Restore FPU context here (if necessary) */
    /* Enable interrupts here */
}

long long int ec::BlazerModelPID::num_steps() const{
    return (rtmGetTFinal(Blazer_MiL_Model_PID_M) / TARGET_TIMESTEP);
}

void ec::BlazerModelPID::specific_reset(){
    if(initialized){
        rt_StopDataLogging("/dev/null",rtmGetRTWLogInfo(Blazer_MiL_Model_PID_M));
        Blazer_MiL_Model_PID_terminate();
        rtExtModeShutdown(NUMST);
    }
}

void ec::BlazerModelPID::set_speed(double spd){
    if(spd < 0 || spd > 35){
        throw std::runtime_error("Set speed must be on the interval [0,35]");
        return;
    }
    ecp::set_block_param(HSCMMI, "PID_HSC_Model/ACC Controller /SetSpdMPH", "Value", setSpeed);
    setSpeed = spd;
}

double ec::BlazerModelPID::tFinal() const{
    return Blazer_MiL_Model_PID_M->Timing.tFinal;
}

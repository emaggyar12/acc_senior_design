#include "raw_model.hpp"
#include <iostream>
#include <cstdio>

namespace ec = EcoCAR;
namespace ecp = EcoCAR::NAMESPACE_PID;

ec::BlazerModelRAW::~BlazerModelRAW(){
    specific_reset();
}

std::vector<double> ec::BlazerModelRAW::iter(std::vector<double> action_raw){
    if(!initialized)
        throw std::runtime_error("Model not initialized. Call reset() before stepping");

    if(action_raw.size() != 3){
        throw std::runtime_error("Action should be of size 3");
    }
    action_info_t action;
    action.eng_pwr = action_raw[0];
    action.elec_pwr = action_raw[1];
    action.found_pwr = action_raw[2];

    ecp::set_block_param(HSCMMI, "HSC_Model/ACC Controller /ACC Classical/ACC ext/FoundationBrakesBlock", "Value", action.found_pwr);
    ecp::set_block_param(HSCMMI, "HSC_Model/ACC Controller /ACC Classical/ACC ext/EnginePowerBlock", "Value", action.eng_pwr);
    ecp::set_block_param(HSCMMI, "HSC_Model/ACC Controller /ACC Classical/ACC ext/MotorPowerBlock", "Value", action.elec_pwr);

    int num_iter = int(TARGET_TIMESTEP / Blazer_MiL_Model_M->Timing.stepSize0);

    for(int i = 0; i < num_iter; i++)
        step();

    std::vector<double> ret;
    ret.resize(STATE_LEN, 0);
    fill_state(ret);
    if(rtmGetErrorStatus(Blazer_MiL_Model_M) != NULL){
        throw std::runtime_error("Something bad in the simulink model...");

    }

    return ret;
}

std::vector<double> ec::BlazerModelRAW::reset(std::string drive_trace, double SOC, double timeGap, double _setSpeed){
    common_reset();
    specific_reset();
    is_pid = false;

    hsc_name = "HSC_Model";
    mil_name = "Blazer_MiL_Model";
    Blazer_MiL_Model_initialize();
    initialized=true;
    mmi = &(rtmGetDataMapInfo(Blazer_MiL_Model_M).mmi);
    plantMMI = mmi->InstanceMap.childMMIArray[1];
    batteryMMI = plantMMI->InstanceMap.childMMIArray[3];
    HSCMMI = mmi->InstanceMap.childMMIArray[0];
    setSpeed = _setSpeed;

    if(automatic)
        ecp::set_block_param(HSCMMI, "HSC_Model/ACC Controller /Change", "Value", 0.0);
    else
        ecp::set_block_param(HSCMMI, "HSC_Model/ACC Controller /Change", "Value", 1.0);

    if(drive_trace == std::string("US06")){
        Blazer_MiL_Model_M->Timing.tFinal = 600.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 1.0);
    }else if(drive_trace == std::string("UDDS")){
        Blazer_MiL_Model_M->Timing.tFinal = 1369.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 2.0);
    }else if(drive_trace == std::string("HWFET")){
        Blazer_MiL_Model_M->Timing.tFinal = 765.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 3.0);
    }else if(drive_trace == std::string("IM240")){
        Blazer_MiL_Model_M->Timing.tFinal = 240.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 4.0);
    }else if(drive_trace == std::string("NYCC")){
        Blazer_MiL_Model_M->Timing.tFinal = 598.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 5.0);
    }else if(drive_trace == std::string("SC03")){
        Blazer_MiL_Model_M->Timing.tFinal = 600.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 6.0);
    }else if(drive_trace == std::string("HUDDS")){
        Blazer_MiL_Model_M->Timing.tFinal = 1060.0;
        ecp::set_block_param(plantMMI, "Blazer_Plant_Model/DT_SELECTOR", "Value", 7.0);
    }else{
        throw std::runtime_error("Unknown drive trace specified");
    }

    // set the SOC to whatever the input variable was. This is the initial condition
    ecp::set_block_param(batteryMMI, "BattHev/SOC_INIT_DEV", "Gain", SOC/100.0);

    // set the time_gap to the input variable
    ecp::set_block_param(mmi, "Blazer_MiL_Model/Subsystem3/TimeGap", "Value", timeGap);
    ecp::set_block_param(HSCMMI, "HSC_Model/Input_Wrapper/Activate MIL//HIL Version", "Value", 1.0);

    std::vector<double> ret;
    ret.resize(STATE_LEN, 0);
    fill_state(ret);

    return ret;
}

void print_vec(std::vector<double> &vec){
    for(size_t i=0; i < vec.size(); i++){
        printf("%+8.2f | ", vec[i]);
    }
    putchar('\n');
}


void ec::BlazerModelRAW::step(){
    int_T i;

    if (OverrunFlags[0]++) {
        rtmSetErrorStatus(RT_MDL, "Overrun");
    }

    if (rtmGetErrorStatus(RT_MDL) != NULL) {
        char buf[256];
        sprintf(buf, "Model is in errored state: %s", rtmGetErrorStatus(RT_MDL));
        throw std::runtime_error(buf);
        return;
    }

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

    Blazer_MiL_Model_step(0);

    OverrunFlags[0]--;

    for (i = FIRST_TID+1; i < NUMST; i++) {
        if (OverrunFlags[i]) return; 

        if (eventFlags[i]) {
            OverrunFlags[i]++;

            Blazer_MiL_Model_step(i);

            OverrunFlags[i]--;
            eventFlags[i]--;
        }
    }

    rtExtModeCheckEndTrigger();

    rtExtModeCheckEndTrigger();
}

long long int ec::BlazerModelRAW::num_steps() const{
    return (rtmGetTFinal(Blazer_MiL_Model_M) / TARGET_TIMESTEP);
}

void ec::BlazerModelRAW::specific_reset(){
    if(initialized){
        rt_StopDataLogging("/dev/null",rtmGetRTWLogInfo(Blazer_MiL_Model_M));
        Blazer_MiL_Model_terminate();
        rtExtModeShutdown(NUMST);
    }
}


int main(int argc, char** argv){
    ec::BlazerModelRAW model(false, false, 1, 1);
    model.reset("US06", 70, 15, 3);
    std::vector<double> actions{100000,0,0};
    std::vector<double> obs;
    for(long long int i=0; i < 25; i++){
        obs = model.iter(actions);
        printf("i=%08lld ", i);
        print_vec(obs);
    }
    model.reset("US06", 70, 15, 3);
    for(long long int i=0; i < 25; i++){
        obs = model.iter(actions);
        printf("i=%08lld ", i);
        print_vec(obs);
    }
    printf("done\n");
    
    return 0;
}


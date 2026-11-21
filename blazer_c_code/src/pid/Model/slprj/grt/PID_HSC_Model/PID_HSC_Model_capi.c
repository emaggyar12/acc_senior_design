/*
 * PID_HSC_Model_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PID_HSC_Model".
 *
 * Model version              : 1.159
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 21:03:10 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PID_HSC_Model_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "PID_HSC_Model.h"
#include "PID_HSC_Model_capi.h"
#include "PID_HSC_Model_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 1, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Auto Engage Controller"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 1, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Auto Engage Controller"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 1, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Auto Engage Controller"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 13, TARGET_STRING("PID_HSC_Model/ACC Controller /CAVPCM_ACCMd_Request"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 14, TARGET_STRING("PID_HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("AutoMdSpdLmtStat"), 0, 0, 0, 0, 0 },

  { 5, 14, TARGET_STRING("PID_HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("ACCAct370"), 1, 0, 0, 0, 0 },

  { 6, 14, TARGET_STRING("PID_HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("AdapCrsCntVDA"), 2, 0, 0, 0, 0 },

  { 7, 14, TARGET_STRING("PID_HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("ACCDrvrSeltdSpd"), 3, 0, 0, 0, 0 },

  { 8, 15, TARGET_STRING("PID_HSC_Model/ACC Controller /Chart3"),
    TARGET_STRING("HoldCancelDecelBool"), 0, 1, 0, 0, 0 },

  { 9, 16, TARGET_STRING("PID_HSC_Model/ACC Controller /Generate SetSpd"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Cast To Boolean"),
    TARGET_STRING("CAVACCReq"), 0, 1, 0, 0, 0 },

  { 12, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Cast To Boolean1"),
    TARGET_STRING("CAVPCM_ACCAct"), 0, 1, 0, 0, 1 },

  { 13, 31, TARGET_STRING("PID_HSC_Model/ACC Controller /Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /km//h2m//s1"),
    TARGET_STRING("VehSpdms"), 0, 0, 0, 0, 1 },

  { 15, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /OR"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 16, 30, TARGET_STRING("PID_HSC_Model/ACC Controller /OR1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 17, 30, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch1"),
    TARGET_STRING("CAVPCM_ACCMdActive"), 0, 0, 0, 0, 1 },

  { 19, 28, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 29, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 21, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 22, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 23, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 24, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 25, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 26, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 27, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 32, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 33, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Chart1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 34, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Chart2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 35, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Chart3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Gain1"),
    TARGET_STRING("ChargeLimit"), 0, 0, 0, 0, 1 },

  { 35, 36, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("ContinuousCurrentLimit"), 0, 0, 0, 0, 1 },

  { 46, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("CurrentLimit"), 0, 0, 0, 0, 1 },

  { 47, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("CurrentLimit"), 0, 0, 0, 0, 1 },

  { 48, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("ContinuousDischageLimit"), 0, 0, 0, 0, 1 },

  { 49, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 37, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 39, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 38, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 40, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 57, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Min"),
    TARGET_STRING("ChargeLimit"), 0, 0, 0, 0, 1 },

  { 58, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Min1"),
    TARGET_STRING("DischargeLimit"), 0, 0, 0, 0, 1 },

  { 59, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Divide"),
    TARGET_STRING("CurrentDemanded"), 0, 0, 0, 0, 1 },

  { 60, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Divide1"),
    TARGET_STRING("CurrentDemanded"), 0, 0, 0, 0, 1 },

  { 61, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/Product4"),
    TARGET_STRING("Battery_Pwr_Limit_Charge"), 0, 0, 0, 0, 1 },

  { 62, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/Product5"),
    TARGET_STRING("Battery_Pwr_Limit_Charge"), 0, 0, 0, 0, 1 },

  { 63, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 65, 68, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Constant3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 67, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Cast To Boolean"),
    TARGET_STRING("power direction fault"), 0, 1, 0, 0, 0 },

  { 68, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/kph to mps"),
    TARGET_STRING("Veh Spd_m/s"), 0, 0, 0, 0, 1 },

  { 69, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Memory1"),
    TARGET_STRING(""), 0, 2, 0, 1, 0 },

  { 70, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Memory2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/kph to mps"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/mps to rad//s"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/NOT"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 74, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/ACC_Deadzone"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 68, TARGET_STRING(
    "PID_HSC_Model/Driver_Arbitration/LCV Pedal Map Axle Torque Nm1"),
    TARGET_STRING("TotDrvrDmdTrq"), 0, 0, 0, 0, 1 },

  { 76, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Multiply"),
    TARGET_STRING("map"), 0, 0, 0, 0, 1 },

  { 77, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Saturation2"),
    TARGET_STRING("TotDrvrDmdTrq"), 0, 0, 0, 0, 1 },

  { 79, 68, TARGET_STRING(
    "PID_HSC_Model/Driver_Arbitration/prevents zeroing Pwr Dmd at 0 kph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 80, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Sum"),
    TARGET_STRING("total"), 0, 0, 0, 0, 1 },

  { 81, 68, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 63, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING("emcp_p_eng_des_W1"), 0, 0, 0, 0, 0 },

  { 83, 63, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING("emcp_p_tot_W1"), 1, 0, 0, 0, 0 },

  { 84, 63, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING("emcp_p_elec_des_W1"), 2, 0, 0, 0, 0 },

  { 85, 63, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 86, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Abs1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 64, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/FinalDrive"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 64, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 64, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/kph to mps"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/kph to mps1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 64, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 64, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 64, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Product2"),
    TARGET_STRING("Engine_Axle_Torque"), 0, 0, 0, 0, 1 },

  { 101, 64, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Add"),
    TARGET_STRING("totaloutputpower"), 0, 0, 0, 0, 1 },

  { 104, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Add1"),
    TARGET_STRING("eng_mot"), 0, 0, 0, 0, 1 },

  { 105, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Add2"),
    TARGET_STRING("diff"), 0, 0, 0, 0, 1 },

  { 106, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Add6"),
    TARGET_STRING("diff"), 0, 0, 0, 0, 1 },

  { 107, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Add7"),
    TARGET_STRING("diff"), 0, 0, 0, 0, 1 },

  { 108, 68, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 64, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Direct Lookup Table (n-D)"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean"),
    TARGET_STRING("dist_is_valid"), 0, 1, 0, 0, 1 },

  { 111, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 112, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean10"),
    TARGET_STRING("xdotref"), 0, 0, 0, 0, 1 },

  { 113, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean11"),
    TARGET_STRING("ACCBrakeTime"), 0, 0, 0, 0, 1 },

  { 114, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean12"),
    TARGET_STRING("TrafficLightPresent"), 0, 1, 0, 0, 1 },

  { 115, 19, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean13"),
    TARGET_STRING("CAVtrgVel"), 0, 0, 0, 0, 1 },

  { 116, 17, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean14"),
    TARGET_STRING("CAVtrgDist"), 0, 0, 0, 0, 1 },

  { 117, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean15"),
    TARGET_STRING("grade"), 0, 0, 0, 0, 1 },

  { 118, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean16"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 119, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 120, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean22"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 121, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean23"),
    TARGET_STRING("APP"), 0, 0, 0, 0, 1 },

  { 122, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean24"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 123, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean25"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 124, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean26"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 125, 30, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean27"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 126, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean28"),
    TARGET_STRING("gear"), 0, 0, 0, 0, 1 },

  { 127, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean29"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 128, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean3"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 129, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean30"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 130, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean31"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 131, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean32"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 132, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean33"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 133, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean34"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 134, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean35"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 135, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean36"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 136, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean37"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 137, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean38"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 138, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean39"),
    TARGET_STRING("lvrpos"), 0, 4, 0, 0, 1 },

  { 139, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean4"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 140, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean40"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 141, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean41"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 142, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean42"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 143, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean43"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 144, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean44"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 145, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean45"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 146, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean46"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 147, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean47"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 148, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean48"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 149, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean49"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 150, 30, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean5"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 151, 62, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean50"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 152, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean51"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 153, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean6"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 154, 65, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean7"),
    TARGET_STRING("DrvIntndAxlTrqMax"), 0, 0, 0, 0, 1 },

  { 155, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean8"),
    TARGET_STRING("DrvIntndAxlTrqMin"), 0, 0, 0, 0, 1 },

  { 156, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Boolean9"),
    TARGET_STRING("TrqReqStat"), 0, 3, 0, 0, 1 },

  { 157, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double"),
    TARGET_STRING("Tanh_Exponent"), 0, 0, 0, 0, 1 },

  { 158, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double1"),
    TARGET_STRING("Tanh_multiplier"), 0, 0, 0, 0, 1 },

  { 159, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double2"),
    TARGET_STRING("CurrentState"), 0, 0, 0, 0, 0 },

  { 160, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double3"),
    TARGET_STRING("DistanceToIntersection"), 0, 0, 0, 0, 1 },

  { 161, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double4"),
    TARGET_STRING("TimeToIntersection"), 0, 0, 0, 0, 0 },

  { 162, 68, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double5"),
    TARGET_STRING("Decel_Division_Value"), 0, 0, 0, 0, 1 },

  { 163, 41, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Cast To Double6"),
    TARGET_STRING("bcm_coolan_temp_C"), 0, 0, 0, 0, 1 },

  { 164, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 165, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 166, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/rbcp_regen_enable"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 167, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 168, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/BPP Fade Out"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 169, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Steering Wheel Angle Fade Out"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 170, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Vehicle Speed Fade Out"),
    TARGET_STRING("rbcp_brake_motor_fade_out"), 0, 0, 0, 0, 1 },

  { 171, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Multiport Switch"),
    TARGET_STRING("rbcp_brake_power_demand_W"), 0, 0, 0, 0, 1 },

  { 172, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Product1"),
    TARGET_STRING("RegenPowerW"), 0, 0, 0, 0, 1 },

  { 173, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 174, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 175, 66, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 176, 66, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 177, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("hsc_bms_enable"), 0, 0, 0, 0, 0 },

  { 178, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("hsc_bms_leakage_ena"), 1, 0, 0, 0, 0 },

  { 179, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("hsc_bms_mainc_close"), 2, 0, 0, 0, 0 },

  { 180, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 181, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 182, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("R1"), 5, 0, 0, 0, 0 },

  { 183, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("R2"), 6, 0, 0, 0, 0 },

  { 184, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 185, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 186, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 187, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 188, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 189, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 190, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 191, 67, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 192, 68, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 193, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 194, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 195, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 196, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("DistErrFLipped"), 2, 0, 0, 0, 1 },

  { 197, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 198, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 199, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 200, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("ACCReqPwr"), 2, 0, 0, 0, 1 },

  { 201, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 202, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 203, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 204, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 205, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 206, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("AccelCmd"), 2, 0, 0, 0, 1 },

  { 207, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("Total Force"), 2, 0, 0, 0, 1 },

  { 208, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("SetSpeedError"), 2, 0, 0, 0, 1 },

  { 209, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("SetSpd"), 2, 0, 0, 0, 0 },

  { 210, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 211, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 212, 12, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup"),
    TARGET_STRING("StopLightAccel"), 2, 0, 0, 0, 1 },

  { 213, 30, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 214, 30, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 215, 30, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 216, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Data Type Conversion"),
    TARGET_STRING("EgoSpd"), 0, 0, 0, 0, 1 },

  { 217, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator"),
    TARGET_STRING("TargetPos"), 0, 0, 0, 0, 0 },

  { 218, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1"),
    TARGET_STRING("EgoPos"), 0, 0, 0, 0, 0 },

  { 219, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 18, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 221, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 222, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 223, 20, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Chart2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 224, 20, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Chart2"),
    TARGET_STRING("LastDistance"), 1, 0, 0, 0, 0 },

  { 225, 20, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Chart2"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 226, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Cast To Double"),
    TARGET_STRING("DistanceValidity"), 0, 0, 0, 0, 1 },

  { 227, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /Subsystem/Discrete-Time Integrator3"),
    TARGET_STRING("DistanceKeepTrack"), 0, 0, 0, 0, 0 },

  { 228, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 229, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Gain1"),
    TARGET_STRING("LeadVehicleSpeedmph"), 0, 0, 0, 0, 1 },

  { 230, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/OR"),
    TARGET_STRING("DistanceValidity"), 0, 1, 0, 0, 1 },

  { 231, 68, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /Subsystem/1-D Lookup Table"),
    TARGET_STRING("SafeDist"), 0, 0, 0, 0, 1 },

  { 232, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Product"),
    TARGET_STRING("ActDist"), 0, 0, 0, 0, 1 },

  { 233, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 234, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Minus2"),
    TARGET_STRING("Distance"), 0, 0, 0, 0, 0 },

  { 235, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Sum1"),
    TARGET_STRING("DistErr"), 0, 0, 0, 0, 1 },

  { 236, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Sum2"),
    TARGET_STRING("SafeDist2"), 0, 0, 0, 0, 1 },

  { 237, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 238, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Delay One Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 239, 68, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Delay One Step1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 240, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Matrix Concatenate"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 241, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Matrix Concatenate1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 242, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 243, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 245, 36, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Vehicle Speed Multiplier"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 246, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 247, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Dynamic PSOC Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 248, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 250, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 251, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 252, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 253, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 254, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 255, 42, TARGET_STRING("PID_HSC_Model/Diagnostics/ABSRegenOff/ABSRegenOff"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 256, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Brake Torque Cancelation/Gain"),
    TARGET_STRING("BPPTrqCancel"), 0, 2, 0, 1, 1 },

  { 257, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Brake Torque Cancelation/IC"),
    TARGET_STRING("BPPTrqCancel"), 0, 1, 0, 0, 1 },

  { 258, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Brake Torque Cancelation/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 259, 43, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Electronics_Cooling/ABSRegenOff"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 260, 44, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 261, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/Data Type Conversion2"),
    TARGET_STRING("FirstTimeFlag"), 0, 1, 0, 0, 1 },

  { 262, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/Data Type Conversion3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 263, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/kohms to ohms"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 264, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/Logical Operator11"),
    TARGET_STRING("gfd"), 0, 1, 0, 0, 1 },

  { 265, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/Memory7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 266, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 267, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/closed contactor battery range"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 268, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Motor Control Fault/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 269, 45, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Over//UnderVoltage/OverVoltage"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 270, 46, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Over//UnderVoltage/UnderVoltage"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 271, 47, TARGET_STRING("PID_HSC_Model/Diagnostics/OverDischarge/OverDischarge"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 272, 48, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/fault Counter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 273, 49, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/fault Counter2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 274, 50, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/fault Counter3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 276, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 277, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 278, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 279, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 280, 51, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/Fault counter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 282, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 283, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/IC"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 285, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 286, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/Logical Operator8"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 287, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Protect HV/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 288, 52, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/Fault Counter"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 289, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 290, 68, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/IC"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 291, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator"),
    TARGET_STRING("RecieveDrive"), 0, 1, 0, 0, 0 },

  { 292, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 293, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 294, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 295, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 296, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 297, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 298, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 299, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/ZeroPwrTmTrq/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 300, 53, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Fault counter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Abs1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 302, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Abs2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 303, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Abs3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 304, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 305, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/IC"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 306, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/AND"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 307, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 308, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 309, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/m//s2rad//s"),
    TARGET_STRING("whlspd"), 0, 0, 0, 0, 1 },

  { 310, 54, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/MinMax1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 311, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 312, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 313, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 314, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/prevents dividing by zero"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 315, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 316, 55, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 317, 61, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 318, 59, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 319, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain19"),
    TARGET_STRING("VehSpdMPH"), 0, 0, 0, 0, 1 },

  { 320, 60, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/RPM_to_rad//s"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 321, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Diagnostic Faults"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 322, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 323, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 324, 60, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Divide1"),
    TARGET_STRING("Motor_Trq_Req_Raw_Nm"), 0, 0, 0, 0, 1 },

  { 325, 59, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Product"),
    TARGET_STRING("PowerLossBetweenShifts"), 0, 0, 0, 0, 1 },

  { 326, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 327, 60, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/prevents dividing by zero"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 328, 60, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 329, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 330, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Switch1"),
    TARGET_STRING("motor_trq_demand_Nm"), 0, 0, 0, 0, 1 },

  { 331, 60, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 332, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/AND"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 333, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Switch3"),
    TARGET_STRING("ACC_Correc_Eng"), 0, 0, 0, 0, 1 },

  { 334, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/AND"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 335, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Switch4"),
    TARGET_STRING("ACC_Correc_Mot"), 0, 0, 0, 0, 1 },

  { 336, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Increment Stored Integer/FixPt Gateway In"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 337, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Increment Stored Integer/FixPt Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 338, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 339, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 340, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 341, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 342, 68, TARGET_STRING(
    "PID_HSC_Model/Regenerative_Braking_Control_Process/SOC Charge Limit/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 343, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/TargetRelPos"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 344, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/DistInfo"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 345, 2, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Chart"),
    TARGET_STRING("MustStop"), 0, 0, 0, 0, 0 },

  { 346, 3, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Chart2"),
    TARGET_STRING("LastDistance"), 0, 0, 0, 0, 0 },

  { 347, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 348, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant21"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 349, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant22"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 350, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant23"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 351, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Cast To Boolean1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 352, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator"),
    TARGET_STRING("EgoPosition"), 0, 0, 0, 0, 2 },

  { 353, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator1"),
    TARGET_STRING("xdotPosition"), 0, 0, 0, 0, 2 },

  { 354, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator3"),
    TARGET_STRING("DistanceKeepTrack"), 0, 0, 0, 0, 0 },

  { 355, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 356, 11, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 357, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 358, 4, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 359, 5, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 360, 6, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 361, 7, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 362, 11, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Multiply"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 363, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/kph2m//s"),
    TARGET_STRING("SetSpd"), 0, 0, 0, 0, 0 },

  { 364, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/NOT2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 365, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/OR1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 366, 11, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 367, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 368, 10, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 369, 7, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Far"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 370, 4, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 371, 5, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 372, 6, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Near"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 373, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Min"),
    TARGET_STRING("TotalACCAccel"), 0, 0, 0, 0, 1 },

  { 374, 8, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Multiport Switch"),
    TARGET_STRING("DistanceControllerAccel"), 0, 0, 0, 0, 1 },

  { 375, 11, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 376, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Divide1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 377, 11, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Divide2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 378, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Divide4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 379, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 380, 9, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Product3"),
    TARGET_STRING("ACCReqPwr"), 0, 0, 0, 0, 1 },

  { 381, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 382, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 383, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Rate Transition2"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 384, 10, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 385, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 386, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation2"),
    TARGET_STRING("AccelCmd"), 0, 0, 0, 0, 1 },

  { 387, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 388, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 389, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Minus2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 390, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Sum3"),
    TARGET_STRING("SetSpeedError"), 0, 0, 0, 0, 1 },

  { 391, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 392, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 393, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 394, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch3"),
    TARGET_STRING("ACCReqPwr"), 0, 0, 0, 0, 1 },

  { 395, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch4"),
    TARGET_STRING("StopLightAccel"), 0, 0, 0, 0, 1 },

  { 396, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 397, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Delay One Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 398, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Unary Minus"),
    TARGET_STRING("DistErrFLipped"), 0, 0, 0, 0, 1 },

  { 399, 68, TARGET_STRING(
    "PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/checks for Low Speed Cruise Charge Mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 400, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Brake Torque Cancelation/BPPCheck/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 401, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Brake Torque Cancelation/Launch Mode Check/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 402, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Electronics_Cooling/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 403, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Ground Fault Detection/Competition Requirement 500 ohms per volt/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 404, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Over//UnderVoltage/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 405, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Over//UnderVoltage/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 406, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/OverDischarge/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 407, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 408, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 409, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 410, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Overheat/Compare To Constant6/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 411, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/CheckForDrive/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 412, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/CheckForReverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 413, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/ForwardMotionCheck/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 414, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Powertrain direction fault/ReverseMotionCheck/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 415, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/CheckForDrive1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 416, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/CheckForNeutral/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 417, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/CheckForPark1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 418, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/CheckForReverse /Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 419, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/CheckForReverse2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 420, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/FirstGearOrGreater/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 421, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/Shift Validity/NinethGearOrless/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 422, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 423, 68, TARGET_STRING(
    "PID_HSC_Model/Diagnostics/motor_torque direction fault/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 424, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 425, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 426, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 427, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Check for key in Run/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 428, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for Drive/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 429, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Reverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 430, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Unknown/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 431, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 432, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Abs1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 433, 56, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/1-D Lookup Creep Trq_Nm"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 434, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 435, 57, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 436, 57, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 437, 57, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 438, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 439, 58, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 440, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 441, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 442, 58, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 443, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 444, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Tanh"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 445, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Delay One Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 446, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 447, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 448, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 449, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 450, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 451, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 452, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/OR"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 453, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/allows braking torque if in  either cruise changing modes"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 454, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Reverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 455, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 456, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 457, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 458, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 459, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 460, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 461, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 462, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 463, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 464, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 465, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 466, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 467, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 468, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 469, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 470, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 2 },

  { 471, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 472, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 473, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 2 },

  { 474, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Vector Concatenate"),
    TARGET_STRING(""), 0, 1, 3, 0, 1 },

  { 475, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Vector Concatenate1"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 476, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 477, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 478, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Relational Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 479, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Relational Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 480, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 481, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Unit Delay"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 482, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Drive/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 483, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Reverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 484, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for ShftLvrPos Unknown/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 485, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Creep Torque Threshold_Nm/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 486, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Check For  Launch Mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 487, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if cruise charging mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 488, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if low speed Cruise Charging mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 489, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if regen mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 490, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks negative torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 491, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks positive torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 492, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks regen switch is on/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 493, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charge SOC Limit/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 494, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charging Motor Torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 495, 68, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging Motor Torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 496, 62, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging SOC Limit/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 497, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 498, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate1"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 499, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate2"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 500, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate3"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 501, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate4"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 502, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate5"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 503, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Vector Concatenate6"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 504, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/1//m2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 505, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/b"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 506, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/c"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 507, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/m"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 508, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/m1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 509, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 510, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 511, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Product5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 512, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Product6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 513, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Product7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 514, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 515, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Add2"),
    TARGET_STRING("Total Force"), 0, 0, 0, 0, 1 },

  { 516, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Trigonometric Function1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 517, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Trigonometric Function1"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 518, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Trigonometric Function2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 519, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 520, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/DataTypeConv1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 521, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/DataTypeConv2"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 522, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/ZeroGain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 523, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/AND3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 524, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/Equal1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 525, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/NotEqual"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 526, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/SignPreIntegrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 527, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/SignPreSat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 528, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 529, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/D Gain/Internal Parameters/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 530, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 531, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/UD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 532, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/I Gain/Internal Parameters/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 533, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator/Discrete/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 534, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Parallel P Gain/Internal Parameters/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 535, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Saturation/Enabled/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 536, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Sum/Sum_PID/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 537, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Sum Fdbk/Enabled/Sum Fdbk"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 538, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Transpose"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 539, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Product"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 540, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 541, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 542, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant12"),
    TARGET_STRING("Y"), 0, 0, 0, 0, 0 },

  { 543, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 544, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 545, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 546, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 547, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn13"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 548, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn21"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 549, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn22"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 550, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn23"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 551, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn31"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 552, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn32"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 553, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn33"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 554, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/sincos"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 555, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/sincos"),
    TARGET_STRING(""), 1, 0, 4, 0, 1 },

  { 556, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled/DeadZone"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 557, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/Tsamp/Internal Ts/Tsamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 558, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame/Road Load/Constant11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 559, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame/Road Load/Integrator3"),
    TARGET_STRING("x"), 0, 0, 0, 0, 1 },

  { 560, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame/Road Load/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 561, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load/Constant14"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 562, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load/Constant5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 563, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load/Constant7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 564, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Transpose"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 565, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Product"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 566, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 567, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 568, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Product8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 569, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Product9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 570, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Unary Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 571, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Unary Minus1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 572, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 573, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 574, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Reshape (9) to [3x3] column-major"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 575, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 576, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 577, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn13"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 578, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn21"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 579, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn22"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 580, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn23"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 581, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn31"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 582, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn32"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 583, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Fcn33"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 584, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/sincos"),
    TARGET_STRING(""), 0, 0, 4, 0, 1 },

  { 585, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/sincos"),
    TARGET_STRING(""), 1, 0, 4, 0, 1 },

  { 586, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 587, 12, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Reshape (9) to [3x3] column-major"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 588, TARGET_STRING("PID_HSC_Model/ACC Controller /Compare To Constant1"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 589, TARGET_STRING("PID_HSC_Model/ACC Controller /Compare To Constant2"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 590, TARGET_STRING("PID_HSC_Model/ACC Controller /Compare To Constant3"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 591, TARGET_STRING("PID_HSC_Model/ACC Controller /Change"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 592, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 593, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 594, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 595, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 596, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 597, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 598, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 599, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 600, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 601, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 602, TARGET_STRING("PID_HSC_Model/ACC Controller /Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 603, TARGET_STRING("PID_HSC_Model/ACC Controller /Denied"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 604, TARGET_STRING("PID_HSC_Model/ACC Controller /SetSpdMPS"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 605, TARGET_STRING("PID_HSC_Model/ACC Controller /SetSpdMPS2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 606, TARGET_STRING("PID_HSC_Model/ACC Controller /Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 607, TARGET_STRING("PID_HSC_Model/ACC Controller /Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 608, TARGET_STRING("PID_HSC_Model/ACC Controller /Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 609, TARGET_STRING("PID_HSC_Model/ACC Controller /Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 610, TARGET_STRING("PID_HSC_Model/ACC Controller /km//h2m//s1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 611, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 612, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch10"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 613, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch11"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 614, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch12"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 615, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 616, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 617, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 618, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 619, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 620, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 621, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 622, TARGET_STRING("PID_HSC_Model/ACC Controller /Switch9"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 623, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 624, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Target SOC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 625, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 626, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 627, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 628, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 629, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 630, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 631, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 632, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 633, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 634, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 635, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/IC8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 636, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 637, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 8, 0 },

  { 638, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 639, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 640, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 8, 0 },

  { 641, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension3"), 0, 9, 0 },

  { 642, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("maxIndex"), 5, 4, 0 },

  { 643, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("dimSizes"), 5, 4, 0 },

  { 644, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 645, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 8, 0 },

  { 646, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension3"), 0, 9, 0 },

  { 647, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("maxIndex"), 5, 4, 0 },

  { 648, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("dimSizes"), 5, 4, 0 },

  { 649, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 650, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 8, 0 },

  { 651, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 652, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 653, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 654, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit1"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 655, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 656, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit2"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 657, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 658, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit3"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 659, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit3"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 660, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 661, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 662, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit1"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 663, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 664, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Memory"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 665, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Memory1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 666, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 667, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 668, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 669, TARGET_STRING("PID_HSC_Model/Diagnostics/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 670, TARGET_STRING("PID_HSC_Model/Diagnostics/Constant3"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 671, TARGET_STRING("PID_HSC_Model/Diagnostics/kph to mps"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 672, TARGET_STRING("PID_HSC_Model/Diagnostics/Memory1"),
    TARGET_STRING("InitialCondition"), 2, 0, 1 },

  { 673, TARGET_STRING("PID_HSC_Model/Diagnostics/Memory2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 674, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/kph to mps"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 675, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/ACC_Deadzone"),
    TARGET_STRING("Table"), 0, 11, 0 },

  { 676, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/ACC_Deadzone"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 11, 0 },

  { 677, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/LCV Pedal Map Axle Torque Nm1"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 678, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/LCV Pedal Map Axle Torque Nm1"),
    TARGET_STRING("dimSizes"), 5, 3, 0 },

  { 679, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/LCV Pedal Map Axle Torque Nm1"),
    TARGET_STRING("numYWorkElts"), 5, 4, 0 },

  { 680, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 681, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 682, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/prevents zeroing Pwr Dmd at 0 kph"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 683, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/prevents zeroing Pwr Dmd at 0 kph"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 684, TARGET_STRING("PID_HSC_Model/Driver_Arbitration/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 685, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 686, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Motor Enable"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 687, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/FinalDrive"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 688, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 689, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 690, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 691, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/kph to mps"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 692, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/kph to mps1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 693, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 12, 0 },

  { 694, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 695, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 696, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 697, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 698, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 699, TARGET_STRING("PID_HSC_Model/Input_Wrapper/Activate MIL//HIL Version"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 700, TARGET_STRING("PID_HSC_Model/Output_Wrapper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 701, TARGET_STRING("PID_HSC_Model/Output_Wrapper/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 702, TARGET_STRING("PID_HSC_Model/Output_Wrapper/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 703, TARGET_STRING("PID_HSC_Model/Output_Wrapper/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 704, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 705, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant1"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 706, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant2"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 707, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant3"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 708, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/SOC Charge Limit"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 709, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 710, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Max BPP Regen W"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 711, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Off Throttle Regen Power Demand W"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 712, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 713, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/rbcp_regen_enable"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 714, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Steering Wheel Angle Fade Out"),
    TARGET_STRING("Table"), 0, 13, 0 },

  { 715, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Steering Wheel Angle Fade Out"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 716, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Vehicle Speed Fade Out"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 717, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Vehicle Speed Fade Out"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 718, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 719, TARGET_STRING("PID_HSC_Model/Regenerative_Braking_Control_Process/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 720, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/Brusa Enable"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 721, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMUmajorProt"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 722, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/VMUminorProt"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 723, TARGET_STRING("PID_HSC_Model/Vehicle_Mode_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 724, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/TargetInitialPos"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 725, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 726, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 727, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 728, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 729, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 730, TARGET_STRING("PID_HSC_Model/ACC Controller /HostPerceptionModel/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 731, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 732, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Default Spacing"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 733, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Discrete-Time Integrator3"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 734, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Discrete-Time Integrator3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 735, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 736, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 737, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 14, 0 },

  { 738, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 739, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Switch11"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 740, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Delay One Step"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 741, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Delay One Step1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 742, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/checks for Low Speed Cruise Charge Mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 743, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 744, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 745, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 746, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 747, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 748, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 749, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/psoc_table_SOC_offset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 750, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Vehicle Speed Multiplier"),
    TARGET_STRING("Table"), 0, 15, 0 },

  { 751, TARGET_STRING("PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Vehicle Speed Multiplier"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 752, TARGET_STRING("PID_HSC_Model/Diagnostics/Brake Torque Cancelation/BPPCheck"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 753, TARGET_STRING("PID_HSC_Model/Diagnostics/Brake Torque Cancelation/Launch Mode Check"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 754, TARGET_STRING("PID_HSC_Model/Diagnostics/Brake Torque Cancelation/Gain"),
    TARGET_STRING("Gain"), 2, 0, 1 },

  { 755, TARGET_STRING("PID_HSC_Model/Diagnostics/Brake Torque Cancelation/IC"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 756, TARGET_STRING("PID_HSC_Model/Diagnostics/Electronics_Cooling/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 757, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/Competition Requirement 500 ohms per volt"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 758, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/kohms to ohms"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 759, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/Memory7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 760, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/closed contactor battery range"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 761, TARGET_STRING("PID_HSC_Model/Diagnostics/Ground Fault Detection/closed contactor battery range"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 762, TARGET_STRING("PID_HSC_Model/Diagnostics/Motor Control Fault/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 763, TARGET_STRING("PID_HSC_Model/Diagnostics/Over//UnderVoltage/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 764, TARGET_STRING("PID_HSC_Model/Diagnostics/Over//UnderVoltage/Compare To Constant1"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 765, TARGET_STRING("PID_HSC_Model/Diagnostics/OverDischarge/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 766, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/Compare To Constant1"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 767, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/Compare To Constant2"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 768, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/Compare To Constant3"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 769, TARGET_STRING("PID_HSC_Model/Diagnostics/Overheat/Compare To Constant6"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 770, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/CheckForDrive"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 771, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/CheckForReverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 772, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/ForwardMotionCheck"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 773, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/ReverseMotionCheck"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 774, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 775, TARGET_STRING("PID_HSC_Model/Diagnostics/Powertrain direction fault/IC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 776, TARGET_STRING("PID_HSC_Model/Diagnostics/Protect HV/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 777, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/CheckForDrive1"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 778, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/CheckForNeutral"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 779, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/CheckForPark1"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 780, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/CheckForReverse "),
    TARGET_STRING("const"), 0, 0, 0 },

  { 781, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/CheckForReverse2"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 782, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/FirstGearOrGreater"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 783, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/NinethGearOrless"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 784, TARGET_STRING("PID_HSC_Model/Diagnostics/Shift Validity/IC"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 785, TARGET_STRING("PID_HSC_Model/Diagnostics/motor_torque direction fault/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 786, TARGET_STRING("PID_HSC_Model/Diagnostics/motor_torque direction fault/IC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 787, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Compare To Constant"),
    TARGET_STRING("const"), 2, 0, 0 },

  { 788, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 789, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 790, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/prevents dividing by zero"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 791, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/prevents dividing by zero"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 792, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Check for key in Run"),
    TARGET_STRING("const"), 2, 0, 0 },

  { 793, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for Drive"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 794, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Reverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 795, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Unknown"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 796, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Compare To Constant"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 797, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Reverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 798, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 799, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 800, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain19"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 801, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/RPM_to_rad//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 802, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/prevents dividing by zero"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 803, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/prevents dividing by zero"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 804, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 805, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Increment Stored Integer/FixPt Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 806, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Compare To Constant2"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 807, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 808, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 809, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 810, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 811, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 812, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("InitialConditionForIntegrator"), 0, 0, 0 },

  { 813, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("DifferentiatorICPrevScaledInput"), 0, 0, 0 },

  { 814, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 815, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 816, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("m"), 0, 0, 0 },

  { 817, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("a"), 0, 0, 0 },

  { 818, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("b"), 0, 0, 0 },

  { 819, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("c"), 0, 0, 0 },

  { 820, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("g"), 0, 0, 0 },

  { 821, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("x_o"), 0, 0, 0 },

  { 822, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load"),
    TARGET_STRING("xdot_o"), 0, 0, 0 },

  { 823, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 824, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 825, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 826, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 827, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 828, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 829, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 830, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 831, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 832, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant26"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 833, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 834, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/deceleration"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 835, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 836, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 837, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 838, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 839, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator3"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 840, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time Integrator3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 841, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 842, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 843, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 844, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 845, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 846, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 847, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 848, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/kph2m//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 849, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 16, 0 },

  { 850, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 851, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 852, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 14, 0 },

  { 853, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 854, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table1"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 855, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 17, 0 },

  { 856, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table4"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 18, 0 },

  { 857, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/2-D Lookup Table4"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 858, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Far"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 859, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Far"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 860, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Far"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 861, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 862, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V1"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 863, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V1"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 864, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 865, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V2"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 866, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Medium V2"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 867, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Near"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 19, 0 },

  { 868, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Near"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 869, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Near"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 870, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 871, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 872, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 873, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 874, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 875, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 876, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 877, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 878, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation4"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 879, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Saturation4"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 880, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch14"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 881, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 882, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Delay One Step"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 883, TARGET_STRING("PID_HSC_Model/Diagnostics/motor_torque direction fault/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 884, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Drive"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 885, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Reverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 886, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for ShftLvrPos Unknown"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 887, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Creep Torque Threshold_Nm"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 888, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/1-D Lookup Creep Trq_Nm"),
    TARGET_STRING("Table"), 0, 3, 0 },

  { 889, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/1-D Lookup Creep Trq_Nm"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 890, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 20, 0 },

  { 891, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 892, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Delay One Step"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 893, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Check For  Launch Mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 894, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Load Torque Nm"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 895, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if cruise charging mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 896, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if low speed Cruise Charging mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 897, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if regen mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 898, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charge SOC Limit"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 899, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging SOC Limit"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 900, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/SOC Okay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 901, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 902, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 903, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 9, 0 },

  { 904, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks negative torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 905, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks positive torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 906, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks regen switch is on/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 907, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charging Motor Torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 908, TARGET_STRING("PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging Motor Torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 909, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/1//m2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 910, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 911, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/ZeroGain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 912, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator/Discrete/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 913, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 914, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 915, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 916, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 917, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 918, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/Tsamp/Internal Ts/Tsamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 919, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame/Road Load/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 920, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 921, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 922, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 923, TARGET_STRING("PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Block states information */
static rtwCAPI_States rtBlockStates[] = {
  /* addrMapIndex, contStateStartIndex, blockPath,
   * stateName, pathAlias, dWorkIndex, dataTypeIndex, dimIndex,
   * fixPtIdx, sTimeIndex, isContinuous, hierInfoIdx, flatElemIdx
   */
  { 924, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time\nIntegrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 925, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time\nIntegrator1"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 926, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /Subsystem/Discrete-Time\nIntegrator3"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 927, -1, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Delay One Step"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 928, -1, TARGET_STRING("PID_HSC_Model/ACC Controller /Subsystem/Delay One Step1"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 929, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time\nIntegrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  { 930, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time\nIntegrator1"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  { 931, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete-Time\nIntegrator3"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 932, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Delay One Step"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 933, -1, TARGET_STRING(
    "PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Delay One Step"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 934, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  { 935, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative1/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  { 936, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Discrete-Time\nIntegrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 937, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 0, 3, 0, 0, 0, -1, 0 },

  { 938, 1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Integrator1"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 1, 1, -1, 0 },

  { 939, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 940, -1, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator/Discrete/Integrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 941, 0, TARGET_STRING(
    "PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame/Road Load/Integrator3"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 1, 1, -1, 0 },

  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 942, TARGET_STRING("PedalMap_LCV"), 6, 0, 0 },

  { 943, TARGET_STRING("N"), 0, 7, 0 },

  { 944, TARGET_STRING("Re"), 0, 0, 0 },

  { 945, TARGET_STRING("bppRegenLookup"), 0, 23, 0 },

  { 946, TARGET_STRING("bppRegenMap"), 0, 23, 0 },

  { 947, TARGET_STRING("f_tbrake_n_bpt"), 0, 24, 0 },

  { 948, TARGET_STRING("motor_speed_bkp_rpm"), 0, 25, 0 },

  { 949, TARGET_STRING("peak_trq_curve"), 0, 25, 0 },

  { 950, TARGET_STRING("ACC_Distance_Lookup"), 0, 22, 0 },

  { 951, TARGET_STRING("ACC_Distance_Lookup_Direct_Distance"), 0, 26, 0 },

  { 952, TARGET_STRING("ACC_Distance_Lookup_Direct_DistanceV2"), 0, 26, 0 },

  { 953, TARGET_STRING("ACC_Far_Distance_Lookup_Direct"), 0, 26, 0 },

  { 954, TARGET_STRING("ACC_Near_Distance_Lookup_Direct"), 0, 27, 0 },

  { 955, TARGET_STRING("ContinuousBatteryCharge"), 0, 28, 0 },

  { 956, TARGET_STRING("ContinuousBatteryDischarge"), 0, 28, 0 },

  { 957, TARGET_STRING("InterpBatteryCharge"), 0, 29, 0 },

  { 958, TARGET_STRING("InterpBatteryDischarge"), 0, 29, 0 },

  { 959, TARGET_STRING("New_Mass_Toque_Map"), 0, 22, 0 },

  { 960, TARGET_STRING("Reverse_APP"), 0, 30, 0 },

  { 961, TARGET_STRING("Stoplight_distance_speed_only"), 0, 31, 0 },

  { 962, TARGET_STRING("tandivide"), 0, 20, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void PID_HSC_Model_InitializeDataAddr(void* dataAddr[], B_PID_HSC_Model_c_T
  *localB, DW_PID_HSC_Model_f_T *localDW, X_PID_HSC_Model_n_T *localX)
{
  dataAddr[0] = (void*) (&localB->CrsSpdLmtrSwStat);
  dataAddr[1] = (void*) (&localB->ACCATC_ACCAct);
  dataAddr[2] = (void*) (&localB->Track);
  dataAddr[3] = (void*) (&localB->CAVACCRequest);
  dataAddr[4] = (void*) (&localB->AutoMdSpdLmtStat);
  dataAddr[5] = (void*) (&localB->ACCAct370);
  dataAddr[6] = (void*) (&localB->AdapCrsCntVDA);
  dataAddr[7] = (void*) (&localB->ACCDrvrSeltdSpd);
  dataAddr[8] = (void*) (&localB->HoldCancelDecel);
  dataAddr[9] = (void*) (&localB->ACCSetSpd);
  dataAddr[10] = (void*) (&localB->Clock);
  dataAddr[11] = (void*) (&localB->CAVACCReq);
  dataAddr[12] = (void*) (&localB->CAVPCM_ACCAct);
  dataAddr[13] = (void*) (&localB->Gain_b);
  dataAddr[14] = (void*) (&localB->VehSpdms);
  dataAddr[15] = (void*) (&localB->OR);
  dataAddr[16] = (void*) (&localB->OR1);
  dataAddr[17] = (void*) (&localB->Switch_ja);
  dataAddr[18] = (void*) (&localB->CAVPCM_ACCMdActive);
  dataAddr[19] = (void*) (&localB->Switch10);
  dataAddr[20] = (void*) (&localB->Switch11_e);
  dataAddr[21] = (void*) (&localB->Switch12);
  dataAddr[22] = (void*) (&localB->Switch2);
  dataAddr[23] = (void*) (&localB->Switch3_b);
  dataAddr[24] = (void*) (&localB->Switch4);
  dataAddr[25] = (void*) (&localB->Switch5);
  dataAddr[26] = (void*) (&localB->Switch6);
  dataAddr[27] = (void*) (&localB->Switch7);
  dataAddr[28] = (void*) (&localB->Switch8);
  dataAddr[29] = (void*) (&localB->Switch9);
  dataAddr[30] = (void*) (&localB->sf_Chart_g.timer);
  dataAddr[31] = (void*) (&localB->timer_c);
  dataAddr[32] = (void*) (&localB->sf_Chart2_m.timer);
  dataAddr[33] = (void*) (&localB->timer);
  dataAddr[34] = (void*) (&localB->ChargeLimit_l);
  dataAddr[35] = (void*) (&localB->kphtomph_f);
  dataAddr[36] = (void*) (&localB->IC_m);
  dataAddr[37] = (void*) (&localB->IC1);
  dataAddr[38] = (void*) (&localB->IC2);
  dataAddr[39] = (void*) (&localB->IC3);
  dataAddr[40] = (void*) (&localB->IC4);
  dataAddr[41] = (void*) (&localB->IC5);
  dataAddr[42] = (void*) (&localB->IC6);
  dataAddr[43] = (void*) (&localB->IC7);
  dataAddr[44] = (void*) (&localB->IC8);
  dataAddr[45] = (void*) (&localB->ContinuousCurrentLimit);
  dataAddr[46] = (void*) (&localB->CurrentLimit);
  dataAddr[47] = (void*) (&localB->CurrentLimit_f);
  dataAddr[48] = (void*) (&localB->ContinuousDischageLimit);
  dataAddr[49] = (void*) (&localB->ContinuousMotorPowerLimit);
  dataAddr[50] = (void*) (&localB->ContinuousMotorPowerLimit1);
  dataAddr[51] = (void*) (&localB->ContinuousMotorPowerLimit2);
  dataAddr[52] = (void*) (&localB->ContinuousMotorPowerLimit3);
  dataAddr[53] = (void*) (&localB->DiscreteMotorPowerLimit);
  dataAddr[54] = (void*) (&localB->DiscreteMotorPowerLimit1);
  dataAddr[55] = (void*) (&localB->Memory);
  dataAddr[56] = (void*) (&localB->Memory1);
  dataAddr[57] = (void*) (&localB->ChargeLimit);
  dataAddr[58] = (void*) (&localB->DischargeLimit);
  dataAddr[59] = (void*) (&localB->CurrentDemanded);
  dataAddr[60] = (void*) (&localB->CurrentDemanded_k);
  dataAddr[61] = (void*) (&localB->Battery_Pwr_Limit_Charge);
  dataAddr[62] = (void*) (&localB->Battery_Pwr_Limit_Charge_a);
  dataAddr[63] = (void*) (&localB->Switch_l);
  dataAddr[64] = (void*) (&localB->Switch1_m);
  dataAddr[65] = (void*) (&localB->Switch3);
  dataAddr[66] = (void*) (&localB->Constant3);
  dataAddr[67] = (void*) (&localB->powerdirectionfault);
  dataAddr[68] = (void*) (&localB->VehSpd_ms);
  dataAddr[69] = (void*) (&localB->Memory1_m);
  dataAddr[70] = (void*) (&localB->Memory2);
  dataAddr[71] = (void*) (&localB->kphtomps);
  dataAddr[72] = (void*) (&localB->mpstorads);
  dataAddr[73] = (void*) (&localB->NOT);
  dataAddr[74] = (void*) (&localB->ACC_Deadzone);
  dataAddr[75] = (void*) (&localB->TotDrvrDmdTrq);
  dataAddr[76] = (void*) (&localB->map);
  dataAddr[77] = (void*) (&localB->Product);
  dataAddr[78] = (void*) (&localB->TotDrvrDmdTrq_g);
  dataAddr[79] = (void*) (&localB->preventszeroingPwrDmdat0kph);
  dataAddr[80] = (void*) (&localB->total);
  dataAddr[81] = (void*) (&localB->Switch_j);
  dataAddr[82] = (void*) (&localB->emcp_p_eng_des_W);
  dataAddr[83] = (void*) (&localB->emcp_ptot_W);
  dataAddr[84] = (void*) (&localB->emcp_p_elec_des_W);
  dataAddr[85] = (void*) (&localB->emcp_mode);
  dataAddr[86] = (void*) (&localB->Abs);
  dataAddr[87] = (void*) (&localB->Abs1_a);
  dataAddr[88] = (void*) (&localB->FinalDrive);
  dataAddr[89] = (void*) (&localB->Gain_m);
  dataAddr[90] = (void*) (&localB->Gain1);
  dataAddr[91] = (void*) (&localB->Gain2);
  dataAddr[92] = (void*) (&localB->Gain4);
  dataAddr[93] = (void*) (&localB->kphtomph_c);
  dataAddr[94] = (void*) (&localB->kphtomps_m);
  dataAddr[95] = (void*) (&localB->kphtomps1);
  dataAddr[96] = (void*) (&localB->uDLookupTable);
  dataAddr[97] = (void*) (&localB->uDLookupTable1);
  dataAddr[98] = (void*) (&localB->Product_d);
  dataAddr[99] = (void*) (&localB->Product1_m);
  dataAddr[100] = (void*) (&localB->Engine_Axle_Torque);
  dataAddr[101] = (void*) (&localB->Saturation_h);
  dataAddr[102] = (void*) (&localB->Saturation1);
  dataAddr[103] = (void*) (&localB->totaloutputpower);
  dataAddr[104] = (void*) (&localB->eng_mot);
  dataAddr[105] = (void*) (&localB->diff);
  dataAddr[106] = (void*) (&localB->diff_d);
  dataAddr[107] = (void*) (&localB->diff_ds);
  dataAddr[108] = (void*) (&localB->Switch_i);
  dataAddr[109] = (void*) (&localB->DirectLookupTablenD);
  dataAddr[110] = (void*) (&localB->dist_is_valid);
  dataAddr[111] = (void*) (&localB->CastToBoolean1);
  dataAddr[112] = (void*) (&localB->xdotref);
  dataAddr[113] = (void*) (&localB->ACCBrakeTime);
  dataAddr[114] = (void*) (&localB->TrafficLightPresent);
  dataAddr[115] = (void*) (&localB->CAVtrgVel);
  dataAddr[116] = (void*) (&localB->CAVtrgDist);
  dataAddr[117] = (void*) (&localB->grade);
  dataAddr[118] = (void*) (&localB->CastToBoolean16);
  dataAddr[119] = (void*) (&localB->CastToBoolean2);
  dataAddr[120] = (void*) (&localB->CastToBoolean22);
  dataAddr[121] = (void*) (&localB->APP);
  dataAddr[122] = (void*) (&localB->CastToBoolean24);
  dataAddr[123] = (void*) (&localB->CastToBoolean25);
  dataAddr[124] = (void*) (&localB->CastToBoolean26);
  dataAddr[125] = (void*) (&localB->CastToBoolean27);
  dataAddr[126] = (void*) (&localB->gear);
  dataAddr[127] = (void*) (&localB->CastToBoolean29);
  dataAddr[128] = (void*) (&localB->CastToBoolean3);
  dataAddr[129] = (void*) (&localB->CastToBoolean30);
  dataAddr[130] = (void*) (&localB->CastToBoolean31);
  dataAddr[131] = (void*) (&localB->CastToBoolean32);
  dataAddr[132] = (void*) (&localB->CastToBoolean33);
  dataAddr[133] = (void*) (&localB->CastToBoolean34);
  dataAddr[134] = (void*) (&localB->CastToBoolean35);
  dataAddr[135] = (void*) (&localB->CastToBoolean36);
  dataAddr[136] = (void*) (&localB->CastToBoolean37);
  dataAddr[137] = (void*) (&localB->CastToBoolean38);
  dataAddr[138] = (void*) (&localB->lvrpos);
  dataAddr[139] = (void*) (&localB->CastToBoolean4);
  dataAddr[140] = (void*) (&localB->CastToBoolean40);
  dataAddr[141] = (void*) (&localB->CastToBoolean41);
  dataAddr[142] = (void*) (&localB->CastToBoolean42);
  dataAddr[143] = (void*) (&localB->CastToBoolean43);
  dataAddr[144] = (void*) (&localB->CastToBoolean44);
  dataAddr[145] = (void*) (&localB->CastToBoolean45);
  dataAddr[146] = (void*) (&localB->CastToBoolean46);
  dataAddr[147] = (void*) (&localB->CastToBoolean47);
  dataAddr[148] = (void*) (&localB->CastToBoolean48);
  dataAddr[149] = (void*) (&localB->CastToBoolean49);
  dataAddr[150] = (void*) (&localB->CastToBoolean5);
  dataAddr[151] = (void*) (&localB->CastToBoolean50);
  dataAddr[152] = (void*) (&localB->CastToBoolean51);
  dataAddr[153] = (void*) (&localB->CastToBoolean6);
  dataAddr[154] = (void*) (&localB->DrvIntndAxlTrqMax);
  dataAddr[155] = (void*) (&localB->DrvIntndAxlTrqMin);
  dataAddr[156] = (void*) (&localB->TrqReqStat);
  dataAddr[157] = (void*) (&localB->Tanh_Exponent);
  dataAddr[158] = (void*) (&localB->Tanh_multiplier);
  dataAddr[159] = (void*) (&localB->CurrentState);
  dataAddr[160] = (void*) (&localB->DistanceToIntersection);
  dataAddr[161] = (void*) (&localB->TimeToIntersection);
  dataAddr[162] = (void*) (&localB->Decel_Division_Value);
  dataAddr[163] = (void*) (&localB->bcm_coolan_temp_C);
  dataAddr[164] = (void*) (&localB->DataTypeConversion_g);
  dataAddr[165] = (void*) (&localB->kphtomph_o);
  dataAddr[166] = (void*) (&localB->rbcp_regen_enable);
  dataAddr[167] = (void*) (&localB->LogicalOperator_l);
  dataAddr[168] = (void*) (&localB->BPPFadeOut);
  dataAddr[169] = (void*) (&localB->SteeringWheelAngleFadeOut);
  dataAddr[170] = (void*) (&localB->rbcp_brake_motor_fade_out);
  dataAddr[171] = (void*) (&localB->rbcp_brake_power_demand_W);
  dataAddr[172] = (void*) (&localB->RegenPowerW);
  dataAddr[173] = (void*) (&localB->Product2_a);
  dataAddr[174] = (void*) (&localB->Product3);
  dataAddr[175] = (void*) (&localB->Saturation1_g);
  dataAddr[176] = (void*) (&localB->Add_k);
  dataAddr[177] = (void*) (&localB->hsc_bms_enable);
  dataAddr[178] = (void*) (&localB->hsc_bms_leakage_ena);
  dataAddr[179] = (void*) (&localB->hsc_bms_mainc_close);
  dataAddr[180] = (void*) (&localB->hsc_brusa_enable);
  dataAddr[181] = (void*) (&localB->Eng_Start);
  dataAddr[182] = (void*) (&localB->hsc_mpdm_R1_bmsIgn);
  dataAddr[183] = (void*) (&localB->hsc_mpdm_R2_mcuIgn);
  dataAddr[184] = (void*) (&localB->VMU_Cmd1_OpReq);
  dataAddr[185] = (void*) (&localB->VMU_Cmd2_OpMdCmd);
  dataAddr[186] = (void*) (&localB->vmcp_StartupSt);
  dataAddr[187] = (void*) (&localB->vmcp_operating_mode);
  dataAddr[188] = (void*) (&localB->hsc_mpdm_R8_bmsPwr);
  dataAddr[189] = (void*) (&localB->hsc_mpdm_HVpump);
  dataAddr[190] = (void*) (&localB->VMU_Kickout);
  dataAddr[191] = (void*) (&localB->VMU_Cmd2_CommandMd);
  dataAddr[192] = (void*) (&localB->kphtomph);
  dataAddr[193] = (void*) (&localB->ACCLookup.Switch5);
  dataAddr[194] = (void*) (&localB->ACCLookup.Divide1);
  dataAddr[195] = (void*) (&localB->ACCLookup.Saturation1);
  dataAddr[196] = (void*) (&localB->ACCLookup.DistErrFLipped);
  dataAddr[197] = (void*) (&localB->ACCLookup.TargetRelPos);
  dataAddr[198] = (void*) (( &localB->ACCLookup.DistInfo[0] + 1));
  dataAddr[199] = (void*) (&localB->ACCLookup.Product2);
  dataAddr[200] = (void*) (&localB->ACCLookup.ACCReqPwr);
  dataAddr[201] = (void*) (&localB->ACCLookup.Constant21);
  dataAddr[202] = (void*) (&localB->ACCLookup.Constant23);
  dataAddr[203] = (void*) (&localB->ACCLookup.Constant22);
  dataAddr[204] = (void*) (&localB->ACCLookup.Constant2);
  dataAddr[205] = (void*) (&localB->ACCLookup.Saturation4);
  dataAddr[206] = (void*) (&localB->ACCLookup.AccelCmd);
  dataAddr[207] = (void*) (&localB->ACCLookup.TotalForce);
  dataAddr[208] = (void*) (&localB->ACCLookup.SetSpeedError);
  dataAddr[209] = (void*) (&localB->ACCLookup.SetSpd);
  dataAddr[210] = (void*) (&localB->ACCLookup.CastToBoolean1);
  dataAddr[211] = (void*) (&localB->ACCLookup.Minus2);
  dataAddr[212] = (void*) (&localB->ACCLookup.StopLightAccel);
  dataAddr[213] = (void*) (&localB->Compare_av);
  dataAddr[214] = (void*) (&localB->Compare_pq);
  dataAddr[215] = (void*) (&localB->Compare_mu);
  dataAddr[216] = (void*) (&localB->EgoSpd);
  dataAddr[217] = (void*) (&localB->TargetPos);
  dataAddr[218] = (void*) (&localB->EgoPos);
  dataAddr[219] = (void*) (&localB->Add);
  dataAddr[220] = (void*) (&localB->Add1);
  dataAddr[221] = (void*) (&localB->Switch);
  dataAddr[222] = (void*) (&localB->Switch1);
  dataAddr[223] = (void*) (&localB->LastSpeed);
  dataAddr[224] = (void*) (&localB->LastDistance);
  dataAddr[225] = (void*) (&localB->KeepTrackValidity);
  dataAddr[226] = (void*) (&localB->DistanceValidity);
  dataAddr[227] = (void*) (&localB->DistanceKeepTrack);
  dataAddr[228] = (void*) (&localB->Gain_h);
  dataAddr[229] = (void*) (&localB->LeadVehicleSpeedmph);
  dataAddr[230] = (void*) (&localB->DistanceValidity_d);
  dataAddr[231] = (void*) (&localB->SafeDist);
  dataAddr[232] = (void*) (&localB->ActDist);
  dataAddr[233] = (void*) (&localB->Minus);
  dataAddr[234] = (void*) (&localB->Distance);
  dataAddr[235] = (void*) (&localB->DistErr);
  dataAddr[236] = (void*) (&localB->SafeDist2);
  dataAddr[237] = (void*) (&localB->Switch11);
  dataAddr[238] = (void*) (&localB->DelayOneStep);
  dataAddr[239] = (void*) (&localB->DelayOneStep1);
  dataAddr[240] = (void*) (&localB->MatrixConcatenate[0]);
  dataAddr[241] = (void*) (&localB->MatrixConcatenate1[0]);
  dataAddr[242] = (void*) (( &localB->MatrixConcatenate[0] + 2));
  dataAddr[243] = (void*) (&localB->MatrixConcatenate1[0]);
  dataAddr[244] = (void*) (( &localB->MatrixConcatenate1[0] + 4));
  dataAddr[245] = (void*) (&localB->VehicleSpeedMultiplier);
  dataAddr[246] = (void*) (&localB->Product_m);
  dataAddr[247] = (void*) (&localB->DynamicPSOCTable1);
  dataAddr[248] = (void*) (( &localB->MatrixConcatenate1[0] + 1));
  dataAddr[249] = (void*) (( &localB->MatrixConcatenate1[0] + 3));
  dataAddr[250] = (void*) (&localB->Switch_jq);
  dataAddr[251] = (void*) (&localB->LowerRelop1_e);
  dataAddr[252] = (void*) (&localB->UpperRelop_h);
  dataAddr[253] = (void*) (&localB->Switch_lp);
  dataAddr[254] = (void*) (&localB->Switch2_p);
  dataAddr[255] = (void*) (&localB->sf_ABSRegenOff.Fault_Out);
  dataAddr[256] = (void*) (&localB->BPPTrqCancel);
  dataAddr[257] = (void*) (&localB->BPPTrqCancel_h);
  dataAddr[258] = (void*) (&localB->LogicalOperator3_d);
  dataAddr[259] = (void*) (&localB->sf_ABSRegenOff_f.Fault_Out);
  dataAddr[260] = (void*) (&localB->GFDLightOn);
  dataAddr[261] = (void*) (&localB->FirstTimeFlag);
  dataAddr[262] = (void*) (&localB->DataTypeConversion3_k);
  dataAddr[263] = (void*) (&localB->kohmstoohms);
  dataAddr[264] = (void*) (&localB->gfd);
  dataAddr[265] = (void*) (&localB->Memory7);
  dataAddr[266] = (void*) (&localB->Divide);
  dataAddr[267] = (void*) (&localB->closedcontactorbatteryrange);
  dataAddr[268] = (void*) (&localB->LogicalOperator1_c);
  dataAddr[269] = (void*) (&localB->sf_OverVoltage.Fault_Out);
  dataAddr[270] = (void*) (&localB->sf_UnderVoltage.Fault_Out);
  dataAddr[271] = (void*) (&localB->sf_OverDischarge.Fault_Out);
  dataAddr[272] = (void*) (&localB->Fault_d);
  dataAddr[273] = (void*) (&localB->Fault_i);
  dataAddr[274] = (void*) (&localB->Fault);
  dataAddr[275] = (void*) (&localB->DataTypeConversion1_k);
  dataAddr[276] = (void*) (&localB->DataTypeConversion2);
  dataAddr[277] = (void*) (&localB->DataTypeConversion3);
  dataAddr[278] = (void*) (&localB->DataTypeConversion7);
  dataAddr[279] = (void*) (&localB->LogicalOperator);
  dataAddr[280] = (void*) (&localB->sf_Faultcounter1.fail_flag);
  dataAddr[281] = (void*) (&localB->DataTypeConversion);
  dataAddr[282] = (void*) (&localB->Gain);
  dataAddr[283] = (void*) (&localB->IC);
  dataAddr[284] = (void*) (&localB->LogicalOperator6);
  dataAddr[285] = (void*) (&localB->LogicalOperator7);
  dataAddr[286] = (void*) (&localB->LogicalOperator8);
  dataAddr[287] = (void*) (&localB->LogicalOperator1_a);
  dataAddr[288] = (void*) (&localB->fail_flag);
  dataAddr[289] = (void*) (&localB->DataTypeConversion1);
  dataAddr[290] = (void*) (&localB->IC_e);
  dataAddr[291] = (void*) (&localB->RecieveDrive);
  dataAddr[292] = (void*) (&localB->LogicalOperator1);
  dataAddr[293] = (void*) (&localB->LogicalOperator2);
  dataAddr[294] = (void*) (&localB->LogicalOperator3);
  dataAddr[295] = (void*) (&localB->LogicalOperator4);
  dataAddr[296] = (void*) (&localB->LogicalOperator5);
  dataAddr[297] = (void*) (&localB->LogicalOperator6_k);
  dataAddr[298] = (void*) (&localB->LogicalOperator7_c);
  dataAddr[299] = (void*) (&localB->LogicalOperator1_i);
  dataAddr[300] = (void*) (&localB->sf_Faultcounter1_f.fail_flag);
  dataAddr[301] = (void*) (&localB->Abs1_d);
  dataAddr[302] = (void*) (&localB->Abs2);
  dataAddr[303] = (void*) (&localB->Abs3);
  dataAddr[304] = (void*) (&localB->DataTypeConversion4);
  dataAddr[305] = (void*) (&localB->IC_d);
  dataAddr[306] = (void*) (&localB->AND_a);
  dataAddr[307] = (void*) (&localB->Product2);
  dataAddr[308] = (void*) (&localB->Add_m);
  dataAddr[309] = (void*) (&localB->whlspd);
  dataAddr[310] = (void*) (&localB->MinMax1);
  dataAddr[311] = (void*) (&localB->Divide_g);
  dataAddr[312] = (void*) (&localB->Product_f);
  dataAddr[313] = (void*) (&localB->Saturation);
  dataAddr[314] = (void*) (&localB->preventsdividingbyzero);
  dataAddr[315] = (void*) (&localB->Switch2_d);
  dataAddr[316] = (void*) (&localB->TorqueLoss);
  dataAddr[317] = (void*) (&localB->Gain_ha);
  dataAddr[318] = (void*) (&localB->Gain1_l);
  dataAddr[319] = (void*) (&localB->VehSpdMPH);
  dataAddr[320] = (void*) (&localB->RPM_to_rads);
  dataAddr[321] = (void*) (&localB->DiagnosticFaults);
  dataAddr[322] = (void*) (&localB->LogicalOperator_d);
  dataAddr[323] = (void*) (&localB->LogicalOperator1_e);
  dataAddr[324] = (void*) (&localB->Motor_Trq_Req_Raw_Nm);
  dataAddr[325] = (void*) (&localB->PowerLossBetweenShifts);
  dataAddr[326] = (void*) (&localB->Product3_f);
  dataAddr[327] = (void*) (&localB->preventsdividingbyzero_h);
  dataAddr[328] = (void*) (&localB->Add_g);
  dataAddr[329] = (void*) (&localB->Switch_e);
  dataAddr[330] = (void*) (&localB->motor_trq_demand_Nm);
  dataAddr[331] = (void*) (&localB->Switch2_py);
  dataAddr[332] = (void*) (&localB->AND_f);
  dataAddr[333] = (void*) (&localB->ACC_Correc_Eng);
  dataAddr[334] = (void*) (&localB->AND);
  dataAddr[335] = (void*) (&localB->ACC_Correc_Mot);
  dataAddr[336] = (void*) (&localB->FixPtGatewayIn);
  dataAddr[337] = (void*) (&localB->FixPtSum1);
  dataAddr[338] = (void*) (&localB->Compare_o);
  dataAddr[339] = (void*) (&localB->Compare_kp);
  dataAddr[340] = (void*) (&localB->Compare_nj);
  dataAddr[341] = (void*) (&localB->Compare_o0);
  dataAddr[342] = (void*) (&localB->Compare_oa);
  dataAddr[343] = (void*) (&localB->ACCLookup.TargetRelPos);
  dataAddr[344] = (void*) (&localB->ACCLookup.DistInfo[0]);
  dataAddr[345] = (void*) (&localB->ACCLookup.Switch_e);
  dataAddr[346] = (void*) (&localB->ACCLookup.LastDistance);
  dataAddr[347] = (void*) (&localB->ACCLookup.Constant2);
  dataAddr[348] = (void*) (&localB->ACCLookup.Constant21);
  dataAddr[349] = (void*) (&localB->ACCLookup.Constant22);
  dataAddr[350] = (void*) (&localB->ACCLookup.Constant23);
  dataAddr[351] = (void*) (&localB->ACCLookup.CastToBoolean1);
  dataAddr[352] = (void*) (&localB->ACCLookup.EgoPosition);
  dataAddr[353] = (void*) (&localB->ACCLookup.xdotPosition);
  dataAddr[354] = (void*) (&localB->ACCLookup.DistanceKeepTrack);
  dataAddr[355] = (void*) (&localB->ACCLookup.Gain);
  dataAddr[356] = (void*) (&localB->ACCLookup.Gain1);
  dataAddr[357] = (void*) (&localB->ACCLookup.Gain2);
  dataAddr[358] = (void*) (&localB->ACCLookup.Gain3);
  dataAddr[359] = (void*) (&localB->ACCLookup.Gain4);
  dataAddr[360] = (void*) (&localB->ACCLookup.Gain5);
  dataAddr[361] = (void*) (&localB->ACCLookup.Gain6);
  dataAddr[362] = (void*) (&localB->ACCLookup.Multiply);
  dataAddr[363] = (void*) (&localB->ACCLookup.SetSpd);
  dataAddr[364] = (void*) (&localB->ACCLookup.NOT2);
  dataAddr[365] = (void*) (&localB->ACCLookup.OR1);
  dataAddr[366] = (void*) (&localB->ACCLookup.uDLookupTable);
  dataAddr[367] = (void*) (&localB->ACCLookup.uDLookupTable1);
  dataAddr[368] = (void*) (&localB->ACCLookup.uDLookupTable4);
  dataAddr[369] = (void*) (&localB->ACCLookup.Far);
  dataAddr[370] = (void*) (&localB->ACCLookup.MediumV1);
  dataAddr[371] = (void*) (&localB->ACCLookup.MediumV2);
  dataAddr[372] = (void*) (&localB->ACCLookup.Near);
  dataAddr[373] = (void*) (&localB->ACCLookup.TotalACCAccel);
  dataAddr[374] = (void*) (&localB->ACCLookup.DistanceControllerAccel);
  dataAddr[375] = (void*) (&localB->ACCLookup.Divide);
  dataAddr[376] = (void*) (&localB->ACCLookup.Divide1);
  dataAddr[377] = (void*) (&localB->ACCLookup.Divide2);
  dataAddr[378] = (void*) (&localB->ACCLookup.Divide4);
  dataAddr[379] = (void*) (&localB->ACCLookup.Product2);
  dataAddr[380] = (void*) (&localB->ACCLookup.ACCReqPwr_m);
  dataAddr[381] = (void*) (&localB->ACCLookup.RateTransition);
  dataAddr[382] = (void*) (&localB->ACCLookup.RateTransition1);
  dataAddr[383] = (void*) (&localB->ACCLookup.RateTransition2);
  dataAddr[384] = (void*) (&localB->ACCLookup.Saturation_e);
  dataAddr[385] = (void*) (&localB->ACCLookup.Saturation1);
  dataAddr[386] = (void*) (&localB->ACCLookup.AccelCmd);
  dataAddr[387] = (void*) (&localB->ACCLookup.Saturation3);
  dataAddr[388] = (void*) (&localB->ACCLookup.Saturation4);
  dataAddr[389] = (void*) (&localB->ACCLookup.Minus2);
  dataAddr[390] = (void*) (&localB->ACCLookup.SetSpeedError);
  dataAddr[391] = (void*) (&localB->ACCLookup.Switch1);
  dataAddr[392] = (void*) (&localB->ACCLookup.Switch11);
  dataAddr[393] = (void*) (&localB->ACCLookup.Switch14);
  dataAddr[394] = (void*) (&localB->ACCLookup.ACCReqPwr);
  dataAddr[395] = (void*) (&localB->ACCLookup.StopLightAccel);
  dataAddr[396] = (void*) (&localB->ACCLookup.Switch5);
  dataAddr[397] = (void*) (&localB->ACCLookup.DelayOneStep);
  dataAddr[398] = (void*) (&localB->ACCLookup.DistErrFLipped);
  dataAddr[399] = (void*) (&localB->Compare_kf);
  dataAddr[400] = (void*) (&localB->Compare_j1);
  dataAddr[401] = (void*) (&localB->Compare_j2);
  dataAddr[402] = (void*) (&localB->Compare_nf);
  dataAddr[403] = (void*) (&localB->Compare_m);
  dataAddr[404] = (void*) (&localB->Compare_e);
  dataAddr[405] = (void*) (&localB->Compare_nx);
  dataAddr[406] = (void*) (&localB->Compare_jlo);
  dataAddr[407] = (void*) (&localB->Compare_c);
  dataAddr[408] = (void*) (&localB->Compare_ej);
  dataAddr[409] = (void*) (&localB->Compare_jl);
  dataAddr[410] = (void*) (&localB->Compare_b);
  dataAddr[411] = (void*) (&localB->Compare_l);
  dataAddr[412] = (void*) (&localB->Compare_f);
  dataAddr[413] = (void*) (&localB->Compare_i);
  dataAddr[414] = (void*) (&localB->Compare);
  dataAddr[415] = (void*) (&localB->Compare_k);
  dataAddr[416] = (void*) (&localB->Compare_n);
  dataAddr[417] = (void*) (&localB->Compare_j);
  dataAddr[418] = (void*) (&localB->Compare_a);
  dataAddr[419] = (void*) (&localB->Compare_h);
  dataAddr[420] = (void*) (&localB->Compare_fb);
  dataAddr[421] = (void*) (&localB->Compare_lt);
  dataAddr[422] = (void*) (&localB->Compare_nq);
  dataAddr[423] = (void*) (&localB->Compare_p);
  dataAddr[424] = (void*) (&localB->Compare_ha);
  dataAddr[425] = (void*) (&localB->LogicalOperator_f);
  dataAddr[426] = (void*) (&localB->LogicalOperator1_d);
  dataAddr[427] = (void*) (&localB->Compare_bf);
  dataAddr[428] = (void*) (&localB->Compare_ib);
  dataAddr[429] = (void*) (&localB->Compare_o5);
  dataAddr[430] = (void*) (&localB->Compare_mq);
  dataAddr[431] = (void*) (&localB->Compare_nw);
  dataAddr[432] = (void*) (&localB->Abs1);
  dataAddr[433] = (void*) (&localB->uDLookupCreepTrq_Nm);
  dataAddr[434] = (void*) (&localB->Switch2_a);
  dataAddr[435] = (void*) (&localB->TorqueOut);
  dataAddr[436] = (void*) (&localB->DeltaTime);
  dataAddr[437] = (void*) (&localB->TorqueReversed);
  dataAddr[438] = (void*) (&localB->Abs_g);
  dataAddr[439] = (void*) (&localB->uDLookupTable1_g);
  dataAddr[440] = (void*) (&localB->Product_n);
  dataAddr[441] = (void*) (&localB->Product1);
  dataAddr[442] = (void*) (&localB->Product2_i);
  dataAddr[443] = (void*) (&localB->Switch_oa);
  dataAddr[444] = (void*) (&localB->Tanh);
  dataAddr[445] = (void*) (&localB->DelayOneStep_b);
  dataAddr[446] = (void*) (&localB->LowerRelop1_h);
  dataAddr[447] = (void*) (&localB->UpperRelop_l);
  dataAddr[448] = (void*) (&localB->Switch_gc);
  dataAddr[449] = (void*) (&localB->Switch2_m);
  dataAddr[450] = (void*) (&localB->Switch1_i);
  dataAddr[451] = (void*) (&localB->LogicalOperator1_a1);
  dataAddr[452] = (void*) (&localB->OR_n);
  dataAddr[453] = (void*)
    (&localB->allowsbrakingtorqueifineithercruisechangingmodes);
  dataAddr[454] = (void*) (&localB->Compare_m2);
  dataAddr[455] = (void*) (&localB->LogicalOperator_fc);
  dataAddr[456] = (void*) (&localB->LogicalOperator1_d1);
  dataAddr[457] = (void*) (&localB->LogicalOperator2_m);
  dataAddr[458] = (void*) (&localB->MultiportSwitch);
  dataAddr[459] = (void*) (&localB->LowerRelop1_n);
  dataAddr[460] = (void*) (&localB->UpperRelop_e);
  dataAddr[461] = (void*) (&localB->Switch_g);
  dataAddr[462] = (void*) (&localB->Switch2_cx);
  dataAddr[463] = (void*) (&localB->LowerRelop1);
  dataAddr[464] = (void*) (&localB->UpperRelop);
  dataAddr[465] = (void*) (&localB->Switch_o);
  dataAddr[466] = (void*) (&localB->Switch2_c);
  dataAddr[467] = (void*) (&localB->ACCLookup.Compare);
  dataAddr[468] = (void*) (&localB->ACCLookup.Diff_g);
  dataAddr[469] = (void*) (&localB->ACCLookup.TSamp);
  dataAddr[470] = (void*) (&localB->ACCLookup.Uk1);
  dataAddr[471] = (void*) (&localB->ACCLookup.Diff_l);
  dataAddr[472] = (void*) (&localB->ACCLookup.TSamp_l);
  dataAddr[473] = (void*) (&localB->ACCLookup.Uk1_c);
  dataAddr[474] = (void*) (&localB->ACCLookup.VectorConcatenate_e[0]);
  dataAddr[475] = (void*) (&localB->ACCLookup.VectorConcatenate1[0]);
  dataAddr[476] = (void*) (&localB->ACCLookup.DiscreteTimeIntegrator);
  dataAddr[477] = (void*) (&localB->ACCLookup.Product);
  dataAddr[478] = (void*) (&localB->ACCLookup.VectorConcatenate_e[0]);
  dataAddr[479] = (void*) (( &localB->ACCLookup.VectorConcatenate_e[0] + 1));
  dataAddr[480] = (void*) (&localB->ACCLookup.Switch_l[0]);
  dataAddr[481] = (void*) (&localB->ACCLookup.UnitDelay[0]);
  dataAddr[482] = (void*) (&localB->Compare_nm);
  dataAddr[483] = (void*) (&localB->Compare_lf);
  dataAddr[484] = (void*) (&localB->Compare_g);
  dataAddr[485] = (void*) (&localB->Compare_nu);
  dataAddr[486] = (void*) (&localB->Compare_jg);
  dataAddr[487] = (void*) (&localB->Compare_bz);
  dataAddr[488] = (void*) (&localB->Compare_lv);
  dataAddr[489] = (void*) (&localB->Compare_lz);
  dataAddr[490] = (void*) (&localB->Compare_nz);
  dataAddr[491] = (void*) (&localB->Compare_me);
  dataAddr[492] = (void*) (&localB->Compare_ni);
  dataAddr[493] = (void*) (&localB->Compare_fi);
  dataAddr[494] = (void*) (&localB->Compare_d);
  dataAddr[495] = (void*) (&localB->Compare_el);
  dataAddr[496] = (void*) (&localB->Compare_ns);
  dataAddr[497] = (void*) (&localB->ACCLookup.VectorConcatenate_k[0]);
  dataAddr[498] = (void*) (&localB->ACCLookup.VectorConcatenate1_i[0]);
  dataAddr[499] = (void*) (&localB->ACCLookup.VectorConcatenate2[0]);
  dataAddr[500] = (void*) (&localB->ACCLookup.VectorConcatenate3[0]);
  dataAddr[501] = (void*) (&localB->ACCLookup.VectorConcatenate4[0]);
  dataAddr[502] = (void*) (&localB->ACCLookup.VectorConcatenate5[0]);
  dataAddr[503] = (void*) (&localB->ACCLookup.VectorConcatenate6[0]);
  dataAddr[504] = (void*) (&localB->ACCLookup.um2);
  dataAddr[505] = (void*) (&localB->ACCLookup.b);
  dataAddr[506] = (void*) (&localB->ACCLookup.c);
  dataAddr[507] = (void*) (&localB->ACCLookup.m);
  dataAddr[508] = (void*) (&localB->ACCLookup.m1);
  dataAddr[509] = (void*) (&localB->ACCLookup.VectorConcatenate3[0]);
  dataAddr[510] = (void*) (( &localB->ACCLookup.VectorConcatenate_k[0] + 1));
  dataAddr[511] = (void*) (&localB->ACCLookup.Product5);
  dataAddr[512] = (void*) (&localB->ACCLookup.Product6);
  dataAddr[513] = (void*) (&localB->ACCLookup.Product7);
  dataAddr[514] = (void*) (&localB->ACCLookup.Add1);
  dataAddr[515] = (void*) (&localB->ACCLookup.TotalForce);
  dataAddr[516] = (void*) (&localB->ACCLookup.TrigonometricFunction1_o1);
  dataAddr[517] = (void*) (&localB->ACCLookup.TrigonometricFunction1_o2);
  dataAddr[518] = (void*) (&localB->ACCLookup.TrigonometricFunction2);
  dataAddr[519] = (void*) (&localB->ACCLookup.UnitConversion);
  dataAddr[520] = (void*) (&localB->ACCLookup.DataTypeConv1);
  dataAddr[521] = (void*) (&localB->ACCLookup.DataTypeConv2);
  dataAddr[522] = (void*) (&localB->ACCLookup.ZeroGain);
  dataAddr[523] = (void*) (&localB->ACCLookup.AND3);
  dataAddr[524] = (void*) (&localB->ACCLookup.Equal1);
  dataAddr[525] = (void*) (&localB->ACCLookup.NotEqual);
  dataAddr[526] = (void*) (&localB->ACCLookup.SignPreIntegrator);
  dataAddr[527] = (void*) (&localB->ACCLookup.SignPreSat);
  dataAddr[528] = (void*) (&localB->ACCLookup.Switch);
  dataAddr[529] = (void*) (&localB->ACCLookup.DerivativeGain);
  dataAddr[530] = (void*) (&localB->ACCLookup.Diff);
  dataAddr[531] = (void*) (&localB->ACCLookup.UD);
  dataAddr[532] = (void*) (&localB->ACCLookup.IntegralGain);
  dataAddr[533] = (void*) (&localB->ACCLookup.Integrator);
  dataAddr[534] = (void*) (&localB->ACCLookup.ProportionalGain);
  dataAddr[535] = (void*) (&localB->ACCLookup.Saturation);
  dataAddr[536] = (void*) (&localB->ACCLookup.Sum);
  dataAddr[537] = (void*) (&localB->ACCLookup.SumFdbk);
  dataAddr[538] = (void*) (&localB->ACCLookup.Transpose_d[0]);
  dataAddr[539] = (void*) (&localB->ACCLookup.Product_c[0]);
  dataAddr[540] = (void*) (&localB->ACCLookup.Constant1);
  dataAddr[541] = (void*) (&localB->ACCLookup.Constant10);
  dataAddr[542] = (void*) (&localB->ACCLookup.Y);
  dataAddr[543] = (void*) (&localB->ACCLookup.Constant2_i);
  dataAddr[544] = (void*) (&localB->ACCLookup.Add);
  dataAddr[545] = (void*) (&localB->ACCLookup.VectorConcatenate_b[0]);
  dataAddr[546] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 3));
  dataAddr[547] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 6));
  dataAddr[548] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 1));
  dataAddr[549] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 4));
  dataAddr[550] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 7));
  dataAddr[551] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 2));
  dataAddr[552] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 5));
  dataAddr[553] = (void*) (( &localB->ACCLookup.VectorConcatenate_b[0] + 8));
  dataAddr[554] = (void*) (&localB->ACCLookup.sincos_o1_h[0]);
  dataAddr[555] = (void*) (&localB->ACCLookup.sincos_o2_n[0]);
  dataAddr[556] = (void*) (&localB->ACCLookup.DeadZone);
  dataAddr[557] = (void*) (&localB->ACCLookup.Tsamp);
  dataAddr[558] = (void*) (&localB->ACCLookup.Constant11);
  dataAddr[559] = (void*) (&localB->ACCLookup.x);
  dataAddr[560] = (void*) (&localB->ACCLookup.UnitConversion_e[0]);
  dataAddr[561] = (void*) (&localB->ACCLookup.Constant14);
  dataAddr[562] = (void*) (&localB->ACCLookup.Constant5);
  dataAddr[563] = (void*) (&localB->ACCLookup.Constant7);
  dataAddr[564] = (void*) (&localB->ACCLookup.Transpose[0]);
  dataAddr[565] = (void*) (&localB->ACCLookup.Product_h[0]);
  dataAddr[566] = (void*) (&localB->ACCLookup.Product_d);
  dataAddr[567] = (void*) (&localB->ACCLookup.Product1);
  dataAddr[568] = (void*) (&localB->ACCLookup.Product8);
  dataAddr[569] = (void*) (&localB->ACCLookup.Product9);
  dataAddr[570] = (void*) (&localB->ACCLookup.UnaryMinus);
  dataAddr[571] = (void*) (&localB->ACCLookup.UnaryMinus1);
  dataAddr[572] = (void*) (&localB->ACCLookup.UnitConversion_l);
  dataAddr[573] = (void*) (&localB->ACCLookup.VectorConcatenate_b[0]);
  dataAddr[574] = (void*) (&localB->ACCLookup.Reshape9to3x3columnmajor_c[0]);
  dataAddr[575] = (void*) (&localB->ACCLookup.VectorConcatenate[0]);
  dataAddr[576] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 3));
  dataAddr[577] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 6));
  dataAddr[578] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 1));
  dataAddr[579] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 4));
  dataAddr[580] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 7));
  dataAddr[581] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 2));
  dataAddr[582] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 5));
  dataAddr[583] = (void*) (( &localB->ACCLookup.VectorConcatenate[0] + 8));
  dataAddr[584] = (void*) (&localB->ACCLookup.sincos_o1[0]);
  dataAddr[585] = (void*) (&localB->ACCLookup.sincos_o2[0]);
  dataAddr[586] = (void*) (&localB->ACCLookup.VectorConcatenate[0]);
  dataAddr[587] = (void*) (&localB->ACCLookup.Reshape9to3x3columnmajor[0]);
  dataAddr[588] = (void*) (&PID_HSC_Model_P.CompareToConstant1_const_c);
  dataAddr[589] = (void*) (&PID_HSC_Model_P.CompareToConstant2_const_a);
  dataAddr[590] = (void*) (&PID_HSC_Model_P.CompareToConstant3_const);
  dataAddr[591] = (void*) (&PID_HSC_Model_P.Change_Value);
  dataAddr[592] = (void*) (&PID_HSC_Model_P.Constant_Value_fe);
  dataAddr[593] = (void*) (&PID_HSC_Model_P.Constant1_Value);
  dataAddr[594] = (void*) (&PID_HSC_Model_P.Constant10_Value);
  dataAddr[595] = (void*) (&PID_HSC_Model_P.Constant2_Value);
  dataAddr[596] = (void*) (&PID_HSC_Model_P.Constant3_Value);
  dataAddr[597] = (void*) (&PID_HSC_Model_P.Constant4_Value);
  dataAddr[598] = (void*) (&PID_HSC_Model_P.Constant5_Value);
  dataAddr[599] = (void*) (&PID_HSC_Model_P.Constant6_Value);
  dataAddr[600] = (void*) (&PID_HSC_Model_P.Constant7_Value);
  dataAddr[601] = (void*) (&PID_HSC_Model_P.Constant8_Value);
  dataAddr[602] = (void*) (&PID_HSC_Model_P.Constant9_Value);
  dataAddr[603] = (void*) (&PID_HSC_Model_P.Denied_Value);
  dataAddr[604] = (void*) (&PID_HSC_Model_P.SetSpdMPS_Value);
  dataAddr[605] = (void*) (&PID_HSC_Model_P.SetSpdMPS2_Value);
  dataAddr[606] = (void*) (&PID_HSC_Model_P.Gain_Gain);
  dataAddr[607] = (void*) (&PID_HSC_Model_P.Gain1_Gain_a);
  dataAddr[608] = (void*) (&PID_HSC_Model_P.Gain2_Gain);
  dataAddr[609] = (void*) (&PID_HSC_Model_P.Gain5_Gain);
  dataAddr[610] = (void*) (&PID_HSC_Model_P.kmh2ms1_Gain);
  dataAddr[611] = (void*) (&PID_HSC_Model_P.Switch1_Threshold_j);
  dataAddr[612] = (void*) (&PID_HSC_Model_P.Switch10_Threshold);
  dataAddr[613] = (void*) (&PID_HSC_Model_P.Switch11_Threshold_f);
  dataAddr[614] = (void*) (&PID_HSC_Model_P.Switch12_Threshold);
  dataAddr[615] = (void*) (&PID_HSC_Model_P.Switch2_Threshold);
  dataAddr[616] = (void*) (&PID_HSC_Model_P.Switch3_Threshold);
  dataAddr[617] = (void*) (&PID_HSC_Model_P.Switch4_Threshold);
  dataAddr[618] = (void*) (&PID_HSC_Model_P.Switch5_Threshold);
  dataAddr[619] = (void*) (&PID_HSC_Model_P.Switch6_Threshold);
  dataAddr[620] = (void*) (&PID_HSC_Model_P.Switch7_Threshold);
  dataAddr[621] = (void*) (&PID_HSC_Model_P.Switch8_Threshold);
  dataAddr[622] = (void*) (&PID_HSC_Model_P.Switch9_Threshold);
  dataAddr[623] = (void*) (&PID_HSC_Model_P.Constant_Value_dh);
  dataAddr[624] = (void*) (&PID_HSC_Model_P.TargetSOC_Value);
  dataAddr[625] = (void*) (&PID_HSC_Model_P.Gain1_Gain_o);
  dataAddr[626] = (void*) (&PID_HSC_Model_P.kphtomph_Gain);
  dataAddr[627] = (void*) (&PID_HSC_Model_P.IC_Value_h);
  dataAddr[628] = (void*) (&PID_HSC_Model_P.IC1_Value);
  dataAddr[629] = (void*) (&PID_HSC_Model_P.IC2_Value);
  dataAddr[630] = (void*) (&PID_HSC_Model_P.IC3_Value);
  dataAddr[631] = (void*) (&PID_HSC_Model_P.IC4_Value);
  dataAddr[632] = (void*) (&PID_HSC_Model_P.IC5_Value);
  dataAddr[633] = (void*) (&PID_HSC_Model_P.IC6_Value);
  dataAddr[634] = (void*) (&PID_HSC_Model_P.IC7_Value);
  dataAddr[635] = (void*) (&PID_HSC_Model_P.IC8_Value);
  dataAddr[636] = (void*) (&PID_HSC_Model_P.uDLookupTable_bp01Data_m[0]);
  dataAddr[637] = (void*) (&PID_HSC_Model_P.uDLookupTable_bp02Data[0]);
  dataAddr[638] = (void*) (&PID_HSC_Model_P.uDLookupTable_maxIndex[0]);
  dataAddr[639] = (void*) (&PID_HSC_Model_P.uDLookupTable2_bp01Data[0]);
  dataAddr[640] = (void*) (&PID_HSC_Model_P.uDLookupTable2_bp02Data[0]);
  dataAddr[641] = (void*) (&PID_HSC_Model_P.uDLookupTable2_bp03Data[0]);
  dataAddr[642] = (void*) (&PID_HSC_Model_P.uDLookupTable2_maxIndex[0]);
  dataAddr[643] = (void*) (&PID_HSC_Model_P.uDLookupTable2_dimSizes[0]);
  dataAddr[644] = (void*) (&PID_HSC_Model_P.uDLookupTable5_bp01Data[0]);
  dataAddr[645] = (void*) (&PID_HSC_Model_P.uDLookupTable5_bp02Data[0]);
  dataAddr[646] = (void*) (&PID_HSC_Model_P.uDLookupTable5_bp03Data[0]);
  dataAddr[647] = (void*) (&PID_HSC_Model_P.uDLookupTable5_maxIndex[0]);
  dataAddr[648] = (void*) (&PID_HSC_Model_P.uDLookupTable5_dimSizes[0]);
  dataAddr[649] = (void*) (&PID_HSC_Model_P.ContinuousDischageLimit_bp01Data[0]);
  dataAddr[650] = (void*) (&PID_HSC_Model_P.ContinuousDischageLimit_bp02Data[0]);
  dataAddr[651] = (void*) (&PID_HSC_Model_P.ContinuousDischageLimit_maxIndex[0]);
  dataAddr[652] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit_tableData[0]);
  dataAddr[653] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit_bp01Data[0]);
  dataAddr[654] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit1_tableData[0]);
  dataAddr[655] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit1_bp01Data[0]);
  dataAddr[656] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit2_tableData[0]);
  dataAddr[657] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit2_bp01Data[0]);
  dataAddr[658] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit3_tableData[0]);
  dataAddr[659] = (void*) (&PID_HSC_Model_P.ContinuousMotorPowerLimit3_bp01Data[0]);
  dataAddr[660] = (void*) (&PID_HSC_Model_P.DiscreteMotorPowerLimit_tableData[0]);
  dataAddr[661] = (void*) (&PID_HSC_Model_P.DiscreteMotorPowerLimit_bp01Data[0]);
  dataAddr[662] = (void*) (&PID_HSC_Model_P.DiscreteMotorPowerLimit1_tableData[0]);
  dataAddr[663] = (void*) (&PID_HSC_Model_P.DiscreteMotorPowerLimit1_bp01Data[0]);
  dataAddr[664] = (void*) (&PID_HSC_Model_P.Memory_InitialCondition);
  dataAddr[665] = (void*) (&PID_HSC_Model_P.Memory1_InitialCondition);
  dataAddr[666] = (void*) (&PID_HSC_Model_P.Switch_Threshold_n);
  dataAddr[667] = (void*) (&PID_HSC_Model_P.Switch1_Threshold_d);
  dataAddr[668] = (void*) (&PID_HSC_Model_P.Switch3_Threshold_c);
  dataAddr[669] = (void*) (&PID_HSC_Model_P.Constant_Value_ok);
  dataAddr[670] = (void*) (&PID_HSC_Model_P.Constant3_Value_i);
  dataAddr[671] = (void*) (&PID_HSC_Model_P.kphtomps_Gain);
  dataAddr[672] = (void*) (&PID_HSC_Model_P.Memory1_InitialCondition_d);
  dataAddr[673] = (void*) (&PID_HSC_Model_P.Memory2_InitialCondition);
  dataAddr[674] = (void*) (&PID_HSC_Model_P.kphtomps_Gain_g);
  dataAddr[675] = (void*) (&PID_HSC_Model_P.ACC_Deadzone_tableData[0]);
  dataAddr[676] = (void*) (&PID_HSC_Model_P.ACC_Deadzone_bp01Data[0]);
  dataAddr[677] = (void*) (&PID_HSC_Model_P.LCVPedalMapAxleTorqueNm1_maxIndex[0]);
  dataAddr[678] = (void*) (&PID_HSC_Model_P.LCVPedalMapAxleTorqueNm1_dimSizes[0]);
  dataAddr[679] = (void*) (&PID_HSC_Model_P.LCVPedalMapAxleTorqueNm1_numYWorkElts[0]);
  dataAddr[680] = (void*) (&PID_HSC_Model_P.Saturation2_UpperSat);
  dataAddr[681] = (void*) (&PID_HSC_Model_P.Saturation2_LowerSat);
  dataAddr[682] = (void*) (&PID_HSC_Model_P.preventszeroingPwrDmdat0kph_UpperSat);
  dataAddr[683] = (void*) (&PID_HSC_Model_P.preventszeroingPwrDmdat0kph_LowerSat);
  dataAddr[684] = (void*) (&PID_HSC_Model_P.Switch_Threshold_k);
  dataAddr[685] = (void*) (&PID_HSC_Model_P.Constant_Value_m);
  dataAddr[686] = (void*) (&PID_HSC_Model_P.MotorEnable_Value);
  dataAddr[687] = (void*) (&PID_HSC_Model_P.FinalDrive_Gain);
  dataAddr[688] = (void*) (&PID_HSC_Model_P.Gain1_Gain_k);
  dataAddr[689] = (void*) (&PID_HSC_Model_P.Gain4_Gain);
  dataAddr[690] = (void*) (&PID_HSC_Model_P.kphtomph_Gain_e);
  dataAddr[691] = (void*) (&PID_HSC_Model_P.kphtomps_Gain_i);
  dataAddr[692] = (void*) (&PID_HSC_Model_P.kphtomps1_Gain);
  dataAddr[693] = (void*) (&PID_HSC_Model_P.uDLookupTable1_tableData[0]);
  dataAddr[694] = (void*) (&PID_HSC_Model_P.Saturation_UpperSat);
  dataAddr[695] = (void*) (&PID_HSC_Model_P.Saturation_LowerSat);
  dataAddr[696] = (void*) (&PID_HSC_Model_P.Saturation1_UpperSat_n);
  dataAddr[697] = (void*) (&PID_HSC_Model_P.Saturation1_LowerSat_p);
  dataAddr[698] = (void*) (&PID_HSC_Model_P.Switch_Threshold_f);
  dataAddr[699] = (void*) (&PID_HSC_Model_P.ActivateMILHILVersion_Value);
  dataAddr[700] = (void*) (&PID_HSC_Model_P.Gain_Gain_f);
  dataAddr[701] = (void*) (&PID_HSC_Model_P.Gain1_Gain_i);
  dataAddr[702] = (void*) (&PID_HSC_Model_P.Gain2_Gain_p);
  dataAddr[703] = (void*) (&PID_HSC_Model_P.Gain3_Gain);
  dataAddr[704] = (void*) (&PID_HSC_Model_P.CompareToConstant_const_l);
  dataAddr[705] = (void*) (&PID_HSC_Model_P.CompareToConstant1_const_g);
  dataAddr[706] = (void*) (&PID_HSC_Model_P.CompareToConstant2_const_g);
  dataAddr[707] = (void*) (&PID_HSC_Model_P.CompareToConstant3_const_p);
  dataAddr[708] = (void*) (&PID_HSC_Model_P.SOCChargeLimit_const);
  dataAddr[709] = (void*) (&PID_HSC_Model_P.Constant1_Value_j);
  dataAddr[710] = (void*) (&PID_HSC_Model_P.MaxBPPRegenW_Value);
  dataAddr[711] = (void*) (&PID_HSC_Model_P.OffThrottleRegenPowerDemandW_Value);
  dataAddr[712] = (void*) (&PID_HSC_Model_P.kphtomph_Gain_c);
  dataAddr[713] = (void*) (&PID_HSC_Model_P.rbcp_regen_enable_Gain);
  dataAddr[714] = (void*) (&PID_HSC_Model_P.SteeringWheelAngleFadeOut_tableData[0]);
  dataAddr[715] = (void*) (&PID_HSC_Model_P.SteeringWheelAngleFadeOut_bp01Data[0]);
  dataAddr[716] = (void*) (&PID_HSC_Model_P.VehicleSpeedFadeOut_tableData[0]);
  dataAddr[717] = (void*) (&PID_HSC_Model_P.VehicleSpeedFadeOut_bp01Data[0]);
  dataAddr[718] = (void*) (&PID_HSC_Model_P.Saturation1_UpperSat);
  dataAddr[719] = (void*) (&PID_HSC_Model_P.Saturation1_LowerSat);
  dataAddr[720] = (void*) (&PID_HSC_Model_P.BrusaEnable_Value);
  dataAddr[721] = (void*) (&PID_HSC_Model_P.VMUmajorProt_Value);
  dataAddr[722] = (void*) (&PID_HSC_Model_P.VMUminorProt_Value);
  dataAddr[723] = (void*) (&PID_HSC_Model_P.kphtomph_Gain_i);
  dataAddr[724] = (void*) (&PID_HSC_Model_P.TargetInitialPos_Value);
  dataAddr[725] = (void*) (&PID_HSC_Model_P.DiscreteTimeIntegrator_gainval);
  dataAddr[726] = (void*) (&PID_HSC_Model_P.DiscreteTimeIntegrator_IC);
  dataAddr[727] = (void*) (&PID_HSC_Model_P.DiscreteTimeIntegrator1_gainval);
  dataAddr[728] = (void*) (&PID_HSC_Model_P.DiscreteTimeIntegrator1_IC);
  dataAddr[729] = (void*) (&PID_HSC_Model_P.Switch_Threshold);
  dataAddr[730] = (void*) (&PID_HSC_Model_P.Switch1_Threshold);
  dataAddr[731] = (void*) (&PID_HSC_Model_P.Constant25_Value);
  dataAddr[732] = (void*) (&PID_HSC_Model_P.DefaultSpacing_Value);
  dataAddr[733] = (void*) (&PID_HSC_Model_P.DiscreteTimeIntegrator3_gainval);
  dataAddr[734] = (void*) (&PID_HSC_Model_P.DiscreteTimeIntegrator3_IC);
  dataAddr[735] = (void*) (&PID_HSC_Model_P.Gain_Gain_iu);
  dataAddr[736] = (void*) (&PID_HSC_Model_P.Gain1_Gain);
  dataAddr[737] = (void*) (&PID_HSC_Model_P.uDLookupTable_tableData[0]);
  dataAddr[738] = (void*) (&PID_HSC_Model_P.uDLookupTable_bp01Data[0]);
  dataAddr[739] = (void*) (&PID_HSC_Model_P.Switch11_Threshold);
  dataAddr[740] = (void*) (&PID_HSC_Model_P.DelayOneStep_InitialCondition);
  dataAddr[741] = (void*) (&PID_HSC_Model_P.DelayOneStep1_InitialCondition);
  dataAddr[742] = (void*) (&PID_HSC_Model_P.checksforLowSpeedCruiseChargeMode_const);
  dataAddr[743] = (void*) (&PID_HSC_Model_P.Constant_Value_i);
  dataAddr[744] = (void*) (&PID_HSC_Model_P.Constant1_Value_b);
  dataAddr[745] = (void*) (&PID_HSC_Model_P.Constant2_Value_p);
  dataAddr[746] = (void*) (&PID_HSC_Model_P.Constant3_Value_g);
  dataAddr[747] = (void*) (&PID_HSC_Model_P.Constant4_Value_k);
  dataAddr[748] = (void*) (&PID_HSC_Model_P.Constant7_Value_b);
  dataAddr[749] = (void*) (&PID_HSC_Model_P.psoc_table_SOC_offset_Value);
  dataAddr[750] = (void*) (&PID_HSC_Model_P.VehicleSpeedMultiplier_tableData[0]);
  dataAddr[751] = (void*) (&PID_HSC_Model_P.VehicleSpeedMultiplier_bp01Data[0]);
  dataAddr[752] = (void*) (&PID_HSC_Model_P.BPPCheck_const);
  dataAddr[753] = (void*) (&PID_HSC_Model_P.LaunchModeCheck_const);
  dataAddr[754] = (void*) (&PID_HSC_Model_P.Gain_Gain_g);
  dataAddr[755] = (void*) (&PID_HSC_Model_P.IC_Value_c);
  dataAddr[756] = (void*) (&PID_HSC_Model_P.CompareToConstant_const_p);
  dataAddr[757] = (void*)
    (&PID_HSC_Model_P.CompetitionRequirement500ohmspervolt_const);
  dataAddr[758] = (void*) (&PID_HSC_Model_P.kohmstoohms_Gain);
  dataAddr[759] = (void*) (&PID_HSC_Model_P.Memory7_InitialCondition);
  dataAddr[760] = (void*) (&PID_HSC_Model_P.closedcontactorbatteryrange_UpperSat);
  dataAddr[761] = (void*) (&PID_HSC_Model_P.closedcontactorbatteryrange_LowerSat);
  dataAddr[762] = (void*) (&PID_HSC_Model_P.Constant_Value_d);
  dataAddr[763] = (void*) (&PID_HSC_Model_P.CompareToConstant_const);
  dataAddr[764] = (void*) (&PID_HSC_Model_P.CompareToConstant1_const_d);
  dataAddr[765] = (void*) (&PID_HSC_Model_P.CompareToConstant_const_c);
  dataAddr[766] = (void*) (&PID_HSC_Model_P.CompareToConstant1_const);
  dataAddr[767] = (void*) (&PID_HSC_Model_P.CompareToConstant2_const);
  dataAddr[768] = (void*) (&PID_HSC_Model_P.CompareToConstant3_const_n);
  dataAddr[769] = (void*) (&PID_HSC_Model_P.CompareToConstant6_const);
  dataAddr[770] = (void*) (&PID_HSC_Model_P.CheckForDrive_const);
  dataAddr[771] = (void*) (&PID_HSC_Model_P.CheckForReverse_const_b);
  dataAddr[772] = (void*) (&PID_HSC_Model_P.ForwardMotionCheck_const);
  dataAddr[773] = (void*) (&PID_HSC_Model_P.ReverseMotionCheck_const);
  dataAddr[774] = (void*) (&PID_HSC_Model_P.Gain_Gain_o);
  dataAddr[775] = (void*) (&PID_HSC_Model_P.IC_Value);
  dataAddr[776] = (void*) (&PID_HSC_Model_P.Constant_Value_p);
  dataAddr[777] = (void*) (&PID_HSC_Model_P.CheckForDrive1_const);
  dataAddr[778] = (void*) (&PID_HSC_Model_P.CheckForNeutral_const);
  dataAddr[779] = (void*) (&PID_HSC_Model_P.CheckForPark1_const);
  dataAddr[780] = (void*) (&PID_HSC_Model_P.CheckForReverse_const);
  dataAddr[781] = (void*) (&PID_HSC_Model_P.CheckForReverse2_const);
  dataAddr[782] = (void*) (&PID_HSC_Model_P.FirstGearOrGreater_const);
  dataAddr[783] = (void*) (&PID_HSC_Model_P.NinethGearOrless_const);
  dataAddr[784] = (void*) (&PID_HSC_Model_P.IC_Value_m);
  dataAddr[785] = (void*) (&PID_HSC_Model_P.CompareToConstant_const_m);
  dataAddr[786] = (void*) (&PID_HSC_Model_P.IC_Value_b);
  dataAddr[787] = (void*) (&PID_HSC_Model_P.CompareToConstant_const_f);
  dataAddr[788] = (void*) (&PID_HSC_Model_P.Saturation_UpperSat_a);
  dataAddr[789] = (void*) (&PID_HSC_Model_P.Saturation_LowerSat_p);
  dataAddr[790] = (void*) (&PID_HSC_Model_P.preventsdividingbyzero_UpperSat_a);
  dataAddr[791] = (void*) (&PID_HSC_Model_P.preventsdividingbyzero_LowerSat_n);
  dataAddr[792] = (void*) (&PID_HSC_Model_P.CheckforkeyinRun_const);
  dataAddr[793] = (void*) (&PID_HSC_Model_P.ChecksforDrive_const_a);
  dataAddr[794] = (void*) (&PID_HSC_Model_P.ChecksforShftLvrPosReverse_const);
  dataAddr[795] = (void*) (&PID_HSC_Model_P.ChecksforShftLvrPosUnknown_const_i);
  dataAddr[796] = (void*) (&PID_HSC_Model_P.CompareToConstant_const_ph);
  dataAddr[797] = (void*) (&PID_HSC_Model_P.Reverse_const);
  dataAddr[798] = (void*) (&PID_HSC_Model_P.Constant_Value_g);
  dataAddr[799] = (void*) (&PID_HSC_Model_P.Gain_Gain_i);
  dataAddr[800] = (void*) (&PID_HSC_Model_P.Gain19_Gain);
  dataAddr[801] = (void*) (&PID_HSC_Model_P.RPM_to_rads_Gain);
  dataAddr[802] = (void*) (&PID_HSC_Model_P.preventsdividingbyzero_UpperSat);
  dataAddr[803] = (void*) (&PID_HSC_Model_P.preventsdividingbyzero_LowerSat);
  dataAddr[804] = (void*) (&PID_HSC_Model_P.Constant_Value_ic);
  dataAddr[805] = (void*) (&PID_HSC_Model_P.FixPtConstant_Value);
  dataAddr[806] = (void*) (&PID_HSC_Model_P.ACCLookup.CompareToConstant2_const);
  dataAddr[807] = (void*)
    (&PID_HSC_Model_P.ACCLookup.DiscreteDerivative_ICPrevScaledInput);
  dataAddr[808] = (void*)
    (&PID_HSC_Model_P.ACCLookup.DiscreteDerivative1_ICPrevScaledInput);
  dataAddr[809] = (void*) (&PID_HSC_Model_P.ACCLookup.PIDController1_P);
  dataAddr[810] = (void*) (&PID_HSC_Model_P.ACCLookup.PIDController1_I);
  dataAddr[811] = (void*) (&PID_HSC_Model_P.ACCLookup.PIDController1_D);
  dataAddr[812] = (void*)
    (&PID_HSC_Model_P.ACCLookup.PIDController1_InitialConditionForIntegrator);
  dataAddr[813] = (void*)
    (&PID_HSC_Model_P.ACCLookup.PIDController1_DifferentiatorICPrevScaledInput);
  dataAddr[814] = (void*)
    (&PID_HSC_Model_P.ACCLookup.PIDController1_UpperSaturationLimit);
  dataAddr[815] = (void*)
    (&PID_HSC_Model_P.ACCLookup.PIDController1_LowerSaturationLimit);
  dataAddr[816] = (void*) (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_m);
  dataAddr[817] = (void*) (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_a);
  dataAddr[818] = (void*) (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_b);
  dataAddr[819] = (void*) (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_c);
  dataAddr[820] = (void*) (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_g);
  dataAddr[821] = (void*) (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_x_o);
  dataAddr[822] = (void*)
    (&PID_HSC_Model_P.ACCLookup.VehicleBodyTotalRoadLoad_xdot_o);
  dataAddr[823] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant1_Value_b);
  dataAddr[824] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant10_Value);
  dataAddr[825] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant11_Value);
  dataAddr[826] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant2_Value);
  dataAddr[827] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant21_Value);
  dataAddr[828] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant22_Value);
  dataAddr[829] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant23_Value);
  dataAddr[830] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant24_Value);
  dataAddr[831] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant25_Value);
  dataAddr[832] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant26_Value);
  dataAddr[833] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant3_Value);
  dataAddr[834] = (void*) (&PID_HSC_Model_P.ACCLookup.deceleration_Value);
  dataAddr[835] = (void*)
    (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator_gainval_i);
  dataAddr[836] = (void*) (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator_IC_b);
  dataAddr[837] = (void*)
    (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator1_gainval);
  dataAddr[838] = (void*) (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator1_IC);
  dataAddr[839] = (void*)
    (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator3_gainval);
  dataAddr[840] = (void*) (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator3_IC);
  dataAddr[841] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain_Gain);
  dataAddr[842] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain1_Gain);
  dataAddr[843] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain2_Gain);
  dataAddr[844] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain3_Gain);
  dataAddr[845] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain4_Gain);
  dataAddr[846] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain5_Gain);
  dataAddr[847] = (void*) (&PID_HSC_Model_P.ACCLookup.Gain6_Gain);
  dataAddr[848] = (void*) (&PID_HSC_Model_P.ACCLookup.kph2ms_Gain);
  dataAddr[849] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable_bp01Data[0]);
  dataAddr[850] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable_bp02Data[0]);
  dataAddr[851] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable_maxIndex[0]);
  dataAddr[852] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable1_bp01Data[0]);
  dataAddr[853] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable1_bp02Data[0]);
  dataAddr[854] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable1_maxIndex[0]);
  dataAddr[855] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable4_bp01Data[0]);
  dataAddr[856] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable4_bp02Data[0]);
  dataAddr[857] = (void*) (&PID_HSC_Model_P.ACCLookup.uDLookupTable4_maxIndex[0]);
  dataAddr[858] = (void*) (&PID_HSC_Model_P.ACCLookup.Far_bp01Data[0]);
  dataAddr[859] = (void*) (&PID_HSC_Model_P.ACCLookup.Far_bp02Data[0]);
  dataAddr[860] = (void*) (&PID_HSC_Model_P.ACCLookup.Far_maxIndex[0]);
  dataAddr[861] = (void*) (&PID_HSC_Model_P.ACCLookup.MediumV1_bp01Data[0]);
  dataAddr[862] = (void*) (&PID_HSC_Model_P.ACCLookup.MediumV1_bp02Data[0]);
  dataAddr[863] = (void*) (&PID_HSC_Model_P.ACCLookup.MediumV1_maxIndex[0]);
  dataAddr[864] = (void*) (&PID_HSC_Model_P.ACCLookup.MediumV2_bp01Data[0]);
  dataAddr[865] = (void*) (&PID_HSC_Model_P.ACCLookup.MediumV2_bp02Data[0]);
  dataAddr[866] = (void*) (&PID_HSC_Model_P.ACCLookup.MediumV2_maxIndex[0]);
  dataAddr[867] = (void*) (&PID_HSC_Model_P.ACCLookup.Near_bp01Data[0]);
  dataAddr[868] = (void*) (&PID_HSC_Model_P.ACCLookup.Near_bp02Data[0]);
  dataAddr[869] = (void*) (&PID_HSC_Model_P.ACCLookup.Near_maxIndex[0]);
  dataAddr[870] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation_UpperSat);
  dataAddr[871] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation_LowerSat);
  dataAddr[872] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation1_UpperSat);
  dataAddr[873] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation1_LowerSat);
  dataAddr[874] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation2_UpperSat);
  dataAddr[875] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation2_LowerSat);
  dataAddr[876] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation3_UpperSat);
  dataAddr[877] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation3_LowerSat);
  dataAddr[878] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation4_UpperSat);
  dataAddr[879] = (void*) (&PID_HSC_Model_P.ACCLookup.Saturation4_LowerSat);
  dataAddr[880] = (void*) (&PID_HSC_Model_P.ACCLookup.Switch14_Threshold);
  dataAddr[881] = (void*) (&PID_HSC_Model_P.ACCLookup.Switch5_Threshold);
  dataAddr[882] = (void*) (&PID_HSC_Model_P.ACCLookup.DelayOneStep_InitialCondition);
  dataAddr[883] = (void*) (&PID_HSC_Model_P.Constant_Value);
  dataAddr[884] = (void*) (&PID_HSC_Model_P.ChecksforDrive_const);
  dataAddr[885] = (void*) (&PID_HSC_Model_P.ChecksforReverse_const);
  dataAddr[886] = (void*) (&PID_HSC_Model_P.ChecksforShftLvrPosUnknown_const);
  dataAddr[887] = (void*) (&PID_HSC_Model_P.CreepTorqueThreshold_Nm_const);
  dataAddr[888] = (void*) (&PID_HSC_Model_P.uDLookupCreepTrq_Nm_tableData[0]);
  dataAddr[889] = (void*) (&PID_HSC_Model_P.uDLookupCreepTrq_Nm_bp01Data[0]);
  dataAddr[890] = (void*) (&PID_HSC_Model_P.uDLookupTable1_bp01Data[0]);
  dataAddr[891] = (void*) (&PID_HSC_Model_P.Switch_Threshold_nw);
  dataAddr[892] = (void*) (&PID_HSC_Model_P.DelayOneStep_InitialCondition_a);
  dataAddr[893] = (void*) (&PID_HSC_Model_P.CheckForLaunchMode_const);
  dataAddr[894] = (void*) (&PID_HSC_Model_P.LoadTorqueNm_Value);
  dataAddr[895] = (void*) (&PID_HSC_Model_P.checksifcruisechargingmode_const);
  dataAddr[896] = (void*) (&PID_HSC_Model_P.checksiflowspeedCruiseChargingmode_const);
  dataAddr[897] = (void*) (&PID_HSC_Model_P.checksifregenmode_const);
  dataAddr[898] = (void*) (&PID_HSC_Model_P.ChargeSOCLimit_const);
  dataAddr[899] = (void*) (&PID_HSC_Model_P.DischargingSOCLimit_const);
  dataAddr[900] = (void*) (&PID_HSC_Model_P.SOCOkay_Value);
  dataAddr[901] = (void*) (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator_gainval);
  dataAddr[902] = (void*) (&PID_HSC_Model_P.ACCLookup.DiscreteTimeIntegrator_IC);
  dataAddr[903] = (void*) (&PID_HSC_Model_P.ACCLookup.UnitDelay_InitialCondition[0]);
  dataAddr[904] = (void*) (&PID_HSC_Model_P.Constant_Value_n);
  dataAddr[905] = (void*) (&PID_HSC_Model_P.Constant_Value_o);
  dataAddr[906] = (void*) (&PID_HSC_Model_P.Constant_Value_k);
  dataAddr[907] = (void*) (&PID_HSC_Model_P.Constant_Value_f);
  dataAddr[908] = (void*) (&PID_HSC_Model_P.Constant_Value_o5);
  dataAddr[909] = (void*) (&PID_HSC_Model_P.ACCLookup.um2_Gain);
  dataAddr[910] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant1_Value);
  dataAddr[911] = (void*) (&PID_HSC_Model_P.ACCLookup.ZeroGain_Gain);
  dataAddr[912] = (void*) (&PID_HSC_Model_P.ACCLookup.Integrator_gainval);
  dataAddr[913] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant_Value_b);
  dataAddr[914] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant1_Value_i);
  dataAddr[915] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant10_Value_l);
  dataAddr[916] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant12_Value);
  dataAddr[917] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant2_Value_d);
  dataAddr[918] = (void*) (&PID_HSC_Model_P.ACCLookup.Tsamp_WtEt);
  dataAddr[919] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant11_Value_m);
  dataAddr[920] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant14_Value);
  dataAddr[921] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant5_Value);
  dataAddr[922] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant7_Value);
  dataAddr[923] = (void*) (&PID_HSC_Model_P.ACCLookup.Constant_Value);
  dataAddr[924] = (void*) (&localDW->DiscreteTimeIntegrator_DSTATE);
  dataAddr[925] = (void*) (&localDW->DiscreteTimeIntegrator1_DSTATE);
  dataAddr[926] = (void*) (&localDW->DiscreteTimeIntegrator3_DSTATE);
  dataAddr[927] = (void*) (&localDW->DelayOneStep_DSTATE);
  dataAddr[928] = (void*) (&localDW->DelayOneStep1_DSTATE);
  dataAddr[929] = (void*) (&localDW->ACCLookup.DiscreteTimeIntegrator_DSTATE_n);
  dataAddr[930] = (void*) (&localDW->ACCLookup.DiscreteTimeIntegrator1_DSTATE);
  dataAddr[931] = (void*) (&localDW->ACCLookup.DiscreteTimeIntegrator3_DSTATE);
  dataAddr[932] = (void*) (&localDW->ACCLookup.DelayOneStep_DSTATE);
  dataAddr[933] = (void*) (&localDW->DelayOneStep_DSTATE_b);
  dataAddr[934] = (void*) (&localDW->ACCLookup.UD_DSTATE_k);
  dataAddr[935] = (void*) (&localDW->ACCLookup.UD_DSTATE_i);
  dataAddr[936] = (void*) (&localDW->ACCLookup.DiscreteTimeIntegrator_DSTATE);
  dataAddr[937] = (void*) (&localDW->ACCLookup.UnitDelay_DSTATE[0]);
  dataAddr[938] = (void*) (&localX->ACCLookup.Integrator1_CSTATE);
  dataAddr[939] = (void*) (&localDW->ACCLookup.UD_DSTATE);
  dataAddr[940] = (void*) (&localDW->ACCLookup.Integrator_DSTATE);
  dataAddr[941] = (void*) (&localX->ACCLookup.Integrator3_CSTATE);
  dataAddr[942] = (void*) (&PID_HSC_Model_P.PedalMap_LCV);
  dataAddr[943] = (void*) (&PID_HSC_Model_P.N[0]);
  dataAddr[944] = (void*) (&PID_HSC_Model_P.Re);
  dataAddr[945] = (void*) (&PID_HSC_Model_P.bppRegenLookup[0]);
  dataAddr[946] = (void*) (&PID_HSC_Model_P.bppRegenMap[0]);
  dataAddr[947] = (void*) (&PID_HSC_Model_P.f_tbrake_n_bpt[0]);
  dataAddr[948] = (void*) (&PID_HSC_Model_P.motor_speed_bkp_rpm[0]);
  dataAddr[949] = (void*) (&PID_HSC_Model_P.peak_trq_curve[0]);
  dataAddr[950] = (void*) (rtP_ACC_Distance_Lookup);
  dataAddr[951] = (void*) (rtP_ACC_Distance_Lookup_Direct_Distance);
  dataAddr[952] = (void*) (rtP_ACC_Distance_Lookup_Direct_DistanceV2);
  dataAddr[953] = (void*) (rtP_ACC_Far_Distance_Lookup_Direct);
  dataAddr[954] = (void*) (rtP_ACC_Near_Distance_Lookup_Direct);
  dataAddr[955] = (void*) (rtP_ContinuousBatteryCharge);
  dataAddr[956] = (void*) (rtP_ContinuousBatteryDischarge);
  dataAddr[957] = (void*) (rtP_InterpBatteryCharge);
  dataAddr[958] = (void*) (rtP_InterpBatteryDischarge);
  dataAddr[959] = (void*) (rtP_New_Mass_Toque_Map);
  dataAddr[960] = (void*) (rtP_Reverse_APP);
  dataAddr[961] = (void*) (rtP_Stoplight_distance_speed_only);
  dataAddr[962] = (void*) (rtP_tandivide);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void PID_HSC_Model_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void PID_HSC_Model_InitializeLoggingFunctions(RTWLoggingFcnPtr loggingPtrs[])
{
  loggingPtrs[0] = (NULL);
  loggingPtrs[1] = (NULL);
  loggingPtrs[2] = (NULL);
  loggingPtrs[3] = (NULL);
  loggingPtrs[4] = (NULL);
  loggingPtrs[5] = (NULL);
  loggingPtrs[6] = (NULL);
  loggingPtrs[7] = (NULL);
  loggingPtrs[8] = (NULL);
  loggingPtrs[9] = (NULL);
  loggingPtrs[10] = (NULL);
  loggingPtrs[11] = (NULL);
  loggingPtrs[12] = (NULL);
  loggingPtrs[13] = (NULL);
  loggingPtrs[14] = (NULL);
  loggingPtrs[15] = (NULL);
  loggingPtrs[16] = (NULL);
  loggingPtrs[17] = (NULL);
  loggingPtrs[18] = (NULL);
  loggingPtrs[19] = (NULL);
  loggingPtrs[20] = (NULL);
  loggingPtrs[21] = (NULL);
  loggingPtrs[22] = (NULL);
  loggingPtrs[23] = (NULL);
  loggingPtrs[24] = (NULL);
  loggingPtrs[25] = (NULL);
  loggingPtrs[26] = (NULL);
  loggingPtrs[27] = (NULL);
  loggingPtrs[28] = (NULL);
  loggingPtrs[29] = (NULL);
  loggingPtrs[30] = (NULL);
  loggingPtrs[31] = (NULL);
  loggingPtrs[32] = (NULL);
  loggingPtrs[33] = (NULL);
  loggingPtrs[34] = (NULL);
  loggingPtrs[35] = (NULL);
  loggingPtrs[36] = (NULL);
  loggingPtrs[37] = (NULL);
  loggingPtrs[38] = (NULL);
  loggingPtrs[39] = (NULL);
  loggingPtrs[40] = (NULL);
  loggingPtrs[41] = (NULL);
  loggingPtrs[42] = (NULL);
  loggingPtrs[43] = (NULL);
  loggingPtrs[44] = (NULL);
  loggingPtrs[45] = (NULL);
  loggingPtrs[46] = (NULL);
  loggingPtrs[47] = (NULL);
  loggingPtrs[48] = (NULL);
  loggingPtrs[49] = (NULL);
  loggingPtrs[50] = (NULL);
  loggingPtrs[51] = (NULL);
  loggingPtrs[52] = (NULL);
  loggingPtrs[53] = (NULL);
  loggingPtrs[54] = (NULL);
  loggingPtrs[55] = (NULL);
  loggingPtrs[56] = (NULL);
  loggingPtrs[57] = (NULL);
  loggingPtrs[58] = (NULL);
  loggingPtrs[59] = (NULL);
  loggingPtrs[60] = (NULL);
  loggingPtrs[61] = (NULL);
  loggingPtrs[62] = (NULL);
  loggingPtrs[63] = (NULL);
  loggingPtrs[64] = (NULL);
  loggingPtrs[65] = (NULL);
  loggingPtrs[66] = (NULL);
  loggingPtrs[67] = (NULL);
  loggingPtrs[68] = (NULL);
  loggingPtrs[69] = (NULL);
  loggingPtrs[70] = (NULL);
  loggingPtrs[71] = (NULL);
  loggingPtrs[72] = (NULL);
  loggingPtrs[73] = (NULL);
  loggingPtrs[74] = (NULL);
  loggingPtrs[75] = (NULL);
  loggingPtrs[76] = (NULL);
  loggingPtrs[77] = (NULL);
  loggingPtrs[78] = (NULL);
  loggingPtrs[79] = (NULL);
  loggingPtrs[80] = (NULL);
  loggingPtrs[81] = (NULL);
  loggingPtrs[82] = (NULL);
  loggingPtrs[83] = (NULL);
  loggingPtrs[84] = (NULL);
  loggingPtrs[85] = (NULL);
  loggingPtrs[86] = (NULL);
  loggingPtrs[87] = (NULL);
  loggingPtrs[88] = (NULL);
  loggingPtrs[89] = (NULL);
  loggingPtrs[90] = (NULL);
  loggingPtrs[91] = (NULL);
  loggingPtrs[92] = (NULL);
  loggingPtrs[93] = (NULL);
  loggingPtrs[94] = (NULL);
  loggingPtrs[95] = (NULL);
  loggingPtrs[96] = (NULL);
  loggingPtrs[97] = (NULL);
  loggingPtrs[98] = (NULL);
  loggingPtrs[99] = (NULL);
  loggingPtrs[100] = (NULL);
  loggingPtrs[101] = (NULL);
  loggingPtrs[102] = (NULL);
  loggingPtrs[103] = (NULL);
  loggingPtrs[104] = (NULL);
  loggingPtrs[105] = (NULL);
  loggingPtrs[106] = (NULL);
  loggingPtrs[107] = (NULL);
  loggingPtrs[108] = (NULL);
  loggingPtrs[109] = (NULL);
  loggingPtrs[110] = (NULL);
  loggingPtrs[111] = (NULL);
  loggingPtrs[112] = (NULL);
  loggingPtrs[113] = (NULL);
  loggingPtrs[114] = (NULL);
  loggingPtrs[115] = (NULL);
  loggingPtrs[116] = (NULL);
  loggingPtrs[117] = (NULL);
  loggingPtrs[118] = (NULL);
  loggingPtrs[119] = (NULL);
  loggingPtrs[120] = (NULL);
  loggingPtrs[121] = (NULL);
  loggingPtrs[122] = (NULL);
  loggingPtrs[123] = (NULL);
  loggingPtrs[124] = (NULL);
  loggingPtrs[125] = (NULL);
  loggingPtrs[126] = (NULL);
  loggingPtrs[127] = (NULL);
  loggingPtrs[128] = (NULL);
  loggingPtrs[129] = (NULL);
  loggingPtrs[130] = (NULL);
  loggingPtrs[131] = (NULL);
  loggingPtrs[132] = (NULL);
  loggingPtrs[133] = (NULL);
  loggingPtrs[134] = (NULL);
  loggingPtrs[135] = (NULL);
  loggingPtrs[136] = (NULL);
  loggingPtrs[137] = (NULL);
  loggingPtrs[138] = (NULL);
  loggingPtrs[139] = (NULL);
  loggingPtrs[140] = (NULL);
  loggingPtrs[141] = (NULL);
  loggingPtrs[142] = (NULL);
  loggingPtrs[143] = (NULL);
  loggingPtrs[144] = (NULL);
  loggingPtrs[145] = (NULL);
  loggingPtrs[146] = (NULL);
  loggingPtrs[147] = (NULL);
  loggingPtrs[148] = (NULL);
  loggingPtrs[149] = (NULL);
  loggingPtrs[150] = (NULL);
  loggingPtrs[151] = (NULL);
  loggingPtrs[152] = (NULL);
  loggingPtrs[153] = (NULL);
  loggingPtrs[154] = (NULL);
  loggingPtrs[155] = (NULL);
  loggingPtrs[156] = (NULL);
  loggingPtrs[157] = (NULL);
  loggingPtrs[158] = (NULL);
  loggingPtrs[159] = (NULL);
  loggingPtrs[160] = (NULL);
  loggingPtrs[161] = (NULL);
  loggingPtrs[162] = (NULL);
  loggingPtrs[163] = (NULL);
  loggingPtrs[164] = (NULL);
  loggingPtrs[165] = (NULL);
  loggingPtrs[166] = (NULL);
  loggingPtrs[167] = (NULL);
  loggingPtrs[168] = (NULL);
  loggingPtrs[169] = (NULL);
  loggingPtrs[170] = (NULL);
  loggingPtrs[171] = (NULL);
  loggingPtrs[172] = (NULL);
  loggingPtrs[173] = (NULL);
  loggingPtrs[174] = (NULL);
  loggingPtrs[175] = (NULL);
  loggingPtrs[176] = (NULL);
  loggingPtrs[177] = (NULL);
  loggingPtrs[178] = (NULL);
  loggingPtrs[179] = (NULL);
  loggingPtrs[180] = (NULL);
  loggingPtrs[181] = (NULL);
  loggingPtrs[182] = (NULL);
  loggingPtrs[183] = (NULL);
  loggingPtrs[184] = (NULL);
  loggingPtrs[185] = (NULL);
  loggingPtrs[186] = (NULL);
  loggingPtrs[187] = (NULL);
  loggingPtrs[188] = (NULL);
  loggingPtrs[189] = (NULL);
  loggingPtrs[190] = (NULL);
  loggingPtrs[191] = (NULL);
  loggingPtrs[192] = (NULL);
  loggingPtrs[193] = (NULL);
  loggingPtrs[194] = (NULL);
  loggingPtrs[195] = (NULL);
  loggingPtrs[196] = (NULL);
  loggingPtrs[197] = (NULL);
  loggingPtrs[198] = (NULL);
  loggingPtrs[199] = (NULL);
  loggingPtrs[200] = (NULL);
  loggingPtrs[201] = (NULL);
  loggingPtrs[202] = (NULL);
  loggingPtrs[203] = (NULL);
  loggingPtrs[204] = (NULL);
  loggingPtrs[205] = (NULL);
  loggingPtrs[206] = (NULL);
  loggingPtrs[207] = (NULL);
  loggingPtrs[208] = (NULL);
  loggingPtrs[209] = (NULL);
  loggingPtrs[210] = (NULL);
  loggingPtrs[211] = (NULL);
  loggingPtrs[212] = (NULL);
  loggingPtrs[213] = (NULL);
  loggingPtrs[214] = (NULL);
  loggingPtrs[215] = (NULL);
  loggingPtrs[216] = (NULL);
  loggingPtrs[217] = (NULL);
  loggingPtrs[218] = (NULL);
  loggingPtrs[219] = (NULL);
  loggingPtrs[220] = (NULL);
  loggingPtrs[221] = (NULL);
  loggingPtrs[222] = (NULL);
  loggingPtrs[223] = (NULL);
  loggingPtrs[224] = (NULL);
  loggingPtrs[225] = (NULL);
  loggingPtrs[226] = (NULL);
  loggingPtrs[227] = (NULL);
  loggingPtrs[228] = (NULL);
  loggingPtrs[229] = (NULL);
  loggingPtrs[230] = (NULL);
  loggingPtrs[231] = (NULL);
  loggingPtrs[232] = (NULL);
  loggingPtrs[233] = (NULL);
  loggingPtrs[234] = (NULL);
  loggingPtrs[235] = (NULL);
  loggingPtrs[236] = (NULL);
  loggingPtrs[237] = (NULL);
  loggingPtrs[238] = (NULL);
  loggingPtrs[239] = (NULL);
  loggingPtrs[240] = (NULL);
  loggingPtrs[241] = (NULL);
  loggingPtrs[242] = (NULL);
  loggingPtrs[243] = (NULL);
  loggingPtrs[244] = (NULL);
  loggingPtrs[245] = (NULL);
  loggingPtrs[246] = (NULL);
  loggingPtrs[247] = (NULL);
  loggingPtrs[248] = (NULL);
  loggingPtrs[249] = (NULL);
  loggingPtrs[250] = (NULL);
  loggingPtrs[251] = (NULL);
  loggingPtrs[252] = (NULL);
  loggingPtrs[253] = (NULL);
  loggingPtrs[254] = (NULL);
  loggingPtrs[255] = (NULL);
  loggingPtrs[256] = (NULL);
  loggingPtrs[257] = (NULL);
  loggingPtrs[258] = (NULL);
  loggingPtrs[259] = (NULL);
  loggingPtrs[260] = (NULL);
  loggingPtrs[261] = (NULL);
  loggingPtrs[262] = (NULL);
  loggingPtrs[263] = (NULL);
  loggingPtrs[264] = (NULL);
  loggingPtrs[265] = (NULL);
  loggingPtrs[266] = (NULL);
  loggingPtrs[267] = (NULL);
  loggingPtrs[268] = (NULL);
  loggingPtrs[269] = (NULL);
  loggingPtrs[270] = (NULL);
  loggingPtrs[271] = (NULL);
  loggingPtrs[272] = (NULL);
  loggingPtrs[273] = (NULL);
  loggingPtrs[274] = (NULL);
  loggingPtrs[275] = (NULL);
  loggingPtrs[276] = (NULL);
  loggingPtrs[277] = (NULL);
  loggingPtrs[278] = (NULL);
  loggingPtrs[279] = (NULL);
  loggingPtrs[280] = (NULL);
  loggingPtrs[281] = (NULL);
  loggingPtrs[282] = (NULL);
  loggingPtrs[283] = (NULL);
  loggingPtrs[284] = (NULL);
  loggingPtrs[285] = (NULL);
  loggingPtrs[286] = (NULL);
  loggingPtrs[287] = (NULL);
  loggingPtrs[288] = (NULL);
  loggingPtrs[289] = (NULL);
  loggingPtrs[290] = (NULL);
  loggingPtrs[291] = (NULL);
  loggingPtrs[292] = (NULL);
  loggingPtrs[293] = (NULL);
  loggingPtrs[294] = (NULL);
  loggingPtrs[295] = (NULL);
  loggingPtrs[296] = (NULL);
  loggingPtrs[297] = (NULL);
  loggingPtrs[298] = (NULL);
  loggingPtrs[299] = (NULL);
  loggingPtrs[300] = (NULL);
  loggingPtrs[301] = (NULL);
  loggingPtrs[302] = (NULL);
  loggingPtrs[303] = (NULL);
  loggingPtrs[304] = (NULL);
  loggingPtrs[305] = (NULL);
  loggingPtrs[306] = (NULL);
  loggingPtrs[307] = (NULL);
  loggingPtrs[308] = (NULL);
  loggingPtrs[309] = (NULL);
  loggingPtrs[310] = (NULL);
  loggingPtrs[311] = (NULL);
  loggingPtrs[312] = (NULL);
  loggingPtrs[313] = (NULL);
  loggingPtrs[314] = (NULL);
  loggingPtrs[315] = (NULL);
  loggingPtrs[316] = (NULL);
  loggingPtrs[317] = (NULL);
  loggingPtrs[318] = (NULL);
  loggingPtrs[319] = (NULL);
  loggingPtrs[320] = (NULL);
  loggingPtrs[321] = (NULL);
  loggingPtrs[322] = (NULL);
  loggingPtrs[323] = (NULL);
  loggingPtrs[324] = (NULL);
  loggingPtrs[325] = (NULL);
  loggingPtrs[326] = (NULL);
  loggingPtrs[327] = (NULL);
  loggingPtrs[328] = (NULL);
  loggingPtrs[329] = (NULL);
  loggingPtrs[330] = (NULL);
  loggingPtrs[331] = (NULL);
  loggingPtrs[332] = (NULL);
  loggingPtrs[333] = (NULL);
  loggingPtrs[334] = (NULL);
  loggingPtrs[335] = (NULL);
  loggingPtrs[336] = (NULL);
  loggingPtrs[337] = (NULL);
  loggingPtrs[338] = (NULL);
  loggingPtrs[339] = (NULL);
  loggingPtrs[340] = (NULL);
  loggingPtrs[341] = (NULL);
  loggingPtrs[342] = (NULL);
  loggingPtrs[343] = (NULL);
  loggingPtrs[344] = (NULL);
  loggingPtrs[345] = (NULL);
  loggingPtrs[346] = (NULL);
  loggingPtrs[347] = (NULL);
  loggingPtrs[348] = (NULL);
  loggingPtrs[349] = (NULL);
  loggingPtrs[350] = (NULL);
  loggingPtrs[351] = (NULL);
  loggingPtrs[352] = (NULL);
  loggingPtrs[353] = (NULL);
  loggingPtrs[354] = (NULL);
  loggingPtrs[355] = (NULL);
  loggingPtrs[356] = (NULL);
  loggingPtrs[357] = (NULL);
  loggingPtrs[358] = (NULL);
  loggingPtrs[359] = (NULL);
  loggingPtrs[360] = (NULL);
  loggingPtrs[361] = (NULL);
  loggingPtrs[362] = (NULL);
  loggingPtrs[363] = (NULL);
  loggingPtrs[364] = (NULL);
  loggingPtrs[365] = (NULL);
  loggingPtrs[366] = (NULL);
  loggingPtrs[367] = (NULL);
  loggingPtrs[368] = (NULL);
  loggingPtrs[369] = (NULL);
  loggingPtrs[370] = (NULL);
  loggingPtrs[371] = (NULL);
  loggingPtrs[372] = (NULL);
  loggingPtrs[373] = (NULL);
  loggingPtrs[374] = (NULL);
  loggingPtrs[375] = (NULL);
  loggingPtrs[376] = (NULL);
  loggingPtrs[377] = (NULL);
  loggingPtrs[378] = (NULL);
  loggingPtrs[379] = (NULL);
  loggingPtrs[380] = (NULL);
  loggingPtrs[381] = (NULL);
  loggingPtrs[382] = (NULL);
  loggingPtrs[383] = (NULL);
  loggingPtrs[384] = (NULL);
  loggingPtrs[385] = (NULL);
  loggingPtrs[386] = (NULL);
  loggingPtrs[387] = (NULL);
  loggingPtrs[388] = (NULL);
  loggingPtrs[389] = (NULL);
  loggingPtrs[390] = (NULL);
  loggingPtrs[391] = (NULL);
  loggingPtrs[392] = (NULL);
  loggingPtrs[393] = (NULL);
  loggingPtrs[394] = (NULL);
  loggingPtrs[395] = (NULL);
  loggingPtrs[396] = (NULL);
  loggingPtrs[397] = (NULL);
  loggingPtrs[398] = (NULL);
  loggingPtrs[399] = (NULL);
  loggingPtrs[400] = (NULL);
  loggingPtrs[401] = (NULL);
  loggingPtrs[402] = (NULL);
  loggingPtrs[403] = (NULL);
  loggingPtrs[404] = (NULL);
  loggingPtrs[405] = (NULL);
  loggingPtrs[406] = (NULL);
  loggingPtrs[407] = (NULL);
  loggingPtrs[408] = (NULL);
  loggingPtrs[409] = (NULL);
  loggingPtrs[410] = (NULL);
  loggingPtrs[411] = (NULL);
  loggingPtrs[412] = (NULL);
  loggingPtrs[413] = (NULL);
  loggingPtrs[414] = (NULL);
  loggingPtrs[415] = (NULL);
  loggingPtrs[416] = (NULL);
  loggingPtrs[417] = (NULL);
  loggingPtrs[418] = (NULL);
  loggingPtrs[419] = (NULL);
  loggingPtrs[420] = (NULL);
  loggingPtrs[421] = (NULL);
  loggingPtrs[422] = (NULL);
  loggingPtrs[423] = (NULL);
  loggingPtrs[424] = (NULL);
  loggingPtrs[425] = (NULL);
  loggingPtrs[426] = (NULL);
  loggingPtrs[427] = (NULL);
  loggingPtrs[428] = (NULL);
  loggingPtrs[429] = (NULL);
  loggingPtrs[430] = (NULL);
  loggingPtrs[431] = (NULL);
  loggingPtrs[432] = (NULL);
  loggingPtrs[433] = (NULL);
  loggingPtrs[434] = (NULL);
  loggingPtrs[435] = (NULL);
  loggingPtrs[436] = (NULL);
  loggingPtrs[437] = (NULL);
  loggingPtrs[438] = (NULL);
  loggingPtrs[439] = (NULL);
  loggingPtrs[440] = (NULL);
  loggingPtrs[441] = (NULL);
  loggingPtrs[442] = (NULL);
  loggingPtrs[443] = (NULL);
  loggingPtrs[444] = (NULL);
  loggingPtrs[445] = (NULL);
  loggingPtrs[446] = (NULL);
  loggingPtrs[447] = (NULL);
  loggingPtrs[448] = (NULL);
  loggingPtrs[449] = (NULL);
  loggingPtrs[450] = (NULL);
  loggingPtrs[451] = (NULL);
  loggingPtrs[452] = (NULL);
  loggingPtrs[453] = (NULL);
  loggingPtrs[454] = (NULL);
  loggingPtrs[455] = (NULL);
  loggingPtrs[456] = (NULL);
  loggingPtrs[457] = (NULL);
  loggingPtrs[458] = (NULL);
  loggingPtrs[459] = (NULL);
  loggingPtrs[460] = (NULL);
  loggingPtrs[461] = (NULL);
  loggingPtrs[462] = (NULL);
  loggingPtrs[463] = (NULL);
  loggingPtrs[464] = (NULL);
  loggingPtrs[465] = (NULL);
  loggingPtrs[466] = (NULL);
  loggingPtrs[467] = (NULL);
  loggingPtrs[468] = (NULL);
  loggingPtrs[469] = (NULL);
  loggingPtrs[470] = (NULL);
  loggingPtrs[471] = (NULL);
  loggingPtrs[472] = (NULL);
  loggingPtrs[473] = (NULL);
  loggingPtrs[474] = (NULL);
  loggingPtrs[475] = (NULL);
  loggingPtrs[476] = (NULL);
  loggingPtrs[477] = (NULL);
  loggingPtrs[478] = (NULL);
  loggingPtrs[479] = (NULL);
  loggingPtrs[480] = (NULL);
  loggingPtrs[481] = (NULL);
  loggingPtrs[482] = (NULL);
  loggingPtrs[483] = (NULL);
  loggingPtrs[484] = (NULL);
  loggingPtrs[485] = (NULL);
  loggingPtrs[486] = (NULL);
  loggingPtrs[487] = (NULL);
  loggingPtrs[488] = (NULL);
  loggingPtrs[489] = (NULL);
  loggingPtrs[490] = (NULL);
  loggingPtrs[491] = (NULL);
  loggingPtrs[492] = (NULL);
  loggingPtrs[493] = (NULL);
  loggingPtrs[494] = (NULL);
  loggingPtrs[495] = (NULL);
  loggingPtrs[496] = (NULL);
  loggingPtrs[497] = (NULL);
  loggingPtrs[498] = (NULL);
  loggingPtrs[499] = (NULL);
  loggingPtrs[500] = (NULL);
  loggingPtrs[501] = (NULL);
  loggingPtrs[502] = (NULL);
  loggingPtrs[503] = (NULL);
  loggingPtrs[504] = (NULL);
  loggingPtrs[505] = (NULL);
  loggingPtrs[506] = (NULL);
  loggingPtrs[507] = (NULL);
  loggingPtrs[508] = (NULL);
  loggingPtrs[509] = (NULL);
  loggingPtrs[510] = (NULL);
  loggingPtrs[511] = (NULL);
  loggingPtrs[512] = (NULL);
  loggingPtrs[513] = (NULL);
  loggingPtrs[514] = (NULL);
  loggingPtrs[515] = (NULL);
  loggingPtrs[516] = (NULL);
  loggingPtrs[517] = (NULL);
  loggingPtrs[518] = (NULL);
  loggingPtrs[519] = (NULL);
  loggingPtrs[520] = (NULL);
  loggingPtrs[521] = (NULL);
  loggingPtrs[522] = (NULL);
  loggingPtrs[523] = (NULL);
  loggingPtrs[524] = (NULL);
  loggingPtrs[525] = (NULL);
  loggingPtrs[526] = (NULL);
  loggingPtrs[527] = (NULL);
  loggingPtrs[528] = (NULL);
  loggingPtrs[529] = (NULL);
  loggingPtrs[530] = (NULL);
  loggingPtrs[531] = (NULL);
  loggingPtrs[532] = (NULL);
  loggingPtrs[533] = (NULL);
  loggingPtrs[534] = (NULL);
  loggingPtrs[535] = (NULL);
  loggingPtrs[536] = (NULL);
  loggingPtrs[537] = (NULL);
  loggingPtrs[538] = (NULL);
  loggingPtrs[539] = (NULL);
  loggingPtrs[540] = (NULL);
  loggingPtrs[541] = (NULL);
  loggingPtrs[542] = (NULL);
  loggingPtrs[543] = (NULL);
  loggingPtrs[544] = (NULL);
  loggingPtrs[545] = (NULL);
  loggingPtrs[546] = (NULL);
  loggingPtrs[547] = (NULL);
  loggingPtrs[548] = (NULL);
  loggingPtrs[549] = (NULL);
  loggingPtrs[550] = (NULL);
  loggingPtrs[551] = (NULL);
  loggingPtrs[552] = (NULL);
  loggingPtrs[553] = (NULL);
  loggingPtrs[554] = (NULL);
  loggingPtrs[555] = (NULL);
  loggingPtrs[556] = (NULL);
  loggingPtrs[557] = (NULL);
  loggingPtrs[558] = (NULL);
  loggingPtrs[559] = (NULL);
  loggingPtrs[560] = (NULL);
  loggingPtrs[561] = (NULL);
  loggingPtrs[562] = (NULL);
  loggingPtrs[563] = (NULL);
  loggingPtrs[564] = (NULL);
  loggingPtrs[565] = (NULL);
  loggingPtrs[566] = (NULL);
  loggingPtrs[567] = (NULL);
  loggingPtrs[568] = (NULL);
  loggingPtrs[569] = (NULL);
  loggingPtrs[570] = (NULL);
  loggingPtrs[571] = (NULL);
  loggingPtrs[572] = (NULL);
  loggingPtrs[573] = (NULL);
  loggingPtrs[574] = (NULL);
  loggingPtrs[575] = (NULL);
  loggingPtrs[576] = (NULL);
  loggingPtrs[577] = (NULL);
  loggingPtrs[578] = (NULL);
  loggingPtrs[579] = (NULL);
  loggingPtrs[580] = (NULL);
  loggingPtrs[581] = (NULL);
  loggingPtrs[582] = (NULL);
  loggingPtrs[583] = (NULL);
  loggingPtrs[584] = (NULL);
  loggingPtrs[585] = (NULL);
  loggingPtrs[586] = (NULL);
  loggingPtrs[587] = (NULL);
  loggingPtrs[588] = (NULL);
  loggingPtrs[589] = (NULL);
  loggingPtrs[590] = (NULL);
  loggingPtrs[591] = (NULL);
  loggingPtrs[592] = (NULL);
  loggingPtrs[593] = (NULL);
  loggingPtrs[594] = (NULL);
  loggingPtrs[595] = (NULL);
  loggingPtrs[596] = (NULL);
  loggingPtrs[597] = (NULL);
  loggingPtrs[598] = (NULL);
  loggingPtrs[599] = (NULL);
  loggingPtrs[600] = (NULL);
  loggingPtrs[601] = (NULL);
  loggingPtrs[602] = (NULL);
  loggingPtrs[603] = (NULL);
  loggingPtrs[604] = (NULL);
  loggingPtrs[605] = (NULL);
  loggingPtrs[606] = (NULL);
  loggingPtrs[607] = (NULL);
  loggingPtrs[608] = (NULL);
  loggingPtrs[609] = (NULL);
  loggingPtrs[610] = (NULL);
  loggingPtrs[611] = (NULL);
  loggingPtrs[612] = (NULL);
  loggingPtrs[613] = (NULL);
  loggingPtrs[614] = (NULL);
  loggingPtrs[615] = (NULL);
  loggingPtrs[616] = (NULL);
  loggingPtrs[617] = (NULL);
  loggingPtrs[618] = (NULL);
  loggingPtrs[619] = (NULL);
  loggingPtrs[620] = (NULL);
  loggingPtrs[621] = (NULL);
  loggingPtrs[622] = (NULL);
  loggingPtrs[623] = (NULL);
  loggingPtrs[624] = (NULL);
  loggingPtrs[625] = (NULL);
  loggingPtrs[626] = (NULL);
  loggingPtrs[627] = (NULL);
  loggingPtrs[628] = (NULL);
  loggingPtrs[629] = (NULL);
  loggingPtrs[630] = (NULL);
  loggingPtrs[631] = (NULL);
  loggingPtrs[632] = (NULL);
  loggingPtrs[633] = (NULL);
  loggingPtrs[634] = (NULL);
  loggingPtrs[635] = (NULL);
  loggingPtrs[636] = (NULL);
  loggingPtrs[637] = (NULL);
  loggingPtrs[638] = (NULL);
  loggingPtrs[639] = (NULL);
  loggingPtrs[640] = (NULL);
  loggingPtrs[641] = (NULL);
  loggingPtrs[642] = (NULL);
  loggingPtrs[643] = (NULL);
  loggingPtrs[644] = (NULL);
  loggingPtrs[645] = (NULL);
  loggingPtrs[646] = (NULL);
  loggingPtrs[647] = (NULL);
  loggingPtrs[648] = (NULL);
  loggingPtrs[649] = (NULL);
  loggingPtrs[650] = (NULL);
  loggingPtrs[651] = (NULL);
  loggingPtrs[652] = (NULL);
  loggingPtrs[653] = (NULL);
  loggingPtrs[654] = (NULL);
  loggingPtrs[655] = (NULL);
  loggingPtrs[656] = (NULL);
  loggingPtrs[657] = (NULL);
  loggingPtrs[658] = (NULL);
  loggingPtrs[659] = (NULL);
  loggingPtrs[660] = (NULL);
  loggingPtrs[661] = (NULL);
  loggingPtrs[662] = (NULL);
  loggingPtrs[663] = (NULL);
  loggingPtrs[664] = (NULL);
  loggingPtrs[665] = (NULL);
  loggingPtrs[666] = (NULL);
  loggingPtrs[667] = (NULL);
  loggingPtrs[668] = (NULL);
  loggingPtrs[669] = (NULL);
  loggingPtrs[670] = (NULL);
  loggingPtrs[671] = (NULL);
  loggingPtrs[672] = (NULL);
  loggingPtrs[673] = (NULL);
  loggingPtrs[674] = (NULL);
  loggingPtrs[675] = (NULL);
  loggingPtrs[676] = (NULL);
  loggingPtrs[677] = (NULL);
  loggingPtrs[678] = (NULL);
  loggingPtrs[679] = (NULL);
  loggingPtrs[680] = (NULL);
  loggingPtrs[681] = (NULL);
  loggingPtrs[682] = (NULL);
  loggingPtrs[683] = (NULL);
  loggingPtrs[684] = (NULL);
  loggingPtrs[685] = (NULL);
  loggingPtrs[686] = (NULL);
  loggingPtrs[687] = (NULL);
  loggingPtrs[688] = (NULL);
  loggingPtrs[689] = (NULL);
  loggingPtrs[690] = (NULL);
  loggingPtrs[691] = (NULL);
  loggingPtrs[692] = (NULL);
  loggingPtrs[693] = (NULL);
  loggingPtrs[694] = (NULL);
  loggingPtrs[695] = (NULL);
  loggingPtrs[696] = (NULL);
  loggingPtrs[697] = (NULL);
  loggingPtrs[698] = (NULL);
  loggingPtrs[699] = (NULL);
  loggingPtrs[700] = (NULL);
  loggingPtrs[701] = (NULL);
  loggingPtrs[702] = (NULL);
  loggingPtrs[703] = (NULL);
  loggingPtrs[704] = (NULL);
  loggingPtrs[705] = (NULL);
  loggingPtrs[706] = (NULL);
  loggingPtrs[707] = (NULL);
  loggingPtrs[708] = (NULL);
  loggingPtrs[709] = (NULL);
  loggingPtrs[710] = (NULL);
  loggingPtrs[711] = (NULL);
  loggingPtrs[712] = (NULL);
  loggingPtrs[713] = (NULL);
  loggingPtrs[714] = (NULL);
  loggingPtrs[715] = (NULL);
  loggingPtrs[716] = (NULL);
  loggingPtrs[717] = (NULL);
  loggingPtrs[718] = (NULL);
  loggingPtrs[719] = (NULL);
  loggingPtrs[720] = (NULL);
  loggingPtrs[721] = (NULL);
  loggingPtrs[722] = (NULL);
  loggingPtrs[723] = (NULL);
  loggingPtrs[724] = (NULL);
  loggingPtrs[725] = (NULL);
  loggingPtrs[726] = (NULL);
  loggingPtrs[727] = (NULL);
  loggingPtrs[728] = (NULL);
  loggingPtrs[729] = (NULL);
  loggingPtrs[730] = (NULL);
  loggingPtrs[731] = (NULL);
  loggingPtrs[732] = (NULL);
  loggingPtrs[733] = (NULL);
  loggingPtrs[734] = (NULL);
  loggingPtrs[735] = (NULL);
  loggingPtrs[736] = (NULL);
  loggingPtrs[737] = (NULL);
  loggingPtrs[738] = (NULL);
  loggingPtrs[739] = (NULL);
  loggingPtrs[740] = (NULL);
  loggingPtrs[741] = (NULL);
  loggingPtrs[742] = (NULL);
  loggingPtrs[743] = (NULL);
  loggingPtrs[744] = (NULL);
  loggingPtrs[745] = (NULL);
  loggingPtrs[746] = (NULL);
  loggingPtrs[747] = (NULL);
  loggingPtrs[748] = (NULL);
  loggingPtrs[749] = (NULL);
  loggingPtrs[750] = (NULL);
  loggingPtrs[751] = (NULL);
  loggingPtrs[752] = (NULL);
  loggingPtrs[753] = (NULL);
  loggingPtrs[754] = (NULL);
  loggingPtrs[755] = (NULL);
  loggingPtrs[756] = (NULL);
  loggingPtrs[757] = (NULL);
  loggingPtrs[758] = (NULL);
  loggingPtrs[759] = (NULL);
  loggingPtrs[760] = (NULL);
  loggingPtrs[761] = (NULL);
  loggingPtrs[762] = (NULL);
  loggingPtrs[763] = (NULL);
  loggingPtrs[764] = (NULL);
  loggingPtrs[765] = (NULL);
  loggingPtrs[766] = (NULL);
  loggingPtrs[767] = (NULL);
  loggingPtrs[768] = (NULL);
  loggingPtrs[769] = (NULL);
  loggingPtrs[770] = (NULL);
  loggingPtrs[771] = (NULL);
  loggingPtrs[772] = (NULL);
  loggingPtrs[773] = (NULL);
  loggingPtrs[774] = (NULL);
  loggingPtrs[775] = (NULL);
  loggingPtrs[776] = (NULL);
  loggingPtrs[777] = (NULL);
  loggingPtrs[778] = (NULL);
  loggingPtrs[779] = (NULL);
  loggingPtrs[780] = (NULL);
  loggingPtrs[781] = (NULL);
  loggingPtrs[782] = (NULL);
  loggingPtrs[783] = (NULL);
  loggingPtrs[784] = (NULL);
  loggingPtrs[785] = (NULL);
  loggingPtrs[786] = (NULL);
  loggingPtrs[787] = (NULL);
  loggingPtrs[788] = (NULL);
  loggingPtrs[789] = (NULL);
  loggingPtrs[790] = (NULL);
  loggingPtrs[791] = (NULL);
  loggingPtrs[792] = (NULL);
  loggingPtrs[793] = (NULL);
  loggingPtrs[794] = (NULL);
  loggingPtrs[795] = (NULL);
  loggingPtrs[796] = (NULL);
  loggingPtrs[797] = (NULL);
  loggingPtrs[798] = (NULL);
  loggingPtrs[799] = (NULL);
  loggingPtrs[800] = (NULL);
  loggingPtrs[801] = (NULL);
  loggingPtrs[802] = (NULL);
  loggingPtrs[803] = (NULL);
  loggingPtrs[804] = (NULL);
  loggingPtrs[805] = (NULL);
  loggingPtrs[806] = (NULL);
  loggingPtrs[807] = (NULL);
  loggingPtrs[808] = (NULL);
  loggingPtrs[809] = (NULL);
  loggingPtrs[810] = (NULL);
  loggingPtrs[811] = (NULL);
  loggingPtrs[812] = (NULL);
  loggingPtrs[813] = (NULL);
  loggingPtrs[814] = (NULL);
  loggingPtrs[815] = (NULL);
  loggingPtrs[816] = (NULL);
  loggingPtrs[817] = (NULL);
  loggingPtrs[818] = (NULL);
  loggingPtrs[819] = (NULL);
  loggingPtrs[820] = (NULL);
  loggingPtrs[821] = (NULL);
  loggingPtrs[822] = (NULL);
  loggingPtrs[823] = (NULL);
  loggingPtrs[824] = (NULL);
  loggingPtrs[825] = (NULL);
  loggingPtrs[826] = (NULL);
  loggingPtrs[827] = (NULL);
  loggingPtrs[828] = (NULL);
  loggingPtrs[829] = (NULL);
  loggingPtrs[830] = (NULL);
  loggingPtrs[831] = (NULL);
  loggingPtrs[832] = (NULL);
  loggingPtrs[833] = (NULL);
  loggingPtrs[834] = (NULL);
  loggingPtrs[835] = (NULL);
  loggingPtrs[836] = (NULL);
  loggingPtrs[837] = (NULL);
  loggingPtrs[838] = (NULL);
  loggingPtrs[839] = (NULL);
  loggingPtrs[840] = (NULL);
  loggingPtrs[841] = (NULL);
  loggingPtrs[842] = (NULL);
  loggingPtrs[843] = (NULL);
  loggingPtrs[844] = (NULL);
  loggingPtrs[845] = (NULL);
  loggingPtrs[846] = (NULL);
  loggingPtrs[847] = (NULL);
  loggingPtrs[848] = (NULL);
  loggingPtrs[849] = (NULL);
  loggingPtrs[850] = (NULL);
  loggingPtrs[851] = (NULL);
  loggingPtrs[852] = (NULL);
  loggingPtrs[853] = (NULL);
  loggingPtrs[854] = (NULL);
  loggingPtrs[855] = (NULL);
  loggingPtrs[856] = (NULL);
  loggingPtrs[857] = (NULL);
  loggingPtrs[858] = (NULL);
  loggingPtrs[859] = (NULL);
  loggingPtrs[860] = (NULL);
  loggingPtrs[861] = (NULL);
  loggingPtrs[862] = (NULL);
  loggingPtrs[863] = (NULL);
  loggingPtrs[864] = (NULL);
  loggingPtrs[865] = (NULL);
  loggingPtrs[866] = (NULL);
  loggingPtrs[867] = (NULL);
  loggingPtrs[868] = (NULL);
  loggingPtrs[869] = (NULL);
  loggingPtrs[870] = (NULL);
  loggingPtrs[871] = (NULL);
  loggingPtrs[872] = (NULL);
  loggingPtrs[873] = (NULL);
  loggingPtrs[874] = (NULL);
  loggingPtrs[875] = (NULL);
  loggingPtrs[876] = (NULL);
  loggingPtrs[877] = (NULL);
  loggingPtrs[878] = (NULL);
  loggingPtrs[879] = (NULL);
  loggingPtrs[880] = (NULL);
  loggingPtrs[881] = (NULL);
  loggingPtrs[882] = (NULL);
  loggingPtrs[883] = (NULL);
  loggingPtrs[884] = (NULL);
  loggingPtrs[885] = (NULL);
  loggingPtrs[886] = (NULL);
  loggingPtrs[887] = (NULL);
  loggingPtrs[888] = (NULL);
  loggingPtrs[889] = (NULL);
  loggingPtrs[890] = (NULL);
  loggingPtrs[891] = (NULL);
  loggingPtrs[892] = (NULL);
  loggingPtrs[893] = (NULL);
  loggingPtrs[894] = (NULL);
  loggingPtrs[895] = (NULL);
  loggingPtrs[896] = (NULL);
  loggingPtrs[897] = (NULL);
  loggingPtrs[898] = (NULL);
  loggingPtrs[899] = (NULL);
  loggingPtrs[900] = (NULL);
  loggingPtrs[901] = (NULL);
  loggingPtrs[902] = (NULL);
  loggingPtrs[903] = (NULL);
  loggingPtrs[904] = (NULL);
  loggingPtrs[905] = (NULL);
  loggingPtrs[906] = (NULL);
  loggingPtrs[907] = (NULL);
  loggingPtrs[908] = (NULL);
  loggingPtrs[909] = (NULL);
  loggingPtrs[910] = (NULL);
  loggingPtrs[911] = (NULL);
  loggingPtrs[912] = (NULL);
  loggingPtrs[913] = (NULL);
  loggingPtrs[914] = (NULL);
  loggingPtrs[915] = (NULL);
  loggingPtrs[916] = (NULL);
  loggingPtrs[917] = (NULL);
  loggingPtrs[918] = (NULL);
  loggingPtrs[919] = (NULL);
  loggingPtrs[920] = (NULL);
  loggingPtrs[921] = (NULL);
  loggingPtrs[922] = (NULL);
  loggingPtrs[923] = (NULL);
  loggingPtrs[924] = (NULL);
  loggingPtrs[925] = (NULL);
  loggingPtrs[926] = (NULL);
  loggingPtrs[927] = (NULL);
  loggingPtrs[928] = (NULL);
  loggingPtrs[929] = (NULL);
  loggingPtrs[930] = (NULL);
  loggingPtrs[931] = (NULL);
  loggingPtrs[932] = (NULL);
  loggingPtrs[933] = (NULL);
  loggingPtrs[934] = (NULL);
  loggingPtrs[935] = (NULL);
  loggingPtrs[936] = (NULL);
  loggingPtrs[937] = (NULL);
  loggingPtrs[938] = (NULL);
  loggingPtrs[939] = (NULL);
  loggingPtrs[940] = (NULL);
  loggingPtrs[941] = (NULL);
  loggingPtrs[942] = (NULL);
  loggingPtrs[943] = (NULL);
  loggingPtrs[944] = (NULL);
  loggingPtrs[945] = (NULL);
  loggingPtrs[946] = (NULL);
  loggingPtrs[947] = (NULL);
  loggingPtrs[948] = (NULL);
  loggingPtrs[949] = (NULL);
  loggingPtrs[950] = (NULL);
  loggingPtrs[951] = (NULL);
  loggingPtrs[952] = (NULL);
  loggingPtrs[953] = (NULL);
  loggingPtrs[954] = (NULL);
  loggingPtrs[955] = (NULL);
  loggingPtrs[956] = (NULL);
  loggingPtrs[957] = (NULL);
  loggingPtrs[958] = (NULL);
  loggingPtrs[959] = (NULL);
  loggingPtrs[960] = (NULL);
  loggingPtrs[961] = (NULL);
  loggingPtrs[962] = (NULL);
}

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0, 0 },

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0, 0 },

  { "struct", "struct_Vvva7FSOBKsqeNDpnUVqsB", 3, 1, sizeof
    (struct_Vvva7FSOBKsqeNDpnUVqsB), SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "APP", rt_offsetof(struct_Vvva7FSOBKsqeNDpnUVqsB, APP), 0, 21, 0 },

  { "VehicleSpeed_kph", rt_offsetof(struct_Vvva7FSOBKsqeNDpnUVqsB,
    VehicleSpeed_kph), 0, 21, 0 },

  { "AxlTrq_Nm", rt_offsetof(struct_Vvva7FSOBKsqeNDpnUVqsB, AxlTrq_Nm), 0, 22, 0
  }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 },

  { rtwCAPI_VECTOR, 30, 2, 0 },

  { rtwCAPI_VECTOR, 32, 2, 0 },

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_VECTOR, 36, 2, 0 },

  { rtwCAPI_VECTOR, 38, 2, 0 },

  { rtwCAPI_VECTOR, 40, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 28, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 42, 2, 0 },

  { rtwCAPI_VECTOR, 44, 2, 0 },

  { rtwCAPI_VECTOR, 46, 2, 0 },

  { rtwCAPI_VECTOR, 48, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 50, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 52, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 54, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR_ND, 56, 3, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 59, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 61, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  5,                                   /* 2 */
  1,                                   /* 3 */
  6,                                   /* 4 */
  1,                                   /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  3,                                   /* 8 */
  1,                                   /* 9 */
  3,                                   /* 10 */
  3,                                   /* 11 */
  9,                                   /* 12 */
  1,                                   /* 13 */
  1,                                   /* 14 */
  10,                                  /* 15 */
  1,                                   /* 16 */
  11,                                  /* 17 */
  1,                                   /* 18 */
  2,                                   /* 19 */
  22,                                  /* 20 */
  1,                                   /* 21 */
  1,                                   /* 22 */
  3,                                   /* 23 */
  1,                                   /* 24 */
  40,                                  /* 25 */
  1,                                   /* 26 */
  4,                                   /* 27 */
  1,                                   /* 28 */
  17,                                  /* 29 */
  1,                                   /* 30 */
  6,                                   /* 31 */
  50,                                  /* 32 */
  1,                                   /* 33 */
  1,                                   /* 34 */
  21,                                  /* 35 */
  1,                                   /* 36 */
  16,                                  /* 37 */
  23,                                  /* 38 */
  1,                                   /* 39 */
  1,                                   /* 40 */
  1001,                                /* 41 */
  17,                                  /* 42 */
  17,                                  /* 43 */
  1,                                   /* 44 */
  23,                                  /* 45 */
  40,                                  /* 46 */
  1,                                   /* 47 */
  1,                                   /* 48 */
  33,                                  /* 49 */
  22,                                  /* 50 */
  17,                                  /* 51 */
  23,                                  /* 52 */
  17,                                  /* 53 */
  10,                                  /* 54 */
  11,                                  /* 55 */
  10,                                  /* 56 */
  11,                                  /* 57 */
  2,                                   /* 58 */
  50,                                  /* 59 */
  17,                                  /* 60 */
  21,                                  /* 61 */
  16                                   /* 62 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0005, 0.0, 1.0
};

/* Fixed Point Map */
static rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 8, -7, 0 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    2, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 588,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 336,
    rtModelParameters, 21 },

  { rtBlockStates, 18 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1269764425U,
    2003518344U,
    3887461364U,
    3452746599U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  PID_HSC_Model_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void PID_HSC_Model_InitializeDataMapInfo(RT_MODEL_PID_HSC_Model_T *const PID_HSC_Model_M,
  B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T *localDW, X_PID_HSC_Model_n_T *localX)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(PID_HSC_Model_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(PID_HSC_Model_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(PID_HSC_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  PID_HSC_Model_InitializeDataAddr(PID_HSC_Model_M->DataMapInfo.dataAddress, localB,
    localDW, localX);
  rtwCAPI_SetDataAddressMap(PID_HSC_Model_M->DataMapInfo.mmi,
    PID_HSC_Model_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  PID_HSC_Model_InitializeVarDimsAddr(PID_HSC_Model_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(PID_HSC_Model_M->DataMapInfo.mmi,
    PID_HSC_Model_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(PID_HSC_Model_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(PID_HSC_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  PID_HSC_Model_InitializeLoggingFunctions(PID_HSC_Model_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(PID_HSC_Model_M->DataMapInfo.mmi,
    PID_HSC_Model_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(PID_HSC_Model_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(PID_HSC_Model_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(PID_HSC_Model_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void PID_HSC_Model_host_InitializeDataMapInfo(PID_HSC_Model_host_DataMapInfo_T
    *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: PID_HSC_Model_capi.c */

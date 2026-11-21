/*
 * HSC_Model_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "HSC_Model".
 *
 * Model version              : 1.101
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 18:25:45 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HSC_Model_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "HSC_Model.h"
#include "HSC_Model_capi.h"
#include "HSC_Model_private.h"
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
  { 0, 9, TARGET_STRING("HSC_Model/ACC Controller /CAVPCM_ACCMd_Request"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 10, TARGET_STRING("HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("AutoMdSpdLmtStat"), 0, 0, 0, 0, 0 },

  { 2, 10, TARGET_STRING("HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("ACCAct370"), 1, 0, 0, 0, 0 },

  { 3, 10, TARGET_STRING("HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("AdapCrsCntVDA"), 2, 0, 0, 0, 0 },

  { 4, 10, TARGET_STRING("HSC_Model/ACC Controller /Chart"),
    TARGET_STRING("ACCDrvrSeltdSpd"), 3, 0, 0, 0, 0 },

  { 5, 11, TARGET_STRING("HSC_Model/ACC Controller /Generate SetSpd"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 56, TARGET_STRING("HSC_Model/ACC Controller /Cast To Boolean"),
    TARGET_STRING("CAVACCReq"), 0, 1, 0, 0, 0 },

  { 7, 56, TARGET_STRING("HSC_Model/ACC Controller /Cast To Boolean1"),
    TARGET_STRING("CAVPCM_ACCAct"), 0, 1, 0, 0, 0 },

  { 8, 1, TARGET_STRING("HSC_Model/ACC Controller /Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 56, TARGET_STRING("HSC_Model/ACC Controller /km//h2m//s1"),
    TARGET_STRING("VehSpdms"), 0, 0, 0, 0, 0 },

  { 10, 3, TARGET_STRING("HSC_Model/ACC Controller /OR1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 11, 3, TARGET_STRING("HSC_Model/ACC Controller /Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 56, TARGET_STRING("HSC_Model/ACC Controller /Switch1"),
    TARGET_STRING("CAVPCM_ACCMdActive"), 0, 0, 0, 0, 0 },

  { 13, 56, TARGET_STRING("HSC_Model/ACC Controller /Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 24, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 25, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Chart1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 26, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Chart2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 27, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Chart3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Gain1"),
    TARGET_STRING("ChargeLimit"), 0, 0, 0, 0, 0 },

  { 19, 29, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("ContinuousCurrentLimit"), 0, 0, 0, 0, 0 },

  { 30, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("CurrentLimit"), 0, 0, 0, 0, 0 },

  { 31, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("CurrentLimit"), 0, 0, 0, 0, 0 },

  { 32, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("ContinuousDischageLimit"), 0, 0, 0, 0, 0 },

  { 33, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 21, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 19, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 20, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 18, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 40, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Min"),
    TARGET_STRING("ChargeLimit"), 0, 0, 0, 0, 0 },

  { 42, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Min1"),
    TARGET_STRING("DischargeLimit"), 0, 0, 0, 0, 0 },

  { 43, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Divide"),
    TARGET_STRING("CurrentDemanded"), 0, 0, 0, 0, 0 },

  { 44, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Divide1"),
    TARGET_STRING("CurrentDemanded"), 0, 0, 0, 0, 0 },

  { 45, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/Product4"),
    TARGET_STRING("Battery_Pwr_Limit_Charge"), 0, 0, 0, 0, 0 },

  { 46, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/Product5"),
    TARGET_STRING("Battery_Pwr_Limit_Charge"), 0, 0, 0, 0, 0 },

  { 47, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 48, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 49, 56, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 56, TARGET_STRING("HSC_Model/Diagnostics/Cast To Boolean"),
    TARGET_STRING("power direction fault"), 0, 1, 0, 0, 0 },

  { 51, 56, TARGET_STRING("HSC_Model/Diagnostics/kph to mps"),
    TARGET_STRING("Veh Spd_m/s"), 0, 0, 0, 0, 0 },

  { 52, 56, TARGET_STRING("HSC_Model/Diagnostics/Memory1"),
    TARGET_STRING(""), 0, 2, 0, 1, 0 },

  { 53, 56, TARGET_STRING("HSC_Model/Diagnostics/Memory2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/kph to mps"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/mps to rad//s"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/NOT"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 57, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/ACC_Deadzone"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 58, 56, TARGET_STRING(
    "HSC_Model/Driver_Arbitration/LCV Pedal Map Axle Torque Nm1"),
    TARGET_STRING("TotDrvrDmdTrq"), 0, 0, 0, 0, 0 },

  { 59, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/Multiply"),
    TARGET_STRING("map"), 0, 0, 0, 0, 0 },

  { 60, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/Saturation2"),
    TARGET_STRING("TotDrvrDmdTrq"), 0, 0, 0, 0, 0 },

  { 62, 56, TARGET_STRING(
    "HSC_Model/Driver_Arbitration/prevents zeroing Pwr Dmd at 0 kph"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/Sum"),
    TARGET_STRING("total"), 0, 0, 0, 0, 0 },

  { 64, 56, TARGET_STRING("HSC_Model/Driver_Arbitration/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 48, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING("emcp_p_eng_des_W1"), 0, 0, 0, 0, 0 },

  { 66, 48, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING("emcp_p_tot_W1"), 1, 0, 0, 0, 0 },

  { 67, 48, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING("emcp_p_elec_des_W1"), 2, 0, 0, 0, 0 },

  { 68, 48, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Energy Management Strategy"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 69, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 70, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Abs1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 38, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/FinalDrive"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 73, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 74, 38, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 75, 38, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 44, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/kph to mps"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/kph to mps1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 38, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 82, 38, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 38, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Product2"),
    TARGET_STRING("Engine_Axle_Torque"), 0, 0, 0, 0, 0 },

  { 84, 38, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 85, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Add"),
    TARGET_STRING("totaloutputpower"), 0, 0, 0, 0, 0 },

  { 87, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Add1"),
    TARGET_STRING("eng_mot"), 0, 0, 0, 0, 0 },

  { 88, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Add2"),
    TARGET_STRING("diff"), 0, 0, 0, 0, 0 },

  { 89, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Add6"),
    TARGET_STRING("diff"), 0, 0, 0, 0, 0 },

  { 90, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Add7"),
    TARGET_STRING("diff"), 0, 0, 0, 0, 0 },

  { 91, 56, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 38, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Direct Lookup Table (n-D)"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean"),
    TARGET_STRING("dist_is_valid"), 0, 1, 0, 0, 0 },

  { 94, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 95, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean10"),
    TARGET_STRING("xdotref"), 0, 0, 0, 0, 0 },

  { 96, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean11"),
    TARGET_STRING("ACCBrakeTime"), 0, 0, 0, 0, 0 },

  { 97, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean12"),
    TARGET_STRING("TrafficLightPresent"), 0, 1, 0, 0, 0 },

  { 98, 14, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean13"),
    TARGET_STRING("CAVtrgVel"), 0, 0, 0, 0, 0 },

  { 99, 12, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean14"),
    TARGET_STRING("CAVtrgDist"), 0, 0, 0, 0, 0 },

  { 100, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean15"),
    TARGET_STRING("grade"), 0, 0, 0, 0, 0 },

  { 101, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean16"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 102, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 103, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean22"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 104, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean23"),
    TARGET_STRING("APP"), 0, 0, 0, 0, 0 },

  { 105, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean24"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 106, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean25"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 107, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean26"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 108, 3, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean27"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean28"),
    TARGET_STRING("gear"), 0, 0, 0, 0, 0 },

  { 110, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean29"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 111, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean3"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 112, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean30"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 113, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean31"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 114, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean32"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 115, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean33"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 116, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean34"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean35"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean36"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 119, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean37"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean38"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 121, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean39"),
    TARGET_STRING("lvrpos"), 0, 4, 0, 0, 0 },

  { 122, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 123, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean40"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean41"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean42"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 126, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean43"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 127, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean44"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 128, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean45"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 129, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean46"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 130, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean47"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 131, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean48"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 132, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean49"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 133, 3, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 134, 43, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean50"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 135, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean51"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 136, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean6"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 137, 37, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean7"),
    TARGET_STRING("DrvIntndAxlTrqMax"), 0, 0, 0, 0, 0 },

  { 138, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean8"),
    TARGET_STRING("DrvIntndAxlTrqMin"), 0, 0, 0, 0, 0 },

  { 139, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Boolean9"),
    TARGET_STRING("TrqReqStat"), 0, 3, 0, 0, 0 },

  { 140, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double"),
    TARGET_STRING("Tanh_Exponent"), 0, 0, 0, 0, 0 },

  { 141, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double1"),
    TARGET_STRING("Tanh_multiplier"), 0, 0, 0, 0, 0 },

  { 142, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double2"),
    TARGET_STRING("CurrentState"), 0, 0, 0, 0, 0 },

  { 143, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double3"),
    TARGET_STRING("DistanceToIntersection"), 0, 0, 0, 0, 0 },

  { 144, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double4"),
    TARGET_STRING("TimeToIntersection"), 0, 0, 0, 0, 0 },

  { 145, 56, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double5"),
    TARGET_STRING("Decel_Division_Value"), 0, 0, 0, 0, 0 },

  { 146, 22, TARGET_STRING("HSC_Model/Input_Wrapper/Cast To Double6"),
    TARGET_STRING("bcm_coolan_temp_C"), 0, 0, 0, 0, 0 },

  { 147, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 148, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/rbcp_regen_enable"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 150, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 151, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/BPP Fade Out"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 152, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Steering Wheel Angle Fade Out"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 153, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Vehicle Speed Fade Out"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 154, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 155, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Product1"),
    TARGET_STRING("RegenPowerW"), 0, 0, 0, 0, 0 },

  { 156, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 157, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 158, 54, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 159, 54, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 160, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("hsc_bms_enable"), 0, 0, 0, 0, 0 },

  { 161, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("hsc_bms_leakage_ena"), 1, 0, 0, 0, 0 },

  { 162, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("hsc_bms_mainc_close"), 2, 0, 0, 0, 0 },

  { 163, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 164, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 165, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("R1"), 5, 0, 0, 0, 0 },

  { 166, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING("R2"), 6, 0, 0, 0, 0 },

  { 167, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 168, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 169, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 170, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 171, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 172, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 173, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 174, 55, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMCP"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 175, 56, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/kph to mph"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 176, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 177, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 178, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 179, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 180, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING("ACC_pwr_ext"), 2, 0, 0, 0, 0 },

  { 181, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 182, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 183, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 184, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 185, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING("SetSpeedCmd"), 2, 0, 0, 0, 0 },

  { 186, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING("TotalAccelCommandBeforeRoadLoad"), 2, 0, 0, 0, 0 },

  { 187, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext"),
    TARGET_STRING("TotalForceAfterRoadLoad"), 2, 0, 0, 0, 0 },

  { 188, 3, TARGET_STRING(
    "HSC_Model/ACC Controller /Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 189, 3, TARGET_STRING(
    "HSC_Model/ACC Controller /Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 190, 3, TARGET_STRING(
    "HSC_Model/ACC Controller /Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 191, 56, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Data Type Conversion"),
    TARGET_STRING("EgoSpd"), 0, 0, 0, 0, 0 },

  { 192, 56, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator"),
    TARGET_STRING("TargetPos"), 0, 0, 0, 0, 0 },

  { 193, 56, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1"),
    TARGET_STRING("EgoPos"), 0, 0, 0, 0, 0 },

  { 194, 13, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 15, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 56, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 197, 56, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 198, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 199, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Power"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 200, 16, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Square"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Product"),
    TARGET_STRING("ActDist"), 0, 0, 0, 0, 0 },

  { 203, 16, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 205, 16, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 206, 16, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Add2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Add3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 209, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Sum1"),
    TARGET_STRING("DistErr"), 0, 0, 0, 0, 0 },

  { 210, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Sum2"),
    TARGET_STRING("SafeDist"), 0, 0, 0, 0, 0 },

  { 211, 56, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Matrix Concatenate"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 213, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Matrix Concatenate1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 214, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 216, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 29, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Vehicle Speed Multiplier"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Dynamic PSOC Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 220, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 222, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 223, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 224, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 225, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 226, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/Saturation Dynamic/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 227, 56, TARGET_STRING("HSC_Model/Diagnostics/Brake Torque Cancelation/Gain"),
    TARGET_STRING("BPPTrqCancel"), 0, 2, 0, 1, 0 },

  { 228, 56, TARGET_STRING("HSC_Model/Diagnostics/Brake Torque Cancelation/IC"),
    TARGET_STRING("BPPTrqCancel"), 0, 1, 0, 0, 0 },

  { 229, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Brake Torque Cancelation/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 230, 30, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 231, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/Data Type Conversion2"),
    TARGET_STRING("FirstTimeFlag"), 0, 1, 0, 0, 0 },

  { 232, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/Data Type Conversion3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 233, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/kohms to ohms"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 234, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/Logical Operator11"),
    TARGET_STRING("gfd"), 0, 1, 0, 0, 0 },

  { 235, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/Memory7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 236, 56, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 237, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/closed contactor battery range"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 238, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Motor Control Fault/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 239, 31, TARGET_STRING("HSC_Model/Diagnostics/Overheat/fault Counter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 240, 32, TARGET_STRING("HSC_Model/Diagnostics/Overheat/fault Counter2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 241, 33, TARGET_STRING("HSC_Model/Diagnostics/Overheat/fault Counter3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 242, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 243, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 244, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 245, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Data Type Conversion7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 246, 56, TARGET_STRING("HSC_Model/Diagnostics/Overheat/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 247, 34, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/Fault counter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 248, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 249, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 250, 56, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/IC"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 251, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 252, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 253, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/Logical Operator8"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 254, 56, TARGET_STRING("HSC_Model/Diagnostics/Protect HV/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 255, 35, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/Fault Counter"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 256, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 257, 56, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/IC"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 258, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator"),
    TARGET_STRING("RecieveDrive"), 0, 1, 0, 0, 0 },

  { 259, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 260, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 261, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 262, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 263, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 264, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator6"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 265, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/Logical Operator7"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 266, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/ZeroPwrTmTrq/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 267, 36, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Fault counter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 268, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Abs1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Abs2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Abs3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 271, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Data Type Conversion4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 272, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/IC"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 273, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/AND"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 274, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 276, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/m//s2rad//s"),
    TARGET_STRING("whlspd"), 0, 0, 0, 0, 0 },

  { 277, 39, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/MinMax1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 278, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 279, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 280, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 281, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/prevents dividing by zero"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 282, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 283, 40, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 284, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain19"),
    TARGET_STRING("VehSpdMPH"), 0, 0, 0, 0, 0 },

  { 285, 46, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/RPM_to_rad//s"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Diagnostic Faults"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 287, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 288, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 289, 46, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Divide1"),
    TARGET_STRING("Motor_Trq_Req_Raw_Nm"), 0, 0, 0, 0, 0 },

  { 290, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 46, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/prevents dividing by zero"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 292, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 293, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Switch1"),
    TARGET_STRING("motor_trq_demand_Nm"), 0, 0, 0, 0, 0 },

  { 294, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/AND"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 295, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Switch3"),
    TARGET_STRING("ACC_Correc_Eng"), 0, 0, 0, 0, 0 },

  { 296, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/AND"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 297, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Switch4"),
    TARGET_STRING("ACC_Correc_Mot"), 0, 0, 0, 0, 0 },

  { 298, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Increment Stored Integer/FixPt Gateway In"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 299, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Increment Stored Integer/FixPt Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 300, 52, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/APP Hysterisis"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 302, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Gain19"),
    TARGET_STRING("VehSpdMPH"), 0, 0, 0, 0, 0 },

  { 303, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/OR"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 304, 50, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 305, 51, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 306, 51, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 307, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 308, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 309, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 310, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 311, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 312, 56, TARGET_STRING(
    "HSC_Model/Regenerative_Braking_Control_Process/SOC Charge Limit/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 313, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/DistInfo"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 314, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 315, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant12"),
    TARGET_STRING("TotalAccelCommandBeforeRoadLoad"), 0, 0, 0, 0, 0 },

  { 316, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant13"),
    TARGET_STRING("TotalForceAfterRoadLoad"), 0, 0, 0, 0, 0 },

  { 317, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant14"),
    TARGET_STRING("SetSpeedCmd"), 0, 0, 0, 0, 0 },

  { 318, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/EnginePowerBlock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 319, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/FoundationBrakesBlock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 320, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/MotorPowerBlock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 321, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete-Time Integrator"),
    TARGET_STRING("EgoPosition"), 0, 0, 0, 0, 1 },

  { 322, 7, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 323, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 324, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 325, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Multiply"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 326, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/kph2m//s"),
    TARGET_STRING("SetSpd"), 0, 0, 0, 0, 0 },

  { 327, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/2-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 328, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Square"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 329, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 330, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Divide1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 331, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Divide2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 332, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Divide3"),
    TARGET_STRING("Headway_intrusion"), 0, 0, 0, 0, 0 },

  { 333, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Divide4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 334, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 335, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 336, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 337, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 338, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Product4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 339, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Product5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 340, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 341, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 342, 7, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 343, 8, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Add"),
    TARGET_STRING("ACC_pwr_ext"), 0, 0, 0, 0, 0 },

  { 344, 7, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 345, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 346, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Minus1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 347, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Minus2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 348, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Minus3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 349, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Minus4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 350, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Minus5"),
    TARGET_STRING("set_spd_diff"), 0, 0, 0, 0, 0 },

  { 351, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 352, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 353, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 354, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 355, 56, TARGET_STRING(
    "HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/checks for Low Speed Cruise Charge Mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 356, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Brake Torque Cancelation/BPPCheck/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 357, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Brake Torque Cancelation/Launch Mode Check/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 358, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Ground Fault Detection/Competition Requirement 500 ohms per volt/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 359, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 360, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 361, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Compare To Constant3/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 362, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Overheat/Compare To Constant6/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 363, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/CheckForDrive/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 364, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/CheckForReverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 365, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/ForwardMotionCheck/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 366, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Powertrain direction fault/ReverseMotionCheck/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 367, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/CheckForDrive1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 368, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/CheckForNeutral/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 369, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/CheckForPark1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 370, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/CheckForReverse /Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 371, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/CheckForReverse2/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 372, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/FirstGearOrGreater/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 373, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/Shift Validity/NinethGearOrless/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 374, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 375, 56, TARGET_STRING(
    "HSC_Model/Diagnostics/motor_torque direction fault/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 376, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 377, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 378, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 379, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Check for key in Run/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 380, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for Drive/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 381, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Reverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 382, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Unknown/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 383, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 384, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Abs1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 385, 44, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/1-D Lookup Creep Trq_Nm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 386, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 387, 45, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 388, 45, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 389, 45, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 390, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 391, 41, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 392, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 393, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 394, 41, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 395, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 396, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Tanh"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 397, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Delay One Step"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 398, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 399, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 400, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 401, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 402, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 403, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 404, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/OR"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 405, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/allows braking torque if in  either cruise changing modes"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 406, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Reverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 407, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 408, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 409, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 410, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 411, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 412, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 413, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 414, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 415, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/LowerRelop1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 416, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/UpperRelop"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 417, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 418, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 419, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 420, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 421, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 422, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 423, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 424, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 425, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 426, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 427, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Vector Concatenate"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 428, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Vector Concatenate1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 429, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 430, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 431, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Relational Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 432, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Relational Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 433, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 434, 8, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Unit Delay"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 435, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Drive/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 436, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Reverse/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 437, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for ShftLvrPos Unknown/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 438, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Creep Torque Threshold_Nm/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 439, 56, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Check For  Launch Mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 440, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if cruise charging mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 441, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if low speed Cruise Charging mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 442, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if regen mode/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 443, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks negative torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 444, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks positive torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 445, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks regen switch is on/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 446, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charge SOC Limit/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 447, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charging Motor Torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 448, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging Motor Torque/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 449, 43, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging SOC Limit/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 450, TARGET_STRING("HSC_Model/ACC Controller /Compare To Constant1"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 451, TARGET_STRING("HSC_Model/ACC Controller /Compare To Constant2"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 452, TARGET_STRING("HSC_Model/ACC Controller /Compare To Constant3"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 453, TARGET_STRING("HSC_Model/ACC Controller /Change"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 454, TARGET_STRING("HSC_Model/ACC Controller /Denied"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 455, TARGET_STRING("HSC_Model/ACC Controller /SetSpdMPH"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 456, TARGET_STRING("HSC_Model/ACC Controller /Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 457, TARGET_STRING("HSC_Model/ACC Controller /Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 458, TARGET_STRING("HSC_Model/ACC Controller /Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 459, TARGET_STRING("HSC_Model/ACC Controller /Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 460, TARGET_STRING("HSC_Model/ACC Controller /km//h2m//s1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 461, TARGET_STRING("HSC_Model/ACC Controller /Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 462, TARGET_STRING("HSC_Model/ACC Controller /Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 463, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 464, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Target SOC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 465, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 466, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 467, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 468, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 469, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 470, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 471, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 472, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 473, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 474, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 475, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/IC8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 476, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 4, 0 },

  { 477, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 5, 0 },

  { 478, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 479, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 4, 0 },

  { 480, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 5, 0 },

  { 481, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension3"), 0, 6, 0 },

  { 482, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("maxIndex"), 5, 2, 0 },

  { 483, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table2"),
    TARGET_STRING("dimSizes"), 5, 2, 0 },

  { 484, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 4, 0 },

  { 485, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 5, 0 },

  { 486, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("BreakpointsForDimension3"), 0, 6, 0 },

  { 487, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("maxIndex"), 5, 2, 0 },

  { 488, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/2-D Lookup Table5"),
    TARGET_STRING("dimSizes"), 5, 2, 0 },

  { 489, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 4, 0 },

  { 490, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 5, 0 },

  { 491, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousDischageLimit"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 492, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 493, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 494, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit1"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 495, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 496, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit2"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 497, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 498, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit3"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 499, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/ContinuousMotorPowerLimit3"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 500, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 501, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 502, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit1"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 503, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/DiscreteMotorPowerLimit1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 504, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Memory"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 505, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Memory1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 506, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 507, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 508, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 509, TARGET_STRING("HSC_Model/Diagnostics/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 510, TARGET_STRING("HSC_Model/Diagnostics/kph to mps"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 511, TARGET_STRING("HSC_Model/Diagnostics/Memory1"),
    TARGET_STRING("InitialCondition"), 2, 0, 1 },

  { 512, TARGET_STRING("HSC_Model/Diagnostics/Memory2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 513, TARGET_STRING("HSC_Model/Driver_Arbitration/kph to mps"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 514, TARGET_STRING("HSC_Model/Driver_Arbitration/ACC_Deadzone"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 515, TARGET_STRING("HSC_Model/Driver_Arbitration/ACC_Deadzone"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 516, TARGET_STRING("HSC_Model/Driver_Arbitration/LCV Pedal Map Axle Torque Nm1"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 517, TARGET_STRING("HSC_Model/Driver_Arbitration/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 518, TARGET_STRING("HSC_Model/Driver_Arbitration/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 519, TARGET_STRING("HSC_Model/Driver_Arbitration/prevents zeroing Pwr Dmd at 0 kph"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 520, TARGET_STRING("HSC_Model/Driver_Arbitration/prevents zeroing Pwr Dmd at 0 kph"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 521, TARGET_STRING("HSC_Model/Driver_Arbitration/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 522, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Motor Enable"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 523, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/FinalDrive"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 524, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 525, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 526, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 527, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/kph to mps"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 528, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/kph to mps1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 529, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 530, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 531, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 532, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 533, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 534, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 535, TARGET_STRING("HSC_Model/Input_Wrapper/Activate MIL//HIL Version"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 536, TARGET_STRING("HSC_Model/Output_Wrapper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 537, TARGET_STRING("HSC_Model/Output_Wrapper/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 538, TARGET_STRING("HSC_Model/Output_Wrapper/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 539, TARGET_STRING("HSC_Model/Output_Wrapper/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 540, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 541, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant1"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 542, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant2"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 543, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant3"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 544, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/SOC Charge Limit"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 545, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 546, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Max BPP Regen W"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 547, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Off Throttle Regen Power Demand W"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 548, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 549, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/rbcp_regen_enable"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 550, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Steering Wheel Angle Fade Out"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 551, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Steering Wheel Angle Fade Out"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 552, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Vehicle Speed Fade Out"),
    TARGET_STRING("Table"), 0, 6, 0 },

  { 553, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Vehicle Speed Fade Out"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 554, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 555, TARGET_STRING("HSC_Model/Regenerative_Braking_Control_Process/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 556, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/Brusa Enable"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 557, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMUmajorProt"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 558, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/VMUminorProt"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 559, TARGET_STRING("HSC_Model/Vehicle_Mode_Control_Process/kph to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 560, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/TargetInitialPos"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 561, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 562, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 563, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 564, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 565, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 566, TARGET_STRING("HSC_Model/ACC Controller /HostPerceptionModel/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 567, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 568, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 569, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 570, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 571, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 572, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 573, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 574, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 575, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Default Spacing"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 576, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 577, TARGET_STRING("HSC_Model/ACC Controller /Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 578, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/checks for Low Speed Cruise Charge Mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 579, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 580, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 581, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 582, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 583, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 584, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 585, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/psoc_table_SOC_offset"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 586, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Vehicle Speed Multiplier"),
    TARGET_STRING("Table"), 0, 11, 0 },

  { 587, TARGET_STRING("HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/Vehicle Speed Multiplier"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 11, 0 },

  { 588, TARGET_STRING("HSC_Model/Diagnostics/Brake Torque Cancelation/BPPCheck"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 589, TARGET_STRING("HSC_Model/Diagnostics/Brake Torque Cancelation/Launch Mode Check"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 590, TARGET_STRING("HSC_Model/Diagnostics/Brake Torque Cancelation/Gain"),
    TARGET_STRING("Gain"), 2, 0, 1 },

  { 591, TARGET_STRING("HSC_Model/Diagnostics/Brake Torque Cancelation/IC"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 592, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/Competition Requirement 500 ohms per volt"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 593, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/kohms to ohms"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 594, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/Memory7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 595, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/closed contactor battery range"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 596, TARGET_STRING("HSC_Model/Diagnostics/Ground Fault Detection/closed contactor battery range"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 597, TARGET_STRING("HSC_Model/Diagnostics/Motor Control Fault/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 598, TARGET_STRING("HSC_Model/Diagnostics/Overheat/Compare To Constant1"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 599, TARGET_STRING("HSC_Model/Diagnostics/Overheat/Compare To Constant2"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 600, TARGET_STRING("HSC_Model/Diagnostics/Overheat/Compare To Constant3"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 601, TARGET_STRING("HSC_Model/Diagnostics/Overheat/Compare To Constant6"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 602, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/CheckForDrive"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 603, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/CheckForReverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 604, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/ForwardMotionCheck"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 605, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/ReverseMotionCheck"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 606, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 607, TARGET_STRING("HSC_Model/Diagnostics/Powertrain direction fault/IC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 608, TARGET_STRING("HSC_Model/Diagnostics/Protect HV/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 609, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/CheckForDrive1"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 610, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/CheckForNeutral"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 611, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/CheckForPark1"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 612, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/CheckForReverse "),
    TARGET_STRING("const"), 0, 0, 0 },

  { 613, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/CheckForReverse2"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 614, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/FirstGearOrGreater"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 615, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/NinethGearOrless"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 616, TARGET_STRING("HSC_Model/Diagnostics/Shift Validity/IC"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 617, TARGET_STRING("HSC_Model/Diagnostics/motor_torque direction fault/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 618, TARGET_STRING("HSC_Model/Diagnostics/motor_torque direction fault/IC"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 619, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Compare To Constant"),
    TARGET_STRING("const"), 2, 0, 0 },

  { 620, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 621, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 622, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/prevents dividing by zero"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 623, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/prevents dividing by zero"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 624, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Check for key in Run"),
    TARGET_STRING("const"), 2, 0, 0 },

  { 625, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for Drive"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 626, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Reverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 627, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Unknown"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 628, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Compare To Constant"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 629, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Reverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 630, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 631, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Gain19"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 632, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/RPM_to_rad//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 633, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/prevents dividing by zero"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 634, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/prevents dividing by zero"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 635, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 636, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Increment Stored Integer/FixPt Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 637, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Compare To Constant"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 638, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Compare To Constant1"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 639, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 640, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 641, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Gain19"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 642, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 12, 0 },

  { 643, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 12, 0 },

  { 644, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 645, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 646, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 647, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Af"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 648, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Cd"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 649, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 650, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 651, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 652, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 653, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 654, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 655, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 656, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 657, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 658, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 659, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 660, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 661, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/EnginePowerBlock"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 662, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/FoundationBrakesBlock"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 663, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/M*g*Crr"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 664, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/MotorPowerBlock"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 665, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/RoadGrade"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 666, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 667, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 668, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 669, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 670, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 671, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/kph2m//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 672, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 13, 0 },

  { 673, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 14, 0 },

  { 674, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/2-D Lookup Table"),
    TARGET_STRING("maxIndex"), 5, 3, 0 },

  { 675, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 676, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 677, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 678, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 679, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 680, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 681, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 682, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 683, TARGET_STRING("HSC_Model/Diagnostics/motor_torque direction fault/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 684, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Drive"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 685, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Reverse"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 686, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for ShftLvrPos Unknown"),
    TARGET_STRING("const"), 4, 0, 0 },

  { 687, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Creep Torque Threshold_Nm"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 688, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/1-D Lookup Creep Trq_Nm"),
    TARGET_STRING("Table"), 0, 3, 0 },

  { 689, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/1-D Lookup Creep Trq_Nm"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 690, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 15, 0 },

  { 691, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 692, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Delay One Step"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 693, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Check For  Launch Mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 694, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Load Torque Nm"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 695, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if cruise charging mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 696, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if low speed Cruise Charging mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 697, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if regen mode"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 698, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charge SOC Limit"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 699, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging SOC Limit"),
    TARGET_STRING("const"), 0, 0, 0 },

  { 700, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/SOC Okay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 701, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 702, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 703, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 704, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 705, TARGET_STRING("HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 6, 0 },

  { 706, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks negative torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 707, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks positive torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 708, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks regen switch is on/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 709, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charging Motor Torque/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 710, TARGET_STRING("HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging Motor Torque/Constant"),
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
  { 711, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time\nIntegrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 712, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /HostPerceptionModel/Discrete-Time\nIntegrator1"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 713, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete-Time\nIntegrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 714, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 715, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay1"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 716, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Unit Delay2"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 717, -1, TARGET_STRING(
    "HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Delay One Step"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 718, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 719, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 720, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Discrete-Time\nIntegrator"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 0, 0, -1, 0 },

  { 721, -1, TARGET_STRING(
    "HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 0, 3, 0, 0, 0, -1, 0 },

  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 722, TARGET_STRING("PedalMap_LCV"), 6, 0, 0 },

  { 723, TARGET_STRING("N"), 0, 4, 0 },

  { 724, TARGET_STRING("Re"), 0, 0, 0 },

  { 725, TARGET_STRING("bppRegenLookup"), 0, 18, 0 },

  { 726, TARGET_STRING("bppRegenMap"), 0, 18, 0 },

  { 727, TARGET_STRING("f_tbrake_n_bpt"), 0, 19, 0 },

  { 728, TARGET_STRING("motor_speed_bkp_rpm"), 0, 20, 0 },

  { 729, TARGET_STRING("peak_trq_curve"), 0, 20, 0 },

  { 730, TARGET_STRING("ContinuousBatteryCharge"), 0, 21, 0 },

  { 731, TARGET_STRING("ContinuousBatteryDischarge"), 0, 21, 0 },

  { 732, TARGET_STRING("InterpBatteryCharge"), 0, 22, 0 },

  { 733, TARGET_STRING("InterpBatteryDischarge"), 0, 22, 0 },

  { 734, TARGET_STRING("New_Mass_Toque_Map"), 0, 17, 0 },

  { 735, TARGET_STRING("Reverse_APP"), 0, 23, 0 },

  { 736, TARGET_STRING("tandivide"), 0, 15, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void HSC_Model_InitializeDataAddr(void* dataAddr[], B_HSC_Model_c_T
  *localB, DW_HSC_Model_f_T *localDW)
{
  dataAddr[0] = (void*) (&localB->CAVACCRequest);
  dataAddr[1] = (void*) (&localB->AutoMdSpdLmtStat);
  dataAddr[2] = (void*) (&localB->ACCAct370);
  dataAddr[3] = (void*) (&localB->AdapCrsCntVDA);
  dataAddr[4] = (void*) (&localB->ACCDrvrSeltdSpd);
  dataAddr[5] = (void*) (&localB->ACCSetSpd);
  dataAddr[6] = (void*) (&localB->CAVACCReq);
  dataAddr[7] = (void*) (&localB->CAVPCM_ACCAct);
  dataAddr[8] = (void*) (&localB->Gain_b);
  dataAddr[9] = (void*) (&localB->VehSpdms);
  dataAddr[10] = (void*) (&localB->OR1);
  dataAddr[11] = (void*) (&localB->Switch_ja);
  dataAddr[12] = (void*) (&localB->CAVPCM_ACCMdActive);
  dataAddr[13] = (void*) (&localB->Switch2);
  dataAddr[14] = (void*) (&localB->sf_Chart_g.timer);
  dataAddr[15] = (void*) (&localB->timer_g);
  dataAddr[16] = (void*) (&localB->sf_Chart2.timer);
  dataAddr[17] = (void*) (&localB->timer);
  dataAddr[18] = (void*) (&localB->ChargeLimit_l);
  dataAddr[19] = (void*) (&localB->kphtomph_f);
  dataAddr[20] = (void*) (&localB->IC_m);
  dataAddr[21] = (void*) (&localB->IC1);
  dataAddr[22] = (void*) (&localB->IC2);
  dataAddr[23] = (void*) (&localB->IC3);
  dataAddr[24] = (void*) (&localB->IC4);
  dataAddr[25] = (void*) (&localB->IC5);
  dataAddr[26] = (void*) (&localB->IC6);
  dataAddr[27] = (void*) (&localB->IC7);
  dataAddr[28] = (void*) (&localB->IC8);
  dataAddr[29] = (void*) (&localB->ContinuousCurrentLimit);
  dataAddr[30] = (void*) (&localB->CurrentLimit);
  dataAddr[31] = (void*) (&localB->CurrentLimit_f);
  dataAddr[32] = (void*) (&localB->ContinuousDischageLimit);
  dataAddr[33] = (void*) (&localB->ContinuousMotorPowerLimit);
  dataAddr[34] = (void*) (&localB->ContinuousMotorPowerLimit1);
  dataAddr[35] = (void*) (&localB->ContinuousMotorPowerLimit2);
  dataAddr[36] = (void*) (&localB->ContinuousMotorPowerLimit3);
  dataAddr[37] = (void*) (&localB->DiscreteMotorPowerLimit);
  dataAddr[38] = (void*) (&localB->DiscreteMotorPowerLimit1);
  dataAddr[39] = (void*) (&localB->Memory);
  dataAddr[40] = (void*) (&localB->Memory1);
  dataAddr[41] = (void*) (&localB->ChargeLimit);
  dataAddr[42] = (void*) (&localB->DischargeLimit);
  dataAddr[43] = (void*) (&localB->CurrentDemanded);
  dataAddr[44] = (void*) (&localB->CurrentDemanded_k);
  dataAddr[45] = (void*) (&localB->Battery_Pwr_Limit_Charge);
  dataAddr[46] = (void*) (&localB->Battery_Pwr_Limit_Charge_a);
  dataAddr[47] = (void*) (&localB->Switch_l);
  dataAddr[48] = (void*) (&localB->Switch1_m);
  dataAddr[49] = (void*) (&localB->Switch3);
  dataAddr[50] = (void*) (&localB->powerdirectionfault);
  dataAddr[51] = (void*) (&localB->VehSpd_ms);
  dataAddr[52] = (void*) (&localB->Memory1_m);
  dataAddr[53] = (void*) (&localB->Memory2);
  dataAddr[54] = (void*) (&localB->kphtomps);
  dataAddr[55] = (void*) (&localB->mpstorads);
  dataAddr[56] = (void*) (&localB->NOT);
  dataAddr[57] = (void*) (&localB->ACC_Deadzone);
  dataAddr[58] = (void*) (&localB->TotDrvrDmdTrq);
  dataAddr[59] = (void*) (&localB->map);
  dataAddr[60] = (void*) (&localB->Product);
  dataAddr[61] = (void*) (&localB->TotDrvrDmdTrq_g);
  dataAddr[62] = (void*) (&localB->preventszeroingPwrDmdat0kph);
  dataAddr[63] = (void*) (&localB->total);
  dataAddr[64] = (void*) (&localB->Switch_j);
  dataAddr[65] = (void*) (&localB->emcp_p_eng_des_W);
  dataAddr[66] = (void*) (&localB->emcp_ptot_W);
  dataAddr[67] = (void*) (&localB->emcp_p_elec_des_W);
  dataAddr[68] = (void*) (&localB->emcp_mode);
  dataAddr[69] = (void*) (&localB->Abs);
  dataAddr[70] = (void*) (&localB->Abs1_a);
  dataAddr[71] = (void*) (&localB->FinalDrive);
  dataAddr[72] = (void*) (&localB->Gain_m);
  dataAddr[73] = (void*) (&localB->Gain1);
  dataAddr[74] = (void*) (&localB->Gain2);
  dataAddr[75] = (void*) (&localB->Gain4);
  dataAddr[76] = (void*) (&localB->kphtomph_c);
  dataAddr[77] = (void*) (&localB->kphtomps_m);
  dataAddr[78] = (void*) (&localB->kphtomps1);
  dataAddr[79] = (void*) (&localB->uDLookupTable);
  dataAddr[80] = (void*) (&localB->uDLookupTable1_p);
  dataAddr[81] = (void*) (&localB->Product_d);
  dataAddr[82] = (void*) (&localB->Product1_m);
  dataAddr[83] = (void*) (&localB->Engine_Axle_Torque);
  dataAddr[84] = (void*) (&localB->Saturation_h);
  dataAddr[85] = (void*) (&localB->Saturation1);
  dataAddr[86] = (void*) (&localB->totaloutputpower);
  dataAddr[87] = (void*) (&localB->eng_mot);
  dataAddr[88] = (void*) (&localB->diff);
  dataAddr[89] = (void*) (&localB->diff_d);
  dataAddr[90] = (void*) (&localB->diff_ds);
  dataAddr[91] = (void*) (&localB->Switch_i);
  dataAddr[92] = (void*) (&localB->DirectLookupTablenD);
  dataAddr[93] = (void*) (&localB->dist_is_valid);
  dataAddr[94] = (void*) (&localB->CastToBoolean1);
  dataAddr[95] = (void*) (&localB->xdotref);
  dataAddr[96] = (void*) (&localB->ACCBrakeTime);
  dataAddr[97] = (void*) (&localB->TrafficLightPresent);
  dataAddr[98] = (void*) (&localB->CAVtrgVel);
  dataAddr[99] = (void*) (&localB->CAVtrgDist);
  dataAddr[100] = (void*) (&localB->grade);
  dataAddr[101] = (void*) (&localB->CastToBoolean16);
  dataAddr[102] = (void*) (&localB->CastToBoolean2);
  dataAddr[103] = (void*) (&localB->CastToBoolean22);
  dataAddr[104] = (void*) (&localB->APP);
  dataAddr[105] = (void*) (&localB->CastToBoolean24);
  dataAddr[106] = (void*) (&localB->CastToBoolean25);
  dataAddr[107] = (void*) (&localB->CastToBoolean26);
  dataAddr[108] = (void*) (&localB->CastToBoolean27);
  dataAddr[109] = (void*) (&localB->gear);
  dataAddr[110] = (void*) (&localB->CastToBoolean29);
  dataAddr[111] = (void*) (&localB->CastToBoolean3);
  dataAddr[112] = (void*) (&localB->CastToBoolean30);
  dataAddr[113] = (void*) (&localB->CastToBoolean31);
  dataAddr[114] = (void*) (&localB->CastToBoolean32);
  dataAddr[115] = (void*) (&localB->CastToBoolean33);
  dataAddr[116] = (void*) (&localB->CastToBoolean34);
  dataAddr[117] = (void*) (&localB->CastToBoolean35);
  dataAddr[118] = (void*) (&localB->CastToBoolean36);
  dataAddr[119] = (void*) (&localB->CastToBoolean37);
  dataAddr[120] = (void*) (&localB->CastToBoolean38);
  dataAddr[121] = (void*) (&localB->lvrpos);
  dataAddr[122] = (void*) (&localB->CastToBoolean4);
  dataAddr[123] = (void*) (&localB->CastToBoolean40);
  dataAddr[124] = (void*) (&localB->CastToBoolean41);
  dataAddr[125] = (void*) (&localB->CastToBoolean42);
  dataAddr[126] = (void*) (&localB->CastToBoolean43);
  dataAddr[127] = (void*) (&localB->CastToBoolean44);
  dataAddr[128] = (void*) (&localB->CastToBoolean45);
  dataAddr[129] = (void*) (&localB->CastToBoolean46);
  dataAddr[130] = (void*) (&localB->CastToBoolean47);
  dataAddr[131] = (void*) (&localB->CastToBoolean48);
  dataAddr[132] = (void*) (&localB->CastToBoolean49);
  dataAddr[133] = (void*) (&localB->CastToBoolean5);
  dataAddr[134] = (void*) (&localB->CastToBoolean50);
  dataAddr[135] = (void*) (&localB->CastToBoolean51);
  dataAddr[136] = (void*) (&localB->CastToBoolean6);
  dataAddr[137] = (void*) (&localB->DrvIntndAxlTrqMax);
  dataAddr[138] = (void*) (&localB->DrvIntndAxlTrqMin);
  dataAddr[139] = (void*) (&localB->TrqReqStat);
  dataAddr[140] = (void*) (&localB->Tanh_Exponent);
  dataAddr[141] = (void*) (&localB->Tanh_multiplier);
  dataAddr[142] = (void*) (&localB->CurrentState);
  dataAddr[143] = (void*) (&localB->DistanceToIntersection);
  dataAddr[144] = (void*) (&localB->TimeToIntersection);
  dataAddr[145] = (void*) (&localB->Decel_Division_Value);
  dataAddr[146] = (void*) (&localB->bcm_coolan_temp_C);
  dataAddr[147] = (void*) (&localB->DataTypeConversion_g);
  dataAddr[148] = (void*) (&localB->kphtomph_o);
  dataAddr[149] = (void*) (&localB->rbcp_regen_enable);
  dataAddr[150] = (void*) (&localB->LogicalOperator_l);
  dataAddr[151] = (void*) (&localB->BPPFadeOut);
  dataAddr[152] = (void*) (&localB->SteeringWheelAngleFadeOut);
  dataAddr[153] = (void*) (&localB->VehicleSpeedFadeOut);
  dataAddr[154] = (void*) (&localB->MultiportSwitch);
  dataAddr[155] = (void*) (&localB->RegenPowerW);
  dataAddr[156] = (void*) (&localB->Product2_a);
  dataAddr[157] = (void*) (&localB->Product3);
  dataAddr[158] = (void*) (&localB->Saturation1_g);
  dataAddr[159] = (void*) (&localB->Add_k);
  dataAddr[160] = (void*) (&localB->hsc_bms_enable);
  dataAddr[161] = (void*) (&localB->hsc_bms_leakage_ena);
  dataAddr[162] = (void*) (&localB->hsc_bms_mainc_close);
  dataAddr[163] = (void*) (&localB->hsc_brusa_enable);
  dataAddr[164] = (void*) (&localB->Eng_Start);
  dataAddr[165] = (void*) (&localB->hsc_mpdm_R1_bmsIgn);
  dataAddr[166] = (void*) (&localB->hsc_mpdm_R2_mcuIgn);
  dataAddr[167] = (void*) (&localB->VMU_Cmd1_OpReq);
  dataAddr[168] = (void*) (&localB->VMU_Cmd2_OpMdCmd);
  dataAddr[169] = (void*) (&localB->vmcp_StartupSt);
  dataAddr[170] = (void*) (&localB->vmcp_operating_mode);
  dataAddr[171] = (void*) (&localB->hsc_mpdm_R8_bmsPwr);
  dataAddr[172] = (void*) (&localB->hsc_mpdm_HVpump);
  dataAddr[173] = (void*) (&localB->VMU_Kickout);
  dataAddr[174] = (void*) (&localB->VMU_Cmd2_CommandMd);
  dataAddr[175] = (void*) (&localB->kphtomph);
  dataAddr[176] = (void*) (&localB->ACCext.Divide2);
  dataAddr[177] = (void*) (&localB->ACCext.Saturation);
  dataAddr[178] = (void*) (( &localB->ACCext.DistInfo[0] + 1));
  dataAddr[179] = (void*) (&localB->ACCext.Product2);
  dataAddr[180] = (void*) (&localB->ACCext.ACC_pwr_ext);
  dataAddr[181] = (void*) (&localB->ACCext.EnginePowerBlock);
  dataAddr[182] = (void*) (&localB->ACCext.MotorPowerBlock);
  dataAddr[183] = (void*) (&localB->ACCext.FoundationBrakesBlock);
  dataAddr[184] = (void*) (&localB->ACCext.Constant10);
  dataAddr[185] = (void*) (&localB->ACCext.SetSpeedCmd);
  dataAddr[186] = (void*) (&localB->ACCext.TotalAccelCommandBeforeRoadLoad);
  dataAddr[187] = (void*) (&localB->ACCext.TotalForceAfterRoadLoad);
  dataAddr[188] = (void*) (&localB->Compare_av);
  dataAddr[189] = (void*) (&localB->Compare_pq);
  dataAddr[190] = (void*) (&localB->Compare_mu);
  dataAddr[191] = (void*) (&localB->EgoSpd);
  dataAddr[192] = (void*) (&localB->TargetPos);
  dataAddr[193] = (void*) (&localB->EgoPos);
  dataAddr[194] = (void*) (&localB->Add_p);
  dataAddr[195] = (void*) (&localB->Add1_i);
  dataAddr[196] = (void*) (&localB->Switch);
  dataAddr[197] = (void*) (&localB->Switch1);
  dataAddr[198] = (void*) (&localB->Gain_h);
  dataAddr[199] = (void*) (&localB->Power);
  dataAddr[200] = (void*) (&localB->Square);
  dataAddr[201] = (void*) (&localB->Divide_f);
  dataAddr[202] = (void*) (&localB->ActDist);
  dataAddr[203] = (void*) (&localB->Product1_h);
  dataAddr[204] = (void*) (&localB->Product2);
  dataAddr[205] = (void*) (&localB->Add_ku);
  dataAddr[206] = (void*) (&localB->Add1);
  dataAddr[207] = (void*) (&localB->Add2);
  dataAddr[208] = (void*) (&localB->Add3);
  dataAddr[209] = (void*) (&localB->DistErr);
  dataAddr[210] = (void*) (&localB->SafeDist);
  dataAddr[211] = (void*) (&localB->Switch_e);
  dataAddr[212] = (void*) (&localB->MatrixConcatenate[0]);
  dataAddr[213] = (void*) (&localB->MatrixConcatenate1[0]);
  dataAddr[214] = (void*) (( &localB->MatrixConcatenate[0] + 2));
  dataAddr[215] = (void*) (&localB->MatrixConcatenate1[0]);
  dataAddr[216] = (void*) (( &localB->MatrixConcatenate1[0] + 4));
  dataAddr[217] = (void*) (&localB->VehicleSpeedMultiplier);
  dataAddr[218] = (void*) (&localB->Product_m);
  dataAddr[219] = (void*) (&localB->DynamicPSOCTable1);
  dataAddr[220] = (void*) (( &localB->MatrixConcatenate1[0] + 1));
  dataAddr[221] = (void*) (( &localB->MatrixConcatenate1[0] + 3));
  dataAddr[222] = (void*) (&localB->Switch_jq);
  dataAddr[223] = (void*) (&localB->LowerRelop1_e);
  dataAddr[224] = (void*) (&localB->UpperRelop_h);
  dataAddr[225] = (void*) (&localB->Switch_lp);
  dataAddr[226] = (void*) (&localB->Switch2_p);
  dataAddr[227] = (void*) (&localB->BPPTrqCancel);
  dataAddr[228] = (void*) (&localB->BPPTrqCancel_h);
  dataAddr[229] = (void*) (&localB->LogicalOperator3_d);
  dataAddr[230] = (void*) (&localB->GFDLightOn);
  dataAddr[231] = (void*) (&localB->FirstTimeFlag);
  dataAddr[232] = (void*) (&localB->DataTypeConversion3_k);
  dataAddr[233] = (void*) (&localB->kohmstoohms);
  dataAddr[234] = (void*) (&localB->gfd);
  dataAddr[235] = (void*) (&localB->Memory7);
  dataAddr[236] = (void*) (&localB->Divide);
  dataAddr[237] = (void*) (&localB->closedcontactorbatteryrange);
  dataAddr[238] = (void*) (&localB->LogicalOperator1_c);
  dataAddr[239] = (void*) (&localB->Fault_o);
  dataAddr[240] = (void*) (&localB->Fault_g);
  dataAddr[241] = (void*) (&localB->Fault);
  dataAddr[242] = (void*) (&localB->DataTypeConversion1_k);
  dataAddr[243] = (void*) (&localB->DataTypeConversion2);
  dataAddr[244] = (void*) (&localB->DataTypeConversion3);
  dataAddr[245] = (void*) (&localB->DataTypeConversion7);
  dataAddr[246] = (void*) (&localB->LogicalOperator);
  dataAddr[247] = (void*) (&localB->sf_Faultcounter1.fail_flag);
  dataAddr[248] = (void*) (&localB->DataTypeConversion);
  dataAddr[249] = (void*) (&localB->Gain);
  dataAddr[250] = (void*) (&localB->IC);
  dataAddr[251] = (void*) (&localB->LogicalOperator6);
  dataAddr[252] = (void*) (&localB->LogicalOperator7);
  dataAddr[253] = (void*) (&localB->LogicalOperator8);
  dataAddr[254] = (void*) (&localB->LogicalOperator1_a);
  dataAddr[255] = (void*) (&localB->fail_flag);
  dataAddr[256] = (void*) (&localB->DataTypeConversion1);
  dataAddr[257] = (void*) (&localB->IC_e);
  dataAddr[258] = (void*) (&localB->RecieveDrive);
  dataAddr[259] = (void*) (&localB->LogicalOperator1);
  dataAddr[260] = (void*) (&localB->LogicalOperator2);
  dataAddr[261] = (void*) (&localB->LogicalOperator3);
  dataAddr[262] = (void*) (&localB->LogicalOperator4);
  dataAddr[263] = (void*) (&localB->LogicalOperator5);
  dataAddr[264] = (void*) (&localB->LogicalOperator6_k);
  dataAddr[265] = (void*) (&localB->LogicalOperator7_c);
  dataAddr[266] = (void*) (&localB->LogicalOperator1_i);
  dataAddr[267] = (void*) (&localB->sf_Faultcounter1_f.fail_flag);
  dataAddr[268] = (void*) (&localB->Abs1_d);
  dataAddr[269] = (void*) (&localB->Abs2);
  dataAddr[270] = (void*) (&localB->Abs3);
  dataAddr[271] = (void*) (&localB->DataTypeConversion4);
  dataAddr[272] = (void*) (&localB->IC_d);
  dataAddr[273] = (void*) (&localB->AND_a);
  dataAddr[274] = (void*) (&localB->Product2_e);
  dataAddr[275] = (void*) (&localB->Add);
  dataAddr[276] = (void*) (&localB->whlspd);
  dataAddr[277] = (void*) (&localB->MinMax1);
  dataAddr[278] = (void*) (&localB->Divide_g);
  dataAddr[279] = (void*) (&localB->Product_f);
  dataAddr[280] = (void*) (&localB->Saturation);
  dataAddr[281] = (void*) (&localB->preventsdividingbyzero);
  dataAddr[282] = (void*) (&localB->Switch2_d);
  dataAddr[283] = (void*) (&localB->Gain_ha);
  dataAddr[284] = (void*) (&localB->VehSpdMPH);
  dataAddr[285] = (void*) (&localB->RPM_to_rads);
  dataAddr[286] = (void*) (&localB->DiagnosticFaults);
  dataAddr[287] = (void*) (&localB->LogicalOperator_d);
  dataAddr[288] = (void*) (&localB->LogicalOperator1_e);
  dataAddr[289] = (void*) (&localB->Motor_Trq_Req_Raw_Nm);
  dataAddr[290] = (void*) (&localB->Product3_f);
  dataAddr[291] = (void*) (&localB->preventsdividingbyzero_h);
  dataAddr[292] = (void*) (&localB->Switch_eg);
  dataAddr[293] = (void*) (&localB->motor_trq_demand_Nm);
  dataAddr[294] = (void*) (&localB->AND_f);
  dataAddr[295] = (void*) (&localB->ACC_Correc_Eng);
  dataAddr[296] = (void*) (&localB->AND);
  dataAddr[297] = (void*) (&localB->ACC_Correc_Mot);
  dataAddr[298] = (void*) (&localB->FixPtGatewayIn);
  dataAddr[299] = (void*) (&localB->FixPtSum1);
  dataAddr[300] = (void*) (&localB->Switch_o1);
  dataAddr[301] = (void*) (&localB->Gain_hg);
  dataAddr[302] = (void*) (&localB->VehSpdMPH_g);
  dataAddr[303] = (void*) (&localB->OR);
  dataAddr[304] = (void*) (&localB->uDLookupTable_c);
  dataAddr[305] = (void*) (&localB->Product_l);
  dataAddr[306] = (void*) (&localB->Switch_je);
  dataAddr[307] = (void*) (&localB->Switch1_h);
  dataAddr[308] = (void*) (&localB->Compare_o);
  dataAddr[309] = (void*) (&localB->Compare_kp);
  dataAddr[310] = (void*) (&localB->Compare_nj);
  dataAddr[311] = (void*) (&localB->Compare_o0);
  dataAddr[312] = (void*) (&localB->Compare_oa);
  dataAddr[313] = (void*) (&localB->ACCext.DistInfo[0]);
  dataAddr[314] = (void*) (&localB->ACCext.Constant10);
  dataAddr[315] = (void*) (&localB->ACCext.TotalAccelCommandBeforeRoadLoad);
  dataAddr[316] = (void*) (&localB->ACCext.TotalForceAfterRoadLoad);
  dataAddr[317] = (void*) (&localB->ACCext.SetSpeedCmd);
  dataAddr[318] = (void*) (&localB->ACCext.EnginePowerBlock);
  dataAddr[319] = (void*) (&localB->ACCext.FoundationBrakesBlock);
  dataAddr[320] = (void*) (&localB->ACCext.MotorPowerBlock);
  dataAddr[321] = (void*) (&localB->ACCext.EgoPosition);
  dataAddr[322] = (void*) (&localB->ACCext.Gain);
  dataAddr[323] = (void*) (&localB->ACCext.Gain1);
  dataAddr[324] = (void*) (&localB->ACCext.Gain2);
  dataAddr[325] = (void*) (&localB->ACCext.Multiply);
  dataAddr[326] = (void*) (&localB->ACCext.SetSpd);
  dataAddr[327] = (void*) (&localB->ACCext.uDLookupTable);
  dataAddr[328] = (void*) (&localB->ACCext.Square);
  dataAddr[329] = (void*) (&localB->ACCext.Divide);
  dataAddr[330] = (void*) (&localB->ACCext.Divide1);
  dataAddr[331] = (void*) (&localB->ACCext.Divide2);
  dataAddr[332] = (void*) (&localB->ACCext.Headway_intrusion);
  dataAddr[333] = (void*) (&localB->ACCext.Divide4);
  dataAddr[334] = (void*) (&localB->ACCext.Product_h);
  dataAddr[335] = (void*) (&localB->ACCext.Product1);
  dataAddr[336] = (void*) (&localB->ACCext.Product2);
  dataAddr[337] = (void*) (&localB->ACCext.Product3);
  dataAddr[338] = (void*) (&localB->ACCext.Product4);
  dataAddr[339] = (void*) (&localB->ACCext.Product5);
  dataAddr[340] = (void*) (&localB->ACCext.RateTransition1);
  dataAddr[341] = (void*) (&localB->ACCext.Saturation);
  dataAddr[342] = (void*) (&localB->ACCext.Saturation1);
  dataAddr[343] = (void*) (&localB->ACCext.ACC_pwr_ext);
  dataAddr[344] = (void*) (&localB->ACCext.Add1);
  dataAddr[345] = (void*) (&localB->ACCext.Minus);
  dataAddr[346] = (void*) (&localB->ACCext.Minus1);
  dataAddr[347] = (void*) (&localB->ACCext.Minus2);
  dataAddr[348] = (void*) (&localB->ACCext.Minus3);
  dataAddr[349] = (void*) (&localB->ACCext.Minus4);
  dataAddr[350] = (void*) (&localB->ACCext.set_spd_diff);
  dataAddr[351] = (void*) (&localB->ACCext.Switch);
  dataAddr[352] = (void*) (&localB->ACCext.UnitDelay_k);
  dataAddr[353] = (void*) (&localB->ACCext.UnitDelay1);
  dataAddr[354] = (void*) (&localB->ACCext.UnitDelay2);
  dataAddr[355] = (void*) (&localB->Compare_kf);
  dataAddr[356] = (void*) (&localB->Compare_j1);
  dataAddr[357] = (void*) (&localB->Compare_j2);
  dataAddr[358] = (void*) (&localB->Compare_m);
  dataAddr[359] = (void*) (&localB->Compare_c);
  dataAddr[360] = (void*) (&localB->Compare_e);
  dataAddr[361] = (void*) (&localB->Compare_jl);
  dataAddr[362] = (void*) (&localB->Compare_b);
  dataAddr[363] = (void*) (&localB->Compare_l);
  dataAddr[364] = (void*) (&localB->Compare_f);
  dataAddr[365] = (void*) (&localB->Compare_i);
  dataAddr[366] = (void*) (&localB->Compare);
  dataAddr[367] = (void*) (&localB->Compare_k);
  dataAddr[368] = (void*) (&localB->Compare_n);
  dataAddr[369] = (void*) (&localB->Compare_j);
  dataAddr[370] = (void*) (&localB->Compare_a);
  dataAddr[371] = (void*) (&localB->Compare_h);
  dataAddr[372] = (void*) (&localB->Compare_fb);
  dataAddr[373] = (void*) (&localB->Compare_lt);
  dataAddr[374] = (void*) (&localB->Compare_nq);
  dataAddr[375] = (void*) (&localB->Compare_p);
  dataAddr[376] = (void*) (&localB->Compare_ha);
  dataAddr[377] = (void*) (&localB->LogicalOperator_f);
  dataAddr[378] = (void*) (&localB->LogicalOperator1_d);
  dataAddr[379] = (void*) (&localB->Compare_bf);
  dataAddr[380] = (void*) (&localB->Compare_ib);
  dataAddr[381] = (void*) (&localB->Compare_o5);
  dataAddr[382] = (void*) (&localB->Compare_mq);
  dataAddr[383] = (void*) (&localB->Compare_nw);
  dataAddr[384] = (void*) (&localB->Abs1);
  dataAddr[385] = (void*) (&localB->uDLookupCreepTrq_Nm);
  dataAddr[386] = (void*) (&localB->Switch2_a);
  dataAddr[387] = (void*) (&localB->TorqueOut);
  dataAddr[388] = (void*) (&localB->DeltaTime);
  dataAddr[389] = (void*) (&localB->TorqueReversed);
  dataAddr[390] = (void*) (&localB->Abs_g);
  dataAddr[391] = (void*) (&localB->uDLookupTable1);
  dataAddr[392] = (void*) (&localB->Product_n);
  dataAddr[393] = (void*) (&localB->Product1);
  dataAddr[394] = (void*) (&localB->Product2_i);
  dataAddr[395] = (void*) (&localB->Switch_oa);
  dataAddr[396] = (void*) (&localB->Tanh);
  dataAddr[397] = (void*) (&localB->DelayOneStep);
  dataAddr[398] = (void*) (&localB->LowerRelop1_h);
  dataAddr[399] = (void*) (&localB->UpperRelop_l);
  dataAddr[400] = (void*) (&localB->Switch_g);
  dataAddr[401] = (void*) (&localB->Switch2_m);
  dataAddr[402] = (void*) (&localB->Switch1_i);
  dataAddr[403] = (void*) (&localB->LogicalOperator1_a1);
  dataAddr[404] = (void*) (&localB->OR_n);
  dataAddr[405] = (void*)
    (&localB->allowsbrakingtorqueifineithercruisechangingmodes);
  dataAddr[406] = (void*) (&localB->Compare_m2);
  dataAddr[407] = (void*) (&localB->LogicalOperator_fc);
  dataAddr[408] = (void*) (&localB->LogicalOperator1_d1);
  dataAddr[409] = (void*) (&localB->LogicalOperator2_m);
  dataAddr[410] = (void*) (&localB->MultiportSwitch_o);
  dataAddr[411] = (void*) (&localB->LowerRelop1_n);
  dataAddr[412] = (void*) (&localB->UpperRelop_e);
  dataAddr[413] = (void*) (&localB->Switch_gm);
  dataAddr[414] = (void*) (&localB->Switch2_cx);
  dataAddr[415] = (void*) (&localB->LowerRelop1);
  dataAddr[416] = (void*) (&localB->UpperRelop);
  dataAddr[417] = (void*) (&localB->Switch_o);
  dataAddr[418] = (void*) (&localB->Switch2_c);
  dataAddr[419] = (void*) (&localB->Compare_bp);
  dataAddr[420] = (void*) (&localB->Compare_ms);
  dataAddr[421] = (void*) (&localB->ACCext.Diff);
  dataAddr[422] = (void*) (&localB->ACCext.TSamp);
  dataAddr[423] = (void*) (&localB->ACCext.Uk1);
  dataAddr[424] = (void*) (&localB->ACCext.Diff_b);
  dataAddr[425] = (void*) (&localB->ACCext.TSamp_m);
  dataAddr[426] = (void*) (&localB->ACCext.Uk1_f);
  dataAddr[427] = (void*) (&localB->ACCext.VectorConcatenate[0]);
  dataAddr[428] = (void*) (&localB->ACCext.VectorConcatenate1[0]);
  dataAddr[429] = (void*) (&localB->ACCext.DiscreteTimeIntegrator);
  dataAddr[430] = (void*) (&localB->ACCext.Product);
  dataAddr[431] = (void*) (&localB->ACCext.VectorConcatenate[0]);
  dataAddr[432] = (void*) (( &localB->ACCext.VectorConcatenate[0] + 1));
  dataAddr[433] = (void*) (&localB->ACCext.Switch_g[0]);
  dataAddr[434] = (void*) (&localB->ACCext.UnitDelay[0]);
  dataAddr[435] = (void*) (&localB->Compare_nm);
  dataAddr[436] = (void*) (&localB->Compare_lf);
  dataAddr[437] = (void*) (&localB->Compare_g);
  dataAddr[438] = (void*) (&localB->Compare_nu);
  dataAddr[439] = (void*) (&localB->Compare_jg);
  dataAddr[440] = (void*) (&localB->Compare_bz);
  dataAddr[441] = (void*) (&localB->Compare_lv);
  dataAddr[442] = (void*) (&localB->Compare_lz);
  dataAddr[443] = (void*) (&localB->Compare_nz);
  dataAddr[444] = (void*) (&localB->Compare_me);
  dataAddr[445] = (void*) (&localB->Compare_ni);
  dataAddr[446] = (void*) (&localB->Compare_fi);
  dataAddr[447] = (void*) (&localB->Compare_d);
  dataAddr[448] = (void*) (&localB->Compare_el);
  dataAddr[449] = (void*) (&localB->Compare_ns);
  dataAddr[450] = (void*) (&HSC_Model_P.CompareToConstant1_const_c);
  dataAddr[451] = (void*) (&HSC_Model_P.CompareToConstant2_const_a);
  dataAddr[452] = (void*) (&HSC_Model_P.CompareToConstant3_const);
  dataAddr[453] = (void*) (&HSC_Model_P.Change_Value);
  dataAddr[454] = (void*) (&HSC_Model_P.Denied_Value);
  dataAddr[455] = (void*) (&HSC_Model_P.SetSpdMPH_Value);
  dataAddr[456] = (void*) (&HSC_Model_P.Gain_Gain);
  dataAddr[457] = (void*) (&HSC_Model_P.Gain1_Gain);
  dataAddr[458] = (void*) (&HSC_Model_P.Gain2_Gain);
  dataAddr[459] = (void*) (&HSC_Model_P.Gain5_Gain);
  dataAddr[460] = (void*) (&HSC_Model_P.kmh2ms1_Gain);
  dataAddr[461] = (void*) (&HSC_Model_P.Switch1_Threshold_j);
  dataAddr[462] = (void*) (&HSC_Model_P.Switch2_Threshold);
  dataAddr[463] = (void*) (&HSC_Model_P.Constant_Value_d);
  dataAddr[464] = (void*) (&HSC_Model_P.TargetSOC_Value);
  dataAddr[465] = (void*) (&HSC_Model_P.Gain1_Gain_o);
  dataAddr[466] = (void*) (&HSC_Model_P.kphtomph_Gain);
  dataAddr[467] = (void*) (&HSC_Model_P.IC_Value_h);
  dataAddr[468] = (void*) (&HSC_Model_P.IC1_Value);
  dataAddr[469] = (void*) (&HSC_Model_P.IC2_Value);
  dataAddr[470] = (void*) (&HSC_Model_P.IC3_Value);
  dataAddr[471] = (void*) (&HSC_Model_P.IC4_Value);
  dataAddr[472] = (void*) (&HSC_Model_P.IC5_Value);
  dataAddr[473] = (void*) (&HSC_Model_P.IC6_Value);
  dataAddr[474] = (void*) (&HSC_Model_P.IC7_Value);
  dataAddr[475] = (void*) (&HSC_Model_P.IC8_Value);
  dataAddr[476] = (void*) (&HSC_Model_P.uDLookupTable_bp01Data_m[0]);
  dataAddr[477] = (void*) (&HSC_Model_P.uDLookupTable_bp02Data[0]);
  dataAddr[478] = (void*) (&HSC_Model_P.uDLookupTable_maxIndex[0]);
  dataAddr[479] = (void*) (&HSC_Model_P.uDLookupTable2_bp01Data[0]);
  dataAddr[480] = (void*) (&HSC_Model_P.uDLookupTable2_bp02Data[0]);
  dataAddr[481] = (void*) (&HSC_Model_P.uDLookupTable2_bp03Data[0]);
  dataAddr[482] = (void*) (&HSC_Model_P.uDLookupTable2_maxIndex[0]);
  dataAddr[483] = (void*) (&HSC_Model_P.uDLookupTable2_dimSizes[0]);
  dataAddr[484] = (void*) (&HSC_Model_P.uDLookupTable5_bp01Data[0]);
  dataAddr[485] = (void*) (&HSC_Model_P.uDLookupTable5_bp02Data[0]);
  dataAddr[486] = (void*) (&HSC_Model_P.uDLookupTable5_bp03Data[0]);
  dataAddr[487] = (void*) (&HSC_Model_P.uDLookupTable5_maxIndex[0]);
  dataAddr[488] = (void*) (&HSC_Model_P.uDLookupTable5_dimSizes[0]);
  dataAddr[489] = (void*) (&HSC_Model_P.ContinuousDischageLimit_bp01Data[0]);
  dataAddr[490] = (void*) (&HSC_Model_P.ContinuousDischageLimit_bp02Data[0]);
  dataAddr[491] = (void*) (&HSC_Model_P.ContinuousDischageLimit_maxIndex[0]);
  dataAddr[492] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit_tableData[0]);
  dataAddr[493] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit_bp01Data[0]);
  dataAddr[494] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit1_tableData[0]);
  dataAddr[495] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit1_bp01Data[0]);
  dataAddr[496] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit2_tableData[0]);
  dataAddr[497] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit2_bp01Data[0]);
  dataAddr[498] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit3_tableData[0]);
  dataAddr[499] = (void*) (&HSC_Model_P.ContinuousMotorPowerLimit3_bp01Data[0]);
  dataAddr[500] = (void*) (&HSC_Model_P.DiscreteMotorPowerLimit_tableData[0]);
  dataAddr[501] = (void*) (&HSC_Model_P.DiscreteMotorPowerLimit_bp01Data[0]);
  dataAddr[502] = (void*) (&HSC_Model_P.DiscreteMotorPowerLimit1_tableData[0]);
  dataAddr[503] = (void*) (&HSC_Model_P.DiscreteMotorPowerLimit1_bp01Data[0]);
  dataAddr[504] = (void*) (&HSC_Model_P.Memory_InitialCondition);
  dataAddr[505] = (void*) (&HSC_Model_P.Memory1_InitialCondition);
  dataAddr[506] = (void*) (&HSC_Model_P.Switch_Threshold_nu);
  dataAddr[507] = (void*) (&HSC_Model_P.Switch1_Threshold_d);
  dataAddr[508] = (void*) (&HSC_Model_P.Switch3_Threshold);
  dataAddr[509] = (void*) (&HSC_Model_P.Constant_Value_ok);
  dataAddr[510] = (void*) (&HSC_Model_P.kphtomps_Gain_p);
  dataAddr[511] = (void*) (&HSC_Model_P.Memory1_InitialCondition_d);
  dataAddr[512] = (void*) (&HSC_Model_P.Memory2_InitialCondition);
  dataAddr[513] = (void*) (&HSC_Model_P.kphtomps_Gain_g);
  dataAddr[514] = (void*) (&HSC_Model_P.ACC_Deadzone_tableData[0]);
  dataAddr[515] = (void*) (&HSC_Model_P.ACC_Deadzone_bp01Data[0]);
  dataAddr[516] = (void*) (&HSC_Model_P.LCVPedalMapAxleTorqueNm1_maxIndex[0]);
  dataAddr[517] = (void*) (&HSC_Model_P.Saturation2_UpperSat);
  dataAddr[518] = (void*) (&HSC_Model_P.Saturation2_LowerSat);
  dataAddr[519] = (void*) (&HSC_Model_P.preventszeroingPwrDmdat0kph_UpperSat);
  dataAddr[520] = (void*) (&HSC_Model_P.preventszeroingPwrDmdat0kph_LowerSat);
  dataAddr[521] = (void*) (&HSC_Model_P.Switch_Threshold_k);
  dataAddr[522] = (void*) (&HSC_Model_P.MotorEnable_Value);
  dataAddr[523] = (void*) (&HSC_Model_P.FinalDrive_Gain);
  dataAddr[524] = (void*) (&HSC_Model_P.Gain1_Gain_k);
  dataAddr[525] = (void*) (&HSC_Model_P.Gain4_Gain);
  dataAddr[526] = (void*) (&HSC_Model_P.kphtomph_Gain_e);
  dataAddr[527] = (void*) (&HSC_Model_P.kphtomps_Gain);
  dataAddr[528] = (void*) (&HSC_Model_P.kphtomps1_Gain);
  dataAddr[529] = (void*) (&HSC_Model_P.uDLookupTable1_tableData[0]);
  dataAddr[530] = (void*) (&HSC_Model_P.Saturation_UpperSat);
  dataAddr[531] = (void*) (&HSC_Model_P.Saturation_LowerSat);
  dataAddr[532] = (void*) (&HSC_Model_P.Saturation1_UpperSat_n);
  dataAddr[533] = (void*) (&HSC_Model_P.Saturation1_LowerSat_p);
  dataAddr[534] = (void*) (&HSC_Model_P.Switch_Threshold_f);
  dataAddr[535] = (void*) (&HSC_Model_P.ActivateMILHILVersion_Value);
  dataAddr[536] = (void*) (&HSC_Model_P.Gain_Gain_f);
  dataAddr[537] = (void*) (&HSC_Model_P.Gain1_Gain_i);
  dataAddr[538] = (void*) (&HSC_Model_P.Gain2_Gain_p);
  dataAddr[539] = (void*) (&HSC_Model_P.Gain3_Gain);
  dataAddr[540] = (void*) (&HSC_Model_P.CompareToConstant_const);
  dataAddr[541] = (void*) (&HSC_Model_P.CompareToConstant1_const_g);
  dataAddr[542] = (void*) (&HSC_Model_P.CompareToConstant2_const_g);
  dataAddr[543] = (void*) (&HSC_Model_P.CompareToConstant3_const_p);
  dataAddr[544] = (void*) (&HSC_Model_P.SOCChargeLimit_const);
  dataAddr[545] = (void*) (&HSC_Model_P.Constant1_Value_j);
  dataAddr[546] = (void*) (&HSC_Model_P.MaxBPPRegenW_Value);
  dataAddr[547] = (void*) (&HSC_Model_P.OffThrottleRegenPowerDemandW_Value);
  dataAddr[548] = (void*) (&HSC_Model_P.kphtomph_Gain_c);
  dataAddr[549] = (void*) (&HSC_Model_P.rbcp_regen_enable_Gain);
  dataAddr[550] = (void*) (&HSC_Model_P.SteeringWheelAngleFadeOut_tableData[0]);
  dataAddr[551] = (void*) (&HSC_Model_P.SteeringWheelAngleFadeOut_bp01Data[0]);
  dataAddr[552] = (void*) (&HSC_Model_P.VehicleSpeedFadeOut_tableData[0]);
  dataAddr[553] = (void*) (&HSC_Model_P.VehicleSpeedFadeOut_bp01Data[0]);
  dataAddr[554] = (void*) (&HSC_Model_P.Saturation1_UpperSat);
  dataAddr[555] = (void*) (&HSC_Model_P.Saturation1_LowerSat);
  dataAddr[556] = (void*) (&HSC_Model_P.BrusaEnable_Value);
  dataAddr[557] = (void*) (&HSC_Model_P.VMUmajorProt_Value);
  dataAddr[558] = (void*) (&HSC_Model_P.VMUminorProt_Value);
  dataAddr[559] = (void*) (&HSC_Model_P.kphtomph_Gain_i);
  dataAddr[560] = (void*) (&HSC_Model_P.TargetInitialPos_Value);
  dataAddr[561] = (void*) (&HSC_Model_P.DiscreteTimeIntegrator_gainval);
  dataAddr[562] = (void*) (&HSC_Model_P.DiscreteTimeIntegrator_IC);
  dataAddr[563] = (void*) (&HSC_Model_P.DiscreteTimeIntegrator1_gainval);
  dataAddr[564] = (void*) (&HSC_Model_P.DiscreteTimeIntegrator1_IC);
  dataAddr[565] = (void*) (&HSC_Model_P.Switch_Threshold_g);
  dataAddr[566] = (void*) (&HSC_Model_P.Switch1_Threshold);
  dataAddr[567] = (void*) (&HSC_Model_P.Constant_Value);
  dataAddr[568] = (void*) (&HSC_Model_P.Constant1_Value);
  dataAddr[569] = (void*) (&HSC_Model_P.Constant2_Value);
  dataAddr[570] = (void*) (&HSC_Model_P.Constant3_Value);
  dataAddr[571] = (void*) (&HSC_Model_P.Constant4_Value);
  dataAddr[572] = (void*) (&HSC_Model_P.Constant5_Value);
  dataAddr[573] = (void*) (&HSC_Model_P.Constant6_Value);
  dataAddr[574] = (void*) (&HSC_Model_P.Constant7_Value);
  dataAddr[575] = (void*) (&HSC_Model_P.DefaultSpacing_Value);
  dataAddr[576] = (void*) (&HSC_Model_P.Gain_Gain_iu);
  dataAddr[577] = (void*) (&HSC_Model_P.Switch_Threshold_gz);
  dataAddr[578] = (void*) (&HSC_Model_P.checksforLowSpeedCruiseChargeMode_const);
  dataAddr[579] = (void*) (&HSC_Model_P.Constant_Value_i);
  dataAddr[580] = (void*) (&HSC_Model_P.Constant1_Value_b);
  dataAddr[581] = (void*) (&HSC_Model_P.Constant2_Value_p);
  dataAddr[582] = (void*) (&HSC_Model_P.Constant3_Value_g);
  dataAddr[583] = (void*) (&HSC_Model_P.Constant4_Value_k);
  dataAddr[584] = (void*) (&HSC_Model_P.Constant7_Value_b);
  dataAddr[585] = (void*) (&HSC_Model_P.psoc_table_SOC_offset_Value);
  dataAddr[586] = (void*) (&HSC_Model_P.VehicleSpeedMultiplier_tableData[0]);
  dataAddr[587] = (void*) (&HSC_Model_P.VehicleSpeedMultiplier_bp01Data[0]);
  dataAddr[588] = (void*) (&HSC_Model_P.BPPCheck_const);
  dataAddr[589] = (void*) (&HSC_Model_P.LaunchModeCheck_const);
  dataAddr[590] = (void*) (&HSC_Model_P.Gain_Gain_g);
  dataAddr[591] = (void*) (&HSC_Model_P.IC_Value_c);
  dataAddr[592] = (void*)
    (&HSC_Model_P.CompetitionRequirement500ohmspervolt_const);
  dataAddr[593] = (void*) (&HSC_Model_P.kohmstoohms_Gain);
  dataAddr[594] = (void*) (&HSC_Model_P.Memory7_InitialCondition);
  dataAddr[595] = (void*) (&HSC_Model_P.closedcontactorbatteryrange_UpperSat);
  dataAddr[596] = (void*) (&HSC_Model_P.closedcontactorbatteryrange_LowerSat);
  dataAddr[597] = (void*) (&HSC_Model_P.Constant_Value_dx);
  dataAddr[598] = (void*) (&HSC_Model_P.CompareToConstant1_const);
  dataAddr[599] = (void*) (&HSC_Model_P.CompareToConstant2_const);
  dataAddr[600] = (void*) (&HSC_Model_P.CompareToConstant3_const_n);
  dataAddr[601] = (void*) (&HSC_Model_P.CompareToConstant6_const);
  dataAddr[602] = (void*) (&HSC_Model_P.CheckForDrive_const);
  dataAddr[603] = (void*) (&HSC_Model_P.CheckForReverse_const_b);
  dataAddr[604] = (void*) (&HSC_Model_P.ForwardMotionCheck_const);
  dataAddr[605] = (void*) (&HSC_Model_P.ReverseMotionCheck_const);
  dataAddr[606] = (void*) (&HSC_Model_P.Gain_Gain_o);
  dataAddr[607] = (void*) (&HSC_Model_P.IC_Value);
  dataAddr[608] = (void*) (&HSC_Model_P.Constant_Value_p);
  dataAddr[609] = (void*) (&HSC_Model_P.CheckForDrive1_const);
  dataAddr[610] = (void*) (&HSC_Model_P.CheckForNeutral_const);
  dataAddr[611] = (void*) (&HSC_Model_P.CheckForPark1_const);
  dataAddr[612] = (void*) (&HSC_Model_P.CheckForReverse_const);
  dataAddr[613] = (void*) (&HSC_Model_P.CheckForReverse2_const);
  dataAddr[614] = (void*) (&HSC_Model_P.FirstGearOrGreater_const);
  dataAddr[615] = (void*) (&HSC_Model_P.NinethGearOrless_const);
  dataAddr[616] = (void*) (&HSC_Model_P.IC_Value_m);
  dataAddr[617] = (void*) (&HSC_Model_P.CompareToConstant_const_m);
  dataAddr[618] = (void*) (&HSC_Model_P.IC_Value_b);
  dataAddr[619] = (void*) (&HSC_Model_P.CompareToConstant_const_f);
  dataAddr[620] = (void*) (&HSC_Model_P.Saturation_UpperSat_a);
  dataAddr[621] = (void*) (&HSC_Model_P.Saturation_LowerSat_p);
  dataAddr[622] = (void*) (&HSC_Model_P.preventsdividingbyzero_UpperSat_a);
  dataAddr[623] = (void*) (&HSC_Model_P.preventsdividingbyzero_LowerSat_n);
  dataAddr[624] = (void*) (&HSC_Model_P.CheckforkeyinRun_const);
  dataAddr[625] = (void*) (&HSC_Model_P.ChecksforDrive_const);
  dataAddr[626] = (void*) (&HSC_Model_P.ChecksforShftLvrPosReverse_const);
  dataAddr[627] = (void*) (&HSC_Model_P.ChecksforShftLvrPosUnknown_const);
  dataAddr[628] = (void*) (&HSC_Model_P.CompareToConstant_const_p);
  dataAddr[629] = (void*) (&HSC_Model_P.Reverse_const);
  dataAddr[630] = (void*) (&HSC_Model_P.Gain_Gain_i);
  dataAddr[631] = (void*) (&HSC_Model_P.Gain19_Gain);
  dataAddr[632] = (void*) (&HSC_Model_P.RPM_to_rads_Gain);
  dataAddr[633] = (void*) (&HSC_Model_P.preventsdividingbyzero_UpperSat);
  dataAddr[634] = (void*) (&HSC_Model_P.preventsdividingbyzero_LowerSat);
  dataAddr[635] = (void*) (&HSC_Model_P.Constant_Value_ic);
  dataAddr[636] = (void*) (&HSC_Model_P.FixPtConstant_Value);
  dataAddr[637] = (void*) (&HSC_Model_P.CompareToConstant_const_j);
  dataAddr[638] = (void*) (&HSC_Model_P.CompareToConstant1_const_f);
  dataAddr[639] = (void*) (&HSC_Model_P.Constant_Value_c);
  dataAddr[640] = (void*) (&HSC_Model_P.Gain_Gain_b);
  dataAddr[641] = (void*) (&HSC_Model_P.Gain19_Gain_l);
  dataAddr[642] = (void*) (&HSC_Model_P.uDLookupTable_tableData[0]);
  dataAddr[643] = (void*) (&HSC_Model_P.uDLookupTable_bp01Data[0]);
  dataAddr[644] = (void*) (&HSC_Model_P.Switch_Threshold_n);
  dataAddr[645] = (void*)
    (&HSC_Model_P.ACCext.DiscreteDerivative_ICPrevScaledInput);
  dataAddr[646] = (void*)
    (&HSC_Model_P.ACCext.DiscreteDerivative1_ICPrevScaledInput);
  dataAddr[647] = (void*) (&HSC_Model_P.ACCext.Af_Value);
  dataAddr[648] = (void*) (&HSC_Model_P.ACCext.Cd_Value);
  dataAddr[649] = (void*) (&HSC_Model_P.ACCext.Constant_Value);
  dataAddr[650] = (void*) (&HSC_Model_P.ACCext.Constant1_Value);
  dataAddr[651] = (void*) (&HSC_Model_P.ACCext.Constant10_Value);
  dataAddr[652] = (void*) (&HSC_Model_P.ACCext.Constant11_Value);
  dataAddr[653] = (void*) (&HSC_Model_P.ACCext.Constant12_Value);
  dataAddr[654] = (void*) (&HSC_Model_P.ACCext.Constant13_Value);
  dataAddr[655] = (void*) (&HSC_Model_P.ACCext.Constant14_Value);
  dataAddr[656] = (void*) (&HSC_Model_P.ACCext.Constant2_Value);
  dataAddr[657] = (void*) (&HSC_Model_P.ACCext.Constant3_Value);
  dataAddr[658] = (void*) (&HSC_Model_P.ACCext.Constant4_Value);
  dataAddr[659] = (void*) (&HSC_Model_P.ACCext.Constant5_Value);
  dataAddr[660] = (void*) (&HSC_Model_P.ACCext.Constant7_Value);
  dataAddr[661] = (void*) (&HSC_Model_P.ACCext.EnginePowerBlock_Value);
  dataAddr[662] = (void*) (&HSC_Model_P.ACCext.FoundationBrakesBlock_Value);
  dataAddr[663] = (void*) (&HSC_Model_P.ACCext.MgCrr_Value);
  dataAddr[664] = (void*) (&HSC_Model_P.ACCext.MotorPowerBlock_Value);
  dataAddr[665] = (void*) (&HSC_Model_P.ACCext.RoadGrade_Value);
  dataAddr[666] = (void*) (&HSC_Model_P.ACCext.DiscreteTimeIntegrator_gainval_l);
  dataAddr[667] = (void*) (&HSC_Model_P.ACCext.DiscreteTimeIntegrator_IC_m);
  dataAddr[668] = (void*) (&HSC_Model_P.ACCext.Gain_Gain);
  dataAddr[669] = (void*) (&HSC_Model_P.ACCext.Gain1_Gain);
  dataAddr[670] = (void*) (&HSC_Model_P.ACCext.Gain2_Gain);
  dataAddr[671] = (void*) (&HSC_Model_P.ACCext.kph2ms_Gain);
  dataAddr[672] = (void*) (&HSC_Model_P.ACCext.uDLookupTable_bp01Data[0]);
  dataAddr[673] = (void*) (&HSC_Model_P.ACCext.uDLookupTable_bp02Data[0]);
  dataAddr[674] = (void*) (&HSC_Model_P.ACCext.uDLookupTable_maxIndex[0]);
  dataAddr[675] = (void*) (&HSC_Model_P.ACCext.Saturation_UpperSat);
  dataAddr[676] = (void*) (&HSC_Model_P.ACCext.Saturation_LowerSat);
  dataAddr[677] = (void*) (&HSC_Model_P.ACCext.Saturation1_UpperSat);
  dataAddr[678] = (void*) (&HSC_Model_P.ACCext.Saturation1_LowerSat);
  dataAddr[679] = (void*) (&HSC_Model_P.ACCext.Switch_Threshold);
  dataAddr[680] = (void*) (&HSC_Model_P.ACCext.UnitDelay_InitialCondition_h);
  dataAddr[681] = (void*) (&HSC_Model_P.ACCext.UnitDelay1_InitialCondition);
  dataAddr[682] = (void*) (&HSC_Model_P.ACCext.UnitDelay2_InitialCondition);
  dataAddr[683] = (void*) (&HSC_Model_P.Constant_Value_b);
  dataAddr[684] = (void*) (&HSC_Model_P.ChecksforDrive_const_p);
  dataAddr[685] = (void*) (&HSC_Model_P.ChecksforReverse_const);
  dataAddr[686] = (void*) (&HSC_Model_P.ChecksforShftLvrPosUnknown_const_a);
  dataAddr[687] = (void*) (&HSC_Model_P.CreepTorqueThreshold_Nm_const);
  dataAddr[688] = (void*) (&HSC_Model_P.uDLookupCreepTrq_Nm_tableData[0]);
  dataAddr[689] = (void*) (&HSC_Model_P.uDLookupCreepTrq_Nm_bp01Data[0]);
  dataAddr[690] = (void*) (&HSC_Model_P.uDLookupTable1_bp01Data[0]);
  dataAddr[691] = (void*) (&HSC_Model_P.Switch_Threshold);
  dataAddr[692] = (void*) (&HSC_Model_P.DelayOneStep_InitialCondition);
  dataAddr[693] = (void*) (&HSC_Model_P.CheckForLaunchMode_const);
  dataAddr[694] = (void*) (&HSC_Model_P.LoadTorqueNm_Value);
  dataAddr[695] = (void*) (&HSC_Model_P.checksifcruisechargingmode_const);
  dataAddr[696] = (void*) (&HSC_Model_P.checksiflowspeedCruiseChargingmode_const);
  dataAddr[697] = (void*) (&HSC_Model_P.checksifregenmode_const);
  dataAddr[698] = (void*) (&HSC_Model_P.ChargeSOCLimit_const);
  dataAddr[699] = (void*) (&HSC_Model_P.DischargingSOCLimit_const);
  dataAddr[700] = (void*) (&HSC_Model_P.SOCOkay_Value);
  dataAddr[701] = (void*) (&HSC_Model_P.ACCext.TSamp_WtEt);
  dataAddr[702] = (void*) (&HSC_Model_P.ACCext.TSamp_WtEt_l);
  dataAddr[703] = (void*) (&HSC_Model_P.ACCext.DiscreteTimeIntegrator_gainval);
  dataAddr[704] = (void*) (&HSC_Model_P.ACCext.DiscreteTimeIntegrator_IC);
  dataAddr[705] = (void*) (&HSC_Model_P.ACCext.UnitDelay_InitialCondition[0]);
  dataAddr[706] = (void*) (&HSC_Model_P.Constant_Value_n);
  dataAddr[707] = (void*) (&HSC_Model_P.Constant_Value_o);
  dataAddr[708] = (void*) (&HSC_Model_P.Constant_Value_k);
  dataAddr[709] = (void*) (&HSC_Model_P.Constant_Value_f);
  dataAddr[710] = (void*) (&HSC_Model_P.Constant_Value_o5);
  dataAddr[711] = (void*) (&localDW->DiscreteTimeIntegrator_DSTATE);
  dataAddr[712] = (void*) (&localDW->DiscreteTimeIntegrator1_DSTATE);
  dataAddr[713] = (void*) (&localDW->ACCext.DiscreteTimeIntegrator_DSTATE_f);
  dataAddr[714] = (void*) (&localDW->ACCext.UnitDelay_DSTATE_d);
  dataAddr[715] = (void*) (&localDW->ACCext.UnitDelay1_DSTATE);
  dataAddr[716] = (void*) (&localDW->ACCext.UnitDelay2_DSTATE);
  dataAddr[717] = (void*) (&localDW->DelayOneStep_DSTATE);
  dataAddr[718] = (void*) (&localDW->ACCext.UD_DSTATE);
  dataAddr[719] = (void*) (&localDW->ACCext.UD_DSTATE_d);
  dataAddr[720] = (void*) (&localDW->ACCext.DiscreteTimeIntegrator_DSTATE);
  dataAddr[721] = (void*) (&localDW->ACCext.UnitDelay_DSTATE[0]);
  dataAddr[722] = (void*) (&HSC_Model_P.PedalMap_LCV);
  dataAddr[723] = (void*) (&HSC_Model_P.N[0]);
  dataAddr[724] = (void*) (&HSC_Model_P.Re);
  dataAddr[725] = (void*) (&HSC_Model_P.bppRegenLookup[0]);
  dataAddr[726] = (void*) (&HSC_Model_P.bppRegenMap[0]);
  dataAddr[727] = (void*) (&HSC_Model_P.f_tbrake_n_bpt[0]);
  dataAddr[728] = (void*) (&HSC_Model_P.motor_speed_bkp_rpm[0]);
  dataAddr[729] = (void*) (&HSC_Model_P.peak_trq_curve[0]);
  dataAddr[730] = (void*) (rtP_ContinuousBatteryCharge);
  dataAddr[731] = (void*) (rtP_ContinuousBatteryDischarge);
  dataAddr[732] = (void*) (rtP_InterpBatteryCharge);
  dataAddr[733] = (void*) (rtP_InterpBatteryDischarge);
  dataAddr[734] = (void*) (rtP_New_Mass_Toque_Map);
  dataAddr[735] = (void*) (rtP_Reverse_APP);
  dataAddr[736] = (void*) (rtP_tandivide);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void HSC_Model_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void HSC_Model_InitializeLoggingFunctions(RTWLoggingFcnPtr loggingPtrs[])
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

  { "APP", rt_offsetof(struct_Vvva7FSOBKsqeNDpnUVqsB, APP), 0, 16, 0 },

  { "VehicleSpeed_kph", rt_offsetof(struct_Vvva7FSOBKsqeNDpnUVqsB,
    VehicleSpeed_kph), 0, 16, 0 },

  { "AxlTrq_Nm", rt_offsetof(struct_Vvva7FSOBKsqeNDpnUVqsB, AxlTrq_Nm), 0, 17, 0
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

  { rtwCAPI_VECTOR, 10, 2, 0 },

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

  { rtwCAPI_MATRIX_COL_MAJOR, 28, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 32, 2, 0 },

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_VECTOR, 36, 2, 0 },

  { rtwCAPI_VECTOR, 38, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 40, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR_ND, 42, 3, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 45, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  5,                                   /* 2 */
  1,                                   /* 3 */
  3,                                   /* 4 */
  1,                                   /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  10,                                  /* 9 */
  1,                                   /* 10 */
  11,                                  /* 11 */
  1,                                   /* 12 */
  2,                                   /* 13 */
  22,                                  /* 14 */
  1,                                   /* 15 */
  1,                                   /* 16 */
  3,                                   /* 17 */
  1,                                   /* 18 */
  40,                                  /* 19 */
  1,                                   /* 20 */
  4,                                   /* 21 */
  1,                                   /* 22 */
  6,                                   /* 23 */
  1,                                   /* 24 */
  5,                                   /* 25 */
  50,                                  /* 26 */
  1,                                   /* 27 */
  1,                                   /* 28 */
  17,                                  /* 29 */
  1,                                   /* 30 */
  1001,                                /* 31 */
  17,                                  /* 32 */
  17,                                  /* 33 */
  1,                                   /* 34 */
  23,                                  /* 35 */
  40,                                  /* 36 */
  1,                                   /* 37 */
  1,                                   /* 38 */
  33,                                  /* 39 */
  10,                                  /* 40 */
  11,                                  /* 41 */
  10,                                  /* 42 */
  11,                                  /* 43 */
  2,                                   /* 44 */
  50,                                  /* 45 */
  17                                   /* 46 */
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
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    1, 0 }
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
  { rtBlockSignals, 450,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 261,
    rtModelParameters, 15 },

  { rtBlockStates, 11 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4077813059U,
    2644800383U,
    2113248640U,
    66385926U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  HSC_Model_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void HSC_Model_InitializeDataMapInfo(RT_MODEL_HSC_Model_T *const HSC_Model_M,
  B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(HSC_Model_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(HSC_Model_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(HSC_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  HSC_Model_InitializeDataAddr(HSC_Model_M->DataMapInfo.dataAddress, localB,
    localDW);
  rtwCAPI_SetDataAddressMap(HSC_Model_M->DataMapInfo.mmi,
    HSC_Model_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  HSC_Model_InitializeVarDimsAddr(HSC_Model_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(HSC_Model_M->DataMapInfo.mmi,
    HSC_Model_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(HSC_Model_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(HSC_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  HSC_Model_InitializeLoggingFunctions(HSC_Model_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(HSC_Model_M->DataMapInfo.mmi,
    HSC_Model_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(HSC_Model_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(HSC_Model_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(HSC_Model_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void HSC_Model_host_InitializeDataMapInfo(HSC_Model_host_DataMapInfo_T
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

/* EOF: HSC_Model_capi.c */

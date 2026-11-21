/*
 * Blazer_MiL_Model_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Blazer_MiL_Model".
 *
 * Model version              : 1.115
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 18:26:48 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Blazer_MiL_Model_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Blazer_MiL_Model.h"
#include "Blazer_MiL_Model_capi.h"
#include "Blazer_MiL_Model_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Blazer_MiL_Model/Memory"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Blazer_MiL_Model/Memory1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Blazer_MiL_Model/Model"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 5, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 6, 0, 0, 0, 1 },

  { 10, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 7, 0, 0, 0, 1 },

  { 11, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 8, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 9, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 10, 0, 0, 0, 1 },

  { 14, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 11, 0, 0, 0, 1 },

  { 15, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 12, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 13, 0, 0, 0, 1 },

  { 17, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 14, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Blazer_MiL_Model/Model1"),
    TARGET_STRING(""), 15, 5, 0, 0, 1 },

  { 19, 1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("Costsim"), 0, 0, 0, 0, 1 },

  { 20, 1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("JerCost"), 1, 0, 0, 0, 1 },

  { 21, 1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("SOCCost"), 2, 0, 0, 0, 1 },

  { 22, 1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("FuelCost"), 3, 0, 0, 0, 1 },

  { 23, 1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/MATLAB Function1"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Gain"),
    TARGET_STRING("APP"), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Gain1"),
    TARGET_STRING("APPACC"), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/mph2ms"),
    TARGET_STRING("<xdot>"), 0, 0, 0, 0, 2 },

  { 28, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 29, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Unary Minus3"),
    TARGET_STRING("DistError"), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Bus Creator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 33, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Gain"),
    TARGET_STRING("APP"), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/m//s2kph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/A123Relay"),
    TARGET_STRING("A123Relay"), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/BMS12VRelay"),
    TARGET_STRING("BMS12VRelay"), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/HVPumpRelay"),
    TARGET_STRING("HVPumpRelay"), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/MCURelay"),
    TARGET_STRING("MCURelay"), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/Drive Cycle Sim Time"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 40, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/MPH2MPS"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/CAVs City"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 42, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/HWFET"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 43, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/UDDS"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 44, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/USO6"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 45, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/UT Cycle"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 46, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 48, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 49, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 51, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 52, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 2 },

  { 53, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 54, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 55, 0, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 2 },

  { 56, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Clock8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 65, 2, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Multiport Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Multiport Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 68, 11, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 10, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 9, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 8, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 7, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 6, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 5, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 4, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 3, TARGET_STRING(
    "Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING(
    "Blazer_MiL_Model/User and Controldesk Interface/50-70 mph test (units in m//s) set sim time to 60 s/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 78, TARGET_STRING("Blazer_MiL_Model/Memory"),
    TARGET_STRING("InitialCondition"), 2, 0, 0 },

  { 79, TARGET_STRING("Blazer_MiL_Model/Memory1"),
    TARGET_STRING("InitialCondition"), 3, 0, 0 },

  { 80, TARGET_STRING("Blazer_MiL_Model/ACC Tuning/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 81, TARGET_STRING("Blazer_MiL_Model/ACC Tuning/Discrete Derivative3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 82, TARGET_STRING("Blazer_MiL_Model/ACC Tuning/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 83, TARGET_STRING("Blazer_MiL_Model/ACC Tuning/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 84, TARGET_STRING("Blazer_MiL_Model/ACC Tuning/mph2ms"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 85, TARGET_STRING("Blazer_MiL_Model/Subsystem3/ABSAtv"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 86, TARGET_STRING("Blazer_MiL_Model/Subsystem3/APP_validity"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 87, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 88, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 89, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 90, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 91, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 92, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 93, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 94, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 95, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 96, TARGET_STRING("Blazer_MiL_Model/Subsystem3/DistanceObjValid"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 97, TARGET_STRING("Blazer_MiL_Model/Subsystem3/EngRunAtv"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 98, TARGET_STRING("Blazer_MiL_Model/Subsystem3/HV_leakage_ena"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 99, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Hood_state"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 100, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Key_status"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 101, TARGET_STRING("Blazer_MiL_Model/Subsystem3/StateMcu"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 102, TARGET_STRING("Blazer_MiL_Model/Subsystem3/StrWhAng"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 103, TARGET_STRING("Blazer_MiL_Model/Subsystem3/StrWhAngV"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 104, TARGET_STRING("Blazer_MiL_Model/Subsystem3/ThermalIndicator"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 105, TARGET_STRING("Blazer_MiL_Model/Subsystem3/TimeGap"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 106, TARGET_STRING("Blazer_MiL_Model/Subsystem3/TrnsShiftLvrPos"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 107, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_cpwr_cmd"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 108, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_cpwr_mon"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 109, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_ground_fault"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 110, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_hvil_mon"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 111, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_mainc_stat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 112, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_ready"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 113, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_t_coolant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 114, TARGET_STRING("Blazer_MiL_Model/Subsystem3/bms_veh_mon"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 115, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 116, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 117, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 118, TARGET_STRING("Blazer_MiL_Model/Subsystem3/m//s2kph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 119, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/A123Relay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 120, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/BMS12VRelay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 121, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/CAVPCM ACC Enable"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 122, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/Drive Cycle Selection"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 123, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/Drive Cycle Start//Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 124, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/Drive Cycle Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 125, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/HVPumpRelay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 126, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/MCURelay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 127, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/Off"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 128, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/MPH2MPS"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 129, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/CAVs City"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 130, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/CAVs City"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 131, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/HWFET"),
    TARGET_STRING("Table"), 0, 3, 0 },

  { 132, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/HWFET"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 4, 0 },

  { 133, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/UDDS"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 134, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/UDDS"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 135, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/USO6"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 136, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/USO6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 137, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/UT Cycle"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 138, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/UT Cycle"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 139, TARGET_STRING("Blazer_MiL_Model/User and Controldesk Interface/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 140, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/BPP Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 141, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/BattTemp1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 142, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Battery Overheat Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 143, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/GFD Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 144, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/GFD leakage Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 145, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Gear Fault"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 146, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Gear Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 147, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/MCU Overheat Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 148, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/MCUOverheat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 149, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/MotrTrqEst Fault"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 150, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/MtrTrqEst Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 151, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/NewBPP"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 152, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/PwrTrainDirection Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 153, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/TranshftLvr Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 154, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/TrnsPos"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 155, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/battGFD"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 156, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/leakageEna"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 157, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 158, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 159, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 160, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 161, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 162, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 163, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 164, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 165, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 166, TARGET_STRING("Blazer_MiL_Model/Subsystem3/Fault Insertion/Switch9"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Block states information */
static const rtwCAPI_States rtBlockStates[] = {
  /* addrMapIndex, contStateStartIndex, blockPath,
   * stateName, pathAlias, dWorkIndex, dataTypeIndex, dimIndex,
   * fixPtIdx, sTimeIndex, isContinuous, hierInfoIdx, flatElemIdx
   */
  { 167, -1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative1/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  { 168, -1, TARGET_STRING(
    "Blazer_MiL_Model/ACC Tuning/Discrete Derivative3/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Root Inputs information */
static const rtwCAPI_Signals rtRootInputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Root Outputs information */
static const rtwCAPI_Signals rtRootOutputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 169, TARGET_STRING("ContinuousBatteryCharge"), 0, 7, 0 },

  { 170, TARGET_STRING("ContinuousBatteryDischarge"), 0, 7, 0 },

  { 171, TARGET_STRING("InterpBatteryCharge"), 0, 8, 0 },

  { 172, TARGET_STRING("InterpBatteryDischarge"), 0, 8, 0 },

  { 173, TARGET_STRING("New_Mass_Toque_Map"), 0, 9, 0 },

  { 174, TARGET_STRING("Reverse_APP"), 0, 10, 0 },

  { 175, TARGET_STRING("tandivide"), 0, 11, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Blazer_MiL_Model_B.Memory,/* 0: Signal */
  &Blazer_MiL_Model_B.Memory1,/* 1: Signal */
  &Blazer_MiL_Model_B.Model,/* 2: Signal */
  &Blazer_MiL_Model_B.APP_i,/* 3: Signal */
  &Blazer_MiL_Model_B.VehSpdAvgDrvn,/* 4: Signal */
  &Blazer_MiL_Model_B.Gear,/* 5: Signal */
  &Blazer_MiL_Model_B.Brake_Pa,/* 6: Signal */
  &Blazer_MiL_Model_B.xdotref,/* 7: Signal */
  &Blazer_MiL_Model_B.BPP_c,/* 8: Signal */
  &Blazer_MiL_Model_B.BattCurr,/* 9: Signal */
  &Blazer_MiL_Model_B.BattPwr,/* 10: Signal */
  &Blazer_MiL_Model_B.BattV,/* 11: Signal */
  &Blazer_MiL_Model_B.MotTrq,/* 12: Signal */
  &Blazer_MiL_Model_B.BattSoc,/* 13: Signal */
  &Blazer_MiL_Model_B.MotPwrElec,/* 14: Signal */
  &Blazer_MiL_Model_B.MotSpd,/* 15: Signal */
  &Blazer_MiL_Model_B.EngSpd,/* 16: Signal */
  &Blazer_MiL_Model_B.EngTrqOut,/* 17: Signal */
  &Blazer_MiL_Model_B.Model1_o16,/* 18: Signal */
  &Blazer_MiL_Model_B.Cost,/* 19: Signal */
  &Blazer_MiL_Model_B.Jerkcost,/* 20: Signal */
  &Blazer_MiL_Model_B.SOCcost,/* 21: Signal */
  &Blazer_MiL_Model_B.Fuelcost,/* 22: Signal */
  &Blazer_MiL_Model_B.Jerksim_j,/* 23: Signal */
  &Blazer_MiL_Model_B.Clock,/* 24: Signal */
  &Blazer_MiL_Model_B.APP_p,/* 25: Signal */
  &Blazer_MiL_Model_B.APPACC,/* 26: Signal */
  &Blazer_MiL_Model_B.xdot,/* 27: Signal */
  &Blazer_MiL_Model_B.RateTransition,/* 28: Signal */
  &Blazer_MiL_Model_B.Sum,/* 29: Signal */
  &Blazer_MiL_Model_B.Sum1,/* 30: Signal */
  &Blazer_MiL_Model_B.DistError_m,/* 31: Signal */
  &Blazer_MiL_Model_B.BusCreator,/* 32: Signal */
  &Blazer_MiL_Model_B.APP_k,/* 33: Signal */
  &Blazer_MiL_Model_B.ms2kph,/* 34: Signal */
  &Blazer_MiL_Model_B.A123Relay,/* 35: Signal */
  &Blazer_MiL_Model_B.BMS12VRelay,/* 36: Signal */
  &Blazer_MiL_Model_B.HVPumpRelay,/* 37: Signal */
  &Blazer_MiL_Model_B.MCURelay,/* 38: Signal */
  &Blazer_MiL_Model_B.DriveCycleSimTime,/* 39: Signal */
  &Blazer_MiL_Model_B.MPH2MPS,/* 40: Signal */
  &Blazer_MiL_Model_B.CAVsCity,/* 41: Signal */
  &Blazer_MiL_Model_B.HWFET,/* 42: Signal */
  &Blazer_MiL_Model_B.UDDS,/* 43: Signal */
  &Blazer_MiL_Model_B.USO6,/* 44: Signal */
  &Blazer_MiL_Model_B.UTCycle,/* 45: Signal */
  &Blazer_MiL_Model_B.MultiportSwitch,/* 46: Signal */
  &Blazer_MiL_Model_B.MultiportSwitch1_h,/* 47: Signal */
  &Blazer_MiL_Model_B.Add,/* 48: Signal */
  &Blazer_MiL_Model_B.Switch,/* 49: Signal */
  &Blazer_MiL_Model_B.Diff_o,/* 50: Signal */
  &Blazer_MiL_Model_B.TSamp_j,/* 51: Signal */
  &Blazer_MiL_Model_B.Uk1_k,/* 52: Signal */
  &Blazer_MiL_Model_B.Diff,/* 53: Signal */
  &Blazer_MiL_Model_B.TSamp,/* 54: Signal */
  &Blazer_MiL_Model_B.Uk1,/* 55: Signal */
  &Blazer_MiL_Model_B.Clock_j,/* 56: Signal */
  &Blazer_MiL_Model_B.Clock1,/* 57: Signal */
  &Blazer_MiL_Model_B.Clock2,/* 58: Signal */
  &Blazer_MiL_Model_B.Clock3,/* 59: Signal */
  &Blazer_MiL_Model_B.Clock4,/* 60: Signal */
  &Blazer_MiL_Model_B.Clock5,/* 61: Signal */
  &Blazer_MiL_Model_B.Clock6,/* 62: Signal */
  &Blazer_MiL_Model_B.Clock7,/* 63: Signal */
  &Blazer_MiL_Model_B.Clock8,/* 64: Signal */
  &Blazer_MiL_Model_B.Gain,/* 65: Signal */
  &Blazer_MiL_Model_B.MultiportSwitch5,/* 66: Signal */
  &Blazer_MiL_Model_B.MultiportSwitch7,/* 67: Signal */
  &Blazer_MiL_Model_B.Switch1,/* 68: Signal */
  &Blazer_MiL_Model_B.Switch2,/* 69: Signal */
  &Blazer_MiL_Model_B.Switch3,/* 70: Signal */
  &Blazer_MiL_Model_B.Switch4,/* 71: Signal */
  &Blazer_MiL_Model_B.Switch5,/* 72: Signal */
  &Blazer_MiL_Model_B.Switch6,/* 73: Signal */
  &Blazer_MiL_Model_B.Switch7,/* 74: Signal */
  &Blazer_MiL_Model_B.Switch8,/* 75: Signal */
  &Blazer_MiL_Model_B.Switch9,/* 76: Signal */
  &Blazer_MiL_Model_B.FromWs,/* 77: Signal */
  &Blazer_MiL_Model_P.Memory_InitialCondition,/* 78: Block Parameter */
  &Blazer_MiL_Model_P.Memory1_InitialCondition,/* 79: Block Parameter */
  &Blazer_MiL_Model_P.DiscreteDerivative1_ICPrevScaledInput,/* 80: Mask Parameter */
  &Blazer_MiL_Model_P.DiscreteDerivative3_ICPrevScaledInput,/* 81: Mask Parameter */
  &Blazer_MiL_Model_P.Gain_Gain_h,/* 82: Block Parameter */
  &Blazer_MiL_Model_P.Gain1_Gain,/* 83: Block Parameter */
  &Blazer_MiL_Model_P.mph2ms_Gain,/* 84: Block Parameter */
  &Blazer_MiL_Model_P.ABSAtv_Value,/* 85: Block Parameter */
  &Blazer_MiL_Model_P.APP_validity_Value,/* 86: Block Parameter */
  &Blazer_MiL_Model_P.Constant1_Value,/* 87: Block Parameter */
  &Blazer_MiL_Model_P.Constant2_Value,/* 88: Block Parameter */
  &Blazer_MiL_Model_P.Constant3_Value,/* 89: Block Parameter */
  &Blazer_MiL_Model_P.Constant4_Value,/* 90: Block Parameter */
  &Blazer_MiL_Model_P.Constant5_Value,/* 91: Block Parameter */
  &Blazer_MiL_Model_P.Constant6_Value,/* 92: Block Parameter */
  &Blazer_MiL_Model_P.Constant7_Value,/* 93: Block Parameter */
  &Blazer_MiL_Model_P.Constant8_Value,/* 94: Block Parameter */
  &Blazer_MiL_Model_P.Constant9_Value,/* 95: Block Parameter */
  &Blazer_MiL_Model_P.DistanceObjValid_Value,/* 96: Block Parameter */
  &Blazer_MiL_Model_P.EngRunAtv_Value,/* 97: Block Parameter */
  &Blazer_MiL_Model_P.HV_leakage_ena_Value,/* 98: Block Parameter */
  &Blazer_MiL_Model_P.Hood_state_Value,/* 99: Block Parameter */
  &Blazer_MiL_Model_P.Key_status_Value,/* 100: Block Parameter */
  &Blazer_MiL_Model_P.StateMcu_Value,/* 101: Block Parameter */
  &Blazer_MiL_Model_P.StrWhAng_Value,/* 102: Block Parameter */
  &Blazer_MiL_Model_P.StrWhAngV_Value,/* 103: Block Parameter */
  &Blazer_MiL_Model_P.ThermalIndicator_Value,/* 104: Block Parameter */
  &Blazer_MiL_Model_P.TimeGap_Value,/* 105: Block Parameter */
  &Blazer_MiL_Model_P.TrnsShiftLvrPos_Value,/* 106: Block Parameter */
  &Blazer_MiL_Model_P.bms_cpwr_cmd_Value,/* 107: Block Parameter */
  &Blazer_MiL_Model_P.bms_cpwr_mon_Value,/* 108: Block Parameter */
  &Blazer_MiL_Model_P.bms_ground_fault_Value,/* 109: Block Parameter */
  &Blazer_MiL_Model_P.bms_hvil_mon_Value,/* 110: Block Parameter */
  &Blazer_MiL_Model_P.bms_mainc_stat_Value,/* 111: Block Parameter */
  &Blazer_MiL_Model_P.bms_ready_Value,/* 112: Block Parameter */
  &Blazer_MiL_Model_P.bms_t_coolant_Value,/* 113: Block Parameter */
  &Blazer_MiL_Model_P.bms_veh_mon_Value,/* 114: Block Parameter */
  &Blazer_MiL_Model_P.Gain_Gain_g,/* 115: Block Parameter */
  &Blazer_MiL_Model_P.Gain1_Gain_h,/* 116: Block Parameter */
  &Blazer_MiL_Model_P.Gain2_Gain,/* 117: Block Parameter */
  &Blazer_MiL_Model_P.ms2kph_Gain,/* 118: Block Parameter */
  &Blazer_MiL_Model_P.A123Relay_Value,/* 119: Block Parameter */
  &Blazer_MiL_Model_P.BMS12VRelay_Value,/* 120: Block Parameter */
  &Blazer_MiL_Model_P.CAVPCMACCEnable_Value,/* 121: Block Parameter */
  &Blazer_MiL_Model_P.DriveCycleSelection_Value,/* 122: Block Parameter */
  &Blazer_MiL_Model_P.DriveCycleStartStop_Value,/* 123: Block Parameter */
  &Blazer_MiL_Model_P.DriveCycleStop_Value,/* 124: Block Parameter */
  &Blazer_MiL_Model_P.HVPumpRelay_Value,/* 125: Block Parameter */
  &Blazer_MiL_Model_P.MCURelay_Value,/* 126: Block Parameter */
  &Blazer_MiL_Model_P.Off_Value,/* 127: Block Parameter */
  &Blazer_MiL_Model_P.MPH2MPS_Gain,/* 128: Block Parameter */
  &Blazer_MiL_Model_P.CAVsCity_tableData[0],/* 129: Block Parameter */
  &Blazer_MiL_Model_P.CAVsCity_bp01Data[0],/* 130: Block Parameter */
  &Blazer_MiL_Model_P.HWFET_tableData[0],/* 131: Block Parameter */
  &Blazer_MiL_Model_P.HWFET_bp01Data[0],/* 132: Block Parameter */
  &Blazer_MiL_Model_P.UDDS_tableData[0],/* 133: Block Parameter */
  &Blazer_MiL_Model_P.UDDS_bp01Data[0],/* 134: Block Parameter */
  &Blazer_MiL_Model_P.USO6_tableData[0],/* 135: Block Parameter */
  &Blazer_MiL_Model_P.USO6_bp01Data[0],/* 136: Block Parameter */
  &Blazer_MiL_Model_P.UTCycle_tableData[0],/* 137: Block Parameter */
  &Blazer_MiL_Model_P.UTCycle_bp01Data[0],/* 138: Block Parameter */
  &Blazer_MiL_Model_P.Switch_Threshold,/* 139: Block Parameter */
  &Blazer_MiL_Model_P.BPPFaultSwitch_Value,/* 140: Block Parameter */
  &Blazer_MiL_Model_P.BattTemp1_Value,/* 141: Block Parameter */
  &Blazer_MiL_Model_P.BatteryOverheatFaultSwitch_Value,/* 142: Block Parameter */
  &Blazer_MiL_Model_P.GFDFaultSwitch_Value,/* 143: Block Parameter */
  &Blazer_MiL_Model_P.GFDleakageFaultSwitch_Value,/* 144: Block Parameter */
  &Blazer_MiL_Model_P.GearFault_Value,/* 145: Block Parameter */
  &Blazer_MiL_Model_P.GearFaultSwitch_Value,/* 146: Block Parameter */
  &Blazer_MiL_Model_P.MCUOverheatFaultSwitch_Value,/* 147: Block Parameter */
  &Blazer_MiL_Model_P.MCUOverheat_Value,/* 148: Block Parameter */
  &Blazer_MiL_Model_P.MotrTrqEstFault_Value,/* 149: Block Parameter */
  &Blazer_MiL_Model_P.MtrTrqEstFaultSwitch_Value,/* 150: Block Parameter */
  &Blazer_MiL_Model_P.NewBPP_Value,/* 151: Block Parameter */
  &Blazer_MiL_Model_P.PwrTrainDirectionFaultSwitch_Value,/* 152: Block Parameter */
  &Blazer_MiL_Model_P.TranshftLvrFaultSwitch_Value,/* 153: Block Parameter */
  &Blazer_MiL_Model_P.TrnsPos_Value,/* 154: Block Parameter */
  &Blazer_MiL_Model_P.battGFD_Value,/* 155: Block Parameter */
  &Blazer_MiL_Model_P.leakageEna_Value,/* 156: Block Parameter */
  &Blazer_MiL_Model_P.Gain_Gain,/* 157: Block Parameter */
  &Blazer_MiL_Model_P.Switch1_Threshold,/* 158: Block Parameter */
  &Blazer_MiL_Model_P.Switch2_Threshold,/* 159: Block Parameter */
  &Blazer_MiL_Model_P.Switch3_Threshold,/* 160: Block Parameter */
  &Blazer_MiL_Model_P.Switch4_Threshold,/* 161: Block Parameter */
  &Blazer_MiL_Model_P.Switch5_Threshold,/* 162: Block Parameter */
  &Blazer_MiL_Model_P.Switch6_Threshold,/* 163: Block Parameter */
  &Blazer_MiL_Model_P.Switch7_Threshold,/* 164: Block Parameter */
  &Blazer_MiL_Model_P.Switch8_Threshold,/* 165: Block Parameter */
  &Blazer_MiL_Model_P.Switch9_Threshold,/* 166: Block Parameter */
  &Blazer_MiL_Model_DW.UD_DSTATE_j,/* 167: Discrete State */
  &Blazer_MiL_Model_DW.UD_DSTATE,/* 168: Discrete State */
  rtP_ContinuousBatteryCharge,         /* 169: Model Parameter */
  rtP_ContinuousBatteryDischarge,      /* 170: Model Parameter */
  rtP_InterpBatteryCharge,             /* 171: Model Parameter */
  rtP_InterpBatteryDischarge,          /* 172: Model Parameter */
  rtP_New_Mass_Toque_Map,              /* 173: Model Parameter */
  rtP_Reverse_APP,                     /* 174: Model Parameter */
  rtP_tandivide,                       /* 175: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "struct", "HSCInputs", 57, 1, sizeof(HSCInputs), SS_STRUCT, 0, 0, 0 },

  { "struct", "HSCOutputs", 67, 58, sizeof(HSCOutputs), SS_STRUCT, 0, 0, 0 },

  { "struct", "Fuelout", 2, 125, sizeof(Fuelout), SS_STRUCT, 0, 0, 0 },

  { "struct", "Scope", 14, 127, sizeof(Scope), SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "ABSAtv", rt_offsetof(HSCInputs, ABSAtv), 0, 0, 0 },

  { "APP", rt_offsetof(HSCInputs, APP), 0, 0, 0 },

  { "APPv", rt_offsetof(HSCInputs, APPv), 0, 0, 0 },

  { "BPP", rt_offsetof(HSCInputs, BPP), 0, 0, 0 },

  { "EngRunAtv", rt_offsetof(HSCInputs, EngRunAtv), 0, 0, 0 },

  { "EngSpd", rt_offsetof(HSCInputs, EngSpd), 0, 0, 0 },

  { "Gear", rt_offsetof(HSCInputs, Gear), 0, 0, 0 },

  { "HdSt", rt_offsetof(HSCInputs, HdSt), 0, 0, 0 },

  { "KeySt", rt_offsetof(HSCInputs, KeySt), 0, 0, 0 },

  { "gfd", rt_offsetof(HSCInputs, gfd), 0, 0, 0 },

  { "McuThermal", rt_offsetof(HSCInputs, McuThermal), 0, 0, 0 },

  { "MotorSpd", rt_offsetof(HSCInputs, MotorSpd), 0, 0, 0 },

  { "MotorTrqEst", rt_offsetof(HSCInputs, MotorTrqEst), 0, 0, 0 },

  { "SOC", rt_offsetof(HSCInputs, SOC), 0, 0, 0 },

  { "StateMcu", rt_offsetof(HSCInputs, StateMcu), 0, 0, 0 },

  { "StrWhAng", rt_offsetof(HSCInputs, StrWhAng), 0, 0, 0 },

  { "StrWhAngV", rt_offsetof(HSCInputs, StrWhAngV), 0, 0, 0 },

  { "TrnsShftPos", rt_offsetof(HSCInputs, TrnsShftPos), 0, 0, 0 },

  { "VehSpd", rt_offsetof(HSCInputs, VehSpd), 0, 0, 0 },

  { "battTcoolant", rt_offsetof(HSCInputs, battTcoolant), 0, 0, 0 },

  { "bcmready", rt_offsetof(HSCInputs, bcmready), 0, 0, 0 },

  { "cpwrcmd", rt_offsetof(HSCInputs, cpwrcmd), 0, 0, 0 },

  { "cpwrmon", rt_offsetof(HSCInputs, cpwrmon), 0, 0, 0 },

  { "hvilmon", rt_offsetof(HSCInputs, hvilmon), 0, 0, 0 },

  { "ibat", rt_offsetof(HSCInputs, ibat), 0, 0, 0 },

  { "maincstat", rt_offsetof(HSCInputs, maincstat), 0, 0, 0 },

  { "vbat", rt_offsetof(HSCInputs, vbat), 0, 0, 0 },

  { "vehmon", rt_offsetof(HSCInputs, vehmon), 0, 0, 0 },

  { "ICESwitch", rt_offsetof(HSCInputs, ICESwitch), 0, 0, 0 },

  { "RegenSwitch", rt_offsetof(HSCInputs, RegenSwitch), 0, 0, 0 },

  { "CAVsCrsLmtrSwStat", rt_offsetof(HSCInputs, CAVsCrsLmtrSwStat), 0, 0, 0 },

  { "CAVsCrsCntrlSwStOnSwAct", rt_offsetof(HSCInputs, CAVsCrsCntrlSwStOnSwAct),
    0, 0, 0 },

  { "CAVsCrsCntrlStSetSwAct", rt_offsetof(HSCInputs, CAVsCrsCntrlStSetSwAct), 0,
    0, 0 },

  { "Long_Switch", rt_offsetof(HSCInputs, Long_Switch), 0, 0, 0 },

  { "TCSysAtv", rt_offsetof(HSCInputs, TCSysAtv), 0, 0, 0 },

  { "MotorRC", rt_offsetof(HSCInputs, MotorRC), 0, 0, 0 },

  { "DrvIntndAxlTrqMax", rt_offsetof(HSCInputs, DrvIntndAxlTrqMax), 0, 0, 0 },

  { "DrvIntndAxlTrqMin", rt_offsetof(HSCInputs, DrvIntndAxlTrqMin), 0, 0, 0 },

  { "TrqReqStat", rt_offsetof(HSCInputs, TrqReqStat), 0, 0, 0 },

  { "xdotref", rt_offsetof(HSCInputs, xdotref), 0, 0, 0 },

  { "EngTrqOut", rt_offsetof(HSCInputs, EngTrqOut), 0, 0, 0 },

  { "ACCBrakeTime", rt_offsetof(HSCInputs, ACCBrakeTime), 0, 0, 0 },

  { "ACCSetSpd_kph", rt_offsetof(HSCInputs, ACCSetSpd_kph), 0, 0, 0 },

  { "CAVtrgVel", rt_offsetof(HSCInputs, CAVtrgVel), 0, 0, 0 },

  { "CAVtrgDist", rt_offsetof(HSCInputs, CAVtrgDist), 0, 0, 0 },

  { "grade", rt_offsetof(HSCInputs, grade), 0, 0, 0 },

  { "Tanh_Exponent", rt_offsetof(HSCInputs, Tanh_Exponent), 0, 0, 0 },

  { "Tanh_multiplier", rt_offsetof(HSCInputs, Tanh_multiplier), 0, 0, 0 },

  { "dist_is_valid", rt_offsetof(HSCInputs, dist_is_valid), 1, 0, 0 },

  { "TrafficLightPresent", rt_offsetof(HSCInputs, TrafficLightPresent), 1, 0, 0
  },

  { "DistanceToIntersection", rt_offsetof(HSCInputs, DistanceToIntersection), 0,
    0, 0 },

  { "TimeToNextState", rt_offsetof(HSCInputs, TimeToNextState), 0, 0, 0 },

  { "CurrentState", rt_offsetof(HSCInputs, CurrentState), 0, 0, 0 },

  { "Decel_Division_Value", rt_offsetof(HSCInputs, Decel_Division_Value), 0, 0,
    0 },

  { "bcm_coolan_temp_C", rt_offsetof(HSCInputs, bcm_coolan_temp_C), 0, 0, 0 },

  { "DistanceObjValid", rt_offsetof(HSCInputs, DistanceObjValid), 0, 0, 0 },

  { "TimeGap", rt_offsetof(HSCInputs, TimeGap), 0, 0, 0 },

  { "EngAxleTrqDmd", rt_offsetof(HSCOutputs, EngAxleTrqDmd), 0, 0, 0 },

  { "McuTorqueCommand", rt_offsetof(HSCOutputs, McuTorqueCommand), 0, 0, 0 },

  { "HSCbmsEnable", rt_offsetof(HSCOutputs, HSCbmsEnable), 0, 0, 0 },

  { "MPDMBMSign", rt_offsetof(HSCOutputs, MPDMBMSign), 0, 0, 0 },

  { "HSCbmsLeakage", rt_offsetof(HSCOutputs, HSCbmsLeakage), 0, 0, 0 },

  { "MPDMBMSpwr", rt_offsetof(HSCOutputs, MPDMBMSpwr), 0, 0, 0 },

  { "HSCBrusaEnable", rt_offsetof(HSCOutputs, HSCBrusaEnable), 0, 0, 0 },

  { "HSCbmsMainCclose", rt_offsetof(HSCOutputs, HSCbmsMainCclose), 0, 0, 0 },

  { "MPDMMCUign", rt_offsetof(HSCOutputs, MPDMMCUign), 0, 0, 0 },

  { "VMUCmd1OpRq", rt_offsetof(HSCOutputs, VMUCmd1OpRq), 0, 0, 0 },

  { "VMUCmd2OpMd", rt_offsetof(HSCOutputs, VMUCmd2OpMd), 0, 0, 0 },

  { "VMUmajorProt", rt_offsetof(HSCOutputs, VMUmajorProt), 0, 0, 0 },

  { "VMUminorProt", rt_offsetof(HSCOutputs, VMUminorProt), 0, 0, 0 },

  { "MPDMHVpump", rt_offsetof(HSCOutputs, MPDMHVpump), 0, 0, 0 },

  { "VMU_Kickout", rt_offsetof(HSCOutputs, VMU_Kickout), 0, 0, 0 },

  { "vmcp_StartupSt", rt_offsetof(HSCOutputs, vmcp_StartupSt), 0, 0, 0 },

  { "CrsSpdLmtrSwStat", rt_offsetof(HSCOutputs, CrsSpdLmtrSwStat), 0, 0, 0 },

  { "CrsCntrlSwStOnSwAct", rt_offsetof(HSCOutputs, CrsCntrlSwStOnSwAct), 0, 0, 0
  },

  { "ACCATC_ACCAct_SF", rt_offsetof(HSCOutputs, ACCATC_ACCAct_SF), 0, 0, 0 },

  { "CrsCntrlSwStSetSwAct", rt_offsetof(HSCOutputs, CrsCntrlSwStSetSwAct), 0, 0,
    0 },

  { "VMU_Cmd2_CommandMd", rt_offsetof(HSCOutputs, VMU_Cmd2_CommandMd), 0, 0, 0 },

  { "ACC_APP", rt_offsetof(HSCOutputs, ACC_APP), 0, 0, 0 },

  { "ACC_BPP", rt_offsetof(HSCOutputs, ACC_BPP), 0, 0, 0 },

  { "ACCPIDOut", rt_offsetof(HSCOutputs, ACCPIDOut), 0, 0, 0 },

  { "DistError", rt_offsetof(HSCOutputs, DistError), 0, 0, 0 },

  { "RelDist", rt_offsetof(HSCOutputs, RelDist), 0, 0, 0 },

  { "SafeDist", rt_offsetof(HSCOutputs, SafeDist), 0, 0, 0 },

  { "CAVPCM_ACCMdAtv", rt_offsetof(HSCOutputs, CAVPCM_ACCMdAtv), 1, 0, 0 },

  { "CAVPCM_ACCMdReq", rt_offsetof(HSCOutputs, CAVPCM_ACCMdReq), 1, 0, 0 },

  { "protectHV", rt_offsetof(HSCOutputs, protectHV), 1, 0, 0 },

  { "MotorCntrlFault", rt_offsetof(HSCOutputs, MotorCntrlFault), 1, 0, 0 },

  { "ZeroPwrTrq", rt_offsetof(HSCOutputs, ZeroPwrTrq), 1, 0, 0 },

  { "MotorTrqEst", rt_offsetof(HSCOutputs, MotorTrqEst), 0, 0, 0 },

  { "MotorTrqDirFault", rt_offsetof(HSCOutputs, MotorTrqDirFault), 1, 0, 0 },

  { "TrackACCSt", rt_offsetof(HSCOutputs, TrackACCSt), 0, 0, 0 },

  { "TrqDmdPedalMap", rt_offsetof(HSCOutputs, TrqDmdPedalMap), 0, 0, 0 },

  { "DesEngPwr", rt_offsetof(HSCOutputs, DesEngPwr), 0, 0, 0 },

  { "DesElecPwr", rt_offsetof(HSCOutputs, DesElecPwr), 0, 0, 0 },

  { "PwrPMNoRegen", rt_offsetof(HSCOutputs, PwrPMNoRegen), 0, 0, 0 },

  { "TotPwrPedalMap", rt_offsetof(HSCOutputs, TotPwrPedalMap), 0, 0, 0 },

  { "EngTrqDmdRaw", rt_offsetof(HSCOutputs, EngTrqDmdRaw), 0, 0, 0 },

  { "EBCM_Decel", rt_offsetof(HSCOutputs, EBCM_Decel), 0, 0, 0 },

  { "powertraindirectionfault", rt_offsetof(HSCOutputs, powertraindirectionfault),
    1, 0, 0 },

  { "VehicleShiftStateControlfault", rt_offsetof(HSCOutputs,
    VehicleShiftStateControlfault), 1, 0, 0 },

  { "SetSpdACC", rt_offsetof(HSCOutputs, SetSpdACC), 0, 0, 0 },

  { "ControllerSwitch", rt_offsetof(HSCOutputs, ControllerSwitch), 1, 0, 0 },

  { "MotorTrqCutFlag", rt_offsetof(HSCOutputs, MotorTrqCutFlag), 1, 0, 0 },

  { "EngTrqCutFlag", rt_offsetof(HSCOutputs, EngTrqCutFlag), 1, 0, 0 },

  { "ReduceMotSwitch", rt_offsetof(HSCOutputs, ReduceMotSwitch), 1, 0, 0 },

  { "GFD", rt_offsetof(HSCOutputs, GFD), 1, 0, 0 },

  { "Battery_Overheat", rt_offsetof(HSCOutputs, Battery_Overheat), 1, 0, 0 },

  { "Batt_Overheat_Susp", rt_offsetof(HSCOutputs, Batt_Overheat_Susp), 1, 0, 0 },

  { "BPPCancel", rt_offsetof(HSCOutputs, BPPCancel), 1, 0, 0 },

  { "ZeroPwrTmTrq", rt_offsetof(HSCOutputs, ZeroPwrTmTrq), 1, 0, 0 },

  { "MotorControlFault", rt_offsetof(HSCOutputs, MotorControlFault), 1, 0, 0 },

  { "MtrCommFault", rt_offsetof(HSCOutputs, MtrCommFault), 1, 0, 0 },

  { "AutoMdSpdLmtStat", rt_offsetof(HSCOutputs, AutoMdSpdLmtStat), 1, 0, 0 },

  { "ACCAct370", rt_offsetof(HSCOutputs, ACCAct370), 1, 0, 0 },

  { "AdapCrsCntVDA", rt_offsetof(HSCOutputs, AdapCrsCntVDA), 1, 0, 0 },

  { "ACCDrvrSeltdSpd", rt_offsetof(HSCOutputs, ACCDrvrSeltdSpd), 0, 0, 0 },

  { "SetSpeedCmd", rt_offsetof(HSCOutputs, SetSpeedCmd), 0, 0, 0 },

  { "TotalAccelComandBeforeRoadLoad", rt_offsetof(HSCOutputs,
    TotalAccelComandBeforeRoadLoad), 0, 0, 0 },

  { "TotalForceAfterRoadLoad", rt_offsetof(HSCOutputs, TotalForceAfterRoadLoad),
    0, 0, 0 },

  { "ACCReqPwr", rt_offsetof(HSCOutputs, ACCReqPwr), 0, 0, 0 },

  { "BattPwrChrgLmt", rt_offsetof(HSCOutputs, BattPwrChrgLmt), 0, 0, 0 },

  { "BattPwrDischrgLmt", rt_offsetof(HSCOutputs, BattPwrDischrgLmt), 0, 0, 0 },

  { "PSOC", rt_offsetof(HSCOutputs, PSOC), 0, 0, 0 },

  { "TotFuel", rt_offsetof(Fuelout, TotFuel), 0, 0, 0 },

  { "BattFuel", rt_offsetof(Fuelout, BattFuel), 0, 0, 0 },

  { "VehSpd_mph", rt_offsetof(Scope, VehSpd_mph), 0, 0, 0 },

  { "RefSpd_mph", rt_offsetof(Scope, RefSpd_mph), 0, 0, 0 },

  { "EngSpd_rpm", rt_offsetof(Scope, EngSpd_rpm), 0, 0, 0 },

  { "MotSpd_rpm", rt_offsetof(Scope, MotSpd_rpm), 0, 0, 0 },

  { "EngTrq_Nm", rt_offsetof(Scope, EngTrq_Nm), 0, 0, 0 },

  { "MotTrq_Nm", rt_offsetof(Scope, MotTrq_Nm), 0, 0, 0 },

  { "BattCurr_A", rt_offsetof(Scope, BattCurr_A), 0, 0, 0 },

  { "BattSOC", rt_offsetof(Scope, BattSOC), 0, 0, 0 },

  { "FuelEcon_mpge", rt_offsetof(Scope, FuelEcon_mpge), 0, 0, 0 },

  { "TPNOxMass", rt_offsetof(Scope, TPNOxMass), 0, 0, 0 },

  { "TPCO2Mass", rt_offsetof(Scope, TPCO2Mass), 0, 0, 0 },

  { "TPCOMass", rt_offsetof(Scope, TPCOMass), 0, 0, 0 },

  { "TPHCMass", rt_offsetof(Scope, TPHCMass), 0, 0, 0 },

  { "Fuelout", rt_offsetof(Scope, Fuelout), 4, 0, 0 }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 14, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR_ND, 16, 3, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 19, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 21, 2, 0 },

  { rtwCAPI_VECTOR, 23, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  600,                                 /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  600,                                 /* 5 */
  765,                                 /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  765,                                 /* 9 */
  1369,                                /* 10 */
  1,                                   /* 11 */
  1,                                   /* 12 */
  1369,                                /* 13 */
  10,                                  /* 14 */
  11,                                  /* 15 */
  10,                                  /* 16 */
  11,                                  /* 17 */
  2,                                   /* 18 */
  17,                                  /* 19 */
  17,                                  /* 20 */
  50,                                  /* 21 */
  17,                                  /* 22 */
  1,                                   /* 23 */
  1001                                 /* 24 */
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
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    3, 0 }
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
  { rtBlockSignals, 78,
    rtRootInputs, 0,
    rtRootOutputs, 0 },

  { rtBlockParameters, 89,
    rtModelParameters, 7 },

  { rtBlockStates, 2 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1472185768U,
    385762133U,
    1448176823U,
    1799380688U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Blazer_MiL_Model_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Blazer_MiL_Model_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion
    (Blazer_MiL_Model_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap
    (Blazer_MiL_Model_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap
    (Blazer_MiL_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap
    (Blazer_MiL_Model_M->DataMapInfo.mmi,
     rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap
    (Blazer_MiL_Model_M->DataMapInfo.mmi,
     rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo
    (Blazer_MiL_Model_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray
    (Blazer_MiL_Model_M->DataMapInfo.mmi,
     Blazer_MiL_Model_M->DataMapInfo.childMMI);
  rtwCAPI_SetChildMMIArrayLen
    (Blazer_MiL_Model_M->DataMapInfo.mmi, 2);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Blazer_MiL_Model_host_InitializeDataMapInfo
    (Blazer_MiL_Model_host_DataMapInfo_T *dataMap,
     const char *path)
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
    dataMap->childMMI[0] = &(dataMap->child0.mmi);
    HSC_Model_host_InitializeDataMapInfo(&(dataMap->child0),
      "Blazer_MiL_Model/Model");
    dataMap->childMMI[1] = &(dataMap->child1.mmi);
    Blazer_Plant_Model_host_InitializeDataMapInfo(&(dataMap->child1),
      "Blazer_MiL_Model/Model1");
    rtwCAPI_SetChildMMIArray(dataMap->mmi, dataMap->childMMI);
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 2);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: Blazer_MiL_Model_capi.c */

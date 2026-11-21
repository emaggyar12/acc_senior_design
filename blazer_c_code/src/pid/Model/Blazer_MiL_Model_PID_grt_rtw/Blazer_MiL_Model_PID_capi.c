/*
 * Blazer_MiL_Model_PID_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Blazer_MiL_Model_PID".
 *
 * Model version              : 2.11
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 21:03:45 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Blazer_MiL_Model_PID_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Blazer_MiL_Model_PID.h"
#include "Blazer_MiL_Model_PID_capi.h"
#include "Blazer_MiL_Model_PID_private.h"
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
  { 0, 0, TARGET_STRING("Blazer_MiL_Model_PID/Memory"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Blazer_MiL_Model_PID/Memory1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 3, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 5, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 6, 0, 0, 0, 1 },

  { 10, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 7, 0, 0, 0, 1 },

  { 11, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 8, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 9, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 10, 0, 0, 0, 1 },

  { 14, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 11, 0, 0, 0, 1 },

  { 15, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 12, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 13, 0, 0, 0, 1 },

  { 17, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 14, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Blazer_MiL_Model_PID/Model1"),
    TARGET_STRING(""), 15, 5, 0, 0, 1 },

  { 19, 1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("Costsim"), 0, 0, 0, 0, 1 },

  { 20, 1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("JerCost"), 1, 0, 0, 0, 1 },

  { 21, 1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("SOCCost"), 2, 0, 0, 0, 1 },

  { 22, 1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/MATLAB Function1"),
    TARGET_STRING("FuelCost"), 3, 0, 0, 0, 1 },

  { 23, 1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/MATLAB Function1"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Gain"),
    TARGET_STRING("APP"), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Gain1"),
    TARGET_STRING("APPACC"), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/mph2ms"),
    TARGET_STRING("<xdot>"), 0, 0, 0, 0, 2 },

  { 28, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Rate Transition"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 29, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Unary Minus3"),
    TARGET_STRING("DistError"), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Bus Creator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 33, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Clock8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Gain"),
    TARGET_STRING("APP"), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/m//s2kph"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 15, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 14, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Minus1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 12, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 13, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 16, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 17, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/A123Relay"),
    TARGET_STRING("A123Relay"), 0, 0, 0, 0, 0 },

  { 53, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/BMS12VRelay"),
    TARGET_STRING("BMS12VRelay"), 0, 0, 0, 0, 0 },

  { 54, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/HVPumpRelay"),
    TARGET_STRING("HVPumpRelay"), 0, 0, 0, 0, 0 },

  { 55, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/MCURelay"),
    TARGET_STRING("MCURelay"), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/Drive Cycle Sim Time"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 57, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/MPH2MPS"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/CAVs City"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 59, 0, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/HWFET"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 60, 0, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/UDDS"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 61, 0, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/USO6"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 62, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/UT Cycle"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 63, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/Multiport Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 65, 0, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 66, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 68, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 69, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 2 },

  { 70, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative3/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 71, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative3/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 72, 0, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative3/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 2 },

  { 73, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 80, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Clock8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 9, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 83, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Multiport Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Multiport Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 11, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 2, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 3, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 4, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 5, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 6, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 7, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 8, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 10, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING(
    "Blazer_MiL_Model_PID/User and Controldesk Interface/50-70 mph test (units in m//s) set sim time to 60 s/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 95, TARGET_STRING("Blazer_MiL_Model_PID/Memory"),
    TARGET_STRING("InitialCondition"), 2, 0, 0 },

  { 96, TARGET_STRING("Blazer_MiL_Model_PID/Memory1"),
    TARGET_STRING("InitialCondition"), 3, 0, 0 },

  { 97, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 98, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative3"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 99, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 100, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 101, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/mph2ms"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 102, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/ABSAtv"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 103, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/APP_validity"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 104, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 105, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant10"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 106, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant11"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 107, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant12"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 108, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant13"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 109, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant14"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 110, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant15"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 111, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant16"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 112, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant17"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 113, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant18"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 114, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant19"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 115, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 116, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant20"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 117, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant21"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 118, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant22"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 119, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant23"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 120, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant24"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 121, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant25"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 122, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant26"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 123, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant27"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 124, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant28"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 125, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant29"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 126, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 127, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant4"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 128, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant5"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 129, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 130, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 131, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant8"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 132, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Constant9"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 133, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/EngRunAtv"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 134, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/HV_leakage_ena"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 135, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Hood_state"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 136, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Key_status"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 137, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/StateMcu"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 138, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/StrWhAng"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 139, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/StrWhAngV"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 140, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/ThermalIndicator"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 141, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/TrnsShiftLvrPos"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 142, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_cpwr_cmd"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 143, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_cpwr_mon"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 144, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_ground_fault"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 145, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_hvil_mon"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 146, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_mainc_stat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 147, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_ready"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 148, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_t_coolant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 149, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/bms_veh_mon"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 150, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 151, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 152, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 153, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/m//s2kph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 154, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 155, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 156, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 157, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 158, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 159, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 160, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 161, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/A123Relay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 162, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/BMS12VRelay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 163, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/CAVPCM ACC Enable"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 164, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/Drive Cycle Selection"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 165, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/Drive Cycle Start//Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 166, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/Drive Cycle Stop"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 167, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/HVPumpRelay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 168, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/MCURelay"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 169, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/Off"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 170, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/MPH2MPS"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 171, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/CAVs City"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 172, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/CAVs City"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 173, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/HWFET"),
    TARGET_STRING("Table"), 0, 3, 0 },

  { 174, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/HWFET"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 4, 0 },

  { 175, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/UDDS"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 176, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/UDDS"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 177, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/USO6"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 178, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/USO6"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 179, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/UT Cycle"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 180, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/UT Cycle"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 181, TARGET_STRING("Blazer_MiL_Model_PID/User and Controldesk Interface/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 182, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/BPP Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 183, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/BattTemp1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 184, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Battery Overheat Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 185, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/GFD Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 186, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/GFD leakage Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 187, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Gear Fault"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 188, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Gear Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 189, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/MCU Overheat Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 190, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/MCUOverheat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 191, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/MotrTrqEst Fault"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 192, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/MtrTrqEst Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 193, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/NewBPP"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 194, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/PwrTrainDirection Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 195, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/TranshftLvr Fault Switch"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 196, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/TrnsPos"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 197, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/battGFD"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 198, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/leakageEna"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 199, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 200, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 201, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 202, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 203, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 204, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 205, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 206, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 207, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch8"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 208, TARGET_STRING("Blazer_MiL_Model_PID/Subsystem3/Fault Insertion/Switch9"),
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
  { 209, -1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative1/UD"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 2, 0, -1, 0 },

  { 210, -1, TARGET_STRING("Blazer_MiL_Model_PID/ACC Tuning/Discrete Derivative3/UD"),
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
  { 211, TARGET_STRING("ACC_Distance_Lookup"), 0, 7, 0 },

  { 212, TARGET_STRING("ACC_Distance_Lookup_Direct_Distance"), 0, 8, 0 },

  { 213, TARGET_STRING("ACC_Distance_Lookup_Direct_DistanceV2"), 0, 8, 0 },

  { 214, TARGET_STRING("ACC_Far_Distance_Lookup_Direct"), 0, 8, 0 },

  { 215, TARGET_STRING("ACC_Near_Distance_Lookup_Direct"), 0, 9, 0 },

  { 216, TARGET_STRING("ContinuousBatteryCharge"), 0, 10, 0 },

  { 217, TARGET_STRING("ContinuousBatteryDischarge"), 0, 10, 0 },

  { 218, TARGET_STRING("InterpBatteryCharge"), 0, 11, 0 },

  { 219, TARGET_STRING("InterpBatteryDischarge"), 0, 11, 0 },

  { 220, TARGET_STRING("New_Mass_Toque_Map"), 0, 7, 0 },

  { 221, TARGET_STRING("Reverse_APP"), 0, 12, 0 },

  { 222, TARGET_STRING("Stoplight_distance_speed_only"), 0, 13, 0 },

  { 223, TARGET_STRING("tandivide"), 0, 14, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Blazer_MiL_Model_PID_B.Memory,          /* 0: Signal */
  &Blazer_MiL_Model_PID_B.Memory1,         /* 1: Signal */
  &Blazer_MiL_Model_PID_B.Model,           /* 2: Signal */
  &Blazer_MiL_Model_PID_B.APP_i,           /* 3: Signal */
  &Blazer_MiL_Model_PID_B.VehSpdAvgDrvn,   /* 4: Signal */
  &Blazer_MiL_Model_PID_B.Gear,            /* 5: Signal */
  &Blazer_MiL_Model_PID_B.Brake_Pa,        /* 6: Signal */
  &Blazer_MiL_Model_PID_B.xdotref,         /* 7: Signal */
  &Blazer_MiL_Model_PID_B.BPP_c,           /* 8: Signal */
  &Blazer_MiL_Model_PID_B.BattCurr,        /* 9: Signal */
  &Blazer_MiL_Model_PID_B.BattPwr,         /* 10: Signal */
  &Blazer_MiL_Model_PID_B.BattV,           /* 11: Signal */
  &Blazer_MiL_Model_PID_B.MotTrq,          /* 12: Signal */
  &Blazer_MiL_Model_PID_B.BattSoc,         /* 13: Signal */
  &Blazer_MiL_Model_PID_B.MotPwrElec,      /* 14: Signal */
  &Blazer_MiL_Model_PID_B.MotSpd,          /* 15: Signal */
  &Blazer_MiL_Model_PID_B.EngSpd,          /* 16: Signal */
  &Blazer_MiL_Model_PID_B.EngTrqOut,       /* 17: Signal */
  &Blazer_MiL_Model_PID_B.Model1_o16,      /* 18: Signal */
  &Blazer_MiL_Model_PID_B.Cost,            /* 19: Signal */
  &Blazer_MiL_Model_PID_B.Jerkcost,        /* 20: Signal */
  &Blazer_MiL_Model_PID_B.SOCcost,         /* 21: Signal */
  &Blazer_MiL_Model_PID_B.Fuelcost,        /* 22: Signal */
  &Blazer_MiL_Model_PID_B.Jerksim_g,       /* 23: Signal */
  &Blazer_MiL_Model_PID_B.Clock,           /* 24: Signal */
  &Blazer_MiL_Model_PID_B.APP_p,           /* 25: Signal */
  &Blazer_MiL_Model_PID_B.APPACC,          /* 26: Signal */
  &Blazer_MiL_Model_PID_B.xdot,            /* 27: Signal */
  &Blazer_MiL_Model_PID_B.RateTransition,  /* 28: Signal */
  &Blazer_MiL_Model_PID_B.Sum,             /* 29: Signal */
  &Blazer_MiL_Model_PID_B.Sum1,            /* 30: Signal */
  &Blazer_MiL_Model_PID_B.DistError_m,     /* 31: Signal */
  &Blazer_MiL_Model_PID_B.BusCreator,      /* 32: Signal */
  &Blazer_MiL_Model_PID_B.Clock_f,         /* 33: Signal */
  &Blazer_MiL_Model_PID_B.Clock1_k,        /* 34: Signal */
  &Blazer_MiL_Model_PID_B.Clock2_a,        /* 35: Signal */
  &Blazer_MiL_Model_PID_B.Clock3_h,        /* 36: Signal */
  &Blazer_MiL_Model_PID_B.Clock4_c,        /* 37: Signal */
  &Blazer_MiL_Model_PID_B.Clock5,          /* 38: Signal */
  &Blazer_MiL_Model_PID_B.Clock6_m,        /* 39: Signal */
  &Blazer_MiL_Model_PID_B.Clock7_a,        /* 40: Signal */
  &Blazer_MiL_Model_PID_B.Clock8_g,        /* 41: Signal */
  &Blazer_MiL_Model_PID_B.APP_k,           /* 42: Signal */
  &Blazer_MiL_Model_PID_B.ms2kph,          /* 43: Signal */
  &Blazer_MiL_Model_PID_B.Minus,           /* 44: Signal */
  &Blazer_MiL_Model_PID_B.Minus1,          /* 45: Signal */
  &Blazer_MiL_Model_PID_B.Switch1,         /* 46: Signal */
  &Blazer_MiL_Model_PID_B.Switch2,         /* 47: Signal */
  &Blazer_MiL_Model_PID_B.Switch3,         /* 48: Signal */
  &Blazer_MiL_Model_PID_B.Switch4,         /* 49: Signal */
  &Blazer_MiL_Model_PID_B.Switch5,         /* 50: Signal */
  &Blazer_MiL_Model_PID_B.Switch6,         /* 51: Signal */
  &Blazer_MiL_Model_PID_B.A123Relay,       /* 52: Signal */
  &Blazer_MiL_Model_PID_B.BMS12VRelay,     /* 53: Signal */
  &Blazer_MiL_Model_PID_B.HVPumpRelay,     /* 54: Signal */
  &Blazer_MiL_Model_PID_B.MCURelay,        /* 55: Signal */
  &Blazer_MiL_Model_PID_B.DriveCycleSimTime,/* 56: Signal */
  &Blazer_MiL_Model_PID_B.MPH2MPS,         /* 57: Signal */
  &Blazer_MiL_Model_PID_B.CAVsCity,        /* 58: Signal */
  &Blazer_MiL_Model_PID_B.HWFET,           /* 59: Signal */
  &Blazer_MiL_Model_PID_B.UDDS,            /* 60: Signal */
  &Blazer_MiL_Model_PID_B.USO6,            /* 61: Signal */
  &Blazer_MiL_Model_PID_B.UTCycle,         /* 62: Signal */
  &Blazer_MiL_Model_PID_B.MultiportSwitch, /* 63: Signal */
  &Blazer_MiL_Model_PID_B.MultiportSwitch1_h,/* 64: Signal */
  &Blazer_MiL_Model_PID_B.Add,             /* 65: Signal */
  &Blazer_MiL_Model_PID_B.Switch,          /* 66: Signal */
  &Blazer_MiL_Model_PID_B.Diff_o,          /* 67: Signal */
  &Blazer_MiL_Model_PID_B.TSamp_j,         /* 68: Signal */
  &Blazer_MiL_Model_PID_B.Uk1_k,           /* 69: Signal */
  &Blazer_MiL_Model_PID_B.Diff,            /* 70: Signal */
  &Blazer_MiL_Model_PID_B.TSamp,           /* 71: Signal */
  &Blazer_MiL_Model_PID_B.Uk1,             /* 72: Signal */
  &Blazer_MiL_Model_PID_B.Clock_j,         /* 73: Signal */
  &Blazer_MiL_Model_PID_B.Clock1,          /* 74: Signal */
  &Blazer_MiL_Model_PID_B.Clock2,          /* 75: Signal */
  &Blazer_MiL_Model_PID_B.Clock3,          /* 76: Signal */
  &Blazer_MiL_Model_PID_B.Clock4,          /* 77: Signal */
  &Blazer_MiL_Model_PID_B.Clock5_g,        /* 78: Signal */
  &Blazer_MiL_Model_PID_B.Clock6,          /* 79: Signal */
  &Blazer_MiL_Model_PID_B.Clock7,          /* 80: Signal */
  &Blazer_MiL_Model_PID_B.Clock8,          /* 81: Signal */
  &Blazer_MiL_Model_PID_B.Gain,            /* 82: Signal */
  &Blazer_MiL_Model_PID_B.MultiportSwitch5,/* 83: Signal */
  &Blazer_MiL_Model_PID_B.MultiportSwitch7,/* 84: Signal */
  &Blazer_MiL_Model_PID_B.Switch1_n,       /* 85: Signal */
  &Blazer_MiL_Model_PID_B.Switch2_n,       /* 86: Signal */
  &Blazer_MiL_Model_PID_B.Switch3_c,       /* 87: Signal */
  &Blazer_MiL_Model_PID_B.Switch4_g,       /* 88: Signal */
  &Blazer_MiL_Model_PID_B.Switch5_m,       /* 89: Signal */
  &Blazer_MiL_Model_PID_B.Switch6_c,       /* 90: Signal */
  &Blazer_MiL_Model_PID_B.Switch7_h,       /* 91: Signal */
  &Blazer_MiL_Model_PID_B.Switch8,         /* 92: Signal */
  &Blazer_MiL_Model_PID_B.Switch9,         /* 93: Signal */
  &Blazer_MiL_Model_PID_B.FromWs,          /* 94: Signal */
  &Blazer_MiL_Model_PID_P.Memory_InitialCondition,/* 95: Block Parameter */
  &Blazer_MiL_Model_PID_P.Memory1_InitialCondition,/* 96: Block Parameter */
  &Blazer_MiL_Model_PID_P.DiscreteDerivative1_ICPrevScaledInput,/* 97: Mask Parameter */
  &Blazer_MiL_Model_PID_P.DiscreteDerivative3_ICPrevScaledInput,/* 98: Mask Parameter */
  &Blazer_MiL_Model_PID_P.Gain_Gain_h,     /* 99: Block Parameter */
  &Blazer_MiL_Model_PID_P.Gain1_Gain,      /* 100: Block Parameter */
  &Blazer_MiL_Model_PID_P.mph2ms_Gain,     /* 101: Block Parameter */
  &Blazer_MiL_Model_PID_P.ABSAtv_Value,    /* 102: Block Parameter */
  &Blazer_MiL_Model_PID_P.APP_validity_Value,/* 103: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant1_Value, /* 104: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant10_Value,/* 105: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant11_Value,/* 106: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant12_Value,/* 107: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant13_Value,/* 108: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant14_Value,/* 109: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant15_Value,/* 110: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant16_Value,/* 111: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant17_Value,/* 112: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant18_Value,/* 113: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant19_Value,/* 114: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant2_Value, /* 115: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant20_Value,/* 116: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant21_Value,/* 117: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant22_Value,/* 118: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant23_Value,/* 119: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant24_Value,/* 120: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant25_Value,/* 121: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant26_Value,/* 122: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant27_Value,/* 123: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant28_Value,/* 124: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant29_Value,/* 125: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant3_Value, /* 126: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant4_Value, /* 127: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant5_Value, /* 128: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant6_Value, /* 129: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant7_Value, /* 130: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant8_Value, /* 131: Block Parameter */
  &Blazer_MiL_Model_PID_P.Constant9_Value, /* 132: Block Parameter */
  &Blazer_MiL_Model_PID_P.EngRunAtv_Value, /* 133: Block Parameter */
  &Blazer_MiL_Model_PID_P.HV_leakage_ena_Value,/* 134: Block Parameter */
  &Blazer_MiL_Model_PID_P.Hood_state_Value,/* 135: Block Parameter */
  &Blazer_MiL_Model_PID_P.Key_status_Value,/* 136: Block Parameter */
  &Blazer_MiL_Model_PID_P.StateMcu_Value,  /* 137: Block Parameter */
  &Blazer_MiL_Model_PID_P.StrWhAng_Value,  /* 138: Block Parameter */
  &Blazer_MiL_Model_PID_P.StrWhAngV_Value, /* 139: Block Parameter */
  &Blazer_MiL_Model_PID_P.ThermalIndicator_Value,/* 140: Block Parameter */
  &Blazer_MiL_Model_PID_P.TrnsShiftLvrPos_Value,/* 141: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_cpwr_cmd_Value,/* 142: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_cpwr_mon_Value,/* 143: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_ground_fault_Value,/* 144: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_hvil_mon_Value,/* 145: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_mainc_stat_Value,/* 146: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_ready_Value, /* 147: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_t_coolant_Value,/* 148: Block Parameter */
  &Blazer_MiL_Model_PID_P.bms_veh_mon_Value,/* 149: Block Parameter */
  &Blazer_MiL_Model_PID_P.Gain_Gain_g,     /* 150: Block Parameter */
  &Blazer_MiL_Model_PID_P.Gain1_Gain_h,    /* 151: Block Parameter */
  &Blazer_MiL_Model_PID_P.Gain2_Gain,      /* 152: Block Parameter */
  &Blazer_MiL_Model_PID_P.ms2kph_Gain,     /* 153: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch1_Threshold_c,/* 154: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch2_Threshold_o,/* 155: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch3_Threshold_j,/* 156: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch4_Threshold_h,/* 157: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch5_Threshold_n,/* 158: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch6_Threshold_j,/* 159: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch7_Threshold_l,/* 160: Block Parameter */
  &Blazer_MiL_Model_PID_P.A123Relay_Value, /* 161: Block Parameter */
  &Blazer_MiL_Model_PID_P.BMS12VRelay_Value,/* 162: Block Parameter */
  &Blazer_MiL_Model_PID_P.CAVPCMACCEnable_Value,/* 163: Block Parameter */
  &Blazer_MiL_Model_PID_P.DriveCycleSelection_Value,/* 164: Block Parameter */
  &Blazer_MiL_Model_PID_P.DriveCycleStartStop_Value,/* 165: Block Parameter */
  &Blazer_MiL_Model_PID_P.DriveCycleStop_Value,/* 166: Block Parameter */
  &Blazer_MiL_Model_PID_P.HVPumpRelay_Value,/* 167: Block Parameter */
  &Blazer_MiL_Model_PID_P.MCURelay_Value,  /* 168: Block Parameter */
  &Blazer_MiL_Model_PID_P.Off_Value,       /* 169: Block Parameter */
  &Blazer_MiL_Model_PID_P.MPH2MPS_Gain,    /* 170: Block Parameter */
  &Blazer_MiL_Model_PID_P.CAVsCity_tableData[0],/* 171: Block Parameter */
  &Blazer_MiL_Model_PID_P.CAVsCity_bp01Data[0],/* 172: Block Parameter */
  &Blazer_MiL_Model_PID_P.HWFET_tableData[0],/* 173: Block Parameter */
  &Blazer_MiL_Model_PID_P.HWFET_bp01Data[0],/* 174: Block Parameter */
  &Blazer_MiL_Model_PID_P.UDDS_tableData[0],/* 175: Block Parameter */
  &Blazer_MiL_Model_PID_P.UDDS_bp01Data[0],/* 176: Block Parameter */
  &Blazer_MiL_Model_PID_P.USO6_tableData[0],/* 177: Block Parameter */
  &Blazer_MiL_Model_PID_P.USO6_bp01Data[0],/* 178: Block Parameter */
  &Blazer_MiL_Model_PID_P.UTCycle_tableData[0],/* 179: Block Parameter */
  &Blazer_MiL_Model_PID_P.UTCycle_bp01Data[0],/* 180: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch_Threshold,/* 181: Block Parameter */
  &Blazer_MiL_Model_PID_P.BPPFaultSwitch_Value,/* 182: Block Parameter */
  &Blazer_MiL_Model_PID_P.BattTemp1_Value, /* 183: Block Parameter */
  &Blazer_MiL_Model_PID_P.BatteryOverheatFaultSwitch_Value,/* 184: Block Parameter */
  &Blazer_MiL_Model_PID_P.GFDFaultSwitch_Value,/* 185: Block Parameter */
  &Blazer_MiL_Model_PID_P.GFDleakageFaultSwitch_Value,/* 186: Block Parameter */
  &Blazer_MiL_Model_PID_P.GearFault_Value, /* 187: Block Parameter */
  &Blazer_MiL_Model_PID_P.GearFaultSwitch_Value,/* 188: Block Parameter */
  &Blazer_MiL_Model_PID_P.MCUOverheatFaultSwitch_Value,/* 189: Block Parameter */
  &Blazer_MiL_Model_PID_P.MCUOverheat_Value,/* 190: Block Parameter */
  &Blazer_MiL_Model_PID_P.MotrTrqEstFault_Value,/* 191: Block Parameter */
  &Blazer_MiL_Model_PID_P.MtrTrqEstFaultSwitch_Value,/* 192: Block Parameter */
  &Blazer_MiL_Model_PID_P.NewBPP_Value,    /* 193: Block Parameter */
  &Blazer_MiL_Model_PID_P.PwrTrainDirectionFaultSwitch_Value,/* 194: Block Parameter */
  &Blazer_MiL_Model_PID_P.TranshftLvrFaultSwitch_Value,/* 195: Block Parameter */
  &Blazer_MiL_Model_PID_P.TrnsPos_Value,   /* 196: Block Parameter */
  &Blazer_MiL_Model_PID_P.battGFD_Value,   /* 197: Block Parameter */
  &Blazer_MiL_Model_PID_P.leakageEna_Value,/* 198: Block Parameter */
  &Blazer_MiL_Model_PID_P.Gain_Gain,       /* 199: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch1_Threshold,/* 200: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch2_Threshold,/* 201: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch3_Threshold,/* 202: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch4_Threshold,/* 203: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch5_Threshold,/* 204: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch6_Threshold,/* 205: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch7_Threshold,/* 206: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch8_Threshold,/* 207: Block Parameter */
  &Blazer_MiL_Model_PID_P.Switch9_Threshold,/* 208: Block Parameter */
  &Blazer_MiL_Model_PID_DW.UD_DSTATE_j,    /* 209: Discrete State */
  &Blazer_MiL_Model_PID_DW.UD_DSTATE,      /* 210: Discrete State */
  rtP_ACC_Distance_Lookup,             /* 211: Model Parameter */
  rtP_ACC_Distance_Lookup_Direct_Distance,/* 212: Model Parameter */
  rtP_ACC_Distance_Lookup_Direct_DistanceV2,/* 213: Model Parameter */
  rtP_ACC_Far_Distance_Lookup_Direct,  /* 214: Model Parameter */
  rtP_ACC_Near_Distance_Lookup_Direct, /* 215: Model Parameter */
  rtP_ContinuousBatteryCharge_PID,         /* 216: Model Parameter */
  rtP_ContinuousBatteryDischarge_PID,      /* 217: Model Parameter */
  rtP_InterpBatteryCharge_PID,             /* 218: Model Parameter */
  rtP_InterpBatteryDischarge_PID,          /* 219: Model Parameter */
  rtP_New_Mass_Toque_Map_PID,              /* 220: Model Parameter */
  rtP_Reverse_APP_PID,                     /* 221: Model Parameter */
  rtP_Stoplight_distance_speed_only,   /* 222: Model Parameter */
  rtP_tandivide_PID,                       /* 223: Model Parameter */
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

  { "struct", "HSCInputs", 65, 1, sizeof(HSCInputs), SS_STRUCT, 0, 0, 0 },

  { "struct", "HSCOutputs", 75, 66, sizeof(HSCOutputs), SS_STRUCT, 0, 0, 0 },

  { "struct", "Fuelout", 2, 141, sizeof(Fuelout), SS_STRUCT, 0, 0, 0 },

  { "struct", "Scope", 14, 143, sizeof(Scope), SS_STRUCT, 0, 0, 0 }
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

  { "TransEstGear", rt_offsetof(HSCInputs, TransEstGear), 0, 0, 0 },

  { "ActualAxleTrq", rt_offsetof(HSCInputs, ActualAxleTrq), 0, 0, 0 },

  { "MotorShiftCompensation", rt_offsetof(HSCInputs, MotorShiftCompensation), 1,
    0, 0 },

  { "ACCModeRegenOn", rt_offsetof(HSCInputs, ACCModeRegenOn), 1, 0, 0 },

  { "MCU_thermal_indicator", rt_offsetof(HSCInputs, MCU_thermal_indicator), 0, 0,
    0 },

  { "ABSActive", rt_offsetof(HSCInputs, ABSActive), 1, 0, 0 },

  { "DirectDistanceLookupTableSwitch", rt_offsetof(HSCInputs,
    DirectDistanceLookupTableSwitch), 0, 0, 0 },

  { "SetSpeedLookupTableSwitch", rt_offsetof(HSCInputs,
    SetSpeedLookupTableSwitch), 1, 0, 0 },

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

  { "SetSpeedErrorMs", rt_offsetof(HSCOutputs, SetSpeedErrorMs), 0, 0, 0 },

  { "SetSpeedMs", rt_offsetof(HSCOutputs, SetSpeedMs), 0, 0, 0 },

  { "LiveDistanceToIntersection", rt_offsetof(HSCOutputs,
    LiveDistanceToIntersection), 0, 0, 0 },

  { "MustStop", rt_offsetof(HSCOutputs, MustStop), 1, 0, 0 },

  { "StoplightAccelMs2", rt_offsetof(HSCOutputs, StoplightAccelMs2), 0, 0, 0 },

  { "battery_overvoltage_fault", rt_offsetof(HSCOutputs,
    battery_overvoltage_fault), 1, 0, 0 },

  { "battery_undervoltage_fault", rt_offsetof(HSCOutputs,
    battery_undervoltage_fault), 1, 0, 0 },

  { "battery_over_discharge_fault", rt_offsetof(HSCOutputs,
    battery_over_discharge_fault), 1, 0, 0 },

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

  { rtwCAPI_MATRIX_COL_MAJOR, 16, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 18, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 20, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR_ND, 22, 3, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 25, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 27, 2, 0 },

  { rtwCAPI_VECTOR, 29, 2, 0 }
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
  17,                                  /* 14 */
  17,                                  /* 15 */
  22,                                  /* 16 */
  17,                                  /* 17 */
  23,                                  /* 18 */
  17,                                  /* 19 */
  10,                                  /* 20 */
  11,                                  /* 21 */
  10,                                  /* 22 */
  11,                                  /* 23 */
  2,                                   /* 24 */
  50,                                  /* 25 */
  17,                                  /* 26 */
  21,                                  /* 27 */
  16,                                  /* 28 */
  1,                                   /* 29 */
  1001                                 /* 30 */
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
  { rtBlockSignals, 95,
    rtRootInputs, 0,
    rtRootOutputs, 0 },

  { rtBlockParameters, 114,
    rtModelParameters, 13 },

  { rtBlockStates, 2 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4153980641U,
    1464843536U,
    984364920U,
    1008751184U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Blazer_MiL_Model_PID_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Blazer_MiL_Model_PID_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Blazer_MiL_Model_PID_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Blazer_MiL_Model_PID_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Blazer_MiL_Model_PID_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Blazer_MiL_Model_PID_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Blazer_MiL_Model_PID_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Blazer_MiL_Model_PID_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Blazer_MiL_Model_PID_M->DataMapInfo.mmi,
    Blazer_MiL_Model_PID_M->DataMapInfo.childMMI);
  rtwCAPI_SetChildMMIArrayLen(Blazer_MiL_Model_PID_M->DataMapInfo.mmi, 2);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Blazer_MiL_Model_PID_host_InitializeDataMapInfo
    (Blazer_MiL_Model_PID_host_DataMapInfo_T *dataMap, const char *path)
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
    PID_HSC_Model_host_InitializeDataMapInfo(&(dataMap->child0),
      "Blazer_MiL_Model_PID/Model");
    dataMap->childMMI[1] = &(dataMap->child1.mmi);
    Blazer_Plant_Model_host_InitializeDataMapInfo(&(dataMap->child1),
      "Blazer_MiL_Model_PID/Model1");
    rtwCAPI_SetChildMMIArray(dataMap->mmi, dataMap->childMMI);
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 2);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: Blazer_MiL_Model_PID_capi.c */

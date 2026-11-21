/*
 * SiEngineController_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "SiEngineController".
 *
 * Model version              : 1.656
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:34:08 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SiEngineController_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SiEngineController.h"
#include "SiEngineController_capi.h"
#include "SiEngineController_private.h"
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
  { 0, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Logical Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Logical Operator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Logical Operator2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 18, TARGET_STRING("SiEngineController/Start Stop Logic/Add"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 4, 16, TARGET_STRING("SiEngineController/Start Stop Logic/Add1"),
    TARGET_STRING("Time Since Start (TSS)"), 0, 1, 0, 0, 0 },

  { 5, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 6, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Switch3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 7, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 8, 20, TARGET_STRING("SiEngineController/Start Stop Logic/Unit Delay1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 9, 20, TARGET_STRING(
    "SiEngineController/Start Stop Logic/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 20, TARGET_STRING(
    "SiEngineController/Start Stop Logic/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 20, TARGET_STRING(
    "SiEngineController/Start Stop Logic/Compare To Constant2/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 9, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback"),
    TARGET_STRING("ClsdLpFuelMult"), 0, 1, 0, 0, 0 },

  { 13, 9, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 14, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Product"),
    TARGET_STRING("InjPw"), 0, 1, 0, 0, 0 },

  { 15, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Product1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 16, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 17, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/MinMax"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 18, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Rev Limiter Control/1-D Lookup Table"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 19, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Rev Limiter Control/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 20, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Rev Limiter Control/Product1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 21, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Rev Limiter Control/Relational Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 23, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/g//s to kg//s"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 24, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/EGR Percent Command"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 25, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Open EGR Valve Mass Flow Rate"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 26, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Divide"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 27, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Divide1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 28, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Divide2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 29, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Divide3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 30, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Product"),
    TARGET_STRING("EgrMassFlwCmd"), 0, 1, 0, 0, 0 },

  { 31, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Product1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 32, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 33, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Saturation1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 34, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/EGR Control/Temperature Correction"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 35, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Air/Throttle Position Control/Throttle Area Percent Feedforward"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 36, 9, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Calculate Front AFR Control Feedback"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 37, 9, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Calculate Front AFR Control Feedback"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 38, 10, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Gain1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 39, 10, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/AND"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 40, 10, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Relational Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 10, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Sum"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 42, 10, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Weighted Sample Time"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 43, 11, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/kg//s to g//s"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 44, 11, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/  "),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 45, 11, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/ 1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 46, 11, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Fuel Flow Rate"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 47, 11, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 48, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Fuel Cut"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 49, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/I Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 51, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/P Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 52, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 53, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 54, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Saturation1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 55, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Add"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 56, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Add1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 57, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Add2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 58, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 59, 13, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Weighted Sample Time Math"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 60, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/g//s to kg//s"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 61, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/EGR Corrected Mass Flow Rate"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 62, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Divide"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 63, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Divide1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 64, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Divide2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 65, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 66, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 67, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Add"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 68, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Temperature Correction"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 69, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/kg//s to g//s"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 70, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Intake Pressure Ratio"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 71, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Divide"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 72, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Divide1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 73, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Divide2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 74, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 75, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 76, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Saturation1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 77, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Temperature Correction"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 78, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Exhaust/Spark Ignition Exhaust/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 79, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Divide"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 80, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Divide1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 81, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 82, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 83, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 84, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Add"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 85, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Subtract"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 86, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Subtract1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 87, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Unit Delay1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 88, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Weighted Sample Time"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 89, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Ideal Gas Constant IVC Trapped Gas"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 90, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/g//s to kg//s"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 91, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Air Mass Flow Correction"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 92, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/IVC Volume vs ICP Calibration"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 93, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Ideal Mass Flow"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 94, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Trapped Mass Correction"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 95, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Calc Corrected  Air Mass Flow"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 96, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Calc Ideal Load"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 97, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Calc Load"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 98, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Cylinder Gas Density at IVC"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 99, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Cylinders per sec"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 100, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Final Trapped Gas Mass Flow Equivalent"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 101, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Nominal Cylinder Air Mass g//cyl"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 102, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Nominal Flow At Current Speed and STP"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 103, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 104, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Product1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 105, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 106, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 107, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 108, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 109, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 110, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Friction Temperature Factor"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 111, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Friction Torque Table"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 112, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Inner Torque Table"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 113, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Lambda Efficiency Table"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 114, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Optimal Spark Table"),
    TARGET_STRING("Optimal\nSpark Advance\nDegBTDC"), 0, 1, 0, 0, 0 },

  { 115, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Pumping Torque Table"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 116, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Spark Efficiency Table"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 117, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Divide"),
    TARGET_STRING("Lambda"), 0, 1, 0, 0, 0 },

  { 118, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Product"),
    TARGET_STRING("Indicated Torque"), 0, 1, 0, 0, 0 },

  { 119, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Product1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 120, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Product2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 121, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Product3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 122, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Product4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 123, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Saturation"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 124, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Sign"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 125, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Add"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 126, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Add1"),
    TARGET_STRING("Spark Retard From Optimal"), 0, 1, 0, 0, 0 },

  { 127, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Sum"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 128, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Injector Slope mg//ms"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 129, 11, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Stoichiometric AFR"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 130, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/ Optimal Lambda"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 131, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Sum"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 132, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Speed Blend"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 133, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Nominal Cylinder Air Mass g//cyl"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 134, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Nominal Cylinder Air Mass g//cyl1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 135, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Nominal Cylinder Air Mass g//cyl2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 136, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Sum"),
    TARGET_STRING("NrmlzdAirChrg"), 0, 1, 0, 0, 0 },

  { 137, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 138, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 139, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/1-D Lookup Table3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 140, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/Divide2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 141, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 142, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/Width"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 143, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 144, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 145, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 146, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 147, 15, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Fcn"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 148, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Logical Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 149, 15, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 150, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 151, 15, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Switch1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 152, 14, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Unary Minus"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 153, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/AFR calc"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 154, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/Fuel Flow Calc"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 155, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Data Type Conversion"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 156, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 157, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Gain"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 158, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/NOT"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 159, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Math Function"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 160, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 161, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Product1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 162, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Product2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 163, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Product4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 164, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 165, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 166, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Weighted Sample Time Math"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 167, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Startup Delta Lambda"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 168, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Startup Lambda Decay Time Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 169, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Sum5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 170, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 171, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 172, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 173, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 174, 2, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Fcn"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 175, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Logical Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 176, 2, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 177, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 178, 2, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Switch1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 179, 1, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Unary Minus"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 180, 4, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Fcn"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 181, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Logical Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 182, 4, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 183, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 184, 4, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Switch1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 185, 3, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Unary Minus"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 186, 6, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Fcn"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 187, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Logical Operator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 6, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Product"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 189, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 190, 6, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Switch1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 191, 5, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Unary Minus"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 192, 8, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 194, 21, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 197, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 198, 7, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 199, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("ClsdLpFuelEn"), 1, 0, 0 },

  { 200, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("OpenLpDitherEn"), 1, 0, 0 },

  { 201, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("N_idle"), 1, 0, 0 },

  { 202, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("Trq_idlecmd_enable"), 1, 0, 0 },

  { 203, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("Trq_idlecmd_max"), 1, 0, 0 },

  { 204, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("Kp_idle"), 1, 0, 0 },

  { 205, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("Ki_idle"), 1, 0, 0 },

  { 206, TARGET_STRING("SiEngineController/SI Controller"),
    TARGET_STRING("EngRevLim"), 1, 0, 0 },

  { 207, TARGET_STRING("SiEngineController/Start Stop Logic/Compare To Constant1"),
    TARGET_STRING("const"), 1, 0, 0 },

  { 208, TARGET_STRING("SiEngineController/Start Stop Logic/Constant1"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 209, TARGET_STRING("SiEngineController/Start Stop Logic/Constant2"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 210, TARGET_STRING("SiEngineController/Start Stop Logic/Constant4"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 211, TARGET_STRING("SiEngineController/SI Controller/Controllers/Rev Limiter Control/Constant1"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 212, TARGET_STRING("SiEngineController/SI Controller/Controllers/Rev Limiter Control/1-D Lookup Table"),
    TARGET_STRING("Table"), 1, 1, 0 },

  { 213, TARGET_STRING("SiEngineController/SI Controller/Controllers/Rev Limiter Control/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 1, 1, 0 },

  { 214, TARGET_STRING("SiEngineController/SI Controller/Controllers/Spark/Optimal Spark Advance"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 215, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 216, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/Cam Phaser Control/Optimal Exhaust Cam Phaser Retard"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 217, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/Cam Phaser Control/Optimal Intake Cam Phaser Advance"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 218, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/Gain"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 219, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/g//s to kg//s"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 220, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/EGR Percent Command"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 221, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/EGR Valve Area Percent"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 222, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 223, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 224, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/Saturation1"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 225, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/EGR Control/Saturation1"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 226, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/Load Command/Load Command From Torque Command At Current Engine Speed"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 227, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/Throttle Position Control/Throttle Area Percent Feedforward"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 228, TARGET_STRING("SiEngineController/SI Controller/Controllers/Air/Wastegate Control/Wastegate Area Percent Feedforward"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 229, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant1"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 230, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant10"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 231, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant12"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 232, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant13"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 233, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant14"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 234, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant15"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 235, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant16"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 236, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant19"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 237, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant2"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 238, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant3"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 239, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant4"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 240, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant5"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 241, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant6"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 242, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant7"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 243, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant8"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 244, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Constant9"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 245, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Gain1"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 246, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Weighted Sample Time"),
    TARGET_STRING("WtEt"), 1, 0, 0 },

  { 247, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 248, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/mg per g"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 249, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/sec per min"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 250, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/kg//s to g//s"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 251, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 252, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 253, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control/Fuel Cut"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 254, TARGET_STRING("SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/TrqCmd"),
    TARGET_STRING("InitialOutput"), 1, 0, 0 },

  { 255, TARGET_STRING("SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 256, TARGET_STRING("SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 257, TARGET_STRING("SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Saturation1"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 258, TARGET_STRING("SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 259, TARGET_STRING("SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Weighted Sample Time Math"),
    TARGET_STRING("WtEt"), 1, 0, 0 },

  { 260, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/g//s to kg//s"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 261, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/EGR Corrected Mass Flow Rate"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 262, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 263, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 264, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/kg//s to g//s"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 265, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 266, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 267, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Saturation1"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 268, TARGET_STRING("SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure/Saturation1"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 269, TARGET_STRING("SiEngineController/SI Controller/Estimators/Exhaust/Spark Ignition Exhaust/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 270, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 271, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation1"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 272, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation1"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 273, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation2"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 274, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation2"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 275, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation3"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 276, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Saturation3"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 277, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 278, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Weighted Sample Time"),
    TARGET_STRING("WtEt"), 1, 0, 0 },

  { 279, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/kg to g"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 280, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/sec per min"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 281, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/g//s to kg//s"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 282, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Air Mass Flow Correction"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 283, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Ideal Mass Flow"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 284, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Trapped Mass Correction"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 285, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 286, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 287, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation1"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 288, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation1"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 289, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation2"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 290, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation2"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 291, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation3"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 292, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation3"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 293, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation4"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 294, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Saturation4"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 295, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Friction Torque Table"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 296, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Inner Torque Table"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 297, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Optimal Spark Table"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 298, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Pumping Torque Table"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 299, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Saturation"),
    TARGET_STRING("UpperLimit"), 1, 0, 0 },

  { 300, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Saturation"),
    TARGET_STRING("LowerLimit"), 1, 0, 0 },

  { 301, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 302, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/ Optimal Lambda"),
    TARGET_STRING("maxIndex"), 2, 2, 0 },

  { 303, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 304, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Speed Blend"),
    TARGET_STRING("Table"), 1, 1, 0 },

  { 305, TARGET_STRING("SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load/Speed Blend"),
    TARGET_STRING("BreakpointsForDimension1"), 1, 1, 0 },

  { 306, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 307, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1"),
    TARGET_STRING("thresh"), 1, 0, 0 },

  { 308, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/1-D Lookup Table3"),
    TARGET_STRING("Table"), 1, 3, 0 },

  { 309, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/1-D Lookup Table3"),
    TARGET_STRING("BreakpointsForDimension1"), 1, 3, 0 },

  { 310, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 311, TARGET_STRING("SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Switch1"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 312, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly"),
    TARGET_STRING("thresh"), 1, 0, 0 },

  { 313, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/mg//ms to Kg//s"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 314, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/min to s"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 315, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1"),
    TARGET_STRING("thresh"), 1, 0, 0 },

  { 316, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Gain"),
    TARGET_STRING("Gain"), 1, 0, 0 },

  { 317, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 318, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Weighted Sample Time Math"),
    TARGET_STRING("WtEt"), 1, 0, 0 },

  { 319, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Constant2"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 320, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 321, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 322, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Switch1"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 323, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 324, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Switch1"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 325, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 326, TARGET_STRING("SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Switch1"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

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
  { 327, -1, TARGET_STRING("SiEngineController/Start Stop Logic/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 1, 0, 0, 0, 0, -1, 0 },

  { 328, -1, TARGET_STRING("SiEngineController/Start Stop Logic/Unit Delay1"),
    TARGET_STRING("DSTATE"), "", 0, 1, 0, 0, 0, 0, -1, 0 },

  { 329, -1, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 1, 0, 0, 0, 0, -1, 0 },

  { 330, -1, TARGET_STRING(
    "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Unit Delay1"),
    TARGET_STRING("DSTATE"), "", 0, 1, 0, 0, 0, 0, -1, 0 },

  { 331, -1, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 1, 0, 0, 0, 0, -1, 0 },

  { 332, -1, TARGET_STRING(
    "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 1, 0, 0, 0, 0, -1, 0 },

  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 333, TARGET_STRING("CatLightOffTime"), 1, 0, 0 },

  { 334, TARGET_STRING("Cps"), 1, 0, 0 },

  { 335, TARGET_STRING("CrankSpeed"), 1, 0, 0 },

  { 336, TARGET_STRING("EngStopTime"), 1, 0, 0 },

  { 337, TARGET_STRING("NCyl"), 1, 0, 0 },

  { 338, TARGET_STRING("Pstd"), 1, 0, 0 },

  { 339, TARGET_STRING("Rair"), 1, 0, 0 },

  { 340, TARGET_STRING("Sinj"), 1, 0, 0 },

  { 341, TARGET_STRING("Ts"), 1, 0, 0 },

  { 342, TARGET_STRING("Tstd"), 1, 0, 0 },

  { 343, TARGET_STRING("Vd"), 1, 0, 0 },

  { 344, TARGET_STRING("afr_stoich"), 1, 0, 0 },

  { 345, TARGET_STRING("f_cp_ld_bpt"), 1, 4, 0 },

  { 346, TARGET_STRING("f_cp_n_bpt"), 1, 5, 0 },

  { 347, TARGET_STRING("f_del_sa_bpt"), 1, 6, 0 },

  { 348, TARGET_STRING("f_ecp"), 1, 7, 0 },

  { 349, TARGET_STRING("f_egr_areapct_cmd"), 1, 8, 0 },

  { 350, TARGET_STRING("f_egr_areapct_nrmlzdflow_bpt"), 1, 9, 0 },

  { 351, TARGET_STRING("f_egr_areapct_pr_bpt"), 1, 10, 0 },

  { 352, TARGET_STRING("f_egr_max_stdflow"), 1, 11, 0 },

  { 353, TARGET_STRING("f_egr_stdflow"), 1, 12, 0 },

  { 354, TARGET_STRING("f_egr_stdflow_egrap_bpt"), 1, 13, 0 },

  { 355, TARGET_STRING("f_egr_stdflow_pr_bpt"), 1, 10, 0 },

  { 356, TARGET_STRING("f_egrpct_cmd"), 1, 7, 0 },

  { 357, TARGET_STRING("f_egrpct_ld_bpt"), 1, 4, 0 },

  { 358, TARGET_STRING("f_egrpct_n_bpt"), 1, 5, 0 },

  { 359, TARGET_STRING("f_fric_temp_bpt"), 1, 14, 0 },

  { 360, TARGET_STRING("f_fric_temp_mod"), 1, 14, 0 },

  { 361, TARGET_STRING("f_icp"), 1, 7, 0 },

  { 362, TARGET_STRING("f_intksys_stdflow_bpt"), 1, 11, 0 },

  { 363, TARGET_STRING("f_intksys_stdflow_pr"), 1, 11, 0 },

  { 364, TARGET_STRING("f_lamcmd"), 1, 7, 0 },

  { 365, TARGET_STRING("f_lamcmd_ld_bpt"), 1, 4, 0 },

  { 366, TARGET_STRING("f_lamcmd_n_bpt"), 1, 5, 0 },

  { 367, TARGET_STRING("f_lcmd"), 1, 15, 0 },

  { 368, TARGET_STRING("f_lcmd_n_bpt"), 1, 5, 0 },

  { 369, TARGET_STRING("f_lcmd_tq_bpt"), 1, 16, 0 },

  { 370, TARGET_STRING("f_m_lam"), 1, 17, 0 },

  { 371, TARGET_STRING("f_m_lam_bpt"), 1, 17, 0 },

  { 372, TARGET_STRING("f_m_sa"), 1, 6, 0 },

  { 373, TARGET_STRING("f_mdot_air_corr"), 1, 18, 0 },

  { 374, TARGET_STRING("f_mdot_air_corr_ld_bpt"), 1, 11, 0 },

  { 375, TARGET_STRING("f_mdot_air_n_bpt"), 1, 11, 0 },

  { 376, TARGET_STRING("f_mdot_intk"), 1, 18, 0 },

  { 377, TARGET_STRING("f_mdot_intk_ecp_bpt"), 1, 11, 0 },

  { 378, TARGET_STRING("f_mdot_trpd_bpt"), 1, 11, 0 },

  { 379, TARGET_STRING("f_sa"), 1, 7, 0 },

  { 380, TARGET_STRING("f_sa_ld_bpt"), 1, 4, 0 },

  { 381, TARGET_STRING("f_sa_n_bpt"), 1, 5, 0 },

  { 382, TARGET_STRING("f_sa_opt"), 1, 19, 0 },

  { 383, TARGET_STRING("f_startup_ect_bpt"), 1, 20, 0 },

  { 384, TARGET_STRING("f_startup_lambda_delta"), 1, 20, 0 },

  { 385, TARGET_STRING("f_startup_lambda_delta_timecnst"), 1, 20, 0 },

  { 386, TARGET_STRING("f_t_exh"), 1, 19, 0 },

  { 387, TARGET_STRING("f_t_exh_l_bpt"), 1, 5, 0 },

  { 388, TARGET_STRING("f_t_exh_n_bpt"), 1, 5, 0 },

  { 389, TARGET_STRING("f_tap"), 1, 15, 0 },

  { 390, TARGET_STRING("f_tap_ld_bpt"), 1, 16, 0 },

  { 391, TARGET_STRING("f_tap_n_bpt"), 1, 5, 0 },

  { 392, TARGET_STRING("f_tm_corr"), 1, 18, 0 },

  { 393, TARGET_STRING("f_tm_corr_n_bpt"), 1, 11, 0 },

  { 394, TARGET_STRING("f_tm_corr_nd_bpt"), 1, 11, 0 },

  { 395, TARGET_STRING("f_tpp"), 1, 1, 0 },

  { 396, TARGET_STRING("f_tpp_tap_bpt"), 1, 1, 0 },

  { 397, TARGET_STRING("f_tq_fric"), 1, 19, 0 },

  { 398, TARGET_STRING("f_tq_inr"), 1, 19, 0 },

  { 399, TARGET_STRING("f_tq_inr_l_bpt"), 1, 5, 0 },

  { 400, TARGET_STRING("f_tq_inr_n_bpt"), 1, 5, 0 },

  { 401, TARGET_STRING("f_tq_pump"), 1, 19, 0 },

  { 402, TARGET_STRING("f_vivc"), 1, 11, 0 },

  { 403, TARGET_STRING("f_vivc_icp_bpt"), 1, 11, 0 },

  { 404, TARGET_STRING("f_wap"), 1, 15, 0 },

  { 405, TARGET_STRING("f_wap_ld_bpt"), 1, 16, 0 },

  { 406, TARGET_STRING("f_wap_n_bpt"), 1, 5, 0 },

  { 407, TARGET_STRING("tau_egr"), 1, 0, 0 },

  { 408, TARGET_STRING("EngStopStartEnable"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void SiEngineController_InitializeDataAddr(void* dataAddr[],
  B_SiEngineController_c_T *localB, DW_SiEngineController_f_T *localDW)
{
  dataAddr[0] = (void*) (&localB->LogicalOperator_oq);
  dataAddr[1] = (void*) (&localB->LogicalOperator1);
  dataAddr[2] = (void*) (&localB->LogicalOperator2);
  dataAddr[3] = (void*) (&localB->Add_o);
  dataAddr[4] = (void*) (&localB->TimeSinceStartTSS);
  dataAddr[5] = (void*) (&localB->Switch_d);
  dataAddr[6] = (void*) (&localB->Switch3);
  dataAddr[7] = (void*) (&localB->UnitDelay);
  dataAddr[8] = (void*) (&localB->UnitDelay1_c);
  dataAddr[9] = (void*) (&localB->Compare_p);
  dataAddr[10] = (void*) (&localB->Compare_m);
  dataAddr[11] = (void*) (&localB->Compare_lj);
  dataAddr[12] = (void*) (&localB->ClsdLpFuelMult);
  dataAddr[13] = (void*) (&localB->ClsdLpFuelIntgBias);
  dataAddr[14] = (void*) (&localB->InjPw);
  dataAddr[15] = (void*) (&localB->Product1_e);
  dataAddr[16] = (void*) (&localB->Saturation1_j0);
  dataAddr[17] = (void*) (&localB->MinMax);
  dataAddr[18] = (void*) (&localB->uDLookupTable);
  dataAddr[19] = (void*) (&localB->Product_g);
  dataAddr[20] = (void*) (&localB->Product1_k);
  dataAddr[21] = (void*) (&localB->RelationalOperator);
  dataAddr[22] = (void*) (&localB->Gain);
  dataAddr[23] = (void*) (&localB->gstokgs_g);
  dataAddr[24] = (void*) (&localB->EGRPercentCommand);
  dataAddr[25] = (void*) (&localB->OpenEGRValveMassFlowRate);
  dataAddr[26] = (void*) (&localB->Divide);
  dataAddr[27] = (void*) (&localB->Divide1_o);
  dataAddr[28] = (void*) (&localB->Divide2_d);
  dataAddr[29] = (void*) (&localB->Divide3);
  dataAddr[30] = (void*) (&localB->EgrMassFlwCmd);
  dataAddr[31] = (void*) (&localB->Product1_m);
  dataAddr[32] = (void*) (&localB->Saturation_j);
  dataAddr[33] = (void*) (&localB->Saturation1_c);
  dataAddr[34] = (void*) (&localB->TemperatureCorrection_d);
  dataAddr[35] = (void*) (&localB->ThrottleAreaPercentFeedforward);
  dataAddr[36] = (void*) (&localB->ClsdLpFuelMult);
  dataAddr[37] = (void*) (&localB->ClsdLpFuelIntgBias);
  dataAddr[38] = (void*) (&localB->Gain1);
  dataAddr[39] = (void*) (&localB->AND);
  dataAddr[40] = (void*) (&localB->RelationalOperator_j);
  dataAddr[41] = (void*) (&localB->Sum_l);
  dataAddr[42] = (void*) (&localB->WeightedSampleTime_l);
  dataAddr[43] = (void*) (&localB->kgstogs_e);
  dataAddr[44] = (void*) (&localB->u_p);
  dataAddr[45] = (void*) (&localB->u);
  dataAddr[46] = (void*) (&localB->FuelFlowRate);
  dataAddr[47] = (void*) (&localB->Saturation_p);
  dataAddr[48] = (void*) (&localB->FuelCut);
  dataAddr[49] = (void*) (&localB->Compare);
  dataAddr[50] = (void*) (&localB->IGain);
  dataAddr[51] = (void*) (&localB->PGain);
  dataAddr[52] = (void*) (&localB->Product_m);
  dataAddr[53] = (void*) (&localB->Saturation_a);
  dataAddr[54] = (void*) (&localB->Saturation1_j0);
  dataAddr[55] = (void*) (&localB->Add_d);
  dataAddr[56] = (void*) (&localB->Add1);
  dataAddr[57] = (void*) (&localB->Add2);
  dataAddr[58] = (void*) (&localB->UnitDelay_g);
  dataAddr[59] = (void*) (&localB->WeightedSampleTimeMath);
  dataAddr[60] = (void*) (&localB->gstokgs_e);
  dataAddr[61] = (void*) (&localB->EGRCorrectedMassFlowRate);
  dataAddr[62] = (void*) (&localB->Divide_j);
  dataAddr[63] = (void*) (&localB->Divide1_c);
  dataAddr[64] = (void*) (&localB->Divide2_c);
  dataAddr[65] = (void*) (&localB->Product_hg);
  dataAddr[66] = (void*) (&localB->Saturation_o);
  dataAddr[67] = (void*) (&localB->Add);
  dataAddr[68] = (void*) (&localB->TemperatureCorrection_n);
  dataAddr[69] = (void*) (&localB->kgstogs);
  dataAddr[70] = (void*) (&localB->IntakePressureRatio);
  dataAddr[71] = (void*) (&localB->Divide_k);
  dataAddr[72] = (void*) (&localB->Divide1);
  dataAddr[73] = (void*) (&localB->Divide2);
  dataAddr[74] = (void*) (&localB->Product_h);
  dataAddr[75] = (void*) (&localB->Saturation_i);
  dataAddr[76] = (void*) (&localB->Saturation1_j);
  dataAddr[77] = (void*) (&localB->TemperatureCorrection);
  dataAddr[78] = (void*)
    (&localB->ExhaustTemperatureatNominalPhaserPositionsAFRSparkAdvance);
  dataAddr[79] = (void*) (&localB->Divide_jz);
  dataAddr[80] = (void*) (&localB->Divide1_f);
  dataAddr[81] = (void*) (&localB->Saturation1_f);
  dataAddr[82] = (void*) (&localB->Saturation2_d);
  dataAddr[83] = (void*) (&localB->Saturation3);
  dataAddr[84] = (void*) (&localB->Add_k);
  dataAddr[85] = (void*) (&localB->Subtract);
  dataAddr[86] = (void*) (&localB->Subtract1);
  dataAddr[87] = (void*) (&localB->UnitDelay1);
  dataAddr[88] = (void*) (&localB->WeightedSampleTime);
  dataAddr[89] = (void*) (&localB->IdealGasConstantIVCTrappedGas);
  dataAddr[90] = (void*) (&localB->gstokgs);
  dataAddr[91] = (void*) (&localB->AirMassFlowCorrection);
  dataAddr[92] = (void*) (&localB->IVCVolumevsICPCalibration);
  dataAddr[93] = (void*) (&localB->IdealMassFlow);
  dataAddr[94] = (void*) (&localB->TrappedMassCorrection);
  dataAddr[95] = (void*) (&localB->CalcCorrectedAirMassFlow);
  dataAddr[96] = (void*) (&localB->CalcIdealLoad);
  dataAddr[97] = (void*) (&localB->CalcLoad);
  dataAddr[98] = (void*) (&localB->CylinderGasDensityatIVC);
  dataAddr[99] = (void*) (&localB->Cylinderspersec);
  dataAddr[100] = (void*) (&localB->FinalTrappedGasMassFlowEquivalent);
  dataAddr[101] = (void*) (&localB->NominalCylinderAirMassgcyl);
  dataAddr[102] = (void*) (&localB->NominalFlowAtCurrentSpeedandSTP);
  dataAddr[103] = (void*) (&localB->Product);
  dataAddr[104] = (void*) (&localB->Product1);
  dataAddr[105] = (void*) (&localB->Saturation);
  dataAddr[106] = (void*) (&localB->Saturation1);
  dataAddr[107] = (void*) (&localB->Saturation2);
  dataAddr[108] = (void*) (&localB->Saturation3_k);
  dataAddr[109] = (void*) (&localB->Saturation4);
  dataAddr[110] = (void*) (&localB->FrictionTemperatureFactor);
  dataAddr[111] = (void*) (&localB->FrictionTorqueTable);
  dataAddr[112] = (void*) (&localB->InnerTorqueTable);
  dataAddr[113] = (void*) (&localB->LambdaEfficiencyTable);
  dataAddr[114] = (void*) (&localB->OptimalSparkAdvanceDegBTDC);
  dataAddr[115] = (void*) (&localB->PumpingTorqueTable);
  dataAddr[116] = (void*) (&localB->SparkEfficiencyTable);
  dataAddr[117] = (void*) (&localB->Lambda);
  dataAddr[118] = (void*) (&localB->IndicatedTorque);
  dataAddr[119] = (void*) (&localB->Product1_j);
  dataAddr[120] = (void*) (&localB->Product2);
  dataAddr[121] = (void*) (&localB->Product3);
  dataAddr[122] = (void*) (&localB->Product4);
  dataAddr[123] = (void*) (&localB->Saturation_f);
  dataAddr[124] = (void*) (&localB->Sign);
  dataAddr[125] = (void*) (&localB->Add_b);
  dataAddr[126] = (void*) (&localB->SparkRetardFromOptimal);
  dataAddr[127] = (void*) (&localB->Sum_f);
  dataAddr[128] = (void*) (&localB->InjectorSlopemgms);
  dataAddr[129] = (void*) (&localB->StoichiometricAFR);
  dataAddr[130] = (void*) (&localB->OptimalLambda);
  dataAddr[131] = (void*) (&localB->Sum);
  dataAddr[132] = (void*) (&localB->SpeedBlend);
  dataAddr[133] = (void*) (&localB->NominalCylinderAirMassgcyl_f);
  dataAddr[134] = (void*) (&localB->NominalCylinderAirMassgcyl1);
  dataAddr[135] = (void*) (&localB->NominalCylinderAirMassgcyl2);
  dataAddr[136] = (void*) (&localB->NrmlzdAirChrg);
  dataAddr[137] = (void*) (&localB->Sum1);
  dataAddr[138] = (void*) (&localB->Compare_a);
  dataAddr[139] = (void*) (&localB->uDLookupTable3);
  dataAddr[140] = (void*) (&localB->Divide2_m);
  dataAddr[141] = (void*) (&localB->Sum1_i);
  dataAddr[142] = (void*) (&SiEngineController_ConstB.Width);
  dataAddr[143] = (void*) (&localB->Sum1_h);
  dataAddr[144] = (void*) (&localB->StartupDeltaLambda);
  dataAddr[145] = (void*) (&localB->StartupLambdaDecayTimeConstant);
  dataAddr[146] = (void*) (&localB->Compare_g2);
  dataAddr[147] = (void*) (&localB->Fcn);
  dataAddr[148] = (void*) (&localB->LogicalOperator_o);
  dataAddr[149] = (void*) (&localB->Product_i);
  dataAddr[150] = (void*) (&localB->Switch_n);
  dataAddr[151] = (void*) (&localB->Switch1);
  dataAddr[152] = (void*) (&localB->UnaryMinus);
  dataAddr[153] = (void*) (&localB->AFRcalc);
  dataAddr[154] = (void*) (&localB->FuelFlowCalc);
  dataAddr[155] = (void*) (&localB->DataTypeConversion);
  dataAddr[156] = (void*) (&localB->DataTypeConversion1);
  dataAddr[157] = (void*) (&localB->Gain_g);
  dataAddr[158] = (void*) (&localB->NOT);
  dataAddr[159] = (void*) (&localB->MathFunction);
  dataAddr[160] = (void*) (&localB->Product_n);
  dataAddr[161] = (void*) (&localB->Product1_c);
  dataAddr[162] = (void*) (&localB->Product2_p);
  dataAddr[163] = (void*) (&localB->Product4_k);
  dataAddr[164] = (void*) (&localB->Sum1_h);
  dataAddr[165] = (void*) (&localB->UnitDelay_b);
  dataAddr[166] = (void*) (&localB->WeightedSampleTimeMath_n);
  dataAddr[167] = (void*) (&localB->StartupDeltaLambda);
  dataAddr[168] = (void*) (&localB->StartupLambdaDecayTimeConstant);
  dataAddr[169] = (void*) (&localB->Sum5);
  dataAddr[170] = (void*) (&localB->Switch_c);
  dataAddr[171] = (void*) (&localB->UnitDelay_gu);
  dataAddr[172] = (void*) (&localB->Compare_d);
  dataAddr[173] = (void*) (&localB->Compare_o);
  dataAddr[174] = (void*) (&localB->Fcn_e);
  dataAddr[175] = (void*) (&localB->LogicalOperator);
  dataAddr[176] = (void*) (&localB->Product_e);
  dataAddr[177] = (void*) (&localB->Switch);
  dataAddr[178] = (void*) (&localB->Switch1_m);
  dataAddr[179] = (void*) (&localB->UnaryMinus_k);
  dataAddr[180] = (void*) (&localB->Fcn_g);
  dataAddr[181] = (void*) (&localB->LogicalOperator_m);
  dataAddr[182] = (void*) (&localB->Product_h4);
  dataAddr[183] = (void*) (&localB->Switch_f);
  dataAddr[184] = (void*) (&localB->Switch1_j);
  dataAddr[185] = (void*) (&localB->UnaryMinus_a);
  dataAddr[186] = (void*) (&localB->Fcn_c);
  dataAddr[187] = (void*) (&localB->LogicalOperator_e);
  dataAddr[188] = (void*) (&localB->Product_mv);
  dataAddr[189] = (void*) (&localB->Switch_l);
  dataAddr[190] = (void*) (&localB->Switch1_o);
  dataAddr[191] = (void*) (&localB->UnaryMinus_n);
  dataAddr[192] = (void*) (&localB->Compare_g2);
  dataAddr[193] = (void*) (&localB->Compare_g);
  dataAddr[194] = (void*) (&localB->Compare_l);
  dataAddr[195] = (void*) (&localB->Compare_n);
  dataAddr[196] = (void*) (&localB->Compare_oq);
  dataAddr[197] = (void*) (&localB->Compare_l0);
  dataAddr[198] = (void*) (&localB->Compare_mi);
  dataAddr[199] = (void*) (&SiEngineController_P.SIController_ClsdLpFuelEn);
  dataAddr[200] = (void*) (&SiEngineController_P.SIController_OpenLpDitherEn);
  dataAddr[201] = (void*) (&SiEngineController_P.SIController_N_idle);
  dataAddr[202] = (void*) (&SiEngineController_P.SIController_Trq_idlecmd_enable);
  dataAddr[203] = (void*) (&SiEngineController_P.SIController_Trq_idlecmd_max);
  dataAddr[204] = (void*) (&SiEngineController_P.SIController_Kp_idle);
  dataAddr[205] = (void*) (&SiEngineController_P.SIController_Ki_idle);
  dataAddr[206] = (void*) (&SiEngineController_P.SIController_EngRevLim);
  dataAddr[207] = (void*) (&SiEngineController_P.CompareToConstant1_const);
  dataAddr[208] = (void*) (&SiEngineController_P.Constant1_Value_l);
  dataAddr[209] = (void*) (&SiEngineController_P.Constant2_Value_m);
  dataAddr[210] = (void*) (&SiEngineController_P.Constant4_Value_n);
  dataAddr[211] = (void*) (&SiEngineController_P.Constant1_Value_c);
  dataAddr[212] = (void*) (&SiEngineController_P.uDLookupTable_tableData[0]);
  dataAddr[213] = (void*) (&SiEngineController_P.uDLookupTable_bp01Data[0]);
  dataAddr[214] = (void*) (&SiEngineController_P.OptimalSparkAdvance_maxIndex[0]);
  dataAddr[215] = (void*) (&SiEngineController_P.Constant_Value_l);
  dataAddr[216] = (void*)
    (&SiEngineController_P.OptimalExhaustCamPhaserRetard_maxIndex[0]);
  dataAddr[217] = (void*)
    (&SiEngineController_P.OptimalIntakeCamPhaserAdvance_maxIndex[0]);
  dataAddr[218] = (void*) (&SiEngineController_P.Gain_Gain_p);
  dataAddr[219] = (void*) (&SiEngineController_P.gstokgs_Gain_j);
  dataAddr[220] = (void*) (&SiEngineController_P.EGRPercentCommand_maxIndex[0]);
  dataAddr[221] = (void*) (&SiEngineController_P.EGRValveAreaPercent_maxIndex[0]);
  dataAddr[222] = (void*) (&SiEngineController_P.Saturation_UpperSat_i);
  dataAddr[223] = (void*) (&SiEngineController_P.Saturation_LowerSat_g0);
  dataAddr[224] = (void*) (&SiEngineController_P.Saturation1_UpperSat_b);
  dataAddr[225] = (void*) (&SiEngineController_P.Saturation1_LowerSat_i);
  dataAddr[226] = (void*)
    (&SiEngineController_P.LoadCommandFromTorqueCommandAtCurrentEngineSpeed_maxIndex
     [0]);
  dataAddr[227] = (void*)
    (&SiEngineController_P.ThrottleAreaPercentFeedforward_maxIndex[0]);
  dataAddr[228] = (void*)
    (&SiEngineController_P.WastegateAreaPercentFeedforward_maxIndex[0]);
  dataAddr[229] = (void*) (&SiEngineController_P.Constant1_Value);
  dataAddr[230] = (void*) (&SiEngineController_P.Constant10_Value);
  dataAddr[231] = (void*) (&SiEngineController_P.Constant12_Value);
  dataAddr[232] = (void*) (&SiEngineController_P.Constant13_Value);
  dataAddr[233] = (void*) (&SiEngineController_P.Constant14_Value);
  dataAddr[234] = (void*) (&SiEngineController_P.Constant15_Value);
  dataAddr[235] = (void*) (&SiEngineController_P.Constant16_Value);
  dataAddr[236] = (void*) (&SiEngineController_P.Constant19_Value);
  dataAddr[237] = (void*) (&SiEngineController_P.Constant2_Value_e);
  dataAddr[238] = (void*) (&SiEngineController_P.Constant3_Value);
  dataAddr[239] = (void*) (&SiEngineController_P.Constant4_Value);
  dataAddr[240] = (void*) (&SiEngineController_P.Constant5_Value);
  dataAddr[241] = (void*) (&SiEngineController_P.Constant6_Value);
  dataAddr[242] = (void*) (&SiEngineController_P.Constant7_Value);
  dataAddr[243] = (void*) (&SiEngineController_P.Constant8_Value);
  dataAddr[244] = (void*) (&SiEngineController_P.Constant9_Value);
  dataAddr[245] = (void*) (&SiEngineController_P.Gain1_Gain);
  dataAddr[246] = (void*) (&SiEngineController_P.WeightedSampleTime_WtEt);
  dataAddr[247] = (void*) (&SiEngineController_P.Constant_Value_hu);
  dataAddr[248] = (void*) (&SiEngineController_P.mgperg_Value);
  dataAddr[249] = (void*) (&SiEngineController_P.secpermin_Value);
  dataAddr[250] = (void*) (&SiEngineController_P.kgstogs_Gain);
  dataAddr[251] = (void*) (&SiEngineController_P.Saturation_UpperSat);
  dataAddr[252] = (void*) (&SiEngineController_P.Saturation_LowerSat);
  dataAddr[253] = (void*) (&SiEngineController_P.FuelCut_Threshold);
  dataAddr[254] = (void*) (&SiEngineController_P.TrqCmd_Y0);
  dataAddr[255] = (void*) (&SiEngineController_P.Constant_Value_k);
  dataAddr[256] = (void*) (&SiEngineController_P.Saturation_LowerSat_l);
  dataAddr[257] = (void*) (&SiEngineController_P.Saturation1_LowerSat);
  dataAddr[258] = (void*) (&SiEngineController_P.UnitDelay_InitialCondition_a);
  dataAddr[259] = (void*) (&SiEngineController_P.WeightedSampleTimeMath_WtEt_m);
  dataAddr[260] = (void*) (&SiEngineController_P.gstokgs_Gain_d);
  dataAddr[261] = (void*)
    (&SiEngineController_P.EGRCorrectedMassFlowRate_maxIndex[0]);
  dataAddr[262] = (void*) (&SiEngineController_P.Saturation_UpperSat_n);
  dataAddr[263] = (void*) (&SiEngineController_P.Saturation_LowerSat_bn);
  dataAddr[264] = (void*) (&SiEngineController_P.kgstogs_Gain_d);
  dataAddr[265] = (void*) (&SiEngineController_P.Saturation_UpperSat_k);
  dataAddr[266] = (void*) (&SiEngineController_P.Saturation_LowerSat_b);
  dataAddr[267] = (void*) (&SiEngineController_P.Saturation1_UpperSat_h);
  dataAddr[268] = (void*) (&SiEngineController_P.Saturation1_LowerSat_h);
  dataAddr[269] = (void*)
    (&SiEngineController_P.ExhaustTemperatureatNominalPhaserPositionsAFRSparkAdvance_maxInd
     [0]);
  dataAddr[270] = (void*) (&SiEngineController_P.Constant_Value_o);
  dataAddr[271] = (void*) (&SiEngineController_P.Saturation1_UpperSat_k);
  dataAddr[272] = (void*) (&SiEngineController_P.Saturation1_LowerSat_hg);
  dataAddr[273] = (void*) (&SiEngineController_P.Saturation2_UpperSat_i);
  dataAddr[274] = (void*) (&SiEngineController_P.Saturation2_LowerSat_n);
  dataAddr[275] = (void*) (&SiEngineController_P.Saturation3_UpperSat);
  dataAddr[276] = (void*) (&SiEngineController_P.Saturation3_LowerSat);
  dataAddr[277] = (void*) (&SiEngineController_P.UnitDelay1_InitialCondition);
  dataAddr[278] = (void*) (&SiEngineController_P.WeightedSampleTime_WtEt_p);
  dataAddr[279] = (void*) (&SiEngineController_P.kgtog_Value);
  dataAddr[280] = (void*) (&SiEngineController_P.secpermin_Value_a);
  dataAddr[281] = (void*) (&SiEngineController_P.gstokgs_Gain);
  dataAddr[282] = (void*) (&SiEngineController_P.AirMassFlowCorrection_maxIndex
    [0]);
  dataAddr[283] = (void*) (&SiEngineController_P.IdealMassFlow_maxIndex[0]);
  dataAddr[284] = (void*) (&SiEngineController_P.TrappedMassCorrection_maxIndex
    [0]);
  dataAddr[285] = (void*) (&SiEngineController_P.Saturation_UpperSat_c);
  dataAddr[286] = (void*) (&SiEngineController_P.Saturation_LowerSat_g);
  dataAddr[287] = (void*) (&SiEngineController_P.Saturation1_UpperSat);
  dataAddr[288] = (void*) (&SiEngineController_P.Saturation1_LowerSat_a);
  dataAddr[289] = (void*) (&SiEngineController_P.Saturation2_UpperSat);
  dataAddr[290] = (void*) (&SiEngineController_P.Saturation2_LowerSat);
  dataAddr[291] = (void*) (&SiEngineController_P.Saturation3_UpperSat_n);
  dataAddr[292] = (void*) (&SiEngineController_P.Saturation3_LowerSat_g);
  dataAddr[293] = (void*) (&SiEngineController_P.Saturation4_UpperSat);
  dataAddr[294] = (void*) (&SiEngineController_P.Saturation4_LowerSat);
  dataAddr[295] = (void*) (&SiEngineController_P.FrictionTorqueTable_maxIndex[0]);
  dataAddr[296] = (void*) (&SiEngineController_P.InnerTorqueTable_maxIndex[0]);
  dataAddr[297] = (void*) (&SiEngineController_P.OptimalSparkTable_maxIndex[0]);
  dataAddr[298] = (void*) (&SiEngineController_P.PumpingTorqueTable_maxIndex[0]);
  dataAddr[299] = (void*) (&SiEngineController_P.Saturation_UpperSat_l);
  dataAddr[300] = (void*) (&SiEngineController_P.Saturation_LowerSat_k);
  dataAddr[301] = (void*) (&SiEngineController_P.Constant_Value_i);
  dataAddr[302] = (void*) (&SiEngineController_P.OptimalLambda_maxIndex[0]);
  dataAddr[303] = (void*) (&SiEngineController_P.Constant_Value_oj);
  dataAddr[304] = (void*) (&SiEngineController_P.SpeedBlend_tableData[0]);
  dataAddr[305] = (void*) (&SiEngineController_P.SpeedBlend_bp01Data[0]);
  dataAddr[306] = (void*) (&SiEngineController_P.Constant_Value_m);
  dataAddr[307] = (void*) (&SiEngineController_P.div0protectpoly1_thresh_o);
  dataAddr[308] = (void*) (&SiEngineController_P.uDLookupTable3_tableData[0]);
  dataAddr[309] = (void*) (&SiEngineController_P.uDLookupTable3_bp01Data[0]);
  dataAddr[310] = (void*) (&SiEngineController_P.Constant_Value_e);
  dataAddr[311] = (void*) (&SiEngineController_P.Switch1_Threshold_j);
  dataAddr[312] = (void*) (&SiEngineController_P.div0protectpoly_thresh);
  dataAddr[313] = (void*) (&SiEngineController_P.mgmstoKgs_Value);
  dataAddr[314] = (void*) (&SiEngineController_P.mintos_Value);
  dataAddr[315] = (void*) (&SiEngineController_P.div0protectpoly1_thresh);
  dataAddr[316] = (void*) (&SiEngineController_P.Gain_Gain);
  dataAddr[317] = (void*) (&SiEngineController_P.UnitDelay_InitialCondition);
  dataAddr[318] = (void*) (&SiEngineController_P.WeightedSampleTimeMath_WtEt);
  dataAddr[319] = (void*) (&SiEngineController_P.Constant2_Value);
  dataAddr[320] = (void*) (&SiEngineController_P.UnitDelay_InitialCondition_o);
  dataAddr[321] = (void*) (&SiEngineController_P.Constant_Value_n);
  dataAddr[322] = (void*) (&SiEngineController_P.Switch1_Threshold);
  dataAddr[323] = (void*) (&SiEngineController_P.Constant_Value);
  dataAddr[324] = (void*) (&SiEngineController_P.Switch1_Threshold_c);
  dataAddr[325] = (void*) (&SiEngineController_P.Constant_Value_h);
  dataAddr[326] = (void*) (&SiEngineController_P.Switch1_Threshold_g);
  dataAddr[327] = (void*) (&localDW->UnitDelay_DSTATE);
  dataAddr[328] = (void*) (&localDW->UnitDelay1_DSTATE_k);
  dataAddr[329] = (void*) (&localDW->UnitDelay_DSTATE_k);
  dataAddr[330] = (void*) (&localDW->UnitDelay1_DSTATE);
  dataAddr[331] = (void*) (&localDW->UnitDelay_DSTATE_c);
  dataAddr[332] = (void*) (&localDW->UnitDelay_DSTATE_f);
  dataAddr[333] = (void*) (&SiEngineController_P.CatLightOffTime);
  dataAddr[334] = (void*) (&SiEngineController_P.Cps);
  dataAddr[335] = (void*) (&SiEngineController_P.CrankSpeed);
  dataAddr[336] = (void*) (&SiEngineController_P.EngStopTime);
  dataAddr[337] = (void*) (&SiEngineController_P.NCyl);
  dataAddr[338] = (void*) (&SiEngineController_P.Pstd);
  dataAddr[339] = (void*) (&SiEngineController_P.Rair);
  dataAddr[340] = (void*) (&SiEngineController_P.Sinj);
  dataAddr[341] = (void*) (&SiEngineController_P.Ts);
  dataAddr[342] = (void*) (&SiEngineController_P.Tstd);
  dataAddr[343] = (void*) (&SiEngineController_P.Vd);
  dataAddr[344] = (void*) (&SiEngineController_P.afr_stoich);
  dataAddr[345] = (void*) (&SiEngineController_P.f_cp_ld_bpt[0]);
  dataAddr[346] = (void*) (&SiEngineController_P.f_cp_n_bpt[0]);
  dataAddr[347] = (void*) (&SiEngineController_P.f_del_sa_bpt[0]);
  dataAddr[348] = (void*) (&SiEngineController_P.f_ecp[0]);
  dataAddr[349] = (void*) (&SiEngineController_P.f_egr_areapct_cmd[0]);
  dataAddr[350] = (void*) (&SiEngineController_P.f_egr_areapct_nrmlzdflow_bpt[0]);
  dataAddr[351] = (void*) (&SiEngineController_P.f_egr_areapct_pr_bpt[0]);
  dataAddr[352] = (void*) (&SiEngineController_P.f_egr_max_stdflow[0]);
  dataAddr[353] = (void*) (&SiEngineController_P.f_egr_stdflow[0]);
  dataAddr[354] = (void*) (&SiEngineController_P.f_egr_stdflow_egrap_bpt[0]);
  dataAddr[355] = (void*) (&SiEngineController_P.f_egr_stdflow_pr_bpt[0]);
  dataAddr[356] = (void*) (&SiEngineController_P.f_egrpct_cmd[0]);
  dataAddr[357] = (void*) (&SiEngineController_P.f_egrpct_ld_bpt[0]);
  dataAddr[358] = (void*) (&SiEngineController_P.f_egrpct_n_bpt[0]);
  dataAddr[359] = (void*) (&SiEngineController_P.f_fric_temp_bpt[0]);
  dataAddr[360] = (void*) (&SiEngineController_P.f_fric_temp_mod[0]);
  dataAddr[361] = (void*) (&SiEngineController_P.f_icp[0]);
  dataAddr[362] = (void*) (&SiEngineController_P.f_intksys_stdflow_bpt[0]);
  dataAddr[363] = (void*) (&SiEngineController_P.f_intksys_stdflow_pr[0]);
  dataAddr[364] = (void*) (&SiEngineController_P.f_lamcmd[0]);
  dataAddr[365] = (void*) (&SiEngineController_P.f_lamcmd_ld_bpt[0]);
  dataAddr[366] = (void*) (&SiEngineController_P.f_lamcmd_n_bpt[0]);
  dataAddr[367] = (void*) (&SiEngineController_P.f_lcmd[0]);
  dataAddr[368] = (void*) (&SiEngineController_P.f_lcmd_n_bpt[0]);
  dataAddr[369] = (void*) (&SiEngineController_P.f_lcmd_tq_bpt[0]);
  dataAddr[370] = (void*) (&SiEngineController_P.f_m_lam[0]);
  dataAddr[371] = (void*) (&SiEngineController_P.f_m_lam_bpt[0]);
  dataAddr[372] = (void*) (&SiEngineController_P.f_m_sa[0]);
  dataAddr[373] = (void*) (&SiEngineController_P.f_mdot_air_corr[0]);
  dataAddr[374] = (void*) (&SiEngineController_P.f_mdot_air_corr_ld_bpt[0]);
  dataAddr[375] = (void*) (&SiEngineController_P.f_mdot_air_n_bpt[0]);
  dataAddr[376] = (void*) (&SiEngineController_P.f_mdot_intk[0]);
  dataAddr[377] = (void*) (&SiEngineController_P.f_mdot_intk_ecp_bpt[0]);
  dataAddr[378] = (void*) (&SiEngineController_P.f_mdot_trpd_bpt[0]);
  dataAddr[379] = (void*) (&SiEngineController_P.f_sa[0]);
  dataAddr[380] = (void*) (&SiEngineController_P.f_sa_ld_bpt[0]);
  dataAddr[381] = (void*) (&SiEngineController_P.f_sa_n_bpt[0]);
  dataAddr[382] = (void*) (&SiEngineController_P.f_sa_opt[0]);
  dataAddr[383] = (void*) (&SiEngineController_P.f_startup_ect_bpt[0]);
  dataAddr[384] = (void*) (&SiEngineController_P.f_startup_lambda_delta[0]);
  dataAddr[385] = (void*)
    (&SiEngineController_P.f_startup_lambda_delta_timecnst[0]);
  dataAddr[386] = (void*) (&SiEngineController_P.f_t_exh[0]);
  dataAddr[387] = (void*) (&SiEngineController_P.f_t_exh_l_bpt[0]);
  dataAddr[388] = (void*) (&SiEngineController_P.f_t_exh_n_bpt[0]);
  dataAddr[389] = (void*) (&SiEngineController_P.f_tap[0]);
  dataAddr[390] = (void*) (&SiEngineController_P.f_tap_ld_bpt[0]);
  dataAddr[391] = (void*) (&SiEngineController_P.f_tap_n_bpt[0]);
  dataAddr[392] = (void*) (&SiEngineController_P.f_tm_corr[0]);
  dataAddr[393] = (void*) (&SiEngineController_P.f_tm_corr_n_bpt[0]);
  dataAddr[394] = (void*) (&SiEngineController_P.f_tm_corr_nd_bpt[0]);
  dataAddr[395] = (void*) (&SiEngineController_P.f_tpp[0]);
  dataAddr[396] = (void*) (&SiEngineController_P.f_tpp_tap_bpt[0]);
  dataAddr[397] = (void*) (&SiEngineController_P.f_tq_fric[0]);
  dataAddr[398] = (void*) (&SiEngineController_P.f_tq_inr[0]);
  dataAddr[399] = (void*) (&SiEngineController_P.f_tq_inr_l_bpt[0]);
  dataAddr[400] = (void*) (&SiEngineController_P.f_tq_inr_n_bpt[0]);
  dataAddr[401] = (void*) (&SiEngineController_P.f_tq_pump[0]);
  dataAddr[402] = (void*) (&SiEngineController_P.f_vivc[0]);
  dataAddr[403] = (void*) (&SiEngineController_P.f_vivc_icp_bpt[0]);
  dataAddr[404] = (void*) (&SiEngineController_P.f_wap[0]);
  dataAddr[405] = (void*) (&SiEngineController_P.f_wap_ld_bpt[0]);
  dataAddr[406] = (void*) (&SiEngineController_P.f_wap_n_bpt[0]);
  dataAddr[407] = (void*) (&SiEngineController_P.tau_egr);
  dataAddr[408] = (void*) (&SiEngineController_P.EngStopStartEnable);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void SiEngineController_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void SiEngineController_InitializeLoggingFunctions(RTWLoggingFcnPtr
  loggingPtrs[])
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
}

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static rtwCAPI_DimensionMap rtDimensionMap[] = {
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

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 30, 2, 0 },

  { rtwCAPI_VECTOR, 32, 2, 0 },

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 36, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 38, 2, 0 },

  { rtwCAPI_VECTOR, 40, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  2,                                   /* 3 */
  2,                                   /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  3,                                   /* 7 */
  1,                                   /* 8 */
  16,                                  /* 9 */
  1,                                   /* 10 */
  15,                                  /* 11 */
  1,                                   /* 12 */
  65,                                  /* 13 */
  16,                                  /* 14 */
  15,                                  /* 15 */
  30,                                  /* 16 */
  20,                                  /* 17 */
  1,                                   /* 18 */
  30,                                  /* 19 */
  20,                                  /* 20 */
  1,                                   /* 21 */
  1,                                   /* 22 */
  20,                                  /* 23 */
  21,                                  /* 24 */
  20,                                  /* 25 */
  21,                                  /* 26 */
  1,                                   /* 27 */
  1,                                   /* 28 */
  46,                                  /* 29 */
  21,                                  /* 30 */
  15,                                  /* 31 */
  1,                                   /* 32 */
  21,                                  /* 33 */
  1,                                   /* 34 */
  10,                                  /* 35 */
  20,                                  /* 36 */
  20,                                  /* 37 */
  15,                                  /* 38 */
  15,                                  /* 39 */
  1,                                   /* 40 */
  4                                    /* 41 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0005, 0.0
};

/* Fixed Point Map */
static rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (NULL), (NULL), -2, 0 }
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
  { rtBlockSignals, 199,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 128,
    rtModelParameters, 76 },

  { rtBlockStates, 6 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4003483426U,
    555685804U,
    3577391355U,
    2088000056U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SiEngineController_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SiEngineController_InitializeDataMapInfo(RT_MODEL_SiEngineController_T *
  const SiEngineController_M, B_SiEngineController_c_T *localB,
  DW_SiEngineController_f_T *localDW)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SiEngineController_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SiEngineController_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SiEngineController_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  SiEngineController_InitializeDataAddr
    (SiEngineController_M->DataMapInfo.dataAddress, localB, localDW);
  rtwCAPI_SetDataAddressMap(SiEngineController_M->DataMapInfo.mmi,
    SiEngineController_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  SiEngineController_InitializeVarDimsAddr
    (SiEngineController_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(SiEngineController_M->DataMapInfo.mmi,
    SiEngineController_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(SiEngineController_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(SiEngineController_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  SiEngineController_InitializeLoggingFunctions
    (SiEngineController_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(SiEngineController_M->DataMapInfo.mmi,
    SiEngineController_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SiEngineController_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SiEngineController_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SiEngineController_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SiEngineController_host_InitializeDataMapInfo
    (SiEngineController_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: SiEngineController_capi.c */

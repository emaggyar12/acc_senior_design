/*
 * SiMappedEngine_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "SiMappedEngine".
 *
 * Model version              : 1.430
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:34:16 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SiMappedEngine_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SiMappedEngine.h"
#include "SiMappedEngine_capi.h"
#include "SiMappedEngine_private.h"
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
  { 0, 5, TARGET_STRING("SiMappedEngine/Net Torque"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 5, TARGET_STRING("SiMappedEngine/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 5, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 5, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 5, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 5, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/O2 Storage"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 5, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 5, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/RPM to deg//s"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 5, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 5, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Fuel Volume Flow/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Load Calculation/Cylinders per sec"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Load Calculation/Nominal Airflow At Current Speed and STP"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Load Calculation/Nominal Cylinder Air Mass g//cyl"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Load Calculation/Saturation3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/LHV"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/rpm to rad//s"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 4, TARGET_STRING(
    "SiMappedEngine/Three-Way Catalyst/Catalyst Activated/TWC CO Conversion Efficiency"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 4, TARGET_STRING(
    "SiMappedEngine/Three-Way Catalyst/Catalyst Activated/TWC HC Conversion Efficiency"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 4, TARGET_STRING(
    "SiMappedEngine/Three-Way Catalyst/Catalyst Activated/TWC NOx Conversion Efficiency"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 4, TARGET_STRING(
    "SiMappedEngine/Three-Way Catalyst/Catalyst Activated/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 4, TARGET_STRING(
    "SiMappedEngine/Three-Way Catalyst/Catalyst Activated/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 4, TARGET_STRING(
    "SiMappedEngine/Three-Way Catalyst/Catalyst Activated/Add2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 1, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 26, 1, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 1, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Unary Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 2, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 32, 2, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 2, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Unary Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 37, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 38, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 39, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 40, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EngTrq Table"),
    TARGET_STRING("EngTrq"), 0, 0, 0, 0, 0 },

  { 41, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoCO Table"),
    TARGET_STRING("EoCO"), 0, 0, 0, 0, 0 },

  { 42, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoHC Table"),
    TARGET_STRING("EoHC"), 0, 0, 0, 0, 0 },

  { 43, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoNOx Table"),
    TARGET_STRING("EoNOx"), 0, 0, 0, 0, 0 },

  { 44, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoPm Table"),
    TARGET_STRING("EoPm"), 0, 0, 0, 0, 0 },

  { 45, 5, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Power Accounting Bus Creator/No PwrStored Input/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 46, TARGET_STRING("SiMappedEngine/Mapped SI Engine"),
    TARGET_STRING("Lhv"), 0, 0, 0 },

  { 47, TARGET_STRING("SiMappedEngine/Mapped SI Engine"),
    TARGET_STRING("Sg"), 0, 0, 0 },

  { 48, TARGET_STRING("SiMappedEngine/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 49, TARGET_STRING("SiMappedEngine/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 50, TARGET_STRING("SiMappedEngine/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 51, TARGET_STRING("SiMappedEngine/Lumped Torque Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 52, TARGET_STRING("SiMappedEngine/Lumped Torque Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 53, TARGET_STRING("SiMappedEngine/Actuators/EGR Valve Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 54, TARGET_STRING("SiMappedEngine/Actuators/EGR Valve Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 55, TARGET_STRING("SiMappedEngine/Actuators/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 56, TARGET_STRING("SiMappedEngine/Actuators/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 57, TARGET_STRING("SiMappedEngine/Actuators/Exhaust Cam Phaser  Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 58, TARGET_STRING("SiMappedEngine/Actuators/Exhaust Cam Phaser  Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 59, TARGET_STRING("SiMappedEngine/Actuators/Intake Cam Phaser  Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 60, TARGET_STRING("SiMappedEngine/Actuators/Intake Cam Phaser  Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 61, TARGET_STRING("SiMappedEngine/Actuators/Intake Manifold Flap Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 62, TARGET_STRING("SiMappedEngine/Actuators/Intake Manifold Flap Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 63, TARGET_STRING("SiMappedEngine/Actuators/Swirl Valve Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 64, TARGET_STRING("SiMappedEngine/Actuators/Swirl Valve Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 65, TARGET_STRING("SiMappedEngine/Actuators/VGT Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 66, TARGET_STRING("SiMappedEngine/Actuators/VGT Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 67, TARGET_STRING("SiMappedEngine/Actuators/Variable Compression Ratio Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 68, TARGET_STRING("SiMappedEngine/Actuators/Variable Compression Ratio Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 69, TARGET_STRING("SiMappedEngine/Actuators/Variable Intake Runner Length Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 70, TARGET_STRING("SiMappedEngine/Actuators/Variable Intake Runner Length Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 71, TARGET_STRING("SiMappedEngine/Actuators/Variable Intake Valve Lift Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 72, TARGET_STRING("SiMappedEngine/Actuators/Variable Intake Valve Lift Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 73, TARGET_STRING("SiMappedEngine/Actuators/Wastegate Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 74, TARGET_STRING("SiMappedEngine/Actuators/Wastegate Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 75, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 76, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 77, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 1, 0 },

  { 78, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 2, 0 },

  { 79, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 80, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Merge"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 81, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Merge1"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 82, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Merge2"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 83, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/O2 Storage"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 84, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/O2 Storage"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 85, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1"),
    TARGET_STRING("thresh"), 0, 0, 0 },

  { 86, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2"),
    TARGET_STRING("thresh"), 0, 0, 0 },

  { 87, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 88, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/RPM to deg//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 89, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 90, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/Integrator"),
    TARGET_STRING("WrappedStateUpperValue"), 0, 0, 0 },

  { 91, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/Integrator"),
    TARGET_STRING("WrappedStateLowerValue"), 0, 0, 0 },

  { 92, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Fuel Volume Flow/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 93, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/Engine Displacement"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 94, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/Ideal Gas Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 95, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/Standard Air Temperature"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 96, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/Standard Pressure Sea Level"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 97, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/cyls per cycle"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 98, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/cyls per cycle "),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 99, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/rev per cycle"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 100, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/sec per min"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 101, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/Saturation3"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 102, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Load Calculation/Saturation3"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 103, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/rpm to rad//s"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 104, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Catalyst Activated/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 105, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Catalyst Activated/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 106, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/Catalyst Activated/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 107, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 108, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 109, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 110, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 111, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/Bsfc Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 112, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EngTrq Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 113, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoCO Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 114, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoCO2 Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 115, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoHC Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 116, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoNOx Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 117, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/EoPm Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 118, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/ExhManGasTemp Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 119, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/FuelMassFlw Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 120, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine/IntkGasMassFlw Table"),
    TARGET_STRING("maxIndex"), 2, 3, 0 },

  { 121, TARGET_STRING("SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Power Accounting Bus Creator/No PwrStored Input/Constant"),
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
  { 122, 0, TARGET_STRING("SiMappedEngine/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 123, 1, TARGET_STRING("SiMappedEngine/Lumped Torque Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 124, 9, TARGET_STRING("SiMappedEngine/Actuators/EGR Valve Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 125, 4, TARGET_STRING(
    "SiMappedEngine/Actuators/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 126, 7, TARGET_STRING(
    "SiMappedEngine/Actuators/Exhaust Cam Phaser\n Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 127, 6, TARGET_STRING(
    "SiMappedEngine/Actuators/Intake Cam Phaser\n Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 128, 13, TARGET_STRING(
    "SiMappedEngine/Actuators/Intake Manifold Flap\nActuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 129, 14, TARGET_STRING(
    "SiMappedEngine/Actuators/Swirl Valve Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 130, 8, TARGET_STRING("SiMappedEngine/Actuators/VGT Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 131, 10, TARGET_STRING(
    "SiMappedEngine/Actuators/Variable Compression Ratio\nActuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 132, 12, TARGET_STRING(
    "SiMappedEngine/Actuators/Variable Intake Runner Length\nActuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 133, 11, TARGET_STRING(
    "SiMappedEngine/Actuators/Variable Intake Valve Lift\nActuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 134, 5, TARGET_STRING("SiMappedEngine/Actuators/Wastegate Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 135, 3, TARGET_STRING("SiMappedEngine/Three-Way Catalyst/O2 Storage"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 136, 2, TARGET_STRING(
    "SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/Integrator"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 137, TARGET_STRING("f_air"), 0, 4, 0 },

  { 138, TARGET_STRING("f_co"), 0, 4, 0 },

  { 139, TARGET_STRING("f_co2"), 0, 4, 0 },

  { 140, TARGET_STRING("f_eff"), 0, 4, 0 },

  { 141, TARGET_STRING("f_fuel"), 0, 4, 0 },

  { 142, TARGET_STRING("f_hc"), 0, 4, 0 },

  { 143, TARGET_STRING("f_nox"), 0, 4, 0 },

  { 144, TARGET_STRING("f_pm"), 0, 4, 0 },

  { 145, TARGET_STRING("f_tbrake"), 0, 4, 0 },

  { 146, TARGET_STRING("f_tbrake_n_bpt"), 0, 5, 0 },

  { 147, TARGET_STRING("f_tbrake_t_bpt"), 0, 5, 0 },

  { 148, TARGET_STRING("f_texh"), 0, 4, 0 },

  { 149, TARGET_STRING("f_twc_eff_co"), 0, 6, 0 },

  { 150, TARGET_STRING("f_twc_eff_hc"), 0, 6, 0 },

  { 151, TARGET_STRING("f_twc_eff_lam"), 0, 6, 0 },

  { 152, TARGET_STRING("f_twc_eff_nox"), 0, 6, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void SiMappedEngine_InitializeDataAddr(void* dataAddr[],
  B_SiMappedEngine_c_T *localB, X_SiMappedEngine_n_T *localX)
{
  dataAddr[0] = (void*) (&localB->NetTorque);
  dataAddr[1] = (void*) (&localB->ElectronicThrottleActuatorDynamics);
  dataAddr[2] = (void*) (&localB->uDLookupTable);
  dataAddr[3] = (void*) (&localB->uDLookupTable1);
  dataAddr[4] = (void*) (&localB->Add);
  dataAddr[5] = (void*) (&localB->O2Storage);
  dataAddr[6] = (void*) (&localB->Divide);
  dataAddr[7] = (void*) (&localB->RPMtodegs);
  dataAddr[8] = (void*) (&localB->Integrator);
  dataAddr[9] = (void*) (&localB->Gain);
  dataAddr[10] = (void*) (&localB->Cylinderspersec);
  dataAddr[11] = (void*) (&localB->NominalAirflowAtCurrentSpeedandSTP);
  dataAddr[12] = (void*) (&localB->NominalCylinderAirMassgcyl);
  dataAddr[13] = (void*) (&localB->Saturation3);
  dataAddr[14] = (void*) (&localB->LHV);
  dataAddr[15] = (void*) (&localB->rpmtorads);
  dataAddr[16] = (void*) (&localB->Product);
  dataAddr[17] = (void*) (&localB->Subtract);
  dataAddr[18] = (void*) (&localB->TWCCOConversionEfficiency);
  dataAddr[19] = (void*) (&localB->TWCHCConversionEfficiency);
  dataAddr[20] = (void*) (&localB->TWCNOxConversionEfficiency);
  dataAddr[21] = (void*) (&localB->Add_o);
  dataAddr[22] = (void*) (&localB->Add1);
  dataAddr[23] = (void*) (&localB->Add2);
  dataAddr[24] = (void*) (&localB->Fcn_e);
  dataAddr[25] = (void*) (&localB->LogicalOperator_c);
  dataAddr[26] = (void*) (&localB->Product_a);
  dataAddr[27] = (void*) (&localB->Switch_g);
  dataAddr[28] = (void*) (&localB->Switch1_g);
  dataAddr[29] = (void*) (&localB->UnaryMinus_b);
  dataAddr[30] = (void*) (&localB->Fcn);
  dataAddr[31] = (void*) (&localB->LogicalOperator);
  dataAddr[32] = (void*) (&localB->Product_j);
  dataAddr[33] = (void*) (&localB->Switch);
  dataAddr[34] = (void*) (&localB->Switch1);
  dataAddr[35] = (void*) (&localB->UnaryMinus);
  dataAddr[36] = (void*) (&localB->Compare_p);
  dataAddr[37] = (void*) (&localB->Compare_pg);
  dataAddr[38] = (void*) (&localB->Compare);
  dataAddr[39] = (void*) (&localB->Compare_d);
  dataAddr[40] = (void*) (&localB->EngTrq);
  dataAddr[41] = (void*) (&localB->EoCO);
  dataAddr[42] = (void*) (&localB->EoHC);
  dataAddr[43] = (void*) (&localB->EoNOx);
  dataAddr[44] = (void*) (&localB->EoPm);
  dataAddr[45] = (void*) (&localB->Constant);
  dataAddr[46] = (void*) (&SiMappedEngine_P.MappedSIEngine_Lhv);
  dataAddr[47] = (void*) (&SiMappedEngine_P.MappedSIEngine_Sg);
  dataAddr[48] = (void*) (&SiMappedEngine_P.Constant_Value_k);
  dataAddr[49] = (void*) (&SiMappedEngine_P.ElectronicThrottleActuatorDynamics_A);
  dataAddr[50] = (void*) (&SiMappedEngine_P.ElectronicThrottleActuatorDynamics_C);
  dataAddr[51] = (void*) (&SiMappedEngine_P.LumpedTorqueDynamics_A);
  dataAddr[52] = (void*) (&SiMappedEngine_P.LumpedTorqueDynamics_C);
  dataAddr[53] = (void*) (&SiMappedEngine_P.EGRValveDynamics_A);
  dataAddr[54] = (void*) (&SiMappedEngine_P.EGRValveDynamics_C);
  dataAddr[55] = (void*)
    (&SiMappedEngine_P.ElectronicThrottleActuatorDynamics_A_a);
  dataAddr[56] = (void*)
    (&SiMappedEngine_P.ElectronicThrottleActuatorDynamics_C_k);
  dataAddr[57] = (void*) (&SiMappedEngine_P.ExhaustCamPhaserActuatorDynamics_A);
  dataAddr[58] = (void*) (&SiMappedEngine_P.ExhaustCamPhaserActuatorDynamics_C);
  dataAddr[59] = (void*) (&SiMappedEngine_P.IntakeCamPhaserActuatorDynamics_A);
  dataAddr[60] = (void*) (&SiMappedEngine_P.IntakeCamPhaserActuatorDynamics_C);
  dataAddr[61] = (void*) (&SiMappedEngine_P.IntakeManifoldFlapActuatorDynamics_A);
  dataAddr[62] = (void*) (&SiMappedEngine_P.IntakeManifoldFlapActuatorDynamics_C);
  dataAddr[63] = (void*) (&SiMappedEngine_P.SwirlValveActuatorDynamics_A);
  dataAddr[64] = (void*) (&SiMappedEngine_P.SwirlValveActuatorDynamics_C);
  dataAddr[65] = (void*) (&SiMappedEngine_P.VGTActuatorDynamics_A);
  dataAddr[66] = (void*) (&SiMappedEngine_P.VGTActuatorDynamics_C);
  dataAddr[67] = (void*)
    (&SiMappedEngine_P.VariableCompressionRatioActuatorDynamics_A);
  dataAddr[68] = (void*)
    (&SiMappedEngine_P.VariableCompressionRatioActuatorDynamics_C);
  dataAddr[69] = (void*)
    (&SiMappedEngine_P.VariableIntakeRunnerLengthActuatorDynamics_A);
  dataAddr[70] = (void*)
    (&SiMappedEngine_P.VariableIntakeRunnerLengthActuatorDynamics_C);
  dataAddr[71] = (void*)
    (&SiMappedEngine_P.VariableIntakeValveLiftActuatorDynamics_A);
  dataAddr[72] = (void*)
    (&SiMappedEngine_P.VariableIntakeValveLiftActuatorDynamics_C);
  dataAddr[73] = (void*) (&SiMappedEngine_P.WastegateActuatorDynamics_A);
  dataAddr[74] = (void*) (&SiMappedEngine_P.WastegateActuatorDynamics_C);
  dataAddr[75] = (void*) (&SiMappedEngine_P.Constant1_Value_m);
  dataAddr[76] = (void*) (&SiMappedEngine_P.uDLookupTable_tableData[0]);
  dataAddr[77] = (void*) (&SiMappedEngine_P.uDLookupTable_bp01Data[0]);
  dataAddr[78] = (void*) (&SiMappedEngine_P.uDLookupTable1_tableData[0]);
  dataAddr[79] = (void*) (&SiMappedEngine_P.uDLookupTable1_bp01Data[0]);
  dataAddr[80] = (void*) (&SiMappedEngine_P.Merge_InitialOutput);
  dataAddr[81] = (void*) (&SiMappedEngine_P.Merge1_InitialOutput);
  dataAddr[82] = (void*) (&SiMappedEngine_P.Merge2_InitialOutput);
  dataAddr[83] = (void*) (&SiMappedEngine_P.O2Storage_A);
  dataAddr[84] = (void*) (&SiMappedEngine_P.O2Storage_C);
  dataAddr[85] = (void*) (&SiMappedEngine_P.div0protectpoly1_thresh);
  dataAddr[86] = (void*) (&SiMappedEngine_P.div0protectpoly2_thresh);
  dataAddr[87] = (void*) (&SiMappedEngine_P.Constant_Value);
  dataAddr[88] = (void*) (&SiMappedEngine_P.RPMtodegs_Gain);
  dataAddr[89] = (void*) (&SiMappedEngine_P.Integrator_IC);
  dataAddr[90] = (void*) (&SiMappedEngine_P.Integrator_WrappedStateUpperValue);
  dataAddr[91] = (void*) (&SiMappedEngine_P.Integrator_WrappedStateLowerValue);
  dataAddr[92] = (void*) (&SiMappedEngine_P.Gain_Gain);
  dataAddr[93] = (void*) (&SiMappedEngine_P.EngineDisplacement_Value);
  dataAddr[94] = (void*) (&SiMappedEngine_P.IdealGasConstant_Value);
  dataAddr[95] = (void*) (&SiMappedEngine_P.StandardAirTemperature_Value);
  dataAddr[96] = (void*) (&SiMappedEngine_P.StandardPressureSeaLevel_Value);
  dataAddr[97] = (void*) (&SiMappedEngine_P.cylspercycle_Value);
  dataAddr[98] = (void*) (&SiMappedEngine_P.cylspercycle_Value_m);
  dataAddr[99] = (void*) (&SiMappedEngine_P.revpercycle_Value);
  dataAddr[100] = (void*) (&SiMappedEngine_P.secpermin_Value);
  dataAddr[101] = (void*) (&SiMappedEngine_P.Saturation3_UpperSat);
  dataAddr[102] = (void*) (&SiMappedEngine_P.Saturation3_LowerSat);
  dataAddr[103] = (void*) (&SiMappedEngine_P.rpmtorads_Gain);
  dataAddr[104] = (void*) (&SiMappedEngine_P.Constant1_Value);
  dataAddr[105] = (void*) (&SiMappedEngine_P.Constant2_Value);
  dataAddr[106] = (void*) (&SiMappedEngine_P.Constant3_Value);
  dataAddr[107] = (void*) (&SiMappedEngine_P.Constant_Value_b);
  dataAddr[108] = (void*) (&SiMappedEngine_P.Switch1_Threshold);
  dataAddr[109] = (void*) (&SiMappedEngine_P.Constant_Value_m);
  dataAddr[110] = (void*) (&SiMappedEngine_P.Switch1_Threshold_e);
  dataAddr[111] = (void*) (&SiMappedEngine_P.BsfcTable_maxIndex[0]);
  dataAddr[112] = (void*) (&SiMappedEngine_P.EngTrqTable_maxIndex[0]);
  dataAddr[113] = (void*) (&SiMappedEngine_P.EoCOTable_maxIndex[0]);
  dataAddr[114] = (void*) (&SiMappedEngine_P.EoCO2Table_maxIndex[0]);
  dataAddr[115] = (void*) (&SiMappedEngine_P.EoHCTable_maxIndex[0]);
  dataAddr[116] = (void*) (&SiMappedEngine_P.EoNOxTable_maxIndex[0]);
  dataAddr[117] = (void*) (&SiMappedEngine_P.EoPmTable_maxIndex[0]);
  dataAddr[118] = (void*) (&SiMappedEngine_P.ExhManGasTempTable_maxIndex[0]);
  dataAddr[119] = (void*) (&SiMappedEngine_P.FuelMassFlwTable_maxIndex[0]);
  dataAddr[120] = (void*) (&SiMappedEngine_P.IntkGasMassFlwTable_maxIndex[0]);
  dataAddr[121] = (void*) (&SiMappedEngine_P.Constant_Value_h);
  dataAddr[122] = (void*) (&localX->ElectronicThrottleActuatorDynamics_CSTATE);
  dataAddr[123] = (void*) (&localX->LumpedTorqueDynamics_CSTATE);
  dataAddr[124] = (void*) (&localX->EGRValveDynamics_CSTATE);
  dataAddr[125] = (void*) (&localX->ElectronicThrottleActuatorDynamics_CSTATE_b);
  dataAddr[126] = (void*) (&localX->ExhaustCamPhaserActuatorDynamics_CSTATE);
  dataAddr[127] = (void*) (&localX->IntakeCamPhaserActuatorDynamics_CSTATE);
  dataAddr[128] = (void*) (&localX->IntakeManifoldFlapActuatorDynamics_CSTATE);
  dataAddr[129] = (void*) (&localX->SwirlValveActuatorDynamics_CSTATE);
  dataAddr[130] = (void*) (&localX->VGTActuatorDynamics_CSTATE);
  dataAddr[131] = (void*)
    (&localX->VariableCompressionRatioActuatorDynamics_CSTATE);
  dataAddr[132] = (void*)
    (&localX->VariableIntakeRunnerLengthActuatorDynamics_CSTATE);
  dataAddr[133] = (void*)
    (&localX->VariableIntakeValveLiftActuatorDynamics_CSTATE);
  dataAddr[134] = (void*) (&localX->WastegateActuatorDynamics_CSTATE);
  dataAddr[135] = (void*) (&localX->O2Storage_CSTATE);
  dataAddr[136] = (void*) (&localX->Integrator_CSTATE);
  dataAddr[137] = (void*) (&SiMappedEngine_P.f_air[0]);
  dataAddr[138] = (void*) (&SiMappedEngine_P.f_co[0]);
  dataAddr[139] = (void*) (&SiMappedEngine_P.f_co2[0]);
  dataAddr[140] = (void*) (&SiMappedEngine_P.f_eff[0]);
  dataAddr[141] = (void*) (&SiMappedEngine_P.f_fuel[0]);
  dataAddr[142] = (void*) (&SiMappedEngine_P.f_hc[0]);
  dataAddr[143] = (void*) (&SiMappedEngine_P.f_nox[0]);
  dataAddr[144] = (void*) (&SiMappedEngine_P.f_pm[0]);
  dataAddr[145] = (void*) (&SiMappedEngine_P.f_tbrake[0]);
  dataAddr[146] = (void*) (&SiMappedEngine_P.f_tbrake_n_bpt[0]);
  dataAddr[147] = (void*) (&SiMappedEngine_P.f_tbrake_t_bpt[0]);
  dataAddr[148] = (void*) (&SiMappedEngine_P.f_texh[0]);
  dataAddr[149] = (void*) (&SiMappedEngine_P.f_twc_eff_co[0]);
  dataAddr[150] = (void*) (&SiMappedEngine_P.f_twc_eff_hc[0]);
  dataAddr[151] = (void*) (&SiMappedEngine_P.f_twc_eff_lam[0]);
  dataAddr[152] = (void*) (&SiMappedEngine_P.f_twc_eff_nox[0]);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void SiMappedEngine_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void SiMappedEngine_InitializeLoggingFunctions(RTWLoggingFcnPtr
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
}

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

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

  { rtwCAPI_MATRIX_COL_MAJOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  3,                                   /* 3 */
  1,                                   /* 4 */
  4,                                   /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  40,                                  /* 8 */
  40,                                  /* 9 */
  40,                                  /* 10 */
  1,                                   /* 11 */
  1,                                   /* 12 */
  7                                    /* 13 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.0005
};

/* Fixed Point Map */
static rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
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
  { rtBlockSignals, 46,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 76,
    rtModelParameters, 16 },

  { rtBlockStates, 15 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4271399631U,
    2149920286U,
    4265159441U,
    3902579767U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SiMappedEngine_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SiMappedEngine_InitializeDataMapInfo(RT_MODEL_SiMappedEngine_T *const
  SiMappedEngine_M, B_SiMappedEngine_c_T *localB, X_SiMappedEngine_n_T *localX)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SiMappedEngine_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SiMappedEngine_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SiMappedEngine_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  SiMappedEngine_InitializeDataAddr(SiMappedEngine_M->DataMapInfo.dataAddress,
    localB, localX);
  rtwCAPI_SetDataAddressMap(SiMappedEngine_M->DataMapInfo.mmi,
    SiMappedEngine_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  SiMappedEngine_InitializeVarDimsAddr
    (SiMappedEngine_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(SiMappedEngine_M->DataMapInfo.mmi,
    SiMappedEngine_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(SiMappedEngine_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(SiMappedEngine_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  SiMappedEngine_InitializeLoggingFunctions
    (SiMappedEngine_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(SiMappedEngine_M->DataMapInfo.mmi,
    SiMappedEngine_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SiMappedEngine_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SiMappedEngine_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SiMappedEngine_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SiMappedEngine_host_InitializeDataMapInfo
    (SiMappedEngine_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: SiMappedEngine_capi.c */

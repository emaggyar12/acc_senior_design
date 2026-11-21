/*
 * Blazer_Plant_Model_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Blazer_Plant_Model".
 *
 * Model version              : 1.1027
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 16:38:32 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Blazer_Plant_Model_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Blazer_Plant_Model.h"
#include "Blazer_Plant_Model_capi.h"
#include "Blazer_Plant_Model_private.h"
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
  { 0, 1, TARGET_STRING("Blazer_Plant_Model/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 2, TARGET_STRING("Blazer_Plant_Model/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 22, TARGET_STRING(
    "Blazer_Plant_Model/50-70 mph test (units in m//s) set sim time to 60 s/FromWs"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 22, TARGET_STRING("Blazer_Plant_Model/Plant Inputs/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 22, TARGET_STRING("Blazer_Plant_Model/Plant Inputs/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 22, TARGET_STRING("Blazer_Plant_Model/Visualization/Derivative"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 22, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain"),
    TARGET_STRING("g"), 0, 0, 0, 0, 0 },

  { 7, 22, TARGET_STRING("Blazer_Plant_Model/Visualization/m//s to mph"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 8, 22, TARGET_STRING("Blazer_Plant_Model/Visualization/rad//s to rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion13"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion14"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion15"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 17, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion16"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion17"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion18"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion19"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/PCM Input/Unit Conversion9"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay12"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 43, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 44, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 45, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 46, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 47, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 48, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 49, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 50, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 51, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 52, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 53, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 54, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/Signal Routing/UnitConversion"),
    TARGET_STRING("Reference Speed"), 0, 0, 0, 0, 0 },

  { 55, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/Signal Routing/UnitConversion1"),
    TARGET_STRING("Reference Accel"), 0, 0, 0, 0, 0 },

  { 56, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Drivetrain/DrivetrainHevP4"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 57, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Drivetrain/DrivetrainHevP4"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 58, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Drivetrain/DrivetrainHevP4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 59, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Drivetrain/DrivetrainHevP4"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 60, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Low Voltage Starting System"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Low Voltage Starting System"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 62, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Product4"),
    TARGET_STRING("MotPwrMech"), 0, 0, 0, 0, 0 },

  { 63, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Saturation1"),
    TARGET_STRING("MotCrnt"), 0, 0, 0, 0, 0 },

  { 64, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Coupling Dynamics1"),
    TARGET_STRING("StartTrq"), 0, 0, 0, 0, 0 },

  { 65, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant Input/Rate Transition3"),
    TARGET_STRING("AmbTemp"), 0, 0, 0, 0, 1 },

  { 66, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant Input/Rate Transition4"),
    TARGET_STRING("StartCmd"), 0, 0, 0, 0, 1 },

  { 67, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant Input/Rate Transition5"),
    TARGET_STRING("MotTrqCmd"), 0, 0, 0, 0, 1 },

  { 68, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 69, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 70, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 71, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 72, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 73, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 74, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 75, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 9, 0, 0, 0, 0 },

  { 76, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 10, 0, 0, 0, 0 },

  { 77, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 11, 0, 0, 0, 0 },

  { 78, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 12, 0, 0, 0, 0 },

  { 79, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 13, 0, 0, 0, 0 },

  { 80, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 14, 0, 0, 0, 0 },

  { 81, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 15, 0, 0, 0, 0 },

  { 82, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 16, 0, 0, 0, 0 },

  { 83, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 17, 0, 0, 0, 0 },

  { 84, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 18, 0, 0, 0, 0 },

  { 85, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 19, 0, 0, 0, 0 },

  { 86, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 20, 0, 0, 0, 1 },

  { 87, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 21, 0, 0, 0, 1 },

  { 88, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 22, 0, 0, 0, 1 },

  { 89, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 23, 0, 0, 0, 1 },

  { 90, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 24, 0, 0, 0, 1 },

  { 91, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 25, 0, 0, 0, 1 },

  { 92, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 26, 0, 0, 0, 1 },

  { 93, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 27, 0, 0, 0, 1 },

  { 94, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 28, 0, 0, 0, 1 },

  { 95, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 29, 0, 0, 0, 0 },

  { 96, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 30, 0, 0, 0, 0 },

  { 97, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 31, 0, 0, 0, 0 },

  { 98, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 32, 0, 0, 0, 0 },

  { 99, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 33, 0, 0, 0, 0 },

  { 100, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 34, 0, 0, 0, 1 },

  { 101, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 35, 0, 0, 0, 1 },

  { 102, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 36, 0, 0, 0, 1 },

  { 103, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 37, 0, 0, 0, 1 },

  { 104, 22, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine"),
    TARGET_STRING(""), 38, 0, 0, 0, 0 },

  { 105, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Engine Plant Input/rad//s to rpm"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 106, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Engine Plant Input/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 107, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Engine Plant Input/Sensor Dynamics"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 108, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Engine Plant Output/Saturation1"),
    TARGET_STRING("EngTrq"), 0, 0, 0, 0, 1 },

  { 109, 11, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 110, 13, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 111, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain2"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 112, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain3"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 113, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 114, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 115, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g  "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 116, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g   "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 117, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/m to km"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/m to mi"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 119, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 120, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 121, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 122, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 123, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 124, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 125, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 126, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/California Phase II Gasoline density kg//m^3"),
    TARGET_STRING("BattFuel"), 0, 0, 0, 0, 0 },

  { 127, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Kg to m^3 California Phase II Gasoline S.G."),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 128, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/m to 100Km"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 129, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/m to mile"),
    TARGET_STRING("distance_mi"), 0, 0, 0, 0, 0 },

  { 130, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/m^3 per gal"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 131, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/m^3 to L"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 132, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/m^3 to US Gal"),
    TARGET_STRING("gal"), 0, 0, 0, 0, 0 },

  { 133, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Integrator"),
    TARGET_STRING("distance_m"), 0, 0, 0, 0, 0 },

  { 134, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 135, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 136, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Divide1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 137, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Divide2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 138, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/L//100 Km Calc"),
    TARGET_STRING("L/100Km"), 0, 0, 0, 0, 0 },

  { 139, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 140, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/US MPG Calc"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 141, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Rate Transition3"),
    TARGET_STRING("US MPG"), 0, 0, 0, 0, 1 },

  { 142, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 143, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 144, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Add"),
    TARGET_STRING("TotFuel"), 0, 0, 0, 0, 0 },

  { 145, 22, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Sqrt"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 146, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 147, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 148, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 2, 0, 0, 0, 1 },

  { 149, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 3, 0, 0, 0, 1 },

  { 150, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 151, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 5, 0, 0, 0, 1 },

  { 152, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 6, 0, 0, 0, 1 },

  { 153, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 7, 0, 0, 0, 1 },

  { 154, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 8, 0, 0, 0, 1 },

  { 155, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 9, 0, 0, 0, 1 },

  { 156, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 10, 0, 0, 0, 1 },

  { 157, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 11, 0, 0, 0, 1 },

  { 158, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 12, 0, 0, 0, 1 },

  { 159, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 13, 0, 0, 0, 1 },

  { 160, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 14, 0, 0, 0, 1 },

  { 161, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 15, 0, 0, 0, 1 },

  { 162, 22, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController"),
    TARGET_STRING(""), 16, 0, 0, 0, 1 },

  { 163, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 164, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 165, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 166, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 167, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 168, 4, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 169, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 170, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 171, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 172, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 173, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 174, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 175, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 176, 5, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 177, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 178, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 179, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 180, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 181, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 182, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 183, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 184, 6, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 185, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 186, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 187, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 188, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 189, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 190, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 191, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 192, 7, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 193, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 194, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 195, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 196, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 197, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 198, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 199, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 200, 8, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 201, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 202, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 203, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 204, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 205, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 206, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 207, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 208, 9, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 209, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 210, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 211, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 212, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 2 },

  { 213, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 214, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 215, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 216, 10, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Math Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 217, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 218, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 219, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Battery/Battery"),
    TARGET_STRING("BattV"), 1, 0, 0, 0, 0 },

  { 220, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Motor/MotMapped"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 221, 22, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Motor/MotMapped"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 222, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 223, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 224, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 225, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 226, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 227, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 228, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 229, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 230, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 231, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 232, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 233, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 234, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 235, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 236, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 237, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 238, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 239, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 240, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 241, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 242, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 243, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 244, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 245, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 246, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/TraceConvert"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 247, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 248, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 249, 22, TARGET_STRING(
    "Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 250, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 251, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Sum7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 252, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 253, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 254, 20, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 255, 20, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 256, 20, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 257, 20, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup"),
    TARGET_STRING(""), 3, 0, 4, 0, 0 },

  { 258, 21, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Vehicle"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 259, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 260, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 261, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 262, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 263, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 264, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add1"),
    TARGET_STRING("u_o(t)"), 0, 0, 0, 0, 0 },

  { 265, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add2"),
    TARGET_STRING("y(t+T*)"), 0, 0, 0, 0, 0 },

  { 266, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add4"),
    TARGET_STRING("e(t+T*)"), 0, 0, 0, 0, 0 },

  { 267, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Trigonometric Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 268, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Unit Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 269, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Unit Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 270, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Unit Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 271, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Vector Concatenate"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 272, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Vector Concatenate1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 273, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 274, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 275, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Relational Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 276, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Relational Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 277, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 278, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 279, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Shift/None/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 280, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Shift/None/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 281, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 282, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 283, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 284, 14, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"),
    TARGET_STRING("Accel"), 0, 0, 0, 0, 0 },

  { 285, 12, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 286, 15, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Switch"),
    TARGET_STRING("u(t)"), 0, 0, 0, 0, 0 },

  { 287, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 288, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 289, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 290, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 291, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 292, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 293, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator3"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 294, 17, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 295, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"),
    TARGET_STRING("Decel"), 0, 0, 0, 0, 0 },

  { 296, 18, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Switch"),
    TARGET_STRING("u(t)"), 0, 0, 0, 0, 0 },

  { 297, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 298, 17, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Unary Minus"),
    TARGET_STRING("Decel"), 0, 0, 0, 0, 0 },

  { 299, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Unary Minus1"),
    TARGET_STRING("Decel"), 0, 0, 0, 0, 0 },

  { 300, 16, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 301, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 302, 19, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 303, 22, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 304, 16, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 305, 19, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 306, TARGET_STRING("Blazer_Plant_Model/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 307, TARGET_STRING("Blazer_Plant_Model/DT_SELECTOR"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 308, TARGET_STRING("Blazer_Plant_Model/HiLAct"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 309, TARGET_STRING("Blazer_Plant_Model/HiLSwitch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 310, TARGET_STRING("Blazer_Plant_Model/Environment/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 311, TARGET_STRING("Blazer_Plant_Model/Environment/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 312, TARGET_STRING("Blazer_Plant_Model/Environment/Constant6"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 313, TARGET_STRING("Blazer_Plant_Model/Environment/Constant7"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 314, TARGET_STRING("Blazer_Plant_Model/Plant Inputs/MILActive"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 315, TARGET_STRING("Blazer_Plant_Model/Plant Inputs/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 316, TARGET_STRING("Blazer_Plant_Model/Plant Inputs/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 317, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 318, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 319, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 320, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 321, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 322, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 323, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain6"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 324, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain7"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 325, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain8"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 326, TARGET_STRING("Blazer_Plant_Model/Visualization/Gain9"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 327, TARGET_STRING("Blazer_Plant_Model/Visualization/m//s to mph"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 328, TARGET_STRING("Blazer_Plant_Model/Visualization/rad//s to rpm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 329, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 330, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 331, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 332, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 333, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 334, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay10"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 335, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay11"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 336, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay12"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 337, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 338, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 339, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 340, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 341, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 342, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay8"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 343, TARGET_STRING("Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay9"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 344, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 345, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 346, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 347, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 348, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Battery Discharge Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 349, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Battery Discharge Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 350, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Coupling Dynamics1"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 351, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Coupling Dynamics1"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 352, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Motor Coupling Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 353, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Electric Plant/Motor Coupling Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 354, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Input/rad//s to rpm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 355, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Input/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 356, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Input/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 357, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Input/Sensor Dynamics"),
    TARGET_STRING("A"), 0, 0, 0 },

  { 358, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Input/Sensor Dynamics"),
    TARGET_STRING("C"), 0, 0, 0 },

  { 359, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Output/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 360, TARGET_STRING("Blazer_Plant_Model/GM Blazer/Engine Plant Output/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 361, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model"),
    TARGET_STRING("tau"), 0, 0, 0 },

  { 362, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model"),
    TARGET_STRING("L"), 0, 0, 0 },

  { 363, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 364, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 365, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain2"),
    TARGET_STRING("Gain"), 2, 0, 0 },

  { 366, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Gain3"),
    TARGET_STRING("Gain"), 2, 0, 0 },

  { 367, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 368, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 369, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g  "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 370, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Kg to g   "),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 371, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/m to km"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 372, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/m to mi"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 373, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 374, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 375, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Integrator2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 376, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Integrator3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 377, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Integrator4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 378, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 379, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 380, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 381, TARGET_STRING("Blazer_Plant_Model/Visualization/Emission Calculations/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 382, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 383, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/s per h"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 384, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/w per kw"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 385, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/California Phase II Gasoline density kg//m^3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 386, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Kg to m^3 California Phase II Gasoline S.G."),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 387, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/m to 100Km"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 388, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/m to mile"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 389, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/m^3 per gal"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 390, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/m^3 to L"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 391, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/m^3 to US Gal"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 392, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 393, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 394, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 395, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 396, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 397, TARGET_STRING("Blazer_Plant_Model/Visualization/Performance Calculations/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 398, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 399, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 400, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 401, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 402, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 403, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 404, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 405, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 406, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 407, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 408, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 409, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 410, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 411, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 6, 0 },

  { 412, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 413, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 6, 0 },

  { 414, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 415, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 6, 0 },

  { 416, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

  { 417, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 418, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 419, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 420, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 421, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 422, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 423, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 424, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 425, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 7, 0 },

  { 426, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 7, 0 },

  { 427, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 428, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 429, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 430, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 431, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 432, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 433, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 434, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 435, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 436, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 437, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 438, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 439, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 440, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 441, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 442, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 443, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 444, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 445, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 9, 0 },

  { 446, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 9, 0 },

  { 447, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 448, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 449, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 450, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 451, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 452, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 453, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 454, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 455, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 8, 0 },

  { 456, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 8, 0 },

  { 457, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 458, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/repeat"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 459, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/tFinal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 460, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 461, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 462, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 463, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 464, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 465, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("Table"), 0, 10, 0 },

  { 466, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/1-D Lookup Table2"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 10, 0 },

  { 467, TARGET_STRING("Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 468, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 469, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 470, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 11, 0 },

  { 471, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Shift/None/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 472, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Shift/None/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 473, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"),
    TARGET_STRING("IC"), 0, 0, 0 },

  { 474, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 475, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 476, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 477, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 478, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 479, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 480, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 481, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 482, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 483, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 484, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 485, TARGET_STRING("Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/y"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

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
  { 486, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 487, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay1"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 488, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay10"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 489, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay11"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 490, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay12"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 491, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay2"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 492, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay4"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 493, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay5"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 494, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay6"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 495, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay7"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 496, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay8"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 497, -1, TARGET_STRING(
    "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Unit Delay9"),
    TARGET_STRING("DSTATE"), "", 0, 0, 0, 0, 1, 0, -1, 0 },

  { 498, 48, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Battery Discharge Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 499, 57, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Coupling Dynamics1"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 500, 16, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Electric Plant/Motor Coupling Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 501, 61, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Engine Plant Input/Electronic Throttle Actuator Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 502, 0, TARGET_STRING(
    "Blazer_Plant_Model/GM Blazer/Engine Plant Input/Sensor Dynamics"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 503, 52, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 504, 56, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator1"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 505, 55, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator2"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 506, 53, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator3"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 507, 54, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Emission Calculations/Integrator4"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 508, 50, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Integrator"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 509, 51, TARGET_STRING(
    "Blazer_Plant_Model/Visualization/Performance Calculations/Integrator1"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 510, 62, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 511, -1, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"),
    TARGET_STRING("DSTATE"), "", 0, 0, 1, 0, 1, 0, -1, 0 },

  { 512, 17, TARGET_STRING(
    "Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"),
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
  { 513, TARGET_STRING("A"), 0, 0, 0 },

  { 514, TARGET_STRING("B"), 0, 0, 0 },

  { 515, TARGET_STRING("BrkPrsMax"), 0, 0, 0 },

  { 516, TARGET_STRING("C"), 0, 0, 0 },

  { 517, TARGET_STRING("Kpt"), 0, 0, 0 },

  { 518, TARGET_STRING("Mass"), 0, 0, 0 },

  { 519, TARGET_STRING("g"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void Blazer_Plant_Model_InitializeDataAddr(void* dataAddr[],
  B_Blazer_Plant_Model_c_T *localB, DW_Blazer_Plant_Model_f_T *localDW,
  X_Blazer_Plant_Model_n_T *localX)
{
  dataAddr[0] = (void*) (&localB->MultiportSwitch);
  dataAddr[1] = (void*) (&localB->Switch_l2);
  dataAddr[2] = (void*) (&localB->FromWs);
  dataAddr[3] = (void*) (&localB->Switch_ey);
  dataAddr[4] = (void*) (&localB->Switch1);
  dataAddr[5] = (void*) (&localB->Derivative);
  dataAddr[6] = (void*) (&localB->g);
  dataAddr[7] = (void*) (&localB->mstomph[0]);
  dataAddr[8] = (void*) (&localB->radstorpm_p);
  dataAddr[9] = (void*) (&localB->UnitConversion);
  dataAddr[10] = (void*) (&localB->UnitConversion1);
  dataAddr[11] = (void*) (&localB->UnitConversion10);
  dataAddr[12] = (void*) (&localB->UnitConversion11);
  dataAddr[13] = (void*) (&localB->UnitConversion12);
  dataAddr[14] = (void*) (&localB->UnitConversion13);
  dataAddr[15] = (void*) (&localB->UnitConversion14);
  dataAddr[16] = (void*) (&localB->UnitConversion15);
  dataAddr[17] = (void*) (&localB->UnitConversion16);
  dataAddr[18] = (void*) (&localB->UnitConversion17);
  dataAddr[19] = (void*) (&localB->UnitConversion18);
  dataAddr[20] = (void*) (&localB->UnitConversion19);
  dataAddr[21] = (void*) (&localB->UnitConversion2_p);
  dataAddr[22] = (void*) (&localB->UnitConversion3);
  dataAddr[23] = (void*) (&localB->UnitConversion4);
  dataAddr[24] = (void*) (&localB->UnitConversion5);
  dataAddr[25] = (void*) (&localB->UnitConversion6);
  dataAddr[26] = (void*) (&localB->UnitConversion7);
  dataAddr[27] = (void*) (&localB->UnitConversion8);
  dataAddr[28] = (void*) (&localB->UnitConversion9);
  dataAddr[29] = (void*) (&localB->Switch);
  dataAddr[30] = (void*) (&localB->UnitDelay);
  dataAddr[31] = (void*) (&localB->UnitDelay1);
  dataAddr[32] = (void*) (&localB->UnitDelay10);
  dataAddr[33] = (void*) (&localB->UnitDelay11);
  dataAddr[34] = (void*) (&localB->UnitDelay12);
  dataAddr[35] = (void*) (&localB->UnitDelay2);
  dataAddr[36] = (void*) (&localB->UnitDelay4);
  dataAddr[37] = (void*) (&localB->UnitDelay5);
  dataAddr[38] = (void*) (&localB->UnitDelay6);
  dataAddr[39] = (void*) (&localB->UnitDelay7);
  dataAddr[40] = (void*) (&localB->UnitDelay8);
  dataAddr[41] = (void*) (&localB->UnitDelay9);
  dataAddr[42] = (void*) (&localB->ReferenceSpeed_n);
  dataAddr[43] = (void*) (&localB->ReferenceAccel);
  dataAddr[44] = (void*) (&localB->ReferenceSpeed_o);
  dataAddr[45] = (void*) (&localB->ReferenceAccel_b);
  dataAddr[46] = (void*) (&localB->ReferenceSpeed_f);
  dataAddr[47] = (void*) (&localB->ReferenceAccel_c);
  dataAddr[48] = (void*) (&localB->ReferenceSpeed);
  dataAddr[49] = (void*) (&localB->ReferenceAccel_bi);
  dataAddr[50] = (void*) (&localB->ReferenceSpeed_oz);
  dataAddr[51] = (void*) (&localB->ReferenceAccel_l);
  dataAddr[52] = (void*) (&localB->ReferenceSpeed_fu);
  dataAddr[53] = (void*) (&localB->ReferenceAccel_f);
  dataAddr[54] = (void*) (&localB->ReferenceSpeed_c);
  dataAddr[55] = (void*) (&localB->ReferenceAccel_g);
  dataAddr[56] = (void*) (&localB->ImpellerSpd);
  dataAddr[57] = (void*) (&localB->Cltch1State);
  dataAddr[58] = (void*) (&localB->CltchLocked);
  dataAddr[59] = (void*) (&localB->TransGear);
  dataAddr[60] = (void*) (&localB->StartTrq_e);
  dataAddr[61] = (void*) (&localB->BattCrnt);
  dataAddr[62] = (void*) (&localB->MotPwrMech);
  dataAddr[63] = (void*) (&localB->MotCrnt);
  dataAddr[64] = (void*) (&localB->StartTrq);
  dataAddr[65] = (void*) (&localB->AmbTemp);
  dataAddr[66] = (void*) (&localB->StartCmd);
  dataAddr[67] = (void*) (&localB->MotTrqCmd);
  dataAddr[68] = (void*) (&localB->SiMappedEngine_o3);
  dataAddr[69] = (void*) (&localB->SiMappedEngine_o4);
  dataAddr[70] = (void*) (&localB->SiMappedEngine_o5);
  dataAddr[71] = (void*) (&localB->SiMappedEngine_o6);
  dataAddr[72] = (void*) (&localB->SiMappedEngine_o7);
  dataAddr[73] = (void*) (&localB->SiMappedEngine_o8);
  dataAddr[74] = (void*) (&localB->SiMappedEngine_o9);
  dataAddr[75] = (void*) (&localB->SiMappedEngine_o10);
  dataAddr[76] = (void*) (&localB->SiMappedEngine_o11);
  dataAddr[77] = (void*) (&localB->SiMappedEngine_o12);
  dataAddr[78] = (void*) (&localB->SiMappedEngine_o13);
  dataAddr[79] = (void*) (&localB->SiMappedEngine_o14);
  dataAddr[80] = (void*) (&localB->SiMappedEngine_o15);
  dataAddr[81] = (void*) (&localB->FuelMassFlw);
  dataAddr[82] = (void*) (&localB->IntkGasMassFlw);
  dataAddr[83] = (void*) (&localB->NrmlzdAirChrg);
  dataAddr[84] = (void*) (&localB->ExhManGasTemp);
  dataAddr[85] = (void*) (&localB->Afr);
  dataAddr[86] = (void*) (&localB->SiMappedEngine_o21);
  dataAddr[87] = (void*) (&localB->SiMappedEngine_o22);
  dataAddr[88] = (void*) (&localB->SiMappedEngine_o23);
  dataAddr[89] = (void*) (&localB->SiMappedEngine_o24);
  dataAddr[90] = (void*) (&localB->SiMappedEngine_o25);
  dataAddr[91] = (void*) (&localB->SiMappedEngine_o26);
  dataAddr[92] = (void*) (&localB->SiMappedEngine_o27);
  dataAddr[93] = (void*) (&localB->SiMappedEngine_o28);
  dataAddr[94] = (void*) (&localB->SiMappedEngine_o29);
  dataAddr[95] = (void*) (&localB->Bsfc);
  dataAddr[96] = (void*) (&localB->TPHC);
  dataAddr[97] = (void*) (&localB->TPCO);
  dataAddr[98] = (void*) (&localB->TPNOx);
  dataAddr[99] = (void*) (&localB->SiMappedEngine_o34);
  dataAddr[100] = (void*) (&localB->SiMappedEngine_o35);
  dataAddr[101] = (void*) (&localB->SiMappedEngine_o36);
  dataAddr[102] = (void*) (&localB->SiMappedEngine_o37);
  dataAddr[103] = (void*) (&localB->SiMappedEngine_o38);
  dataAddr[104] = (void*) (&localB->FuelVolFlw);
  dataAddr[105] = (void*) (&localB->radstorpm);
  dataAddr[106] = (void*) (&localB->ElectronicThrottleActuatorDynamics);
  dataAddr[107] = (void*) (&localB->SensorDynamics);
  dataAddr[108] = (void*) (&localB->EngTrq);
  dataAddr[109] = (void*) (&localB->Gain_i);
  dataAddr[110] = (void*) (&localB->Gain1);
  dataAddr[111] = (void*) (&localB->Gain2);
  dataAddr[112] = (void*) (&localB->Gain3);
  dataAddr[113] = (void*) (&localB->Kgtog_b);
  dataAddr[114] = (void*) (&localB->Kgtog_h);
  dataAddr[115] = (void*) (&localB->Kgtog);
  dataAddr[116] = (void*) (&localB->Kgtog_i);
  dataAddr[117] = (void*) (&localB->mtokm);
  dataAddr[118] = (void*) (&localB->mtomi);
  dataAddr[119] = (void*) (&localB->Integrator);
  dataAddr[120] = (void*) (&localB->Integrator1_m);
  dataAddr[121] = (void*) (&localB->Integrator2);
  dataAddr[122] = (void*) (&localB->Integrator3);
  dataAddr[123] = (void*) (&localB->Integrator4);
  dataAddr[124] = (void*) (&localB->Saturation);
  dataAddr[125] = (void*) (&localB->Saturation1_c);
  dataAddr[126] = (void*) (&localB->BattFuel);
  dataAddr[127] = (void*) (&localB->Kgtom3CaliforniaPhaseIIGasolineSG);
  dataAddr[128] = (void*) (&localB->mto100Km);
  dataAddr[129] = (void*) (&localB->distance_mi);
  dataAddr[130] = (void*) (&localB->m3pergal);
  dataAddr[131] = (void*) (&localB->m3toL);
  dataAddr[132] = (void*) (&localB->gal);
  dataAddr[133] = (void*) (&localB->distance_m);
  dataAddr[134] = (void*) (&localB->Integrator1_j);
  dataAddr[135] = (void*) (&localB->Divide);
  dataAddr[136] = (void*) (&localB->Divide1);
  dataAddr[137] = (void*) (&localB->Divide2);
  dataAddr[138] = (void*) (&localB->L100Km);
  dataAddr[139] = (void*) (&localB->Product_p);
  dataAddr[140] = (void*) (&localB->USMPGCalc);
  dataAddr[141] = (void*) (&localB->USMPG);
  dataAddr[142] = (void*) (&localB->Saturation_c);
  dataAddr[143] = (void*) (&localB->Saturation1);
  dataAddr[144] = (void*) (&localB->TotFuel);
  dataAddr[145] = (void*) (&localB->Sqrt);
  dataAddr[146] = (void*) (&localB->ThrPosPctCmd);
  dataAddr[147] = (void*) (&localB->WgAreaPctCmd);
  dataAddr[148] = (void*) (&localB->InjPw);
  dataAddr[149] = (void*) (&localB->SiEngineController_o4);
  dataAddr[150] = (void*) (&localB->SpkAdv);
  dataAddr[151] = (void*) (&localB->IntkCamPhaseCmd);
  dataAddr[152] = (void*) (&localB->ExhCamPhaseCmd);
  dataAddr[153] = (void*) (&localB->SiEngineController_o8);
  dataAddr[154] = (void*) (&localB->SiEngineController_o9);
  dataAddr[155] = (void*) (&localB->SiEngineController_o10);
  dataAddr[156] = (void*) (&localB->SiEngineController_o11);
  dataAddr[157] = (void*) (&localB->SiEngineController_o12);
  dataAddr[158] = (void*) (&localB->SiEngineController_o13);
  dataAddr[159] = (void*) (&localB->SiEngineController_o14);
  dataAddr[160] = (void*) (&localB->TrqCmd);
  dataAddr[161] = (void*) (&localB->LdCmd);
  dataAddr[162] = (void*) (&localB->EstIntkPortMassFlw);
  dataAddr[163] = (void*) (&localB->Clock_l);
  dataAddr[164] = (void*) (&localB->DigitalClock);
  dataAddr[165] = (void*) (&localB->uDLookupTable_a);
  dataAddr[166] = (void*) (&localB->uDLookupTable1);
  dataAddr[167] = (void*) (&localB->uDLookupTable2);
  dataAddr[168] = (void*) (&localB->MathFunction_h);
  dataAddr[169] = (void*) (&localB->Add1);
  dataAddr[170] = (void*) (&localB->Switch_l);
  dataAddr[171] = (void*) (&localB->Clock_n);
  dataAddr[172] = (void*) (&localB->DigitalClock_o);
  dataAddr[173] = (void*) (&localB->uDLookupTable_m);
  dataAddr[174] = (void*) (&localB->uDLookupTable1_b);
  dataAddr[175] = (void*) (&localB->uDLookupTable2_p);
  dataAddr[176] = (void*) (&localB->MathFunction_cy);
  dataAddr[177] = (void*) (&localB->Add1_j);
  dataAddr[178] = (void*) (&localB->Switch_k);
  dataAddr[179] = (void*) (&localB->Clock_h);
  dataAddr[180] = (void*) (&localB->DigitalClock_ob);
  dataAddr[181] = (void*) (&localB->uDLookupTable_n);
  dataAddr[182] = (void*) (&localB->uDLookupTable1_h);
  dataAddr[183] = (void*) (&localB->uDLookupTable2_py);
  dataAddr[184] = (void*) (&localB->MathFunction_n);
  dataAddr[185] = (void*) (&localB->Add1_e);
  dataAddr[186] = (void*) (&localB->Switch_i);
  dataAddr[187] = (void*) (&localB->Clock);
  dataAddr[188] = (void*) (&localB->DigitalClock_m);
  dataAddr[189] = (void*) (&localB->uDLookupTable);
  dataAddr[190] = (void*) (&localB->uDLookupTable1_n);
  dataAddr[191] = (void*) (&localB->uDLookupTable2_o);
  dataAddr[192] = (void*) (&localB->MathFunction_c);
  dataAddr[193] = (void*) (&localB->Add1_j3);
  dataAddr[194] = (void*) (&localB->Switch_j);
  dataAddr[195] = (void*) (&localB->Clock_d);
  dataAddr[196] = (void*) (&localB->DigitalClock_h);
  dataAddr[197] = (void*) (&localB->uDLookupTable_f);
  dataAddr[198] = (void*) (&localB->uDLookupTable1_f);
  dataAddr[199] = (void*) (&localB->uDLookupTable2_m);
  dataAddr[200] = (void*) (&localB->MathFunction_d);
  dataAddr[201] = (void*) (&localB->Add1_f);
  dataAddr[202] = (void*) (&localB->Switch_e);
  dataAddr[203] = (void*) (&localB->Clock_k);
  dataAddr[204] = (void*) (&localB->DigitalClock_o1);
  dataAddr[205] = (void*) (&localB->uDLookupTable_ae);
  dataAddr[206] = (void*) (&localB->uDLookupTable1_l);
  dataAddr[207] = (void*) (&localB->uDLookupTable2_k);
  dataAddr[208] = (void*) (&localB->MathFunction_l);
  dataAddr[209] = (void*) (&localB->Add1_d);
  dataAddr[210] = (void*) (&localB->Switch_ec);
  dataAddr[211] = (void*) (&localB->Clock_p);
  dataAddr[212] = (void*) (&localB->DigitalClock_op);
  dataAddr[213] = (void*) (&localB->uDLookupTable_h);
  dataAddr[214] = (void*) (&localB->uDLookupTable1_lx);
  dataAddr[215] = (void*) (&localB->uDLookupTable2_b);
  dataAddr[216] = (void*) (&localB->MathFunction);
  dataAddr[217] = (void*) (&localB->Add1_g);
  dataAddr[218] = (void*) (&localB->Switch_b);
  dataAddr[219] = (void*) (&localB->BattV);
  dataAddr[220] = (void*) (&localB->MotMapped_o1);
  dataAddr[221] = (void*) (&localB->MotMapped_o2);
  dataAddr[222] = (void*) (&localB->TraceConvert);
  dataAddr[223] = (void*) (&localB->UnitConversion_f);
  dataAddr[224] = (void*) (&localB->UnitConversion1_g);
  dataAddr[225] = (void*) (&localB->UnitConversion2_h);
  dataAddr[226] = (void*) (&localB->TraceConvert_n);
  dataAddr[227] = (void*) (&localB->UnitConversion_d);
  dataAddr[228] = (void*) (&localB->UnitConversion1_f);
  dataAddr[229] = (void*) (&localB->UnitConversion2_j);
  dataAddr[230] = (void*) (&localB->TraceConvert_h);
  dataAddr[231] = (void*) (&localB->UnitConversion_p);
  dataAddr[232] = (void*) (&localB->UnitConversion1_l);
  dataAddr[233] = (void*) (&localB->UnitConversion2_jj);
  dataAddr[234] = (void*) (&localB->TraceConvert_g);
  dataAddr[235] = (void*) (&localB->UnitConversion_i);
  dataAddr[236] = (void*) (&localB->UnitConversion1_n);
  dataAddr[237] = (void*) (&localB->UnitConversion2_n);
  dataAddr[238] = (void*) (&localB->TraceConvert_i);
  dataAddr[239] = (void*) (&localB->UnitConversion_e);
  dataAddr[240] = (void*) (&localB->UnitConversion1_e);
  dataAddr[241] = (void*) (&localB->UnitConversion2_k);
  dataAddr[242] = (void*) (&localB->TraceConvert_m);
  dataAddr[243] = (void*) (&localB->UnitConversion_e4);
  dataAddr[244] = (void*) (&localB->UnitConversion1_o);
  dataAddr[245] = (void*) (&localB->UnitConversion2_g);
  dataAddr[246] = (void*) (&localB->TraceConvert_b);
  dataAddr[247] = (void*) (&localB->UnitConversion_g);
  dataAddr[248] = (void*) (&localB->UnitConversion1_p);
  dataAddr[249] = (void*) (&localB->UnitConversion2_i);
  dataAddr[250] = (void*) (&localB->LogicalOperator);
  dataAddr[251] = (void*) (&localB->Sum7);
  dataAddr[252] = (void*) (&localB->Switch_g);
  dataAddr[253] = (void*) (&localB->UnitConversion_o);
  dataAddr[254] = (void*) (&localB->F[0]);
  dataAddr[255] = (void*) (&localB->G[0]);
  dataAddr[256] = (void*) (&localB->a_star);
  dataAddr[257] = (void*) (&localB->b_star[0]);
  dataAddr[258] = (void*) (&localB->x[0]);
  dataAddr[259] = (void*) (&localB->Gain);
  dataAddr[260] = (void*) (&localB->Divide_h);
  dataAddr[261] = (void*) (&localB->Product);
  dataAddr[262] = (void*) (&localB->Product1);
  dataAddr[263] = (void*) (&localB->Add);
  dataAddr[264] = (void*) (&localB->u_ot);
  dataAddr[265] = (void*) (&localB->ytT);
  dataAddr[266] = (void*) (&localB->etT);
  dataAddr[267] = (void*) (&localB->TrigonometricFunction);
  dataAddr[268] = (void*) (&localB->UnitConversion_n);
  dataAddr[269] = (void*) (&localB->UnitConversion1_ev);
  dataAddr[270] = (void*) (&localB->UnitConversion2);
  dataAddr[271] = (void*) (&localB->VectorConcatenate[0]);
  dataAddr[272] = (void*) (&localB->VectorConcatenate1[0]);
  dataAddr[273] = (void*) (&localB->Integrator2_e);
  dataAddr[274] = (void*) (&localB->Product_c);
  dataAddr[275] = (void*) (&localB->VectorConcatenate[0]);
  dataAddr[276] = (void*) (( &localB->VectorConcatenate[0] + 1));
  dataAddr[277] = (void*) (&localB->Switch_m[0]);
  dataAddr[278] = (void*) (&localB->UnitDelay_p[0]);
  dataAddr[279] = (void*) (&localB->Constant);
  dataAddr[280] = (void*) (&localB->Constant1);
  dataAddr[281] = (void*) (&localB->LogicalOperator1_f);
  dataAddr[282] = (void*) (&localB->LogicalOperator2_i);
  dataAddr[283] = (void*) (&localB->LogicalOperator3_h);
  dataAddr[284] = (void*) (&localB->Accel);
  dataAddr[285] = (void*) (&localB->Saturation_h);
  dataAddr[286] = (void*) (&localB->ut_n);
  dataAddr[287] = (void*) (&localB->Switch1_g);
  dataAddr[288] = (void*) (&localB->Integrator1);
  dataAddr[289] = (void*) (&localB->Divide_b);
  dataAddr[290] = (void*) (&localB->Sum);
  dataAddr[291] = (void*) (&localB->LogicalOperator1);
  dataAddr[292] = (void*) (&localB->LogicalOperator2);
  dataAddr[293] = (void*) (&localB->LogicalOperator3);
  dataAddr[294] = (void*) (&localB->u0);
  dataAddr[295] = (void*) (&localB->Decel);
  dataAddr[296] = (void*) (&localB->ut);
  dataAddr[297] = (void*) (&localB->Switch1_b);
  dataAddr[298] = (void*) (&localB->Decel_m);
  dataAddr[299] = (void*) (&localB->Decel_d);
  dataAddr[300] = (void*) (&localB->u_l);
  dataAddr[301] = (void*) (&localB->NOT_c);
  dataAddr[302] = (void*) (&localB->u);
  dataAddr[303] = (void*) (&localB->NOT);
  dataAddr[304] = (void*) (&localB->u_l);
  dataAddr[305] = (void*) (&localB->u);
  dataAddr[306] = (void*) (&Blazer_Plant_Model_P.Constant_Value_n);
  dataAddr[307] = (void*) (&Blazer_Plant_Model_P.DT_SELECTOR_Value);
  dataAddr[308] = (void*) (&Blazer_Plant_Model_P.HiLAct_Value);
  dataAddr[309] = (void*) (&Blazer_Plant_Model_P.HiLSwitch_Threshold);
  dataAddr[310] = (void*) (&Blazer_Plant_Model_P.Constant2_Value);
  dataAddr[311] = (void*) (&Blazer_Plant_Model_P.Constant3_Value);
  dataAddr[312] = (void*) (&Blazer_Plant_Model_P.Constant6_Value);
  dataAddr[313] = (void*) (&Blazer_Plant_Model_P.Constant7_Value);
  dataAddr[314] = (void*) (&Blazer_Plant_Model_P.MILActive_Value);
  dataAddr[315] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_i);
  dataAddr[316] = (void*) (&Blazer_Plant_Model_P.Switch1_Threshold);
  dataAddr[317] = (void*) (&Blazer_Plant_Model_P.Gain_Gain_c);
  dataAddr[318] = (void*) (&Blazer_Plant_Model_P.Gain1_Gain_c);
  dataAddr[319] = (void*) (&Blazer_Plant_Model_P.Gain2_Gain);
  dataAddr[320] = (void*) (&Blazer_Plant_Model_P.Gain3_Gain);
  dataAddr[321] = (void*) (&Blazer_Plant_Model_P.Gain4_Gain);
  dataAddr[322] = (void*) (&Blazer_Plant_Model_P.Gain5_Gain);
  dataAddr[323] = (void*) (&Blazer_Plant_Model_P.Gain6_Gain);
  dataAddr[324] = (void*) (&Blazer_Plant_Model_P.Gain7_Gain);
  dataAddr[325] = (void*) (&Blazer_Plant_Model_P.Gain8_Gain);
  dataAddr[326] = (void*) (&Blazer_Plant_Model_P.Gain9_Gain);
  dataAddr[327] = (void*) (&Blazer_Plant_Model_P.mstomph_Gain);
  dataAddr[328] = (void*) (&Blazer_Plant_Model_P.radstorpm_Gain_a);
  dataAddr[329] = (void*) (&Blazer_Plant_Model_P.Constant_Value_hz);
  dataAddr[330] = (void*) (&Blazer_Plant_Model_P.Constant2_Value_a);
  dataAddr[331] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold);
  dataAddr[332] = (void*) (&Blazer_Plant_Model_P.UnitDelay_InitialCondition);
  dataAddr[333] = (void*) (&Blazer_Plant_Model_P.UnitDelay1_InitialCondition);
  dataAddr[334] = (void*) (&Blazer_Plant_Model_P.UnitDelay10_InitialCondition);
  dataAddr[335] = (void*) (&Blazer_Plant_Model_P.UnitDelay11_InitialCondition);
  dataAddr[336] = (void*) (&Blazer_Plant_Model_P.UnitDelay12_InitialCondition);
  dataAddr[337] = (void*) (&Blazer_Plant_Model_P.UnitDelay2_InitialCondition);
  dataAddr[338] = (void*) (&Blazer_Plant_Model_P.UnitDelay4_InitialCondition);
  dataAddr[339] = (void*) (&Blazer_Plant_Model_P.UnitDelay5_InitialCondition);
  dataAddr[340] = (void*) (&Blazer_Plant_Model_P.UnitDelay6_InitialCondition);
  dataAddr[341] = (void*) (&Blazer_Plant_Model_P.UnitDelay7_InitialCondition);
  dataAddr[342] = (void*) (&Blazer_Plant_Model_P.UnitDelay8_InitialCondition);
  dataAddr[343] = (void*) (&Blazer_Plant_Model_P.UnitDelay9_InitialCondition);
  dataAddr[344] = (void*) (&Blazer_Plant_Model_P.Saturation_UpperSat_c);
  dataAddr[345] = (void*) (&Blazer_Plant_Model_P.Saturation_LowerSat_j);
  dataAddr[346] = (void*) (&Blazer_Plant_Model_P.Saturation1_UpperSat_f);
  dataAddr[347] = (void*) (&Blazer_Plant_Model_P.Saturation1_LowerSat_m);
  dataAddr[348] = (void*) (&Blazer_Plant_Model_P.BatteryDischargeDynamics_A);
  dataAddr[349] = (void*) (&Blazer_Plant_Model_P.BatteryDischargeDynamics_C);
  dataAddr[350] = (void*) (&Blazer_Plant_Model_P.CouplingDynamics1_A);
  dataAddr[351] = (void*) (&Blazer_Plant_Model_P.CouplingDynamics1_C);
  dataAddr[352] = (void*) (&Blazer_Plant_Model_P.MotorCouplingDynamics_A);
  dataAddr[353] = (void*) (&Blazer_Plant_Model_P.MotorCouplingDynamics_C);
  dataAddr[354] = (void*) (&Blazer_Plant_Model_P.radstorpm_Gain);
  dataAddr[355] = (void*)
    (&Blazer_Plant_Model_P.ElectronicThrottleActuatorDynamics_A);
  dataAddr[356] = (void*)
    (&Blazer_Plant_Model_P.ElectronicThrottleActuatorDynamics_C);
  dataAddr[357] = (void*) (&Blazer_Plant_Model_P.SensorDynamics_A);
  dataAddr[358] = (void*) (&Blazer_Plant_Model_P.SensorDynamics_C);
  dataAddr[359] = (void*) (&Blazer_Plant_Model_P.Saturation1_UpperSat_i);
  dataAddr[360] = (void*) (&Blazer_Plant_Model_P.Saturation1_LowerSat_d);
  dataAddr[361] = (void*) (&Blazer_Plant_Model_P.LongitudinalDriverModel_tau);
  dataAddr[362] = (void*) (&Blazer_Plant_Model_P.LongitudinalDriverModel_L);
  dataAddr[363] = (void*) (&Blazer_Plant_Model_P.Gain_Gain);
  dataAddr[364] = (void*) (&Blazer_Plant_Model_P.Gain1_Gain);
  dataAddr[365] = (void*) (&Blazer_Plant_Model_P.Gain2_Gain_b);
  dataAddr[366] = (void*) (&Blazer_Plant_Model_P.Gain3_Gain_b);
  dataAddr[367] = (void*) (&Blazer_Plant_Model_P.Kgtog_Gain_ji);
  dataAddr[368] = (void*) (&Blazer_Plant_Model_P.Kgtog_Gain_h);
  dataAddr[369] = (void*) (&Blazer_Plant_Model_P.Kgtog_Gain);
  dataAddr[370] = (void*) (&Blazer_Plant_Model_P.Kgtog_Gain_j);
  dataAddr[371] = (void*) (&Blazer_Plant_Model_P.mtokm_Gain);
  dataAddr[372] = (void*) (&Blazer_Plant_Model_P.mtomi_Gain);
  dataAddr[373] = (void*) (&Blazer_Plant_Model_P.Integrator_IC_k);
  dataAddr[374] = (void*) (&Blazer_Plant_Model_P.Integrator1_IC_e);
  dataAddr[375] = (void*) (&Blazer_Plant_Model_P.Integrator2_IC);
  dataAddr[376] = (void*) (&Blazer_Plant_Model_P.Integrator3_IC);
  dataAddr[377] = (void*) (&Blazer_Plant_Model_P.Integrator4_IC);
  dataAddr[378] = (void*) (&Blazer_Plant_Model_P.Saturation_UpperSat_h);
  dataAddr[379] = (void*) (&Blazer_Plant_Model_P.Saturation_LowerSat_c);
  dataAddr[380] = (void*) (&Blazer_Plant_Model_P.Saturation1_UpperSat_o);
  dataAddr[381] = (void*) (&Blazer_Plant_Model_P.Saturation1_LowerSat_l);
  dataAddr[382] = (void*) (&Blazer_Plant_Model_P.USEPAkwhUSgalequivalent_Value);
  dataAddr[383] = (void*) (&Blazer_Plant_Model_P.sperh_Value);
  dataAddr[384] = (void*) (&Blazer_Plant_Model_P.wperkw_Value);
  dataAddr[385] = (void*)
    (&Blazer_Plant_Model_P.CaliforniaPhaseIIGasolinedensitykgm3_Gain);
  dataAddr[386] = (void*)
    (&Blazer_Plant_Model_P.Kgtom3CaliforniaPhaseIIGasolineSG_Gain);
  dataAddr[387] = (void*) (&Blazer_Plant_Model_P.mto100Km_Gain);
  dataAddr[388] = (void*) (&Blazer_Plant_Model_P.mtomile_Gain);
  dataAddr[389] = (void*) (&Blazer_Plant_Model_P.m3pergal_Gain);
  dataAddr[390] = (void*) (&Blazer_Plant_Model_P.m3toL_Gain);
  dataAddr[391] = (void*) (&Blazer_Plant_Model_P.m3toUSGal_Gain);
  dataAddr[392] = (void*) (&Blazer_Plant_Model_P.Integrator_IC);
  dataAddr[393] = (void*) (&Blazer_Plant_Model_P.Integrator1_IC_b);
  dataAddr[394] = (void*) (&Blazer_Plant_Model_P.Saturation_UpperSat_cj);
  dataAddr[395] = (void*) (&Blazer_Plant_Model_P.Saturation_LowerSat_f);
  dataAddr[396] = (void*) (&Blazer_Plant_Model_P.Saturation1_UpperSat);
  dataAddr[397] = (void*) (&Blazer_Plant_Model_P.Saturation1_LowerSat);
  dataAddr[398] = (void*) (&Blazer_Plant_Model_P.repeat_Value_c);
  dataAddr[399] = (void*) (&Blazer_Plant_Model_P.tFinal_Value_h);
  dataAddr[400] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset);
  dataAddr[401] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData_l[0]);
  dataAddr[402] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data_c[0]);
  dataAddr[403] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData[0]);
  dataAddr[404] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data[0]);
  dataAddr[405] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData[0]);
  dataAddr[406] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data[0]);
  dataAddr[407] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_f);
  dataAddr[408] = (void*) (&Blazer_Plant_Model_P.repeat_Value_f);
  dataAddr[409] = (void*) (&Blazer_Plant_Model_P.tFinal_Value_g);
  dataAddr[410] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset_j);
  dataAddr[411] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData_n[0]);
  dataAddr[412] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data_g[0]);
  dataAddr[413] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData_o[0]);
  dataAddr[414] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data_l[0]);
  dataAddr[415] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData_h[0]);
  dataAddr[416] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data_j[0]);
  dataAddr[417] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_j);
  dataAddr[418] = (void*) (&Blazer_Plant_Model_P.repeat_Value_p);
  dataAddr[419] = (void*) (&Blazer_Plant_Model_P.tFinal_Value_n);
  dataAddr[420] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset_g);
  dataAddr[421] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData_c[0]);
  dataAddr[422] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data_h[0]);
  dataAddr[423] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData_h[0]);
  dataAddr[424] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data_e[0]);
  dataAddr[425] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData_j[0]);
  dataAddr[426] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data_l[0]);
  dataAddr[427] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_k);
  dataAddr[428] = (void*) (&Blazer_Plant_Model_P.repeat_Value);
  dataAddr[429] = (void*) (&Blazer_Plant_Model_P.tFinal_Value);
  dataAddr[430] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset_gs);
  dataAddr[431] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData[0]);
  dataAddr[432] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data[0]);
  dataAddr[433] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData_k[0]);
  dataAddr[434] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data_a[0]);
  dataAddr[435] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData_a[0]);
  dataAddr[436] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data_p[0]);
  dataAddr[437] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_o);
  dataAddr[438] = (void*) (&Blazer_Plant_Model_P.repeat_Value_p3);
  dataAddr[439] = (void*) (&Blazer_Plant_Model_P.tFinal_Value_f);
  dataAddr[440] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset_k);
  dataAddr[441] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData_m[0]);
  dataAddr[442] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data_n[0]);
  dataAddr[443] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData_e[0]);
  dataAddr[444] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data_j[0]);
  dataAddr[445] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData_f[0]);
  dataAddr[446] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data_a[0]);
  dataAddr[447] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_k4);
  dataAddr[448] = (void*) (&Blazer_Plant_Model_P.repeat_Value_o);
  dataAddr[449] = (void*) (&Blazer_Plant_Model_P.tFinal_Value_gv);
  dataAddr[450] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset_f);
  dataAddr[451] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData_d[0]);
  dataAddr[452] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data_b[0]);
  dataAddr[453] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData_p[0]);
  dataAddr[454] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data_h[0]);
  dataAddr[455] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData_o[0]);
  dataAddr[456] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data_jw[0]);
  dataAddr[457] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_jc);
  dataAddr[458] = (void*) (&Blazer_Plant_Model_P.repeat_Value_d);
  dataAddr[459] = (void*) (&Blazer_Plant_Model_P.tFinal_Value_l);
  dataAddr[460] = (void*) (&Blazer_Plant_Model_P.HitCrossing_Offset_l);
  dataAddr[461] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_tableData_k[0]);
  dataAddr[462] = (void*) (&Blazer_Plant_Model_P.uDLookupTable_bp01Data_p[0]);
  dataAddr[463] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_tableData_d[0]);
  dataAddr[464] = (void*) (&Blazer_Plant_Model_P.uDLookupTable1_bp01Data_ja[0]);
  dataAddr[465] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_tableData_l[0]);
  dataAddr[466] = (void*) (&Blazer_Plant_Model_P.uDLookupTable2_bp01Data_n[0]);
  dataAddr[467] = (void*) (&Blazer_Plant_Model_P.Switch_Threshold_l);
  dataAddr[468] = (void*) (&Blazer_Plant_Model_P.Zero_Value);
  dataAddr[469] = (void*) (&Blazer_Plant_Model_P.Integrator2_IC_m);
  dataAddr[470] = (void*) (&Blazer_Plant_Model_P.UnitDelay_InitialCondition_c[0]);
  dataAddr[471] = (void*) (&Blazer_Plant_Model_P.Constant_Value_j);
  dataAddr[472] = (void*) (&Blazer_Plant_Model_P.Constant1_Value);
  dataAddr[473] = (void*) (&Blazer_Plant_Model_P.SignalHold_IC);
  dataAddr[474] = (void*) (&Blazer_Plant_Model_P.Constant_Value_h);
  dataAddr[475] = (void*) (&Blazer_Plant_Model_P.u1_UpperSat);
  dataAddr[476] = (void*) (&Blazer_Plant_Model_P.u1_LowerSat);
  dataAddr[477] = (void*) (&Blazer_Plant_Model_P.Saturation_UpperSat);
  dataAddr[478] = (void*) (&Blazer_Plant_Model_P.Saturation_LowerSat);
  dataAddr[479] = (void*) (&Blazer_Plant_Model_P.Integrator1_IC);
  dataAddr[480] = (void*) (&Blazer_Plant_Model_P.Constant_Value);
  dataAddr[481] = (void*) (&Blazer_Plant_Model_P.u0_UpperSat);
  dataAddr[482] = (void*) (&Blazer_Plant_Model_P.u0_LowerSat);
  dataAddr[483] = (void*) (&Blazer_Plant_Model_P.Saturation_UpperSat_a);
  dataAddr[484] = (void*) (&Blazer_Plant_Model_P.Saturation_LowerSat_g);
  dataAddr[485] = (void*) (&Blazer_Plant_Model_P.y_Y0);
  dataAddr[486] = (void*) (&localDW->UnitDelay_DSTATE);
  dataAddr[487] = (void*) (&localDW->UnitDelay1_DSTATE);
  dataAddr[488] = (void*) (&localDW->UnitDelay10_DSTATE);
  dataAddr[489] = (void*) (&localDW->UnitDelay11_DSTATE);
  dataAddr[490] = (void*) (&localDW->UnitDelay12_DSTATE);
  dataAddr[491] = (void*) (&localDW->UnitDelay2_DSTATE);
  dataAddr[492] = (void*) (&localDW->UnitDelay4_DSTATE);
  dataAddr[493] = (void*) (&localDW->UnitDelay5_DSTATE);
  dataAddr[494] = (void*) (&localDW->UnitDelay6_DSTATE);
  dataAddr[495] = (void*) (&localDW->UnitDelay7_DSTATE);
  dataAddr[496] = (void*) (&localDW->UnitDelay8_DSTATE);
  dataAddr[497] = (void*) (&localDW->UnitDelay9_DSTATE);
  dataAddr[498] = (void*) (&localX->BatteryDischargeDynamics_CSTATE);
  dataAddr[499] = (void*) (&localX->CouplingDynamics1_CSTATE);
  dataAddr[500] = (void*) (&localX->MotorCouplingDynamics_CSTATE);
  dataAddr[501] = (void*) (&localX->ElectronicThrottleActuatorDynamics_CSTATE);
  dataAddr[502] = (void*) (&localX->SensorDynamics_CSTATE);
  dataAddr[503] = (void*) (&localX->Integrator_CSTATE_a);
  dataAddr[504] = (void*) (&localX->Integrator1_CSTATE_m);
  dataAddr[505] = (void*) (&localX->Integrator2_CSTATE);
  dataAddr[506] = (void*) (&localX->Integrator3_CSTATE);
  dataAddr[507] = (void*) (&localX->Integrator4_CSTATE);
  dataAddr[508] = (void*) (&localX->Integrator_CSTATE);
  dataAddr[509] = (void*) (&localX->Integrator1_CSTATE_n);
  dataAddr[510] = (void*) (&localX->Integrator2_CSTATE_l);
  dataAddr[511] = (void*) (&localDW->UnitDelay_DSTATE_d[0]);
  dataAddr[512] = (void*) (&localX->Integrator1_CSTATE);
  dataAddr[513] = (void*) (&Blazer_Plant_Model_P.A);
  dataAddr[514] = (void*) (&Blazer_Plant_Model_P.B);
  dataAddr[515] = (void*) (&Blazer_Plant_Model_P.BrkPrsMax);
  dataAddr[516] = (void*) (&Blazer_Plant_Model_P.C);
  dataAddr[517] = (void*) (&Blazer_Plant_Model_P.Kpt);
  dataAddr[518] = (void*) (&Blazer_Plant_Model_P.Mass);
  dataAddr[519] = (void*) (&Blazer_Plant_Model_P.g);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void Blazer_Plant_Model_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void Blazer_Plant_Model_InitializeLoggingFunctions(RTWLoggingFcnPtr
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
}

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0, 0 }
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

  { rtwCAPI_MATRIX_COL_MAJOR, 4, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  2,                                   /* 2 */
  1,                                   /* 3 */
  2,                                   /* 4 */
  2,                                   /* 5 */
  1,                                   /* 6 */
  2,                                   /* 7 */
  1370,                                /* 8 */
  1,                                   /* 9 */
  766,                                 /* 10 */
  1,                                   /* 11 */
  241,                                 /* 12 */
  1,                                   /* 13 */
  601,                                 /* 14 */
  1,                                   /* 15 */
  599,                                 /* 16 */
  1,                                   /* 17 */
  1061,                                /* 18 */
  1                                    /* 19 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.0005, 0.5
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
    1, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[0],
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
  { rtBlockSignals, 306,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 180,
    rtModelParameters, 7 },

  { rtBlockStates, 27 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2283801441U,
    3679579392U,
    3647055335U,
    831828469U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Blazer_Plant_Model_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Blazer_Plant_Model_InitializeDataMapInfo(RT_MODEL_Blazer_Plant_Model_T *
  const Blazer_Plant_Model_M, B_Blazer_Plant_Model_c_T *localB,
  DW_Blazer_Plant_Model_f_T *localDW, X_Blazer_Plant_Model_n_T *localX)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Blazer_Plant_Model_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Blazer_Plant_Model_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Blazer_Plant_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  Blazer_Plant_Model_InitializeDataAddr
    (Blazer_Plant_Model_M->DataMapInfo.dataAddress, localB, localDW, localX);
  rtwCAPI_SetDataAddressMap(Blazer_Plant_Model_M->DataMapInfo.mmi,
    Blazer_Plant_Model_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  Blazer_Plant_Model_InitializeVarDimsAddr
    (Blazer_Plant_Model_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(Blazer_Plant_Model_M->DataMapInfo.mmi,
    Blazer_Plant_Model_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(Blazer_Plant_Model_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(Blazer_Plant_Model_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  Blazer_Plant_Model_InitializeLoggingFunctions
    (Blazer_Plant_Model_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(Blazer_Plant_Model_M->DataMapInfo.mmi,
    Blazer_Plant_Model_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Blazer_Plant_Model_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Blazer_Plant_Model_M->DataMapInfo.mmi,
    Blazer_Plant_Model_M->DataMapInfo.childMMI);
  rtwCAPI_SetChildMMIArrayLen(Blazer_Plant_Model_M->DataMapInfo.mmi, 7);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Blazer_Plant_Model_host_InitializeDataMapInfo
    (Blazer_Plant_Model_host_DataMapInfo_T *dataMap, const char *path)
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
    TransmissionController_host_InitializeDataMapInfo(&(dataMap->child0),
      "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/9-speed Transmission Control Module (TCM)");
    dataMap->childMMI[1] = &(dataMap->child1.mmi);
    SiEngineController_host_InitializeDataMapInfo(&(dataMap->child1),
      "Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)/SiEngineController");
    dataMap->childMMI[2] = &(dataMap->child2.mmi);
    DrivetrainHevP4_host_InitializeDataMapInfo(&(dataMap->child2),
      "Blazer_Plant_Model/GM Blazer/Drivetrain/DrivetrainHevP4");
    dataMap->childMMI[3] = &(dataMap->child3.mmi);
    BattHev_host_InitializeDataMapInfo(&(dataMap->child3),
      "Blazer_Plant_Model/GM Blazer/Electric Plant/Battery/Battery");
    dataMap->childMMI[4] = &(dataMap->child4.mmi);
    StarterSystemP2_host_InitializeDataMapInfo(&(dataMap->child4),
      "Blazer_Plant_Model/GM Blazer/Electric Plant/Low Voltage Starting System");
    dataMap->childMMI[5] = &(dataMap->child5.mmi);
    MotMapped_host_InitializeDataMapInfo(&(dataMap->child5),
      "Blazer_Plant_Model/GM Blazer/Electric Plant/Motor/MotMapped");
    dataMap->childMMI[6] = &(dataMap->child6.mmi);
    SiMappedEngine_host_InitializeDataMapInfo(&(dataMap->child6),
      "Blazer_Plant_Model/GM Blazer/Engine/SiMappedEngine");
    rtwCAPI_SetChildMMIArray(dataMap->mmi, dataMap->childMMI);
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 7);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: Blazer_Plant_Model_capi.c */

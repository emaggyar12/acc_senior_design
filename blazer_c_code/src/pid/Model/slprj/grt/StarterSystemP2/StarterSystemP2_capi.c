/*
 * StarterSystemP2_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "StarterSystemP2".
 *
 * Model version              : 1.120
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:34:21 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "StarterSystemP2_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "StarterSystemP2.h"
#include "StarterSystemP2_capi.h"
#include "StarterSystemP2_private.h"
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
  { 0, 8, TARGET_STRING("StarterSystemP2/Switch"),
    TARGET_STRING("StartV"), 0, 0, 0, 0, 0 },

  { 1, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING("I_a"), 0, 0, 0, 0, 0 },

  { 2, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING("I_f"), 0, 0, 0, 0, 0 },

  { 3, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 7, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 8, 8, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 8, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/MinMax"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 15, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 6, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Divide1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 5, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 6, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 24, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Torque Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Signal Conversion"),
    TARGET_STRING("I_f"), 0, 0, 0, 0, 0 },

  { 32, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Integrator1"),
    TARGET_STRING("I_a"), 0, 0, 0, 0, 0 },

  { 33, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Product2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 3, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 2, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 40, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 4, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 42, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 43, 4, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 4, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Unary Minus"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 48, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Product3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 49, 7, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 51, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 52, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 53, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Compare To Constant1/Compare"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 54, 8, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Power Accounting Bus Creator/No PwrStored Input/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 55, TARGET_STRING("StarterSystemP2/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 56, TARGET_STRING("StarterSystemP2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 57, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/div0protect - abs poly"),
    TARGET_STRING("thresh"), 0, 0, 0 },

  { 58, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 59, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 60, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly"),
    TARGET_STRING("thresh"), 0, 0, 0 },

  { 61, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 62, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 63, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Single Effeciency Measurement/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 64, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 65, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Integrator1"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 66, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Integrator1"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 67, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 68, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Electrical Current/div0protect - poly/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 69, TARGET_STRING("StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine Velocity Input/Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 70, TARGET_STRING("StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/Subsystem/Power Accounting Bus Creator/No PwrStored Input/Constant"),
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
  { 71, 0, TARGET_STRING(
    "StarterSystemP2/Bidirectional DC-DC/DC to DC Converter Core Single Efficiency Loss/DC to DC Voltage Response/Integrator"),
    TARGET_STRING(""),
    TARGET_STRING(""),
    0, 0, 0, 0, 0, 1, -1, 0 },

  { 72, 1, TARGET_STRING(
    "StarterSystemP2/Starter/Series Connection DC Machine/Series Connection DC Machine\nVelocity Input/Integrator1"),
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
  { 73, TARGET_STRING("Iafser"), 0, 0, 0 },

  { 74, TARGET_STRING("Lafser"), 0, 0, 0 },

  { 75, TARGET_STRING("Lser"), 0, 0, 0 },

  { 76, TARGET_STRING("Plimit"), 0, 0, 0 },

  { 77, TARGET_STRING("Rser"), 0, 0, 0 },

  { 78, TARGET_STRING("Tc"), 0, 0, 0 },

  { 79, TARGET_STRING("Vinit"), 0, 0, 0 },

  { 80, TARGET_STRING("VoltCmd1"), 0, 0, 0 },

  { 81, TARGET_STRING("eff"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void StarterSystemP2_InitializeDataAddr(void* dataAddr[],
  B_StarterSystemP2_c_T *localB, X_StarterSystemP2_n_T *localX)
{
  dataAddr[0] = (void*) (&localB->StartV);
  dataAddr[1] = (void*) (&localB->I_a);
  dataAddr[2] = (void*) (&localB->I_f);
  dataAddr[3] = (void*) (&localB->Gain_h);
  dataAddr[4] = (void*) (&localB->Product_l);
  dataAddr[5] = (void*) (&localB->Subtract_e);
  dataAddr[6] = (void*) (&localB->Product3);
  dataAddr[7] = (void*) (&localB->I_a);
  dataAddr[8] = (void*) (&localB->Gain1);
  dataAddr[9] = (void*) (&localB->Gain2);
  dataAddr[10] = (void*) (&localB->Integrator);
  dataAddr[11] = (void*) (&localB->MinMax);
  dataAddr[12] = (void*) (&localB->Divide_a);
  dataAddr[13] = (void*) (&localB->Sum);
  dataAddr[14] = (void*) (&localB->Switch_m);
  dataAddr[15] = (void*) (&localB->Divide_m);
  dataAddr[16] = (void*) (&localB->Product_o);
  dataAddr[17] = (void*) (&localB->Add);
  dataAddr[18] = (void*) (&localB->Abs);
  dataAddr[19] = (void*) (&localB->Divide);
  dataAddr[20] = (void*) (&localB->Divide1);
  dataAddr[21] = (void*) (&localB->Product);
  dataAddr[22] = (void*) (&localB->Product1);
  dataAddr[23] = (void*) (&localB->Product2_g);
  dataAddr[24] = (void*) (&localB->Subtract);
  dataAddr[25] = (void*) (&localB->Switch);
  dataAddr[26] = (void*) (&localB->Gain);
  dataAddr[27] = (void*) (&localB->Subtract_c);
  dataAddr[28] = (void*) (&localB->Gain3);
  dataAddr[29] = (void*) (&localB->Gain4);
  dataAddr[30] = (void*) (&localB->TorqueConstant);
  dataAddr[31] = (void*) (&localB->I_f);
  dataAddr[32] = (void*) (&localB->I_a);
  dataAddr[33] = (void*) (&localB->Product_l);
  dataAddr[34] = (void*) (&localB->Product2);
  dataAddr[35] = (void*) (&localB->Product3);
  dataAddr[36] = (void*) (&localB->Sum2);
  dataAddr[37] = (void*) (&localB->Abs_j);
  dataAddr[38] = (void*) (&localB->Fcn_n);
  dataAddr[39] = (void*) (&localB->LogicalOperator_n);
  dataAddr[40] = (void*) (&localB->Switch_f);
  dataAddr[41] = (void*) (&localB->Fcn);
  dataAddr[42] = (void*) (&localB->LogicalOperator);
  dataAddr[43] = (void*) (&localB->Product_p);
  dataAddr[44] = (void*) (&localB->Switch_b);
  dataAddr[45] = (void*) (&localB->Switch1);
  dataAddr[46] = (void*) (&localB->UnaryMinus);
  dataAddr[47] = (void*) (&localB->Gain_h);
  dataAddr[48] = (void*) (&localB->Product3_o);
  dataAddr[49] = (void*) (&localB->Subtract_e);
  dataAddr[50] = (void*) (&localB->Compare_k);
  dataAddr[51] = (void*) (&localB->Compare_j);
  dataAddr[52] = (void*) (&localB->Compare);
  dataAddr[53] = (void*) (&localB->Compare_i);
  dataAddr[54] = (void*) (&localB->Constant);
  dataAddr[55] = (void*) (&StarterSystemP2_P.Constant1_Value);
  dataAddr[56] = (void*) (&StarterSystemP2_P.Switch_Threshold);
  dataAddr[57] = (void*) (&StarterSystemP2_P.div0protectabspoly_thresh);
  dataAddr[58] = (void*) (&StarterSystemP2_P.Constant_Value);
  dataAddr[59] = (void*) (&StarterSystemP2_P.Switch_Threshold_mu);
  dataAddr[60] = (void*) (&StarterSystemP2_P.div0protectpoly_thresh);
  dataAddr[61] = (void*) (&StarterSystemP2_P.Constant1_Value_a);
  dataAddr[62] = (void*) (&StarterSystemP2_P.Constant2_Value);
  dataAddr[63] = (void*) (&StarterSystemP2_P.Switch_Threshold_m);
  dataAddr[64] = (void*) (&StarterSystemP2_P.Gain_Gain_d);
  dataAddr[65] = (void*) (&StarterSystemP2_P.Integrator1_UpperSat);
  dataAddr[66] = (void*) (&StarterSystemP2_P.Integrator1_LowerSat);
  dataAddr[67] = (void*) (&StarterSystemP2_P.Constant_Value_e);
  dataAddr[68] = (void*) (&StarterSystemP2_P.Switch1_Threshold);
  dataAddr[69] = (void*) (&StarterSystemP2_P.Gain_Gain);
  dataAddr[70] = (void*) (&StarterSystemP2_P.Constant_Value_o);
  dataAddr[71] = (void*) (&localX->Integrator_CSTATE);
  dataAddr[72] = (void*) (&localX->Integrator1_CSTATE);
  dataAddr[73] = (void*) (&StarterSystemP2_P.Iafser);
  dataAddr[74] = (void*) (&StarterSystemP2_P.Lafser);
  dataAddr[75] = (void*) (&StarterSystemP2_P.Lser);
  dataAddr[76] = (void*) (&StarterSystemP2_P.Plimit);
  dataAddr[77] = (void*) (&StarterSystemP2_P.Rser);
  dataAddr[78] = (void*) (&StarterSystemP2_P.Tc);
  dataAddr[79] = (void*) (&StarterSystemP2_P.Vinit);
  dataAddr[80] = (void*) (&StarterSystemP2_P.VoltCmd1);
  dataAddr[81] = (void*) (&StarterSystemP2_P.eff);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void StarterSystemP2_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void StarterSystemP2_InitializeLoggingFunctions(RTWLoggingFcnPtr
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
}

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 }
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
  { rtwCAPI_SCALAR, 0, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1                                    /* 1 */
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
  { rtBlockSignals, 55,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 16,
    rtModelParameters, 9 },

  { rtBlockStates, 2 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2037740028U,
    918481801U,
    2524988117U,
    3644491061U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  StarterSystemP2_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void StarterSystemP2_InitializeDataMapInfo(RT_MODEL_StarterSystemP2_T *const
  StarterSystemP2_M, B_StarterSystemP2_c_T *localB, X_StarterSystemP2_n_T
  *localX)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(StarterSystemP2_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(StarterSystemP2_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(StarterSystemP2_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  StarterSystemP2_InitializeDataAddr(StarterSystemP2_M->DataMapInfo.dataAddress,
    localB, localX);
  rtwCAPI_SetDataAddressMap(StarterSystemP2_M->DataMapInfo.mmi,
    StarterSystemP2_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  StarterSystemP2_InitializeVarDimsAddr
    (StarterSystemP2_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(StarterSystemP2_M->DataMapInfo.mmi,
    StarterSystemP2_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(StarterSystemP2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(StarterSystemP2_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  StarterSystemP2_InitializeLoggingFunctions
    (StarterSystemP2_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(StarterSystemP2_M->DataMapInfo.mmi,
    StarterSystemP2_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(StarterSystemP2_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(StarterSystemP2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(StarterSystemP2_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void StarterSystemP2_host_InitializeDataMapInfo
    (StarterSystemP2_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: StarterSystemP2_capi.c */

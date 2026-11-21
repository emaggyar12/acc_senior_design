/*
 * MotMapped_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MotMapped".
 *
 * Model version              : 1.453
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Jan 19 13:29:45 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "MotMapped_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "MotMapped.h"
#include "MotMapped_capi.h"
#include "MotMapped_private.h"
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
  { 0, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 1, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 1, TARGET_STRING(
    "MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Interpolated zero-crossing"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 1, TARGET_STRING(
    "MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Max Torque Limit"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 1, TARGET_STRING(
    "MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 1, TARGET_STRING(
    "MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 14, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 15, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 16, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Electrical Current/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 17, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 18, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Motor Units/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 19, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("Table"), 0, 1, 0 },

  { 20, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 2, 0 },

  { 21, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("BreakpointsForDimension2"), 0, 3, 0 },

  { 22, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabular Power Loss Data/2-D Lookup Table"),
    TARGET_STRING("maxIndex"), 1, 4, 0 },

  { 23, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 24, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Interpolated zero-crossing"),
    TARGET_STRING("Table"), 0, 5, 0 },

  { 25, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Interpolated zero-crossing"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 5, 0 },

  { 26, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Max Torque Limit"),
    TARGET_STRING("Table"), 0, 6, 0 },

  { 27, TARGET_STRING("MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Max Torque Limit"),
    TARGET_STRING("BreakpointsForDimension1"), 0, 6, 0 },

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
  { 28, 0, TARGET_STRING(
    "MotMapped/Mapped Motor/Mapped Motor Core Speed 4/Tabulated Torque-speed Envelope/Integrator"),
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
  { 29, TARGET_STRING("Tc"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void MotMapped_InitializeDataAddr(void* dataAddr[], B_MotMapped_c_T
  *localB, X_MotMapped_n_T *localX)
{
  dataAddr[0] = (void*) (&localB->Saturation);
  dataAddr[1] = (void*) (&localB->Add);
  dataAddr[2] = (void*) (&localB->Gain);
  dataAddr[3] = (void*) (&localB->Gain1_n);
  dataAddr[4] = (void*) (&localB->Add_l);
  dataAddr[5] = (void*) (&localB->Subtract);
  dataAddr[6] = (void*) (&localB->uDLookupTable);
  dataAddr[7] = (void*) (&localB->Product_p);
  dataAddr[8] = (void*) (&localB->Gain1);
  dataAddr[9] = (void*) (&localB->Integrator);
  dataAddr[10] = (void*) (&localB->Interpolatedzerocrossing);
  dataAddr[11] = (void*) (&localB->MaxTorqueLimit);
  dataAddr[12] = (void*) (&localB->Product);
  dataAddr[13] = (void*) (&localB->Sum);
  dataAddr[14] = (void*) (&MotMapped_P.Constant_Value);
  dataAddr[15] = (void*) (&MotMapped_P.Saturation_UpperSat);
  dataAddr[16] = (void*) (&MotMapped_P.Saturation_LowerSat);
  dataAddr[17] = (void*) (&MotMapped_P.Gain_Gain);
  dataAddr[18] = (void*) (&MotMapped_P.Gain1_Gain);
  dataAddr[19] = (void*) (&MotMapped_P.uDLookupTable_tableData[0]);
  dataAddr[20] = (void*) (&MotMapped_P.uDLookupTable_bp01Data[0]);
  dataAddr[21] = (void*) (&MotMapped_P.uDLookupTable_bp02Data[0]);
  dataAddr[22] = (void*) (&MotMapped_P.uDLookupTable_maxIndex[0]);
  dataAddr[23] = (void*) (&MotMapped_P.Integrator_IC);
  dataAddr[24] = (void*) (&MotMapped_P.Interpolatedzerocrossing_tableData[0]);
  dataAddr[25] = (void*) (&MotMapped_P.Interpolatedzerocrossing_bp01Data[0]);
  dataAddr[26] = (void*) (&MotMapped_P.MaxTorqueLimit_tableData[0]);
  dataAddr[27] = (void*) (&MotMapped_P.MaxTorqueLimit_bp01Data[0]);
  dataAddr[28] = (void*) (&localX->Integrator_CSTATE);
  dataAddr[29] = (void*) (&MotMapped_P.Tc);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void MotMapped_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void MotMapped_InitializeLoggingFunctions(RTWLoggingFcnPtr loggingPtrs[])
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
}

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
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

  { rtwCAPI_MATRIX_COL_MAJOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  86,                                  /* 2 */
  52,                                  /* 3 */
  1,                                   /* 4 */
  86,                                  /* 5 */
  1,                                   /* 6 */
  52,                                  /* 7 */
  2,                                   /* 8 */
  1,                                   /* 9 */
  1,                                   /* 10 */
  2,                                   /* 11 */
  1,                                   /* 12 */
  65                                   /* 13 */
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
  { rtBlockSignals, 14,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 14,
    rtModelParameters, 1 },

  { rtBlockStates, 1 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2672059202U,
    1848195012U,
    1714705910U,
    3991595871U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  MotMapped_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void MotMapped_InitializeDataMapInfo(RT_MODEL_MotMapped_T *const MotMapped_M,
  B_MotMapped_c_T *localB, X_MotMapped_n_T *localX)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(MotMapped_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(MotMapped_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(MotMapped_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  MotMapped_InitializeDataAddr(MotMapped_M->DataMapInfo.dataAddress, localB,
    localX);
  rtwCAPI_SetDataAddressMap(MotMapped_M->DataMapInfo.mmi,
    MotMapped_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  MotMapped_InitializeVarDimsAddr(MotMapped_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(MotMapped_M->DataMapInfo.mmi,
    MotMapped_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(MotMapped_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(MotMapped_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  MotMapped_InitializeLoggingFunctions(MotMapped_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(MotMapped_M->DataMapInfo.mmi,
    MotMapped_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(MotMapped_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(MotMapped_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(MotMapped_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void MotMapped_host_InitializeDataMapInfo(MotMapped_host_DataMapInfo_T
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

/* EOF: MotMapped_capi.c */

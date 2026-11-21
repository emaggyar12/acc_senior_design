/*
 * TransmissionController_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TransmissionController".
 *
 * Model version              : 1.222
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:34:26 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "TransmissionController_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "TransmissionController.h"
#include "TransmissionController_capi.h"
#include "TransmissionController_private.h"
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
  { 0, 4, TARGET_STRING("TransmissionController/Shift state/Chart"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 1, 4, TARGET_STRING("TransmissionController/Shift state/Chart"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 2, 1, TARGET_STRING("TransmissionController/Shift state/Chart/calc"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 3, 2, TARGET_STRING("TransmissionController/Shift state/Chart/calc_down"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 3, TARGET_STRING("TransmissionController/Shift state/Chart/calc_up"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 5, 1, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Calculate Upshift Threshold"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 1, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Calculate  Downshift Threshold"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 7, 1, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Add1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 8, 1, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Add3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 9, 1, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Add4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 2, TARGET_STRING(
    "TransmissionController/Shift state/Chart/calc_down/Calculate  Downshift Threshold"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 3, TARGET_STRING(
    "TransmissionController/Shift state/Chart/calc_up/Calculate Upshift Threshold"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 12, TARGET_STRING("TransmissionController/Shift state/Chart/calc/SpdThr"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 13, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Calculate Upshift Threshold"),
    TARGET_STRING("maxIndex"), 1, 1, 0 },

  { 14, TARGET_STRING("TransmissionController/Shift state/Chart/calc/Calculate  Downshift Threshold"),
    TARGET_STRING("maxIndex"), 1, 1, 0 },

  { 15, TARGET_STRING("TransmissionController/Shift state/Chart/calc_down/down_th"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 16, TARGET_STRING("TransmissionController/Shift state/Chart/calc_down/Calculate  Downshift Threshold"),
    TARGET_STRING("maxIndex"), 1, 1, 0 },

  { 17, TARGET_STRING("TransmissionController/Shift state/Chart/calc_up/up_th"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 18, TARGET_STRING("TransmissionController/Shift state/Chart/calc_up/Calculate Upshift Threshold"),
    TARGET_STRING("maxIndex"), 1, 1, 0 },

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
  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 19, TARGET_STRING("Dn_Shft_Spd"), 0, 2, 0 },

  { 20, TARGET_STRING("Gear_Dn_bpt"), 0, 3, 0 },

  { 21, TARGET_STRING("Gear_Up_bpt"), 0, 3, 0 },

  { 22, TARGET_STRING("Pdl_Pos_Dn_bpt"), 0, 4, 0 },

  { 23, TARGET_STRING("Pdl_Pos_Up_bpt"), 0, 4, 0 },

  { 24, TARGET_STRING("Up_Shft_Spd"), 0, 2, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void TransmissionController_InitializeDataAddr(void* dataAddr[],
  B_TransmissionController_c_T *localB)
{
  dataAddr[0] = (void*) (&localB->up_th);
  dataAddr[1] = (void*) (&localB->down_th);
  dataAddr[2] = (void*) (&localB->calc.Add4);
  dataAddr[3] = (void*) (&localB->CalculateDownshiftThreshold);
  dataAddr[4] = (void*) (&localB->CalculateUpshiftThreshold);
  dataAddr[5] = (void*) (&localB->calc.CalculateUpshiftThreshold);
  dataAddr[6] = (void*) (&localB->calc.CalculateDownshiftThreshold);
  dataAddr[7] = (void*) (&localB->calc.Add1);
  dataAddr[8] = (void*) (&localB->calc.Add3);
  dataAddr[9] = (void*) (&localB->calc.Add4);
  dataAddr[10] = (void*) (&localB->CalculateDownshiftThreshold);
  dataAddr[11] = (void*) (&localB->CalculateUpshiftThreshold);
  dataAddr[12] = (void*) (&TransmissionController_P.calc.SpdThr_Y0);
  dataAddr[13] = (void*)
    (&TransmissionController_P.calc.CalculateUpshiftThreshold_maxIndex[0]);
  dataAddr[14] = (void*)
    (&TransmissionController_P.calc.CalculateDownshiftThreshold_maxIndex[0]);
  dataAddr[15] = (void*) (&TransmissionController_P.down_th_Y0);
  dataAddr[16] = (void*)
    (&TransmissionController_P.CalculateDownshiftThreshold_maxIndex[0]);
  dataAddr[17] = (void*) (&TransmissionController_P.up_th_Y0);
  dataAddr[18] = (void*)
    (&TransmissionController_P.CalculateUpshiftThreshold_maxIndex[0]);
  dataAddr[19] = (void*) (&TransmissionController_P.Dn_Shft_Spd[0]);
  dataAddr[20] = (void*) (&TransmissionController_P.Gear_Dn_bpt[0]);
  dataAddr[21] = (void*) (&TransmissionController_P.Gear_Up_bpt[0]);
  dataAddr[22] = (void*) (&TransmissionController_P.Pdl_Pos_Dn_bpt[0]);
  dataAddr[23] = (void*) (&TransmissionController_P.Pdl_Pos_Up_bpt[0]);
  dataAddr[24] = (void*) (&TransmissionController_P.Up_Shft_Spd[0]);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void TransmissionController_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void TransmissionController_InitializeLoggingFunctions(RTWLoggingFcnPtr
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

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  2,                                   /* 2 */
  1,                                   /* 3 */
  17,                                  /* 4 */
  8,                                   /* 5 */
  1,                                   /* 6 */
  8,                                   /* 7 */
  1,                                   /* 8 */
  17                                   /* 9 */
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

  { (NULL), (NULL), -1, 0 }
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
  { rtBlockSignals, 12,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 7,
    rtModelParameters, 6 },

  { rtBlockStates, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1074097255U,
    41574217U,
    2635287756U,
    3358484016U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  TransmissionController_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void TransmissionController_InitializeDataMapInfo
  (RT_MODEL_TransmissionController_T *const TransmissionController_M,
   B_TransmissionController_c_T *localB)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(TransmissionController_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(TransmissionController_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(TransmissionController_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  TransmissionController_InitializeDataAddr
    (TransmissionController_M->DataMapInfo.dataAddress, localB);
  rtwCAPI_SetDataAddressMap(TransmissionController_M->DataMapInfo.mmi,
    TransmissionController_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  TransmissionController_InitializeVarDimsAddr
    (TransmissionController_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(TransmissionController_M->DataMapInfo.mmi,
    TransmissionController_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(TransmissionController_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(TransmissionController_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  TransmissionController_InitializeLoggingFunctions
    (TransmissionController_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(TransmissionController_M->DataMapInfo.mmi,
    TransmissionController_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(TransmissionController_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(TransmissionController_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(TransmissionController_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void TransmissionController_host_InitializeDataMapInfo
    (TransmissionController_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: TransmissionController_capi.c */

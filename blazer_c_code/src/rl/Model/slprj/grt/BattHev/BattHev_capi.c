/*
 * BattHev_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "BattHev".
 *
 * Model version              : 1.5720
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 16:36:55 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BattHev_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "BattHev.h"
#include "BattHev_capi.h"
#include "BattHev_private.h"
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
  { 0, 2, TARGET_STRING("BattHev/SOC_INIT_DEV"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Info Bus/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 2, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Info Bus/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 3, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Info Bus/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Info Bus/Add"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 5, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Charge Model/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Charge Model/Integrator Limited"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 7, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Charge Model/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/State of Charge Capacity/Divide"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 9, 2, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 10, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Em"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/R"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 14, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Product"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 15, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Product1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 2, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/Subtract"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 17, TARGET_STRING("BattHev/SOC Ratio to %"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 18, TARGET_STRING("BattHev/SOC_INIT_DEV"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 19, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Info Bus/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 20, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Info Bus/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 21, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Charge Model/Integrator Limited"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 22, TARGET_STRING("BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Voltage and Power Calculation/R"),
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
  { 23, 0, TARGET_STRING(
    "BattHev/Lithium Ion Battery Pack/Datasheet Battery External/Datasheet Battery/Charge Model/Integrator\nLimited"),
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
  { 24, TARGET_STRING("BattChargeMax"), 0, 0, 0 },

  { 25, TARGET_STRING("BattTempBp"), 0, 2, 0 },

  { 26, TARGET_STRING("CapLUTBp"), 0, 3, 0 },

  { 27, TARGET_STRING("CapSOCBp"), 0, 4, 0 },

  { 28, TARGET_STRING("Em"), 0, 3, 0 },

  { 29, TARGET_STRING("Np"), 0, 0, 0 },

  { 30, TARGET_STRING("Ns"), 0, 0, 0 },

  { 31, TARGET_STRING("RInt"), 0, 5, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void BattHev_InitializeDataAddr(void* dataAddr[], B_BattHev_c_T *localB,
  X_BattHev_n_T *localX)
{
  dataAddr[0] = (void*) (&localB->SOC_INIT_DEV);
  dataAddr[1] = (void*) (&localB->Gain);
  dataAddr[2] = (void*) (&localB->Gain1_j);
  dataAddr[3] = (void*) (&localB->Product_e);
  dataAddr[4] = (void*) (&localB->Add);
  dataAddr[5] = (void*) (&localB->Gain1);
  dataAddr[6] = (void*) (&localB->IntegratorLimited);
  dataAddr[7] = (void*) (&localB->Switch);
  dataAddr[8] = (void*) (&localB->Divide);
  dataAddr[9] = (void*) (&localB->Gain2);
  dataAddr[10] = (void*) (&localB->Gain3);
  dataAddr[11] = (void*) (&localB->Gain4);
  dataAddr[12] = (void*) (&localB->Em);
  dataAddr[13] = (void*) (&localB->R);
  dataAddr[14] = (void*) (&localB->Product);
  dataAddr[15] = (void*) (&localB->Product1);
  dataAddr[16] = (void*) (&localB->Subtract);
  dataAddr[17] = (void*) (&BattHev_P.SOCRatioto_Gain);
  dataAddr[18] = (void*) (&BattHev_P.SOC_INIT_DEV_Gain);
  dataAddr[19] = (void*) (&BattHev_P.Gain_Gain);
  dataAddr[20] = (void*) (&BattHev_P.Gain1_Gain);
  dataAddr[21] = (void*) (&BattHev_P.IntegratorLimited_LowerSat);
  dataAddr[22] = (void*) (&BattHev_P.R_maxIndex[0]);
  dataAddr[23] = (void*) (&localX->IntegratorLimited_CSTATE);
  dataAddr[24] = (void*) (&BattHev_P.BattChargeMax);
  dataAddr[25] = (void*) (&BattHev_P.BattTempBp[0]);
  dataAddr[26] = (void*) (&BattHev_P.CapLUTBp[0]);
  dataAddr[27] = (void*) (&BattHev_P.CapSOCBp[0]);
  dataAddr[28] = (void*) (&BattHev_P.Em[0]);
  dataAddr[29] = (void*) (&BattHev_P.Np);
  dataAddr[30] = (void*) (&BattHev_P.Ns);
  dataAddr[31] = (void*) (&BattHev_P.RInt[0]);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void BattHev_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

#endif

#ifndef HOST_CAPI_BUILD

/* Initialize logging function pointers */
static void BattHev_InitializeLoggingFunctions(RTWLoggingFcnPtr loggingPtrs[])
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

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 10, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  2,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  9,                                   /* 5 */
  1,                                   /* 6 */
  101,                                 /* 7 */
  1,                                   /* 8 */
  10,                                  /* 9 */
  9,                                   /* 10 */
  10                                   /* 11 */
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
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
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
  { rtBlockSignals, 17,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 6,
    rtModelParameters, 8 },

  { rtBlockStates, 1 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 993002510U,
    2795777101U,
    3880900906U,
    802899916U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  BattHev_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void BattHev_InitializeDataMapInfo(RT_MODEL_BattHev_T *const BattHev_M,
  B_BattHev_c_T *localB, X_BattHev_n_T *localX)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(BattHev_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(BattHev_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(BattHev_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  BattHev_InitializeDataAddr(BattHev_M->DataMapInfo.dataAddress, localB, localX);
  rtwCAPI_SetDataAddressMap(BattHev_M->DataMapInfo.mmi,
    BattHev_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  BattHev_InitializeVarDimsAddr(BattHev_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(BattHev_M->DataMapInfo.mmi,
    BattHev_M->DataMapInfo.vardimsAddress);

  /* Set Instance specific path */
  rtwCAPI_SetPath(BattHev_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(BattHev_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API logging function pointers into the Real-Time Model Data structure */
  BattHev_InitializeLoggingFunctions(BattHev_M->DataMapInfo.loggingPtrs);
  rtwCAPI_SetLoggingPtrs(BattHev_M->DataMapInfo.mmi,
    BattHev_M->DataMapInfo.loggingPtrs);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(BattHev_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(BattHev_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(BattHev_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void BattHev_host_InitializeDataMapInfo(BattHev_host_DataMapInfo_T *dataMap,
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
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: BattHev_capi.c */

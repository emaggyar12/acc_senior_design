/*
 * Code generation for system model 'BattHev'
 *
 * Model                      : BattHev
 * Model version              : 1.5720
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 16:36:55 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "BattHev_capi.h"
#include "BattHev.h"
#include "BattHev_private.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"

P_BattHev_T BattHev_P = {
  /* Variable: BattChargeMax
   * Referenced by:
   *   '<Root>/Battery_Init'
   *   '<S7>/Constant1'
   *   '<S7>/Integrator Limited'
   *   '<S7>/Switch'
   *   '<S8>/Constant1'
   */
  14.0,

  /* Variable: BattTempBp
   * Referenced by: '<S9>/R'
   */
  { 243.0, 253.0, 263.0, 273.0, 283.0, 293.0, 303.0, 313.0, 323.0 },

  /* Variable: CapLUTBp
   * Referenced by: '<S9>/Em'
   */
  { 0.0, 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.11, 0.12,
    0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.2, 0.21, 0.22, 0.23, 0.24, 0.25,
    0.26, 0.27, 0.28, 0.29, 0.3, 0.31, 0.32, 0.33, 0.34, 0.35, 0.36, 0.37, 0.38,
    0.39, 0.4, 0.41, 0.42, 0.43, 0.44, 0.45, 0.46, 0.47, 0.48, 0.49, 0.5, 0.51,
    0.52, 0.53, 0.54, 0.55, 0.56, 0.57, 0.58, 0.59, 0.6, 0.61, 0.62, 0.63, 0.64,
    0.65, 0.66, 0.67, 0.68, 0.69, 0.7, 0.71, 0.72, 0.73, 0.74, 0.75, 0.76, 0.77,
    0.78, 0.79, 0.8, 0.81, 0.82, 0.83, 0.84, 0.85, 0.86, 0.87, 0.88, 0.89, 0.9,
    0.91, 0.92, 0.93, 0.94, 0.95, 0.96, 0.97, 0.98, 0.99, 1.0 },

  /* Variable: CapSOCBp
   * Referenced by: '<S9>/R'
   */
  { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 },

  /* Variable: Em
   * Referenced by: '<S9>/Em'
   */
  { 2.0, 2.06, 2.12, 2.18, 2.24, 2.3, 2.36, 2.42, 2.48, 2.54, 2.6, 2.66, 2.72,
    2.78, 2.84, 2.9, 2.96, 3.02, 3.08, 3.14, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2,
    3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2,
    3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2,
    3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2,
    3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2,
    3.2, 3.2, 3.2, 3.2, 3.24, 3.28, 3.32, 3.36, 3.4, 3.44, 3.48, 3.52, 3.56, 3.6
  },

  /* Variable: Np
   * Referenced by:
   *   '<S7>/Gain1'
   *   '<S9>/Gain2'
   *   '<S9>/Gain4'
   */
  1.0,

  /* Variable: Ns
   * Referenced by:
   *   '<S9>/Gain1'
   *   '<S9>/Gain3'
   */
  100.0,

  /* Variable: RInt
   * Referenced by: '<S9>/R'
   */
  { 0.109814688, 0.049836474, 0.029304029, 0.01840138, 0.011932284, 0.008328345,
    0.008, 0.008, 0.008, 0.103092784, 0.043126685, 0.024779309, 0.015333014,
    0.010080645, 0.008, 0.008, 0.008, 0.008, 0.094034675, 0.039043436,
    0.022156062, 0.013582343, 0.009256581, 0.008, 0.008, 0.008, 0.008,
    0.085242408, 0.034809094, 0.019742119, 0.011944756, 0.008212077, 0.008,
    0.008, 0.008, 0.008, 0.076665069, 0.031971226, 0.018529241, 0.011390332,
    0.008, 0.008, 0.008, 0.008, 0.008, 0.076665069, 0.029781294, 0.017452007,
    0.010693758, 0.008, 0.008, 0.008, 0.008, 0.008, 0.072185879, 0.027872137,
    0.016508461, 0.010173263, 0.008, 0.008, 0.008, 0.008, 0.008, 0.065506653,
    0.025544823, 0.015329341, 0.009567375, 0.008, 0.008, 0.008, 0.008, 0.008,
    0.062622309, 0.024530471, 0.014836107, 0.009325911, 0.008, 0.008, 0.008,
    0.008, 0.008, 0.058330295, 0.022704697, 0.013911229, 0.008558209, 0.008,
    0.008, 0.008, 0.008, 0.008 },

  /* Expression: 0.7
   * Referenced by: '<Root>/SOC_INIT_DEV'
   */
  0.7,

  /* Expression: 0
   * Referenced by: '<S7>/Integrator Limited'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S4>/Gain'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S4>/Gain1'
   */
  -1.0,

  /* Expression: 100
   * Referenced by: '<Root>/SOC Ratio to %'
   */
  100.0,

  /* Computed Parameter: R_maxIndex
   * Referenced by: '<S9>/R'
   */
  { 8U, 9U }
};

/* System initialize for referenced model: 'BattHev' */
void BattHev_Init(RT_MODEL_BattHev_T * const BattHev_M, DW_BattHev_f_T *localDW,
                  X_BattHev_n_T *localX)
{
  /* InitializeConditions for Integrator: '<S7>/Integrator Limited' */
  if (rtmIsFirstInitCond(BattHev_M)) {
    localX->IntegratorLimited_CSTATE = 0.0;
  }

  localDW->IntegratorLimited_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S7>/Integrator Limited' */
}

/* System reset for referenced model: 'BattHev' */
void BattHev_Reset(RT_MODEL_BattHev_T * const BattHev_M, DW_BattHev_f_T *localDW,
                   X_BattHev_n_T *localX)
{
  /* InitializeConditions for Integrator: '<S7>/Integrator Limited' */
  if (rtmIsFirstInitCond(BattHev_M)) {
    localX->IntegratorLimited_CSTATE = 0.0;
  }

  localDW->IntegratorLimited_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S7>/Integrator Limited' */
}

/* Outputs for referenced model: 'BattHev' */
void BattHev(RT_MODEL_BattHev_T * const BattHev_M, const real_T *rtu_BattCurr,
             const real_T *rtu_BattTemp, real_T *rty_BattSoc, real_T *rty_BattV,
             B_BattHev_c_T *localB, DW_BattHev_f_T *localDW, X_BattHev_n_T
             *localX)
{
  real_T tmp;

  /* Gain: '<S7>/Gain1' */
  tmp = -1.0 / (BattHev_P.Np * 3600.0);
  localB->Gain1 = tmp * *rtu_BattCurr;
  if (rtmIsMajorTimeStep(BattHev_M)) {
    /* Gain: '<Root>/SOC_INIT_DEV' incorporates:
     *  Constant: '<Root>/Battery_Init'
     */
    localB->SOC_INIT_DEV = BattHev_P.SOC_INIT_DEV_Gain * BattHev_P.BattChargeMax;

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    if (localB->SOC_INIT_DEV > BattHev_P.BattChargeMax) {
      localB->Switch = BattHev_P.BattChargeMax;
    } else {
      localB->Switch = localB->SOC_INIT_DEV;
    }

    /* End of Switch: '<S7>/Switch' */
  }

  /* Integrator: '<S7>/Integrator Limited' */
  /* Limited  Integrator  */
  if (localDW->IntegratorLimited_IWORK != 0) {
    localX->IntegratorLimited_CSTATE = localB->Switch;
  }

  if (localX->IntegratorLimited_CSTATE >= BattHev_P.BattChargeMax) {
    if (localX->IntegratorLimited_CSTATE > BattHev_P.BattChargeMax) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(BattHev_M->solverInfo, true);
    }

    localX->IntegratorLimited_CSTATE = BattHev_P.BattChargeMax;
  } else {
    if (localX->IntegratorLimited_CSTATE <= BattHev_P.IntegratorLimited_LowerSat)
    {
      if (localX->IntegratorLimited_CSTATE <
          BattHev_P.IntegratorLimited_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep(BattHev_M->solverInfo, true);
      }

      localX->IntegratorLimited_CSTATE = BattHev_P.IntegratorLimited_LowerSat;
    }
  }

  localB->IntegratorLimited = localX->IntegratorLimited_CSTATE;

  /* End of Integrator: '<S7>/Integrator Limited' */

  /* Product: '<S8>/Divide' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  localB->Divide = localB->IntegratorLimited / BattHev_P.BattChargeMax;

  /* Lookup_n-D: '<S9>/Em' */
  localB->Em = look1_binlcapw(localB->Divide, BattHev_P.CapLUTBp, BattHev_P.Em,
    100U);

  /* Lookup_n-D: '<S9>/R' */
  localB->R = look2_binlcapw(*rtu_BattTemp, localB->Divide, BattHev_P.BattTempBp,
    BattHev_P.CapSOCBp, BattHev_P.RInt, BattHev_P.R_maxIndex, 9U);

  /* Gain: '<S9>/Gain2' */
  tmp = 1.0 / BattHev_P.Np;
  localB->Gain2 = tmp * *rtu_BattCurr;

  /* Product: '<S9>/Product' */
  localB->Product = localB->R * localB->Gain2;

  /* Sum: '<S9>/Subtract' */
  localB->Subtract = localB->Em - localB->Product;

  /* Gain: '<S9>/Gain1' */
  *rty_BattV = BattHev_P.Ns * localB->Subtract;

  /* Product: '<S9>/Product1' */
  localB->Product1 = localB->Product * localB->Gain2;

  /* Gain: '<S9>/Gain3' */
  localB->Gain3 = BattHev_P.Ns * localB->Product1;

  /* Gain: '<S9>/Gain4' */
  localB->Gain4 = BattHev_P.Np * localB->Gain3;

  /* Product: '<S4>/Product' */
  localB->Product_e = *rtu_BattCurr * *rty_BattV;

  /* Gain: '<S4>/Gain' */
  localB->Gain = BattHev_P.Gain_Gain * localB->Product_e;

  /* Gain: '<S4>/Gain1' */
  localB->Gain1_j = BattHev_P.Gain1_Gain * localB->Gain4;

  /* Sum: '<S4>/Add' */
  localB->Add = localB->Gain + localB->Gain1_j;

  /* Gain: '<Root>/SOC Ratio to %' */
  *rty_BattSoc = BattHev_P.SOCRatioto_Gain * localB->Divide;
}

/* Update for referenced model: 'BattHev' */
void BattHev_Update(DW_BattHev_f_T *localDW)
{
  /* Update for Integrator: '<S7>/Integrator Limited' */
  localDW->IntegratorLimited_IWORK = 0;
}

/* Derivatives for referenced model: 'BattHev' */
void BattHev_Deriv(B_BattHev_c_T *localB, X_BattHev_n_T *localX,
                   XDot_BattHev_n_T *localXdot)
{
  boolean_T lsat;
  boolean_T usat;

  /* Derivatives for Integrator: '<S7>/Integrator Limited' */
  lsat = (localX->IntegratorLimited_CSTATE <=
          BattHev_P.IntegratorLimited_LowerSat);
  usat = (localX->IntegratorLimited_CSTATE >= BattHev_P.BattChargeMax);
  if (((!lsat) && (!usat)) || (lsat && (localB->Gain1 > 0.0)) || (usat &&
       (localB->Gain1 < 0.0))) {
    localXdot->IntegratorLimited_CSTATE = localB->Gain1;
  } else {
    /* in saturation */
    localXdot->IntegratorLimited_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S7>/Integrator Limited' */
}

/* Model initialize function */
void BattHev_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, RT_MODEL_BattHev_T *const BattHev_M, B_BattHev_c_T *localB,
  DW_BattHev_f_T *localDW, X_BattHev_n_T *localX, rtwCAPI_ModelMappingInfo
  *rt_ParentMMI, const char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T
  rt_CSTATEIdx)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)BattHev_M, 0,
                sizeof(RT_MODEL_BattHev_T));
  BattHev_M->timingBridge = (timingBridge);

  /* initialize error status */
  rtmSetErrorStatusPointer(BattHev_M, rt_errorStatus);

  /* initialize stop requested flag */
  rtmSetStopRequestedPtr(BattHev_M, rt_stopRequested);

  /* initialize RTWSolverInfo */
  BattHev_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(BattHev_M, rtsiGetSimTimeStepPtr
    (BattHev_M->solverInfo));
  BattHev_M->Timing.stepSize0 = (rtsiGetStepSize(BattHev_M->solverInfo));

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_BattHev_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_BattHev_f_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  {
    BattHev_InitializeDataMapInfo(BattHev_M, localB, localX);
  }

  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (NULL)) && (rt_ChildPath != (NULL))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx,
                        &(BattHev_M->DataMapInfo.mmi));
    rtwCAPI_SetPath(BattHev_M->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex(BattHev_M->DataMapInfo.mmi, rt_CSTATEIdx);
  }
}

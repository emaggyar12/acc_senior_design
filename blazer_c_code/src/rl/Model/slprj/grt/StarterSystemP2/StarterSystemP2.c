/*
 * Code generation for system model 'StarterSystemP2'
 *
 * Model                      : StarterSystemP2
 * Model version              : 1.102
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Jan 19 13:30:11 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "StarterSystemP2_capi.h"
#include "StarterSystemP2.h"
#include "StarterSystemP2_private.h"
#include "rt_powd_snf.h"

P_StarterSystemP2_T StarterSystemP2_P = {
  /* Variable: Iafser
   * Referenced by: '<S23>/Integrator1'
   */
  0.0,

  /* Variable: Lafser
   * Referenced by: '<S23>/Torque Constant'
   */
  0.01,

  /* Variable: Lser
   * Referenced by: '<S23>/Gain3'
   */
  0.06,

  /* Variable: Plimit
   * Referenced by: '<S5>/MaxLdPwr'
   */
  5000.0,

  /* Variable: Rser
   * Referenced by: '<S23>/Gain4'
   */
  0.1,

  /* Variable: Tc
   * Referenced by:
   *   '<S5>/Gain1'
   *   '<S5>/Gain2'
   */
  0.02,

  /* Variable: Vinit
   * Referenced by: '<S5>/Constant1'
   */
  24.0,

  /* Variable: VoltCmd1
   * Referenced by: '<Root>/Constant'
   */
  24.0,

  /* Variable: eff
   * Referenced by: '<S7>/Constant'
   */
  98.0,

  /* Mask Parameter: div0protectpoly_thresh
   * Referenced by:
   *   '<S13>/Constant'
   *   '<S14>/Constant'
   */
  0.001,

  /* Mask Parameter: div0protectabspoly_thresh
   * Referenced by:
   *   '<S10>/Constant'
   *   '<S11>/Constant'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S5>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Switch1'
   */
  0.0,

  /* Expression: 10e6
   * Referenced by: '<S23>/Integrator1'
   */
  1.0E+7,

  /* Expression: -10e6
   * Referenced by: '<S23>/Integrator1'
   */
  -1.0E+7,

  /* Expression: -1
   * Referenced by: '<S24>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Switch'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S7>/Constant1'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S7>/Constant2'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S7>/Switch'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S12>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S5>/Switch'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S8>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S16>/Constant'
   */
  0.0
};

/* System initialize for referenced model: 'StarterSystemP2' */
void StarterSystemP2_Init(RT_MODEL_StarterSystemP2_T * const StarterSystemP2_M,
  DW_StarterSystemP2_f_T *localDW, X_StarterSystemP2_n_T *localX)
{
  /* InitializeConditions for Integrator: '<S5>/Integrator' */
  if (rtmIsFirstInitCond(StarterSystemP2_M)) {
    localX->Integrator_CSTATE = 0.0;
  }

  localDW->Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S5>/Integrator' */

  /* SystemInitialize for Atomic SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
  /* InitializeConditions for Integrator: '<S23>/Integrator1' */
  localX->Integrator1_CSTATE = StarterSystemP2_P.Iafser;

  /* End of SystemInitialize for SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
}

/* System reset for referenced model: 'StarterSystemP2' */
void StarterSystemP2_Reset(RT_MODEL_StarterSystemP2_T * const StarterSystemP2_M,
  DW_StarterSystemP2_f_T *localDW, X_StarterSystemP2_n_T *localX)
{
  /* InitializeConditions for Integrator: '<S5>/Integrator' */
  if (rtmIsFirstInitCond(StarterSystemP2_M)) {
    localX->Integrator_CSTATE = 0.0;
  }

  localDW->Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S5>/Integrator' */

  /* SystemReset for Atomic SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
  /* InitializeConditions for Integrator: '<S23>/Integrator1' */
  localX->Integrator1_CSTATE = StarterSystemP2_P.Iafser;

  /* End of SystemReset for SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
}

/* Outputs for referenced model: 'StarterSystemP2' */
void StarterSystemP2(RT_MODEL_StarterSystemP2_T * const StarterSystemP2_M, const
                     real_T *rtu_MotCrnt, const real_T *rtu_BattV, const real_T *
                     rtu_EngSpd, const real_T *rtu_StartCmd, real_T
                     *rty_StartTrq, real_T *rty_BattCurr, B_StarterSystemP2_c_T *
                     localB, DW_StarterSystemP2_f_T *localDW,
                     X_StarterSystemP2_n_T *localX)
{
  real_T Bias;
  real_T u0;
  if (rtmIsMajorTimeStep(StarterSystemP2_M)) {
    /* Gain: '<S5>/Gain2' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    localB->Gain2 = StarterSystemP2_P.Tc * StarterSystemP2_P.Vinit;
  }

  /* Integrator: '<S5>/Integrator' */
  if (localDW->Integrator_IWORK != 0) {
    localX->Integrator_CSTATE = localB->Gain2;
  }

  localB->Integrator = localX->Integrator_CSTATE;

  /* End of Integrator: '<S5>/Integrator' */

  /* Gain: '<S5>/Gain1' */
  Bias = 1.0 / StarterSystemP2_P.Tc;
  localB->Gain1 = Bias * localB->Integrator;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  if (*rtu_StartCmd > StarterSystemP2_P.Switch_Threshold) {
    localB->StartV = localB->Gain1;
  } else {
    localB->StartV = StarterSystemP2_P.Constant1_Value;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Outputs for Atomic SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
  /* Integrator: '<S23>/Integrator1' */
  /* Limited  Integrator  */
  if (localX->Integrator1_CSTATE >= StarterSystemP2_P.Integrator1_UpperSat) {
    if (localX->Integrator1_CSTATE > StarterSystemP2_P.Integrator1_UpperSat) {
      rtsiSetBlockStateForSolverChangedAtMajorStep(StarterSystemP2_M->solverInfo,
        true);
    }

    localX->Integrator1_CSTATE = StarterSystemP2_P.Integrator1_UpperSat;
  } else {
    if (localX->Integrator1_CSTATE <= StarterSystemP2_P.Integrator1_LowerSat) {
      if (localX->Integrator1_CSTATE < StarterSystemP2_P.Integrator1_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (StarterSystemP2_M->solverInfo, true);
      }

      localX->Integrator1_CSTATE = StarterSystemP2_P.Integrator1_LowerSat;
    }
  }

  localB->I_a = localX->Integrator1_CSTATE;

  /* End of Integrator: '<S23>/Integrator1' */

  /* Gain: '<S23>/Torque Constant' */
  localB->TorqueConstant = StarterSystemP2_P.Lafser * localB->I_a;

  /* Product: '<S23>/Product2' */
  localB->Product2 = localB->TorqueConstant * *rtu_EngSpd;

  /* Gain: '<S23>/Gain4' */
  localB->Gain4 = StarterSystemP2_P.Rser * localB->I_a;

  /* Sum: '<S23>/Sum2' */
  localB->Sum2 = (localB->StartV - localB->Product2) - localB->Gain4;

  /* Gain: '<S23>/Gain3' */
  Bias = 1.0 / StarterSystemP2_P.Lser;
  localB->Gain3 = Bias * localB->Sum2;

  /* Product: '<S23>/Product' */
  localB->Product_l = localB->StartV * localB->I_a;

  /* Product: '<S23>/Product1' */
  *rty_StartTrq = localB->I_a * localB->TorqueConstant;

  /* Product: '<S23>/Product3' */
  localB->Product3 = localB->I_a * localB->Sum2;

  /* SignalConversion: '<S23>/Signal Conversion' */
  localB->I_f = localB->I_a;

  /* Product: '<S24>/Product3' */
  localB->Product3_o = *rtu_EngSpd * *rty_StartTrq;

  /* Gain: '<S24>/Gain' */
  localB->Gain_h = StarterSystemP2_P.Gain_Gain * localB->Product3_o;

  /* Sum: '<S24>/Subtract' */
  localB->Subtract_e = (localB->Product3 - localB->Gain_h) - localB->Product_l;

  /* End of Outputs for SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */

  /* Product: '<S7>/Product' */
  localB->Product = localB->Gain1 * localB->I_a;
  if (rtmIsMajorTimeStep(StarterSystemP2_M)) {
    /* Sum: '<S7>/Subtract' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/Constant1'
     */
    localB->Subtract = StarterSystemP2_P.Constant1_Value_a -
      StarterSystemP2_P.eff;

    /* Product: '<S7>/Divide' incorporates:
     *  Constant: '<S7>/Constant'
     */
    localB->Divide = localB->Subtract / StarterSystemP2_P.eff;

    /* Product: '<S7>/Divide1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    localB->Divide1 = localB->Subtract / StarterSystemP2_P.Constant2_Value;
  }

  /* Switch: '<S7>/Switch' */
  if (localB->Product >= StarterSystemP2_P.Switch_Threshold_m) {
    /* Product: '<S7>/Product1' */
    localB->Product1 = localB->Product * localB->Divide;
    localB->Switch = localB->Product1;
  } else {
    /* Abs: '<S7>/Abs' */
    localB->Abs = fabs(localB->Product);

    /* Product: '<S7>/Product2' */
    localB->Product2_g = localB->Abs * localB->Divide1;
    localB->Switch = localB->Product2_g;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Sum: '<S6>/Add' */
  localB->Add = localB->Product + localB->Switch;
  if (rtmIsMajorTimeStep(StarterSystemP2_M)) {
    /* UnaryMinus: '<S12>/Unary Minus' incorporates:
     *  Constant: '<S12>/Constant'
     */
    localB->UnaryMinus = -StarterSystemP2_P.Constant_Value_e;
  }

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  Bias = -StarterSystemP2_P.div0protectpoly_thresh;
  localB->Compare = (*rtu_BattV >= Bias);

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   */
  localB->Compare_i = (*rtu_BattV <= StarterSystemP2_P.div0protectpoly_thresh);

  /* Logic: '<S12>/Logical Operator' */
  localB->LogicalOperator = (localB->Compare && localB->Compare_i);

  /* Switch: '<S12>/Switch' */
  if (localB->LogicalOperator) {
    /* Fcn: '<S12>/Fcn' */
    Bias = *rtu_BattV / 0.001;
    Bias = rt_powd_snf(Bias, 2.0);
    localB->Fcn = 0.002 / (3.0 - Bias);

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S12>/Constant'
     */
    if (*rtu_BattV >= StarterSystemP2_P.Switch1_Threshold) {
      localB->Switch1 = StarterSystemP2_P.Constant_Value_e;
    } else {
      localB->Switch1 = localB->UnaryMinus;
    }

    /* End of Switch: '<S12>/Switch1' */

    /* Product: '<S12>/Product' */
    localB->Product_p = localB->Switch1 * localB->Fcn;
    localB->Switch_b = localB->Product_p;
  } else {
    localB->Switch_b = *rtu_BattV;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Product: '<S6>/Divide' */
  localB->Divide_m = localB->Add / localB->Switch_b;

  /* Sum: '<Root>/Add' */
  *rty_BattCurr = localB->Divide_m + *rtu_MotCrnt;

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   */
  Bias = -StarterSystemP2_P.div0protectabspoly_thresh;
  localB->Compare_k = (localB->I_a >= Bias);

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   */
  localB->Compare_j = (localB->I_a <=
                       StarterSystemP2_P.div0protectabspoly_thresh);

  /* Logic: '<S9>/Logical Operator' */
  localB->LogicalOperator_n = (localB->Compare_k && localB->Compare_j);

  /* Switch: '<S9>/Switch' */
  if (localB->LogicalOperator_n) {
    /* Fcn: '<S9>/Fcn' */
    Bias = localB->I_a / 0.001;
    Bias = rt_powd_snf(Bias, 2.0);
    localB->Fcn_n = 0.002 / (3.0 - Bias);
    localB->Switch_f = localB->Fcn_n;
  } else {
    /* Abs: '<S9>/Abs' */
    localB->Abs_j = fabs(localB->I_a);
    localB->Switch_f = localB->Abs_j;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Product: '<S5>/Divide' incorporates:
   *  Constant: '<S5>/MaxLdPwr'
   */
  localB->Divide_a = StarterSystemP2_P.Plimit / localB->Switch_f;
  if (rtmIsMajorTimeStep(StarterSystemP2_M)) {
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<S5>/Constant'
     */
    if (StarterSystemP2_P.VoltCmd1 >= StarterSystemP2_P.Switch_Threshold_mu) {
      localB->Switch_m = StarterSystemP2_P.VoltCmd1;
    } else {
      localB->Switch_m = StarterSystemP2_P.Constant_Value;
    }

    /* End of Switch: '<S5>/Switch' */
  }

  /* MinMax: '<S5>/MinMax' */
  u0 = localB->Divide_a;
  Bias = localB->Switch_m;
  if ((u0 < Bias) || rtIsNaN(Bias)) {
    Bias = u0;
  }

  localB->MinMax = Bias;

  /* End of MinMax: '<S5>/MinMax' */

  /* Sum: '<S5>/Sum' */
  localB->Sum = localB->MinMax - localB->Gain1;

  /* Product: '<S6>/Product' */
  localB->Product_o = localB->Divide_m * *rtu_BattV;

  /* Gain: '<S8>/Gain' */
  localB->Gain = StarterSystemP2_P.Gain_Gain_d * localB->Product;
  if (rtmIsMajorTimeStep(StarterSystemP2_M)) {
    /* Constant: '<S16>/Constant' */
    localB->Constant = StarterSystemP2_P.Constant_Value_o;
  }

  /* Sum: '<S8>/Subtract' */
  localB->Subtract_c = (0.0 - localB->Product_o) - localB->Gain;
}

/* Update for referenced model: 'StarterSystemP2' */
void StarterSystemP2_Update(DW_StarterSystemP2_f_T *localDW)
{
  /* Update for Integrator: '<S5>/Integrator' */
  localDW->Integrator_IWORK = 0;
}

/* Derivatives for referenced model: 'StarterSystemP2' */
void StarterSystemP2_Deriv(B_StarterSystemP2_c_T *localB, X_StarterSystemP2_n_T *
  localX, XDot_StarterSystemP2_n_T *localXdot)
{
  boolean_T lsat;
  boolean_T usat;

  /* Derivatives for Integrator: '<S5>/Integrator' */
  localXdot->Integrator_CSTATE = localB->Sum;

  /* Derivatives for Atomic SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
  /* Derivatives for Integrator: '<S23>/Integrator1' */
  lsat = (localX->Integrator1_CSTATE <= StarterSystemP2_P.Integrator1_LowerSat);
  usat = (localX->Integrator1_CSTATE >= StarterSystemP2_P.Integrator1_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (localB->Gain3 > 0.0)) || (usat &&
       (localB->Gain3 < 0.0))) {
    localXdot->Integrator1_CSTATE = localB->Gain3;
  } else {
    /* in saturation */
    localXdot->Integrator1_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S23>/Integrator1' */
  /* End of Derivatives for SubSystem: '<S22>/Series Connection DC Machine Velocity Input' */
}

/* Model initialize function */
void StarterSystemP2_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, RT_MODEL_StarterSystemP2_T *const StarterSystemP2_M,
  B_StarterSystemP2_c_T *localB, DW_StarterSystemP2_f_T *localDW,
  X_StarterSystemP2_n_T *localX, rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)StarterSystemP2_M, 0,
                sizeof(RT_MODEL_StarterSystemP2_T));
  StarterSystemP2_M->timingBridge = (timingBridge);

  /* initialize error status */
  rtmSetErrorStatusPointer(StarterSystemP2_M, rt_errorStatus);

  /* initialize stop requested flag */
  rtmSetStopRequestedPtr(StarterSystemP2_M, rt_stopRequested);

  /* initialize RTWSolverInfo */
  StarterSystemP2_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(StarterSystemP2_M, rtsiGetSimTimeStepPtr
    (StarterSystemP2_M->solverInfo));
  StarterSystemP2_M->Timing.stepSize0 = (rtsiGetStepSize
    (StarterSystemP2_M->solverInfo));

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_StarterSystemP2_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_StarterSystemP2_f_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  {
    StarterSystemP2_InitializeDataMapInfo(StarterSystemP2_M, localB, localX);
  }

  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (NULL)) && (rt_ChildPath != (NULL))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx,
                        &(StarterSystemP2_M->DataMapInfo.mmi));
    rtwCAPI_SetPath(StarterSystemP2_M->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex(StarterSystemP2_M->DataMapInfo.mmi,
      rt_CSTATEIdx);
  }
}

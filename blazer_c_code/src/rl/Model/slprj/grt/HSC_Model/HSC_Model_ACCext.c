/*
 * Code generation for system system '<S12>/ACC ext'
 *
 * Model                      : HSC_Model
 * Model version              : 1.101
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 18:25:45 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "HSC_Model_ACCext.h"

/* Include model header file for global data */
#include "HSC_Model.h"
#include "HSC_Model_private.h"
#include "look2_binlxpw.h"

/* System initialize for atomic system: '<S12>/ACC ext' */
void HSC_Model_ACCext_Init(DW_ACCext_HSC_Model_T *localDW, P_ACCext_HSC_Model_T *
  localP)
{
  /* InitializeConditions for UnitDelay: '<S22>/UD' */
  localDW->UD_DSTATE = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for UnitDelay: '<S23>/UD' */
  localDW->UD_DSTATE_d = localP->DiscreteDerivative1_ICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S24>/Unit Delay' */
  localDW->UnitDelay_DSTATE[0] = localP->UnitDelay_InitialCondition[0];
  localDW->UnitDelay_DSTATE[1] = localP->UnitDelay_InitialCondition[1];

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = localP->UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
  localDW->UnitDelay_DSTATE_d = localP->UnitDelay_InitialCondition_h;

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay2' */
  localDW->UnitDelay2_DSTATE = localP->UnitDelay2_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_f = localP->DiscreteTimeIntegrator_IC_m;
}

/* System reset for atomic system: '<S12>/ACC ext' */
void HSC_Model_ACCext_Reset(DW_ACCext_HSC_Model_T *localDW, P_ACCext_HSC_Model_T
  *localP)
{
  /* InitializeConditions for UnitDelay: '<S22>/UD' */
  localDW->UD_DSTATE = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for UnitDelay: '<S23>/UD' */
  localDW->UD_DSTATE_d = localP->DiscreteDerivative1_ICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S24>/Unit Delay' */
  localDW->UnitDelay_DSTATE[0] = localP->UnitDelay_InitialCondition[0];
  localDW->UnitDelay_DSTATE[1] = localP->UnitDelay_InitialCondition[1];

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = localP->UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
  localDW->UnitDelay_DSTATE_d = localP->UnitDelay_InitialCondition_h;

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay2' */
  localDW->UnitDelay2_DSTATE = localP->UnitDelay2_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_f = localP->DiscreteTimeIntegrator_IC_m;
}

/* Output and update for atomic system: '<S12>/ACC ext' */
void HSC_Model_ACCextTID0(RT_MODEL_HSC_Model_T * const HSC_Model_M, real_T
  rtu_EgoSpd, real_T rtu_TargetRelPos, real_T rtu_TargetRelSpd, real_T rtu_Info,
  real_T rtu_Info_g, real_T rtu_DistInfo, real_T rtu_DistInfo_j, real_T
  rtu_DistInfo_c, B_ACCext_HSC_Model_T *localB, DW_ACCext_HSC_Model_T *localDW,
  P_ACCext_HSC_Model_T *localP)
{
  int_T tid = 0;
  real_T u0;
  real_T u1;
  real_T u2;

  /* Constant: '<S21>/EnginePowerBlock' */
  localB->EnginePowerBlock = localP->EnginePowerBlock_Value;

  /* Constant: '<S21>/MotorPowerBlock' */
  localB->MotorPowerBlock = localP->MotorPowerBlock_Value;

  /* Sum: '<S21>/Add' */
  localB->ACC_pwr_ext = localB->EnginePowerBlock + localB->MotorPowerBlock;

  /* Gain: '<S21>/Multiply' */
  u0 = 1.0 / HSC_Model_P.Re;
  localB->Multiply = u0 * rtu_EgoSpd;

  /* Product: '<S21>/Divide' */
  localB->Divide = localB->ACC_pwr_ext / localB->Multiply;

  /* Gain: '<S21>/Gain1' */
  localB->Gain1 = localP->Gain1_Gain * rtu_EgoSpd;

  /* Lookup_n-D: '<S21>/2-D Lookup Table' */
  localB->uDLookupTable = look2_binlxpw(localB->Divide, localB->Gain1,
    localP->uDLookupTable_bp01Data, localP->uDLookupTable_bp02Data,
    rtP_Reverse_APP, localP->uDLookupTable_maxIndex, 50U);

  /* Constant: '<S21>/FoundationBrakesBlock' */
  localB->FoundationBrakesBlock = localP->FoundationBrakesBlock_Value;

  /* Constant: '<S21>/Constant10' */
  localB->Constant10 = localP->Constant10_Value;

  /* Constant: '<S21>/Constant12' */
  localB->TotalAccelCommandBeforeRoadLoad = localP->Constant12_Value;

  /* Constant: '<S21>/Constant13' */
  localB->TotalForceAfterRoadLoad = localP->Constant13_Value;

  /* Constant: '<S21>/Constant14' */
  localB->SetSpeedCmd = localP->Constant14_Value;

  /* SampleTimeMath: '<S22>/TSamp'
   *
   * About '<S22>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  localB->TSamp = rtu_EgoSpd * localP->TSamp_WtEt;

  /* UnitDelay: '<S22>/UD' */
  localB->Uk1 = localDW->UD_DSTATE;

  /* Sum: '<S22>/Diff' */
  localB->Diff = localB->TSamp - localB->Uk1;

  /* SampleTimeMath: '<S23>/TSamp'
   *
   * About '<S23>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  localB->TSamp_m = localB->Diff * localP->TSamp_WtEt_l;

  /* UnitDelay: '<S23>/UD' */
  localB->Uk1_f = localDW->UD_DSTATE_d;

  /* Sum: '<S23>/Diff' */
  localB->Diff_b = localB->TSamp_m - localB->Uk1_f;

  /* Inport: '<S21>/DistInfo' */
  localB->DistInfo[0] = rtu_DistInfo;
  localB->DistInfo[1] = rtu_DistInfo_j;
  localB->DistInfo[2] = rtu_DistInfo_c;

  /* Gain: '<S21>/Gain2' */
  localB->Gain2 = localP->Gain2_Gain * localB->FoundationBrakesBlock;

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Constant11'
   */
  if (localB->Gain2 > localP->Switch_Threshold) {
    /* Product: '<S21>/Product4' incorporates:
     *  Constant: '<S21>/Constant7'
     */
    localB->Product4 = localP->Constant7_Value * rtu_EgoSpd;

    /* Saturate: '<S21>/Saturation1' */
    u0 = localB->Product4;
    u1 = localP->Saturation1_LowerSat;
    u2 = localP->Saturation1_UpperSat;
    if (u0 > u2) {
      localB->Saturation1 = u2;
    } else if (u0 < u1) {
      localB->Saturation1 = u1;
    } else {
      localB->Saturation1 = u0;
    }

    /* End of Saturate: '<S21>/Saturation1' */

    /* Product: '<S21>/Product' incorporates:
     *  Constant: '<S21>/M*g*Crr'
     */
    localB->Product_h = localP->MgCrr_Value * rtu_EgoSpd;

    /* Product: '<S21>/Product3' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S21>/Constant5'
     *  Constant: '<S21>/RoadGrade'
     */
    localB->Product3 = localP->RoadGrade_Value * localP->Constant_Value *
      localP->Constant5_Value;

    /* Gain: '<S21>/Gain' */
    localB->Gain = localP->Gain_Gain * localB->FoundationBrakesBlock;

    /* Math: '<S21>/Square' */
    localB->Square = rtu_EgoSpd * rtu_EgoSpd;

    /* Product: '<S21>/Product1' */
    localB->Product1 = rtu_EgoSpd * localB->Square;

    /* Product: '<S21>/Product5' incorporates:
     *  Constant: '<S21>/Af'
     *  Constant: '<S21>/Cd'
     *  Constant: '<S21>/Constant1'
     *  Constant: '<S21>/Constant4'
     */
    localB->Product5 = localP->Constant4_Value * localP->Constant1_Value *
      localP->Cd_Value * localP->Af_Value * localB->Product1;

    /* Sum: '<S21>/Add1' */
    localB->Add1 = ((localB->Product5 + localB->Gain) + localB->Product3) +
      localB->Product_h;

    /* Product: '<S21>/Divide4' */
    localB->Divide4 = localB->Add1 / localB->Saturation1;
    localB->Switch = localB->Divide4;
  } else {
    localB->Switch = localP->Constant11_Value;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Product: '<S21>/Product2' */
  localB->Product2 = localB->Switch * rtu_Info;

  /* Product: '<S21>/Divide1' incorporates:
   *  Constant: '<S21>/Constant2'
   */
  localB->Divide1 = localB->Product2 / localP->Constant2_Value;

  /* Product: '<S21>/Divide2' incorporates:
   *  Constant: '<S21>/Constant3'
   */
  localB->Divide2 = localB->uDLookupTable / localP->Constant3_Value;

  /* Product: '<S21>/Divide3' */
  localB->Headway_intrusion = localB->DistInfo[2] / localB->DistInfo[1];

  /* SignalConversion generated from: '<S24>/Vector Concatenate1' */
  localB->VectorConcatenate1[0] = rtu_TargetRelSpd;

  /* SignalConversion generated from: '<S24>/Vector Concatenate1' */
  localB->VectorConcatenate1[1] = rtu_TargetRelSpd;

  /* DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

  /* Product: '<S24>/Product' */
  localB->Product = rtu_TargetRelSpd * rtu_TargetRelSpd;

  /* UnitDelay: '<S24>/Unit Delay' */
  localB->UnitDelay[0] = localDW->UnitDelay_DSTATE[0];
  localB->UnitDelay[1] = localDW->UnitDelay_DSTATE[1];

  /* RelationalOperator: '<S24>/Relational Operator' */
  localB->VectorConcatenate[0] = (rtu_TargetRelSpd > localB->UnitDelay[0]);

  /* RelationalOperator: '<S24>/Relational Operator1' */
  localB->VectorConcatenate[1] = (rtu_TargetRelSpd < localB->UnitDelay[1]);

  /* Switch: '<S24>/Switch' */
  if (localB->VectorConcatenate[0]) {
    localB->Switch_g[0] = localB->VectorConcatenate1[0];
  } else {
    localB->Switch_g[0] = localB->UnitDelay[0];
  }

  if (localB->VectorConcatenate[1]) {
    localB->Switch_g[1] = localB->VectorConcatenate1[1];
  } else {
    localB->Switch_g[1] = localB->UnitDelay[1];
  }

  /* End of Switch: '<S24>/Switch' */

  /* Sum: '<S21>/Minus' */
  localB->Minus = rtu_TargetRelPos - localB->DistInfo[1];

  /* Gain: '<S21>/kph2m//s' */
  localB->SetSpd = localP->kph2ms_Gain * rtu_Info_g;

  /* Sum: '<S21>/Minus1' */
  localB->Minus1 = localB->SetSpd - rtu_EgoSpd;

  /* UnitDelay: '<S21>/Unit Delay1' */
  localB->UnitDelay1 = localDW->UnitDelay1_DSTATE;

  /* Sum: '<S21>/Minus2' */
  localB->Minus2 = rtu_TargetRelSpd - localB->UnitDelay1;

  /* UnitDelay: '<S21>/Unit Delay' */
  localB->UnitDelay_k = localDW->UnitDelay_DSTATE_d;

  /* Sum: '<S21>/Minus3' */
  localB->Minus3 = localB->Minus - localB->UnitDelay_k;

  /* UnitDelay: '<S21>/Unit Delay2' */
  localB->UnitDelay2 = localDW->UnitDelay2_DSTATE;

  /* Sum: '<S21>/Minus4' */
  localB->Minus4 = localB->Minus1 - localB->UnitDelay2;

  /* Sum: '<S21>/Minus5' */
  localB->set_spd_diff = localB->SetSpd - rtu_EgoSpd;

  /* RateTransition: '<S21>/Rate Transition1' */
  if (rtmIsSpecialSampleHit(HSC_Model_M, 1, 0, tid)) {
    localDW->RateTransition1_Buffer = rtu_EgoSpd;
  }

  /* End of RateTransition: '<S21>/Rate Transition1' */

  /* Saturate: '<S21>/Saturation' */
  u0 = localB->Divide1;
  u1 = localP->Saturation_LowerSat;
  u2 = localP->Saturation_UpperSat;
  if (u0 > u2) {
    localB->Saturation = u2;
  } else if (u0 < u1) {
    localB->Saturation = u1;
  } else {
    localB->Saturation = u0;
  }

  /* End of Saturate: '<S21>/Saturation' */

  /* Update for UnitDelay: '<S22>/UD' */
  localDW->UD_DSTATE = localB->TSamp;

  /* Update for UnitDelay: '<S23>/UD' */
  localDW->UD_DSTATE_d = localB->TSamp_m;

  /* Update for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    localP->DiscreteTimeIntegrator_gainval * localB->Product;

  /* Update for UnitDelay: '<S24>/Unit Delay' */
  localDW->UnitDelay_DSTATE[0] = localB->Switch_g[0];
  localDW->UnitDelay_DSTATE[1] = localB->Switch_g[1];

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = rtu_TargetRelSpd;

  /* Update for UnitDelay: '<S21>/Unit Delay' */
  localDW->UnitDelay_DSTATE_d = localB->Minus;

  /* Update for UnitDelay: '<S21>/Unit Delay2' */
  localDW->UnitDelay2_DSTATE = localB->Minus1;

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  (void) (tid);
}

/* Output and update for atomic system: '<S12>/ACC ext' */
void HSC_Model_ACCextTID1(B_ACCext_HSC_Model_T *localB, DW_ACCext_HSC_Model_T
  *localDW, P_ACCext_HSC_Model_T *localP)
{
  int_T tid = 1;

  /* DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  localB->EgoPosition = localDW->DiscreteTimeIntegrator_DSTATE_f;

  /* RateTransition: '<S21>/Rate Transition1' */
  localB->RateTransition1 = localDW->RateTransition1_Buffer;

  /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_f +=
    localP->DiscreteTimeIntegrator_gainval_l * localB->RateTransition1;

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  (void) (tid);
}

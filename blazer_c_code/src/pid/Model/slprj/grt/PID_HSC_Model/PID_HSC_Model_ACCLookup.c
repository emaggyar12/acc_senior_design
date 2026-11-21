/*
 * Code generation for system system '<S12>/ACC Lookup'
 *
 * Model                      : PID_HSC_Model
 * Model version              : 1.159
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 21:03:10 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PID_HSC_Model_ACCLookup.h"

/* Include model header file for global data */
#include "PID_HSC_Model.h"
#include "PID_HSC_Model_private.h"
#include "look2_binlgpw.h"
#include "look2_binlxpw.h"

/* Named constants for Chart: '<S22>/Chart' */
#define PID_HSC_Model_IN_Enter             ((uint8_T)1U)
#define PID_HSC_Model_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define PID_HSC_Model_IN_Stop              ((uint8_T)2U)

/* Named constants for Chart: '<S22>/Chart2' */
#define PID_HSC_Model_IN_DistanceIsLive    ((uint8_T)1U)
#define PID_HSC_Model_IN_Enter_e           ((uint8_T)2U)
#define PID_HSC_Model_IN_TakeLatestDistance ((uint8_T)3U)

/* System initialize for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookup_Init(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP,
  X_ACCLookup_PID_HSC_Model_T *localX)
{
  /* InitializeConditions for Delay: '<S59>/UD' */
  localDW->UD_DSTATE = localP->PIDController1_DifferentiatorICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S66>/Integrator' */
  localDW->Integrator_DSTATE =
    localP->PIDController1_InitialConditionForIntegrator;

  /* InitializeConditions for Delay: '<S22>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator3' */
  localDW->DiscreteTimeIntegrator3_DSTATE = localP->DiscreteTimeIntegrator3_IC;
  localDW->DiscreteTimeIntegrator3_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S28>/Unit Delay' */
  localDW->UnitDelay_DSTATE[0] = localP->UnitDelay_InitialCondition[0];
  localDW->UnitDelay_DSTATE[1] = localP->UnitDelay_InitialCondition[1];

  /* InitializeConditions for Integrator: '<S92>/Integrator3' */
  localX->Integrator3_CSTATE = localP->VehicleBodyTotalRoadLoad_xdot_o;

  /* InitializeConditions for Integrator: '<S83>/Integrator1' */
  localX->Integrator1_CSTATE = localP->VehicleBodyTotalRoadLoad_x_o;

  /* InitializeConditions for UnitDelay: '<S26>/UD' */
  localDW->UD_DSTATE_k = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for UnitDelay: '<S27>/UD' */
  localDW->UD_DSTATE_i = localP->DiscreteDerivative1_ICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_n = localP->DiscreteTimeIntegrator_IC_b;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE = localP->DiscreteTimeIntegrator1_IC;

  /* SystemInitialize for Chart: '<S22>/Chart' */
  localDW->is_active_c7_PID_HSC_Model = 0U;
  localDW->is_c7_PID_HSC_Model = PID_HSC_Model_IN_NO_ACTIVE_CHILD;
  localDW->DistanceTravelled = 0.0;
  localDW->DistanceTraveling = 0.0;
  localB->Switch_e = 0.0;

  /* SystemInitialize for Chart: '<S22>/Chart2' */
  localDW->is_active_c23_PID_HSC_Model = 0U;
  localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_NO_ACTIVE_CHILD;
  localB->LastDistance = 0.0;
}

/* System reset for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookup_Reset(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP,
  X_ACCLookup_PID_HSC_Model_T *localX)
{
  /* InitializeConditions for Delay: '<S59>/UD' */
  localDW->UD_DSTATE = localP->PIDController1_DifferentiatorICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S66>/Integrator' */
  localDW->Integrator_DSTATE =
    localP->PIDController1_InitialConditionForIntegrator;

  /* InitializeConditions for Delay: '<S22>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator3' */
  localDW->DiscreteTimeIntegrator3_DSTATE = localP->DiscreteTimeIntegrator3_IC;
  localDW->DiscreteTimeIntegrator3_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S28>/Unit Delay' */
  localDW->UnitDelay_DSTATE[0] = localP->UnitDelay_InitialCondition[0];
  localDW->UnitDelay_DSTATE[1] = localP->UnitDelay_InitialCondition[1];

  /* InitializeConditions for Integrator: '<S92>/Integrator3' */
  localX->Integrator3_CSTATE = localP->VehicleBodyTotalRoadLoad_xdot_o;

  /* InitializeConditions for Integrator: '<S83>/Integrator1' */
  localX->Integrator1_CSTATE = localP->VehicleBodyTotalRoadLoad_x_o;

  /* InitializeConditions for UnitDelay: '<S26>/UD' */
  localDW->UD_DSTATE_k = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for UnitDelay: '<S27>/UD' */
  localDW->UD_DSTATE_i = localP->DiscreteDerivative1_ICPrevScaledInput;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_n = localP->DiscreteTimeIntegrator_IC_b;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE = localP->DiscreteTimeIntegrator1_IC;

  /* SystemReset for Chart: '<S22>/Chart2' */
  localDW->is_active_c23_PID_HSC_Model = 0U;
  localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_NO_ACTIVE_CHILD;
  localB->LastDistance = 0.0;

  /* SystemReset for Chart: '<S22>/Chart' */
  localDW->is_active_c7_PID_HSC_Model = 0U;
  localDW->is_c7_PID_HSC_Model = PID_HSC_Model_IN_NO_ACTIVE_CHILD;
  localDW->DistanceTravelled = 0.0;
  localDW->DistanceTraveling = 0.0;
  localB->Switch_e = 0.0;
}

/* Outputs for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookupTID0(RT_MODEL_PID_HSC_Model_T * const PID_HSC_Model_M, real_T
  rtu_EgoSpd, real_T rtu_TargetRelPos, real_T rtu_TargetRelSpd, real_T rtu_Info,
  real_T rtu_Info_h, real_T rtu_Info_e, real_T rtu_Info_p, real_T rtu_DistInfo,
  real_T rtu_DistInfo_k, real_T rtu_DistInfo_j, real_T rtu_DistInfo_kj, real_T
  rtu_DistInfo_o, real_T rtu_DistInfo_c, boolean_T rtu_StopLightInfo_j, real_T
  rtu_StopLightInfo_b, boolean_T rtu_StopLightInfo_k, real_T rtu_StopLightInfo_i,
  real_T rtu_StopLightInfo_p, boolean_T rtu_StopLightInfo_n, const real_T
  *rtu_StopLightInfo_l, B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP,
  X_ACCLookup_PID_HSC_Model_T *localX)
{
  int_T tid = 0;
  real_T tmp;
  real_T u;
  real_T u0;
  real_T u2;
  real_T *tmp_0;
  int32_T i;
  boolean_T sf_internal_predicateOutput;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Gain: '<S22>/kph2m//s' */
    localB->SetSpd = localP->kph2ms_Gain * rtu_Info;
  }

  /* Sum: '<S22>/Sum3' */
  localB->SetSpeedError = localB->SetSpd - rtu_EgoSpd;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Gain: '<S71>/Proportional Gain' */
    localB->ProportionalGain = localP->PIDController1_P * localB->SetSpeedError;

    /* Gain: '<S58>/Derivative Gain' */
    localB->DerivativeGain = localP->PIDController1_D * localB->SetSpeedError;

    /* SampleTimeMath: '<S61>/Tsamp'
     *
     * About '<S61>/Tsamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    localB->Tsamp = localB->DerivativeGain * localP->Tsamp_WtEt;

    /* Delay: '<S59>/UD' */
    localB->UD = localDW->UD_DSTATE;

    /* Sum: '<S59>/Diff' */
    localB->Diff = localB->Tsamp - localB->UD;

    /* Sum: '<S76>/Sum Fdbk' */
    localB->SumFdbk = (localB->ProportionalGain + localDW->Integrator_DSTATE) +
      localB->Diff;

    /* Gain: '<S55>/ZeroGain' */
    localB->ZeroGain = localP->ZeroGain_Gain * localB->SumFdbk;

    /* DeadZone: '<S57>/DeadZone' */
    if (localB->SumFdbk > localP->PIDController1_UpperSaturationLimit) {
      /* DeadZone: '<S57>/DeadZone' */
      localB->DeadZone = localB->SumFdbk -
        localP->PIDController1_UpperSaturationLimit;
    } else if (localB->SumFdbk >= localP->PIDController1_LowerSaturationLimit) {
      /* DeadZone: '<S57>/DeadZone' */
      localB->DeadZone = 0.0;
    } else {
      /* DeadZone: '<S57>/DeadZone' */
      localB->DeadZone = localB->SumFdbk -
        localP->PIDController1_LowerSaturationLimit;
    }

    /* End of DeadZone: '<S57>/DeadZone' */

    /* RelationalOperator: '<S55>/NotEqual' */
    localB->NotEqual = (localB->ZeroGain != localB->DeadZone);

    /* Signum: '<S55>/SignPreSat' */
    u = localB->DeadZone;
    if (u < 0.0) {
      /* Signum: '<S55>/SignPreSat' */
      localB->SignPreSat = -1.0;
    } else if (u > 0.0) {
      /* Signum: '<S55>/SignPreSat' */
      localB->SignPreSat = 1.0;
    } else if (u == 0.0) {
      /* Signum: '<S55>/SignPreSat' */
      localB->SignPreSat = 0.0;
    } else {
      /* Signum: '<S55>/SignPreSat' */
      localB->SignPreSat = (rtNaN);
    }

    /* End of Signum: '<S55>/SignPreSat' */

    /* DataTypeConversion: '<S55>/DataTypeConv1' */
    u = floor(localB->SignPreSat);
    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = fmod(u, 256.0);
    }

    /* DataTypeConversion: '<S55>/DataTypeConv1' */
    localB->DataTypeConv1 = (int8_T)(u < 0.0 ? (int32_T)(int8_T)-(int8_T)
      (uint8_T)-u : (int32_T)(int8_T)(uint8_T)u);

    /* Gain: '<S63>/Integral Gain' */
    localB->IntegralGain = localP->PIDController1_I * localB->SetSpeedError;

    /* Signum: '<S55>/SignPreIntegrator' */
    u = localB->IntegralGain;
    if (u < 0.0) {
      /* Signum: '<S55>/SignPreIntegrator' */
      localB->SignPreIntegrator = -1.0;
    } else if (u > 0.0) {
      /* Signum: '<S55>/SignPreIntegrator' */
      localB->SignPreIntegrator = 1.0;
    } else if (u == 0.0) {
      /* Signum: '<S55>/SignPreIntegrator' */
      localB->SignPreIntegrator = 0.0;
    } else {
      /* Signum: '<S55>/SignPreIntegrator' */
      localB->SignPreIntegrator = (rtNaN);
    }

    /* End of Signum: '<S55>/SignPreIntegrator' */

    /* DataTypeConversion: '<S55>/DataTypeConv2' */
    u = floor(localB->SignPreIntegrator);
    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = fmod(u, 256.0);
    }

    /* DataTypeConversion: '<S55>/DataTypeConv2' */
    localB->DataTypeConv2 = (int8_T)(u < 0.0 ? (int32_T)(int8_T)-(int8_T)
      (uint8_T)-u : (int32_T)(int8_T)(uint8_T)u);

    /* RelationalOperator: '<S55>/Equal1' */
    localB->Equal1 = (localB->DataTypeConv1 == localB->DataTypeConv2);

    /* Logic: '<S55>/AND3' */
    localB->AND3 = (localB->NotEqual && localB->Equal1);

    /* Switch: '<S55>/Switch' */
    if (localB->AND3) {
      /* Switch: '<S55>/Switch' incorporates:
       *  Constant: '<S55>/Constant1'
       */
      localB->Switch = localP->Constant1_Value;
    } else {
      /* Switch: '<S55>/Switch' */
      localB->Switch = localB->IntegralGain;
    }

    /* End of Switch: '<S55>/Switch' */

    /* DiscreteIntegrator: '<S66>/Integrator' */
    localB->Integrator = localP->Integrator_gainval * localB->Switch +
      localDW->Integrator_DSTATE;

    /* Sum: '<S75>/Sum' */
    localB->Sum = (localB->ProportionalGain + localB->Integrator) + localB->Diff;

    /* Saturate: '<S73>/Saturation' */
    u0 = localB->Sum;
    u = localP->PIDController1_LowerSaturationLimit;
    u2 = localP->PIDController1_UpperSaturationLimit;
    if (u0 > u2) {
      /* Saturate: '<S73>/Saturation' */
      localB->Saturation = u2;
    } else if (u0 < u) {
      /* Saturate: '<S73>/Saturation' */
      localB->Saturation = u;
    } else {
      /* Saturate: '<S73>/Saturation' */
      localB->Saturation = u0;
    }

    /* End of Saturate: '<S73>/Saturation' */

    /* Saturate: '<S22>/Saturation4' */
    u0 = localB->Saturation;
    u = localP->Saturation4_LowerSat;
    u2 = localP->Saturation4_UpperSat;
    if (u0 > u2) {
      /* Saturate: '<S22>/Saturation4' */
      localB->Saturation4 = u2;
    } else if (u0 < u) {
      /* Saturate: '<S22>/Saturation4' */
      localB->Saturation4 = u;
    } else {
      /* Saturate: '<S22>/Saturation4' */
      localB->Saturation4 = u0;
    }

    /* End of Saturate: '<S22>/Saturation4' */
  }

  /* Inport: '<S22>/DistInfo' */
  localB->DistInfo[0] = rtu_DistInfo;
  localB->DistInfo[1] = rtu_DistInfo_k;
  localB->DistInfo[2] = rtu_DistInfo_j;
  localB->DistInfo[3] = rtu_DistInfo_kj;
  localB->DistInfo[4] = rtu_DistInfo_o;
  localB->DistInfo[5] = rtu_DistInfo_c;

  /* Switch: '<S22>/Switch14' */
  if (localB->DistInfo[4] > localP->Switch14_Threshold) {
    /* MultiPortSwitch: '<S22>/Multiport Switch' */
    switch ((int32_T)*rtu_StopLightInfo_l) {
     case 1:
      /* Gain: '<S22>/Gain3' */
      localB->Gain3 = localP->Gain3_Gain * rtu_EgoSpd;

      /* Lookup_n-D: '<S22>/Medium V1' incorporates:
       *  Gain: '<S22>/Gain3'
       */
      localB->MediumV1 = look2_binlxpw(localB->DistInfo[5], localB->Gain3,
        localP->MediumV1_bp01Data, localP->MediumV1_bp02Data,
        rtP_ACC_Distance_Lookup_Direct_Distance, localP->MediumV1_maxIndex, 22U);

      /* MultiPortSwitch: '<S22>/Multiport Switch' */
      localB->DistanceControllerAccel = localB->MediumV1;
      break;

     case 2:
      /* Gain: '<S22>/Gain4' */
      localB->Gain4 = localP->Gain4_Gain * rtu_EgoSpd;

      /* Lookup_n-D: '<S22>/Medium V2' incorporates:
       *  Gain: '<S22>/Gain4'
       */
      localB->MediumV2 = look2_binlxpw(localB->DistInfo[5], localB->Gain4,
        localP->MediumV2_bp01Data, localP->MediumV2_bp02Data,
        rtP_ACC_Distance_Lookup_Direct_DistanceV2, localP->MediumV2_maxIndex,
        22U);

      /* MultiPortSwitch: '<S22>/Multiport Switch' */
      localB->DistanceControllerAccel = localB->MediumV2;
      break;

     case 3:
      /* Gain: '<S22>/Gain5' */
      localB->Gain5 = localP->Gain5_Gain * rtu_EgoSpd;

      /* Lookup_n-D: '<S22>/Near' incorporates:
       *  Gain: '<S22>/Gain5'
       */
      localB->Near = look2_binlxpw(localB->DistInfo[5], localB->Gain5,
        localP->Near_bp01Data, localP->Near_bp02Data,
        rtP_ACC_Near_Distance_Lookup_Direct, localP->Near_maxIndex, 23U);

      /* MultiPortSwitch: '<S22>/Multiport Switch' */
      localB->DistanceControllerAccel = localB->Near;
      break;

     default:
      /* Gain: '<S22>/Gain6' */
      localB->Gain6 = localP->Gain6_Gain * rtu_EgoSpd;

      /* Lookup_n-D: '<S22>/Far' incorporates:
       *  Gain: '<S22>/Gain6'
       */
      localB->Far = look2_binlxpw(localB->DistInfo[5], localB->Gain6,
        localP->Far_bp01Data, localP->Far_bp02Data,
        rtP_ACC_Far_Distance_Lookup_Direct, localP->Far_maxIndex, 22U);

      /* MultiPortSwitch: '<S22>/Multiport Switch' */
      localB->DistanceControllerAccel = localB->Far;
      break;
    }

    /* End of MultiPortSwitch: '<S22>/Multiport Switch' */

    /* Switch: '<S22>/Switch14' */
    localB->Switch14 = localB->DistanceControllerAccel;
  } else {
    /* Switch: '<S22>/Switch14' incorporates:
     *  Constant: '<S22>/Constant26'
     */
    localB->Switch14 = localP->Constant26_Value;
  }

  /* End of Switch: '<S22>/Switch14' */

  /* Saturate: '<S22>/Saturation1' */
  u0 = localB->Switch14;
  u = localP->Saturation1_LowerSat;
  u2 = localP->Saturation1_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S22>/Saturation1' */
    localB->Saturation1 = u2;
  } else if (u0 < u) {
    /* Saturate: '<S22>/Saturation1' */
    localB->Saturation1 = u;
  } else {
    /* Saturate: '<S22>/Saturation1' */
    localB->Saturation1 = u0;
  }

  /* End of Saturate: '<S22>/Saturation1' */

  /* Product: '<S22>/Divide4' incorporates:
   *  Constant: '<S22>/deceleration'
   */
  localB->Divide4 = rtu_EgoSpd / localP->deceleration_Value;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Delay: '<S22>/Delay One Step' */
    localB->DelayOneStep = localDW->DelayOneStep_DSTATE;

    /* Chart: '<S22>/Chart2' */
    /* Gateway: ACC Controller /ACC Classical/ACC Lookup/Chart2 */
    /* During: ACC Controller /ACC Classical/ACC Lookup/Chart2 */
    if (localDW->is_active_c23_PID_HSC_Model == 0U) {
      /* Entry: ACC Controller /ACC Classical/ACC Lookup/Chart2 */
      localDW->is_active_c23_PID_HSC_Model = 1U;

      /* Entry Internal: ACC Controller /ACC Classical/ACC Lookup/Chart2 */
      /* Transition: '<S24>:5' */
      localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_Enter_e;
    } else {
      switch (localDW->is_c23_PID_HSC_Model) {
       case PID_HSC_Model_IN_DistanceIsLive:
        /* During 'DistanceIsLive': '<S24>:9' */
        if (!rtu_StopLightInfo_j) {
          /* Transition: '<S24>:13' */
          localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_TakeLatestDistance;

          /* Entry 'TakeLatestDistance': '<S24>:12' */
          localB->LastDistance = localB->DelayOneStep;
        } else {
          localB->LastDistance = localB->DelayOneStep;
        }
        break;

       case PID_HSC_Model_IN_Enter_e:
        /* During 'Enter': '<S24>:4' */
        if (rtu_StopLightInfo_j) {
          /* Transition: '<S24>:7' */
          localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_DistanceIsLive;

          /* Entry 'DistanceIsLive': '<S24>:9' */
          localB->LastDistance = localB->DelayOneStep;
        }
        break;

       default:
        /* During 'TakeLatestDistance': '<S24>:12' */
        if (!rtu_StopLightInfo_n) {
          /* Transition: '<S24>:14' */
          localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_Enter_e;
        } else if (rtu_StopLightInfo_j) {
          /* Transition: '<S24>:15' */
          localDW->is_c23_PID_HSC_Model = PID_HSC_Model_IN_DistanceIsLive;

          /* Entry 'DistanceIsLive': '<S24>:9' */
          localB->LastDistance = localB->DelayOneStep;
        }
        break;
      }
    }

    /* End of Chart: '<S22>/Chart2' */

    /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator3' */
    if (rtu_StopLightInfo_j && (localDW->DiscreteTimeIntegrator3_PrevResetState <=
         0)) {
      localDW->DiscreteTimeIntegrator3_DSTATE =
        localP->DiscreteTimeIntegrator3_IC;
    }

    /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator3' */
    localB->DistanceKeepTrack = localDW->DiscreteTimeIntegrator3_DSTATE;

    /* Sum: '<S22>/Minus2' */
    localB->Minus2 = localB->LastDistance - localB->DistanceKeepTrack;

    /* Chart: '<S22>/Chart' */
    /* Gateway: ACC Controller /ACC Classical/ACC Lookup/Chart */
    /* During: ACC Controller /ACC Classical/ACC Lookup/Chart */
    if (localDW->is_active_c7_PID_HSC_Model == 0U) {
      /* Entry: ACC Controller /ACC Classical/ACC Lookup/Chart */
      localDW->is_active_c7_PID_HSC_Model = 1U;

      /* Entry Internal: ACC Controller /ACC Classical/ACC Lookup/Chart */
      /* Transition: '<S23>:2' */
      localDW->is_c7_PID_HSC_Model = PID_HSC_Model_IN_Enter;

      /* Entry 'Enter': '<S23>:1' */
      localB->Switch_e = 0.0;
      localDW->DistanceTravelled = rtu_EgoSpd * rtu_StopLightInfo_p +
        -(rtu_StopLightInfo_p * rtu_StopLightInfo_p);
      localDW->DistanceTraveling = rtu_EgoSpd * rtu_StopLightInfo_p;
    } else if (localDW->is_c7_PID_HSC_Model == 1) {
      /* During 'Enter': '<S23>:1' */
      sf_internal_predicateOutput = ((rtu_StopLightInfo_n &&
        (rtu_StopLightInfo_i == 1.0) && (localDW->DistanceTravelled <
        localB->Minus2) && (localB->Minus2 >= 0.0)) || (rtu_StopLightInfo_n &&
        (rtu_StopLightInfo_i == 0.0) && (localDW->DistanceTraveling >
        localB->Minus2) && (localB->Minus2 >= 0.0)));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:8' */
        localDW->is_c7_PID_HSC_Model = PID_HSC_Model_IN_Stop;

        /* Entry 'Stop': '<S23>:7' */
        localB->Switch_e = 1.0;
      } else {
        localB->Switch_e = 0.0;
        localDW->DistanceTravelled = rtu_EgoSpd * rtu_StopLightInfo_p +
          -(rtu_StopLightInfo_p * rtu_StopLightInfo_p);
        localDW->DistanceTraveling = rtu_EgoSpd * rtu_StopLightInfo_p;
      }
    } else {
      /* During 'Stop': '<S23>:7' */
      sf_internal_predicateOutput = ((!rtu_StopLightInfo_n) ||
        (rtu_StopLightInfo_i == 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:28' */
        localDW->is_c7_PID_HSC_Model = PID_HSC_Model_IN_Enter;

        /* Entry 'Enter': '<S23>:1' */
        localB->Switch_e = 0.0;
        localDW->DistanceTravelled = rtu_EgoSpd * rtu_StopLightInfo_p +
          -(rtu_StopLightInfo_p * rtu_StopLightInfo_p);
        localDW->DistanceTraveling = rtu_EgoSpd * rtu_StopLightInfo_p;
      } else {
        localB->Switch_e = 1.0;
      }
    }

    /* End of Chart: '<S22>/Chart' */

    /* DataTypeConversion: '<S22>/Cast To Boolean1' */
    localB->CastToBoolean1 = (localB->Switch_e != 0.0);
  }

  /* Switch: '<S22>/Switch4' */
  if (localB->CastToBoolean1) {
    /* Lookup_n-D: '<S22>/2-D Lookup Table4' incorporates:
     *  Sum: '<S22>/Minus2'
     */
    localB->uDLookupTable4 = look2_binlxpw(localB->Minus2, rtu_EgoSpd,
      localP->uDLookupTable4_bp01Data, localP->uDLookupTable4_bp02Data,
      rtP_Stoplight_distance_speed_only, localP->uDLookupTable4_maxIndex, 21U);

    /* Saturate: '<S22>/Saturation' */
    u0 = localB->uDLookupTable4;
    u = localP->Saturation_LowerSat;
    u2 = localP->Saturation_UpperSat;
    if (u0 > u2) {
      /* Saturate: '<S22>/Saturation' */
      localB->Saturation_e = u2;
    } else if (u0 < u) {
      /* Saturate: '<S22>/Saturation' */
      localB->Saturation_e = u;
    } else {
      /* Saturate: '<S22>/Saturation' */
      localB->Saturation_e = u0;
    }

    /* End of Saturate: '<S22>/Saturation' */

    /* Switch: '<S22>/Switch4' */
    localB->StopLightAccel = localB->Saturation_e;
  } else {
    /* Switch: '<S22>/Switch4' incorporates:
     *  Constant: '<S22>/Constant10'
     */
    localB->StopLightAccel = localP->Constant10_Value;
  }

  /* End of Switch: '<S22>/Switch4' */

  /* MinMax: '<S22>/Min' */
  u0 = localB->Saturation4;
  u = localB->Saturation1;
  if ((u0 < u) || rtIsNaN(u)) {
    u = u0;
  }

  u0 = localB->StopLightAccel;
  if ((!(u < u0)) && (!rtIsNaN(u0))) {
    u = u0;
  }

  /* MinMax: '<S22>/Min' */
  localB->TotalACCAccel = u;

  /* Switch: '<S22>/Switch1' */
  if (rtu_StopLightInfo_k) {
    /* Switch: '<S22>/Switch1' */
    localB->Switch1 = rtu_StopLightInfo_b;
  } else {
    /* Switch: '<S22>/Switch1' */
    localB->Switch1 = localB->TotalACCAccel;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* Saturate: '<S22>/Saturation3' */
  u0 = localB->Switch1;
  u = localP->Saturation3_LowerSat;
  u2 = localP->Saturation3_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S22>/Saturation3' */
    localB->Saturation3 = u2;
  } else if (u0 < u) {
    /* Saturate: '<S22>/Saturation3' */
    localB->Saturation3 = u;
  } else {
    /* Saturate: '<S22>/Saturation3' */
    localB->Saturation3 = u0;
  }

  /* End of Saturate: '<S22>/Saturation3' */

  /* Product: '<S22>/Product2' */
  localB->Product2 = localB->Saturation3 * rtu_Info_h;

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   */
  localB->Compare = (localB->Product2 != localP->CompareToConstant2_const);

  /* Logic: '<S22>/OR1' */
  localB->OR1 = (rtu_StopLightInfo_k || localB->Compare);

  /* Saturate: '<S22>/Saturation2' */
  u0 = localB->TotalACCAccel;
  u = localP->Saturation2_LowerSat;
  u2 = localP->Saturation2_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S22>/Saturation2' */
    localB->AccelCmd = u2;
  } else if (u0 < u) {
    /* Saturate: '<S22>/Saturation2' */
    localB->AccelCmd = u;
  } else {
    /* Saturate: '<S22>/Saturation2' */
    localB->AccelCmd = u0;
  }

  /* End of Saturate: '<S22>/Saturation2' */

  /* Gain: '<S83>/m1' */
  localB->m1 = localP->VehicleBodyTotalRoadLoad_m * localB->AccelCmd;

  /* UnitConversion: '<S83>/Unit Conversion' */
  /* Unit Conversion - from: deg to: rad
     Expression: output = (0.0174533*input) + (0) */
  localB->UnitConversion = 0.017453292519943295 * rtu_Info_e;

  /* Trigonometry: '<S83>/Trigonometric Function1' */
  u0 = localB->UnitConversion;
  u = sin(u0);
  u0 = cos(u0);

  /* Trigonometry: '<S83>/Trigonometric Function1' */
  localB->TrigonometricFunction1_o1 = u;

  /* Trigonometry: '<S83>/Trigonometric Function1' */
  localB->TrigonometricFunction1_o2 = u0;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Gain: '<S83>/m' incorporates:
     *  Constant: '<S83>/Constant4'
     */
    localB->m = localP->VehicleBodyTotalRoadLoad_m *
      localP->VehicleBodyTotalRoadLoad_g;
  }

  /* Product: '<S83>/Product5' */
  localB->Product5 = localB->TrigonometricFunction1_o1 * localB->m;

  /* Gain: '<S83>/1//m2' */
  localB->um2 = localP->um2_Gain * rtu_EgoSpd;

  /* Trigonometry: '<S83>/Trigonometric Function2' */
  localB->TrigonometricFunction2 = tanh(localB->um2);

  /* Product: '<S83>/Product7' incorporates:
   *  Constant: '<S83>/Constant3'
   */
  localB->Product7 = localP->VehicleBodyTotalRoadLoad_a *
    localB->TrigonometricFunction2;

  /* Product: '<S83>/Product6' */
  localB->Product6 = rtu_EgoSpd * rtu_EgoSpd * localB->TrigonometricFunction2;

  /* Gain: '<S83>/c' */
  localB->c = localP->VehicleBodyTotalRoadLoad_c * localB->Product6;

  /* Gain: '<S83>/b' */
  localB->b = localP->VehicleBodyTotalRoadLoad_b * rtu_EgoSpd;

  /* Sum: '<S83>/Add1' */
  localB->Add1 = (localB->Product7 + localB->c) + localB->b;

  /* Sum: '<S83>/Add2' */
  localB->TotalForce = (localB->m1 + localB->Product5) + localB->Add1;

  /* Switch: '<S22>/Switch3' */
  if (localB->OR1) {
    /* Switch: '<S22>/Switch3' incorporates:
     *  Constant: '<S22>/Constant1'
     */
    localB->ACCReqPwr = localP->Constant1_Value_b;
  } else {
    /* Product: '<S22>/Product3' */
    localB->ACCReqPwr_m = localB->TotalForce * rtu_EgoSpd;

    /* Switch: '<S22>/Switch3' */
    localB->ACCReqPwr = localB->ACCReqPwr_m;
  }

  /* End of Switch: '<S22>/Switch3' */

  /* UnaryMinus: '<S22>/Unary Minus' */
  localB->DistErrFLipped = -localB->DistInfo[2];

  /* Gain: '<S22>/Gain' */
  localB->Gain = localP->Gain_Gain * rtu_EgoSpd;

  /* Lookup_n-D: '<S22>/2-D Lookup Table1' incorporates:
   *  Gain: '<S22>/Gain'
   *  UnaryMinus: '<S22>/Unary Minus'
   */
  localB->uDLookupTable1 = look2_binlgpw(localB->DistErrFLipped, localB->Gain,
    localP->uDLookupTable1_bp01Data, localP->uDLookupTable1_bp02Data,
    rtP_ACC_Distance_Lookup, localP->uDLookupTable1_maxIndex, 17U);
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Constant: '<S22>/Constant2' */
    localB->Constant2 = localP->Constant2_Value;

    /* Constant: '<S22>/Constant21' */
    localB->Constant21 = localP->Constant21_Value;

    /* Constant: '<S22>/Constant22' */
    localB->Constant22 = localP->Constant22_Value;

    /* Constant: '<S22>/Constant23' */
    localB->Constant23 = localP->Constant23_Value;

    /* DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
    localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;
  }

  /* Product: '<S22>/Divide1' incorporates:
   *  Constant: '<S22>/Constant24'
   */
  localB->Divide1 = localB->Product2 / localP->Constant24_Value;

  /* SignalConversion generated from: '<S28>/Vector Concatenate1' */
  localB->VectorConcatenate1[0] = rtu_TargetRelSpd;

  /* SignalConversion generated from: '<S28>/Vector Concatenate1' */
  localB->VectorConcatenate1[1] = rtu_TargetRelSpd;

  /* Product: '<S28>/Product' */
  localB->Product = rtu_TargetRelSpd * rtu_TargetRelSpd;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* UnitDelay: '<S28>/Unit Delay' */
    localB->UnitDelay[0] = localDW->UnitDelay_DSTATE[0];
    localB->UnitDelay[1] = localDW->UnitDelay_DSTATE[1];
  }

  /* RelationalOperator: '<S28>/Relational Operator' */
  localB->VectorConcatenate_e[0] = (rtu_TargetRelSpd > localB->UnitDelay[0]);

  /* RelationalOperator: '<S28>/Relational Operator1' */
  localB->VectorConcatenate_e[1] = (rtu_TargetRelSpd < localB->UnitDelay[1]);

  /* Switch: '<S28>/Switch' */
  if (localB->VectorConcatenate_e[0]) {
    /* Switch: '<S28>/Switch' */
    localB->Switch_l[0] = localB->VectorConcatenate1[0];
  } else {
    /* Switch: '<S28>/Switch' */
    localB->Switch_l[0] = localB->UnitDelay[0];
  }

  if (localB->VectorConcatenate_e[1]) {
    /* Switch: '<S28>/Switch' */
    localB->Switch_l[1] = localB->VectorConcatenate1[1];
  } else {
    /* Switch: '<S28>/Switch' */
    localB->Switch_l[1] = localB->UnitDelay[1];
  }

  /* End of Switch: '<S28>/Switch' */

  /* Gain: '<S22>/Gain2' */
  localB->Gain2 = localP->Gain2_Gain * localB->TotalACCAccel;

  /* Logic: '<S22>/NOT2' */
  localB->NOT2 = !rtu_StopLightInfo_j;

  /* RateTransition: '<S22>/Rate Transition' */
  if (rtmIsMajorTimeStep(PID_HSC_Model_M) && rtmIsSpecialSampleHit(PID_HSC_Model_M, 2, 1,
       tid)) {
    localDW->RateTransition_Buffer = rtu_EgoSpd;

    /* RateTransition: '<S22>/Rate Transition1' */
    localDW->RateTransition1_Buffer = rtu_EgoSpd;

    /* RateTransition: '<S22>/Rate Transition2' */
    localDW->RateTransition2_Buffer = rtu_Info_p;
  }

  /* End of RateTransition: '<S22>/Rate Transition' */

  /* Switch: '<S22>/Switch11' */
  if (localB->NOT2) {
    /* Switch: '<S22>/Switch11' */
    localB->Switch11 = rtu_EgoSpd;
  } else {
    /* Switch: '<S22>/Switch11' incorporates:
     *  Constant: '<S22>/Constant25'
     */
    localB->Switch11 = localP->Constant25_Value;
  }

  /* End of Switch: '<S22>/Switch11' */

  /* Switch: '<S22>/Switch5' */
  if (localB->Gain2 >= localP->Switch5_Threshold) {
    /* Switch: '<S22>/Switch5' incorporates:
     *  Constant: '<S22>/Constant11'
     */
    localB->Switch5 = localP->Constant11_Value;
  } else {
    /* Gain: '<S22>/Gain1' */
    localB->Gain1 = localP->Gain1_Gain * rtu_EgoSpd;

    /* Gain: '<S22>/Multiply' */
    u0 = 1.0 / PID_HSC_Model_P.Re;

    /* Gain: '<S22>/Multiply' */
    localB->Multiply = u0 * rtu_EgoSpd;

    /* Product: '<S22>/Divide' */
    localB->Divide = localB->ACCReqPwr / localB->Multiply;

    /* Lookup_n-D: '<S22>/2-D Lookup Table' incorporates:
     *  Gain: '<S22>/Gain1'
     *  Product: '<S22>/Divide'
     */
    localB->uDLookupTable = look2_binlxpw(localB->Divide, localB->Gain1,
      localP->uDLookupTable_bp01Data, localP->uDLookupTable_bp02Data,
      rtP_Reverse_APP, localP->uDLookupTable_maxIndex, 50U);

    /* Product: '<S22>/Divide2' incorporates:
     *  Constant: '<S22>/Constant3'
     */
    localB->Divide2 = localB->uDLookupTable / localP->Constant3_Value;

    /* Switch: '<S22>/Switch5' */
    localB->Switch5 = localB->Divide2;
  }

  /* End of Switch: '<S22>/Switch5' */

  /* Inport: '<S22>/TargetRelPos' */
  localB->TargetRelPos = rtu_TargetRelPos;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Constant: '<S92>/Constant11' */
    localB->Constant11 = localP->Constant11_Value_m;

    /* Constant: '<S93>/Constant14' */
    localB->Constant14 = localP->Constant14_Value;

    /* Constant: '<S93>/Constant5' */
    localB->Constant5 = localP->Constant5_Value;

    /* Constant: '<S93>/Constant7' */
    localB->Constant7 = localP->Constant7_Value;
  }

  /* Integrator: '<S92>/Integrator3' */
  localB->x = localX->Integrator3_CSTATE;

  /* SignalConversion generated from: '<S83>/Vector Concatenate2' */
  localB->VectorConcatenate2[0] = localB->AccelCmd;

  /* SignalConversion generated from: '<S83>/Vector Concatenate2' */
  localB->VectorConcatenate2[1] = 0.0;

  /* SignalConversion generated from: '<S83>/Vector Concatenate2' */
  localB->VectorConcatenate2[2] = 0.0;

  /* UnitConversion: '<S92>/Unit Conversion' */
  /* Unit Conversion - from: m/s^2 to: gn
     Expression: output = (0.101972*input) + (0) */
  localB->UnitConversion_e[0] = 0.10197162129779282 * localB->
    VectorConcatenate2[0];
  localB->UnitConversion_e[1] = 0.10197162129779282 * localB->
    VectorConcatenate2[1];
  localB->UnitConversion_e[2] = 0.10197162129779282 * localB->
    VectorConcatenate2[2];

  /* Sum: '<S89>/Add' */
  localB->Add = localB->UnitConversion;
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Constant: '<S89>/Constant1' */
    localB->Constant1 = localP->Constant1_Value_i;

    /* Constant: '<S89>/Constant10' */
    localB->Constant10 = localP->Constant10_Value_l;

    /* Constant: '<S89>/Constant12' */
    localB->Y = localP->Constant12_Value;

    /* Constant: '<S89>/Constant2' */
    localB->Constant2_i = localP->Constant2_Value_d;
  }

  /* SignalConversion generated from: '<S96>/sincos' incorporates:
   *  Constant: '<S95>/Constant'
   */
  localB->TmpSignalConversionAtsincosInport1[0] = localP->Constant_Value;
  localB->TmpSignalConversionAtsincosInport1[1] = localB->Add;
  localB->TmpSignalConversionAtsincosInport1[2] = localP->Constant_Value;

  /* Trigonometry: '<S96>/sincos' */
  u0 = localB->TmpSignalConversionAtsincosInport1[0];
  u = sin(u0);
  u0 = cos(u0);
  localB->sincos_o1[0] = u;
  localB->sincos_o2[0] = u0;
  u0 = localB->TmpSignalConversionAtsincosInport1[1];
  u = sin(u0);
  u0 = cos(u0);
  localB->sincos_o1[1] = u;
  localB->sincos_o2[1] = u0;
  u0 = localB->TmpSignalConversionAtsincosInport1[2];
  u = sin(u0);
  u0 = cos(u0);
  localB->sincos_o1[2] = u;
  localB->sincos_o2[2] = u0;

  /* Fcn: '<S96>/Fcn11' */
  localB->VectorConcatenate[0] = localB->sincos_o2[0] * localB->sincos_o2[1];

  /* Fcn: '<S96>/Fcn21' */
  localB->VectorConcatenate[1] = localB->sincos_o1[1] * localB->sincos_o1[2] *
    localB->sincos_o2[0] - localB->sincos_o1[0] * localB->sincos_o2[2];

  /* Fcn: '<S96>/Fcn31' */
  localB->VectorConcatenate[2] = localB->sincos_o1[1] * localB->sincos_o2[2] *
    localB->sincos_o2[0] + localB->sincos_o1[0] * localB->sincos_o1[2];

  /* Fcn: '<S96>/Fcn12' */
  localB->VectorConcatenate[3] = localB->sincos_o1[0] * localB->sincos_o2[1];

  /* Fcn: '<S96>/Fcn22' */
  localB->VectorConcatenate[4] = localB->sincos_o1[1] * localB->sincos_o1[2] *
    localB->sincos_o1[0] + localB->sincos_o2[0] * localB->sincos_o2[2];

  /* Fcn: '<S96>/Fcn32' */
  localB->VectorConcatenate[5] = localB->sincos_o1[1] * localB->sincos_o2[2] *
    localB->sincos_o1[0] - localB->sincos_o2[0] * localB->sincos_o1[2];

  /* Fcn: '<S96>/Fcn13' */
  localB->VectorConcatenate[6] = -localB->sincos_o1[1];

  /* Fcn: '<S96>/Fcn23' */
  localB->VectorConcatenate[7] = localB->sincos_o2[1] * localB->sincos_o1[2];

  /* Fcn: '<S96>/Fcn33' */
  localB->VectorConcatenate[8] = localB->sincos_o2[1] * localB->sincos_o2[2];

  /* Reshape: '<S97>/Reshape (9) to [3x3] column-major' */
  memcpy(&localB->Reshape9to3x3columnmajor[0], &localB->VectorConcatenate[0], 9U
         * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    /* Math: '<S95>/Transpose' incorporates:
     *  Reshape: '<S97>/Reshape (9) to [3x3] column-major'
     */
    localB->Transpose[3 * i] = localB->Reshape9to3x3columnmajor[i];
    localB->Transpose[3 * i + 1] = localB->Reshape9to3x3columnmajor[i + 3];
    localB->Transpose[3 * i + 2] = localB->Reshape9to3x3columnmajor[i + 6];
  }

  /* SignalConversion generated from: '<S83>/Vector Concatenate1' */
  localB->VectorConcatenate1_i[0] = rtu_EgoSpd;

  /* SignalConversion generated from: '<S83>/Vector Concatenate1' */
  localB->VectorConcatenate1_i[1] = 0.0;

  /* SignalConversion generated from: '<S83>/Vector Concatenate1' */
  localB->VectorConcatenate1_i[2] = 0.0;

  /* SignalConversion generated from: '<S95>/Product' incorporates:
   *  Constant: '<S95>/Constant'
   */
  localB->TmpSignalConversionAtProductInport2[0] = localB->VectorConcatenate1_i
    [0];
  localB->TmpSignalConversionAtProductInport2[1] = localP->Constant_Value;
  localB->TmpSignalConversionAtProductInport2[2] = localB->VectorConcatenate1_i
    [2];

  /* Product: '<S95>/Product' incorporates:
   *  Math: '<S95>/Transpose'
   *  Product: '<S85>/Product'
   */
  tmp_0 = &localB->Transpose[0];
  u0 = localB->TmpSignalConversionAtProductInport2[0];
  u2 = localB->TmpSignalConversionAtProductInport2[1];
  tmp = localB->TmpSignalConversionAtProductInport2[2];
  for (i = 0; i < 3; i++) {
    u = tmp_0[i] * u0;
    u += tmp_0[i + 3] * u2;
    u += tmp_0[i + 6] * tmp;

    /* Product: '<S95>/Product' */
    localB->Product_h[i] = u;
  }

  /* Product: '<S98>/Product' incorporates:
   *  Constant: '<S98>/Constant'
   */
  u0 = localP->VehicleBodyTotalRoadLoad_m * localP->VehicleBodyTotalRoadLoad_g;

  /* Product: '<S98>/Product' */
  localB->Product_d = u0 * localB->Product_h[2];

  /* UnitConversion: '<S98>/Unit Conversion' */
  /* Unit Conversion - from: gn to: m/s^2
     Expression: output = (9.80665*input) + (0) */
  localB->UnitConversion_l = 9.8066500000000012 * localB->UnitConversion_e[0];

  /* Product: '<S98>/Product1' incorporates:
   *  Constant: '<S98>/Constant1'
   */
  localB->Product1 = localP->VehicleBodyTotalRoadLoad_m *
    localB->VectorConcatenate1_i[0] * localB->UnitConversion_l;

  /* SignalConversion generated from: '<S83>/Vector Concatenate4' */
  localB->VectorConcatenate4[0] = localB->TotalForce;

  /* SignalConversion generated from: '<S83>/Vector Concatenate4' */
  localB->VectorConcatenate4[1] = 0.0;

  /* SignalConversion generated from: '<S83>/Vector Concatenate4' */
  localB->VectorConcatenate4[2] = 0.0;

  /* Product: '<S98>/Product8' */
  localB->Product8 = localB->VectorConcatenate4[0] *
    localB->VectorConcatenate1_i[0];

  /* Product: '<S98>/Product9' */
  localB->Product9 = localB->Add1 * localB->VectorConcatenate1_i[0];

  /* UnaryMinus: '<S98>/Unary Minus' */
  localB->UnaryMinus = -localB->Product9;

  /* UnaryMinus: '<S98>/Unary Minus1' */
  localB->UnaryMinus1 = -localB->Product_d;

  /* SignalConversion generated from: '<S83>/Vector Concatenate3' */
  localB->VectorConcatenate3[1] = 0.0;

  /* SignalConversion generated from: '<S83>/Vector Concatenate5' */
  localB->VectorConcatenate5[0] = localB->m1;

  /* SignalConversion generated from: '<S83>/Vector Concatenate5' */
  localB->VectorConcatenate5[1] = 0.0;

  /* SignalConversion generated from: '<S83>/Vector Concatenate5' */
  localB->VectorConcatenate5[2] = 0.0;

  /* SignalConversion generated from: '<S103>/sincos' incorporates:
   *  Constant: '<S85>/Constant'
   */
  localB->TmpSignalConversionAtsincosInport1_a[0] = localP->Constant_Value_b;
  localB->TmpSignalConversionAtsincosInport1_a[1] = localB->UnitConversion;
  localB->TmpSignalConversionAtsincosInport1_a[2] = localP->Constant_Value_b;

  /* Trigonometry: '<S103>/sincos' */
  u0 = localB->TmpSignalConversionAtsincosInport1_a[0];
  u = sin(u0);
  u0 = cos(u0);
  localB->sincos_o1_h[0] = u;
  localB->sincos_o2_n[0] = u0;
  u0 = localB->TmpSignalConversionAtsincosInport1_a[1];
  u = sin(u0);
  u0 = cos(u0);
  localB->sincos_o1_h[1] = u;
  localB->sincos_o2_n[1] = u0;
  u0 = localB->TmpSignalConversionAtsincosInport1_a[2];
  u = sin(u0);
  u0 = cos(u0);
  localB->sincos_o1_h[2] = u;
  localB->sincos_o2_n[2] = u0;

  /* Fcn: '<S103>/Fcn11' */
  localB->VectorConcatenate_b[0] = localB->sincos_o2_n[0] * localB->sincos_o2_n
    [1];

  /* Fcn: '<S103>/Fcn21' */
  localB->VectorConcatenate_b[1] = localB->sincos_o1_h[1] * localB->sincos_o1_h
    [2] * localB->sincos_o2_n[0] - localB->sincos_o1_h[0] * localB->sincos_o2_n
    [2];

  /* Fcn: '<S103>/Fcn31' */
  localB->VectorConcatenate_b[2] = localB->sincos_o1_h[1] * localB->sincos_o2_n
    [2] * localB->sincos_o2_n[0] + localB->sincos_o1_h[0] * localB->sincos_o1_h
    [2];

  /* Fcn: '<S103>/Fcn12' */
  localB->VectorConcatenate_b[3] = localB->sincos_o1_h[0] * localB->sincos_o2_n
    [1];

  /* Fcn: '<S103>/Fcn22' */
  localB->VectorConcatenate_b[4] = localB->sincos_o1_h[1] * localB->sincos_o1_h
    [2] * localB->sincos_o1_h[0] + localB->sincos_o2_n[0] * localB->sincos_o2_n
    [2];

  /* Fcn: '<S103>/Fcn32' */
  localB->VectorConcatenate_b[5] = localB->sincos_o1_h[1] * localB->sincos_o2_n
    [2] * localB->sincos_o1_h[0] - localB->sincos_o2_n[0] * localB->sincos_o1_h
    [2];

  /* Fcn: '<S103>/Fcn13' */
  localB->VectorConcatenate_b[6] = -localB->sincos_o1_h[1];

  /* Fcn: '<S103>/Fcn23' */
  localB->VectorConcatenate_b[7] = localB->sincos_o2_n[1] * localB->sincos_o1_h
    [2];

  /* Fcn: '<S103>/Fcn33' */
  localB->VectorConcatenate_b[8] = localB->sincos_o2_n[1] * localB->sincos_o2_n
    [2];

  /* Reshape: '<S104>/Reshape (9) to [3x3] column-major' */
  memcpy(&localB->Reshape9to3x3columnmajor_c[0], &localB->VectorConcatenate_b[0],
         9U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    /* Math: '<S85>/Transpose' incorporates:
     *  Reshape: '<S104>/Reshape (9) to [3x3] column-major'
     */
    localB->Transpose_d[3 * i] = localB->Reshape9to3x3columnmajor_c[i];
    localB->Transpose_d[3 * i + 1] = localB->Reshape9to3x3columnmajor_c[i + 3];
    localB->Transpose_d[3 * i + 2] = localB->Reshape9to3x3columnmajor_c[i + 6];
  }

  /* Integrator: '<S83>/Integrator1' */
  localB->VectorConcatenate3[0] = localX->Integrator1_CSTATE;

  /* SignalConversion generated from: '<S85>/Product' incorporates:
   *  Constant: '<S85>/Constant'
   */
  localB->TmpSignalConversionAtProductInport2_p[0] = localB->VectorConcatenate3
    [0];
  localB->TmpSignalConversionAtProductInport2_p[1] = localP->Constant_Value_b;
  localB->TmpSignalConversionAtProductInport2_p[2] = localB->VectorConcatenate3
    [1];

  /* Product: '<S85>/Product' incorporates:
   *  Math: '<S85>/Transpose'
   *  Product: '<S95>/Product'
   */
  tmp_0 = &localB->Transpose_d[0];
  u0 = localB->TmpSignalConversionAtProductInport2_p[0];
  u2 = localB->TmpSignalConversionAtProductInport2_p[1];
  tmp = localB->TmpSignalConversionAtProductInport2_p[2];
  for (i = 0; i < 3; i++) {
    u = tmp_0[i] * u0;
    u += tmp_0[i + 3] * u2;
    u += tmp_0[i + 6] * tmp;

    /* Product: '<S85>/Product' */
    localB->Product_c[i] = u;
  }

  /* SignalConversion generated from: '<S83>/Vector Concatenate6' */
  localB->VectorConcatenate6[0] = localB->Product_c[0];

  /* SignalConversion generated from: '<S83>/Vector Concatenate6' */
  localB->VectorConcatenate6[1] = 0.0;

  /* SignalConversion generated from: '<S83>/Vector Concatenate6' */
  localB->VectorConcatenate6[2] = localB->Product_c[2];

  /* SignalConversion generated from: '<S83>/Vector Concatenate' */
  localB->VectorConcatenate_k[0] = localB->Product5;

  /* Product: '<S83>/Product1' */
  localB->VectorConcatenate_k[1] = localB->TrigonometricFunction1_o2 * localB->m;

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  (void) (tid);
}

/* Outputs for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookupTID2(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW)
{
  int_T tid = 2;

  /* RateTransition: '<S22>/Rate Transition' */
  localB->RateTransition = localDW->RateTransition_Buffer;

  /* SampleTimeMath: '<S26>/TSamp'
   *
   * About '<S26>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->TSamp = localB->RateTransition;

  /* UnitDelay: '<S26>/UD' */
  localB->Uk1 = localDW->UD_DSTATE_k;

  /* Sum: '<S26>/Diff' */
  localB->Diff_g = localB->TSamp - localB->Uk1;

  /* SampleTimeMath: '<S27>/TSamp'
   *
   * About '<S27>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  localB->TSamp_l = localB->Diff_g;

  /* UnitDelay: '<S27>/UD' */
  localB->Uk1_c = localDW->UD_DSTATE_i;

  /* Sum: '<S27>/Diff' */
  localB->Diff_l = localB->TSamp_l - localB->Uk1_c;

  /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  localB->EgoPosition = localDW->DiscreteTimeIntegrator_DSTATE_n;

  /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' */
  localB->xdotPosition = localDW->DiscreteTimeIntegrator1_DSTATE;

  /* RateTransition: '<S22>/Rate Transition1' */
  localB->RateTransition1 = localDW->RateTransition1_Buffer;

  /* RateTransition: '<S22>/Rate Transition2' */
  localB->RateTransition2 = localDW->RateTransition2_Buffer;

  /* If subsystem generates rate grouping Output functions,
   * when tid is used in Output function for one rate,
   * all Output functions include tid as a local variable.
   * As result, some Output functions may have unused tid.
   */
  (void) (tid);
}

/* Update for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookup_UpdateTID0(RT_MODEL_PID_HSC_Model_T * const PID_HSC_Model_M,
  real_T rtu_StopLightInfo, boolean_T rtu_StopLightInfo_j,
  B_ACCLookup_PID_HSC_Model_T *localB, DW_ACCLookup_PID_HSC_Model_T *localDW,
  P_ACCLookup_PID_HSC_Model_T *localP)
{
  if (rtmIsMajorTimeStep(PID_HSC_Model_M)) {
    /* Update for Delay: '<S59>/UD' */
    localDW->UD_DSTATE = localB->Tsamp;

    /* Update for DiscreteIntegrator: '<S66>/Integrator' */
    localDW->Integrator_DSTATE = localP->Integrator_gainval * localB->Switch +
      localB->Integrator;

    /* Update for Delay: '<S22>/Delay One Step' */
    localDW->DelayOneStep_DSTATE = rtu_StopLightInfo;

    /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator3' */
    localDW->DiscreteTimeIntegrator3_DSTATE +=
      localP->DiscreteTimeIntegrator3_gainval * localB->Switch11;
    localDW->DiscreteTimeIntegrator3_PrevResetState = (int8_T)
      rtu_StopLightInfo_j;

    /* Update for DiscreteIntegrator: '<S28>/Discrete-Time Integrator' */
    localDW->DiscreteTimeIntegrator_DSTATE +=
      localP->DiscreteTimeIntegrator_gainval * localB->Product;

    /* Update for UnitDelay: '<S28>/Unit Delay' */
    localDW->UnitDelay_DSTATE[0] = localB->Switch_l[0];
    localDW->UnitDelay_DSTATE[1] = localB->Switch_l[1];
  }
}

/* Update for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookup_UpdateTID2(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP)
{
  /* Update for UnitDelay: '<S26>/UD' */
  localDW->UD_DSTATE_k = localB->TSamp;

  /* Update for UnitDelay: '<S27>/UD' */
  localDW->UD_DSTATE_i = localB->TSamp_l;

  /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_n +=
    localP->DiscreteTimeIntegrator_gainval_i * localB->RateTransition1;

  /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE +=
    localP->DiscreteTimeIntegrator1_gainval * localB->RateTransition2;
}

/* Derivatives for atomic system: '<S12>/ACC Lookup' */
void PID_HSC_Model_ACCLookup_Deriv(real_T rtu_EgoSpd, B_ACCLookup_PID_HSC_Model_T
  *localB, XDot_ACCLookup_PID_HSC_Model_T *localXdot)
{
  /* Derivatives for Integrator: '<S92>/Integrator3' */
  localXdot->Integrator3_CSTATE = localB->VectorConcatenate1_i[0];

  /* Derivatives for Integrator: '<S83>/Integrator1' */
  localXdot->Integrator1_CSTATE = rtu_EgoSpd;
}

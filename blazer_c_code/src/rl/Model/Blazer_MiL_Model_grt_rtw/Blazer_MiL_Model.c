/*
 * Blazer_MiL_Model.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Blazer_MiL_Model".
 *
 * Model version              : 1.115
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 18:26:48 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Linux 64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "Blazer_MiL_Model_capi.h"
#include "Blazer_MiL_Model.h"
#include "Blazer_MiL_Model_private.h"
#include "look1_binlxpw.h"

rtTimingBridge Blazer_MiL_Model_TimingBrdg;
const CAN_to_Plant Blazer_MiL_Model_rtZCAN_to_Plant =
{
  0.0,                                 /* MotorTorque */
  0.0,                                 /* ACCATC_AxlTrqRq */
  0.0                                  /* EngTrqActExtRng */
} ;                                    /* CAN_to_Plant ground */

/* Block signals (default storage) */
B_Blazer_MiL_Model_T
  Blazer_MiL_Model_B;

/* Continuous states */
X_Blazer_MiL_Model_T
  Blazer_MiL_Model_X;

/* Periodic continuous states */
PeriodicIndX_Blazer_MiL_Model_T
  Blazer_MiL_Model_PeriodicIndX;
PeriodicRngX_Blazer_MiL_Model_T
  Blazer_MiL_Model_PeriodicRngX;

/* Block states (default storage) */
DW_Blazer_MiL_Model_T
  Blazer_MiL_Model_DW;

/* Real-time model */
RT_MODEL_Blazer_MiL_Model_T
  Blazer_MiL_Model_M_;
RT_MODEL_Blazer_MiL_Model_T *const
  Blazer_MiL_Model_M =
  &Blazer_MiL_Model_M_;

/* State reduction function */
void local_stateReduction(real_T* x, int_T* p, int_T n, real_T* r)
{
  int_T i, j;
  for (i = 0, j = 0; i < n; ++i, ++j) {
    int_T k = p[i];
    real_T lb = r[j++];
    real_T xk = x[k]-lb;
    real_T rk = r[j]-lb;
    int_T q = (int_T) floor(xk/rk);
    if (q) {
      x[k] = xk-q*rk+lb;
    }
  }
}

/*
 * This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 63;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Blazer_MiL_Model_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  Blazer_MiL_Model_step0();
  Blazer_MiL_Model_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  Blazer_MiL_Model_step0();
  Blazer_MiL_Model_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  Blazer_MiL_Model_step0();
  Blazer_MiL_Model_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  local_stateReduction(x, rtsiGetPeriodicContStateIndices(si), 1,
                       rtsiGetPeriodicContStateRanges(si));
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function for TID0 */
void Blazer_MiL_Model_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  real_T Jerkcost;
  real_T Fuelcost;
  real_T DistError;
  real_T Jerksim;
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* set solver stop time */
    if (!(Blazer_MiL_Model_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime
        (&Blazer_MiL_Model_M->solverInfo,
         ((Blazer_MiL_Model_M->Timing.clockTickH0 + 1)
          * Blazer_MiL_Model_M->Timing.stepSize0 *
          4294967296.0));
    } else {
      rtsiSetSolverStopTime
        (&Blazer_MiL_Model_M->solverInfo,
         ((Blazer_MiL_Model_M->Timing.clockTick0 + 1)
          * Blazer_MiL_Model_M->Timing.stepSize0 +
          Blazer_MiL_Model_M->Timing.clockTickH0 *
          Blazer_MiL_Model_M->Timing.stepSize0 *
          4294967296.0));
    }

    /* Update the flag to indicate when data transfers from
     *  Sample time: [0.0005s, 0.0s] to Sample time: [0.5s, 0.0s]  */
    Blazer_MiL_Model_M->Timing.RateInteraction.b_TID1_2
      =
      (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_2
       == 0);
    (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_2)
      ++;
    if ((Blazer_MiL_Model_M->Timing.RateInteraction.TID1_2)
        > 999) {
      Blazer_MiL_Model_M->Timing.RateInteraction.TID1_2
        = 0;
    }

    /* Update the flag to indicate when data transfers from
     *  Sample time: [0.0005s, 0.0s] to Sample time: [1.0s, 0.0s]  */
    Blazer_MiL_Model_M->Timing.RateInteraction.b_TID1_3
      =
      (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3
       == 0);
    (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3)
      ++;
    if ((Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3)
        > 1999) {
      Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3
        = 0;
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Blazer_MiL_Model_M)) {
    Blazer_MiL_Model_M->Timing.t[0] = rtsiGetT
      (&Blazer_MiL_Model_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* Memory: '<Root>/Memory1' */
    Blazer_MiL_Model_B.Memory1 =
      Blazer_MiL_Model_DW.Memory1_PreviousInput;

    /* SignalConversion generated from: '<S1>/Bus Selector1' */
    Blazer_MiL_Model_B.ACCPIDOut =
      Blazer_MiL_Model_B.Memory1.ACCPIDOut;

    /* SignalConversion generated from: '<S1>/Bus Selector1' */
    Blazer_MiL_Model_B.DistError =
      Blazer_MiL_Model_B.Memory1.DistError;

    /* UnaryMinus: '<S1>/Unary Minus3' */
    Blazer_MiL_Model_B.DistError_m =
      -Blazer_MiL_Model_B.DistError;

    /* Memory: '<Root>/Memory' */
    Blazer_MiL_Model_B.Memory =
      Blazer_MiL_Model_DW.Memory_PreviousInput;

    /* SignalConversion generated from: '<S1>/Bus Selector' */
    Blazer_MiL_Model_B.APP =
      Blazer_MiL_Model_B.Memory.APP;

    /* SignalConversion generated from: '<S1>/Bus Selector' */
    Blazer_MiL_Model_B.BPP =
      Blazer_MiL_Model_B.Memory.BPP;

    /* SignalConversion generated from: '<S1>/Bus Selector1' */
    Blazer_MiL_Model_B.SafeDist =
      Blazer_MiL_Model_B.Memory1.SafeDist;

    /* SignalConversion generated from: '<S1>/Bus Selector1' */
    Blazer_MiL_Model_B.RelDist =
      Blazer_MiL_Model_B.Memory1.RelDist;

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/CAVPCM ACC Enable'
     *  Constant: '<S6>/Off'
     */
    if (Blazer_MiL_Model_P.CAVPCMACCEnable_Value >
        Blazer_MiL_Model_P.Switch_Threshold) {
      Blazer_MiL_Model_B.Switch =
        Blazer_MiL_Model_P.CAVPCMACCEnable_Value;
    } else {
      Blazer_MiL_Model_B.Switch =
        Blazer_MiL_Model_P.Off_Value;
    }

    /* End of Switch: '<S6>/Switch' */

    /* RateTransition generated from: '<S6>/Multiport Switch' */
    if (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3
        == 1) {
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport2
        =
        Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport2_Buffer0;
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport3
        =
        Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport3_Buffer0;
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport4
        =
        Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport4_Buffer0;
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport5
        =
        Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport5_Buffer0;
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport6
        =
        Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport6_Buffer0;
    }

    /* End of RateTransition generated from: '<S6>/Multiport Switch' */
  }

  /* FromWorkspace: '<S14>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      Blazer_MiL_Model_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      Blazer_MiL_Model_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex =
      Blazer_MiL_Model_DW.FromWs_IWORK.PrevIndex;
    real_T t = Blazer_MiL_Model_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[7]) {
      currTimeIndex = 6;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    Blazer_MiL_Model_DW.FromWs_IWORK.PrevIndex =
      currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          Blazer_MiL_Model_B.FromWs =
            pDataValues[currTimeIndex];
        } else {
          Blazer_MiL_Model_B.FromWs =
            pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        Blazer_MiL_Model_B.FromWs = (real_T)
          rtInterpolate(d1, d2, f1, f2);
        pDataValues += 8;
      }
    }
  }

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<S6>/Drive Cycle Selection'
   */
  switch ((int32_T)
          Blazer_MiL_Model_P.DriveCycleSelection_Value)
  {
   case 1:
    Blazer_MiL_Model_B.MultiportSwitch =
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport2;
    break;

   case 2:
    Blazer_MiL_Model_B.MultiportSwitch =
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport3;
    break;

   case 3:
    Blazer_MiL_Model_B.MultiportSwitch =
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport4;
    break;

   case 4:
    Blazer_MiL_Model_B.MultiportSwitch =
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport5;
    break;

   case 5:
    Blazer_MiL_Model_B.MultiportSwitch =
      Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport6;
    break;

   default:
    Blazer_MiL_Model_B.MultiportSwitch =
      Blazer_MiL_Model_B.FromWs;
    break;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* Gain: '<S6>/MPH2MPS' */
  Blazer_MiL_Model_B.MPH2MPS =
    Blazer_MiL_Model_P.MPH2MPS_Gain *
    Blazer_MiL_Model_B.MultiportSwitch;

  /* BusCreator generated from: '<Root>/Model1' */
  Blazer_MiL_Model_B.BusConversion_InsertedFor_Model1_at_inport_0_BusCreator1.CAVsCrsCntrlSwStOnSwAct
    = Blazer_MiL_Model_B.Switch;
  Blazer_MiL_Model_B.BusConversion_InsertedFor_Model1_at_inport_0_BusCreator1.CAVsCrsCntrlStSetSwAct
    = Blazer_MiL_Model_B.Switch;
  Blazer_MiL_Model_B.BusConversion_InsertedFor_Model1_at_inport_0_BusCreator1.Long_Switch
    = Blazer_MiL_Model_B.Switch;
  Blazer_MiL_Model_B.BusConversion_InsertedFor_Model1_at_inport_0_BusCreator1.xdotref
    = Blazer_MiL_Model_B.MPH2MPS;

  /* ModelReference generated from: '<Root>/Model1' incorporates:
   *  RateTransition generated from: '<S1>/MATLAB Function1'
   */
  Blazer_Plant_ModelTID0
    (&(Blazer_MiL_Model_DW.Model1_InstanceData.rtm),
     &Blazer_MiL_Model_B.BusConversion_InsertedFor_Model1_at_inport_0_BusCreator1,
     &Blazer_MiL_Model_B.Memory1, ((CAN_to_Plant*)
      &Blazer_MiL_Model_rtZCAN_to_Plant),
     &Blazer_MiL_Model_B.APP_i,
     &Blazer_MiL_Model_B.VehSpdAvgDrvn,
     &Blazer_MiL_Model_B.Gear,
     &Blazer_MiL_Model_B.Brake_Pa,
     &Blazer_MiL_Model_B.xdotref,
     &Blazer_MiL_Model_B.BPP_c,
     &Blazer_MiL_Model_B.BattCurr,
     &Blazer_MiL_Model_B.BattPwr,
     &Blazer_MiL_Model_B.BattV,
     &Blazer_MiL_Model_B.MotTrq,
     &Blazer_MiL_Model_B.BattSoc,
     &Blazer_MiL_Model_B.MotPwrElec,
     &Blazer_MiL_Model_B.MotSpd,
     &Blazer_MiL_Model_B.EngSpd,
     &Blazer_MiL_Model_B.EngTrqOut,
     &Blazer_MiL_Model_B.Model1_o16,
     &(Blazer_MiL_Model_DW.Model1_InstanceData.rtb),
     &(Blazer_MiL_Model_DW.Model1_InstanceData.rtdw),
     &(Blazer_MiL_Model_X.Model1_CSTATE));
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    Blazer_Plant_ModelTID1();
    if (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3
        == 1) {
      Blazer_MiL_Model_B.Jerksim =
        Blazer_MiL_Model_DW.Jerksim_Buffer0;
    }
  }

  /* End of ModelReference generated from: '<Root>/Model1' */

  /* SignalConversion generated from: '<Root>/Bus Selector' */
  Blazer_MiL_Model_B.BattSOC =
    Blazer_MiL_Model_B.Model1_o16.BattSOC;

  /* SignalConversion generated from: '<Root>/Bus Selector' */
  Blazer_MiL_Model_B.BattFuel =
    Blazer_MiL_Model_B.Model1_o16.Fuelout.BattFuel;

  /* SignalConversion generated from: '<Root>/Bus Selector' */
  Blazer_MiL_Model_B.TotFuel =
    Blazer_MiL_Model_B.Model1_o16.Fuelout.TotFuel;

  /* MATLAB Function: '<S1>/MATLAB Function1' */
  Blazer_MiL_Model_B.Jerksim_j =
    Blazer_MiL_Model_B.Jerksim;
  Jerksim = Blazer_MiL_Model_B.Jerksim_j;
  Blazer_MiL_Model_B.Jerksim_j = Jerksim;

  /* MATLAB Function 'ACC Tuning/MATLAB Function1': '<S9>:1' */
  /* '<S9>:1:6' */
  /* '<S9>:1:7' */
  /* '<S9>:1:8' */
  if ((Blazer_MiL_Model_B.BattSOC >= 70.0) &&
      (Blazer_MiL_Model_B.BattSOC <= 90.0)) {
    /* '<S9>:1:11' */
    /* '<S9>:1:12' */
    Jerksim = (Blazer_MiL_Model_B.BattSOC - 70.0) /
      70.0;
    Jerksim *= Jerksim;
  } else if ((Blazer_MiL_Model_B.BattSOC <= 30.0) &&
             (Blazer_MiL_Model_B.BattSOC >= 20.0)) {
    /* '<S9>:1:13' */
    /* '<S9>:1:14' */
    Jerksim = (30.0 - Blazer_MiL_Model_B.BattSOC) /
      10.0;
    Jerksim *= Jerksim;
  } else if ((Blazer_MiL_Model_B.BattSOC > 30.0) &&
             (Blazer_MiL_Model_B.BattSOC < 70.0)) {
    /* '<S9>:1:15' */
    /* '<S9>:1:16' */
    Jerksim = 0.0;
  } else {
    /* '<S9>:1:18' */
    Jerksim = 800000.0;
  }

  if ((Blazer_MiL_Model_B.Jerksim_j >= -5.5) &&
      (Blazer_MiL_Model_B.Jerksim_j <= 0.0)) {
    /* '<S9>:1:22' */
    /* '<S9>:1:23' */
    Jerkcost = fabs(Blazer_MiL_Model_B.Jerksim_j /
                    -5.0);
  } else if ((Blazer_MiL_Model_B.Jerksim_j >= 0.0) &&
             (Blazer_MiL_Model_B.Jerksim_j <= 4.5)) {
    /* '<S9>:1:24' */
    /* '<S9>:1:25' */
    Jerkcost = (3.0 - Blazer_MiL_Model_B.Jerksim_j) /
      3.0;
  } else {
    /* '<S9>:1:27' */
    Jerkcost = 500000.0;
  }

  /* '<S9>:1:34' */
  Fuelcost = 1.0 - Blazer_MiL_Model_B.BattFuel /
    Blazer_MiL_Model_B.TotFuel;

  /* '<S9>:1:37' */
  DistError = Blazer_MiL_Model_B.SafeDist -
    Blazer_MiL_Model_B.RelDist;
  if ((DistError > -7.0) && (DistError <= 6.0)) {
    /* '<S9>:1:39' */
    /* '<S9>:1:40' */
    Blazer_MiL_Model_B.Cost = (0.3 * Fuelcost + 0.5 *
      Jerkcost) + 0.2 * Jerksim;
  } else {
    /* '<S9>:1:42' */
    Blazer_MiL_Model_B.Cost = 60000.0;
  }

  Blazer_MiL_Model_B.Jerkcost = Jerkcost;
  Blazer_MiL_Model_B.SOCcost = Jerksim;
  Blazer_MiL_Model_B.Fuelcost = Fuelcost;

  /* End of MATLAB Function: '<S1>/MATLAB Function1' */
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* Scope: '<S1>/Scope5' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      StructLogVar *svar = (StructLogVar *)
        Blazer_MiL_Model_DW.Scope5_PWORK.LoggedData[0];
      LogVar *var = svar->signals.values;

      /* time */
      {
        double locTime =
          (((Blazer_MiL_Model_M->Timing.clockTick1+
             Blazer_MiL_Model_M->Timing.clockTickH1*
             4294967296.0)) * 0.0005);
        ;
        rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
      }

      /* signals */
      {
        real_T up0[1];
        up0[0] = Blazer_MiL_Model_B.Cost;
        rt_UpdateLogVar((LogVar *)var, up0, 0);
        var = var->next;
      }

      {
        real_T up1[1];
        up1[0] = Blazer_MiL_Model_B.Jerkcost;
        rt_UpdateLogVar((LogVar *)var, up1, 0);
        var = var->next;
      }

      {
        real_T up2[1];
        up2[0] = Blazer_MiL_Model_B.SOCcost;
        rt_UpdateLogVar((LogVar *)var, up2, 0);
        var = var->next;
      }

      {
        real_T up3[1];
        up3[0] = Blazer_MiL_Model_B.Fuelcost;
        rt_UpdateLogVar((LogVar *)var, up3, 0);
        var = var->next;
      }

      {
        real_T up4[1];
        up4[0] = Blazer_MiL_Model_B.Jerksim_j;
        rt_UpdateLogVar((LogVar *)var, up4, 0);
      }
    }

    /* SignalConversion generated from: '<S1>/Bus Selector1' */
    Blazer_MiL_Model_B.ACC_APP =
      Blazer_MiL_Model_B.Memory1.ACC_APP;

    /* Gain: '<S1>/Gain' */
    Blazer_MiL_Model_B.APP_p =
      Blazer_MiL_Model_P.Gain_Gain_h *
      Blazer_MiL_Model_B.APP;

    /* Gain: '<S1>/Gain1' */
    Blazer_MiL_Model_B.APPACC =
      Blazer_MiL_Model_P.Gain1_Gain *
      Blazer_MiL_Model_B.ACC_APP;

    /* ToWorkspace: '<S1>/To Workspace1' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace1_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.BattSOC, 0);
    }

    /* ToWorkspace: '<S1>/To Workspace10' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace10_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.ACCPIDOut,
                      0);
    }

    /* ToWorkspace: '<S1>/To Workspace2' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace2_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.RelDist, 0);
    }

    /* ToWorkspace: '<S1>/To Workspace3' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace3_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.SafeDist, 0);
    }

    /* ToWorkspace: '<S1>/To Workspace4' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace4_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.TotFuel, 0);
    }

    /* ToWorkspace: '<S1>/To Workspace5' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace5_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.BattFuel, 0);
    }

    /* ToWorkspace: '<S1>/To Workspace6' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace6_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.DistError,
                      0);
    }

    /* ToWorkspace: '<S1>/To Workspace7' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace7_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.Cost, 0);
    }

    /* ToWorkspace: '<S1>/To Workspace8' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace8_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.ACC_APP, 0);
    }

    /* SignalConversion generated from: '<S1>/Bus Selector1' */
    Blazer_MiL_Model_B.ACC_BPP =
      Blazer_MiL_Model_B.Memory1.ACC_BPP;

    /* ToWorkspace: '<S1>/To Workspace9' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace9_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.ACC_BPP, 0);
    }
  }

  /* SignalConversion generated from: '<Root>/Bus Selector' */
  Blazer_MiL_Model_B.RefSpd_mph =
    Blazer_MiL_Model_B.Model1_o16.RefSpd_mph;

  /* SignalConversion generated from: '<Root>/Bus Selector' */
  Blazer_MiL_Model_B.VehSpd_mph =
    Blazer_MiL_Model_B.Model1_o16.VehSpd_mph;
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* Sum: '<S1>/Sum' */
    Blazer_MiL_Model_B.Sum =
      Blazer_MiL_Model_B.SafeDist -
      Blazer_MiL_Model_B.RelDist;
  }

  /* Sum: '<S1>/Sum1' */
  Blazer_MiL_Model_B.Sum1 =
    Blazer_MiL_Model_B.RefSpd_mph -
    Blazer_MiL_Model_B.VehSpd_mph;
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* RateTransition generated from: '<S1>/mph2ms' */
    if (Blazer_MiL_Model_M->Timing.RateInteraction.TID1_3
        == 1) {
      Blazer_MiL_Model_DW.VehSpd_mph_Buffer =
        Blazer_MiL_Model_B.VehSpd_mph;
    }

    /* End of RateTransition generated from: '<S1>/mph2ms' */
  }

  /* Clock: '<S1>/Clock' */
  Blazer_MiL_Model_B.Clock =
    Blazer_MiL_Model_M->Timing.t[0];
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* ToWorkspace: '<S1>/To Workspace13' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace13_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.Clock, 0);
    }

    /* ModelReference generated from: '<Root>/Model' */
    HSC_ModelTID0
      (&(Blazer_MiL_Model_DW.Model_InstanceData.rtm),
       &Blazer_MiL_Model_B.Memory.ABSAtv,
       &Blazer_MiL_Model_B.Memory.APP,
       &Blazer_MiL_Model_B.Memory.APPv,
       &Blazer_MiL_Model_B.Memory.BPP,
       &Blazer_MiL_Model_B.Memory.EngRunAtv,
       &Blazer_MiL_Model_B.Memory.EngSpd,
       &Blazer_MiL_Model_B.Memory.Gear,
       &Blazer_MiL_Model_B.Memory.HdSt,
       &Blazer_MiL_Model_B.Memory.KeySt,
       &Blazer_MiL_Model_B.Memory.gfd,
       &Blazer_MiL_Model_B.Memory.McuThermal,
       &Blazer_MiL_Model_B.Memory.MotorSpd,
       &Blazer_MiL_Model_B.Memory.MotorTrqEst,
       &Blazer_MiL_Model_B.Memory.SOC,
       &Blazer_MiL_Model_B.Memory.StateMcu,
       &Blazer_MiL_Model_B.Memory.StrWhAng,
       &Blazer_MiL_Model_B.Memory.StrWhAngV,
       &Blazer_MiL_Model_B.Memory.TrnsShftPos,
       &Blazer_MiL_Model_B.Memory.VehSpd,
       &Blazer_MiL_Model_B.Memory.battTcoolant,
       &Blazer_MiL_Model_B.Memory.bcmready,
       &Blazer_MiL_Model_B.Memory.cpwrcmd,
       &Blazer_MiL_Model_B.Memory.cpwrmon,
       &Blazer_MiL_Model_B.Memory.hvilmon,
       &Blazer_MiL_Model_B.Memory.ibat,
       &Blazer_MiL_Model_B.Memory.maincstat,
       &Blazer_MiL_Model_B.Memory.vbat,
       &Blazer_MiL_Model_B.Memory.vehmon,
       &Blazer_MiL_Model_B.Memory.ICESwitch,
       &Blazer_MiL_Model_B.Memory.RegenSwitch,
       &Blazer_MiL_Model_B.Memory.CAVsCrsLmtrSwStat,
       &Blazer_MiL_Model_B.Memory.CAVsCrsCntrlSwStOnSwAct,
       &Blazer_MiL_Model_B.Memory.CAVsCrsCntrlStSetSwAct,
       &Blazer_MiL_Model_B.Memory.Long_Switch,
       &Blazer_MiL_Model_B.Memory.TCSysAtv,
       &Blazer_MiL_Model_B.Memory.MotorRC,
       &Blazer_MiL_Model_B.Memory.DrvIntndAxlTrqMax,
       &Blazer_MiL_Model_B.Memory.DrvIntndAxlTrqMin,
       &Blazer_MiL_Model_B.Memory.TrqReqStat,
       &Blazer_MiL_Model_B.Memory.xdotref,
       &Blazer_MiL_Model_B.Memory.ACCBrakeTime,
       &Blazer_MiL_Model_B.Memory.CAVtrgVel,
       &Blazer_MiL_Model_B.Memory.CAVtrgDist,
       &Blazer_MiL_Model_B.Memory.grade,
       &Blazer_MiL_Model_B.Memory.Tanh_Exponent,
       &Blazer_MiL_Model_B.Memory.Tanh_multiplier,
       &Blazer_MiL_Model_B.Memory.dist_is_valid,
       &Blazer_MiL_Model_B.Memory.TrafficLightPresent,
       &Blazer_MiL_Model_B.Memory.DistanceToIntersection,
       &Blazer_MiL_Model_B.Memory.TimeToNextState,
       &Blazer_MiL_Model_B.Memory.CurrentState,
       &Blazer_MiL_Model_B.Memory.Decel_Division_Value,
       &Blazer_MiL_Model_B.Memory.bcm_coolan_temp_C,
       &Blazer_MiL_Model_B.Memory.DistanceObjValid,
       &Blazer_MiL_Model_B.Memory.TimeGap,
       &Blazer_MiL_Model_B.Model,
       &(Blazer_MiL_Model_DW.Model_InstanceData.rtb),
       &(Blazer_MiL_Model_DW.Model_InstanceData.rtdw));

    /* ToWorkspace: '<S5>/To Workspace' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace_PWORK.LoggedData),
                      &Blazer_MiL_Model_B.APP_i, 0);
    }

    /* ToWorkspace: '<S5>/To Workspace1' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace1_PWORK_o.LoggedData),
                      &Blazer_MiL_Model_B.BPP_c, 0);
    }

    /* ToWorkspace: '<S5>/To Workspace2' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace2_PWORK_c.LoggedData),
                      &Blazer_MiL_Model_B.Gear, 0);
    }

    /* ToWorkspace: '<S5>/To Workspace3' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace3_PWORK_a.LoggedData),
                      &Blazer_MiL_Model_B.BattCurr, 0);
    }

    /* ToWorkspace: '<S5>/To Workspace4' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace4_PWORK_a.LoggedData),
                      &Blazer_MiL_Model_B.BattV, 0);
    }
  }

  /* Gain: '<S5>/Gain' */
  Blazer_MiL_Model_B.APP_k =
    Blazer_MiL_Model_P.Gain_Gain_g *
    Blazer_MiL_Model_B.APP_i;

  /* Clock: '<S13>/Clock7' */
  Blazer_MiL_Model_B.Clock7 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch7' incorporates:
   *  Constant: '<S13>/BPP Fault Switch'
   *  Switch: '<S13>/Switch8'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.BPPFaultSwitch_Value == 1) {
    Blazer_MiL_Model_B.MultiportSwitch7 =
      Blazer_MiL_Model_B.BPP_c;
  } else {
    if (Blazer_MiL_Model_B.Clock7 >
        Blazer_MiL_Model_P.Switch8_Threshold) {
      /* Switch: '<S13>/Switch8' incorporates:
       *  Constant: '<S13>/NewBPP'
       */
      Blazer_MiL_Model_B.Switch8 =
        Blazer_MiL_Model_P.NewBPP_Value;
    } else {
      /* Switch: '<S13>/Switch8' */
      Blazer_MiL_Model_B.Switch8 =
        Blazer_MiL_Model_B.BPP_c;
    }

    Blazer_MiL_Model_B.MultiportSwitch7 =
      Blazer_MiL_Model_B.Switch8;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch7' */

  /* Gain: '<S5>/Gain2' */
  Blazer_MiL_Model_B.BusCreator.BPP =
    Blazer_MiL_Model_P.Gain2_Gain *
    Blazer_MiL_Model_B.MultiportSwitch7;

  /* Clock: '<S13>/Clock6' */
  Blazer_MiL_Model_B.Clock6 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch6' incorporates:
   *  Constant: '<S13>/Gear Fault Switch'
   *  Switch: '<S13>/Switch7'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.GearFaultSwitch_Value == 1)
  {
    Blazer_MiL_Model_B.BusCreator.Gear =
      Blazer_MiL_Model_B.Gear;
  } else {
    if (Blazer_MiL_Model_B.Clock6 >
        Blazer_MiL_Model_P.Switch7_Threshold) {
      /* Switch: '<S13>/Switch7' incorporates:
       *  Constant: '<S13>/Gear Fault'
       */
      Blazer_MiL_Model_B.Switch7 =
        Blazer_MiL_Model_P.GearFault_Value;
    } else {
      /* Switch: '<S13>/Switch7' */
      Blazer_MiL_Model_B.Switch7 =
        Blazer_MiL_Model_B.Gear;
    }

    Blazer_MiL_Model_B.BusCreator.Gear =
      Blazer_MiL_Model_B.Switch7;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch6' */

  /* Clock: '<S13>/Clock3' */
  Blazer_MiL_Model_B.Clock3 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch3' incorporates:
   *  Constant: '<S13>/GFD Fault Switch'
   *  Constant: '<S5>/bms_ground_fault'
   *  Switch: '<S13>/Switch4'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.GFDFaultSwitch_Value == 1) {
    Blazer_MiL_Model_B.BusCreator.gfd =
      Blazer_MiL_Model_P.bms_ground_fault_Value;
  } else {
    if (Blazer_MiL_Model_B.Clock3 >
        Blazer_MiL_Model_P.Switch4_Threshold) {
      /* Switch: '<S13>/Switch4' incorporates:
       *  Constant: '<S13>/battGFD'
       */
      Blazer_MiL_Model_B.Switch4 =
        Blazer_MiL_Model_P.battGFD_Value;
    } else {
      /* Switch: '<S13>/Switch4' incorporates:
       *  Constant: '<S5>/bms_ground_fault'
       */
      Blazer_MiL_Model_B.Switch4 =
        Blazer_MiL_Model_P.bms_ground_fault_Value;
    }

    Blazer_MiL_Model_B.BusCreator.gfd =
      Blazer_MiL_Model_B.Switch4;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch3' */

  /* Clock: '<S13>/Clock' */
  Blazer_MiL_Model_B.Clock_j =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch' incorporates:
   *  Constant: '<S13>/MCU Overheat Fault Switch'
   *  Constant: '<S5>/ThermalIndicator'
   *  Switch: '<S13>/Switch1'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.MCUOverheatFaultSwitch_Value
      == 1) {
    Blazer_MiL_Model_B.BusCreator.McuThermal =
      Blazer_MiL_Model_P.ThermalIndicator_Value;
  } else {
    if (Blazer_MiL_Model_B.Clock_j >
        Blazer_MiL_Model_P.Switch1_Threshold) {
      /* Switch: '<S13>/Switch1' incorporates:
       *  Constant: '<S13>/MCUOverheat'
       */
      Blazer_MiL_Model_B.Switch1 =
        Blazer_MiL_Model_P.MCUOverheat_Value;
    } else {
      /* Switch: '<S13>/Switch1' incorporates:
       *  Constant: '<S5>/ThermalIndicator'
       */
      Blazer_MiL_Model_B.Switch1 =
        Blazer_MiL_Model_P.ThermalIndicator_Value;
    }

    Blazer_MiL_Model_B.BusCreator.McuThermal =
      Blazer_MiL_Model_B.Switch1;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch' */

  /* Gain: '<S5>/Gain1' */
  Blazer_MiL_Model_B.BusCreator.MotorSpd =
    Blazer_MiL_Model_P.Gain1_Gain_h *
    Blazer_MiL_Model_B.MotSpd;

  /* Clock: '<S13>/Clock4' */
  Blazer_MiL_Model_B.Clock4 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch4' incorporates:
   *  Constant: '<S13>/MtrTrqEst Fault Switch'
   *  Switch: '<S13>/Switch5'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.MtrTrqEstFaultSwitch_Value ==
      1) {
    Blazer_MiL_Model_B.BusCreator.MotorTrqEst = 0.0;
  } else {
    if (Blazer_MiL_Model_B.Clock4 >
        Blazer_MiL_Model_P.Switch5_Threshold) {
      /* Switch: '<S13>/Switch5' incorporates:
       *  Constant: '<S13>/MotrTrqEst Fault'
       */
      Blazer_MiL_Model_B.Switch5 =
        Blazer_MiL_Model_P.MotrTrqEstFault_Value;
    } else {
      /* Switch: '<S13>/Switch5' */
      Blazer_MiL_Model_B.Switch5 = 0.0;
    }

    Blazer_MiL_Model_B.BusCreator.MotorTrqEst =
      Blazer_MiL_Model_B.Switch5;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch4' */

  /* Clock: '<S13>/Clock2' */
  Blazer_MiL_Model_B.Clock2 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch2' incorporates:
   *  Constant: '<S13>/TranshftLvr Fault Switch'
   *  Constant: '<S5>/TrnsShiftLvrPos'
   *  Switch: '<S13>/Switch3'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.TranshftLvrFaultSwitch_Value
      == 1) {
    Blazer_MiL_Model_B.BusCreator.TrnsShftPos =
      Blazer_MiL_Model_P.TrnsShiftLvrPos_Value;
  } else {
    if (Blazer_MiL_Model_B.Clock2 >
        Blazer_MiL_Model_P.Switch3_Threshold) {
      /* Switch: '<S13>/Switch3' incorporates:
       *  Constant: '<S13>/TrnsPos'
       */
      Blazer_MiL_Model_B.Switch3 =
        Blazer_MiL_Model_P.TrnsPos_Value;
    } else {
      /* Switch: '<S13>/Switch3' incorporates:
       *  Constant: '<S5>/TrnsShiftLvrPos'
       */
      Blazer_MiL_Model_B.Switch3 =
        Blazer_MiL_Model_P.TrnsShiftLvrPos_Value;
    }

    Blazer_MiL_Model_B.BusCreator.TrnsShftPos =
      Blazer_MiL_Model_B.Switch3;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch2' */

  /* Gain: '<S5>/m//s2kph' */
  Blazer_MiL_Model_B.ms2kph =
    Blazer_MiL_Model_P.ms2kph_Gain *
    Blazer_MiL_Model_B.VehSpdAvgDrvn;

  /* Clock: '<S13>/Clock8' */
  Blazer_MiL_Model_B.Clock8 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch8' incorporates:
   *  Constant: '<S13>/PwrTrainDirection Fault Switch'
   *  Switch: '<S13>/Switch9'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.PwrTrainDirectionFaultSwitch_Value
      == 1) {
    Blazer_MiL_Model_B.BusCreator.VehSpd =
      Blazer_MiL_Model_B.ms2kph;
  } else {
    if (Blazer_MiL_Model_B.Clock8 >
        Blazer_MiL_Model_P.Switch9_Threshold) {
      /* Gain: '<S13>/Gain' incorporates:
       *  Switch: '<S13>/Switch9'
       */
      Blazer_MiL_Model_B.Gain =
        Blazer_MiL_Model_P.Gain_Gain *
        Blazer_MiL_Model_B.ms2kph;

      /* Switch: '<S13>/Switch9' */
      Blazer_MiL_Model_B.Switch9 =
        Blazer_MiL_Model_B.Gain;
    } else {
      /* Switch: '<S13>/Switch9' */
      Blazer_MiL_Model_B.Switch9 =
        Blazer_MiL_Model_B.ms2kph;
    }

    Blazer_MiL_Model_B.BusCreator.VehSpd =
      Blazer_MiL_Model_B.Switch9;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch8' */

  /* Clock: '<S13>/Clock1' */
  Blazer_MiL_Model_B.Clock1 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch1' incorporates:
   *  Constant: '<S13>/Battery Overheat Fault Switch'
   *  Constant: '<S5>/bms_t_coolant'
   *  Switch: '<S13>/Switch2'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.BatteryOverheatFaultSwitch_Value
      == 1) {
    Blazer_MiL_Model_B.BusCreator.battTcoolant =
      Blazer_MiL_Model_P.bms_t_coolant_Value;
  } else {
    if (Blazer_MiL_Model_B.Clock1 >
        Blazer_MiL_Model_P.Switch2_Threshold) {
      /* Switch: '<S13>/Switch2' incorporates:
       *  Constant: '<S13>/BattTemp1'
       */
      Blazer_MiL_Model_B.Switch2 =
        Blazer_MiL_Model_P.BattTemp1_Value;
    } else {
      /* Switch: '<S13>/Switch2' incorporates:
       *  Constant: '<S5>/bms_t_coolant'
       */
      Blazer_MiL_Model_B.Switch2 =
        Blazer_MiL_Model_P.bms_t_coolant_Value;
    }

    Blazer_MiL_Model_B.BusCreator.battTcoolant =
      Blazer_MiL_Model_B.Switch2;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch1' */

  /* BusCreator: '<S5>/Bus Creator' incorporates:
   *  Constant: '<S5>/ABSAtv'
   *  Constant: '<S5>/APP_validity'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant4'
   *  Constant: '<S5>/Constant5'
   *  Constant: '<S5>/Constant6'
   *  Constant: '<S5>/Constant7'
   *  Constant: '<S5>/Constant8'
   *  Constant: '<S5>/Constant9'
   *  Constant: '<S5>/DistanceObjValid'
   *  Constant: '<S5>/EngRunAtv'
   *  Constant: '<S5>/Hood_state'
   *  Constant: '<S5>/Key_status'
   *  Constant: '<S5>/StateMcu'
   *  Constant: '<S5>/StrWhAng'
   *  Constant: '<S5>/StrWhAngV'
   *  Constant: '<S5>/TimeGap'
   *  Constant: '<S5>/bms_cpwr_cmd'
   *  Constant: '<S5>/bms_cpwr_mon'
   *  Constant: '<S5>/bms_hvil_mon'
   *  Constant: '<S5>/bms_mainc_stat'
   *  Constant: '<S5>/bms_ready'
   *  Constant: '<S5>/bms_veh_mon'
   */
  Blazer_MiL_Model_B.BusCreator.ABSAtv =
    Blazer_MiL_Model_P.ABSAtv_Value;
  Blazer_MiL_Model_B.BusCreator.APP =
    Blazer_MiL_Model_B.APP_k;
  Blazer_MiL_Model_B.BusCreator.APPv =
    Blazer_MiL_Model_P.APP_validity_Value;
  Blazer_MiL_Model_B.BusCreator.EngRunAtv =
    Blazer_MiL_Model_P.EngRunAtv_Value;
  Blazer_MiL_Model_B.BusCreator.EngSpd =
    Blazer_MiL_Model_B.EngSpd;
  Blazer_MiL_Model_B.BusCreator.HdSt =
    Blazer_MiL_Model_P.Hood_state_Value;
  Blazer_MiL_Model_B.BusCreator.KeySt =
    Blazer_MiL_Model_P.Key_status_Value;
  Blazer_MiL_Model_B.BusCreator.SOC =
    Blazer_MiL_Model_B.BattSoc;
  Blazer_MiL_Model_B.BusCreator.StateMcu =
    Blazer_MiL_Model_P.StateMcu_Value;
  Blazer_MiL_Model_B.BusCreator.StrWhAng =
    Blazer_MiL_Model_P.StrWhAng_Value;
  Blazer_MiL_Model_B.BusCreator.StrWhAngV =
    Blazer_MiL_Model_P.StrWhAngV_Value;
  Blazer_MiL_Model_B.BusCreator.bcmready =
    Blazer_MiL_Model_P.bms_ready_Value;
  Blazer_MiL_Model_B.BusCreator.cpwrcmd =
    Blazer_MiL_Model_P.bms_cpwr_cmd_Value;
  Blazer_MiL_Model_B.BusCreator.cpwrmon =
    Blazer_MiL_Model_P.bms_cpwr_mon_Value;
  Blazer_MiL_Model_B.BusCreator.hvilmon =
    Blazer_MiL_Model_P.bms_hvil_mon_Value;
  Blazer_MiL_Model_B.BusCreator.ibat =
    Blazer_MiL_Model_B.BattCurr;
  Blazer_MiL_Model_B.BusCreator.maincstat =
    Blazer_MiL_Model_P.bms_mainc_stat_Value;
  Blazer_MiL_Model_B.BusCreator.vbat =
    Blazer_MiL_Model_B.BattV;
  Blazer_MiL_Model_B.BusCreator.vehmon =
    Blazer_MiL_Model_P.bms_veh_mon_Value;
  Blazer_MiL_Model_B.BusCreator.ICESwitch =
    Blazer_MiL_Model_P.Constant2_Value;
  Blazer_MiL_Model_B.BusCreator.RegenSwitch =
    Blazer_MiL_Model_P.Constant1_Value;
  Blazer_MiL_Model_B.BusCreator.CAVsCrsLmtrSwStat =
    Blazer_MiL_Model_P.Constant3_Value;
  Blazer_MiL_Model_B.BusCreator.CAVsCrsCntrlSwStOnSwAct
    = 0.0;
  Blazer_MiL_Model_B.BusCreator.CAVsCrsCntrlStSetSwAct
    = 0.0;
  Blazer_MiL_Model_B.BusCreator.Long_Switch = 0.0;
  Blazer_MiL_Model_B.BusCreator.TCSysAtv = 0.0;
  Blazer_MiL_Model_B.BusCreator.MotorRC = 0.0;
  Blazer_MiL_Model_B.BusCreator.DrvIntndAxlTrqMax =
    0.0;
  Blazer_MiL_Model_B.BusCreator.DrvIntndAxlTrqMin =
    0.0;
  Blazer_MiL_Model_B.BusCreator.TrqReqStat = 0.0;
  Blazer_MiL_Model_B.BusCreator.xdotref =
    Blazer_MiL_Model_B.xdotref;
  Blazer_MiL_Model_B.BusCreator.EngTrqOut =
    Blazer_MiL_Model_B.EngTrqOut;
  Blazer_MiL_Model_B.BusCreator.ACCBrakeTime =
    Blazer_MiL_Model_P.Constant4_Value;
  Blazer_MiL_Model_B.BusCreator.ACCSetSpd_kph = 0.0;
  Blazer_MiL_Model_B.BusCreator.CAVtrgVel = 0.0;
  Blazer_MiL_Model_B.BusCreator.CAVtrgDist = 0.0;
  Blazer_MiL_Model_B.BusCreator.grade =
    Blazer_MiL_Model_P.Constant5_Value;
  Blazer_MiL_Model_B.BusCreator.Tanh_Exponent =
    Blazer_MiL_Model_P.Constant6_Value;
  Blazer_MiL_Model_B.BusCreator.Tanh_multiplier =
    Blazer_MiL_Model_P.Constant7_Value;
  Blazer_MiL_Model_B.BusCreator.dist_is_valid = false;
  Blazer_MiL_Model_B.BusCreator.TrafficLightPresent =
    false;
  Blazer_MiL_Model_B.BusCreator.DistanceToIntersection
    = 0.0;
  Blazer_MiL_Model_B.BusCreator.TimeToNextState = 0.0;
  Blazer_MiL_Model_B.BusCreator.CurrentState = 0.0;
  Blazer_MiL_Model_B.BusCreator.Decel_Division_Value =
    Blazer_MiL_Model_P.Constant8_Value;
  Blazer_MiL_Model_B.BusCreator.bcm_coolan_temp_C =
    Blazer_MiL_Model_P.Constant9_Value;
  Blazer_MiL_Model_B.BusCreator.DistanceObjValid =
    Blazer_MiL_Model_P.DistanceObjValid_Value;
  Blazer_MiL_Model_B.BusCreator.TimeGap =
    Blazer_MiL_Model_P.TimeGap_Value;

  /* Clock: '<S13>/Clock5' */
  Blazer_MiL_Model_B.Clock5 =
    Blazer_MiL_Model_M->Timing.t[0];

  /* MultiPortSwitch: '<S13>/Multiport Switch5' incorporates:
   *  Constant: '<S13>/GFD leakage Fault Switch'
   *  Constant: '<S5>/HV_leakage_ena'
   *  Switch: '<S13>/Switch6'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.GFDleakageFaultSwitch_Value ==
      1) {
    Blazer_MiL_Model_B.MultiportSwitch5 =
      Blazer_MiL_Model_P.HV_leakage_ena_Value;
  } else {
    if (Blazer_MiL_Model_B.Clock5 >
        Blazer_MiL_Model_P.Switch6_Threshold) {
      /* Switch: '<S13>/Switch6' incorporates:
       *  Constant: '<S13>/leakageEna'
       */
      Blazer_MiL_Model_B.Switch6 =
        Blazer_MiL_Model_P.leakageEna_Value;
    } else {
      /* Switch: '<S13>/Switch6' incorporates:
       *  Constant: '<S5>/HV_leakage_ena'
       */
      Blazer_MiL_Model_B.Switch6 =
        Blazer_MiL_Model_P.HV_leakage_ena_Value;
    }

    Blazer_MiL_Model_B.MultiportSwitch5 =
      Blazer_MiL_Model_B.Switch6;
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch5' */

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.VehSpd_mph_g =
    Blazer_MiL_Model_B.Model1_o16.VehSpd_mph;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.RefSpd_mph_g =
    Blazer_MiL_Model_B.Model1_o16.RefSpd_mph;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.EngSpd_rpm =
    Blazer_MiL_Model_B.Model1_o16.EngSpd_rpm;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.MotSpd_rpm =
    Blazer_MiL_Model_B.Model1_o16.MotSpd_rpm;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.EngTrq_Nm =
    Blazer_MiL_Model_B.Model1_o16.EngTrq_Nm;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.MotTrq_Nm =
    Blazer_MiL_Model_B.Model1_o16.MotTrq_Nm;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.BattCurr_A =
    Blazer_MiL_Model_B.Model1_o16.BattCurr_A;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.BattSOC_g =
    Blazer_MiL_Model_B.Model1_o16.BattSOC;

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.FuelEcon_mpge =
    Blazer_MiL_Model_B.Model1_o16.FuelEcon_mpge;
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* Constant: '<S6>/A123Relay' */
    Blazer_MiL_Model_B.A123Relay =
      Blazer_MiL_Model_P.A123Relay_Value;

    /* Constant: '<S6>/BMS12VRelay' */
    Blazer_MiL_Model_B.BMS12VRelay =
      Blazer_MiL_Model_P.BMS12VRelay_Value;

    /* Constant: '<S6>/HVPumpRelay' */
    Blazer_MiL_Model_B.HVPumpRelay =
      Blazer_MiL_Model_P.HVPumpRelay_Value;

    /* Constant: '<S6>/MCURelay' */
    Blazer_MiL_Model_B.MCURelay =
      Blazer_MiL_Model_P.MCURelay_Value;

    /* ToWorkspace: '<S6>/To Workspace' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace_PWORK_n.LoggedData),
                      &Blazer_MiL_Model_B.FuelEcon_mpge,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace1' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace1_PWORK_g.LoggedData),
                      &Blazer_MiL_Model_B.VehSpd_mph_g,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace2' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace2_PWORK_n.LoggedData),
                      &Blazer_MiL_Model_B.RefSpd_mph_g,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace3' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace3_PWORK_aj.LoggedData),
                      &Blazer_MiL_Model_B.BattSOC_g,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace4' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace4_PWORK_c.LoggedData),
                      &Blazer_MiL_Model_B.MotTrq_Nm,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace5' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace5_PWORK_b.LoggedData),
                      &Blazer_MiL_Model_B.EngTrq_Nm,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace6' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace6_PWORK_j.LoggedData),
                      &Blazer_MiL_Model_B.MotSpd_rpm,
                      0);
    }

    /* ToWorkspace: '<S6>/To Workspace7' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace7_PWORK_l.LoggedData),
                      &Blazer_MiL_Model_B.EngSpd_rpm,
                      0);
    }
  }

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.TotFuel_l =
    Blazer_MiL_Model_B.Model1_o16.Fuelout.TotFuel;
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* ToWorkspace: '<S6>/To Workspace8' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace8_PWORK_e.LoggedData),
                      &Blazer_MiL_Model_B.TotFuel_l,
                      0);
    }
  }

  /* SignalConversion generated from: '<S6>/Bus Selector2' */
  Blazer_MiL_Model_B.BattFuel_m =
    Blazer_MiL_Model_B.Model1_o16.Fuelout.BattFuel;
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* ToWorkspace: '<S6>/To Workspace9' */
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      rt_UpdateLogVar((LogVar *)(LogVar*)
                      (Blazer_MiL_Model_DW.ToWorkspace9_PWORK_e.LoggedData),
                      &Blazer_MiL_Model_B.BattFuel_m,
                      0);
    }

    /* Sum: '<S6>/Add' */
    Blazer_MiL_Model_B.Add =
      Blazer_MiL_Model_B.Memory1.EngAxleTrqDmd +
      Blazer_MiL_Model_B.Memory1.McuTorqueCommand;

    /* SignalConversion generated from: '<S6>/Bus Selector1' */
    Blazer_MiL_Model_B.TrqDmdPedalMap =
      Blazer_MiL_Model_B.Memory1.TrqDmdPedalMap;
  }

  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars
      (Blazer_MiL_Model_M->rtwLogInfo,
       (Blazer_MiL_Model_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      /* Update for Memory: '<Root>/Memory1' */
      Blazer_MiL_Model_DW.Memory1_PreviousInput =
        Blazer_MiL_Model_B.Model;

      /* Update for Memory: '<Root>/Memory' */
      Blazer_MiL_Model_DW.Memory_PreviousInput =
        Blazer_MiL_Model_B.BusCreator;
    }

    /* Update for ModelReference generated from: '<Root>/Model1' */
    Blazer_Plant_Model_UpdateTID0
      (&(Blazer_MiL_Model_DW.Model1_InstanceData.rtm),
       &Blazer_MiL_Model_B.VehSpdAvgDrvn,
       &(Blazer_MiL_Model_DW.Model1_InstanceData.rtb),
       &(Blazer_MiL_Model_DW.Model1_InstanceData.rtdw));
    if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
      Blazer_Plant_Model_UpdateTID1();
    }

    /* End of Update for ModelReference generated from: '<Root>/Model1' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
/*      if ((rtmGetTFinal(Blazer_MiL_Model_M)!=-1) &&
          !((rtmGetTFinal(Blazer_MiL_Model_M)-
             (((Blazer_MiL_Model_M->Timing.clockTick1
                +Blazer_MiL_Model_M->Timing.clockTickH1*
                4294967296.0)) * 0.0005)) >
            (((Blazer_MiL_Model_M->Timing.clockTick1+
               Blazer_MiL_Model_M->Timing.clockTickH1*
               4294967296.0)) * 0.0005) * (DBL_EPSILON))) {
        rtmSetErrorStatus(Blazer_MiL_Model_M,
                          "Simulation finished");
      }*/
    }

    rt_ertODEUpdateContinuousStates
      (&Blazer_MiL_Model_M->solverInfo);

    /* Update absolute time */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Blazer_MiL_Model_M->Timing.clockTick0)) {
      ++Blazer_MiL_Model_M->Timing.clockTickH0;
    }

    Blazer_MiL_Model_M->Timing.t[0] =
      rtsiGetSolverStopTime
      (&Blazer_MiL_Model_M->solverInfo);

    /* Update absolute time */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.0005, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    Blazer_MiL_Model_M->Timing.clockTick1++;
    if (!Blazer_MiL_Model_M->Timing.clockTick1) {
      Blazer_MiL_Model_M->Timing.clockTickH1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Blazer_MiL_Model_derivatives(void)
{
  /* Derivatives for ModelReference generated from: '<Root>/Model1' */
  Blazer_Plant_Model_Deriv
    (&Blazer_MiL_Model_B.xdotref,
     &(Blazer_MiL_Model_DW.Model1_InstanceData.rtb),
     &(Blazer_MiL_Model_DW.Model1_InstanceData.rtdw),
     &(Blazer_MiL_Model_X.Model1_CSTATE),
     &(((XDot_Blazer_MiL_Model_T *)
        Blazer_MiL_Model_M->derivs)->Model1_CSTATE));
}

/* Model step function for TID2 */
void Blazer_MiL_Model_step2(void) /* Sample time: [0.5s, 0.0s] */
{
  /* ModelReference generated from: '<Root>/Model1' */
  Blazer_Plant_ModelTID2
    (&(Blazer_MiL_Model_DW.Model1_InstanceData.rtm),
     &(Blazer_MiL_Model_DW.Model1_InstanceData.rtb),
     &(Blazer_MiL_Model_DW.Model1_InstanceData.rtdw));

  /* Update for ModelReference generated from: '<Root>/Model1' */
  Blazer_Plant_Model_UpdateTID2();

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.5, which is the step size
   * of the task. Size of "clockTick2" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  Blazer_MiL_Model_M->Timing.clockTick2++;
  if (!Blazer_MiL_Model_M->Timing.clockTick2) {
    Blazer_MiL_Model_M->Timing.clockTickH2++;
  }
}

/* Model step function for TID3 */
void Blazer_MiL_Model_step3(void) /* Sample time: [1.0s, 0.0s] */
{
  /* RateTransition generated from: '<S1>/mph2ms' */
  Blazer_MiL_Model_B.VehSpd_mph_gg =
    Blazer_MiL_Model_DW.VehSpd_mph_Buffer;

  /* Gain: '<S1>/mph2ms' */
  Blazer_MiL_Model_B.xdot =
    Blazer_MiL_Model_P.mph2ms_Gain *
    Blazer_MiL_Model_B.VehSpd_mph_gg;

  /* RateTransition: '<S1>/Rate Transition' */
  Blazer_MiL_Model_B.RateTransition =
    Blazer_MiL_Model_B.xdot;

  /* SampleTimeMath: '<S8>/TSamp'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  Blazer_MiL_Model_B.TSamp =
    Blazer_MiL_Model_B.RateTransition;

  /* UnitDelay: '<S8>/UD' */
  Blazer_MiL_Model_B.Uk1 =
    Blazer_MiL_Model_DW.UD_DSTATE;

  /* Sum: '<S8>/Diff' */
  Blazer_MiL_Model_B.Diff =
    Blazer_MiL_Model_B.TSamp -
    Blazer_MiL_Model_B.Uk1;

  /* ToWorkspace: '<S1>/To Workspace' */
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    rt_UpdateLogVar((LogVar *)(LogVar*)
                    (Blazer_MiL_Model_DW.ToWorkspace_PWORK_nl.LoggedData),
                    &Blazer_MiL_Model_B.Diff, 0);
  }

  /* SampleTimeMath: '<S7>/TSamp'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *  Multiplication by K = weightedTsampQuantized is being
   *  done implicitly by changing the scaling of the input signal.
   *  No work needs to be done here.  Downstream blocks may need
   *  to do work to handle the scaling of the output; this happens
   *  automatically.
   */
  Blazer_MiL_Model_B.TSamp_j =
    Blazer_MiL_Model_B.Diff;

  /* UnitDelay: '<S7>/UD' */
  Blazer_MiL_Model_B.Uk1_k =
    Blazer_MiL_Model_DW.UD_DSTATE_j;

  /* Sum: '<S7>/Diff' */
  Blazer_MiL_Model_B.Diff_o =
    Blazer_MiL_Model_B.TSamp_j -
    Blazer_MiL_Model_B.Uk1_k;

  /* ToWorkspace: '<S1>/To Workspace11' */
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    rt_UpdateLogVar((LogVar *)(LogVar*)
                    (Blazer_MiL_Model_DW.ToWorkspace11_PWORK.LoggedData),
                    &Blazer_MiL_Model_B.Diff_o, 0);
  }

  /* ToWorkspace: '<S1>/To Workspace12' */
  if (rtmIsMajorTimeStep(Blazer_MiL_Model_M)) {
    rt_UpdateLogVar((LogVar *)(LogVar*)
                    (Blazer_MiL_Model_DW.ToWorkspace12_PWORK.LoggedData),
                    &Blazer_MiL_Model_B.xdot, 0);
  }

  /* RateTransition generated from: '<S1>/MATLAB Function1' */
  Blazer_MiL_Model_DW.Jerksim_Buffer0 =
    Blazer_MiL_Model_B.Diff;

  /* ModelReference generated from: '<Root>/Model' */
  HSC_ModelTID1
    (&(Blazer_MiL_Model_DW.Model_InstanceData.rtb),
     &(Blazer_MiL_Model_DW.Model_InstanceData.rtdw));

  /* DigitalClock: '<S6>/Drive Cycle Sim Time' */
  Blazer_MiL_Model_B.DriveCycleSimTime =
    (((Blazer_MiL_Model_M->Timing.clockTick3+
       Blazer_MiL_Model_M->Timing.clockTickH3*
       4294967296.0)) * 1.0);

  /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
   *  Constant: '<S6>/Drive Cycle Start//Stop'
   *  Constant: '<S6>/Drive Cycle Stop'
   */
  if ((int32_T)
      Blazer_MiL_Model_P.DriveCycleStartStop_Value ==
      1) {
    Blazer_MiL_Model_B.MultiportSwitch1_h =
      Blazer_MiL_Model_B.DriveCycleSimTime;
  } else {
    Blazer_MiL_Model_B.MultiportSwitch1_h =
      Blazer_MiL_Model_P.DriveCycleStop_Value;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch1' */

  /* Lookup_n-D: '<S6>/CAVs City' */
  Blazer_MiL_Model_B.CAVsCity = look1_binlxpw
    (Blazer_MiL_Model_B.MultiportSwitch1_h,
     Blazer_MiL_Model_P.CAVsCity_bp01Data,
     Blazer_MiL_Model_P.CAVsCity_tableData, 599U);

  /* Lookup_n-D: '<S6>/HWFET' */
  Blazer_MiL_Model_B.HWFET = look1_binlxpw
    (Blazer_MiL_Model_B.MultiportSwitch1_h,
     Blazer_MiL_Model_P.HWFET_bp01Data,
     Blazer_MiL_Model_P.HWFET_tableData, 764U);

  /* RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport2_Buffer0
    = Blazer_MiL_Model_B.HWFET;

  /* Lookup_n-D: '<S6>/UDDS' */
  Blazer_MiL_Model_B.UDDS = look1_binlxpw
    (Blazer_MiL_Model_B.MultiportSwitch1_h,
     Blazer_MiL_Model_P.UDDS_bp01Data,
     Blazer_MiL_Model_P.UDDS_tableData, 1368U);

  /* RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport3_Buffer0
    = Blazer_MiL_Model_B.UDDS;

  /* Lookup_n-D: '<S6>/USO6' */
  Blazer_MiL_Model_B.USO6 = look1_binlxpw
    (Blazer_MiL_Model_B.MultiportSwitch1_h,
     Blazer_MiL_Model_P.USO6_bp01Data,
     Blazer_MiL_Model_P.USO6_tableData, 599U);

  /* RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport4_Buffer0
    = Blazer_MiL_Model_B.USO6;

  /* Lookup_n-D: '<S6>/UT Cycle' */
  Blazer_MiL_Model_B.UTCycle = look1_binlxpw
    (Blazer_MiL_Model_B.MultiportSwitch1_h,
     Blazer_MiL_Model_P.UTCycle_bp01Data,
     Blazer_MiL_Model_P.UTCycle_tableData, 599U);

  /* RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport5_Buffer0
    = Blazer_MiL_Model_B.UTCycle;

  /* RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport6_Buffer0
    = Blazer_MiL_Model_B.CAVsCity;

  /* Update for UnitDelay: '<S8>/UD' */
  Blazer_MiL_Model_DW.UD_DSTATE =
    Blazer_MiL_Model_B.TSamp;

  /* Update for UnitDelay: '<S7>/UD' */
  Blazer_MiL_Model_DW.UD_DSTATE_j =
    Blazer_MiL_Model_B.TSamp_j;

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0, which is the step size
   * of the task. Size of "clockTick3" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  Blazer_MiL_Model_M->Timing.clockTick3++;
  if (!Blazer_MiL_Model_M->Timing.clockTick3) {
    Blazer_MiL_Model_M->Timing.clockTickH3++;
  }
}

/* Model step wrapper function for compatibility with a static main program */
void Blazer_MiL_Model_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Blazer_MiL_Model_step0();
    break;

   case 2 :
    Blazer_MiL_Model_step2();
    break;

   case 3 :
    Blazer_MiL_Model_step3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Blazer_MiL_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Blazer_MiL_Model_M, 0,
                sizeof(RT_MODEL_Blazer_MiL_Model_T));
  (Blazer_MiL_Model_M)->Timing.TaskCounters.cLimit[0]
    = 1;
  (Blazer_MiL_Model_M)->Timing.TaskCounters.cLimit[1]
    = 1;
  (Blazer_MiL_Model_M)->Timing.TaskCounters.cLimit[2]
    = 1000;
  (Blazer_MiL_Model_M)->Timing.TaskCounters.cLimit[3]
    = 2000;

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr
      (&Blazer_MiL_Model_M->solverInfo,
       &Blazer_MiL_Model_M->Timing.simTimeStep);
    rtsiSetTPtr(&Blazer_MiL_Model_M->solverInfo,
                &rtmGetTPtr(Blazer_MiL_Model_M));
    rtsiSetStepSizePtr
      (&Blazer_MiL_Model_M->solverInfo,
       &Blazer_MiL_Model_M->Timing.stepSize0);
    rtsiSetdXPtr(&Blazer_MiL_Model_M->solverInfo,
                 &Blazer_MiL_Model_M->derivs);
    rtsiSetContStatesPtr
      (&Blazer_MiL_Model_M->solverInfo, (real_T **)
       &Blazer_MiL_Model_M->contStates);
    rtsiSetNumContStatesPtr
      (&Blazer_MiL_Model_M->solverInfo,
       &Blazer_MiL_Model_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr
      (&Blazer_MiL_Model_M->solverInfo,
       &Blazer_MiL_Model_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr
      (&Blazer_MiL_Model_M->solverInfo,
       &Blazer_MiL_Model_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr
      (&Blazer_MiL_Model_M->solverInfo,
       &Blazer_MiL_Model_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr
      (&Blazer_MiL_Model_M->solverInfo,
       (&rtmGetErrorStatus(Blazer_MiL_Model_M)));
    rtsiSetRTModelPtr(&Blazer_MiL_Model_M->solverInfo,
                      Blazer_MiL_Model_M);
  }

  rtsiSetSimTimeStep(&Blazer_MiL_Model_M->solverInfo,
                     MAJOR_TIME_STEP);
  Blazer_MiL_Model_M->intgData.y =
    Blazer_MiL_Model_M->odeY;
  Blazer_MiL_Model_M->intgData.f[0] =
    Blazer_MiL_Model_M->odeF[0];
  Blazer_MiL_Model_M->intgData.f[1] =
    Blazer_MiL_Model_M->odeF[1];
  Blazer_MiL_Model_M->intgData.f[2] =
    Blazer_MiL_Model_M->odeF[2];
  Blazer_MiL_Model_M->intgData.f[3] =
    Blazer_MiL_Model_M->odeF[3];
  Blazer_MiL_Model_M->contStates =
    ((X_Blazer_MiL_Model_T *)
     &Blazer_MiL_Model_X);
  Blazer_MiL_Model_M->periodicContStateIndices =
    ((int_T*) Blazer_MiL_Model_PeriodicIndX);
  Blazer_MiL_Model_M->periodicContStateRanges =
    ((real_T*) Blazer_MiL_Model_PeriodicRngX);
  rtsiSetSolverData(&Blazer_MiL_Model_M->solverInfo,
                    (void *)
                    &Blazer_MiL_Model_M->intgData);
  rtsiSetSolverName(&Blazer_MiL_Model_M->solverInfo,
                    "ode4");
  rtmSetTPtr(Blazer_MiL_Model_M,
             &Blazer_MiL_Model_M->Timing.tArray[0]);
  rtmSetTFinal(Blazer_MiL_Model_M, 600.0);
  Blazer_MiL_Model_M->Timing.stepSize0 = 0.0005;
  rtmSetFirstInitCond(Blazer_MiL_Model_M, 1);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Blazer_MiL_Model_M->rtwLogInfo =
      &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo
      (Blazer_MiL_Model_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs
      (Blazer_MiL_Model_M->rtwLogInfo, (NULL));
    rtliSetLogT(Blazer_MiL_Model_M->rtwLogInfo,
                "tout");
    rtliSetLogX(Blazer_MiL_Model_M->rtwLogInfo, "");
    rtliSetLogXFinal(Blazer_MiL_Model_M->rtwLogInfo,
                     "");
    rtliSetLogVarNameModifier
      (Blazer_MiL_Model_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Blazer_MiL_Model_M->rtwLogInfo,
                     4);
    rtliSetLogMaxRows(Blazer_MiL_Model_M->rtwLogInfo,
                      0);
    rtliSetLogDecimation
      (Blazer_MiL_Model_M->rtwLogInfo, 1);
    rtliSetLogY(Blazer_MiL_Model_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo
      (Blazer_MiL_Model_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs
      (Blazer_MiL_Model_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &Blazer_MiL_Model_B), 0,
                sizeof(B_Blazer_MiL_Model_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Blazer_MiL_Model_X, 0,
                  sizeof(X_Blazer_MiL_Model_T));
  }

  /* Periodic continuous states */
  {
    (void) memset((void*)
                  Blazer_MiL_Model_PeriodicIndX, 0,
                  1*sizeof(int_T));
    (void) memset((void*)
                  Blazer_MiL_Model_PeriodicRngX, 0,
                  2*sizeof(real_T));
  }

  /* states (dwork) */
  (void) memset((void *)&Blazer_MiL_Model_DW, 0,
                sizeof(DW_Blazer_MiL_Model_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Blazer_MiL_Model_InitializeDataMapInfo();

  {
    static uint32_T *clockTickPtrs[4];
    static uint32_T *clockTickHPtrs[4];
    static real_T *taskTimePtrs[4];
    static uint32_T *taskCounterPtrs;
    static boolean_T *rateTransitionPtrs[(4 * 4)];
    Blazer_MiL_Model_TimingBrdg.nTasks = 4;
    clockTickPtrs[0] =
      &(Blazer_MiL_Model_M->Timing.clockTick0);
    clockTickHPtrs[0] =
      &(Blazer_MiL_Model_M->Timing.clockTickH0);
    clockTickPtrs[1] =
      &(Blazer_MiL_Model_M->Timing.clockTick1);
    clockTickHPtrs[1] =
      &(Blazer_MiL_Model_M->Timing.clockTickH1);
    clockTickPtrs[2] =
      &(Blazer_MiL_Model_M->Timing.clockTick2);
    clockTickHPtrs[2] =
      &(Blazer_MiL_Model_M->Timing.clockTickH2);
    clockTickPtrs[3] =
      &(Blazer_MiL_Model_M->Timing.clockTick3);
    clockTickHPtrs[3] =
      &(Blazer_MiL_Model_M->Timing.clockTickH3);
    Blazer_MiL_Model_TimingBrdg.clockTick =
      clockTickPtrs;
    Blazer_MiL_Model_TimingBrdg.clockTickH =
      clockTickHPtrs;
    taskCounterPtrs =
      &(Blazer_MiL_Model_M->Timing.TaskCounters.TID[0]);
    Blazer_MiL_Model_TimingBrdg.taskCounter =
      taskCounterPtrs;
    rateTransitionPtrs[1*4 + 2] =
      &(Blazer_MiL_Model_M->Timing.RateInteraction.b_TID1_2);
    rateTransitionPtrs[1*4 + 3] =
      &(Blazer_MiL_Model_M->Timing.RateInteraction.b_TID1_3);
    Blazer_MiL_Model_TimingBrdg.rateTransition =
      rateTransitionPtrs;
    taskTimePtrs[0] = &(Blazer_MiL_Model_M->Timing.t
                        [0]);
    taskTimePtrs[1] = (NULL);
    taskTimePtrs[2] = (NULL);
    taskTimePtrs[3] = (NULL);
    Blazer_MiL_Model_TimingBrdg.taskTime =
      taskTimePtrs;
    Blazer_MiL_Model_TimingBrdg.firstInitCond =
      &rtmIsFirstInitCond(Blazer_MiL_Model_M);
  }

  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  HSC_Model_initialize(rtmGetErrorStatusPointer
                       (Blazer_MiL_Model_M),
                       &Blazer_MiL_Model_TimingBrdg,
                       1, 3,
                       &(Blazer_MiL_Model_DW.Model_InstanceData.rtm),
                       &(Blazer_MiL_Model_DW.Model_InstanceData.rtb),
                       &(Blazer_MiL_Model_DW.Model_InstanceData.rtdw),
                       &(Blazer_MiL_Model_M->DataMapInfo.mmi),
                       "Blazer_MiL_Model/Model", 0,
                       -1);

  /* Model Initialize function for ModelReference Block: '<Root>/Model1' */
  Blazer_Plant_Model_initialize(rtmGetErrorStatusPointer
    (Blazer_MiL_Model_M), rtmGetStopRequestedPtr
    (Blazer_MiL_Model_M),
    &(Blazer_MiL_Model_M->solverInfo),
    &Blazer_MiL_Model_TimingBrdg, 0, 1, 2,
    &(Blazer_MiL_Model_DW.Model1_InstanceData.rtm),
    &(Blazer_MiL_Model_DW.Model1_InstanceData.rtb),
    &(Blazer_MiL_Model_DW.Model1_InstanceData.rtdw),
    &(Blazer_MiL_Model_X.Model1_CSTATE),
    &(Blazer_MiL_Model_M->DataMapInfo.mmi),
    "Blazer_MiL_Model/Model1", 1, 0);

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime
    (Blazer_MiL_Model_M->rtwLogInfo, 0.0,
     rtmGetTFinal(Blazer_MiL_Model_M),
     Blazer_MiL_Model_M->Timing.stepSize0,
     (&rtmGetErrorStatus(Blazer_MiL_Model_M)));

  /* SetupRuntimeResources for Scope: '<S1>/Scope5' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1, 1, 1, 1, 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1, 1, 1, 1, 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1, 1, 1, 1, 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL), (NULL), (NULL), (NULL), (NULL)
    };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4, 4, 4, 4, 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "Costsim",
      "JerCost",
      "SOCCost",
      "FuelCost",
      "" };

    static char_T rt_ScopeSignalTitles[] = "CostsimJerCostSOCCostFuelCost";
    static int_T rt_ScopeSignalTitleLengths[] = { 7, 7, 7, 8, 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0, 0, 0, 0, 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0, 0, 0, 0, 0 };

    BuiltInDTypeId dTypes[5] = { SS_DOUBLE, SS_DOUBLE, SS_DOUBLE, SS_DOUBLE,
      SS_DOUBLE };

    static char_T rt_ScopeBlockName[] =
      "Blazer_MiL_Model/ACC Tuning/Scope5";
    static int_T rt_ScopeFrameData[] = { 0, 0, 0, 0, 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL), (NULL), (NULL), (NULL), (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 5;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    Blazer_MiL_Model_DW.Scope5_PWORK.LoggedData[0] =
      rt_CreateStructLogVar(
      Blazer_MiL_Model_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(Blazer_MiL_Model_M),
      Blazer_MiL_Model_M->Timing.stepSize0,
      (&rtmGetErrorStatus(Blazer_MiL_Model_M)),
      "ScopeData5",
      1,
      0,
      1,
      0.0005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (Blazer_MiL_Model_DW.Scope5_PWORK.LoggedData[0]
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace1' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace1_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "SOC",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace1_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace10' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace10_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "PIDoutACC",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace10_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace2' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace2_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "RelDist",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace2_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace3' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace3_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "SafeDist",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace3_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace4' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace4_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "TotFuel1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace4_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace5' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace5_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "BattFuel1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace5_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace6' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace6_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "PIDerr",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace6_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace7' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace7_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "Costsim",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace7_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace8' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace8_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "ACCAPP",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace8_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace9' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace9_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "ACCBPP",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace9_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace13' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace13_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "clock",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace13_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace_PWORK.LoggedData =
      rt_CreateLogVar(
                      Blazer_MiL_Model_M->rtwLogInfo,
                      0.0,
                      rtmGetTFinal(Blazer_MiL_Model_M),
                      Blazer_MiL_Model_M->Timing.stepSize0,
                      (&rtmGetErrorStatus
                       (Blazer_MiL_Model_M)),
                      "APP_Chris",
                      SS_DOUBLE,
                      0,
                      0,
                      0,
                      1,
                      1,
                      dimensions,
                      NO_LOGVALDIMS,
                      (NULL),
                      (NULL),
                      0,
                      1,
                      0.0005,
                      1);
    if (Blazer_MiL_Model_DW.ToWorkspace_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace1' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace1_PWORK_o.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "BPP_Chris1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace1_PWORK_o.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace2' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace2_PWORK_c.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "Gear_Chris",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace2_PWORK_c.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace3' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace3_PWORK_a.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "batcurr_Chris1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace3_PWORK_a.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace4' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace4_PWORK_a.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "battV_Chris",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace4_PWORK_a.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace_PWORK_n.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "FuelEcon",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace_PWORK_n.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace1' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace1_PWORK_g.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "egoVeh",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace1_PWORK_g.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace2' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace2_PWORK_n.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "xdotRef",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace2_PWORK_n.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace3' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace3_PWORK_aj.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "SOC1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace3_PWORK_aj.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace4' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace4_PWORK_c.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "MotTrq1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace4_PWORK_c.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace5' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace5_PWORK_b.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "Engtrq1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace5_PWORK_b.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace6' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace6_PWORK_j.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "MotSpd1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace6_PWORK_j.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace7' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace7_PWORK_l.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "EngSpd1",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace7_PWORK_l.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace8' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace8_PWORK_e.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "TotFuelChris",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace8_PWORK_e.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S6>/To Workspace9' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace9_PWORK_e.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "BattFuelChris",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        0.0005,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace9_PWORK_e.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace_PWORK_nl.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "Accel",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        1.0,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace_PWORK_nl.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace11' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace11_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "Jerk",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        1.0,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace11_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace12' */
  {
    int_T dimensions[1] = { 1 };

    Blazer_MiL_Model_DW.ToWorkspace12_PWORK.LoggedData
      = rt_CreateLogVar(
                        Blazer_MiL_Model_M->rtwLogInfo,
                        0.0,
                        rtmGetTFinal
                        (Blazer_MiL_Model_M),
                        Blazer_MiL_Model_M->Timing.stepSize0,
                        (&rtmGetErrorStatus
                         (Blazer_MiL_Model_M)),
                        "egospd",
                        SS_DOUBLE,
                        0,
                        0,
                        0,
                        1,
                        1,
                        dimensions,
                        NO_LOGVALDIMS,
                        (NULL),
                        (NULL),
                        0,
                        1,
                        1.0,
                        1);
    if (Blazer_MiL_Model_DW.ToWorkspace12_PWORK.LoggedData
        == (NULL))
      return;
  }

  /* Start for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport2 =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport2_InitialCondition;

  /* Start for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport3 =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport3_InitialCondition;

  /* Start for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport4 =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport4_InitialCondition;

  /* Start for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport5 =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport5_InitialCondition;

  /* Start for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_B.TmpRTBAtMultiportSwitchInport6 =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport6_InitialCondition;

  /* Start for FromWorkspace: '<S14>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 20.0, 20.0, 50.0, 50.0, 60.0
    } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 22.352, 22.352, 31.2928, 31.2928,
      0.0, 0.0 } ;

    Blazer_MiL_Model_DW.FromWs_PWORK.TimePtr = (void *)
      pTimeValues0;
    Blazer_MiL_Model_DW.FromWs_PWORK.DataPtr = (void *)
      pDataValues0;
    Blazer_MiL_Model_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for RateTransition generated from: '<S1>/MATLAB Function1' */
  Blazer_MiL_Model_B.Jerksim =
    Blazer_MiL_Model_P.Jerksim_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory1' */
  Blazer_MiL_Model_DW.Memory1_PreviousInput =
    Blazer_MiL_Model_P.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory' */
  Blazer_MiL_Model_DW.Memory_PreviousInput =
    Blazer_MiL_Model_P.Memory_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport2_Buffer0
    =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport2_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport3_Buffer0
    =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport3_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport4_Buffer0
    =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport4_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport5_Buffer0
    =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport5_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S6>/Multiport Switch' */
  Blazer_MiL_Model_DW.TmpRTBAtMultiportSwitchInport6_Buffer0
    =
    Blazer_MiL_Model_P.TmpRTBAtMultiportSwitchInport6_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/MATLAB Function1' */
  Blazer_MiL_Model_DW.Jerksim_Buffer0 =
    Blazer_MiL_Model_P.Jerksim_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S8>/UD' */
  Blazer_MiL_Model_DW.UD_DSTATE =
    Blazer_MiL_Model_P.DiscreteDerivative3_ICPrevScaledInput;

  /* InitializeConditions for UnitDelay: '<S7>/UD' */
  Blazer_MiL_Model_DW.UD_DSTATE_j =
    Blazer_MiL_Model_P.DiscreteDerivative1_ICPrevScaledInput;

  /* SystemInitialize for ModelReference generated from: '<Root>/Model' */
  HSC_Model_Init
    (&(Blazer_MiL_Model_DW.Model_InstanceData.rtb),
     &(Blazer_MiL_Model_DW.Model_InstanceData.rtdw));

  /* SystemInitialize for ModelReference generated from: '<Root>/Model1' */
  Blazer_Plant_Model_Init(&Blazer_MiL_Model_B.Gear,
    &(Blazer_MiL_Model_DW.Model1_InstanceData.rtb),
    &(Blazer_MiL_Model_DW.Model1_InstanceData.rtdw),
    &(Blazer_MiL_Model_X.Model1_CSTATE));

  /* InitializeConditions for root-level periodic continuous states */
  {
    int_T rootPeriodicContStateIndices[1] = { 3 };

    real_T rootPeriodicContStateRanges[2] = { 0.0, 720.0 };

    (void) memcpy((void*)
                  Blazer_MiL_Model_PeriodicIndX,
                  rootPeriodicContStateIndices,
                  1*sizeof(int_T));
    (void) memcpy((void*)
                  Blazer_MiL_Model_PeriodicRngX,
                  rootPeriodicContStateRanges,
                  2*sizeof(real_T));
  }

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(Blazer_MiL_Model_M)) {
    rtmSetFirstInitCond(Blazer_MiL_Model_M, 0);
  }
}

/* Model terminate function */
void Blazer_MiL_Model_terminate(void)
{
  /* (no terminate code required) */
}

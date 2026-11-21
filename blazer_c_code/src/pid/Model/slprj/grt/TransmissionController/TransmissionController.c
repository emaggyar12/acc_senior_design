/*
 * Code generation for system model 'TransmissionController'
 *
 * Model                      : TransmissionController
 * Model version              : 1.222
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:34:26 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "TransmissionController_capi.h"
#include "TransmissionController.h"
#include "TransmissionController_private.h"
#include "look2_binlcapw.h"

/* Named constants for Chart: '<S2>/Chart' */
#define TransmissionController_CALL_EVENT (-1)
#define TransmissionController_IN_DownShifting ((uint8_T)1U)
#define TransmissionController_IN_G1   ((uint8_T)1U)
#define TransmissionController_IN_G2   ((uint8_T)2U)
#define TransmissionController_IN_G3   ((uint8_T)3U)
#define TransmissionController_IN_G4   ((uint8_T)4U)
#define TransmissionController_IN_G5   ((uint8_T)5U)
#define TransmissionController_IN_G6   ((uint8_T)6U)
#define TransmissionController_IN_G7   ((uint8_T)7U)
#define TransmissionController_IN_G8   ((uint8_T)8U)
#define TransmissionController_IN_G9   ((uint8_T)9U)
#define TransmissionController_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define TransmissionController_IN_Neutral ((uint8_T)10U)
#define TransmissionController_IN_SteadyState ((uint8_T)2U)
#define TransmissionController_IN_UpShifting ((uint8_T)3U)
#define TransmissionController_IN_preDownShifting ((uint8_T)4U)
#define TransmissionController_IN_preUpShifting ((uint8_T)5U)
#define TransmissionController_event_Down (0)
#define TransmissionController_event_Up (1)

P_TransmissionController_T TransmissionController_P = {
  /* Variable: Dn_Shft_Spd
   * Referenced by:
   *   '<S7>/Calculate  Downshift Threshold'
   *   '<S8>/Calculate  Downshift Threshold'
   */
  { 2.7777777777777777, 2.7777777777777777, 2.7777777777777777,
    2.7777777777777777, 2.7777777777777777, 2.7777777777777777,
    2.7777777777777777, 3.3051215277777777, 4.6657986111111107,
    6.1935763888888884, 7.2222222222222223, 7.2222222222222223,
    7.2222222222222223, 7.2222222222222223, 7.2222222222222223,
    7.2222222222222223, 7.2222222222222223, 2.7777777777777777,
    2.7777777777777777, 2.7777777777777777, 2.7777777777777777,
    2.7777777777777777, 4.4444444444444446, 6.1111111111111107,
    8.3333333333333339, 9.7222222222222214, 11.111111111111111,
    12.083333333333332, 12.916666666666666, 14.027777777777777,
    14.583333333333332, 15.555555555555555, 15.583767361111111,
    15.583767361111111, 4.166666666666667, 4.166666666666667, 4.166666666666667,
    4.1948784722222223, 4.166666666666667, 4.4444444444444446,
    6.1111111111111107, 8.3333333333333339, 9.7222222222222214,
    11.111111111111111, 12.083333333333332, 12.916666666666666,
    14.027777777777777, 14.583333333333332, 15.583767361111111,
    15.583767361111111, 15.583767361111111, 6.1111111111111107,
    6.1111111111111107, 6.1111111111111107, 6.1393229166666661,
    6.1111111111111107, 7.3328993055555554, 10.277777777777777,
    13.333333333333332, 16.666666666666668, 18.22265625, 20.082465277777779,
    21.111111111111111, 21.723090277777779, 22.222222222222221,
    22.222222222222221, 22.222222222222221, 22.222222222222221,
    8.1119791666666661, 8.1119791666666661, 8.1119791666666661,
    8.1380208333333339, 8.1119791666666661, 10.277777777777777,
    13.888888888888889, 18.055555555555554, 21.944444444444443,
    24.444444444444443, 25.889756944444443, 27.528211805555554,
    28.582899305555554, 29.333767361111111, 29.750434027777779,
    29.778645833333332, 29.778645833333332, 12.250434027777777,
    12.250434027777777, 12.250434027777777, 12.278645833333332,
    12.250434027777777, 13.888888888888889, 19.166666666666668, 25.0,
    28.611111111111111, 31.944444444444443, 35.0, 36.97265625,
    39.055989583333336, 40.583767361111107, 42.165798611111107,
    42.638888888888886, 42.638888888888886, 17.055121527777779,
    17.055121527777779, 17.055121527777779, 17.083333333333332,
    17.055121527777779, 18.832465277777779, 25.028211805555554,
    32.528211805555557, 39.084201388888886, 45.1953125, 49.750434027777779,
    53.166232638888886, 57.055121527777779, 59.388020833333329,
    61.888020833333329, 63.611111111111107, 63.611111111111107,
    21.000434027777779, 21.000434027777779, 21.000434027777779,
    21.028645833333332, 21.028645833333332, 24.722222222222221,
    32.194010416666664, 40.889756944444443, 47.888454861111107,
    141.11111111111111, 141.11111111111111, 141.11111111111111,
    141.11111111111111, 141.11111111111111, 141.11111111111111,
    141.11111111111111, 141.11111111111111 },

  /* Variable: Gear_Dn_bpt
   * Referenced by:
   *   '<S7>/Calculate  Downshift Threshold'
   *   '<S8>/Calculate  Downshift Threshold'
   */
  { 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 },

  /* Variable: Gear_Up_bpt
   * Referenced by:
   *   '<S7>/Calculate Upshift Threshold'
   *   '<S9>/Calculate Upshift Threshold'
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /* Variable: Pdl_Pos_Dn_bpt
   * Referenced by:
   *   '<S7>/Calculate  Downshift Threshold'
   *   '<S8>/Calculate  Downshift Threshold'
   */
  { 0.0, 0.03125, 0.125, 0.126007080078125, 0.1875, 0.25, 0.3125, 0.375, 0.4375,
    0.5, 0.5625, 0.625, 0.6875, 0.75, 0.839996337890625, 0.979995727539062,
    0.999984741210937 },

  /* Variable: Pdl_Pos_Up_bpt
   * Referenced by:
   *   '<S7>/Calculate Upshift Threshold'
   *   '<S9>/Calculate Upshift Threshold'
   */
  { 0.0, 0.03125, 0.125, 0.126007080078125, 0.1875, 0.25, 0.3125, 0.375, 0.4375,
    0.5, 0.5625, 0.625, 0.6875, 0.75, 0.839996337890625, 0.979995727539062,
    0.999984741210937 },

  /* Variable: Up_Shft_Spd
   * Referenced by:
   *   '<S7>/Calculate Upshift Threshold'
   *   '<S9>/Calculate Upshift Threshold'
   */
  { 3.6111111111111112, 3.6111111111111112, 3.6111111111111112,
    3.6111111111111112, 3.6111111111111112, 5.0, 6.3888888888888884,
    8.0555555555555554, 9.1666666666666661, 9.7222222222222214,
    10.277777777777777, 10.555555555555555, 10.833333333333334,
    11.111111111111111, 11.388888888888889, 11.388888888888889,
    11.388888888888889, 4.4444444444444446, 4.4444444444444446,
    4.4444444444444446, 5.0, 5.8897569444444446, 8.1944444444444446,
    10.555555555555555, 12.777777777777777, 14.889322916666666,
    15.911458333333332, 16.371527777777779, 16.905381944444443,
    17.115885416666668, 17.272135416666668, 17.361111111111111,
    17.361111111111111, 17.361111111111111, 5.0, 5.0, 5.0, 5.0,
    5.8897569444444446, 8.1944444444444446, 10.555555555555555,
    12.777777777777777, 14.889322916666666, 15.911458333333332,
    16.371527777777779, 16.905381944444443, 17.115885416666668,
    17.272135416666668, 17.5, 17.5, 17.5, 6.9444444444444446, 6.9444444444444446,
    6.9444444444444446, 6.97265625, 8.9171006944444446, 11.944444444444445,
    15.555555555555555, 19.444444444444443, 21.111111111111111,
    22.222222222222221, 22.721354166666668, 23.194444444444443,
    23.693576388888889, 24.166666666666664, 24.722222222222221,
    24.722222222222221, 24.722222222222221, 8.9453125, 8.9453125,
    8.9713541666666661, 8.9995659722222214, 11.417100694444445,
    15.555555555555555, 20.277777777777779, 24.722222222222221,
    27.361111111111111, 28.9453125, 29.583333333333332, 30.1953125,
    30.833333333333332, 31.4453125, 32.222222222222221, 32.222222222222221,
    32.222222222222221, 13.361545138888889, 13.361545138888889,
    13.361545138888889, 13.389756944444445, 14.778645833333332,
    20.833333333333332, 26.388888888888889, 32.222222222222221,
    34.444444444444443, 36.388888888888886, 38.472222222222221,
    40.666232638888886, 41.888020833333336, 42.834201388888886,
    43.917100694444443, 44.305555555555557, 44.305555555555557,
    18.166232638888889, 18.166232638888889, 18.166232638888889,
    18.194444444444443, 19.526909722222221, 26.111111111111111,
    33.888888888888886, 39.778645833333336, 46.306423611111107,
    50.555555555555557, 53.667534722222221, 58.111979166666664,
    59.750434027777779, 61.471354166666664, 64.110243055555557,
    64.722222222222214, 64.722222222222214, 22.111545138888889,
    22.111545138888889, 22.111545138888889, 22.139756944444443, 24.47265625,
    31.749131944444443, 40.776909722222221, 48.083767361111107,
    142.22005208333334, 142.22005208333334, 142.22005208333334,
    142.22005208333334, 142.22005208333334, 142.22005208333334,
    142.22005208333334, 142.22005208333334, 142.22005208333334 },

  /* Computed Parameter: up_th_Y0
   * Referenced by: '<S9>/up_th'
   */
  0.0,

  /* Computed Parameter: down_th_Y0
   * Referenced by: '<S8>/down_th'
   */
  0.0,

  /* Computed Parameter: CalculateUpshiftThreshold_maxIndex
   * Referenced by: '<S9>/Calculate Upshift Threshold'
   */
  { 16U, 7U },

  /* Computed Parameter: CalculateDownshiftThreshold_maxIndex
   * Referenced by: '<S8>/Calculate  Downshift Threshold'
   */
  { 16U, 7U },

  /* Start of '<S6>/calc' */
  {
    /* Computed Parameter: SpdThr_Y0
     * Referenced by: '<S7>/SpdThr'
     */
    0.0,

    /* Computed Parameter: CalculateUpshiftThreshold_maxIndex
     * Referenced by: '<S7>/Calculate Upshift Threshold'
     */
    { 16U, 7U },

    /* Computed Parameter: CalculateDownshiftThreshold_maxIndex
     * Referenced by: '<S7>/Calculate  Downshift Threshold'
     */
    { 16U, 7U }
  }
  /* End of '<S6>/calc' */
};

/* Forward declaration for local functions */
static void TransmissionController_GearState(const real_T *rtu_VehSpd, const
  real_T *rtu_AccelPdl, const real_T *rtu_Neutral, real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW);

/* System initialize for function-call system: '<S6>/calc' */
void TransmissionController_calc_Init(B_calc_TransmissionController_T *localB,
  P_calc_TransmissionController_T *localP)
{
  /* SystemInitialize for Sum: '<S7>/Add4' incorporates:
   *  Outport: '<S7>/SpdThr'
   */
  localB->Add4 = localP->SpdThr_Y0;
}

/* Output and update for function-call system: '<S6>/calc' */
void TransmissionController_calc(real_T rtu_gear, real_T rtu_pedal, real_T
  rtu_speed, B_calc_TransmissionController_T *localB,
  P_calc_TransmissionController_T *localP)
{
  /* Lookup_n-D: '<S7>/Calculate Upshift Threshold' */
  localB->CalculateUpshiftThreshold = look2_binlcapw(rtu_pedal, rtu_gear,
    TransmissionController_P.Pdl_Pos_Up_bpt,
    TransmissionController_P.Gear_Up_bpt, TransmissionController_P.Up_Shft_Spd,
    localP->CalculateUpshiftThreshold_maxIndex, 17U);

  /* Sum: '<S7>/Add1' */
  localB->Add1 = localB->CalculateUpshiftThreshold - rtu_speed;

  /* Lookup_n-D: '<S7>/Calculate  Downshift Threshold' */
  localB->CalculateDownshiftThreshold = look2_binlcapw(rtu_pedal, rtu_gear,
    TransmissionController_P.Pdl_Pos_Dn_bpt,
    TransmissionController_P.Gear_Dn_bpt, TransmissionController_P.Dn_Shft_Spd,
    localP->CalculateDownshiftThreshold_maxIndex, 17U);

  /* Sum: '<S7>/Add3' */
  localB->Add3 = rtu_speed - localB->CalculateDownshiftThreshold;

  /* Sum: '<S7>/Add4' */
  localB->Add4 = localB->Add1 - localB->Add3;
}

/* Function for Chart: '<S2>/Chart' */
static void TransmissionController_GearState(const real_T *rtu_VehSpd, const
  real_T *rtu_AccelPdl, const real_T *rtu_Neutral, real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW)
{
  /* During 'GearState': '<S6>:17' */
  switch (localDW->is_GearState) {
   case TransmissionController_IN_G1:
    /* During 'G1': '<S6>:5' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:9' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G2;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G2': '<S6>:6' */
      *rty_GearState = 2.0;
    } else if (*rtu_Neutral != 0.0) {
      /* Transition: '<S6>:88' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_Neutral;

      /* Chart: '<S2>/Chart' */
      /* Entry 'Neutral': '<S6>:1' */
      *rty_GearState = 0.0;
    }
    break;

   case TransmissionController_IN_G2:
    /* During 'G2': '<S6>:6' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:43' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G3;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G3': '<S6>:41' */
      *rty_GearState = 3.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:70' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G1;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G1': '<S6>:5' */
      *rty_GearState = 1.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 2.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G3:
    /* During 'G3': '<S6>:41' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:44' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G4;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G4': '<S6>:42' */
      *rty_GearState = 4.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:69' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G2;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G2': '<S6>:6' */
      *rty_GearState = 2.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 3.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G4:
    /* During 'G4': '<S6>:42' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:327' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G5;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G5': '<S6>:324' */
      *rty_GearState = 5.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:68' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G3;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G3': '<S6>:41' */
      *rty_GearState = 3.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 4.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G5:
    /* During 'G5': '<S6>:324' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:86' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G6;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G6': '<S6>:85' */
      *rty_GearState = 6.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:328' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G4;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G4': '<S6>:42' */
      *rty_GearState = 4.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 5.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G6:
    /* During 'G6': '<S6>:85' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:365' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G7;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G7': '<S6>:361' */
      *rty_GearState = 7.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:87' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G5;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G5': '<S6>:324' */
      *rty_GearState = 5.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 6.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G7:
    /* During 'G7': '<S6>:361' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:367' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G8;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G8': '<S6>:360' */
      *rty_GearState = 8.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:371' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G6;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G6': '<S6>:85' */
      *rty_GearState = 6.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 7.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G8:
    /* During 'G8': '<S6>:360' */
    if (localDW->sfEvent == TransmissionController_event_Up) {
      /* Transition: '<S6>:368' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G9;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G9': '<S6>:363' */
      *rty_GearState = 9.0;
    } else if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:370' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G7;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G7': '<S6>:361' */
      *rty_GearState = 7.0;
    } else {
      /* Simulink Function 'calc': '<S6>:197' */
      localB->gear_l = 8.0;

      /* Chart: '<S2>/Chart' */
      localB->pedal_a = *rtu_AccelPdl;
      localB->speed = *rtu_VehSpd;

      /* Outputs for Function Call SubSystem: '<S6>/calc' */
      TransmissionController_calc(localB->gear_l, localB->pedal_a, localB->speed,
        &localB->calc, &TransmissionController_P.calc);

      /* End of Outputs for SubSystem: '<S6>/calc' */
    }
    break;

   case TransmissionController_IN_G9:
    /* During 'G9': '<S6>:363' */
    if (localDW->sfEvent == TransmissionController_event_Down) {
      /* Transition: '<S6>:369' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G8;

      /* Chart: '<S2>/Chart' */
      /* Entry 'G8': '<S6>:360' */
      *rty_GearState = 8.0;
    }
    break;

   case TransmissionController_IN_Neutral:
    /* Chart: '<S2>/Chart' */
    /* During 'Neutral': '<S6>:1' */
    if (!(*rtu_Neutral != 0.0)) {
      /* Transition: '<S6>:32' */
      localDW->isStable = false;
      localDW->is_GearState = TransmissionController_IN_G1;

      /* Entry 'G1': '<S6>:5' */
      *rty_GearState = 1.0;
    }
    break;

   default:
    /* Unreachable state, for coverage only */
    localDW->is_GearState = TransmissionController_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* System initialize for referenced model: 'TransmissionController' */
void TransmissionController_Init(real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW)
{
  localDW->sfEvent = TransmissionController_CALL_EVENT;
  localDW->is_active_GearState = 0U;
  localDW->is_GearState = TransmissionController_IN_NO_ACTIVE_CHILD;
  localDW->is_active_SelectionState = 0U;
  localDW->is_SelectionState = TransmissionController_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_TransmissionController = 0U;
  *rty_GearState = 1.0;
  localB->up_th = 0.0;
  localB->down_th = 0.0;

  /* SystemInitialize for Chart: '<S2>/Chart' incorporates:
   *  SubSystem: '<S6>/calc_up'
   */
  /* SystemInitialize for Lookup_n-D: '<S9>/Calculate Upshift Threshold' incorporates:
   *  Outport: '<S9>/up_th'
   */
  localB->CalculateUpshiftThreshold = TransmissionController_P.up_th_Y0;

  /* SystemInitialize for Chart: '<S2>/Chart' incorporates:
   *  SubSystem: '<S6>/calc_down'
   */
  /* SystemInitialize for Lookup_n-D: '<S8>/Calculate  Downshift Threshold' incorporates:
   *  Outport: '<S8>/down_th'
   */
  localB->CalculateDownshiftThreshold = TransmissionController_P.down_th_Y0;

  /* SystemInitialize for Chart: '<S2>/Chart' incorporates:
   *  SubSystem: '<S6>/calc'
   */
  TransmissionController_calc_Init(&localB->calc, &TransmissionController_P.calc);
}

/* System reset for referenced model: 'TransmissionController' */
void TransmissionController_Reset(real_T *rty_GearState,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW)
{
  /* SystemReset for Chart: '<S2>/Chart' */
  localDW->sfEvent = TransmissionController_CALL_EVENT;
  localDW->is_active_GearState = 0U;
  localDW->is_GearState = TransmissionController_IN_NO_ACTIVE_CHILD;
  localDW->is_active_SelectionState = 0U;
  localDW->is_SelectionState = TransmissionController_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_TransmissionController = 0U;
  *rty_GearState = 1.0;
  localB->up_th = 0.0;
  localB->down_th = 0.0;
}

/* Output and update for referenced model: 'TransmissionController' */
void TransmissionController(const real_T *rtu_VehSpd, const real_T *rtu_AccelPdl,
  const real_T *rtu_Neutral, real_T *rty_GearState, B_TransmissionController_c_T
  *localB, DW_TransmissionController_f_T *localDW)
{
  int32_T b_previousEvent;
  int32_T superStepCount;

  /* Chart: '<S2>/Chart' */
  if (localDW->temporalCounter_i1 < 2047U) {
    localDW->temporalCounter_i1++;
  }

  /* Gateway: Shift state/Chart */
  localDW->sfEvent = TransmissionController_CALL_EVENT;
  superStepCount = 0;
  do {
    localDW->isStable = true;

    /* During: Shift state/Chart */
    if (localDW->is_active_c1_TransmissionController == 0U) {
      /* Entry: Shift state/Chart */
      localDW->is_active_c1_TransmissionController = 1U;

      /* Entry Internal: Shift state/Chart */
      localDW->is_active_GearState = 1U;

      /* Entry Internal 'GearState': '<S6>:17' */
      /* Transition: '<S6>:2' */
      localDW->is_GearState = TransmissionController_IN_Neutral;

      /* Entry 'Neutral': '<S6>:1' */
      *rty_GearState = 0.0;
      localDW->is_active_SelectionState = 1U;

      /* Entry Internal 'SelectionState': '<S6>:18' */
      /* Transition: '<S6>:19' */
      localDW->isStable = false;
      localDW->is_SelectionState = TransmissionController_IN_SteadyState;

      /* Entry 'SteadyState': '<S6>:11' */
    } else {
      if (localDW->is_active_GearState != 0U) {
        TransmissionController_GearState(rtu_VehSpd, rtu_AccelPdl, rtu_Neutral,
          rty_GearState, localB, localDW);
      }

      if (localDW->is_active_SelectionState != 0U) {
        /* During 'SelectionState': '<S6>:18' */
        /* Simulink Function 'calc_up': '<S6>:40' */
        localB->gear = *rty_GearState;
        localB->pedal = *rtu_AccelPdl;
        localB->CalculateUpshiftThreshold = look2_binlcapw(localB->pedal,
          localB->gear, TransmissionController_P.Pdl_Pos_Up_bpt,
          TransmissionController_P.Gear_Up_bpt,
          TransmissionController_P.Up_Shft_Spd,
          TransmissionController_P.CalculateUpshiftThreshold_maxIndex, 17U);
        localB->up_th = localB->CalculateUpshiftThreshold;

        /* Simulink Function 'calc_down': '<S6>:75' */
        localB->gear_a = *rty_GearState;
        localB->pedal_c = *rtu_AccelPdl;
        localB->CalculateDownshiftThreshold = look2_binlcapw(localB->pedal_c,
          localB->gear_a, TransmissionController_P.Pdl_Pos_Dn_bpt,
          TransmissionController_P.Gear_Dn_bpt,
          TransmissionController_P.Dn_Shft_Spd,
          TransmissionController_P.CalculateDownshiftThreshold_maxIndex, 17U);
        localB->down_th = localB->CalculateDownshiftThreshold;
        switch (localDW->is_SelectionState) {
         case TransmissionController_IN_DownShifting:
          /* During 'DownShifting': '<S6>:56' */
          /* Transition: '<S6>:60' */
          /* Event: '<S6>:71' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = TransmissionController_event_Down;
          if (localDW->is_active_GearState != 0U) {
            TransmissionController_GearState(rtu_VehSpd, rtu_AccelPdl,
              rtu_Neutral, rty_GearState, localB, localDW);
          }

          localDW->sfEvent = b_previousEvent;

          /* Transition: '<S6>:25' */
          localDW->isStable = false;
          localDW->is_SelectionState = TransmissionController_IN_SteadyState;

          /* Entry 'SteadyState': '<S6>:11' */
          break;

         case TransmissionController_IN_SteadyState:
          /* During 'SteadyState': '<S6>:11' */
          if ((*rtu_VehSpd < localB->down_th) && (*rty_GearState > 1.0)) {
            /* Transition: '<S6>:63' */
            /* Transition: '<S6>:158' */
            localDW->isStable = false;
            localDW->is_SelectionState =
              TransmissionController_IN_preDownShifting;
            localDW->temporalCounter_i1 = 0U;
          } else if ((*rtu_VehSpd > localB->up_th) && (*rty_GearState <= 8.0) &&
                     (floor(*rty_GearState) == *rty_GearState)) {
            /* Transition: '<S6>:21' */
            /* Transition: '<S6>:154' */
            localDW->isStable = false;
            localDW->is_SelectionState = TransmissionController_IN_preUpShifting;
            localDW->temporalCounter_i1 = 0U;
          }
          break;

         case TransmissionController_IN_UpShifting:
          /* During 'UpShifting': '<S6>:13' */
          /* Transition: '<S6>:24' */
          /* Event: '<S6>:48' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = TransmissionController_event_Up;
          if (localDW->is_active_GearState != 0U) {
            TransmissionController_GearState(rtu_VehSpd, rtu_AccelPdl,
              rtu_Neutral, rty_GearState, localB, localDW);
          }

          localDW->sfEvent = b_previousEvent;

          /* Transition: '<S6>:25' */
          localDW->isStable = false;
          localDW->is_SelectionState = TransmissionController_IN_SteadyState;

          /* Entry 'SteadyState': '<S6>:11' */
          break;

         case TransmissionController_IN_preDownShifting:
          /* During 'preDownShifting': '<S6>:157' */
          if ((localDW->temporalCounter_i1 >= 2000U) && (*rtu_VehSpd <
               localB->down_th)) {
            /* Transition: '<S6>:159' */
            localDW->isStable = false;
            localDW->is_SelectionState = TransmissionController_IN_DownShifting;

            /* Entry 'DownShifting': '<S6>:56' */
            *rty_GearState -= 0.5;
          } else if (*rtu_VehSpd >= localB->down_th) {
            /* Transition: '<S6>:160' */
            /* Transition: '<S6>:170' */
            localDW->isStable = false;
            localDW->is_SelectionState = TransmissionController_IN_SteadyState;

            /* Entry 'SteadyState': '<S6>:11' */
          }
          break;

         case TransmissionController_IN_preUpShifting:
          /* During 'preUpShifting': '<S6>:149' */
          if ((localDW->temporalCounter_i1 >= 20U) && (*rtu_VehSpd >
               localB->up_th)) {
            /* Transition: '<S6>:155' */
            localDW->isStable = false;
            localDW->is_SelectionState = TransmissionController_IN_UpShifting;

            /* Entry 'UpShifting': '<S6>:13' */
            *rty_GearState += 0.5;
          } else if (*rtu_VehSpd <= localB->up_th) {
            /* Transition: '<S6>:164' */
            /* Transition: '<S6>:156' */
            localDW->isStable = false;
            localDW->is_SelectionState = TransmissionController_IN_SteadyState;

            /* Entry 'SteadyState': '<S6>:11' */
          }
          break;

         default:
          /* Unreachable state, for coverage only */
          localDW->is_SelectionState = TransmissionController_IN_NO_ACTIVE_CHILD;
          break;
        }
      }
    }

    superStepCount++;
  } while ((!localDW->isStable) && ((uint32_T)superStepCount <= 1000U));

  /* End of Chart: '<S2>/Chart' */
}

/* Model initialize function */
void TransmissionController_initialize(const char_T **rt_errorStatus,
  RT_MODEL_TransmissionController_T *const TransmissionController_M,
  B_TransmissionController_c_T *localB, DW_TransmissionController_f_T *localDW,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)TransmissionController_M, 0,
                sizeof(RT_MODEL_TransmissionController_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(TransmissionController_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_TransmissionController_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_TransmissionController_f_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  {
    TransmissionController_InitializeDataMapInfo(TransmissionController_M,
      localB);
  }

  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (NULL)) && (rt_ChildPath != (NULL))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx,
                        &(TransmissionController_M->DataMapInfo.mmi));
    rtwCAPI_SetPath(TransmissionController_M->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex(TransmissionController_M->DataMapInfo.mmi,
      rt_CSTATEIdx);
  }
}

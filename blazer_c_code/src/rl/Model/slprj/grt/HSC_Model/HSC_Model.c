/*
 * Code generation for system model 'HSC_Model'
 *
 * Model                      : HSC_Model
 * Model version              : 1.101
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 17 18:25:45 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "HSC_Model_capi.h"
#include "HSC_Model.h"
#include "HSC_Model_private.h"
#include "LookUp_real_T_real_T.h"
#include "intrp3d_la_pw.h"
#include "look1_binlcapw.h"
#include "look1_binlcpw.h"
#include "look1_binlxpw.h"
#include "look2_binlcapw.h"
#include "look2_binlxpw.h"
#include "plook_binca.h"
#include "rt_powd_snf.h"
#include "rt_roundd_snf.h"

/* Named constants for Chart: '<S2>/Chart' */
#define HSC_Model_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define HSC_Model_IN_countdown         ((uint8_T)1U)
#define HSC_Model_IN_reset             ((uint8_T)2U)
#define HSC_Model_IN_timer             ((uint8_T)3U)

/* Named constants for Chart: '<S36>/Fault counter1' */
#define HSC_Model_IN_Failure_Occured   ((uint8_T)1U)
#define HSC_Model_IN_NO_ACTIVE_CHILD_g ((uint8_T)0U)
#define HSC_Model_IN_Normal            ((uint8_T)2U)
#define HSC_Model_IN_failFlag_reset    ((uint8_T)1U)
#define HSC_Model_IN_operation         ((uint8_T)2U)

/* Named constants for Chart: '<S1>/ACC Auto Engage Controller' */
#define HSC_Model_IN_CarOn             ((uint8_T)1U)
#define HSC_Model_IN_Check_conditions  ((uint8_T)2U)
#define HSC_Model_IN_CruiseControlAutomation ((uint8_T)3U)
#define HSC_Model_IN_CruiseOn          ((uint8_T)4U)
#define HSC_Model_IN_CruisePressFinal  ((uint8_T)1U)
#define HSC_Model_IN_CruiseSet         ((uint8_T)2U)
#define HSC_Model_IN_NO_ACTIVE_CHILD_g4 ((uint8_T)0U)
#define HSC_Model_IN_Press1            ((uint8_T)1U)
#define HSC_Model_IN_Press2            ((uint8_T)2U)
#define HSC_Model_IN_Press3            ((uint8_T)3U)
#define HSC_Model_IN_Turn_Cruise_Control_Off ((uint8_T)5U)
#define HSC_Model_IN_Wait_for_Drive_or_Reverse ((uint8_T)6U)

/* Named constants for Chart: '<S1>/CAVPCM_ACCMd_Request' */
#define HSC_Model_IN_Enter             ((uint8_T)1U)
#define HSC_Model_IN_StillActive       ((uint8_T)2U)

/* Named constants for Chart: '<S1>/Chart' */
#define HSC_Model_IN_CruiseSet_p       ((uint8_T)1U)
#define HSC_Model_IN_Enter_f           ((uint8_T)2U)
#define HSC_Model_IN_SwitchAgain       ((uint8_T)1U)
#define HSC_Model_IN_SwitchIt          ((uint8_T)2U)

/* Named constants for Chart: '<S1>/Generate SetSpd' */
#define HSC_Model_IN_Set               ((uint8_T)1U)
#define HSC_Model_IN_enter             ((uint8_T)2U)

/* Named constants for Chart: '<S2>/Chart1' */
#define HSC_Model_IN_countdown_k       ((uint8_T)1U)
#define HSC_Model_IN_reset_e           ((uint8_T)2U)
#define HSC_Model_IN_timer_f           ((uint8_T)3U)

/* Named constants for Chart: '<S33>/Chart' */
#define HSC_Model_IN_Default           ((uint8_T)1U)
#define HSC_Model_IN_GFD_Active        ((uint8_T)2U)

/* Named constants for Chart: '<S35>/fault Counter1' */
#define HSC_Model_IN_Normal_Operation  ((uint8_T)1U)
#define HSC_Model_IN_fail_counter      ((uint8_T)2U)
#define HSC_Model_IN_fail_reset        ((uint8_T)1U)
#define HSC_Model_IN_operation_e       ((uint8_T)2U)

/* Named constants for Chart: '<S38>/Fault Counter' */
#define HSC_Model_IN_Failure_Occured_b ((uint8_T)1U)
#define HSC_Model_IN_Normal_l          ((uint8_T)2U)
#define HSC_Model_IN_failFlag_reset_m  ((uint8_T)1U)

/* Named constants for Chart: '<S86>/Chart' */
#define HSC_Model_IN_ForwardTorque     ((uint8_T)1U)
#define HSC_Model_IN_ReverseTorque     ((uint8_T)2U)
#define HSC_Model_IN_TorqueEnter       ((uint8_T)3U)
#define HSC_Model_IN_TorqueNegative    ((uint8_T)4U)
#define HSC_Model_IN_TorquePositive    ((uint8_T)5U)
#define HSC_Model_IN_TorqueZero        ((uint8_T)6U)

/* Named constants for Chart: '<S5>/Energy Management Strategy' */
#define HSC_Model_IN_Cruise_Charge_Available ((uint8_T)1U)
#define HSC_Model_IN_Engine_Only_Active ((uint8_T)2U)
#define HSC_Model_IN_Full_Power_Active ((uint8_T)3U)
#define HSC_Model_IN_Regen_Active      ((uint8_T)4U)

/* Named constants for Chart: '<S74>/APP Hysterisis' */
#define HSC_Model_IN_SwitchOff         ((uint8_T)1U)
#define HSC_Model_IN_SwitchOn          ((uint8_T)2U)

/* Named constants for Chart: '<S10>/VMCP' */
#define HSC_Model_IN_BMS_IGN           ((uint8_T)1U)
#define HSC_Model_IN_Bleeddown         ((uint8_T)1U)
#define HSC_Model_IN_Brusa_Charging    ((uint8_T)2U)
#define HSC_Model_IN_Close_Contactors  ((uint8_T)1U)
#define HSC_Model_IN_Close_Contactors_i ((uint8_T)2U)
#define HSC_Model_IN_Drive_Reverse     ((uint8_T)1U)
#define HSC_Model_IN_Enable_BMS        ((uint8_T)2U)
#define HSC_Model_IN_Enable_BMS_a      ((uint8_T)3U)
#define HSC_Model_IN_Enable_Brusa      ((uint8_T)4U)
#define HSC_Model_IN_HV_IGN            ((uint8_T)3U)
#define HSC_Model_IN_HV_Start_Up       ((uint8_T)3U)
#define HSC_Model_IN_Initialize_MCU    ((uint8_T)4U)
#define HSC_Model_IN_Key_Off           ((uint8_T)4U)
#define HSC_Model_IN_LowSpeedCruiseCharge ((uint8_T)4U)
#define HSC_Model_IN_MCU_Shutdown      ((uint8_T)1U)
#define HSC_Model_IN_ON_State          ((uint8_T)5U)
#define HSC_Model_IN_Open_Contactors   ((uint8_T)2U)
#define HSC_Model_IN_Park_Neutral      ((uint8_T)2U)
#define HSC_Model_IN_Shutdown          ((uint8_T)6U)
#define HSC_Model_IN_Staging           ((uint8_T)5U)
#define HSC_Model_IN_Start_Eng         ((uint8_T)7U)
#define HSC_Model_IN_disable_BMS       ((uint8_T)3U)

P_HSC_Model_T HSC_Model_P = {
  {
    { 0.0, 2.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 38.0, 44.0, 50.0,
      62.0, 74.0, 86.0, 100.0 },

    { 0.0, 2.0, 4.0, 6.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0,
      100.0, 120.0, 140.0, 180.0 },

    { 48.19, 250.0, 400.0, 825.0, 1375.0, 1950.0, 2300.0, 2500.0, 2650.0, 2750.0,
      2850.0, 3000.0, 3200.0, 3300.0, 3450.0, 4400.0, 9017.37, 48.51, 250.0,
      400.0, 815.0, 1375.0, 1950.0, 2300.0, 2500.0, 2700.0, 2750.0, 2850.0,
      3000.0, 3200.0, 3300.0, 3450.0, 4400.0, 8843.49, 48.93, 225.0, 359.47,
      794.11, 1375.0, 1710.0, 2100.0, 2500.0, 2725.0, 3100.0, 3570.0, 3675.0,
      3780.0, 3885.0, 4095.0, 4410.0, 8666.35, 49.45, 200.0, 411.91, 685.0,
      1200.0, 1600.0, 2015.0, 2475.0, 2750.0, 3200.0, 3675.0, 3780.0, 3885.0,
      3990.0, 4200.0, 4410.0, 8216.43, -57.54, 116.03, 289.7, 500.0, 940.0,
      1393.56, 1900.0, 2300.0, 2750.0, 3400.0, 3675.0, 3885.0, 3990.0, 4095.0,
      4305.0, 4620.0, 7077.64, -143.9, 7.6, 159.1, 462.1, 782.3, 1116.2, 1485.7,
      1865.8, 2245.8, 2626.1, 3198.4, 3366.41, 3534.42, 3702.44, 3870.45,
      4038.46, 4206.47, -221.8, -88.5, 103.93, 311.2, 583.3, 889.6, 1206.1,
      1541.2, 1876.2, 2211.3, 2736.9, 3266.4, 3384.59, 3502.77, 3620.96, 3739.14,
      3857.33, -267.7, -152.1, 77.95, 194.7, 425.8, 685.6, 956.2, 1260.3, 1566.5,
      1872.8, 2338.8, 2809.8, 3279.2, 3407.6, 3536.01, 3664.41, 3792.81, -267.8,
      -170.3, 63.74, 122.4, 317.5, 530.5, 774.2, 1032.0, 1299.8, 1567.7, 1985.1,
      2432.4, 2571.22, 2710.04, 2848.86, 2987.68, 3126.5, -293.9, -206.6, 53.12,
      74.37, 229.9, 404.5, 619.0, 840.7, 1082.4, 1324.0, 1687.4, 2091.8, 2232.55,
      2373.29, 2514.04, 2654.79, 2795.53, -293.8, -215.7, 45.53, 63.75, 174.9,
      331.2, 507.0, 704.4, 916.0, 1133.9, 1460.8, 1816.4, 1944.54, 2072.68,
      2200.81, 2328.95, 2457.09, -298.0, -228.0, 39.86, 55.8, 121.6, 261.5,
      401.3, 576.7, 757.2, 953.7, 1248.4, 1556.9, 1674.33, 1791.76, 1909.2,
      2026.63, 2144.06, -287.0, -224.0, -35.58, 7.1, 90.9, 216.8, 342.8, 483.9,
      644.5, 816.5, 1083.5, 1352.3, 1651.9, 1737.82, 1823.75, 1909.67, 1995.59,
      -258.6, -202.6, -146.6, -34.5, 77.6, 189.6, 301.7, 413.7, 555.2, 701.2,
      940.6, 1180.1, 1440.7, 1517.7, 1594.69, 1671.69, 1748.69, -264.1, -205.9,
      -147.7, -31.3, 85.1, 174.8, 264.6, 354.4, 444.1, 556.6, 738.5, 932.6,
      1126.8, 1218.59, 1310.38, 1402.17, 1493.96, -245.8, -195.0, -144.1, -42.3,
      59.5, 161.2, 263.0, 334.8, 406.7, 478.5, 608.6, 757.4, 914.6, 1005.13,
      1095.67, 1186.2, 1276.73, -99.4, -72.2, -45.1, 9.2, 63.4, 117.7, 171.9,
      226.2, 280.5, 334.7, 416.1, 497.5, 561.1, 692.1, 784.4, 876.69, 968.99 }
  },

  { 0.001, 4.68902637577337, 3.30569304244003, 3.01225869900569,
    2.44578313253012, 1.92295287808606, 1.44578313253012, 1.0, 0.747474747474747,
    0.616666666666666 },
  0.36,

  { 3.0, 5.0, 7.0000000000000009, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0,
    25.0, 27.0, 28.999999999999996, 31.0, 33.0, 35.0, 37.0, 60.0, 70.0, 80.0,
    90.0, 100.0 },

  { 0.0, 0.1125, 0.216, 0.343, 0.512, 0.7129, 0.825, 0.925, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 0.0, 0.0 },

  { 0.0, 700.0, 863.157894736842, 1026.31578947368, 1189.47368421053,
    1352.63157894737, 1515.78947368421, 1678.94736842105, 1842.10526315789,
    2005.26315789474, 2168.42105263158, 2331.57894736842, 2494.73684210526,
    2657.89473684211, 2821.05263157895, 2984.21052631579, 3147.36842105263,
    3310.52631578947, 3473.68421052632, 3636.84210526316, 3800.0,
    3963.15789473684, 4126.31578947368, 4289.47368421053, 4452.63157894737,
    4615.78947368421, 4778.94736842105, 4942.1052631579, 5105.26315789474,
    5268.42105263158, 5431.57894736842, 5594.73684210526, 5757.89473684211,
    5921.05263157895, 6084.21052631579, 6247.36842105263, 6410.52631578947,
    6573.68421052632, 6736.84210526316, 6900.0 },

  { 0.0, 360.0, 706.0, 1052.0, 1398.0, 1743.0, 2089.0, 2435.0, 2781.0, 3127.0,
    3473.0, 3819.0, 4165.0, 4510.0, 4856.0, 5202.0, 5548.0, 5894.0, 6240.0,
    6586.0, 6932.0, 7277.0, 7623.0, 7969.0, 8315.0, 8661.0, 9007.0, 9353.0,
    9699.0, 10044.0, 10100.0, 10400.0, 10550.0 },

  { 250.0, 255.0, 255.0, 255.0, 255.0, 255.0, 255.0, 255.0, 255.0, 255.0, 237.0,
    213.0, 190.0, 174.0, 158.0, 146.0, 137.0, 128.0, 121.0, 113.0, 107.0, 102.0,
    97.0, 93.0, 89.0, 85.0, 81.0, 78.0, 75.0, 72.0, 72.0, 30.0, 0.0 },
  5000.0,
  -2.0,
  2.0,
  14.0,
  0.0,
  10.0,
  60.0,
  60.0,
  500.0,
  50.0,
  45.0,
  4.0,
  90.0,
  29.0,
  60.0,
  30.0,
  30.0,
  9.0,
  90.0,
  30.0,
  26.0,
  29.0,
  24.0,
  10.0,
  24.0,
  29.0,
  26.0,
  4,
  2,
  4,
  2,
  1,
  3,
  4,
  15,
  4,
  15,
  2,
  2,
  4,
  15,
  2,
  0,
  1,
  1,
  2U,
  2U,
  10.0,
  3.6,
  0.0,
  1.0,
  15.0,
  100.0,
  20.0,
  -0.2,
  100.0,

  { 0.0, 7800.0, 24079.0, 44373.0, 64324.0, 81523.0, 85995.0, 84275.0, 82211.0,
    79803.0, 79459.0, 78428.0, 77740.0, 77740.0, 76020.0, 76708.0, 60197.0,
    42654.0, 29926.0, 18575.0, 10319.0, 688.0 },

  { 0.0, 290.9, 916.4, 1643.6, 2385.5, 3040.0, 3461.8, 3898.2, 4392.7, 5018.2,
    5861.8, 6574.5, 7941.8, 8640.0, 9309.1, 10050.9, 10181.8, 10283.6, 10341.8,
    10429.1, 10458.2, 10538.2 },

  { 0.0, 4138.0, 7586.0, 14138.0, 20000.0, 26552.0, 32069.0, 35862.0, 39655.0,
    41034.0, 44138.0, 45862.0, 44828.0, 43793.0, 41034.0, 38276.0, 34483.0,
    30690.0, 28276.0, 18966.0, 10000.0, 1379.0 },

  { 0.0, 363.6, 829.1, 1483.6, 2254.5, 2981.8, 3709.1, 4363.6, 4945.5, 5367.3,
    5905.5, 6865.5, 7403.6, 8029.1, 8625.5, 9221.8, 9803.6, 10109.1, 10370.9,
    10429.1, 10472.7, 10538.2 },

  { 0.0, 8943.0, 24079.0, 44373.0, 64324.0, 81523.0, 85995.0, 84275.0, 82211.0,
    79803.0, 79459.0, 78428.0, 77740.0, 77740.0, 76020.0, 76708.0, 60197.0,
    42654.0, 29926.0, 18575.0, 10319.0, 688.0 },

  { 0.0, 290.9, 916.4, 1643.6, 2385.5, 3040.0, 3461.8, 3898.2, 4392.7, 5018.2,
    5861.8, 6574.5, 7941.8, 8640.0, 9309.1, 10050.9, 10181.8, 10283.6, 10341.8,
    10429.1, 10458.2, 10538.2 },

  { 0.0, 4138.0, 7586.0, 14138.0, 20000.0, 26552.0, 32069.0, 35862.0, 39655.0,
    41034.0, 44138.0, 45862.0, 44828.0, 43793.0, 41034.0, 38276.0, 34483.0,
    30690.0, 28276.0, 18966.0, 10000.0, 1379.0 },

  { 0.0, 363.6, 829.1, 1483.6, 2254.5, 2981.8, 3709.1, 4363.6, 4945.5, 5367.3,
    5905.5, 6865.5, 7403.6, 8029.1, 8625.5, 9221.8, 9803.6, 10109.1, 10370.9,
    10429.1, 10472.7, 10538.2 },
  20.0,
  1.0,
  0.621371,

  { 0.0, 0.05, 0.1, 0.15, 0.2, 0.2 },

  { 7.0, 10.0, 15.0, 20.0, 25.0, 30.0 },
  3.8,
  0.0,
  52.0,
  9.5492965855137211,

  { 0.0, 97.3020001043147, 129.949892736855, 158.895471685496, 186.360383965489,
    194.600401509278, 202.840419055088, 211.080436598206, 218.157717299204,
    221.892129580061, 225.626541860889, 229.360954144052, 232.583471686148,
    235.07322314805, 236.902857651225, 238.732492154363, 240.562126657634,
    242.391761160953, 244.221395664365, 246.051030168004, 247.880664671939,
    249.710299176284, 251.539933681774, 253.369569776573, 253.978539075698,
    252.024111442694, 250.069683810864, 248.115254584369, 246.160826951718,
    243.740640108688, 240.675555897376, 237.61047168636, 234.545387475484,
    231.480303264701, 228.415219053979, 224.97999800151, 219.502861172264,
    210.092240107559, 200.681619054498, 191.270998239562 },
  -1.0,

  { 0.0, 0.0005, 0.001, 0.0015, 0.002, 0.0025, 0.003, 0.0035, 0.004,
    0.0045000000000000005, 0.005, 0.0055, 0.006, 0.0065000000000000006, 0.007,
    0.0075, 0.008, 0.0085, 0.0090000000000000011, 0.0095, 0.01, 0.0105, 0.011,
    0.0115, 0.012, 0.0125, 0.013000000000000001, 0.0135, 0.014, 0.0145, 0.015,
    0.0155, 0.016, 0.0165, 0.017, 0.0175, 0.018000000000000002, 0.0185, 0.019,
    0.0195, 0.02, 0.0205, 0.021, 0.021500000000000002, 0.022, 0.0225, 0.023,
    0.0235, 0.024, 0.0245, 0.025, 0.025500000000000002, 0.026000000000000002,
    0.0265, 0.027, 0.0275, 0.028, 0.0285, 0.029, 0.029500000000000002, 0.03,
    0.0305, 0.031, 0.0315, 0.032, 0.0325, 0.033, 0.0335, 0.034, 0.0345, 0.035,
    0.035500000000000004, 0.036000000000000004, 0.0365, 0.037, 0.0375, 0.038,
    0.0385, 0.039, 0.0395, 0.04, 0.0405, 0.041, 0.0415, 0.042, 0.0425,
    0.043000000000000003, 0.043500000000000004, 0.044, 0.0445, 0.045, 0.0455,
    0.046, 0.0465, 0.047, 0.0475, 0.048, 0.0485, 0.049, 0.0495, 0.05, 0.0505,
    0.051000000000000004, 0.051500000000000004, 0.052000000000000005, 0.0525,
    0.053, 0.0535, 0.054, 0.0545, 0.055, 0.0555, 0.056, 0.0565, 0.057, 0.0575,
    0.058, 0.0585, 0.059000000000000004, 0.059500000000000004, 0.06, 0.0605,
    0.061, 0.0615, 0.062, 0.0625, 0.063, 0.0635, 0.064, 0.0645, 0.065, 0.0655,
    0.066, 0.0665, 0.067, 0.0675, 0.068, 0.0685, 0.069, 0.0695, 0.07,
    0.070500000000000007, 0.071000000000000008, 0.071500000000000008,
    0.072000000000000008, 0.0725, 0.073, 0.0735, 0.074, 0.0745, 0.075, 0.0755,
    0.076, 0.0765, 0.077, 0.0775, 0.078, 0.0785, 0.079, 0.0795, 0.08, 0.0805,
    0.081, 0.0815, 0.082, 0.0825, 0.083, 0.0835, 0.084, 0.0845, 0.085, 0.0855,
    0.086000000000000007, 0.086500000000000007, 0.087000000000000008,
    0.087500000000000008, 0.088, 0.0885, 0.089, 0.0895, 0.09, 0.0905, 0.091,
    0.0915, 0.092, 0.0925, 0.093, 0.0935, 0.094, 0.0945, 0.095, 0.0955, 0.096,
    0.0965, 0.097, 0.0975, 0.098, 0.0985, 0.099, 0.0995, 0.1, 0.1005, 0.101,
    0.1015, 0.10200000000000001, 0.10250000000000001, 0.10300000000000001,
    0.10350000000000001, 0.10400000000000001, 0.1045, 0.105, 0.1055, 0.106,
    0.1065, 0.107, 0.1075, 0.108, 0.1085, 0.109, 0.1095, 0.11, 0.1105, 0.111,
    0.1115, 0.112, 0.1125, 0.113, 0.1135, 0.114, 0.1145, 0.115, 0.1155, 0.116,
    0.1165, 0.117, 0.11750000000000001, 0.11800000000000001, 0.11850000000000001,
    0.11900000000000001, 0.11950000000000001, 0.12, 0.1205, 0.121, 0.1215, 0.122,
    0.1225, 0.123, 0.1235, 0.124, 0.1245, 0.125, 0.1255, 0.126, 0.1265, 0.127,
    0.1275, 0.128, 0.1285, 0.129, 0.1295, 0.13, 0.1305, 0.131, 0.1315, 0.132,
    0.1325, 0.133, 0.1335, 0.134, 0.1345, 0.135, 0.1355, 0.136, 0.1365, 0.137,
    0.1375, 0.138, 0.1385, 0.139, 0.1395, 0.14, 0.1405, 0.14100000000000001,
    0.14150000000000001, 0.14200000000000002, 0.14250000000000002,
    0.14300000000000002, 0.14350000000000002, 0.14400000000000002, 0.1445, 0.145,
    0.1455, 0.146, 0.1465, 0.147, 0.1475, 0.148, 0.1485, 0.149, 0.1495, 0.15,
    0.1505, 0.151, 0.1515, 0.152, 0.1525, 0.153, 0.1535, 0.154, 0.1545, 0.155,
    0.1555, 0.156, 0.1565, 0.157, 0.1575, 0.158, 0.1585, 0.159, 0.1595, 0.16,
    0.1605, 0.161, 0.1615, 0.162, 0.1625, 0.163, 0.1635, 0.164, 0.1645, 0.165,
    0.1655, 0.166, 0.1665, 0.167, 0.1675, 0.168, 0.1685, 0.169, 0.1695, 0.17,
    0.1705, 0.171, 0.1715, 0.17200000000000001, 0.17250000000000001,
    0.17300000000000001, 0.17350000000000002, 0.17400000000000002,
    0.17450000000000002, 0.17500000000000002, 0.17550000000000002, 0.176, 0.1765,
    0.177, 0.1775, 0.178, 0.1785, 0.179, 0.1795, 0.18, 0.1805, 0.181, 0.1815,
    0.182, 0.1825, 0.183, 0.1835, 0.184, 0.1845, 0.185, 0.1855, 0.186, 0.1865,
    0.187, 0.1875, 0.188, 0.1885, 0.189, 0.1895, 0.19, 0.1905, 0.191, 0.1915,
    0.192, 0.1925, 0.193, 0.1935, 0.194, 0.1945, 0.195, 0.1955, 0.196, 0.1965,
    0.197, 0.1975, 0.198, 0.1985, 0.199, 0.1995, 0.2, 0.2005, 0.201, 0.2015,
    0.202, 0.2025, 0.203, 0.20350000000000001, 0.20400000000000001,
    0.20450000000000002, 0.20500000000000002, 0.20550000000000002,
    0.20600000000000002, 0.20650000000000002, 0.20700000000000002,
    0.20750000000000002, 0.20800000000000002, 0.2085, 0.209, 0.2095, 0.21,
    0.2105, 0.211, 0.2115, 0.212, 0.2125, 0.213, 0.2135, 0.214, 0.2145, 0.215,
    0.2155, 0.216, 0.2165, 0.217, 0.2175, 0.218, 0.2185, 0.219, 0.2195, 0.22,
    0.2205, 0.221, 0.2215, 0.222, 0.2225, 0.223, 0.2235, 0.224, 0.2245, 0.225,
    0.2255, 0.226, 0.2265, 0.227, 0.2275, 0.228, 0.2285, 0.229, 0.2295, 0.23,
    0.2305, 0.231, 0.2315, 0.232, 0.2325, 0.233, 0.2335, 0.234,
    0.23450000000000001, 0.23500000000000001, 0.23550000000000001,
    0.23600000000000002, 0.23650000000000002, 0.23700000000000002,
    0.23750000000000002, 0.23800000000000002, 0.23850000000000002,
    0.23900000000000002, 0.23950000000000002, 0.24, 0.2405, 0.241, 0.2415, 0.242,
    0.2425, 0.243, 0.2435, 0.244, 0.2445, 0.245, 0.2455, 0.246, 0.2465, 0.247,
    0.2475, 0.248, 0.2485, 0.249, 0.2495, 0.25, 0.2505, 0.251, 0.2515, 0.252,
    0.2525, 0.253, 0.2535, 0.254, 0.2545, 0.255, 0.2555, 0.256, 0.2565, 0.257,
    0.2575, 0.258, 0.2585, 0.259, 0.2595, 0.26, 0.26049999999999995, 0.261,
    0.26149999999999995, 0.262, 0.26249999999999996, 0.263, 0.26349999999999996,
    0.264, 0.26449999999999996, 0.265, 0.26549999999999996, 0.266,
    0.26649999999999996, 0.267, 0.26749999999999996, 0.268, 0.26849999999999996,
    0.269, 0.26949999999999996, 0.27, 0.27049999999999996, 0.271,
    0.27149999999999996, 0.272, 0.27249999999999996, 0.273, 0.27349999999999997,
    0.274, 0.27449999999999997, 0.275, 0.27549999999999997, 0.276,
    0.27649999999999997, 0.277, 0.27749999999999997, 0.278, 0.27849999999999997,
    0.279, 0.27949999999999997, 0.28, 0.28049999999999997, 0.281, 0.2815,
    0.28200000000000003, 0.2825, 0.28300000000000003, 0.2835,
    0.28400000000000003, 0.2845, 0.28500000000000003, 0.2855,
    0.28600000000000003, 0.2865, 0.28700000000000003, 0.2875,
    0.28800000000000003, 0.2885, 0.28900000000000003, 0.2895,
    0.29000000000000004, 0.2905, 0.29100000000000004, 0.2915, 0.292, 0.2925,
    0.293, 0.2935, 0.294, 0.2945, 0.295, 0.2955, 0.296, 0.2965, 0.297, 0.2975,
    0.298, 0.2985, 0.299, 0.2995, 0.3, 0.3005, 0.301, 0.3015, 0.302, 0.3025,
    0.303, 0.3035, 0.304, 0.3045, 0.305, 0.3055, 0.306, 0.3065, 0.307, 0.3075,
    0.308, 0.3085, 0.309, 0.3095, 0.31, 0.3105, 0.311, 0.3115, 0.312, 0.3125,
    0.313, 0.3135, 0.314, 0.3145, 0.315, 0.3155, 0.316, 0.3165, 0.317, 0.3175,
    0.318, 0.3185, 0.319, 0.3195, 0.32, 0.3205, 0.321, 0.3215, 0.322, 0.3225,
    0.323, 0.3235, 0.324, 0.3245, 0.32499999999999996, 0.3255,
    0.32599999999999996, 0.3265, 0.32699999999999996, 0.3275,
    0.32799999999999996, 0.3285, 0.32899999999999996, 0.3295,
    0.32999999999999996, 0.3305, 0.33099999999999996, 0.3315,
    0.33199999999999996, 0.3325, 0.33299999999999996, 0.3335,
    0.33399999999999996, 0.3345, 0.33499999999999996, 0.3355,
    0.33599999999999997, 0.3365, 0.33699999999999997, 0.3375,
    0.33799999999999997, 0.3385, 0.33899999999999997, 0.3395,
    0.33999999999999997, 0.3405, 0.34099999999999997, 0.3415,
    0.34199999999999997, 0.3425, 0.34299999999999997, 0.3435, 0.344,
    0.34450000000000003, 0.345, 0.34550000000000003, 0.346, 0.34650000000000003,
    0.347, 0.34750000000000003, 0.348, 0.34850000000000003, 0.349,
    0.34950000000000003, 0.35, 0.35050000000000003, 0.351, 0.35150000000000003,
    0.352, 0.35250000000000004, 0.353, 0.35350000000000004, 0.354,
    0.35450000000000004, 0.355, 0.35550000000000004, 0.356, 0.3565, 0.357,
    0.3575, 0.358, 0.3585, 0.359, 0.3595, 0.36, 0.3605, 0.361, 0.3615, 0.362,
    0.3625, 0.363, 0.3635, 0.364, 0.3645, 0.365, 0.3655, 0.366, 0.3665, 0.367,
    0.3675, 0.368, 0.3685, 0.369, 0.3695, 0.37, 0.3705, 0.371, 0.3715, 0.372,
    0.3725, 0.373, 0.3735, 0.374, 0.3745, 0.375, 0.3755, 0.376, 0.3765, 0.377,
    0.3775, 0.378, 0.3785, 0.379, 0.3795, 0.38, 0.3805, 0.381, 0.3815, 0.382,
    0.3825, 0.383, 0.3835, 0.384, 0.3845, 0.385, 0.3855, 0.386, 0.3865, 0.387,
    0.3875, 0.388, 0.3885, 0.389, 0.3895, 0.39, 0.3905, 0.391, 0.3915, 0.392,
    0.3925, 0.393, 0.3935, 0.394, 0.3945, 0.395, 0.3955, 0.396,
    0.39649999999999996, 0.397, 0.39749999999999996, 0.398, 0.39849999999999997,
    0.399, 0.39949999999999997, 0.4, 0.40049999999999997, 0.401,
    0.40149999999999997, 0.402, 0.40249999999999997, 0.403, 0.40349999999999997,
    0.404, 0.40449999999999997, 0.405, 0.40549999999999997, 0.406, 0.4065,
    0.40700000000000003, 0.4075, 0.40800000000000003, 0.4085,
    0.40900000000000003, 0.4095, 0.41000000000000003, 0.4105,
    0.41100000000000003, 0.4115, 0.41200000000000003, 0.4125, 0.413, 0.4135,
    0.414, 0.4145, 0.415, 0.4155, 0.416, 0.4165, 0.417, 0.4175, 0.418, 0.4185,
    0.419, 0.4195, 0.42, 0.4205, 0.421, 0.4215, 0.422, 0.4225, 0.423, 0.4235,
    0.424, 0.4245, 0.425, 0.4255, 0.426, 0.4265, 0.427, 0.4275, 0.428, 0.4285,
    0.429, 0.4295, 0.43, 0.4305, 0.431, 0.4315, 0.432, 0.4325, 0.433, 0.4335,
    0.434, 0.4345, 0.435, 0.4355, 0.436, 0.4365, 0.437, 0.4375, 0.438, 0.4385,
    0.439, 0.4395, 0.44, 0.4405, 0.441, 0.4415, 0.442, 0.4425, 0.443, 0.4435,
    0.444, 0.4445, 0.445, 0.4455, 0.446, 0.4465, 0.447, 0.4475, 0.448, 0.4485,
    0.449, 0.4495, 0.45, 0.4505, 0.451, 0.4515, 0.452, 0.4525, 0.453, 0.4535,
    0.454, 0.4545, 0.455, 0.4555, 0.456, 0.4565, 0.457, 0.4575, 0.458, 0.4585,
    0.459, 0.4595, 0.46, 0.4605, 0.461, 0.4615, 0.462, 0.4625, 0.463, 0.4635,
    0.46399999999999997, 0.4645, 0.46499999999999997, 0.4655,
    0.46599999999999997, 0.4665, 0.46699999999999997, 0.4675,
    0.46799999999999997, 0.4685, 0.469, 0.46950000000000003, 0.47, 0.4705, 0.471,
    0.4715, 0.472, 0.4725, 0.473, 0.4735, 0.474, 0.4745, 0.475, 0.4755, 0.476,
    0.4765, 0.477, 0.4775, 0.478, 0.4785, 0.479, 0.4795, 0.48, 0.4805, 0.481,
    0.4815, 0.482, 0.4825, 0.483, 0.4835, 0.484, 0.4845, 0.485, 0.4855, 0.486,
    0.4865, 0.487, 0.4875, 0.488, 0.4885, 0.489, 0.4895, 0.49, 0.4905, 0.491,
    0.4915, 0.492, 0.4925, 0.493, 0.4935, 0.494, 0.4945, 0.495, 0.4955, 0.496,
    0.4965, 0.497, 0.4975, 0.498, 0.4985, 0.499, 0.4995, 0.5 },
  1.0,
  0.5,
  1.0,
  0.277778,

  { 6.0, 9.0 },

  { 0.0, 7.0 },
  0.10471975511965977,
  3435.0,
  1.0,
  30.0,
  1.0,

  { 0.55, 0.6, 0.7, 0.85, 1.0 },

  { 10.0, 15.0, 20.0, 25.0, 30.0 },
  0.0,
  0.0,
  0.621371,

  { 0.0, 1.0 },

  { 10.0, 20.0 },
  -5000.0,
  -15000.0,
  0.0,
  -20000.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.277778,
  0.0005,
  0.0,
  0.0005,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.277778,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1000.0,
  360.0,
  200.0,
  0.0,
  0.0,
  15.0,
  100.0,
  100.0,
  0.621371,
  2.23694,
  0.45,
  4.0,
  5.0,
  20.0,
  2.0,
  0.0,

  { -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0 },

  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0 },
  0.0,
  0.0,

  { 0.0, 0.0, 100.0 },

  { 0.0, 4.0, 100.0 },
  0.0,
  0.0,
  0.27777777777777779,
  250.0,
  1.0,
  0.5,

  { 0.0, 1.0, 1.0, 0.0 },

  { -100.0, -50.0, 50.0, 100.0 },
  0.0,
  0.621371,
  0.0,
  5.0,
  70.0,
  100.0,
  -20000.0,
  0.0,
  20000.0,
  1.0,
  0.277778,
  0.0,
  0.0,
  1.0,
  0.0,

  { -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0 },

  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0 },

  { 10.0, 60.0 },
  0.0,

  { -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0 },

  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0 },

  { -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0 },

  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0 },

  { 10.0, 60.0 },
  0.0,

  { 0.0, 4138.0, 7586.0, 14138.0, 20000.0, 26552.0, 32069.0, 35862.0, 39655.0,
    41034.0, 44138.0, 45862.0, 44828.0, 43793.0, 41034.0, 38276.0, 34483.0,
    30690.0, 28276.0, 18966.0, 10000.0, 1379.0 },

  { 0.0, 363.6, 829.1, 1483.6, 2254.5, 2981.8, 3709.1, 4363.6, 4945.5, 5367.3,
    5905.5, 6865.5, 7403.6, 8029.1, 8625.5, 9221.8, 9803.6, 10109.1, 10370.9,
    10429.1, 10472.7, 10538.2 },
  0.0,
  0.0,

  { 0.0, 4138.0, 7586.0, 14138.0, 20000.0, 26552.0, 32069.0, 35862.0, 39655.0,
    41034.0, 44138.0, 45862.0, 44828.0, 43793.0, 41034.0, 38276.0, 34483.0,
    30690.0, 28276.0, 18966.0, 10000.0, 1379.0 },

  { 0.0, 363.6, 829.1, 1483.6, 2254.5, 2981.8, 3709.1, 4363.6, 4945.5, 5367.3,
    5905.5, 6865.5, 7403.6, 8029.1, 8625.5, 9221.8, 9803.6, 10109.1, 10370.9,
    10429.1, 10472.7, 10538.2 },
  0.0,
  0.0,
  0.0,
  0.0,
  10.0,
  -1.0,
  10.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.277778,
  1050.0,
  1.0,
  0.0,
  0.0,
  0.621371,
  0.621371,
  0.0,
  4.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,

  { 9U, 10U },

  { 16U, 16U },

  { 9U, 10U, 1U },

  { 1U, 10U, 110U },

  { 9U, 10U },

  { 9U, 10U, 1U },

  { 1U, 10U, 110U },
  0,
  0,
  0,
  0U,
  128U,

  /* Start of '<S12>/ACC ext' */
  {
    0.0,
    0.0,
    0.0,
    2220.0,
    0.0,
    1.0,
    118.55,
    9.81,
    2220.0,
    0.0,
    -1.0,
    3.535790981,
    0.379,
    1.2,
    0.5,
    0.0,
    50000.0,
    1.60934,

    { -298.0, -107.877551, 82.24489796, 272.3673469, 462.4897959, 652.6122449,
      842.7346939, 1032.857143, 1222.979592, 1413.102041, 1603.22449,
      1793.346939, 1983.469388, 2173.591837, 2363.714286, 2553.836735,
      2743.959184, 2934.081633, 3124.204082, 3314.326531, 3504.44898,
      3694.571429, 3884.693878, 4074.816327, 4264.938776, 4455.061224,
      4645.183673, 4835.306122, 5025.428571, 5215.55102, 5405.673469,
      5595.795918, 5785.918367, 5976.040816, 6166.163265, 6356.285714,
      6546.408163, 6736.530612, 6926.653061, 7116.77551, 7306.897959,
      7497.020408, 7687.142857, 7877.265306, 8067.387755, 8257.510204,
      8447.632653, 8637.755102, 8827.877551, 9018.0 },

    { 0.0, 2.0, 4.0, 6.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0,
      100.0, 120.0, 140.0, 180.0 },
    0.0,
    1.0,
    0.0,
    0.0,
    0.0,
    3.0,
    100.0,
    2000.0,
    2000.0,
    -1.0,
    0.1,
    0.0005,
    0.0,

    { 0.0, 0.0 },
    0.277778,
    0.0,
    0.0,
    0.0,
    1.0,
    0.0,
    1.0,
    0.0,

    { 49U, 16U }
  }
  /* End of '<S12>/ACC ext' */
};

/* Forward declaration for local functions */
static void HSC_Model_enter_atomic_Key_Off(B_HSC_Model_c_T *localB);
static void HSC_Model_Startup_Shutdown_Sequence(B_HSC_Model_c_T *localB,
  DW_HSC_Model_f_T *localDW);
static void HSC_Model_VMCP(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW);
static void HSC_Model_enter_internal_Parallel_Mode(B_HSC_Model_c_T *localB);

/*
 * System initialize for atomic system:
 *    '<S2>/Chart'
 *    '<S2>/Chart2'
 */
void HSC_Model_Chart_Init(DW_Chart_HSC_Model_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c16_HSC_Model = 0U;
  localDW->is_c16_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD;
}

/*
 * System reset for atomic system:
 *    '<S2>/Chart'
 *    '<S2>/Chart2'
 */
void HSC_Model_Chart_Reset(DW_Chart_HSC_Model_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c16_HSC_Model = 0U;
  localDW->is_c16_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S2>/Chart'
 *    '<S2>/Chart2'
 */
void HSC_Model_Chart(real_T rtu_CurrentDemanded, real_T
                     rtu_ContinuousCurrentLimit, B_Chart_HSC_Model_T *localB,
                     DW_Chart_HSC_Model_T *localDW)
{
  real_T u0;
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<S2>/Chart' */
  /* Gateway: Battery_Management_Control_Process/Chart */
  /* During: Battery_Management_Control_Process/Chart */
  if (localDW->is_active_c16_HSC_Model == 0U) {
    /* Entry: Battery_Management_Control_Process/Chart */
    localDW->is_active_c16_HSC_Model = 1U;

    /* Entry Internal: Battery_Management_Control_Process/Chart */
    /* Transition: '<S25>:4' */
    localDW->is_c16_HSC_Model = HSC_Model_IN_reset;

    /* Entry 'reset': '<S25>:3' */
    localB->timer = 0.0;
  } else {
    switch (localDW->is_c16_HSC_Model) {
     case HSC_Model_IN_countdown:
      /* During 'countdown': '<S25>:11' */
      if (localB->timer == 0.0) {
        /* Transition: '<S25>:12' */
        localDW->is_c16_HSC_Model = HSC_Model_IN_reset;

        /* Entry 'reset': '<S25>:3' */
        localB->timer = 0.0;
      } else if (rtu_CurrentDemanded > rtu_ContinuousCurrentLimit) {
        /* Transition: '<S25>:13' */
        localDW->is_c16_HSC_Model = HSC_Model_IN_timer;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'timer': '<S25>:5' */
        localDW->currtime = (real_T)localDW->temporalCounter_i1 * 0.0005;
        localDW->orig = localB->timer;
      } else {
        u0 = localDW->orig - (real_T)localDW->temporalCounter_i1 * 0.0005;
        if (u0 > 0.0) {
          localB->timer = u0;
        } else {
          localB->timer = 0.0;
        }
      }
      break;

     case HSC_Model_IN_reset:
      /* During 'reset': '<S25>:3' */
      if (rtu_CurrentDemanded > rtu_ContinuousCurrentLimit) {
        /* Transition: '<S25>:6' */
        localDW->is_c16_HSC_Model = HSC_Model_IN_timer;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'timer': '<S25>:5' */
        localDW->currtime = (real_T)localDW->temporalCounter_i1 * 0.0005;
        localDW->orig = localB->timer;
      } else {
        localB->timer = 0.0;
      }
      break;

     default:
      /* During 'timer': '<S25>:5' */
      if (rtu_CurrentDemanded < rtu_ContinuousCurrentLimit) {
        /* Transition: '<S25>:7' */
        localDW->is_c16_HSC_Model = HSC_Model_IN_countdown;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'countdown': '<S25>:11' */
        localDW->orig = localB->timer;
      } else {
        localB->timer = localDW->currtime + localDW->orig;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */
}

/*
 * System initialize for atomic system:
 *    '<S36>/Fault counter1'
 *    '<S40>/Fault counter1'
 */
void HSC_Model_Faultcounter1_Init(B_Faultcounter1_HSC_Model_T *localB,
  DW_Faultcounter1_HSC_Model_T *localDW)
{
  localDW->is_Normal = HSC_Model_IN_NO_ACTIVE_CHILD_g;
  localDW->is_active_c24_HSC_Model = 0U;
  localDW->is_c24_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g;
  localDW->count = 0.0;
  localDW->flag = 0.0;
  localB->fail_flag = 0.0;
}

/*
 * System reset for atomic system:
 *    '<S36>/Fault counter1'
 *    '<S40>/Fault counter1'
 */
void HSC_Model_Faultcounter1_Reset(B_Faultcounter1_HSC_Model_T *localB,
  DW_Faultcounter1_HSC_Model_T *localDW)
{
  localDW->is_Normal = HSC_Model_IN_NO_ACTIVE_CHILD_g;
  localDW->is_active_c24_HSC_Model = 0U;
  localDW->is_c24_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g;
  localDW->count = 0.0;
  localDW->flag = 0.0;
  localB->fail_flag = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S36>/Fault counter1'
 *    '<S40>/Fault counter1'
 */
void HSC_Model_Faultcounter1(real_T rtu_err, uint8_T rtu_key_status,
  B_Faultcounter1_HSC_Model_T *localB, DW_Faultcounter1_HSC_Model_T *localDW)
{
  /* Chart: '<S36>/Fault counter1' */
  /* Gateway: Diagnostics/Powertrain direction fault/Fault counter1 */
  /* During: Diagnostics/Powertrain direction fault/Fault counter1 */
  if (localDW->is_active_c24_HSC_Model == 0U) {
    /* Entry: Diagnostics/Powertrain direction fault/Fault counter1 */
    localDW->is_active_c24_HSC_Model = 1U;

    /* Entry Internal: Diagnostics/Powertrain direction fault/Fault counter1 */
    /* Transition: '<S54>:4' */
    localB->fail_flag = 0.0;
    localDW->is_c24_HSC_Model = HSC_Model_IN_Normal;

    /* Entry Internal 'Normal': '<S54>:3' */
    /* Transition: '<S54>:56' */
    localDW->is_Normal = HSC_Model_IN_operation;
  } else if (localDW->is_c24_HSC_Model == HSC_Model_IN_Failure_Occured) {
    /* During 'Failure_Occured': '<S54>:7' */
    if (localDW->count > 30.0) {
      /* Transition: '<S54>:15' */
      if (localDW->flag > 20.0) {
        /* Transition: '<S54>:17' */
        /* Transition: '<S54>:19' */
        localB->fail_flag = 1.0;
      } else {
        /* Transition: '<S54>:18' */
      }

      /* Exit Internal 'Failure_Occured': '<S54>:7' */
      localDW->is_c24_HSC_Model = HSC_Model_IN_Normal;

      /* Entry Internal 'Normal': '<S54>:3' */
      /* Transition: '<S54>:56' */
      localDW->is_Normal = HSC_Model_IN_operation;
    } else {
      localDW->count++;

      /* During 'operation1': '<S54>:53' */
      if (rtu_err == 1.0) {
        /* Transition: '<S54>:51' */
        /* Transition: '<S54>:55' */
        localDW->flag++;
      }
    }
  } else {
    /* During 'Normal': '<S54>:3' */
    if ((rtu_err == 1.0) && (localB->fail_flag == 0.0)) {
      /* Transition: '<S54>:14' */
      /* Exit Internal 'Normal': '<S54>:3' */
      localDW->is_Normal = HSC_Model_IN_NO_ACTIVE_CHILD_g;
      localDW->is_c24_HSC_Model = HSC_Model_IN_Failure_Occured;

      /* Entry 'Failure_Occured': '<S54>:7' */
      localDW->count = 1.0;
      localDW->flag = 1.0;

      /* Entry Internal 'Failure_Occured': '<S54>:7' */
      /* Transition: '<S54>:52' */
    } else if (localDW->is_Normal == HSC_Model_IN_failFlag_reset) {
      /* During 'failFlag_reset': '<S54>:34' */
      /* Transition: '<S54>:36' */
      localDW->is_Normal = HSC_Model_IN_operation;
    } else {
      /* During 'operation': '<S54>:35' */
      if (rtu_key_status == 0) {
        /* Transition: '<S54>:28' */
        localDW->is_Normal = HSC_Model_IN_failFlag_reset;

        /* Entry 'failFlag_reset': '<S54>:34' */
        localB->fail_flag = 0.0;
      }
    }
  }

  /* End of Chart: '<S36>/Fault counter1' */
}

/* Function for Chart: '<S10>/VMCP' */
static void HSC_Model_enter_atomic_Key_Off(B_HSC_Model_c_T *localB)
{
  /* Entry 'Key_Off': '<S118>:1' */
  localB->vmcp_StartupSt = 0.0;

  /* used to track startup and shutdown process and states */
  localB->Eng_Start = 0.0;
  localB->hsc_bms_enable = 0.0;
  localB->hsc_bms_leakage_ena = 0.0;
  localB->hsc_bms_mainc_close = 0.0;
  localB->hsc_brusa_enable = 0.0;
  localB->hsc_mpdm_R1_bmsIgn = 0.0;
  localB->hsc_mpdm_R2_mcuIgn = 0.0;
  localB->hsc_mpdm_R8_bmsPwr = 0.0;
  localB->hsc_mpdm_HVpump = 0.0;
  localB->VMU_Cmd1_OpReq = 0.0;
  localB->VMU_Cmd2_OpMdCmd = 0.0;
  localB->VMU_Kickout = 0.0;
  localB->VMU_Cmd2_CommandMd = 0.0;
}

/* Function for Chart: '<S10>/VMCP' */
static void HSC_Model_Startup_Shutdown_Sequence(B_HSC_Model_c_T *localB,
  DW_HSC_Model_f_T *localDW)
{
  /* During 'Startup_Shutdown_Sequence': '<S118>:91' */
  switch (localDW->is_Startup_Shutdown_Sequence) {
   case HSC_Model_IN_Bleeddown:
    localB->vmcp_StartupSt = 15.0;

    /* During 'Bleeddown': '<S118>:83' */
    if ((localB->CastToBoolean46 < 5.0) && (localB->CastToBoolean46 > -5.0)) {
      /* Transition: '<S118>:85' */
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Shutdown;
      localDW->is_Shutdown = HSC_Model_IN_Open_Contactors;

      /* Entry 'Open_Contactors': '<S118>:43' */
      localB->vmcp_StartupSt = 9.0;
      localB->hsc_bms_mainc_close = 0.0;

      /* Requests contactors to open */
    }
    break;

   case HSC_Model_IN_Brusa_Charging:
    /* Constant: '<S10>/Brusa Enable' */
    /* During 'Brusa_Charging': '<S118>:54' */
    if (HSC_Model_P.BrusaEnable_Value == 0.0) {
      /* Transition: '<S118>:66' */
      /* Exit Internal 'Brusa_Charging': '<S118>:54' */
      if (localDW->is_Brusa_Charging == HSC_Model_IN_Enable_Brusa) {
        /* Exit 'Enable_Brusa': '<S118>:62' */
        /* enables brusa */
        localDW->is_Brusa_Charging = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      } else {
        localDW->is_Brusa_Charging = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      }

      /* Exit 'Brusa_Charging': '<S118>:54' */
      localB->hsc_brusa_enable = 0.0;
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Bleeddown;

      /* Entry 'Bleeddown': '<S118>:83' */
      localB->vmcp_StartupSt = 15.0;

      /* current bleeddown */
    } else {
      switch (localDW->is_Brusa_Charging) {
       case HSC_Model_IN_BMS_IGN:
        localB->vmcp_StartupSt = 11.0;
        localB->hsc_mpdm_R1_bmsIgn = 1.0;
        localB->hsc_mpdm_R8_bmsPwr = 1.0;

        /* During 'BMS_IGN': '<S118>:55' */
        if (localB->CastToBoolean49 && localB->CastToBoolean45) {
          /* Transition: '<S118>:58' */
          /*  BMS performs wake up tests and confirms HVIL */
          localDW->is_Brusa_Charging = HSC_Model_IN_Enable_BMS_a;

          /* Entry 'Enable_BMS': '<S118>:57' */
          localB->vmcp_StartupSt = 12.0;
          localB->hsc_bms_enable = 1.0;
          localB->hsc_bms_leakage_ena = 1.0;

          /* Asks BMS to enable contactor power */
        }
        break;

       case HSC_Model_IN_Close_Contactors_i:
        localB->vmcp_StartupSt = 13.0;
        localB->hsc_bms_mainc_close = 1.0;

        /* During 'Close_Contactors': '<S118>:59' */
        if (localB->CastToBoolean47 == 1) {
          /* Transition: '<S118>:65' */
          /*  contactors closed */
          localDW->is_Brusa_Charging = HSC_Model_IN_Enable_Brusa;

          /* Entry 'Enable_Brusa': '<S118>:62' */
          localB->vmcp_StartupSt = 14.0;
          localB->hsc_brusa_enable = 1.0;

          /* disables brusa */
        }
        break;

       case HSC_Model_IN_Enable_BMS_a:
        localB->vmcp_StartupSt = 12.0;
        localB->hsc_bms_enable = 1.0;
        localB->hsc_bms_leakage_ena = 1.0;

        /* During 'Enable_BMS': '<S118>:57' */
        if (localB->CastToBoolean43 && localB->CastToBoolean44 &&
            localB->CastToBoolean42 && (localB->CastToBoolean47 != 2)) {
          /* Transition: '<S118>:60' */
          /* BMS detects contactor power */
          localDW->is_Brusa_Charging = HSC_Model_IN_Close_Contactors_i;

          /* Entry 'Close_Contactors': '<S118>:59' */
          localB->vmcp_StartupSt = 13.0;
          localB->hsc_bms_mainc_close = 1.0;

          /* requests contactors closed */
        }
        break;

       default:
        localB->vmcp_StartupSt = 14.0;

        /* During 'Enable_Brusa': '<S118>:62' */
        if (localB->CastToBoolean35 >= 100.0) {
          /* Transition: '<S118>:67' */
          /* Exit 'Enable_Brusa': '<S118>:62' */
          /* enables brusa */
          localDW->is_Brusa_Charging = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

          /* Exit 'Brusa_Charging': '<S118>:54' */
          localB->hsc_brusa_enable = 0.0;
          localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Bleeddown;

          /* Entry 'Bleeddown': '<S118>:83' */
          localB->vmcp_StartupSt = 15.0;

          /* current bleeddown */
        }
        break;
      }
    }

    /* End of Constant: '<S10>/Brusa Enable' */
    break;

   case HSC_Model_IN_HV_Start_Up:
    /* During 'HV_Start_Up': '<S118>:30' */
    if (localB->CastToBoolean30 == 0) {
      /* Transition: '<S118>:204' */
      /* Exit Internal 'HV_Start_Up': '<S118>:30' */
      localDW->is_HV_Start_Up = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Key_Off;
      HSC_Model_enter_atomic_Key_Off(localB);
    } else {
      switch (localDW->is_HV_Start_Up) {
       case HSC_Model_IN_Close_Contactors:
        localB->vmcp_StartupSt = 4.0;
        localB->hsc_bms_mainc_close = 1.0;

        /* During 'Close_Contactors': '<S118>:5' */
        if (localB->CastToBoolean47 == 1) {
          /* Transition: '<S118>:22' */
          /*  contactors closed */
          localDW->is_HV_Start_Up = HSC_Model_IN_Initialize_MCU;

          /* Entry 'Initialize_MCU': '<S118>:31' */
          localB->vmcp_StartupSt = 5.0;
          localB->VMU_Cmd1_OpReq = 1.0;
          localB->VMU_Kickout = 1.0;

          /* requests MCU to initialize */
        }
        break;

       case HSC_Model_IN_Enable_BMS:
        localB->vmcp_StartupSt = 3.0;
        localB->hsc_bms_enable = 1.0;
        localB->hsc_bms_leakage_ena = 1.0;

        /* During 'Enable_BMS': '<S118>:2' */
        if (localB->CastToBoolean43 && localB->CastToBoolean44 &&
            localB->CastToBoolean42 && (localB->CastToBoolean47 != 2)) {
          /* Transition: '<S118>:6' */
          /* BMS detects contactor power */
          localDW->is_HV_Start_Up = HSC_Model_IN_Close_Contactors;

          /* Entry 'Close_Contactors': '<S118>:5' */
          localB->vmcp_StartupSt = 4.0;
          localB->hsc_bms_mainc_close = 1.0;

          /* requests contactors closed */
        }
        break;

       case HSC_Model_IN_HV_IGN:
        localB->vmcp_StartupSt = 2.0;
        localB->hsc_mpdm_R1_bmsIgn = 1.0;
        localB->hsc_mpdm_R2_mcuIgn = 1.0;
        localB->hsc_mpdm_R8_bmsPwr = 1.0;
        localB->hsc_mpdm_HVpump = 1.0;

        /* During 'HV_IGN': '<S118>:28' */
        if (localB->CastToBoolean49 && localB->CastToBoolean45) {
          /* Transition: '<S118>:29' */
          /*  BMS performs wake up tests and confirms HVIL */
          localDW->is_HV_Start_Up = HSC_Model_IN_Enable_BMS;

          /* Entry 'Enable_BMS': '<S118>:2' */
          localB->vmcp_StartupSt = 3.0;
          localB->hsc_bms_enable = 1.0;
          localB->hsc_bms_leakage_ena = 1.0;

          /* Asks BMS to enable contactor power */
        }
        break;

       default:
        localB->vmcp_StartupSt = 5.0;
        localB->VMU_Cmd1_OpReq = 1.0;
        localB->VMU_Kickout = 1.0;

        /* During 'Initialize_MCU': '<S118>:31' */
        if (localB->CastToBoolean36 == 4) {
          /* Transition: '<S118>:48' */
          /*  MCU in Operational State */
          localDW->is_HV_Start_Up = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
          localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_ON_State;

          /* Entry Internal 'ON_State': '<S118>:34' */
          /* Transition: '<S118>:36' */
          localDW->is_ON_State = HSC_Model_IN_Park_Neutral;

          /* Entry 'Park_Neutral': '<S118>:35' */
          localB->vmcp_StartupSt = 6.0;
          localB->VMU_Cmd2_OpMdCmd = 0.0;

          /* MCU in Neutral */
        }
        break;
      }
    }
    break;

   case HSC_Model_IN_Key_Off:
    localB->vmcp_StartupSt = 0.0;
    localB->Eng_Start = 0.0;
    localB->hsc_bms_enable = 0.0;
    localB->hsc_bms_leakage_ena = 0.0;
    localB->hsc_bms_mainc_close = 0.0;
    localB->hsc_mpdm_R1_bmsIgn = 0.0;
    localB->hsc_mpdm_R2_mcuIgn = 0.0;
    localB->hsc_mpdm_R8_bmsPwr = 0.0;
    localB->hsc_mpdm_HVpump = 0.0;
    localB->VMU_Cmd1_OpReq = 0.0;
    localB->VMU_Kickout = 0.0;
    localB->VMU_Cmd2_CommandMd = 0.0;

    /* During 'Key_Off': '<S118>:1' */
    if ((localB->CastToBoolean30 != 0) && ((localB->gear == 13.0) ||
         (localB->gear == 15.0))) {
      /* Transition: '<S118>:4' */
      /* checks transmission in
         neutral or park */
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Start_Eng;

      /* Entry 'Start_Eng': '<S118>:51' */
      localB->vmcp_StartupSt = 1.0;
      localB->Eng_Start = 1.0;

      /* used to disable eng start for hood  */
    } else {
      if ((HSC_Model_P.BrusaEnable_Value == 1.0) && (localB->CastToBoolean35 <
           95.0)) {
        /* Transition: '<S118>:61' */
        localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Brusa_Charging;

        /* Entry Internal 'Brusa_Charging': '<S118>:54' */
        /* Transition: '<S118>:56' */
        localDW->is_Brusa_Charging = HSC_Model_IN_BMS_IGN;

        /* Entry 'BMS_IGN': '<S118>:55' */
        localB->vmcp_StartupSt = 11.0;
        localB->hsc_mpdm_R1_bmsIgn = 1.0;
        localB->hsc_mpdm_R8_bmsPwr = 1.0;

        /* wakes up BMS */
      }
    }
    break;

   case HSC_Model_IN_ON_State:
    /* During 'ON_State': '<S118>:34' */
    if ((localB->CastToBoolean30 != 2) && (localB->CastToBoolean30 != 3)) {
      /* Transition: '<S118>:47' */
      /* Exit Internal 'ON_State': '<S118>:34' */
      localDW->is_ON_State = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

      /* Exit 'ON_State': '<S118>:34' */
      localB->VMU_Cmd2_OpMdCmd = 0.0;
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Shutdown;

      /* Entry Internal 'Shutdown': '<S118>:40' */
      /* Transition: '<S118>:42' */
      localDW->is_Shutdown = HSC_Model_IN_MCU_Shutdown;

      /* Entry 'MCU_Shutdown': '<S118>:41' */
      localB->vmcp_StartupSt = 8.0;
      localB->VMU_Cmd1_OpReq = 2.0;

      /* requests MCU to shutdown */
    } else if (localDW->is_ON_State == HSC_Model_IN_Drive_Reverse) {
      localB->vmcp_StartupSt = 7.0;
      localB->VMU_Cmd2_CommandMd = 1.0;

      /* During 'Drive_Reverse': '<S118>:37' */
      if ((localB->lvrpos == 1) || (localB->lvrpos == 15) || (localB->lvrpos ==
           3)) {
        /* Transition: '<S118>:38' */
        localDW->is_ON_State = HSC_Model_IN_Park_Neutral;

        /* Entry 'Park_Neutral': '<S118>:35' */
        localB->vmcp_StartupSt = 6.0;
        localB->VMU_Cmd2_OpMdCmd = 0.0;

        /* MCU in Neutral */
      }
    } else {
      localB->vmcp_StartupSt = 6.0;

      /* During 'Park_Neutral': '<S118>:35' */
      if (((localB->lvrpos >= 4) && (localB->lvrpos != 15)) || (localB->lvrpos ==
           2)) {
        /* Transition: '<S118>:39' */
        localDW->is_ON_State = HSC_Model_IN_Drive_Reverse;

        /* Entry 'Drive_Reverse': '<S118>:37' */
        localB->vmcp_StartupSt = 7.0;
        localB->VMU_Cmd2_OpMdCmd = 3.0;
        localB->VMU_Cmd2_CommandMd = 1.0;

        /* MCU in EV (Drive)
           VMUCmd2_CmdMd=1 is torque mode */
      }
    }
    break;

   case HSC_Model_IN_Shutdown:
    /* During 'Shutdown': '<S118>:40' */
    if (!localB->CastToBoolean42) {
      /* Transition: '<S118>:49' */
      /* Exit Internal 'Shutdown': '<S118>:40' */
      localDW->is_Shutdown = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Key_Off;
      HSC_Model_enter_atomic_Key_Off(localB);
    } else {
      switch (localDW->is_Shutdown) {
       case HSC_Model_IN_MCU_Shutdown:
        localB->vmcp_StartupSt = 8.0;
        localB->VMU_Cmd1_OpReq = 2.0;

        /* During 'MCU_Shutdown': '<S118>:41' */
        if (localB->CastToBoolean36 == 7) {
          /* Transition: '<S118>:44' */
          /*  MCU Ready to Power Off */
          localDW->is_Shutdown = HSC_Model_IN_Open_Contactors;

          /* Entry 'Open_Contactors': '<S118>:43' */
          localB->vmcp_StartupSt = 9.0;
          localB->hsc_bms_mainc_close = 0.0;

          /* Requests contactors to open */
        }
        break;

       case HSC_Model_IN_Open_Contactors:
        localB->vmcp_StartupSt = 9.0;
        localB->hsc_bms_mainc_close = 0.0;

        /* During 'Open_Contactors': '<S118>:43' */
        if (localB->CastToBoolean47 == 0) {
          /* Transition: '<S118>:46' */
          /* contactors open */
          localDW->is_Shutdown = HSC_Model_IN_disable_BMS;

          /* Entry 'disable_BMS': '<S118>:45' */
          localB->vmcp_StartupSt = 10.0;
          localB->hsc_bms_enable = 0.0;

          /* not in
             manual but required for proper
             shutdown */
        }
        break;

       default:
        localB->vmcp_StartupSt = 10.0;
        localB->hsc_bms_enable = 0.0;

        /* During 'disable_BMS': '<S118>:45' */
        break;
      }
    }
    break;

   default:
    localB->vmcp_StartupSt = 1.0;
    localB->Eng_Start = 1.0;

    /* During 'Start_Eng': '<S118>:51' */
    if (localB->CastToBoolean26) {
      /* Transition: '<S118>:52' */
      localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_HV_Start_Up;

      /* Entry Internal 'HV_Start_Up': '<S118>:30' */
      /* Transition: '<S118>:32' */
      localDW->is_HV_Start_Up = HSC_Model_IN_HV_IGN;

      /* Entry 'HV_IGN': '<S118>:28' */
      localB->vmcp_StartupSt = 2.0;
      localB->hsc_mpdm_R1_bmsIgn = 1.0;
      localB->hsc_mpdm_R2_mcuIgn = 1.0;
      localB->hsc_mpdm_R8_bmsPwr = 1.0;
      localB->hsc_mpdm_HVpump = 1.0;

      /* closes MPDM relays for HV sys IGN */
    } else {
      if (localB->CastToBoolean30 == 0) {
        /* Transition: '<S118>:53' */
        localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Key_Off;
        HSC_Model_enter_atomic_Key_Off(localB);
      }
    }
    break;
  }
}

/* Function for Chart: '<S10>/VMCP' */
static void HSC_Model_VMCP(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;

  /* During 'VMCP': '<S118>:144' */
  HSC_Model_Startup_Shutdown_Sequence(localB, localDW);

  /* During 'Operating_Mode': '<S118>:143' */
  localDW->Regen_Active = ((localB->APP < 4.0) && (!localB->CastToBoolean22) &&
    (!localB->LogicalOperator1_a) && (localB->kphtomph >= 10.0) &&
    (localB->CastToBoolean35 <= 85.0) && localB->CastToBoolean51);
  localDW->Full_Power_Active = (localB->APP >= 75.0);
  localDW->Cruise_Charge_Available = ((!(localDW->Full_Power_Active != 0.0)) &&
    (localB->CastToBoolean35 <= 65.0) && (localB->kphtomph >= 45.0) &&
    (!localB->LogicalOperator1_a) && (localB->APP > 8.0) &&
    localB->CastToBoolean51);
  localDW->Launch_Mode = ((localB->CastToBoolean25 >= 30.0) && (localB->APP >=
    15.0) && (localB->kphtomph <= 2.0) && (localB->gear == 1.0) &&
    (localB->CastToBoolean35 > 35.0));
  localDW->Low_Speed_Cruise_Charge = ((!(localDW->Full_Power_Active != 0.0)) &&
    (localB->CastToBoolean35 <= 55.0) && ((localB->kphtomph <= 35.0) &&
    (localB->kphtomph >= 10.0)) && (!localB->LogicalOperator1_a) && (localB->APP
    > 8.0) && localB->CastToBoolean51);
  guard1 = false;
  guard2 = false;
  switch (localDW->is_Operating_Mode) {
   case HSC_Model_IN_Cruise_Charge_Available:
    /* During 'Cruise_Charge_Available': '<S118>:165' */
    if ((localB->CastToBoolean35 >= 70.0) || (localB->kphtomph <= 35.0) ||
        localB->LogicalOperator1_a || (localDW->Regen_Active != 0.0) ||
        (localB->APP < 4.0) || (!localB->CastToBoolean51)) {
      /* Transition: '<S118>:147' */
      if (localDW->Low_Speed_Cruise_Charge != 0.0) {
        /* Transition: '<S118>:148' */
        localDW->is_Operating_Mode = HSC_Model_IN_LowSpeedCruiseCharge;

        /* Entry 'LowSpeedCruiseCharge': '<S118>:161' */
        localB->vmcp_operating_mode = 29.0;
      } else if (localDW->Launch_Mode != 0.0) {
        /* Transition: '<S118>:154' */
        localDW->is_Operating_Mode = HSC_Model_IN_Staging;

        /* Entry 'Staging': '<S118>:163' */
        localB->vmcp_operating_mode = 30.0;
      } else if (localDW->Full_Power_Active != 0.0) {
        /* Transition: '<S118>:158' */
        guard2 = true;
      } else if (localDW->Cruise_Charge_Available != 0.0) {
        /* Transition: '<S118>:146' */
        localDW->is_Operating_Mode = HSC_Model_IN_Cruise_Charge_Available;

        /* Entry 'Cruise_Charge_Available': '<S118>:165' */
        localB->vmcp_operating_mode = 24.0;
      } else {
        /* Transition: '<S118>:160' */
        localDW->is_Operating_Mode = HSC_Model_IN_Engine_Only_Active;

        /* Entry 'Engine_Only_Active': '<S118>:164' */
        localB->vmcp_operating_mode = 23.0;

        /* Entry Internal 'Engine_Only_Active': '<S118>:164' */
        /* Transition: '<S118>:166' */
        if (localDW->Regen_Active != 0.0) {
          /* Transition: '<S118>:169' */
          /* Transition: '<S118>:167' */
          /* Transition: '<S118>:168' */
          localB->vmcp_operating_mode = 26.0;
        } else {
          /* Transition: '<S118>:170' */
        }
      }
    } else {
      if (localDW->Full_Power_Active != 0.0) {
        /* Transition: '<S118>:172' */
        guard2 = true;
      }
    }
    break;

   case HSC_Model_IN_Engine_Only_Active:
    /* During 'Engine_Only_Active': '<S118>:164' */
    /* Transition: '<S118>:159' */
    if (localDW->Low_Speed_Cruise_Charge != 0.0) {
      /* Transition: '<S118>:148' */
      localDW->is_Operating_Mode = HSC_Model_IN_LowSpeedCruiseCharge;

      /* Entry 'LowSpeedCruiseCharge': '<S118>:161' */
      localB->vmcp_operating_mode = 29.0;
    } else if (localDW->Launch_Mode != 0.0) {
      /* Transition: '<S118>:154' */
      localDW->is_Operating_Mode = HSC_Model_IN_Staging;

      /* Entry 'Staging': '<S118>:163' */
      localB->vmcp_operating_mode = 30.0;
    } else if (localDW->Full_Power_Active != 0.0) {
      /* Transition: '<S118>:158' */
      localDW->is_Operating_Mode = HSC_Model_IN_Full_Power_Active;

      /* Entry 'Full_Power_Active': '<S118>:149' */
      localB->vmcp_operating_mode = 25.0;
    } else if (localDW->Cruise_Charge_Available != 0.0) {
      /* Transition: '<S118>:146' */
      localDW->is_Operating_Mode = HSC_Model_IN_Cruise_Charge_Available;

      /* Entry 'Cruise_Charge_Available': '<S118>:165' */
      localB->vmcp_operating_mode = 24.0;
    } else {
      /* Transition: '<S118>:160' */
      localDW->is_Operating_Mode = HSC_Model_IN_Engine_Only_Active;

      /* Entry 'Engine_Only_Active': '<S118>:164' */
      localB->vmcp_operating_mode = 23.0;

      /* Entry Internal 'Engine_Only_Active': '<S118>:164' */
      /* Transition: '<S118>:166' */
      if (localDW->Regen_Active != 0.0) {
        /* Transition: '<S118>:169' */
        /* Transition: '<S118>:167' */
        /* Transition: '<S118>:168' */
        localB->vmcp_operating_mode = 26.0;
      } else {
        /* Transition: '<S118>:170' */
      }
    }
    break;

   case HSC_Model_IN_Full_Power_Active:
    /* During 'Full_Power_Active': '<S118>:149' */
    /* Transition: '<S118>:152' */
    if (localDW->Low_Speed_Cruise_Charge != 0.0) {
      /* Transition: '<S118>:148' */
      localDW->is_Operating_Mode = HSC_Model_IN_LowSpeedCruiseCharge;

      /* Entry 'LowSpeedCruiseCharge': '<S118>:161' */
      localB->vmcp_operating_mode = 29.0;
    } else if (localDW->Launch_Mode != 0.0) {
      /* Transition: '<S118>:154' */
      localDW->is_Operating_Mode = HSC_Model_IN_Staging;

      /* Entry 'Staging': '<S118>:163' */
      localB->vmcp_operating_mode = 30.0;
    } else if (localDW->Full_Power_Active != 0.0) {
      /* Transition: '<S118>:158' */
      localDW->is_Operating_Mode = HSC_Model_IN_Full_Power_Active;

      /* Entry 'Full_Power_Active': '<S118>:149' */
      localB->vmcp_operating_mode = 25.0;
    } else if (localDW->Cruise_Charge_Available != 0.0) {
      /* Transition: '<S118>:146' */
      localDW->is_Operating_Mode = HSC_Model_IN_Cruise_Charge_Available;

      /* Entry 'Cruise_Charge_Available': '<S118>:165' */
      localB->vmcp_operating_mode = 24.0;
    } else {
      /* Transition: '<S118>:160' */
      localDW->is_Operating_Mode = HSC_Model_IN_Engine_Only_Active;

      /* Entry 'Engine_Only_Active': '<S118>:164' */
      localB->vmcp_operating_mode = 23.0;

      /* Entry Internal 'Engine_Only_Active': '<S118>:164' */
      /* Transition: '<S118>:166' */
      if (localDW->Regen_Active != 0.0) {
        /* Transition: '<S118>:169' */
        /* Transition: '<S118>:167' */
        /* Transition: '<S118>:168' */
        localB->vmcp_operating_mode = 26.0;
      } else {
        /* Transition: '<S118>:170' */
      }
    }
    break;

   case HSC_Model_IN_LowSpeedCruiseCharge:
    /* During 'LowSpeedCruiseCharge': '<S118>:161' */
    if ((localDW->Full_Power_Active != 0.0) || (localB->CastToBoolean35 >= 65.0)
        || (localB->kphtomph <= 5.0) || localB->LogicalOperator1_a ||
        (localDW->Regen_Active != 0.0) || (localB->APP < 4.0) ||
        (!localB->CastToBoolean51)) {
      /* Transition: '<S118>:153' */
      if (localDW->Low_Speed_Cruise_Charge != 0.0) {
        /* Transition: '<S118>:148' */
        localDW->is_Operating_Mode = HSC_Model_IN_LowSpeedCruiseCharge;

        /* Entry 'LowSpeedCruiseCharge': '<S118>:161' */
        localB->vmcp_operating_mode = 29.0;
      } else if (localDW->Launch_Mode != 0.0) {
        /* Transition: '<S118>:154' */
        localDW->is_Operating_Mode = HSC_Model_IN_Staging;

        /* Entry 'Staging': '<S118>:163' */
        localB->vmcp_operating_mode = 30.0;
      } else if (localDW->Full_Power_Active != 0.0) {
        /* Transition: '<S118>:158' */
        localDW->is_Operating_Mode = HSC_Model_IN_Full_Power_Active;

        /* Entry 'Full_Power_Active': '<S118>:149' */
        localB->vmcp_operating_mode = 25.0;
      } else if (localDW->Cruise_Charge_Available != 0.0) {
        /* Transition: '<S118>:146' */
        localDW->is_Operating_Mode = HSC_Model_IN_Cruise_Charge_Available;

        /* Entry 'Cruise_Charge_Available': '<S118>:165' */
        localB->vmcp_operating_mode = 24.0;
      } else {
        /* Transition: '<S118>:160' */
        localDW->is_Operating_Mode = HSC_Model_IN_Engine_Only_Active;

        /* Entry 'Engine_Only_Active': '<S118>:164' */
        localB->vmcp_operating_mode = 23.0;

        /* Entry Internal 'Engine_Only_Active': '<S118>:164' */
        /* Transition: '<S118>:166' */
        if (localDW->Regen_Active != 0.0) {
          /* Transition: '<S118>:169' */
          /* Transition: '<S118>:167' */
          /* Transition: '<S118>:168' */
          localB->vmcp_operating_mode = 26.0;
        } else {
          /* Transition: '<S118>:170' */
        }
      }
    }
    break;

   default:
    /* During 'Staging': '<S118>:163' */
    if ((!(localDW->Launch_Mode != 0.0)) && (localDW->Full_Power_Active != 0.0))
    {
      /* Transition: '<S118>:173' */
      guard1 = true;
    } else {
      if ((!(localDW->Launch_Mode != 0.0)) && (!(localDW->Full_Power_Active !=
            0.0))) {
        /* Transition: '<S118>:157' */
        if (localDW->Low_Speed_Cruise_Charge != 0.0) {
          /* Transition: '<S118>:148' */
          localDW->is_Operating_Mode = HSC_Model_IN_LowSpeedCruiseCharge;

          /* Entry 'LowSpeedCruiseCharge': '<S118>:161' */
          localB->vmcp_operating_mode = 29.0;
        } else if (localDW->Launch_Mode != 0.0) {
          /* Transition: '<S118>:154' */
          localDW->is_Operating_Mode = HSC_Model_IN_Staging;

          /* Entry 'Staging': '<S118>:163' */
          localB->vmcp_operating_mode = 30.0;
        } else if (localDW->Full_Power_Active != 0.0) {
          /* Transition: '<S118>:158' */
          guard1 = true;
        } else if (localDW->Cruise_Charge_Available != 0.0) {
          /* Transition: '<S118>:146' */
          localDW->is_Operating_Mode = HSC_Model_IN_Cruise_Charge_Available;

          /* Entry 'Cruise_Charge_Available': '<S118>:165' */
          localB->vmcp_operating_mode = 24.0;
        } else {
          /* Transition: '<S118>:160' */
          localDW->is_Operating_Mode = HSC_Model_IN_Engine_Only_Active;

          /* Entry 'Engine_Only_Active': '<S118>:164' */
          localB->vmcp_operating_mode = 23.0;

          /* Entry Internal 'Engine_Only_Active': '<S118>:164' */
          /* Transition: '<S118>:166' */
          if (localDW->Regen_Active != 0.0) {
            /* Transition: '<S118>:169' */
            /* Transition: '<S118>:167' */
            /* Transition: '<S118>:168' */
            localB->vmcp_operating_mode = 26.0;
          } else {
            /* Transition: '<S118>:170' */
          }
        }
      }
    }
    break;
  }

  if (guard2) {
    localDW->is_Operating_Mode = HSC_Model_IN_Full_Power_Active;

    /* Entry 'Full_Power_Active': '<S118>:149' */
    localB->vmcp_operating_mode = 25.0;
  }

  if (guard1) {
    localDW->is_Operating_Mode = HSC_Model_IN_Full_Power_Active;

    /* Entry 'Full_Power_Active': '<S118>:149' */
    localB->vmcp_operating_mode = 25.0;
  }
}

/* Function for Chart: '<S5>/Energy Management Strategy' */
static void HSC_Model_enter_internal_Parallel_Mode(B_HSC_Model_c_T *localB)
{
  real_T emcp_p_drv_mod_W;

  /* Entry Internal 'Parallel_Mode': '<S72>:555' */
  /* Transition: '<S72>:602' */
  /* Transition: '<S72>:604' */
  if (localB->total >= localB->Product_d) {
    /* Transition: '<S72>:608' */
    if (localB->total >= localB->Product_d + localB->Memory) {
      /* Transition: '<S72>:609' */
      /* Transition: '<S72>:612' */
      emcp_p_drv_mod_W = localB->Product_d + localB->Memory;

      /*  drv_mod maxed if engine and ESS can't provide enough power and request max engine power */
      /* Transition: '<S72>:614' */
    } else {
      /* Transition: '<S72>:611' */
      emcp_p_drv_mod_W = localB->total;

      /*  if engine and ESS can provide pdrv
         drv_mod = original pdr and reqeust max engine powerr */
    }

    /* Transition: '<S72>:613' */
  } else {
    /* Transition: '<S72>:610' */
    emcp_p_drv_mod_W = localB->total;

    /*  if engine can provide pdrv
       drv_mod = orig pdrv */
  }

  /* Transition: '<S72>:1006' */
  /* Transition: '<S72>:1007' */
  if (localB->emcp_ptot_W >= localB->Product_d) {
    /* Transition: '<S72>:619' */
    /* Transition: '<S72>:621' */
    localB->emcp_p_eng_des_W = localB->Product_d;

    /*  if engine cannot provide ptot
       max engine power */
    /* Transition: '<S72>:626' */
    /* Transition: '<S72>:625' */
  } else {
    /* Transition: '<S72>:620' */
    if (localB->emcp_ptot_W <= 0.0) {
      /* Transition: '<S72>:622' */
      /* Transition: '<S72>:624' */
      localB->emcp_p_eng_des_W = 0.0;

      /*  if ptot is negative
         zero engine power */
      /* Transition: '<S72>:625' */
    } else {
      /* Transition: '<S72>:623' */
      localB->emcp_p_eng_des_W = localB->emcp_ptot_W;

      /*  if ptot is >0 and <eng max pwr
         eng_des = total pwr dmd */
    }
  }

  /* Transition: '<S72>:944' */
  /* Transition: '<S72>:643' */
  emcp_p_drv_mod_W -= localB->emcp_p_eng_des_W;

  /*  Determine mot power by using the difference in pdrv and eng_des pwr
     emcp_p_drv_mod_W - emcp_p_eng_des_W) */
  /* Transition: '<S72>:1041' */
  if (emcp_p_drv_mod_W <= localB->Memory1) {
    /* Transition: '<S72>:644' */
    /* Transition: '<S72>:646' */
    localB->emcp_p_elec_des_W = localB->Memory1;

    /*  saturate to not exceed charge limit */
    /* Transition: '<S72>:651' */
    /* Transition: '<S72>:650' */
  } else {
    /* Transition: '<S72>:645' */
    if (emcp_p_drv_mod_W >= localB->Memory) {
      /* Transition: '<S72>:647' */
      /* Transition: '<S72>:649' */
      localB->emcp_p_elec_des_W = localB->Memory;

      /*  saturate to not exceed discharge limit */
      /* Transition: '<S72>:650' */
    } else {
      /* Transition: '<S72>:648' */
      localB->emcp_p_elec_des_W = emcp_p_drv_mod_W;

      /*  pass through if saturation is not needed */
    }
  }

  /* Transition: '<S72>:652' */
}

/* System initialize for referenced model: 'HSC_Model' */
void HSC_Model_Init(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW)
{
  /* Start for InitialCondition: '<S36>/IC' */
  localDW->IC_FirstOutputTime = true;

  /* Start for InitialCondition: '<S38>/IC' */
  localDW->IC_FirstOutputTime_j = true;

  /* Start for InitialCondition: '<S2>/IC6' */
  localDW->IC6_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC' */
  localDW->IC_FirstOutputTime_b = true;

  /* Start for InitialCondition: '<S2>/IC5' */
  localDW->IC5_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC2' */
  localB->IC2 = HSC_Model_P.IC2_Value;
  localDW->IC2_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC1' */
  localDW->IC1_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC8' */
  localDW->IC8_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC3' */
  localDW->IC3_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC7' */
  localDW->IC7_FirstOutputTime = true;

  /* Start for InitialCondition: '<S2>/IC4' */
  localDW->IC4_FirstOutputTime = true;

  /* Start for InitialCondition: '<S32>/IC' */
  localDW->IC_FirstOutputTime_m = true;

  /* Start for InitialCondition: '<S40>/IC' */
  localDW->IC_FirstOutputTime_d = true;

  /* InitializeConditions for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = HSC_Model_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S19>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE =
    HSC_Model_P.DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for Memory: '<S3>/Memory1' */
  localDW->Memory1_PreviousInput_l = HSC_Model_P.Memory1_InitialCondition_d;

  /* InitializeConditions for Memory: '<S33>/Memory7' */
  localDW->Memory7_PreviousInput = HSC_Model_P.Memory7_InitialCondition;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = HSC_Model_P.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput = HSC_Model_P.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory2' */
  localDW->Memory2_PreviousInput = HSC_Model_P.Memory2_InitialCondition;

  /* InitializeConditions for Delay: '<S86>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = HSC_Model_P.DelayOneStep_InitialCondition;

  /* SystemInitialize for Chart: '<S1>/ACC Auto Engage Controller' */
  localDW->is_CruiseControlAutomation = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_CruiseOn = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Turn_Cruise_Control_Off = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->temporalCounter_i1_j = 0U;
  localDW->is_active_c2_HSC_Model = 0U;
  localDW->is_c2_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Atomic SubSystem: '<S12>/ACC ext' */
  HSC_Model_ACCext_Init(&localDW->ACCext, &HSC_Model_P.ACCext);

  /* End of SystemInitialize for SubSystem: '<S12>/ACC ext' */

  /* SystemInitialize for Chart: '<S1>/CAVPCM_ACCMd_Request' */
  localDW->is_active_c4_HSC_Model = 0U;
  localDW->is_c4_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S1>/Chart' */
  localDW->is_CruiseSet = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->temporalCounter_i1_on = 0U;
  localDW->is_active_c21_HSC_Model = 0U;
  localDW->is_c21_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S1>/Generate SetSpd' */
  localDW->temporalCounter_i1_b = 0U;
  localDW->is_active_c15_HSC_Model = 0U;
  localDW->is_c15_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S2>/Chart' */
  HSC_Model_Chart_Init(&localDW->sf_Chart_g);

  /* SystemInitialize for Chart: '<S2>/Chart1' */
  localDW->temporalCounter_i1_d = 0U;
  localDW->is_active_c17_HSC_Model = 0U;
  localDW->is_c17_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S2>/Chart2' */
  HSC_Model_Chart_Init(&localDW->sf_Chart2);

  /* SystemInitialize for Chart: '<S2>/Chart3' */
  localDW->temporalCounter_i1_o = 0U;
  localDW->is_active_c20_HSC_Model = 0U;
  localDW->is_c20_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S33>/Chart' */
  localDW->is_active_c5_HSC_Model = 0U;
  localDW->is_c5_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S35>/fault Counter1' */
  localDW->is_Normal_Operation_g = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c9_HSC_Model = 0U;
  localDW->is_c9_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->fail_flag_p = 0.0;
  localDW->count_o = 0.0;
  localB->Fault_o = 0.0;

  /* SystemInitialize for Chart: '<S35>/fault Counter2' */
  localDW->is_Normal_Operation_i = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c10_HSC_Model = 0U;
  localDW->is_c10_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->fail_flag_b = 0.0;
  localDW->count_f = 0.0;
  localB->Fault_g = 0.0;

  /* SystemInitialize for Chart: '<S35>/fault Counter3' */
  localDW->is_Normal_Operation = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c11_HSC_Model = 0U;
  localDW->is_c11_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->fail_flag = 0.0;
  localDW->count_g = 0.0;
  localB->Fault = 0.0;

  /* SystemInitialize for Chart: '<S36>/Fault counter1' */
  HSC_Model_Faultcounter1_Init(&localB->sf_Faultcounter1,
    &localDW->sf_Faultcounter1);

  /* SystemInitialize for Chart: '<S38>/Fault Counter' */
  localDW->is_Normal = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c18_HSC_Model = 0U;
  localDW->is_c18_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->count = 0.0;
  localDW->flag = 0.0;
  localB->fail_flag = false;

  /* SystemInitialize for Chart: '<S40>/Fault counter1' */
  HSC_Model_Faultcounter1_Init(&localB->sf_Faultcounter1_f,
    &localDW->sf_Faultcounter1_f);

  /* SystemInitialize for Chart: '<S86>/Chart' */
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c22_HSC_Model = 0U;
  localDW->is_c22_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S5>/Energy Management Strategy' */
  localDW->is_SOC_Maintenance = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c1_HSC_Model = 0U;
  localDW->emcp_psoc_W = 0.0;
  localB->emcp_p_eng_des_W = 0.0;
  localB->emcp_ptot_W = 0.0;
  localB->emcp_p_elec_des_W = 0.0;
  localB->emcp_mode = 0.0;

  /* SystemInitialize for Chart: '<S74>/APP Hysterisis' */
  localDW->is_active_c13_HSC_Model = 0U;
  localDW->is_c13_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemInitialize for Chart: '<S10>/VMCP' */
  localDW->is_Operating_Mode = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Brusa_Charging = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_HV_Start_Up = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_ON_State = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Shutdown = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c3_HSC_Model = 0U;
  localDW->Regen_Active = 0.0;
  localDW->Full_Power_Active = 0.0;
  localDW->Cruise_Charge_Available = 0.0;
  localDW->Launch_Mode = 0.0;
  localDW->Low_Speed_Cruise_Charge = 0.0;
  localB->hsc_bms_enable = 0.0;
  localB->hsc_bms_leakage_ena = 0.0;
  localB->hsc_bms_mainc_close = 0.0;
  localB->hsc_brusa_enable = 0.0;
  localB->Eng_Start = 0.0;
  localB->hsc_mpdm_R1_bmsIgn = 0.0;
  localB->hsc_mpdm_R2_mcuIgn = 0.0;
  localB->VMU_Cmd1_OpReq = 0.0;
  localB->VMU_Cmd2_OpMdCmd = 0.0;
  localB->vmcp_StartupSt = 0.0;
  localB->vmcp_operating_mode = 0.0;
  localB->hsc_mpdm_R8_bmsPwr = 0.0;
  localB->hsc_mpdm_HVpump = 0.0;
  localB->VMU_Kickout = 0.0;
  localB->VMU_Cmd2_CommandMd = 0.0;
}

/* System reset for referenced model: 'HSC_Model' */
void HSC_Model_Reset(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = HSC_Model_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S19>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE =
    HSC_Model_P.DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for Memory: '<S3>/Memory1' */
  localDW->Memory1_PreviousInput_l = HSC_Model_P.Memory1_InitialCondition_d;

  /* InitializeConditions for Memory: '<S33>/Memory7' */
  localDW->Memory7_PreviousInput = HSC_Model_P.Memory7_InitialCondition;

  /* InitializeConditions for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = HSC_Model_P.Memory_InitialCondition;

  /* InitializeConditions for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput = HSC_Model_P.Memory1_InitialCondition;

  /* InitializeConditions for Memory: '<S3>/Memory2' */
  localDW->Memory2_PreviousInput = HSC_Model_P.Memory2_InitialCondition;

  /* InitializeConditions for Delay: '<S86>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = HSC_Model_P.DelayOneStep_InitialCondition;

  /* SystemReset for Chart: '<S1>/ACC Auto Engage Controller' */
  localDW->is_CruiseControlAutomation = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_CruiseOn = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Turn_Cruise_Control_Off = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->temporalCounter_i1_j = 0U;
  localDW->is_active_c2_HSC_Model = 0U;
  localDW->is_c2_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S1>/Generate SetSpd' */
  localDW->temporalCounter_i1_b = 0U;
  localDW->is_active_c15_HSC_Model = 0U;
  localDW->is_c15_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S36>/Fault counter1' */
  HSC_Model_Faultcounter1_Reset(&localB->sf_Faultcounter1,
    &localDW->sf_Faultcounter1);

  /* SystemReset for Chart: '<S38>/Fault Counter' */
  localDW->is_Normal = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c18_HSC_Model = 0U;
  localDW->is_c18_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->count = 0.0;
  localDW->flag = 0.0;
  localB->fail_flag = false;

  /* SystemReset for Chart: '<S35>/fault Counter1' */
  localDW->is_Normal_Operation_g = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c9_HSC_Model = 0U;
  localDW->is_c9_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->fail_flag_p = 0.0;
  localDW->count_o = 0.0;
  localB->Fault_o = 0.0;

  /* SystemReset for Chart: '<S35>/fault Counter3' */
  localDW->is_Normal_Operation = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c11_HSC_Model = 0U;
  localDW->is_c11_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->fail_flag = 0.0;
  localDW->count_g = 0.0;
  localB->Fault = 0.0;

  /* SystemReset for Chart: '<S33>/Chart' */
  localDW->is_active_c5_HSC_Model = 0U;
  localDW->is_c5_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S35>/fault Counter2' */
  localDW->is_Normal_Operation_i = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c10_HSC_Model = 0U;
  localDW->is_c10_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->fail_flag_b = 0.0;
  localDW->count_f = 0.0;
  localB->Fault_g = 0.0;

  /* SystemReset for Chart: '<S1>/CAVPCM_ACCMd_Request' */
  localDW->is_active_c4_HSC_Model = 0U;
  localDW->is_c4_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Atomic SubSystem: '<S12>/ACC ext' */
  HSC_Model_ACCext_Reset(&localDW->ACCext, &HSC_Model_P.ACCext);

  /* End of SystemReset for SubSystem: '<S12>/ACC ext' */

  /* SystemReset for Chart: '<S1>/Chart' */
  localDW->is_CruiseSet = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->temporalCounter_i1_on = 0U;
  localDW->is_active_c21_HSC_Model = 0U;
  localDW->is_c21_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S10>/VMCP' */
  localDW->is_Operating_Mode = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Brusa_Charging = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_HV_Start_Up = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_ON_State = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_Shutdown = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c3_HSC_Model = 0U;
  localDW->Regen_Active = 0.0;
  localDW->Full_Power_Active = 0.0;
  localDW->Cruise_Charge_Available = 0.0;
  localDW->Launch_Mode = 0.0;
  localDW->Low_Speed_Cruise_Charge = 0.0;
  localB->hsc_bms_enable = 0.0;
  localB->hsc_bms_leakage_ena = 0.0;
  localB->hsc_bms_mainc_close = 0.0;
  localB->hsc_brusa_enable = 0.0;
  localB->Eng_Start = 0.0;
  localB->hsc_mpdm_R1_bmsIgn = 0.0;
  localB->hsc_mpdm_R2_mcuIgn = 0.0;
  localB->VMU_Cmd1_OpReq = 0.0;
  localB->VMU_Cmd2_OpMdCmd = 0.0;
  localB->vmcp_StartupSt = 0.0;
  localB->vmcp_operating_mode = 0.0;
  localB->hsc_mpdm_R8_bmsPwr = 0.0;
  localB->hsc_mpdm_HVpump = 0.0;
  localB->VMU_Kickout = 0.0;
  localB->VMU_Cmd2_CommandMd = 0.0;

  /* SystemReset for Chart: '<S5>/Energy Management Strategy' */
  localDW->is_SOC_Maintenance = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
  localDW->is_active_c1_HSC_Model = 0U;
  localDW->emcp_psoc_W = 0.0;
  localB->emcp_p_eng_des_W = 0.0;
  localB->emcp_ptot_W = 0.0;
  localB->emcp_p_elec_des_W = 0.0;
  localB->emcp_mode = 0.0;

  /* SystemReset for Chart: '<S2>/Chart' */
  HSC_Model_Chart_Reset(&localDW->sf_Chart_g);

  /* SystemReset for Chart: '<S2>/Chart2' */
  HSC_Model_Chart_Reset(&localDW->sf_Chart2);

  /* SystemReset for Chart: '<S2>/Chart1' */
  localDW->temporalCounter_i1_d = 0U;
  localDW->is_active_c17_HSC_Model = 0U;
  localDW->is_c17_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S2>/Chart3' */
  localDW->temporalCounter_i1_o = 0U;
  localDW->is_active_c20_HSC_Model = 0U;
  localDW->is_c20_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S86>/Chart' */
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c22_HSC_Model = 0U;
  localDW->is_c22_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;

  /* SystemReset for Chart: '<S40>/Fault counter1' */
  HSC_Model_Faultcounter1_Reset(&localB->sf_Faultcounter1_f,
    &localDW->sf_Faultcounter1_f);

  /* SystemReset for Chart: '<S74>/APP Hysterisis' */
  localDW->is_active_c13_HSC_Model = 0U;
  localDW->is_c13_HSC_Model = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
}

/* Output and update for referenced model: 'HSC_Model' */
void HSC_ModelTID0(RT_MODEL_HSC_Model_T * const HSC_Model_M, const real_T
                   *rtu_In_ABSAtv, const real_T *rtu_In_APP, const real_T
                   *rtu_In_APPv, const real_T *rtu_In_BPP, const real_T
                   *rtu_In_EngRunAtv, const real_T *rtu_In_EngSpd, const real_T *
                   rtu_In_Gear, const real_T *rtu_In_HdSt, const real_T
                   *rtu_In_KeySt, const real_T *rtu_In_gfd, const real_T
                   *rtu_In_McuThermal, const real_T *rtu_In_MotorSpd, const
                   real_T *rtu_In_MotorTrqEst, const real_T *rtu_In_SOC, const
                   real_T *rtu_In_StateMcu, const real_T *rtu_In_StrWhAng, const
                   real_T *rtu_In_StrWhAngV, const real_T *rtu_In_TrnsShftPos,
                   const real_T *rtu_In_VehSpd, const real_T
                   *rtu_In_battTcoolant, const real_T *rtu_In_bcmready, const
                   real_T *rtu_In_cpwrcmd, const real_T *rtu_In_cpwrmon, const
                   real_T *rtu_In_hvilmon, const real_T *rtu_In_ibat, const
                   real_T *rtu_In_maincstat, const real_T *rtu_In_vbat, const
                   real_T *rtu_In_vehmon, const real_T *rtu_In_ICESwitch, const
                   real_T *rtu_In_RegenSwitch, const real_T
                   *rtu_In_CAVsCrsLmtrSwStat, const real_T
                   *rtu_In_CAVsCrsCntrlSwStOnSwAct, const real_T
                   *rtu_In_CAVsCrsCntrlStSetSwAct, const real_T
                   *rtu_In_Long_Switch, const real_T *rtu_In_TCSysAtv, const
                   real_T *rtu_In_MotorRC, const real_T
                   *rtu_In_DrvIntndAxlTrqMax, const real_T
                   *rtu_In_DrvIntndAxlTrqMin, const real_T *rtu_In_TrqReqStat,
                   const real_T *rtu_In_xdotref, const real_T
                   *rtu_In_ACCBrakeTime, const real_T *rtu_In_CAVtrgVel, const
                   real_T *rtu_In_CAVtrgDist, const real_T *rtu_In_grade, const
                   real_T *rtu_In_Tanh_Exponent, const real_T
                   *rtu_In_Tanh_multiplier, const boolean_T
                   *rtu_In_dist_is_valid, const boolean_T
                   *rtu_In_TrafficLightPresent, const real_T
                   *rtu_In_DistanceToIntersection, const real_T
                   *rtu_In_TimeToNextState, const real_T *rtu_In_CurrentState,
                   const real_T *rtu_In_Decel_Division_Value, const real_T
                   *rtu_In_bcm_coolan_temp_C, const real_T
                   *rtu_In_DistanceObjValid, const real_T *rtu_In_TimeGap,
                   HSCOutputs *rty_Out, B_HSC_Model_c_T *localB,
                   DW_HSC_Model_f_T *localDW)
{
  boolean_T sf_internal_predicateOutput;
  int32_T Cruise_Charge;
  int32_T Engine_Only;
  int32_T Full_Power;
  int32_T Regen;
  uint32_T bpIdx;
  uint32_T bpIndices[3];
  real_T fractions[3];
  uint32_T bpIndices_0[3];
  real_T fractions_0[3];
  real_T u0;
  real_T u1;
  real_T u2;
  boolean_T guard1 = false;

  /* DataTypeConversion: '<S6>/Cast To Boolean25' */
  localB->CastToBoolean25 = *rtu_In_BPP;

  /* DataTypeConversion: '<S6>/Cast To Boolean30' */
  u0 = rt_roundd_snf(*rtu_In_KeySt);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  localB->CastToBoolean30 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean30' */

  /* DataTypeConversion: '<S6>/Cast To Boolean26' */
  localB->CastToBoolean26 = (*rtu_In_EngRunAtv != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean39' */
  u0 = rt_roundd_snf(*rtu_In_TrnsShftPos);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  localB->lvrpos = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)
    -u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean39' */

  /* DataTypeConversion: '<S6>/Cast To Boolean9' */
  u0 = rt_roundd_snf(*rtu_In_TrqReqStat);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  localB->TrqReqStat = (int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)(uint8_T)
    -u0 : (int32_T)(int8_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean9' */

  /* Chart: '<S1>/ACC Auto Engage Controller' */
  if (localDW->temporalCounter_i1_j < 63U) {
    localDW->temporalCounter_i1_j++;
  }

  if (localDW->temporalCounter_i2 < 63U) {
    localDW->temporalCounter_i2++;
  }

  /* Gateway: ACC Controller /ACC Auto Engage Controller */
  /* During: ACC Controller /ACC Auto Engage Controller */
  if (localDW->is_active_c2_HSC_Model == 0U) {
    /* Entry: ACC Controller /ACC Auto Engage Controller */
    localDW->is_active_c2_HSC_Model = 1U;

    /* Entry Internal: ACC Controller /ACC Auto Engage Controller */
    /* Transition: '<S11>:113' */
    localDW->is_c2_HSC_Model = HSC_Model_IN_CarOn;

    /* Entry 'CarOn': '<S11>:112' */
    rty_Out->TrackACCSt = 1.0;
  } else {
    switch (localDW->is_c2_HSC_Model) {
     case HSC_Model_IN_CarOn:
      /* During 'CarOn': '<S11>:112' */
      sf_internal_predicateOutput = ((localB->lvrpos != 1) && (localB->lvrpos !=
        3));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S11>:127' */
        localDW->is_c2_HSC_Model = HSC_Model_IN_CruiseOn;

        /* Entry 'CruiseOn': '<S11>:105' */
        /* Entry Internal 'CruiseOn': '<S11>:105' */
        /* Transition: '<S11>:117' */
        localDW->is_CruiseOn = HSC_Model_IN_Press1;
        localDW->temporalCounter_i1_j = 0U;

        /* Entry 'Press1': '<S11>:116' */
        rty_Out->CrsSpdLmtrSwStat = 5.0;
        rty_Out->TrackACCSt = 2.0;
      }
      break;

     case HSC_Model_IN_Check_conditions:
      rty_Out->ACCATC_ACCAct_SF = 0.0;

      /* During 'Check_conditions': '<S11>:96' */
      sf_internal_predicateOutput = ((localB->CastToBoolean25 < 5.0) &&
        (rty_Out->TrackACCSt == 6.0) && (rty_Out->ACCATC_ACCAct_SF == 0.0) &&
        (localB->TrqReqStat != 3) && ((localB->lvrpos == 2) || (localB->lvrpos >=
        4)) && (localB->lvrpos != 15));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S11>:97' */
        localDW->is_c2_HSC_Model = HSC_Model_IN_CruiseControlAutomation;
        localDW->temporalCounter_i2 = 0U;

        /* Entry 'CruiseControlAutomation': '<S11>:5' */
        /* Entry Internal 'CruiseControlAutomation': '<S11>:5' */
        /* Transition: '<S11>:109' */
        localDW->is_CruiseControlAutomation = HSC_Model_IN_CruiseSet;
        localDW->temporalCounter_i1_j = 0U;

        /* Entry 'CruiseSet': '<S11>:58' */
        rty_Out->CrsSpdLmtrSwStat = 3.0;
        rty_Out->ACCATC_ACCAct_SF = 1.0;
        rty_Out->TrackACCSt = 7.0;
      } else {
        sf_internal_predicateOutput = ((localB->lvrpos == 1) || (localB->lvrpos ==
          3));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S11>:120' */
          localDW->is_c2_HSC_Model = HSC_Model_IN_Turn_Cruise_Control_Off;

          /* Entry 'Turn_Cruise_Control_Off': '<S11>:129' */
          /* Entry Internal 'Turn_Cruise_Control_Off': '<S11>:129' */
          /* Transition: '<S11>:130' */
          localDW->is_Turn_Cruise_Control_Off = HSC_Model_IN_Press1;
          localDW->temporalCounter_i1_j = 0U;

          /* Entry 'Press1': '<S11>:131' */
          rty_Out->CrsSpdLmtrSwStat = 5.0;
          rty_Out->TrackACCSt = 9.0;
        }
      }
      break;

     case HSC_Model_IN_CruiseControlAutomation:
      /* During 'CruiseControlAutomation': '<S11>:5' */
      sf_internal_predicateOutput = (((localB->CastToBoolean25 > 5.0) ||
        (localB->TrqReqStat == 3) || (localB->lvrpos == 15) || (localB->lvrpos ==
        3)) && (rty_Out->TrackACCSt == 8.0));
      if (sf_internal_predicateOutput && (localDW->temporalCounter_i2 >= 60U)) {
        /* Transition: '<S11>:64' */
        /* Transition: '<S11>:103' */
        /* Exit Internal 'CruiseControlAutomation': '<S11>:5' */
        localDW->is_CruiseControlAutomation = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
        localDW->is_c2_HSC_Model = HSC_Model_IN_Check_conditions;

        /* Entry 'Check_conditions': '<S11>:96' */
        rty_Out->TrackACCSt = 6.0;
        rty_Out->ACCATC_ACCAct_SF = 0.0;
      } else if (localDW->is_CruiseControlAutomation == 1) {
        rty_Out->CrsSpdLmtrSwStat = 1.0;

        /* During 'CruisePressFinal': '<S11>:13' */
      } else {
        rty_Out->CrsSpdLmtrSwStat = 3.0;
        rty_Out->ACCATC_ACCAct_SF = 1.0;

        /* During 'CruiseSet': '<S11>:58' */
        if (localDW->temporalCounter_i1_j >= 60U) {
          /* Transition: '<S11>:60' */
          localDW->is_CruiseControlAutomation = HSC_Model_IN_CruisePressFinal;

          /* Entry 'CruisePressFinal': '<S11>:13' */
          rty_Out->CrsSpdLmtrSwStat = 1.0;
          rty_Out->TrackACCSt = 8.0;
        }
      }
      break;

     case HSC_Model_IN_CruiseOn:
      /* During 'CruiseOn': '<S11>:105' */
      if (rty_Out->TrackACCSt == 4.0) {
        /* Transition: '<S11>:115' */
        /* Exit Internal 'CruiseOn': '<S11>:105' */
        localDW->is_CruiseOn = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
        localDW->is_c2_HSC_Model = HSC_Model_IN_Wait_for_Drive_or_Reverse;

        /* Entry 'Wait_for_Drive_or_Reverse': '<S11>:3' */
        rty_Out->CrsSpdLmtrSwStat = 1.0;
        rty_Out->ACCATC_ACCAct_SF = 0.0;
        rty_Out->TrackACCSt = 5.0;
      } else {
        switch (localDW->is_CruiseOn) {
         case HSC_Model_IN_Press1:
          rty_Out->CrsSpdLmtrSwStat = 5.0;

          /* During 'Press1': '<S11>:116' */
          if (localDW->temporalCounter_i1_j >= 60U) {
            /* Transition: '<S11>:119' */
            localDW->is_CruiseOn = HSC_Model_IN_Press2;
            localDW->temporalCounter_i1_j = 0U;

            /* Entry 'Press2': '<S11>:118' */
            rty_Out->CrsSpdLmtrSwStat = 1.0;
            rty_Out->TrackACCSt = 3.0;
          }
          break;

         case HSC_Model_IN_Press2:
          rty_Out->CrsSpdLmtrSwStat = 1.0;

          /* During 'Press2': '<S11>:118' */
          if (localDW->temporalCounter_i1_j >= 60U) {
            /* Transition: '<S11>:139' */
            localDW->is_CruiseOn = HSC_Model_IN_Press3;

            /* Entry 'Press3': '<S11>:138' */
            rty_Out->CrsSpdLmtrSwStat = 1.0;
            rty_Out->TrackACCSt = 4.0;
          }
          break;

         default:
          rty_Out->CrsSpdLmtrSwStat = 1.0;

          /* During 'Press3': '<S11>:138' */
          break;
        }
      }
      break;

     case HSC_Model_IN_Turn_Cruise_Control_Off:
      /* During 'Turn_Cruise_Control_Off': '<S11>:129' */
      if (rty_Out->TrackACCSt == 10.0) {
        /* Transition: '<S11>:134' */
        /* Exit Internal 'Turn_Cruise_Control_Off': '<S11>:129' */
        localDW->is_Turn_Cruise_Control_Off = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
        localDW->is_c2_HSC_Model = HSC_Model_IN_CarOn;

        /* Entry 'CarOn': '<S11>:112' */
        rty_Out->TrackACCSt = 1.0;
      } else if (localDW->is_Turn_Cruise_Control_Off == 1) {
        rty_Out->CrsSpdLmtrSwStat = 5.0;

        /* During 'Press1': '<S11>:131' */
        if (localDW->temporalCounter_i1_j >= 60U) {
          /* Transition: '<S11>:133' */
          localDW->is_Turn_Cruise_Control_Off = HSC_Model_IN_Press2;

          /* Entry 'Press2': '<S11>:132' */
          rty_Out->CrsSpdLmtrSwStat = 1.0;
          rty_Out->TrackACCSt = 10.0;
        }
      } else {
        rty_Out->CrsSpdLmtrSwStat = 1.0;

        /* During 'Press2': '<S11>:132' */
      }
      break;

     default:
      rty_Out->CrsSpdLmtrSwStat = 1.0;
      rty_Out->ACCATC_ACCAct_SF = 0.0;

      /* During 'Wait_for_Drive_or_Reverse': '<S11>:3' */
      sf_internal_predicateOutput = ((localB->CastToBoolean30 == 2) &&
        localB->CastToBoolean26 && (localB->lvrpos != 15) && (localB->lvrpos !=
        3));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S11>:6' */
        localDW->is_c2_HSC_Model = HSC_Model_IN_Check_conditions;

        /* Entry 'Check_conditions': '<S11>:96' */
        rty_Out->TrackACCSt = 6.0;
        rty_Out->ACCATC_ACCAct_SF = 0.0;
      } else {
        sf_internal_predicateOutput = ((localB->lvrpos == 1) || (localB->lvrpos ==
          3));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S11>:128' */
          localDW->is_c2_HSC_Model = HSC_Model_IN_Turn_Cruise_Control_Off;

          /* Entry 'Turn_Cruise_Control_Off': '<S11>:129' */
          /* Entry Internal 'Turn_Cruise_Control_Off': '<S11>:129' */
          /* Transition: '<S11>:130' */
          localDW->is_Turn_Cruise_Control_Off = HSC_Model_IN_Press1;
          localDW->temporalCounter_i1_j = 0U;

          /* Entry 'Press1': '<S11>:131' */
          rty_Out->CrsSpdLmtrSwStat = 5.0;
          rty_Out->TrackACCSt = 9.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/ACC Auto Engage Controller' */

  /* DataTypeConversion: '<S6>/Cast To Boolean40' */
  localB->CastToBoolean40 = *rtu_In_VehSpd;

  /* Gain: '<S1>/km//h2m//s1' */
  localB->VehSpdms = HSC_Model_P.kmh2ms1_Gain * localB->CastToBoolean40;

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  localB->EgoSpd = localB->VehSpdms;

  /* DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
  localB->TargetPos = localDW->DiscreteTimeIntegrator_DSTATE;

  /* DiscreteIntegrator: '<S19>/Discrete-Time Integrator1' */
  localB->EgoPos = localDW->DiscreteTimeIntegrator1_DSTATE;

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  if (HSC_Model_P.ActivateMILHILVersion_Value > HSC_Model_P.Switch1_Threshold) {
    /* Sum: '<S19>/Add' incorporates:
     *  Constant: '<S19>/TargetInitialPos'
     */
    localB->Add_p = (localB->TargetPos - localB->EgoPos) +
      HSC_Model_P.TargetInitialPos_Value;
    localB->Switch1 = localB->Add_p;
  } else {
    /* DataTypeConversion: '<S6>/Cast To Boolean14' */
    localB->CAVtrgDist = *rtu_In_CAVtrgDist;
    localB->Switch1 = localB->CAVtrgDist;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* DataTypeConversion: '<S6>/Cast To Boolean10' */
  localB->xdotref = *rtu_In_xdotref;

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  if (HSC_Model_P.ActivateMILHILVersion_Value > HSC_Model_P.Switch_Threshold_g)
  {
    /* Sum: '<S19>/Add1' */
    localB->Add1_i = localB->xdotref - localB->VehSpdms;
    localB->Switch = localB->Add1_i;
  } else {
    /* DataTypeConversion: '<S6>/Cast To Boolean13' */
    localB->CAVtrgVel = *rtu_In_CAVtrgVel;
    localB->Switch = localB->CAVtrgVel;
  }

  /* End of Switch: '<S19>/Switch' */

  /* DataTypeConversion: '<S6>/Cast To Boolean3' */
  u0 = rt_roundd_snf(*rtu_In_CAVsCrsLmtrSwStat);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  localB->CastToBoolean3 = (int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean3' */

  /* Chart: '<S1>/Generate SetSpd' */
  if (localDW->temporalCounter_i1_b < 511U) {
    localDW->temporalCounter_i1_b++;
  }

  /* Gateway: ACC Controller /Generate SetSpd */
  /* During: ACC Controller /Generate SetSpd */
  if (localDW->is_active_c15_HSC_Model == 0U) {
    /* Entry: ACC Controller /Generate SetSpd */
    localDW->is_active_c15_HSC_Model = 1U;

    /* Entry Internal: ACC Controller /Generate SetSpd */
    /* Transition: '<S18>:6' */
    localDW->is_c15_HSC_Model = HSC_Model_IN_enter;

    /* Entry 'enter': '<S18>:5' */
    localB->ACCSetSpd = 0.0;
  } else if (localDW->is_c15_HSC_Model == 1) {
    /* During 'Set': '<S18>:7' */
    sf_internal_predicateOutput = ((localB->CastToBoolean3 == 6) ||
      (localB->CastToBoolean25 > 5.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:15' */
      localDW->is_c15_HSC_Model = HSC_Model_IN_enter;

      /* Entry 'enter': '<S18>:5' */
      localB->ACCSetSpd = 0.0;
    } else {
      sf_internal_predicateOutput = ((localDW->temporalCounter_i1_b >= 500U) &&
        (localB->CastToBoolean3 == 3) && (localB->ACCSetSpd != 0.0));
      guard1 = false;
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:18' */
        /* Transition: '<S18>:22' */
        localB->ACCSetSpd -= 1.60934;
        guard1 = true;
      } else {
        sf_internal_predicateOutput = ((localDW->temporalCounter_i1_b >= 500U) &&
          (localB->CastToBoolean3 == 2));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:17' */
          /* Transition: '<S18>:24' */
          localB->ACCSetSpd += 1.60934;
          guard1 = true;
        }
      }

      if (guard1) {
        localDW->is_c15_HSC_Model = HSC_Model_IN_Set;
        localDW->temporalCounter_i1_b = 0U;

        /* Entry 'Set': '<S18>:7' */
      }
    }
  } else {
    /* During 'enter': '<S18>:5' */
    if (localB->CastToBoolean3 == 3) {
      /* Transition: '<S18>:9' */
      localB->ACCSetSpd = localB->CastToBoolean40;
      localDW->is_c15_HSC_Model = HSC_Model_IN_Set;
      localDW->temporalCounter_i1_b = 0U;

      /* Entry 'Set': '<S18>:7' */
    } else {
      localB->ACCSetSpd = 0.0;
    }
  }

  /* End of Chart: '<S1>/Generate SetSpd' */

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  if (HSC_Model_P.ActivateMILHILVersion_Value > HSC_Model_P.Switch2_Threshold) {
    /* Gain: '<S1>/Gain' incorporates:
     *  Constant: '<S1>/SetSpdMPH'
     */
    localB->Gain_b = HSC_Model_P.Gain_Gain * HSC_Model_P.SetSpdMPH_Value;
    localB->Switch2 = localB->Gain_b;
  } else {
    localB->Switch2 = localB->ACCSetSpd;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* DataTypeConversion: '<S6>/Cast To Boolean22' */
  localB->CastToBoolean22 = (*rtu_In_ABSAtv != 0.0);

  /* Gain: '<S3>/kph to mps' */
  localB->VehSpd_ms = HSC_Model_P.kphtomps_Gain_p * localB->CastToBoolean40;

  /* RelationalOperator: '<S56>/Compare' incorporates:
   *  Constant: '<S56>/Constant'
   */
  localB->Compare = (localB->VehSpd_ms < HSC_Model_P.ReverseMotionCheck_const);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   */
  localB->Compare_l = (localB->lvrpos >= HSC_Model_P.CheckForDrive_const);

  /* Logic: '<S36>/Logical Operator6' */
  localB->LogicalOperator6 = (localB->Compare && localB->Compare_l);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   */
  localB->Compare_f = (localB->lvrpos == HSC_Model_P.CheckForReverse_const_b);

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   */
  localB->Compare_i = (localB->VehSpd_ms > HSC_Model_P.ForwardMotionCheck_const);

  /* Logic: '<S36>/Logical Operator7' */
  localB->LogicalOperator7 = (localB->Compare_f && localB->Compare_i);

  /* Logic: '<S36>/Logical Operator8' */
  localB->LogicalOperator8 = (localB->LogicalOperator6 ||
    localB->LogicalOperator7);

  /* DataTypeConversion: '<S36>/Data Type Conversion' */
  localB->DataTypeConversion = localB->LogicalOperator8;

  /* Chart: '<S36>/Fault counter1' */
  HSC_Model_Faultcounter1(localB->DataTypeConversion, localB->CastToBoolean30,
    &localB->sf_Faultcounter1, &localDW->sf_Faultcounter1);

  /* InitialCondition: '<S36>/IC' */
  if (localDW->IC_FirstOutputTime) {
    localDW->IC_FirstOutputTime = false;
    localB->IC = HSC_Model_P.IC_Value;
  } else {
    localB->IC = localB->sf_Faultcounter1.fail_flag;
  }

  /* End of InitialCondition: '<S36>/IC' */

  /* Gain: '<S36>/Gain' */
  localB->Gain = HSC_Model_P.Gain_Gain_o * localB->IC;

  /* DataTypeConversion: '<S3>/Cast To Boolean' */
  localB->powerdirectionfault = (localB->Gain != 0.0);

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   */
  localB->Compare_k = (localB->lvrpos >= HSC_Model_P.CheckForDrive1_const);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  localB->Compare_a = (0.0 == HSC_Model_P.CheckForReverse_const);

  /* Logic: '<S38>/Logical Operator1' */
  localB->LogicalOperator1 = (localB->Compare_k && localB->Compare_a);

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   */
  localB->Compare_h = (localB->lvrpos == HSC_Model_P.CheckForReverse2_const);

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   */
  localB->Compare_fb = (0.0 > HSC_Model_P.FirstGearOrGreater_const);

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   */
  localB->Compare_lt = (0.0 < HSC_Model_P.NinethGearOrless_const);

  /* Logic: '<S38>/Logical Operator' */
  localB->RecieveDrive = (localB->Compare_fb && localB->Compare_lt);

  /* Logic: '<S38>/Logical Operator2' */
  localB->LogicalOperator2 = (localB->Compare_h && localB->RecieveDrive);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  localB->Compare_j = (localB->lvrpos == HSC_Model_P.CheckForPark1_const);

  /* Logic: '<S38>/Logical Operator4' */
  localB->LogicalOperator4 = (localB->RecieveDrive || localB->Compare_a);

  /* Logic: '<S38>/Logical Operator3' */
  localB->LogicalOperator3 = (localB->Compare_j && localB->LogicalOperator4);

  /* RelationalOperator: '<S58>/Compare' incorporates:
   *  Constant: '<S58>/Constant'
   */
  localB->Compare_n = (localB->lvrpos == HSC_Model_P.CheckForNeutral_const);

  /* Logic: '<S38>/Logical Operator6' */
  localB->LogicalOperator6_k = (localB->RecieveDrive || localB->Compare_a);

  /* Logic: '<S38>/Logical Operator5' */
  localB->LogicalOperator5 = (localB->Compare_n && localB->LogicalOperator6_k);

  /* Logic: '<S38>/Logical Operator7' */
  localB->LogicalOperator7_c = (localB->LogicalOperator1 ||
    localB->LogicalOperator2 || localB->LogicalOperator3 ||
    localB->LogicalOperator5);

  /* DataTypeConversion: '<S38>/Data Type Conversion1' */
  localB->DataTypeConversion1 = localB->LogicalOperator7_c;

  /* Chart: '<S38>/Fault Counter' */
  /* Gateway: Diagnostics/Shift Validity/Fault Counter */
  /* During: Diagnostics/Shift Validity/Fault Counter */
  if (localDW->is_active_c18_HSC_Model == 0U) {
    /* Entry: Diagnostics/Shift Validity/Fault Counter */
    localDW->is_active_c18_HSC_Model = 1U;

    /* Entry Internal: Diagnostics/Shift Validity/Fault Counter */
    /* Transition: '<S62>:6' */
    localB->fail_flag = false;
    localDW->is_c18_HSC_Model = HSC_Model_IN_Normal_l;

    /* Entry Internal 'Normal': '<S62>:1' */
    /* Transition: '<S62>:7' */
    localDW->is_Normal = HSC_Model_IN_operation_e;
  } else if (localDW->is_c18_HSC_Model == 1) {
    /* During 'Failure_Occured': '<S62>:2' */
    if (localDW->count > 30.0) {
      /* Transition: '<S62>:22' */
      if (localDW->flag > 20.0) {
        /* Transition: '<S62>:23' */
        /* Transition: '<S62>:24' */
        localB->fail_flag = true;
      } else {
        /* Transition: '<S62>:25' */
      }

      /* Exit Internal 'Failure_Occured': '<S62>:2' */
      localDW->is_c18_HSC_Model = HSC_Model_IN_Normal_l;

      /* Entry Internal 'Normal': '<S62>:1' */
      /* Transition: '<S62>:7' */
      localDW->is_Normal = HSC_Model_IN_operation_e;
    } else {
      localDW->count++;

      /* During 'operation': '<S62>:15' */
      if (localB->DataTypeConversion1 == 1.0) {
        /* Transition: '<S62>:18' */
        /* Transition: '<S62>:19' */
        localDW->flag++;
      }
    }
  } else {
    /* During 'Normal': '<S62>:1' */
    if ((localB->DataTypeConversion1 == 1.0) && (!localB->fail_flag)) {
      /* Transition: '<S62>:10' */
      /* Exit Internal 'Normal': '<S62>:1' */
      localDW->is_Normal = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_c18_HSC_Model = HSC_Model_IN_Failure_Occured_b;

      /* Entry 'Failure_Occured': '<S62>:2' */
      localDW->count = 1.0;
      localDW->flag = 1.0;

      /* Entry Internal 'Failure_Occured': '<S62>:2' */
      /* Transition: '<S62>:16' */
    } else if (localDW->is_Normal == 1) {
      /* During 'failFlag_reset': '<S62>:5' */
      /* Transition: '<S62>:9' */
      localDW->is_Normal = HSC_Model_IN_operation_e;
    } else {
      /* During 'operation': '<S62>:4' */
      if (localB->CastToBoolean30 == 0) {
        /* Transition: '<S62>:8' */
        localDW->is_Normal = HSC_Model_IN_failFlag_reset_m;

        /* Entry 'failFlag_reset': '<S62>:5' */
        localB->fail_flag = false;
      }
    }
  }

  /* End of Chart: '<S38>/Fault Counter' */

  /* InitialCondition: '<S38>/IC' */
  if (localDW->IC_FirstOutputTime_j) {
    localDW->IC_FirstOutputTime_j = false;
    localB->IC_e = HSC_Model_P.IC_Value_m;
  } else {
    localB->IC_e = localB->fail_flag;
  }

  /* End of InitialCondition: '<S38>/IC' */

  /* Memory: '<S3>/Memory1' */
  localB->Memory1_m = localDW->Memory1_PreviousInput_l;

  /* Logic: '<S39>/Logical Operator1' incorporates:
   *  Constant: '<S3>/Constant'
   */
  localB->LogicalOperator1_i = (localB->powerdirectionfault || localB->IC_e ||
    (HSC_Model_P.Constant_Value_ok != 0.0) || (localB->Memory1_m != 0));

  /* DataTypeConversion: '<S6>/Cast To Boolean32' */
  localB->CastToBoolean32 = *rtu_In_McuThermal;

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  localB->Compare_b = (localB->CastToBoolean32 >
                       HSC_Model_P.CompareToConstant6_const);

  /* DataTypeConversion: '<S35>/Data Type Conversion7' */
  localB->DataTypeConversion7 = localB->Compare_b;

  /* Chart: '<S35>/fault Counter1' */
  /* Gateway: Diagnostics/Overheat/fault Counter1 */
  /* During: Diagnostics/Overheat/fault Counter1 */
  if (localDW->is_active_c9_HSC_Model == 0U) {
    /* Entry: Diagnostics/Overheat/fault Counter1 */
    localDW->is_active_c9_HSC_Model = 1U;

    /* Entry Internal: Diagnostics/Overheat/fault Counter1 */
    /* Transition: '<S49>:3' */
    localB->Fault_o = 0.0;
    localDW->is_c9_HSC_Model = HSC_Model_IN_Normal_Operation;

    /* Entry Internal 'Normal_Operation': '<S49>:1' */
    /* Transition: '<S49>:31' */
    localDW->is_Normal_Operation_g = HSC_Model_IN_operation_e;
  } else if (localDW->is_c9_HSC_Model == 1) {
    /* During 'Normal_Operation': '<S49>:1' */
    if ((localB->DataTypeConversion7 == 1.0) && (localB->Fault_o == 0.0)) {
      /* Transition: '<S49>:9' */
      /* Exit Internal 'Normal_Operation': '<S49>:1' */
      localDW->is_Normal_Operation_g = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_c9_HSC_Model = HSC_Model_IN_fail_counter;

      /* Entry 'fail_counter': '<S49>:2' */
      localDW->fail_flag_p = 1.0;
      localDW->count_o = 1.0;

      /* Entry Internal 'fail_counter': '<S49>:2' */
      /* Transition: '<S49>:32' */
    } else if (localDW->is_Normal_Operation_g == 1) {
      /* During 'fail_reset': '<S49>:6' */
      /* Transition: '<S49>:8' */
      localDW->is_Normal_Operation_g = HSC_Model_IN_operation_e;
    } else {
      /* During 'operation': '<S49>:5' */
      if (localB->CastToBoolean30 == 0) {
        /* Transition: '<S49>:7' */
        localDW->is_Normal_Operation_g = HSC_Model_IN_fail_reset;

        /* Entry 'fail_reset': '<S49>:6' */
        localB->Fault_o = 0.0;
      }
    }
  } else {
    /* During 'fail_counter': '<S49>:2' */
    if (localDW->count_o >= 24000.0) {
      /* Transition: '<S49>:16' */
      if (localDW->fail_flag_p >= 20000.0) {
        /* Transition: '<S49>:17' */
        /* Transition: '<S49>:18' */
        localB->Fault_o = 1.0;
      } else {
        /* Transition: '<S49>:19' */
      }

      /* Exit Internal 'fail_counter': '<S49>:2' */
      localDW->is_c9_HSC_Model = HSC_Model_IN_Normal_Operation;

      /* Entry Internal 'Normal_Operation': '<S49>:1' */
      /* Transition: '<S49>:31' */
      localDW->is_Normal_Operation_g = HSC_Model_IN_operation_e;
    } else {
      localDW->count_o++;

      /* During 'err_counter': '<S49>:10' */
      if (localB->DataTypeConversion7 == 1.0) {
        /* Transition: '<S49>:14' */
        /* Transition: '<S49>:15' */
        localDW->fail_flag_p++;
      }
    }
  }

  /* End of Chart: '<S35>/fault Counter1' */

  /* Logic: '<S34>/Logical Operator1' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S3>/Constant'
   */
  localB->LogicalOperator1_c = ((HSC_Model_P.Constant_Value_dx != 0.0) ||
    (localB->Fault_o != 0.0) || (HSC_Model_P.Constant_Value_ok != 0.0));

  /* DataTypeConversion: '<S6>/Cast To Boolean41' */
  localB->CastToBoolean41 = *rtu_In_battTcoolant;

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   */
  localB->Compare_e = (localB->CastToBoolean41 >=
                       HSC_Model_P.CompareToConstant2_const);

  /* DataTypeConversion: '<S35>/Data Type Conversion2' */
  localB->DataTypeConversion2 = localB->Compare_e;

  /* Chart: '<S35>/fault Counter3' */
  /* Gateway: Diagnostics/Overheat/fault Counter3 */
  /* During: Diagnostics/Overheat/fault Counter3 */
  if (localDW->is_active_c11_HSC_Model == 0U) {
    /* Entry: Diagnostics/Overheat/fault Counter3 */
    localDW->is_active_c11_HSC_Model = 1U;

    /* Entry Internal: Diagnostics/Overheat/fault Counter3 */
    /* Transition: '<S51>:3' */
    localB->Fault = 0.0;
    localDW->is_c11_HSC_Model = HSC_Model_IN_Normal_Operation;

    /* Entry Internal 'Normal_Operation': '<S51>:1' */
    /* Transition: '<S51>:31' */
    localDW->is_Normal_Operation = HSC_Model_IN_operation_e;
  } else if (localDW->is_c11_HSC_Model == 1) {
    /* During 'Normal_Operation': '<S51>:1' */
    if ((localB->DataTypeConversion2 == 1.0) && (localB->Fault == 0.0)) {
      /* Transition: '<S51>:9' */
      /* Exit Internal 'Normal_Operation': '<S51>:1' */
      localDW->is_Normal_Operation = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_c11_HSC_Model = HSC_Model_IN_fail_counter;

      /* Entry 'fail_counter': '<S51>:2' */
      localDW->fail_flag = 1.0;
      localDW->count_g = 1.0;

      /* Entry Internal 'fail_counter': '<S51>:2' */
      /* Transition: '<S51>:32' */
    } else if (localDW->is_Normal_Operation == 1) {
      /* During 'fail_reset': '<S51>:6' */
      /* Transition: '<S51>:8' */
      localDW->is_Normal_Operation = HSC_Model_IN_operation_e;
    } else {
      /* During 'operation': '<S51>:5' */
      if (localB->CastToBoolean30 == 0) {
        /* Transition: '<S51>:7' */
        localDW->is_Normal_Operation = HSC_Model_IN_fail_reset;

        /* Entry 'fail_reset': '<S51>:6' */
        localB->Fault = 0.0;
      }
    }
  } else {
    /* During 'fail_counter': '<S51>:2' */
    if (localDW->count_g >= 30.0) {
      /* Transition: '<S51>:16' */
      if (localDW->fail_flag >= 20.0) {
        /* Transition: '<S51>:17' */
        /* Transition: '<S51>:18' */
        localB->Fault = 1.0;
      } else {
        /* Transition: '<S51>:19' */
      }

      /* Exit Internal 'fail_counter': '<S51>:2' */
      localDW->is_c11_HSC_Model = HSC_Model_IN_Normal_Operation;

      /* Entry Internal 'Normal_Operation': '<S51>:1' */
      /* Transition: '<S51>:31' */
      localDW->is_Normal_Operation = HSC_Model_IN_operation_e;
    } else {
      localDW->count_g++;

      /* During 'err_counter': '<S51>:10' */
      if (localB->DataTypeConversion2 == 1.0) {
        /* Transition: '<S51>:14' */
        /* Transition: '<S51>:15' */
        localDW->fail_flag++;
      }
    }
  }

  /* End of Chart: '<S35>/fault Counter3' */

  /* Memory: '<S33>/Memory7' */
  localB->Memory7 = localDW->Memory7_PreviousInput;

  /* DataTypeConversion: '<S6>/Cast To Boolean31' */
  localB->CastToBoolean31 = *rtu_In_gfd;

  /* Gain: '<S33>/kohms to ohms' */
  localB->kohmstoohms = HSC_Model_P.kohmstoohms_Gain * localB->CastToBoolean31;

  /* DataTypeConversion: '<S6>/Cast To Boolean48' */
  localB->CastToBoolean48 = *rtu_In_vbat;

  /* Saturate: '<S33>/closed contactor battery range' */
  u0 = localB->CastToBoolean48;
  u1 = HSC_Model_P.closedcontactorbatteryrange_LowerSat;
  u2 = HSC_Model_P.closedcontactorbatteryrange_UpperSat;
  if (u0 > u2) {
    localB->closedcontactorbatteryrange = u2;
  } else if (u0 < u1) {
    localB->closedcontactorbatteryrange = u1;
  } else {
    localB->closedcontactorbatteryrange = u0;
  }

  /* End of Saturate: '<S33>/closed contactor battery range' */

  /* Product: '<S33>/Divide' */
  localB->Divide = localB->kohmstoohms / localB->closedcontactorbatteryrange;

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   */
  localB->Compare_m = (localB->Divide <=
                       HSC_Model_P.CompetitionRequirement500ohmspervolt_const);

  /* Logic: '<S33>/Logical Operator11' */
  localB->gfd = ((localB->Memory7 != 0.0) && localB->Compare_m);

  /* DataTypeConversion: '<S33>/Data Type Conversion2' */
  localB->FirstTimeFlag = localB->gfd;

  /* Chart: '<S33>/Chart' */
  /* Gateway: Diagnostics/Ground Fault Detection/Chart */
  /* During: Diagnostics/Ground Fault Detection/Chart */
  if (localDW->is_active_c5_HSC_Model == 0U) {
    /* Entry: Diagnostics/Ground Fault Detection/Chart */
    localDW->is_active_c5_HSC_Model = 1U;

    /* Entry Internal: Diagnostics/Ground Fault Detection/Chart */
    /* Transition: '<S43>:8' */
    localDW->is_c5_HSC_Model = HSC_Model_IN_Default;

    /* Entry 'Default': '<S43>:6' */
    localB->GFDLightOn = 0.0;
  } else if (localDW->is_c5_HSC_Model == 1) {
    localB->GFDLightOn = 0.0;

    /* During 'Default': '<S43>:6' */
    if (localB->FirstTimeFlag) {
      /* Transition: '<S43>:9' */
      localDW->is_c5_HSC_Model = HSC_Model_IN_GFD_Active;

      /* Entry 'GFD_Active': '<S43>:7' */
      localB->GFDLightOn = 1.0;
    }
  } else {
    localB->GFDLightOn = 1.0;

    /* During 'GFD_Active': '<S43>:7' */
    if (localB->CastToBoolean30 == 0) {
      /* Transition: '<S43>:10' */
      localDW->is_c5_HSC_Model = HSC_Model_IN_Default;

      /* Entry 'Default': '<S43>:6' */
      localB->GFDLightOn = 0.0;
    }
  }

  /* End of Chart: '<S33>/Chart' */

  /* DataTypeConversion: '<S33>/Data Type Conversion3' */
  localB->DataTypeConversion3_k = (localB->GFDLightOn != 0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  localB->Compare_c = (localB->CastToBoolean41 >
                       HSC_Model_P.CompareToConstant1_const);

  /* DataTypeConversion: '<S35>/Data Type Conversion1' */
  localB->DataTypeConversion1_k = localB->Compare_c;

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  localB->Compare_jl = (localB->CastToBoolean41 <=
                        HSC_Model_P.CompareToConstant3_const_n);

  /* Logic: '<S35>/Logical Operator' */
  localB->LogicalOperator = ((localB->CastToBoolean30 != 0) ||
    localB->Compare_jl);

  /* DataTypeConversion: '<S35>/Data Type Conversion3' */
  localB->DataTypeConversion3 = localB->LogicalOperator;

  /* Chart: '<S35>/fault Counter2' */
  /* Gateway: Diagnostics/Overheat/fault Counter2 */
  /* During: Diagnostics/Overheat/fault Counter2 */
  if (localDW->is_active_c10_HSC_Model == 0U) {
    /* Entry: Diagnostics/Overheat/fault Counter2 */
    localDW->is_active_c10_HSC_Model = 1U;

    /* Entry Internal: Diagnostics/Overheat/fault Counter2 */
    /* Transition: '<S50>:3' */
    localB->Fault_g = 0.0;
    localDW->is_c10_HSC_Model = HSC_Model_IN_Normal_Operation;

    /* Entry Internal 'Normal_Operation': '<S50>:1' */
    /* Transition: '<S50>:31' */
    localDW->is_Normal_Operation_i = HSC_Model_IN_operation_e;
  } else if (localDW->is_c10_HSC_Model == 1) {
    /* During 'Normal_Operation': '<S50>:1' */
    if ((localB->DataTypeConversion1_k == 1.0) && (localB->Fault_g == 0.0)) {
      /* Transition: '<S50>:9' */
      /* Exit Internal 'Normal_Operation': '<S50>:1' */
      localDW->is_Normal_Operation_i = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_c10_HSC_Model = HSC_Model_IN_fail_counter;

      /* Entry 'fail_counter': '<S50>:2' */
      localDW->fail_flag_b = 1.0;
      localDW->count_f = 1.0;

      /* Entry Internal 'fail_counter': '<S50>:2' */
      /* Transition: '<S50>:32' */
    } else if (localDW->is_Normal_Operation_i == 1) {
      /* During 'fail_reset': '<S50>:6' */
      /* Transition: '<S50>:8' */
      localDW->is_Normal_Operation_i = HSC_Model_IN_operation_e;
    } else {
      /* During 'operation': '<S50>:5' */
      if (!(localB->DataTypeConversion3 != 0.0)) {
        /* Transition: '<S50>:7' */
        localDW->is_Normal_Operation_i = HSC_Model_IN_fail_reset;

        /* Entry 'fail_reset': '<S50>:6' */
        localB->Fault_g = 0.0;
      }
    }
  } else {
    /* During 'fail_counter': '<S50>:2' */
    if (localDW->count_f >= 24000.0) {
      /* Transition: '<S50>:16' */
      if (localDW->fail_flag_b >= 20000.0) {
        /* Transition: '<S50>:17' */
        /* Transition: '<S50>:18' */
        localB->Fault_g = 1.0;
      } else {
        /* Transition: '<S50>:19' */
      }

      /* Exit Internal 'fail_counter': '<S50>:2' */
      localDW->is_c10_HSC_Model = HSC_Model_IN_Normal_Operation;

      /* Entry Internal 'Normal_Operation': '<S50>:1' */
      /* Transition: '<S50>:31' */
      localDW->is_Normal_Operation_i = HSC_Model_IN_operation_e;
    } else {
      localDW->count_f++;

      /* During 'err_counter': '<S50>:10' */
      if (localB->DataTypeConversion1_k == 1.0) {
        /* Transition: '<S50>:14' */
        /* Transition: '<S50>:15' */
        localDW->fail_flag_b++;
      }
    }
  }

  /* End of Chart: '<S35>/fault Counter2' */

  /* Logic: '<S37>/Logical Operator1' incorporates:
   *  Constant: '<S37>/Constant'
   */
  localB->LogicalOperator1_a = ((localB->Fault != 0.0) ||
    localB->DataTypeConversion3_k || (localB->Fault_g != 0.0) ||
    (HSC_Model_P.Constant_Value_p != 0.0));

  /* DataTypeConversion: '<S6>/Cast To Boolean4' */
  localB->CastToBoolean4 = (*rtu_In_Long_Switch != 0.0);

  /* Chart: '<S1>/CAVPCM_ACCMd_Request' */
  /* Gateway: ACC Controller /CAVPCM_ACCMd_Request */
  /* During: ACC Controller /CAVPCM_ACCMd_Request */
  if (localDW->is_active_c4_HSC_Model == 0U) {
    /* Entry: ACC Controller /CAVPCM_ACCMd_Request */
    localDW->is_active_c4_HSC_Model = 1U;

    /* Entry Internal: ACC Controller /CAVPCM_ACCMd_Request */
    /* Transition: '<S13>:5' */
    localDW->is_c4_HSC_Model = HSC_Model_IN_Enter;

    /* Entry 'Enter': '<S13>:4' */
    localB->CAVACCRequest = 0.0;
  } else if (localDW->is_c4_HSC_Model == 1) {
    localB->CAVACCRequest = 0.0;

    /* During 'Enter': '<S13>:4' */
    sf_internal_predicateOutput = ((localB->CastToBoolean3 == 3) &&
      localB->CastToBoolean4 && (localB->CastToBoolean30 == 2) &&
      (localB->CastToBoolean25 < 5.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S13>:7' */
      localDW->is_c4_HSC_Model = HSC_Model_IN_StillActive;

      /* Entry 'StillActive': '<S13>:11' */
      localB->CAVACCRequest = 1.0;
    }
  } else {
    localB->CAVACCRequest = 1.0;

    /* During 'StillActive': '<S13>:11' */
    sf_internal_predicateOutput = ((localB->CastToBoolean25 > 5.0) ||
      (localB->CastToBoolean3 == 6) || (!localB->CastToBoolean4));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S13>:20' */
      localDW->is_c4_HSC_Model = HSC_Model_IN_Enter;

      /* Entry 'Enter': '<S13>:4' */
      localB->CAVACCRequest = 0.0;
    }
  }

  /* End of Chart: '<S1>/CAVPCM_ACCMd_Request' */

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Change'
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  if (HSC_Model_P.ActivateMILHILVersion_Value > HSC_Model_P.Switch1_Threshold_j)
  {
    localB->CAVPCM_ACCMdActive = HSC_Model_P.Change_Value;
  } else {
    /* RelationalOperator: '<S16>/Compare' incorporates:
     *  Constant: '<S16>/Constant'
     */
    localB->Compare_pq = (localB->lvrpos ==
                          HSC_Model_P.CompareToConstant2_const_a);

    /* RelationalOperator: '<S15>/Compare' incorporates:
     *  Constant: '<S15>/Constant'
     */
    localB->Compare_av = (localB->lvrpos <
                          HSC_Model_P.CompareToConstant1_const_c);

    /* DataTypeConversion: '<S6>/Cast To Boolean27' */
    localB->CastToBoolean27 = *rtu_In_EngSpd;

    /* RelationalOperator: '<S17>/Compare' incorporates:
     *  Constant: '<S17>/Constant'
     */
    localB->Compare_mu = (localB->CastToBoolean27 >=
                          HSC_Model_P.CompareToConstant3_const);

    /* DataTypeConversion: '<S6>/Cast To Boolean5' */
    localB->CastToBoolean5 = (*rtu_In_TCSysAtv != 0.0);

    /* Logic: '<S1>/OR1' */
    localB->OR1 = (localB->CastToBoolean22 || localB->CastToBoolean5 ||
                   localB->Compare_mu || localB->LogicalOperator1_i ||
                   localB->LogicalOperator1_c || localB->LogicalOperator1_a ||
                   localB->Compare_av || localB->Compare_pq);

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Denied'
     */
    if (localB->OR1) {
      localB->Switch_ja = HSC_Model_P.Denied_Value;
    } else {
      localB->Switch_ja = localB->CAVACCRequest;
    }

    /* End of Switch: '<S1>/Switch' */
    localB->CAVPCM_ACCMdActive = localB->Switch_ja;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Product: '<S20>/Product' */
  localB->ActDist = *rtu_In_TimeGap * localB->EgoSpd;

  /* Sum: '<S20>/Sum2' incorporates:
   *  Constant: '<S20>/Default Spacing'
   */
  localB->SafeDist = localB->ActDist + HSC_Model_P.DefaultSpacing_Value;

  /* Sum: '<S20>/Sum1' */
  localB->DistErr = localB->SafeDist - localB->Switch1;

  /* Outputs for Atomic SubSystem: '<S12>/ACC ext' */
  HSC_Model_ACCextTID0(HSC_Model_M, localB->EgoSpd, localB->Switch1,
                       localB->Switch, localB->CAVPCM_ACCMdActive,
                       localB->Switch2, localB->ActDist, localB->SafeDist,
                       localB->DistErr, &localB->ACCext, &localDW->ACCext,
                       &HSC_Model_P.ACCext);

  /* End of Outputs for SubSystem: '<S12>/ACC ext' */

  /* DataTypeConversion: '<S1>/Cast To Boolean' */
  localB->CAVACCReq = (localB->CAVACCRequest != 0.0);

  /* DataTypeConversion: '<S1>/Cast To Boolean1' */
  localB->CAVPCM_ACCAct = (localB->CAVPCM_ACCMdActive != 0.0);

  /* Chart: '<S1>/Chart' */
  if (localDW->temporalCounter_i1_on < 255U) {
    localDW->temporalCounter_i1_on++;
  }

  /* Gateway: ACC Controller /Chart */
  /* During: ACC Controller /Chart */
  if (localDW->is_active_c21_HSC_Model == 0U) {
    /* Entry: ACC Controller /Chart */
    localDW->is_active_c21_HSC_Model = 1U;

    /* Entry Internal: ACC Controller /Chart */
    /* Transition: '<S14>:4' */
    localDW->is_c21_HSC_Model = HSC_Model_IN_Enter_f;

    /* Entry 'Enter': '<S14>:3' */
    localB->ACCAct370 = 0.0;
    localB->AdapCrsCntVDA = 0.0;
    localB->ACCDrvrSeltdSpd = 0.0;
  } else if (localDW->is_c21_HSC_Model == 1) {
    /* During 'CruiseSet': '<S14>:9' */
    if (localB->CAVPCM_ACCMdActive == 0.0) {
      /* Transition: '<S14>:16' */
      /* Exit Internal 'CruiseSet': '<S14>:9' */
      localDW->is_CruiseSet = HSC_Model_IN_NO_ACTIVE_CHILD_g4;
      localDW->is_c21_HSC_Model = HSC_Model_IN_Enter_f;

      /* Entry 'Enter': '<S14>:3' */
      localB->ACCAct370 = 0.0;
      localB->AdapCrsCntVDA = 0.0;
      localB->ACCDrvrSeltdSpd = 0.0;
    } else {
      localB->ACCAct370 = 1.0;
      localB->AdapCrsCntVDA = 1.0;
      localB->ACCDrvrSeltdSpd = localB->Switch2;
      localB->ACCDrvrSeltdSpd = rt_roundd_snf(localB->ACCDrvrSeltdSpd);
      if (localDW->is_CruiseSet == 1) {
        /* During 'SwitchAgain': '<S14>:20' */
        if (localDW->temporalCounter_i1_on >= 200U) {
          /* Transition: '<S14>:22' */
          localDW->is_CruiseSet = HSC_Model_IN_SwitchIt;
          localDW->temporalCounter_i1_on = 0U;

          /* Entry 'SwitchIt': '<S14>:18' */
          localB->AutoMdSpdLmtStat = 0.0;
        } else {
          localB->AutoMdSpdLmtStat = 1.0;
        }
      } else {
        /* During 'SwitchIt': '<S14>:18' */
        if (localDW->temporalCounter_i1_on >= 200U) {
          /* Transition: '<S14>:21' */
          localDW->is_CruiseSet = HSC_Model_IN_SwitchAgain;
          localDW->temporalCounter_i1_on = 0U;

          /* Entry 'SwitchAgain': '<S14>:20' */
          localB->AutoMdSpdLmtStat = 1.0;
        } else {
          localB->AutoMdSpdLmtStat = 0.0;
        }
      }
    }
  } else {
    /* During 'Enter': '<S14>:3' */
    sf_internal_predicateOutput = ((localB->Switch2 > 1.0) &&
      (localB->CAVPCM_ACCMdActive == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S14>:10' */
      localDW->is_c21_HSC_Model = HSC_Model_IN_CruiseSet_p;

      /* Entry 'CruiseSet': '<S14>:9' */
      localB->ACCAct370 = 1.0;
      localB->AdapCrsCntVDA = 1.0;
      localB->ACCDrvrSeltdSpd = localB->Switch2;
      localB->ACCDrvrSeltdSpd = rt_roundd_snf(localB->ACCDrvrSeltdSpd);

      /* Entry Internal 'CruiseSet': '<S14>:9' */
      /* Transition: '<S14>:19' */
      localDW->is_CruiseSet = HSC_Model_IN_SwitchIt;
      localDW->temporalCounter_i1_on = 0U;

      /* Entry 'SwitchIt': '<S14>:18' */
      localB->AutoMdSpdLmtStat = 0.0;
    } else {
      localB->ACCAct370 = 0.0;
      localB->AdapCrsCntVDA = 0.0;
      localB->ACCDrvrSeltdSpd = 0.0;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Gain: '<S1>/Gain1' */
  rty_Out->ACC_APP = HSC_Model_P.Gain1_Gain * localB->ACCext.Divide2;

  /* Gain: '<S1>/Gain2' */
  rty_Out->ACC_BPP = HSC_Model_P.Gain2_Gain * localB->ACCext.Saturation;

  /* Gain: '<S1>/Gain5' */
  rty_Out->SetSpdACC = HSC_Model_P.Gain5_Gain * localB->Switch2;

  /* Gain: '<S20>/Gain' */
  localB->Gain_h = HSC_Model_P.Gain_Gain_iu * localB->EgoSpd;

  /* Math: '<S20>/Power' incorporates:
   *  Constant: '<S20>/Constant4'
   */
  localB->Power = rt_powd_snf(localB->Gain_h, HSC_Model_P.Constant4_Value);

  /* Product: '<S20>/Product2' incorporates:
   *  Constant: '<S20>/Constant5'
   */
  localB->Product2 = localB->Power * HSC_Model_P.Constant5_Value;

  /* Sum: '<S20>/Add2' incorporates:
   *  Constant: '<S20>/Constant6'
   */
  localB->Add2 = localB->Product2 + HSC_Model_P.Constant6_Value;

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/Constant'
   */
  if (localB->Gain_h >= HSC_Model_P.Switch_Threshold_gz) {
    localB->Switch_e = HSC_Model_P.Constant_Value;
  } else {
    /* Sum: '<S20>/Add' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    localB->Add_ku = HSC_Model_P.Constant2_Value - localB->Gain_h;

    /* Math: '<S20>/Square' */
    localB->Square = localB->Add_ku * localB->Add_ku;

    /* Product: '<S20>/Product1' incorporates:
     *  Constant: '<S20>/Constant1'
     */
    localB->Product1_h = HSC_Model_P.Constant1_Value * localB->Square;

    /* Sum: '<S20>/Add1' incorporates:
     *  Constant: '<S20>/Constant3'
     */
    localB->Add1 = localB->Product1_h + HSC_Model_P.Constant3_Value;
    localB->Switch_e = localB->Add1;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Sum: '<S20>/Add3' */
  localB->Add3 = localB->Switch_e + localB->Add2;

  /* Product: '<S20>/Divide' incorporates:
   *  Constant: '<S20>/Constant7'
   */
  localB->Divide_f = localB->Add3 / HSC_Model_P.Constant7_Value;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  if (HSC_Model_P.ActivateMILHILVersion_Value > HSC_Model_P.Switch_Threshold_nu)
  {
    localB->Switch_l = HSC_Model_P.Constant_Value_d;
  } else {
    /* DataTypeConversion: '<S6>/Cast To Double6' */
    localB->bcm_coolan_temp_C = *rtu_In_bcm_coolan_temp_C;
    localB->Switch_l = localB->bcm_coolan_temp_C;
  }

  /* End of Switch: '<S2>/Switch' */

  /* DataTypeConversion: '<S6>/Cast To Boolean35' */
  localB->CastToBoolean35 = *rtu_In_SOC;

  /* Lookup_n-D: '<S2>/2-D Lookup Table' */
  localB->ContinuousCurrentLimit = look2_binlcapw(localB->Switch_l,
    localB->CastToBoolean35, HSC_Model_P.uDLookupTable_bp01Data_m,
    HSC_Model_P.uDLookupTable_bp02Data, rtP_ContinuousBatteryCharge,
    HSC_Model_P.uDLookupTable_maxIndex, 10U);

  /* Memory: '<S2>/Memory' */
  localB->Memory = localDW->Memory_PreviousInput;

  /* RelationalOperator: '<S106>/LowerRelop1' */
  localB->LowerRelop1 = (localB->ACCext.MotorPowerBlock > localB->Memory);

  /* Memory: '<S2>/Memory1' */
  localB->Memory1 = localDW->Memory1_PreviousInput;

  /* RelationalOperator: '<S106>/UpperRelop' */
  localB->UpperRelop = (localB->ACCext.MotorPowerBlock < localB->Memory1);

  /* Switch: '<S106>/Switch' */
  if (localB->UpperRelop) {
    localB->Switch_o = localB->Memory1;
  } else {
    localB->Switch_o = localB->ACCext.MotorPowerBlock;
  }

  /* End of Switch: '<S106>/Switch' */

  /* Switch: '<S106>/Switch2' */
  if (localB->LowerRelop1) {
    localB->Switch2_c = localB->Memory;
  } else {
    localB->Switch2_c = localB->Switch_o;
  }

  /* End of Switch: '<S106>/Switch2' */

  /* Logic: '<S71>/AND' */
  localB->AND = ((localB->CAVPCM_ACCMdActive != 0.0) &&
                 (localB->ACCext.Constant10 != 0.0));

  /* Logic: '<S4>/NOT' incorporates:
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  localB->NOT = !(HSC_Model_P.ActivateMILHILVersion_Value != 0.0);

  /* Product: '<S4>/Product' */
  localB->Product = (real_T)localB->NOT * localB->CAVPCM_ACCMdActive *
    localB->Switch2;

  /* DataTypeConversion: '<S6>/Cast To Boolean23' */
  localB->APP = *rtu_In_APP;

  /* Lookup_n-D: '<S4>/ACC_Deadzone' */
  localB->ACC_Deadzone = look1_binlxpw(localB->APP,
    HSC_Model_P.ACC_Deadzone_bp01Data, HSC_Model_P.ACC_Deadzone_tableData, 2U);

  /* Lookup_n-D: '<S4>/LCV Pedal Map Axle Torque Nm1' */
  localB->TotDrvrDmdTrq = look2_binlxpw(localB->ACC_Deadzone,
    localB->CastToBoolean40, HSC_Model_P.PedalMap_LCV.APP,
    HSC_Model_P.PedalMap_LCV.VehicleSpeed_kph, rtP_New_Mass_Toque_Map,
    HSC_Model_P.LCVPedalMapAxleTorqueNm1_maxIndex, 17U);

  /* Saturate: '<S4>/Saturation2' */
  u0 = localB->TotDrvrDmdTrq;
  u1 = HSC_Model_P.Saturation2_LowerSat;
  u2 = HSC_Model_P.Saturation2_UpperSat;
  if (u0 > u2) {
    localB->TotDrvrDmdTrq_g = u2;
  } else if (u0 < u1) {
    localB->TotDrvrDmdTrq_g = u1;
  } else {
    localB->TotDrvrDmdTrq_g = u0;
  }

  /* End of Saturate: '<S4>/Saturation2' */

  /* Gain: '<S4>/kph to mps' */
  localB->kphtomps = HSC_Model_P.kphtomps_Gain_g * localB->CastToBoolean40;

  /* Gain: '<S4>/mps to rad//s' */
  u1 = 1.0 / HSC_Model_P.Re;
  localB->mpstorads = u1 * localB->kphtomps;

  /* Saturate: '<S4>/prevents zeroing Pwr Dmd at 0 kph' */
  u0 = localB->mpstorads;
  u1 = HSC_Model_P.preventszeroingPwrDmdat0kph_LowerSat;
  u2 = HSC_Model_P.preventszeroingPwrDmdat0kph_UpperSat;
  if (u0 > u2) {
    localB->preventszeroingPwrDmdat0kph = u2;
  } else if (u0 < u1) {
    localB->preventszeroingPwrDmdat0kph = u1;
  } else {
    localB->preventszeroingPwrDmdat0kph = u0;
  }

  /* End of Saturate: '<S4>/prevents zeroing Pwr Dmd at 0 kph' */

  /* Product: '<S4>/Multiply' */
  localB->map = localB->TotDrvrDmdTrq_g * localB->preventszeroingPwrDmdat0kph;

  /* Switch: '<S4>/Switch' */
  if (localB->Product > HSC_Model_P.Switch_Threshold_k) {
    localB->Switch_j = localB->ACCext.ACC_pwr_ext;
  } else {
    localB->Switch_j = localB->map;
  }

  /* End of Switch: '<S4>/Switch' */

  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   */
  localB->Compare_o = (localB->APP >= HSC_Model_P.CompareToConstant_const);

  /* DataTypeConversion: '<S6>/Cast To Boolean51' */
  localB->CastToBoolean51 = (*rtu_In_RegenSwitch != 0.0);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   */
  localB->Compare_kp = (localB->CastToBoolean51 ==
                        HSC_Model_P.CompareToConstant1_const_g);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   */
  localB->Compare_oa = (localB->CastToBoolean35 >
                        HSC_Model_P.SOCChargeLimit_const);

  /* Logic: '<S9>/Logical Operator' */
  localB->LogicalOperator_l = (localB->Compare_o || localB->Compare_kp ||
    localB->CastToBoolean22 || localB->Compare_oa || (localB->CAVPCM_ACCMdActive
    != 0.0));

  /* DataTypeConversion: '<S6>/Cast To Boolean37' */
  localB->CastToBoolean37 = *rtu_In_StrWhAng;

  /* Lookup_n-D: '<S9>/Steering Wheel Angle Fade Out' */
  localB->SteeringWheelAngleFadeOut = look1_binlcapw(localB->CastToBoolean37,
    HSC_Model_P.SteeringWheelAngleFadeOut_bp01Data,
    HSC_Model_P.SteeringWheelAngleFadeOut_tableData, 3U);

  /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  if (!localB->LogicalOperator_l) {
    /* Gain: '<S9>/kph to mph' */
    localB->kphtomph_o = HSC_Model_P.kphtomph_Gain_c * localB->CastToBoolean40;

    /* Lookup_n-D: '<S9>/Vehicle Speed Fade Out' */
    localB->VehicleSpeedFadeOut = look1_binlcapw(localB->kphtomph_o,
      HSC_Model_P.VehicleSpeedFadeOut_bp01Data,
      HSC_Model_P.VehicleSpeedFadeOut_tableData, 1U);

    /* Lookup_n-D: '<S9>/BPP Fade Out' */
    localB->BPPFadeOut = look1_binlcapw(localB->CastToBoolean25,
      HSC_Model_P.bppRegenLookup, HSC_Model_P.bppRegenMap, 22U);

    /* Product: '<S9>/Product3' incorporates:
     *  Constant: '<S9>/Max BPP Regen W'
     */
    localB->Product3 = HSC_Model_P.MaxBPPRegenW_Value * localB->BPPFadeOut;

    /* Sum: '<S9>/Add' incorporates:
     *  Constant: '<S9>/Off Throttle Regen Power Demand W'
     */
    localB->Add_k = localB->Product3 +
      HSC_Model_P.OffThrottleRegenPowerDemandW_Value;

    /* Product: '<S9>/Product1' */
    localB->RegenPowerW = localB->Add_k * localB->VehicleSpeedFadeOut *
      localB->SteeringWheelAngleFadeOut;

    /* Saturate: '<S9>/Saturation1' */
    u0 = localB->RegenPowerW;
    u1 = HSC_Model_P.Saturation1_LowerSat;
    u2 = HSC_Model_P.Saturation1_UpperSat;
    if (u0 > u2) {
      localB->Saturation1_g = u2;
    } else if (u0 < u1) {
      localB->Saturation1_g = u1;
    } else {
      localB->Saturation1_g = u0;
    }

    /* End of Saturate: '<S9>/Saturation1' */

    /* Gain: '<S9>/rbcp_regen_enable' */
    localB->rbcp_regen_enable = HSC_Model_P.rbcp_regen_enable_Gain *
      localB->Saturation1_g;
    localB->MultiportSwitch = localB->rbcp_regen_enable;
  } else {
    localB->MultiportSwitch = HSC_Model_P.Constant1_Value_j;
  }

  /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

  /* Sum: '<S4>/Sum' */
  localB->total = localB->Switch_j + localB->MultiportSwitch;

  /* DataTypeConversion: '<S6>/Cast To Boolean49' */
  localB->CastToBoolean49 = (*rtu_In_vehmon != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean45' */
  localB->CastToBoolean45 = (*rtu_In_hvilmon != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean43' */
  localB->CastToBoolean43 = (*rtu_In_cpwrcmd != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean44' */
  localB->CastToBoolean44 = (*rtu_In_cpwrmon != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean42' */
  localB->CastToBoolean42 = (*rtu_In_bcmready != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean47' */
  u0 = rt_roundd_snf(*rtu_In_maincstat);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  localB->CastToBoolean47 = (int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean47' */

  /* DataTypeConversion: '<S6>/Cast To Boolean46' */
  localB->CastToBoolean46 = *rtu_In_ibat;

  /* DataTypeConversion: '<S6>/Cast To Boolean36' */
  u0 = rt_roundd_snf(*rtu_In_StateMcu);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  localB->CastToBoolean36 = (int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean36' */

  /* Gain: '<S10>/kph to mph' */
  localB->kphtomph = HSC_Model_P.kphtomph_Gain_i * localB->CastToBoolean40;

  /* DataTypeConversion: '<S6>/Cast To Boolean28' */
  localB->gear = *rtu_In_Gear;

  /* Chart: '<S10>/VMCP' */
  /* Gateway: Vehicle_Mode_Control_Process/VMCP */
  /* During: Vehicle_Mode_Control_Process/VMCP */
  if (localDW->is_active_c3_HSC_Model == 0U) {
    /* Entry: Vehicle_Mode_Control_Process/VMCP */
    localDW->is_active_c3_HSC_Model = 1U;

    /* Entry Internal: Vehicle_Mode_Control_Process/VMCP */
    /* Entry Internal 'VMCP': '<S118>:144' */
    /* Entry Internal 'Startup_Shutdown_Sequence': '<S118>:91' */
    /* Transition: '<S118>:3' */
    localDW->is_Startup_Shutdown_Sequence = HSC_Model_IN_Key_Off;
    HSC_Model_enter_atomic_Key_Off(localB);

    /* Entry Internal 'Operating_Mode': '<S118>:143' */
    /* Transition: '<S118>:150' */
    if (localDW->Low_Speed_Cruise_Charge != 0.0) {
      /* Transition: '<S118>:148' */
      localDW->is_Operating_Mode = HSC_Model_IN_LowSpeedCruiseCharge;

      /* Entry 'LowSpeedCruiseCharge': '<S118>:161' */
      localB->vmcp_operating_mode = 29.0;
    } else if (localDW->Launch_Mode != 0.0) {
      /* Transition: '<S118>:154' */
      localDW->is_Operating_Mode = HSC_Model_IN_Staging;

      /* Entry 'Staging': '<S118>:163' */
      localB->vmcp_operating_mode = 30.0;
    } else if (localDW->Full_Power_Active != 0.0) {
      /* Transition: '<S118>:158' */
      localDW->is_Operating_Mode = HSC_Model_IN_Full_Power_Active;

      /* Entry 'Full_Power_Active': '<S118>:149' */
      localB->vmcp_operating_mode = 25.0;
    } else if (localDW->Cruise_Charge_Available != 0.0) {
      /* Transition: '<S118>:146' */
      localDW->is_Operating_Mode = HSC_Model_IN_Cruise_Charge_Available;

      /* Entry 'Cruise_Charge_Available': '<S118>:165' */
      localB->vmcp_operating_mode = 24.0;
    } else {
      /* Transition: '<S118>:160' */
      localDW->is_Operating_Mode = HSC_Model_IN_Engine_Only_Active;

      /* Entry 'Engine_Only_Active': '<S118>:164' */
      localB->vmcp_operating_mode = 23.0;

      /* Entry Internal 'Engine_Only_Active': '<S118>:164' */
      /* Transition: '<S118>:166' */
      if (localDW->Regen_Active != 0.0) {
        /* Transition: '<S118>:169' */
        /* Transition: '<S118>:167' */
        /* Transition: '<S118>:168' */
        localB->vmcp_operating_mode = 26.0;
      } else {
        /* Transition: '<S118>:170' */
      }
    }
  } else {
    HSC_Model_VMCP(localB, localDW);
  }

  /* End of Chart: '<S10>/VMCP' */

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  localB->Compare_kf = (localB->vmcp_operating_mode ==
                        HSC_Model_P.checksforLowSpeedCruiseChargeMode_const);

  /* Switch: '<S29>/Switch' incorporates:
   *  Constant: '<S29>/Constant'
   */
  if (localB->Compare_kf) {
    /* Gain: '<S2>/kph to mph' */
    localB->kphtomph_f = HSC_Model_P.kphtomph_Gain * localB->CastToBoolean40;

    /* Lookup_n-D: '<S29>/Vehicle Speed Multiplier' */
    localB->VehicleSpeedMultiplier = look1_binlcapw(localB->kphtomph_f,
      HSC_Model_P.VehicleSpeedMultiplier_bp01Data,
      HSC_Model_P.VehicleSpeedMultiplier_tableData, 5U);
    localB->Switch_jq = localB->VehicleSpeedMultiplier;
  } else {
    localB->Switch_jq = HSC_Model_P.Constant_Value_i;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Constant: '<S29>/Constant2' */
  localB->MatrixConcatenate1[0] = HSC_Model_P.Constant2_Value_p;

  /* Sum: '<S29>/Add' incorporates:
   *  Constant: '<S29>/psoc_table_SOC_offset'
   *  Constant: '<S2>/Target SOC'
   */
  localB->MatrixConcatenate1[1] = HSC_Model_P.TargetSOC_Value -
    HSC_Model_P.psoc_table_SOC_offset_Value;

  /* SignalConversion generated from: '<S29>/Matrix Concatenate1' incorporates:
   *  Constant: '<S2>/Target SOC'
   */
  localB->MatrixConcatenate1[2] = HSC_Model_P.TargetSOC_Value;

  /* Sum: '<S29>/Add1' incorporates:
   *  Constant: '<S29>/psoc_table_SOC_offset'
   *  Constant: '<S2>/Target SOC'
   */
  localB->MatrixConcatenate1[3] = HSC_Model_P.TargetSOC_Value +
    HSC_Model_P.psoc_table_SOC_offset_Value;

  /* Constant: '<S29>/Constant3' */
  localB->MatrixConcatenate1[4] = HSC_Model_P.Constant3_Value_g;

  /* SignalConversion generated from: '<S29>/Matrix Concatenate' incorporates:
   *  Constant: '<S29>/Constant4'
   */
  localB->MatrixConcatenate[0] = HSC_Model_P.Constant4_Value_k;

  /* SignalConversion generated from: '<S29>/Matrix Concatenate' incorporates:
   *  Constant: '<S29>/Constant4'
   */
  localB->MatrixConcatenate[1] = HSC_Model_P.Constant4_Value_k;

  /* Constant: '<S29>/Constant1' */
  localB->MatrixConcatenate[2] = HSC_Model_P.Constant1_Value_b;

  /* SignalConversion generated from: '<S29>/Matrix Concatenate' incorporates:
   *  Constant: '<S29>/Constant7'
   */
  localB->MatrixConcatenate[3] = HSC_Model_P.Constant7_Value_b;

  /* SignalConversion generated from: '<S29>/Matrix Concatenate' incorporates:
   *  Constant: '<S29>/Constant7'
   */
  localB->MatrixConcatenate[4] = HSC_Model_P.Constant7_Value_b;

  /* S-Function (sfix_look1_dyn): '<S29>/Dynamic PSOC Table1' */
  /* Dynamic Look-Up Table Block: '<S29>/Dynamic PSOC Table1'
   * Input0  Data Type:  Floating Point real_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real_T_real_T( &(localB->DynamicPSOCTable1), &localB->
                       MatrixConcatenate[0], localB->CastToBoolean35,
                       &localB->MatrixConcatenate1[0], 4U);

  /* Product: '<S29>/Product' */
  localB->Product_m = localB->Switch_jq * localB->DynamicPSOCTable1;

  /* RelationalOperator: '<S30>/LowerRelop1' */
  localB->LowerRelop1_e = (localB->Product_m > localB->Memory);

  /* RelationalOperator: '<S30>/UpperRelop' */
  localB->UpperRelop_h = (localB->Product_m < localB->Memory1);

  /* Switch: '<S30>/Switch' */
  if (localB->UpperRelop_h) {
    localB->Switch_lp = localB->Memory1;
  } else {
    localB->Switch_lp = localB->Product_m;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Switch: '<S30>/Switch2' */
  if (localB->LowerRelop1_e) {
    localB->Switch2_p = localB->Memory;
  } else {
    localB->Switch2_p = localB->Switch_lp;
  }

  /* End of Switch: '<S30>/Switch2' */

  /* DataTypeConversion: '<S73>/FixPt Gateway In' incorporates:
   *  Constant: '<S73>/FixPt Constant'
   */
  localB->FixPtGatewayIn = HSC_Model_P.FixPtConstant_Value;

  /* Sum: '<S73>/FixPt Sum1' */
  localB->FixPtSum1 = localB->gear + localB->FixPtGatewayIn;

  /* Gain: '<S5>/kph to mph' */
  localB->kphtomph_c = HSC_Model_P.kphtomph_Gain_e * localB->CastToBoolean40;

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S6>/Activate MIL//HIL Version'
   */
  if (HSC_Model_P.ActivateMILHILVersion_Value > HSC_Model_P.Switch_Threshold_f)
  {
    /* Gain: '<S5>/Gain2' */
    u1 = 1.0 / HSC_Model_P.Re;
    localB->Gain2 = u1 * localB->kphtomph_c;

    /* LookupNDDirect: '<S5>/Direct Lookup Table (n-D)'
     *
     * About '<S5>/Direct Lookup Table (n-D)':
     *  1-dimensional Direct Look-Up returning a Scalar,
     *
     *     Remove protection against out-of-range input in generated code: 'off'
     */
    if (rtIsNaN(localB->FixPtSum1)) {
      u1 = 0.0;
    } else {
      u1 = localB->FixPtSum1;
    }

    if (u1 > 9.0) {
      u1 = 9.0;
    } else {
      if (u1 < 0.0) {
        u1 = 0.0;
      }
    }

    Cruise_Charge = (int32_T)u1;
    localB->DirectLookupTablenD = HSC_Model_P.N[Cruise_Charge];

    /* End of LookupNDDirect: '<S5>/Direct Lookup Table (n-D)' */

    /* Gain: '<S5>/FinalDrive' */
    localB->FinalDrive = HSC_Model_P.FinalDrive_Gain *
      localB->DirectLookupTablenD;

    /* Product: '<S5>/Product1' */
    localB->Product1_m = localB->Gain2 * localB->FinalDrive;

    /* Saturate: '<S5>/Saturation' */
    u0 = localB->Product1_m;
    u1 = HSC_Model_P.Saturation_LowerSat;
    u2 = HSC_Model_P.Saturation_UpperSat;
    if (u0 > u2) {
      localB->Saturation_h = u2;
    } else if (u0 < u1) {
      localB->Saturation_h = u1;
    } else {
      localB->Saturation_h = u0;
    }

    /* End of Saturate: '<S5>/Saturation' */

    /* Gain: '<S5>/Gain4' */
    localB->Gain4 = HSC_Model_P.Gain4_Gain * localB->Saturation_h;

    /* Lookup_n-D: '<S5>/1-D Lookup Table1' */
    localB->uDLookupTable1_p = look1_binlxpw(localB->Gain4,
      HSC_Model_P.f_tbrake_n_bpt, HSC_Model_P.uDLookupTable1_tableData, 39U);

    /* Product: '<S5>/Product2' */
    localB->Engine_Axle_Torque = localB->FinalDrive * localB->uDLookupTable1_p;
    localB->Switch_i = localB->Engine_Axle_Torque;
  } else {
    /* DataTypeConversion: '<S6>/Cast To Boolean7' */
    localB->DrvIntndAxlTrqMax = *rtu_In_DrvIntndAxlTrqMax;
    localB->Switch_i = localB->DrvIntndAxlTrqMax;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Saturate: '<S5>/Saturation1' */
  u0 = localB->kphtomph_c;
  u1 = HSC_Model_P.Saturation1_LowerSat_p;
  u2 = HSC_Model_P.Saturation1_UpperSat_n;
  if (u0 > u2) {
    localB->Saturation1 = u2;
  } else if (u0 < u1) {
    localB->Saturation1 = u1;
  } else {
    localB->Saturation1 = u0;
  }

  /* End of Saturate: '<S5>/Saturation1' */

  /* Gain: '<S5>/Gain' */
  u1 = 1.0 / HSC_Model_P.Re;
  localB->Gain_m = u1 * localB->Saturation1;

  /* Product: '<S5>/Product' */
  localB->Product_d = localB->Switch_i * localB->Gain_m;

  /* Chart: '<S5>/Energy Management Strategy' */
  /* Gateway: Energy_Management_Control_Process/Energy Management Strategy */
  /* During: Energy_Management_Control_Process/Energy Management Strategy */
  if (localDW->is_active_c1_HSC_Model == 0U) {
    /* Entry: Energy_Management_Control_Process/Energy Management Strategy */
    localDW->is_active_c1_HSC_Model = 1U;

    /* Entry Internal: Energy_Management_Control_Process/Energy Management Strategy */
    /* Entry Internal 'EMCP': '<S72>:4' */
    /* Entry Internal 'Energy_Management_Blending': '<S72>:1' */
    /* Entry 'Parallel_Mode': '<S72>:555' */
    localB->emcp_mode = 7.0;
    HSC_Model_enter_internal_Parallel_Mode(localB);

    /* Entry Internal 'SOC_Maintenance': '<S72>:929' */
    /* Transition: '<S72>:945' */
    localDW->is_SOC_Maintenance = HSC_Model_IN_Engine_Only_Active;

    /* Entry 'Engine_Only_Active': '<S72>:941' */
    localDW->emcp_psoc_W = 0.0;
  } else {
    /* During 'EMCP': '<S72>:4' */
    /* During 'Energy_Management_Blending': '<S72>:1' */
    localB->emcp_ptot_W = localB->total - localDW->emcp_psoc_W;
    localB->emcp_mode = 7.0;

    /* During 'Parallel_Mode': '<S72>:555' */
    /* Transition: '<S72>:656' */
    HSC_Model_enter_internal_Parallel_Mode(localB);

    /* During 'SOC_Maintenance': '<S72>:929' */
    Cruise_Charge = ((localB->vmcp_operating_mode == 24.0) ||
                     (localB->vmcp_operating_mode == 29.0));
    Full_Power = (localB->vmcp_operating_mode == 25.0);
    Regen = (localB->vmcp_operating_mode == 26.0);
    Engine_Only = (localB->vmcp_operating_mode == 23.0);
    switch (localDW->is_SOC_Maintenance) {
     case HSC_Model_IN_Cruise_Charge_Available:
      /* During 'Cruise_Charge_Available': '<S72>:940' */
      /* Transition: '<S72>:932' */
      if (Cruise_Charge != 0) {
        /* Transition: '<S72>:931' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Cruise_Charge_Available;

        /* Entry 'Cruise_Charge_Available': '<S72>:940' */
        localDW->emcp_psoc_W = localB->Switch2_p;
      } else if (Full_Power != 0) {
        /* Transition: '<S72>:937' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Full_Power_Active;

        /* Entry 'Full_Power_Active': '<S72>:942' */
        localDW->emcp_psoc_W = 0.0;
      } else if (Regen != 0) {
        /* Transition: '<S72>:938' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Regen_Active;

        /* Entry 'Regen_Active': '<S72>:943' */
        localDW->emcp_psoc_W = 0.0;
      } else {
        if (Engine_Only != 0) {
          /* Transition: '<S72>:934' */
          localDW->is_SOC_Maintenance = HSC_Model_IN_Engine_Only_Active;

          /* Entry 'Engine_Only_Active': '<S72>:941' */
          localDW->emcp_psoc_W = 0.0;
        }
      }
      break;

     case HSC_Model_IN_Engine_Only_Active:
      /* During 'Engine_Only_Active': '<S72>:941' */
      /* Transition: '<S72>:935' */
      if (Cruise_Charge != 0) {
        /* Transition: '<S72>:931' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Cruise_Charge_Available;

        /* Entry 'Cruise_Charge_Available': '<S72>:940' */
        localDW->emcp_psoc_W = localB->Switch2_p;
      } else if (Full_Power != 0) {
        /* Transition: '<S72>:937' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Full_Power_Active;

        /* Entry 'Full_Power_Active': '<S72>:942' */
        localDW->emcp_psoc_W = 0.0;
      } else if (Regen != 0) {
        /* Transition: '<S72>:938' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Regen_Active;

        /* Entry 'Regen_Active': '<S72>:943' */
        localDW->emcp_psoc_W = 0.0;
      } else {
        if (Engine_Only != 0) {
          /* Transition: '<S72>:934' */
          localDW->is_SOC_Maintenance = HSC_Model_IN_Engine_Only_Active;

          /* Entry 'Engine_Only_Active': '<S72>:941' */
          localDW->emcp_psoc_W = 0.0;
        }
      }
      break;

     case HSC_Model_IN_Full_Power_Active:
      /* During 'Full_Power_Active': '<S72>:942' */
      /* Transition: '<S72>:936' */
      if (Cruise_Charge != 0) {
        /* Transition: '<S72>:931' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Cruise_Charge_Available;

        /* Entry 'Cruise_Charge_Available': '<S72>:940' */
        localDW->emcp_psoc_W = localB->Switch2_p;
      } else if (Full_Power != 0) {
        /* Transition: '<S72>:937' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Full_Power_Active;

        /* Entry 'Full_Power_Active': '<S72>:942' */
        localDW->emcp_psoc_W = 0.0;
      } else if (Regen != 0) {
        /* Transition: '<S72>:938' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Regen_Active;

        /* Entry 'Regen_Active': '<S72>:943' */
        localDW->emcp_psoc_W = 0.0;
      } else {
        if (Engine_Only != 0) {
          /* Transition: '<S72>:934' */
          localDW->is_SOC_Maintenance = HSC_Model_IN_Engine_Only_Active;

          /* Entry 'Engine_Only_Active': '<S72>:941' */
          localDW->emcp_psoc_W = 0.0;
        }
      }
      break;

     default:
      /* During 'Regen_Active': '<S72>:943' */
      /* Transition: '<S72>:939' */
      if (Cruise_Charge != 0) {
        /* Transition: '<S72>:931' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Cruise_Charge_Available;

        /* Entry 'Cruise_Charge_Available': '<S72>:940' */
        localDW->emcp_psoc_W = localB->Switch2_p;
      } else if (Full_Power != 0) {
        /* Transition: '<S72>:937' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Full_Power_Active;

        /* Entry 'Full_Power_Active': '<S72>:942' */
        localDW->emcp_psoc_W = 0.0;
      } else if (Regen != 0) {
        /* Transition: '<S72>:938' */
        localDW->is_SOC_Maintenance = HSC_Model_IN_Regen_Active;

        /* Entry 'Regen_Active': '<S72>:943' */
        localDW->emcp_psoc_W = 0.0;
      } else {
        if (Engine_Only != 0) {
          /* Transition: '<S72>:934' */
          localDW->is_SOC_Maintenance = HSC_Model_IN_Engine_Only_Active;

          /* Entry 'Engine_Only_Active': '<S72>:941' */
          localDW->emcp_psoc_W = 0.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Energy Management Strategy' */

  /* Switch: '<S71>/Switch4' */
  if (localB->AND) {
    localB->ACC_Correc_Mot = localB->Switch2_c;
  } else {
    localB->ACC_Correc_Mot = localB->emcp_p_elec_des_W;
  }

  /* End of Switch: '<S71>/Switch4' */

  /* InitialCondition: '<S2>/IC6' */
  if (localDW->IC6_FirstOutputTime) {
    localDW->IC6_FirstOutputTime = false;
    localB->IC6 = HSC_Model_P.IC6_Value;
  } else {
    localB->IC6 = localB->ACC_Correc_Mot;
  }

  /* End of InitialCondition: '<S2>/IC6' */

  /* Product: '<S2>/Divide' */
  localB->CurrentDemanded = localB->IC6 / localB->CastToBoolean48;

  /* Chart: '<S2>/Chart' */
  HSC_Model_Chart(localB->CurrentDemanded, localB->ContinuousCurrentLimit,
                  &localB->sf_Chart_g, &localDW->sf_Chart_g);

  /* Lookup_n-D: '<S2>/2-D Lookup Table2' */
  bpIdx = plook_binca(localB->Switch_l, HSC_Model_P.uDLookupTable2_bp01Data, 9U,
                      &u1);
  fractions[0U] = u1;
  bpIndices[0U] = bpIdx;
  bpIdx = plook_binca(localB->CastToBoolean35,
                      HSC_Model_P.uDLookupTable2_bp02Data, 10U, &u1);
  fractions[1U] = u1;
  bpIndices[1U] = bpIdx;
  bpIdx = plook_binca(localB->sf_Chart_g.timer,
                      HSC_Model_P.uDLookupTable2_bp03Data, 1U, &u1);
  fractions[2U] = u1;
  bpIndices[2U] = bpIdx;
  localB->CurrentLimit = intrp3d_la_pw(bpIndices, fractions,
    rtP_InterpBatteryCharge, HSC_Model_P.uDLookupTable2_dimSizes,
    HSC_Model_P.uDLookupTable2_maxIndex);

  /* InitialCondition: '<S2>/IC' */
  if (localDW->IC_FirstOutputTime_b) {
    localDW->IC_FirstOutputTime_b = false;
    localB->IC_m = HSC_Model_P.IC_Value_h;
  } else {
    localB->IC_m = localB->ACC_Correc_Mot;
  }

  /* End of InitialCondition: '<S2>/IC' */

  /* Product: '<S2>/Divide1' */
  localB->CurrentDemanded_k = localB->IC_m / localB->CastToBoolean48;

  /* Lookup_n-D: '<S2>/ContinuousDischageLimit' */
  localB->ContinuousDischageLimit = look2_binlcapw(localB->Switch_l,
    localB->CastToBoolean35, HSC_Model_P.ContinuousDischageLimit_bp01Data,
    HSC_Model_P.ContinuousDischageLimit_bp02Data, rtP_ContinuousBatteryDischarge,
    HSC_Model_P.ContinuousDischageLimit_maxIndex, 10U);

  /* Chart: '<S2>/Chart2' */
  HSC_Model_Chart(localB->CurrentDemanded_k, localB->ContinuousDischageLimit,
                  &localB->sf_Chart2, &localDW->sf_Chart2);

  /* Lookup_n-D: '<S2>/2-D Lookup Table5' */
  bpIdx = plook_binca(localB->Switch_l, HSC_Model_P.uDLookupTable5_bp01Data, 9U,
                      &u1);
  fractions_0[0U] = u1;
  bpIndices_0[0U] = bpIdx;
  bpIdx = plook_binca(localB->CastToBoolean35,
                      HSC_Model_P.uDLookupTable5_bp02Data, 10U, &u1);
  fractions_0[1U] = u1;
  bpIndices_0[1U] = bpIdx;
  bpIdx = plook_binca(localB->sf_Chart2.timer,
                      HSC_Model_P.uDLookupTable5_bp03Data, 1U, &u1);
  fractions_0[2U] = u1;
  bpIndices_0[2U] = bpIdx;
  localB->CurrentLimit_f = intrp3d_la_pw(bpIndices_0, fractions_0,
    rtP_InterpBatteryDischarge, HSC_Model_P.uDLookupTable5_dimSizes,
    HSC_Model_P.uDLookupTable5_maxIndex);

  /* DataTypeConversion: '<S6>/Cast To Boolean33' */
  localB->CastToBoolean33 = *rtu_In_MotorSpd;

  /* InitialCondition: '<S2>/IC5' */
  if (localDW->IC5_FirstOutputTime) {
    localDW->IC5_FirstOutputTime = false;
    localB->IC5 = HSC_Model_P.IC5_Value;
  } else {
    localB->IC5 = localB->CastToBoolean33;
  }

  /* End of InitialCondition: '<S2>/IC5' */

  /* Lookup_n-D: '<S2>/ContinuousMotorPowerLimit' */
  localB->ContinuousMotorPowerLimit = look1_binlcapw(localB->IC5,
    HSC_Model_P.ContinuousMotorPowerLimit_bp01Data,
    HSC_Model_P.ContinuousMotorPowerLimit_tableData, 21U);

  /* Chart: '<S2>/Chart1' */
  if (localDW->temporalCounter_i1_d < MAX_uint32_T) {
    localDW->temporalCounter_i1_d++;
  }

  /* Gateway: Battery_Management_Control_Process/Chart1 */
  /* During: Battery_Management_Control_Process/Chart1 */
  if (localDW->is_active_c17_HSC_Model == 0U) {
    /* Entry: Battery_Management_Control_Process/Chart1 */
    localDW->is_active_c17_HSC_Model = 1U;

    /* Entry Internal: Battery_Management_Control_Process/Chart1 */
    /* Transition: '<S26>:4' */
    localDW->is_c17_HSC_Model = HSC_Model_IN_reset_e;

    /* Entry 'reset': '<S26>:3' */
    localB->timer_g = 0.0;
  } else {
    switch (localDW->is_c17_HSC_Model) {
     case HSC_Model_IN_countdown_k:
      /* During 'countdown': '<S26>:11' */
      if (localB->timer_g == 0.0) {
        /* Transition: '<S26>:12' */
        localDW->is_c17_HSC_Model = HSC_Model_IN_reset_e;

        /* Entry 'reset': '<S26>:3' */
        localB->timer_g = 0.0;
      } else if (localB->ACC_Correc_Mot > localB->ContinuousMotorPowerLimit) {
        /* Transition: '<S26>:13' */
        localDW->is_c17_HSC_Model = HSC_Model_IN_timer_f;
        localDW->temporalCounter_i1_d = 0U;

        /* Entry 'timer': '<S26>:5' */
        localDW->currtime_g = (real_T)localDW->temporalCounter_i1_d * 0.0005;
        localDW->orig_c = localB->timer_g;
      } else {
        u0 = localDW->orig_c - (real_T)localDW->temporalCounter_i1_d * 0.0005;
        if (u0 > 0.0) {
          localB->timer_g = u0;
        } else {
          localB->timer_g = 0.0;
        }
      }
      break;

     case HSC_Model_IN_reset_e:
      /* During 'reset': '<S26>:3' */
      if (localB->ACC_Correc_Mot > localB->ContinuousMotorPowerLimit) {
        /* Transition: '<S26>:6' */
        localDW->is_c17_HSC_Model = HSC_Model_IN_timer_f;
        localDW->temporalCounter_i1_d = 0U;

        /* Entry 'timer': '<S26>:5' */
        localDW->currtime_g = (real_T)localDW->temporalCounter_i1_d * 0.0005;
        localDW->orig_c = localB->timer_g;
      } else {
        localB->timer_g = 0.0;
      }
      break;

     default:
      /* During 'timer': '<S26>:5' */
      if (localB->ACC_Correc_Mot < localB->ContinuousMotorPowerLimit) {
        /* Transition: '<S26>:7' */
        localDW->is_c17_HSC_Model = HSC_Model_IN_countdown_k;
        localDW->temporalCounter_i1_d = 0U;

        /* Entry 'countdown': '<S26>:11' */
        localDW->orig_c = localB->timer_g;
      } else {
        localB->timer_g = localDW->currtime_g + localDW->orig_c;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart1' */

  /* InitialCondition: '<S2>/IC2' */
  if (localDW->IC2_FirstOutputTime) {
    localDW->IC2_FirstOutputTime = false;
    localB->IC2 = HSC_Model_P.IC2_Value;
  } else {
    localB->IC2 = localB->ACC_Correc_Mot;
  }

  /* End of InitialCondition: '<S2>/IC2' */

  /* InitialCondition: '<S2>/IC1' */
  if (localDW->IC1_FirstOutputTime) {
    localDW->IC1_FirstOutputTime = false;
    localB->IC1 = HSC_Model_P.IC1_Value;
  } else {
    localB->IC1 = localB->CastToBoolean33;
  }

  /* End of InitialCondition: '<S2>/IC1' */

  /* Lookup_n-D: '<S2>/ContinuousMotorPowerLimit2' */
  localB->ContinuousMotorPowerLimit2 = look1_binlcapw(localB->IC1,
    HSC_Model_P.ContinuousMotorPowerLimit2_bp01Data,
    HSC_Model_P.ContinuousMotorPowerLimit2_tableData, 21U);

  /* Chart: '<S2>/Chart3' */
  if (localDW->temporalCounter_i1_o < MAX_uint32_T) {
    localDW->temporalCounter_i1_o++;
  }

  /* Gateway: Battery_Management_Control_Process/Chart3 */
  /* During: Battery_Management_Control_Process/Chart3 */
  if (localDW->is_active_c20_HSC_Model == 0U) {
    /* Entry: Battery_Management_Control_Process/Chart3 */
    localDW->is_active_c20_HSC_Model = 1U;

    /* Entry Internal: Battery_Management_Control_Process/Chart3 */
    /* Transition: '<S28>:4' */
    localDW->is_c20_HSC_Model = HSC_Model_IN_reset_e;

    /* Entry 'reset': '<S28>:3' */
    localB->timer = 0.0;
  } else {
    switch (localDW->is_c20_HSC_Model) {
     case HSC_Model_IN_countdown_k:
      /* During 'countdown': '<S28>:11' */
      if (localB->timer == 0.0) {
        /* Transition: '<S28>:12' */
        localDW->is_c20_HSC_Model = HSC_Model_IN_reset_e;

        /* Entry 'reset': '<S28>:3' */
        localB->timer = 0.0;
      } else if (localB->IC2 > localB->ContinuousMotorPowerLimit2) {
        /* Transition: '<S28>:13' */
        localDW->is_c20_HSC_Model = HSC_Model_IN_timer_f;
        localDW->temporalCounter_i1_o = 0U;

        /* Entry 'timer': '<S28>:5' */
        localDW->currtime = (real_T)localDW->temporalCounter_i1_o * 0.0005;
        localDW->orig = localB->timer;
      } else {
        u0 = localDW->orig - (real_T)localDW->temporalCounter_i1_o * 0.0005;
        if (u0 > 0.0) {
          localB->timer = u0;
        } else {
          localB->timer = 0.0;
        }
      }
      break;

     case HSC_Model_IN_reset_e:
      /* During 'reset': '<S28>:3' */
      if (localB->IC2 > localB->ContinuousMotorPowerLimit2) {
        /* Transition: '<S28>:6' */
        localDW->is_c20_HSC_Model = HSC_Model_IN_timer_f;
        localDW->temporalCounter_i1_o = 0U;

        /* Entry 'timer': '<S28>:5' */
        localDW->currtime = (real_T)localDW->temporalCounter_i1_o * 0.0005;
        localDW->orig = localB->timer;
      } else {
        localB->timer = 0.0;
      }
      break;

     default:
      /* During 'timer': '<S28>:5' */
      if (localB->IC2 < localB->ContinuousMotorPowerLimit2) {
        /* Transition: '<S28>:7' */
        localDW->is_c20_HSC_Model = HSC_Model_IN_countdown_k;
        localDW->temporalCounter_i1_o = 0U;

        /* Entry 'countdown': '<S28>:11' */
        localDW->orig = localB->timer;
      } else {
        localB->timer = localDW->currtime + localDW->orig;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart3' */

  /* InitialCondition: '<S2>/IC8' */
  if (localDW->IC8_FirstOutputTime) {
    localDW->IC8_FirstOutputTime = false;
    localB->IC8 = HSC_Model_P.IC8_Value;
  } else {
    localB->IC8 = localB->CastToBoolean33;
  }

  /* End of InitialCondition: '<S2>/IC8' */

  /* InitialCondition: '<S2>/IC3' */
  if (localDW->IC3_FirstOutputTime) {
    localDW->IC3_FirstOutputTime = false;
    localB->IC3 = HSC_Model_P.IC3_Value;
  } else {
    localB->IC3 = localB->CastToBoolean33;
  }

  /* End of InitialCondition: '<S2>/IC3' */

  /* InitialCondition: '<S2>/IC7' */
  if (localDW->IC7_FirstOutputTime) {
    localDW->IC7_FirstOutputTime = false;
    localB->IC7 = HSC_Model_P.IC7_Value;
  } else {
    localB->IC7 = localB->CastToBoolean33;
  }

  /* End of InitialCondition: '<S2>/IC7' */

  /* InitialCondition: '<S2>/IC4' */
  if (localDW->IC4_FirstOutputTime) {
    localDW->IC4_FirstOutputTime = false;
    localB->IC4 = HSC_Model_P.IC4_Value;
  } else {
    localB->IC4 = localB->CastToBoolean33;
  }

  /* End of InitialCondition: '<S2>/IC4' */

  /* Product: '<S2>/Product4' */
  localB->Battery_Pwr_Limit_Charge = localB->CurrentLimit *
    localB->CastToBoolean48;

  /* Switch: '<S2>/Switch1' */
  if (localB->timer_g > HSC_Model_P.Switch1_Threshold_d) {
    /* Lookup_n-D: '<S2>/ContinuousMotorPowerLimit1' */
    localB->ContinuousMotorPowerLimit1 = look1_binlcapw(localB->IC8,
      HSC_Model_P.ContinuousMotorPowerLimit1_bp01Data,
      HSC_Model_P.ContinuousMotorPowerLimit1_tableData, 21U);
    localB->Switch1_m = localB->ContinuousMotorPowerLimit1;
  } else {
    /* Lookup_n-D: '<S2>/DiscreteMotorPowerLimit' */
    localB->DiscreteMotorPowerLimit = look1_binlcapw(localB->IC7,
      HSC_Model_P.DiscreteMotorPowerLimit_bp01Data,
      HSC_Model_P.DiscreteMotorPowerLimit_tableData, 21U);
    localB->Switch1_m = localB->DiscreteMotorPowerLimit;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* MinMax: '<S2>/Min' */
  u0 = localB->Battery_Pwr_Limit_Charge;
  u1 = localB->Switch1_m;
  if ((u0 < u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  localB->ChargeLimit = u1;

  /* End of MinMax: '<S2>/Min' */

  /* Gain: '<S2>/Gain1' */
  localB->ChargeLimit_l = HSC_Model_P.Gain1_Gain_o * localB->ChargeLimit;

  /* Product: '<S2>/Product5' */
  localB->Battery_Pwr_Limit_Charge_a = localB->CurrentLimit_f *
    localB->CastToBoolean48;

  /* Switch: '<S2>/Switch3' */
  if (localB->timer > HSC_Model_P.Switch3_Threshold) {
    /* Lookup_n-D: '<S2>/ContinuousMotorPowerLimit3' */
    localB->ContinuousMotorPowerLimit3 = look1_binlcapw(localB->IC3,
      HSC_Model_P.ContinuousMotorPowerLimit3_bp01Data,
      HSC_Model_P.ContinuousMotorPowerLimit3_tableData, 21U);
    localB->Switch3 = localB->ContinuousMotorPowerLimit3;
  } else {
    /* Lookup_n-D: '<S2>/DiscreteMotorPowerLimit1' */
    localB->DiscreteMotorPowerLimit1 = look1_binlcapw(localB->IC4,
      HSC_Model_P.DiscreteMotorPowerLimit1_bp01Data,
      HSC_Model_P.DiscreteMotorPowerLimit1_tableData, 21U);
    localB->Switch3 = localB->DiscreteMotorPowerLimit1;
  }

  /* End of Switch: '<S2>/Switch3' */

  /* MinMax: '<S2>/Min1' */
  u0 = localB->Battery_Pwr_Limit_Charge_a;
  u1 = localB->Switch3;
  if ((u0 < u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  localB->DischargeLimit = u1;

  /* End of MinMax: '<S2>/Min1' */

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   */
  localB->Compare_j1 = (localB->CastToBoolean25 > HSC_Model_P.BPPCheck_const);

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   */
  localB->Compare_j2 = (localB->vmcp_operating_mode !=
                        HSC_Model_P.LaunchModeCheck_const);

  /* Logic: '<S32>/Logical Operator3' */
  localB->LogicalOperator3_d = (localB->Compare_j1 && localB->Compare_j2);

  /* InitialCondition: '<S32>/IC' */
  if (localDW->IC_FirstOutputTime_m) {
    localDW->IC_FirstOutputTime_m = false;
    localB->BPPTrqCancel_h = HSC_Model_P.IC_Value_c;
  } else {
    localB->BPPTrqCancel_h = localB->LogicalOperator3_d;
  }

  /* End of InitialCondition: '<S32>/IC' */

  /* Gain: '<S32>/Gain' */
  localB->BPPTrqCancel = (uint8_T)(localB->BPPTrqCancel_h ? (int32_T)
    HSC_Model_P.Gain_Gain_g : 0);

  /* Memory: '<S3>/Memory2' */
  localB->Memory2 = localDW->Memory2_PreviousInput;

  /* DataTypeConversion: '<S6>/Cast To Boolean34' */
  localB->CastToBoolean34 = *rtu_In_MotorTrqEst;

  /* Logic: '<S69>/Diagnostic Faults' */
  localB->DiagnosticFaults = (localB->LogicalOperator1_a ||
    localB->LogicalOperator1_i || localB->LogicalOperator1_c);

  /* Lookup_n-D: '<S5>/1-D Lookup Table' */
  localB->uDLookupTable = look1_binlcpw(localB->CastToBoolean33,
    HSC_Model_P.motor_speed_bkp_rpm, HSC_Model_P.peak_trq_curve, 32U);

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Constant: '<S94>/Constant'
   */
  localB->Compare_jg = (localB->vmcp_operating_mode ==
                        HSC_Model_P.CheckForLaunchMode_const);

  /* Switch: '<S88>/Switch1' incorporates:
   *  Constant: '<S88>/Load Torque Nm'
   */
  if (localB->Compare_jg) {
    localB->Switch1_i = HSC_Model_P.LoadTorqueNm_Value;
  } else {
    /* Gain: '<S69>/RPM_to_rad//s' */
    localB->RPM_to_rads = HSC_Model_P.RPM_to_rads_Gain * localB->CastToBoolean33;

    /* Saturate: '<S69>/prevents dividing by zero' */
    u0 = localB->RPM_to_rads;
    u1 = HSC_Model_P.preventsdividingbyzero_LowerSat;
    u2 = HSC_Model_P.preventsdividingbyzero_UpperSat;
    if (u0 > u2) {
      localB->preventsdividingbyzero_h = u2;
    } else if (u0 < u1) {
      localB->preventsdividingbyzero_h = u1;
    } else {
      localB->preventsdividingbyzero_h = u0;
    }

    /* End of Saturate: '<S69>/prevents dividing by zero' */

    /* Product: '<S69>/Divide1' */
    localB->Motor_Trq_Req_Raw_Nm = localB->ACC_Correc_Mot /
      localB->preventsdividingbyzero_h;
    localB->Switch1_i = localB->Motor_Trq_Req_Raw_Nm;
  }

  /* End of Switch: '<S88>/Switch1' */

  /* Abs: '<S85>/Abs1' */
  localB->Abs1 = fabs(localB->Switch1_i);

  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Constant: '<S92>/Constant'
   */
  localB->Compare_nu = (localB->Abs1 > HSC_Model_P.CreepTorqueThreshold_Nm_const);

  /* Switch: '<S85>/Switch2' */
  if (localB->Compare_nu) {
    localB->Switch2_a = localB->Switch1_i;
  } else {
    /* Gain: '<S5>/kph to mps' */
    localB->kphtomps_m = HSC_Model_P.kphtomps_Gain * localB->CastToBoolean40;

    /* Lookup_n-D: '<S85>/1-D Lookup Creep Trq_Nm' */
    localB->uDLookupCreepTrq_Nm = look1_binlcapw(localB->kphtomps_m,
      HSC_Model_P.uDLookupCreepTrq_Nm_bp01Data,
      HSC_Model_P.uDLookupCreepTrq_Nm_tableData, 1U);
    localB->Switch2_a = localB->uDLookupCreepTrq_Nm;
  }

  /* End of Switch: '<S85>/Switch2' */

  /* RelationalOperator: '<S87>/LowerRelop1' */
  localB->LowerRelop1_h = (localB->Switch2_a > localB->uDLookupTable);

  /* Gain: '<S5>/Gain1' */
  localB->Gain1 = HSC_Model_P.Gain1_Gain_k * localB->uDLookupTable;

  /* RelationalOperator: '<S87>/UpperRelop' */
  localB->UpperRelop_l = (localB->Switch2_a < localB->Gain1);

  /* Switch: '<S87>/Switch' */
  if (localB->UpperRelop_l) {
    localB->Switch_g = localB->Gain1;
  } else {
    localB->Switch_g = localB->Switch2_a;
  }

  /* End of Switch: '<S87>/Switch' */

  /* Switch: '<S87>/Switch2' */
  if (localB->LowerRelop1_h) {
    localB->Switch2_m = localB->uDLookupTable;
  } else {
    localB->Switch2_m = localB->Switch_g;
  }

  /* End of Switch: '<S87>/Switch2' */

  /* Chart: '<S86>/Chart' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  /* Gateway: Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart */
  /* During: Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart */
  if (localDW->is_active_c22_HSC_Model == 0U) {
    /* Entry: Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart */
    localDW->is_active_c22_HSC_Model = 1U;

    /* Entry Internal: Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart */
    /* Transition: '<S93>:2' */
    localDW->is_c22_HSC_Model = HSC_Model_IN_TorqueEnter;

    /* Entry 'TorqueEnter': '<S93>:1' */
    localB->TorqueOut = localB->Switch2_m;
    localB->TorqueReversed = 0.0;
  } else {
    switch (localDW->is_c22_HSC_Model) {
     case HSC_Model_IN_ForwardTorque:
      /* During 'ForwardTorque': '<S93>:23' */
      if (localB->DeltaTime >= 0.5) {
        /* Transition: '<S93>:25' */
        localB->TorqueReversed = 0.0;
        localDW->is_c22_HSC_Model = HSC_Model_IN_TorquePositive;

        /* Entry 'TorquePositive': '<S93>:3' */
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      } else {
        localB->DeltaTime = (real_T)localDW->temporalCounter_i1 * 0.0005;
        localB->TorqueOut = localB->Switch2_m;
      }
      break;

     case HSC_Model_IN_ReverseTorque:
      /* During 'ReverseTorque': '<S93>:17' */
      if (localB->DeltaTime >= 0.5) {
        /* Transition: '<S93>:20' */
        localB->TorqueReversed = 0.0;
        localDW->is_c22_HSC_Model = HSC_Model_IN_TorqueNegative;

        /* Entry 'TorqueNegative': '<S93>:19' */
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      } else {
        localB->DeltaTime = (real_T)localDW->temporalCounter_i1 * 0.0005;
        localB->TorqueOut = localB->Switch2_m;
      }
      break;

     case HSC_Model_IN_TorqueEnter:
      /* During 'TorqueEnter': '<S93>:1' */
      if (localB->TorqueOut > 0.0) {
        /* Transition: '<S93>:4' */
        localDW->is_c22_HSC_Model = HSC_Model_IN_TorquePositive;

        /* Entry 'TorquePositive': '<S93>:3' */
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      } else if (localB->TorqueOut == 0.0) {
        /* Transition: '<S93>:22' */
        localDW->is_c22_HSC_Model = HSC_Model_IN_TorqueZero;

        /* Entry 'TorqueZero': '<S93>:21' */
        localB->TorqueOut = localB->Switch2_m;
      } else {
        if (localB->TorqueOut < 0.0) {
          /* Transition: '<S93>:32' */
          localDW->is_c22_HSC_Model = HSC_Model_IN_TorqueNegative;

          /* Entry 'TorqueNegative': '<S93>:19' */
          localB->TorqueOut = localB->Switch2_m;
          localB->DeltaTime = 0.0;
        }
      }
      break;

     case HSC_Model_IN_TorqueNegative:
      /* During 'TorqueNegative': '<S93>:19' */
      if (localB->TorqueOut > 0.0) {
        /* Transition: '<S93>:24' */
        localB->TorqueReversed = 1.0;
        localDW->is_c22_HSC_Model = HSC_Model_IN_ForwardTorque;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'ForwardTorque': '<S93>:23' */
        localB->DeltaTime = (real_T)localDW->temporalCounter_i1 * 0.0005;
        localB->TorqueOut = localB->Switch2_m;
      } else {
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      }
      break;

     case HSC_Model_IN_TorquePositive:
      /* During 'TorquePositive': '<S93>:3' */
      if (localB->TorqueOut < 0.0) {
        /* Transition: '<S93>:18' */
        localB->TorqueReversed = 1.0;
        localDW->is_c22_HSC_Model = HSC_Model_IN_ReverseTorque;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'ReverseTorque': '<S93>:17' */
        localB->DeltaTime = (real_T)localDW->temporalCounter_i1 * 0.0005;
        localB->TorqueOut = localB->Switch2_m;
      } else {
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      }
      break;

     default:
      /* During 'TorqueZero': '<S93>:21' */
      if (localB->TorqueOut > 0.0) {
        /* Transition: '<S93>:30' */
        localDW->is_c22_HSC_Model = HSC_Model_IN_TorquePositive;

        /* Entry 'TorquePositive': '<S93>:3' */
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      } else if (localB->TorqueOut < 0.0) {
        /* Transition: '<S93>:31' */
        localDW->is_c22_HSC_Model = HSC_Model_IN_TorqueNegative;

        /* Entry 'TorqueNegative': '<S93>:19' */
        localB->TorqueOut = localB->Switch2_m;
        localB->DeltaTime = 0.0;
      } else {
        localB->TorqueOut = localB->Switch2_m;
      }
      break;
    }
  }

  /* End of Chart: '<S86>/Chart' */

  /* Delay: '<S86>/Delay One Step' */
  localB->DelayOneStep = localDW->DelayOneStep_DSTATE;

  /* Switch: '<S69>/Switch' */
  if (localB->DiagnosticFaults) {
    localB->Switch_eg = 0.0;
  } else {
    /* RelationalOperator: '<S95>/Compare' incorporates:
     *  Constant: '<S95>/Constant'
     */
    localB->Compare_bz = (localB->vmcp_operating_mode ==
                          HSC_Model_P.checksifcruisechargingmode_const);

    /* RelationalOperator: '<S96>/Compare' incorporates:
     *  Constant: '<S96>/Constant'
     */
    localB->Compare_lv = (localB->vmcp_operating_mode ==
                          HSC_Model_P.checksiflowspeedCruiseChargingmode_const);

    /* RelationalOperator: '<S97>/Compare' incorporates:
     *  Constant: '<S97>/Constant'
     */
    localB->Compare_lz = (localB->vmcp_operating_mode ==
                          HSC_Model_P.checksifregenmode_const);

    /* Logic: '<S89>/allows braking torque if in  either cruise changing modes' */
    localB->allowsbrakingtorqueifineithercruisechangingmodes =
      (localB->Compare_lz || localB->Compare_lv || localB->Compare_bz);

    /* RelationalOperator: '<S100>/Compare' incorporates:
     *  Constant: '<S100>/Constant'
     */
    localB->Compare_ni = ((int32_T)localB->CastToBoolean51 > (int32_T)
                          HSC_Model_P.Constant_Value_k);

    /* Switch: '<S86>/Switch' */
    if (localB->TorqueReversed > HSC_Model_P.Switch_Threshold) {
      /* Lookup_n-D: '<S86>/1-D Lookup Table1' */
      localB->uDLookupTable1 = look1_binlxpw(localB->DeltaTime,
        HSC_Model_P.uDLookupTable1_bp01Data, rtP_tandivide, 1000U);

      /* Product: '<S86>/Product2' */
      localB->Product2_i = localB->TorqueOut * localB->uDLookupTable1;
      localB->Switch_oa = localB->Product2_i;
    } else {
      localB->Switch_oa = localB->DelayOneStep;
    }

    /* End of Switch: '<S86>/Switch' */

    /* RelationalOperator: '<S98>/Compare' incorporates:
     *  Constant: '<S98>/Constant'
     */
    localB->Compare_nz = (localB->Switch_oa < HSC_Model_P.Constant_Value_n);

    /* Logic: '<S89>/Logical Operator1' */
    localB->LogicalOperator1_a1 = (localB->Compare_nz && localB->Compare_ni &&
      localB->allowsbrakingtorqueifineithercruisechangingmodes);

    /* RelationalOperator: '<S99>/Compare' incorporates:
     *  Constant: '<S99>/Constant'
     */
    localB->Compare_me = (localB->Switch_oa >= HSC_Model_P.Constant_Value_o);

    /* Logic: '<S89>/OR' */
    localB->OR_n = (localB->Compare_me || localB->LogicalOperator1_a1);

    /* DataTypeConversion: '<S6>/Cast To Boolean50' */
    localB->CastToBoolean50 = (*rtu_In_ICESwitch != 0.0);

    /* RelationalOperator: '<S84>/Compare' incorporates:
     *  Constant: '<S84>/Constant'
     */
    localB->Compare_nw = (localB->CastToBoolean50 !=
                          HSC_Model_P.CompareToConstant_const_p);

    /* RelationalOperator: '<S82>/Compare' incorporates:
     *  Constant: '<S82>/Constant'
     */
    localB->Compare_o5 = (localB->lvrpos ==
                          HSC_Model_P.ChecksforShftLvrPosReverse_const);

    /* RelationalOperator: '<S83>/Compare' incorporates:
     *  Constant: '<S83>/Constant'
     */
    localB->Compare_mq = (localB->lvrpos !=
                          HSC_Model_P.ChecksforShftLvrPosUnknown_const);

    /* RelationalOperator: '<S81>/Compare' incorporates:
     *  Constant: '<S81>/Constant'
     */
    localB->Compare_ib = (localB->lvrpos >= HSC_Model_P.ChecksforDrive_const);

    /* Logic: '<S69>/Logical Operator' */
    localB->LogicalOperator_d = (localB->Compare_ib && localB->Compare_mq);

    /* Logic: '<S69>/Logical Operator1' */
    localB->LogicalOperator1_e = (localB->LogicalOperator_d ||
      localB->Compare_o5);

    /* RelationalOperator: '<S80>/Compare' incorporates:
     *  Constant: '<S80>/Constant'
     */
    localB->Compare_bf = (localB->CastToBoolean30 ==
                          HSC_Model_P.CheckforkeyinRun_const);

    /* RelationalOperator: '<S104>/Compare' incorporates:
     *  Constant: '<S104>/Constant'
     */
    localB->Compare_ns = (localB->CastToBoolean35 <
                          HSC_Model_P.DischargingSOCLimit_const);

    /* RelationalOperator: '<S103>/Compare' incorporates:
     *  Constant: '<S103>/Constant'
     */
    localB->Compare_el = (localB->Switch_oa > HSC_Model_P.Constant_Value_o5);

    /* Logic: '<S91>/Logical Operator1' */
    localB->LogicalOperator1_d1 = (localB->Compare_el && localB->Compare_ns);

    /* RelationalOperator: '<S102>/Compare' incorporates:
     *  Constant: '<S102>/Constant'
     */
    localB->Compare_d = (localB->Switch_oa < HSC_Model_P.Constant_Value_f);

    /* RelationalOperator: '<S101>/Compare' incorporates:
     *  Constant: '<S101>/Constant'
     */
    localB->Compare_fi = (localB->CastToBoolean35 >
                          HSC_Model_P.ChargeSOCLimit_const);

    /* Logic: '<S91>/Logical Operator' */
    localB->LogicalOperator_fc = (localB->Compare_fi && localB->Compare_d);

    /* Logic: '<S91>/Logical Operator2' */
    localB->LogicalOperator2_m = (localB->LogicalOperator_fc ||
      localB->LogicalOperator1_d1);

    /* MultiPortSwitch: '<S91>/Multiport Switch' incorporates:
     *  Constant: '<S91>/SOC Okay'
     */
    if (!localB->LogicalOperator2_m) {
      localB->MultiportSwitch_o = HSC_Model_P.SOCOkay_Value;
    } else {
      localB->MultiportSwitch_o = 0.0;
    }

    /* End of MultiPortSwitch: '<S91>/Multiport Switch' */

    /* Product: '<S69>/Product3' incorporates:
     *  Constant: '<S5>/Motor Enable'
     */
    localB->Product3_f = localB->Switch_oa * HSC_Model_P.MotorEnable_Value *
      localB->MultiportSwitch_o * (real_T)localB->Compare_bf * (real_T)
      localB->LogicalOperator1_e * (real_T)localB->Compare_nw * (real_T)
      localB->OR_n;
    localB->Switch_eg = localB->Product3_f;
  }

  /* End of Switch: '<S69>/Switch' */

  /* RelationalOperator: '<S90>/Compare' incorporates:
   *  Constant: '<S90>/Constant'
   */
  localB->Compare_m2 = (localB->lvrpos == HSC_Model_P.Reverse_const);

  /* Switch: '<S69>/Switch1' */
  if (localB->Compare_m2) {
    /* Gain: '<S69>/Gain' */
    localB->Gain_ha = HSC_Model_P.Gain_Gain_i * localB->Switch_eg;
    localB->motor_trq_demand_Nm = localB->Gain_ha;
  } else {
    localB->motor_trq_demand_Nm = localB->Switch_eg;
  }

  /* End of Switch: '<S69>/Switch1' */

  /* Product: '<S40>/Product2' */
  localB->Product2_e = localB->CastToBoolean34 * localB->motor_trq_demand_Nm;

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   */
  localB->Compare_p = (localB->Product2_e < HSC_Model_P.Constant_Value_b);

  /* Abs: '<S40>/Abs1' */
  localB->Abs1_d = fabs(localB->CastToBoolean34);

  /* Abs: '<S40>/Abs2' */
  localB->Abs2 = fabs(localB->motor_trq_demand_Nm);

  /* Sum: '<S40>/Add' */
  localB->Add = localB->Abs1_d - localB->Abs2;

  /* Abs: '<S40>/Abs3' */
  localB->Abs3 = fabs(localB->Add);

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   */
  localB->Compare_nq = (localB->Abs3 > HSC_Model_P.CompareToConstant_const_m);

  /* Logic: '<S40>/AND' */
  localB->AND_a = (localB->Compare_p && localB->Compare_nq);

  /* DataTypeConversion: '<S40>/Data Type Conversion4' */
  localB->DataTypeConversion4 = localB->AND_a;

  /* Chart: '<S40>/Fault counter1' */
  HSC_Model_Faultcounter1(localB->DataTypeConversion4, localB->CastToBoolean30,
    &localB->sf_Faultcounter1_f, &localDW->sf_Faultcounter1_f);

  /* InitialCondition: '<S40>/IC' */
  if (localDW->IC_FirstOutputTime_d) {
    localDW->IC_FirstOutputTime_d = false;
    localB->IC_d = HSC_Model_P.IC_Value_b;
  } else {
    localB->IC_d = localB->sf_Faultcounter1_f.fail_flag;
  }

  /* End of InitialCondition: '<S40>/IC' */

  /* RelationalOperator: '<S105>/LowerRelop1' */
  localB->LowerRelop1_n = (localB->ACCext.EnginePowerBlock > localB->Product_d);

  /* RelationalOperator: '<S105>/UpperRelop' incorporates:
   *  Constant: '<S70>/Constant'
   */
  localB->UpperRelop_e = (localB->ACCext.EnginePowerBlock <
    HSC_Model_P.Constant_Value_ic);

  /* Switch: '<S105>/Switch' incorporates:
   *  Constant: '<S70>/Constant'
   */
  if (localB->UpperRelop_e) {
    localB->Switch_gm = HSC_Model_P.Constant_Value_ic;
  } else {
    localB->Switch_gm = localB->ACCext.EnginePowerBlock;
  }

  /* End of Switch: '<S105>/Switch' */

  /* Switch: '<S105>/Switch2' */
  if (localB->LowerRelop1_n) {
    localB->Switch2_cx = localB->Product_d;
  } else {
    localB->Switch2_cx = localB->Switch_gm;
  }

  /* End of Switch: '<S105>/Switch2' */

  /* Logic: '<S70>/AND' */
  localB->AND_f = ((localB->CAVPCM_ACCMdActive != 0.0) &&
                   (localB->ACCext.Constant10 != 0.0));

  /* Switch: '<S70>/Switch3' */
  if (localB->AND_f) {
    localB->ACC_Correc_Eng = localB->Switch2_cx;
  } else {
    localB->ACC_Correc_Eng = localB->emcp_p_eng_des_W;
  }

  /* End of Switch: '<S70>/Switch3' */

  /* Gain: '<S5>/kph to mps1' */
  localB->kphtomps1 = HSC_Model_P.kphtomps1_Gain * localB->CastToBoolean40;

  /* Gain: '<S68>/m//s2rad//s' */
  u1 = 1.0 / HSC_Model_P.Re;
  localB->whlspd = u1 * localB->kphtomps1;

  /* Saturate: '<S68>/prevents dividing by zero' */
  u0 = localB->whlspd;
  u1 = HSC_Model_P.preventsdividingbyzero_LowerSat_n;
  u2 = HSC_Model_P.preventsdividingbyzero_UpperSat_a;
  if (u0 > u2) {
    localB->preventsdividingbyzero = u2;
  } else if (u0 < u1) {
    localB->preventsdividingbyzero = u1;
  } else {
    localB->preventsdividingbyzero = u0;
  }

  /* End of Saturate: '<S68>/prevents dividing by zero' */

  /* Product: '<S68>/Divide' */
  localB->Divide_g = localB->ACC_Correc_Eng / localB->preventsdividingbyzero;

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   */
  localB->Compare_ha = (localB->CastToBoolean30 ==
                        HSC_Model_P.CompareToConstant_const_f);

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  localB->Compare_nm = (localB->lvrpos >= HSC_Model_P.ChecksforDrive_const_p);

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  localB->Compare_g = (localB->lvrpos !=
                       HSC_Model_P.ChecksforShftLvrPosUnknown_const_a);

  /* Logic: '<S76>/Logical Operator' */
  localB->LogicalOperator_f = (localB->Compare_nm && localB->Compare_g);

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  localB->Compare_lf = (localB->lvrpos == HSC_Model_P.ChecksforReverse_const);

  /* Logic: '<S76>/Logical Operator1' */
  localB->LogicalOperator1_d = (localB->LogicalOperator_f || localB->Compare_lf);

  /* Product: '<S68>/Product' */
  localB->Product_f = localB->Divide_g * (real_T)localB->Compare_ha * (real_T)
    localB->CastToBoolean26 * (real_T)localB->LogicalOperator1_d;

  /* Switch: '<S68>/Switch2' */
  if (localB->LogicalOperator1_i) {
    localB->Switch2_d = 0.0;
  } else {
    /* MinMax: '<S68>/MinMax1' */
    u0 = localB->Product_f;
    u1 = localB->Switch_i;
    if ((u0 < u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    localB->MinMax1 = u1;

    /* End of MinMax: '<S68>/MinMax1' */
    localB->Switch2_d = localB->MinMax1;
  }

  /* End of Switch: '<S68>/Switch2' */

  /* Saturate: '<S68>/Saturation' */
  u0 = localB->Switch2_d;
  u1 = HSC_Model_P.Saturation_LowerSat_p;
  u2 = HSC_Model_P.Saturation_UpperSat_a;
  if (u0 > u2) {
    localB->Saturation = u2;
  } else if (u0 < u1) {
    localB->Saturation = u1;
  } else {
    localB->Saturation = u0;
  }

  /* End of Saturate: '<S68>/Saturation' */

  /* Sum: '<S5>/Add1' */
  localB->eng_mot = localB->motor_trq_demand_Nm + localB->Saturation;

  /* Sum: '<S5>/Add2' */
  localB->diff = localB->TotDrvrDmdTrq_g - localB->eng_mot;

  /* Sum: '<S5>/Add6' */
  localB->diff_d = localB->TotDrvrDmdTrq_g - localB->Saturation;

  /* Sum: '<S5>/Add' */
  localB->totaloutputpower = localB->ACC_Correc_Eng + localB->ACC_Correc_Mot;

  /* Abs: '<S5>/Abs' */
  localB->Abs = fabs(localB->motor_trq_demand_Nm);

  /* Sum: '<S5>/Add7' */
  localB->diff_ds = localB->TotDrvrDmdTrq_g - localB->Abs;

  /* Abs: '<S5>/Abs1' */
  localB->Abs1_a = fabs(localB->diff);

  /* Switch: '<S68>/Switch1' */
  if (localB->LogicalOperator1_i) {
    rty_Out->EngTrqDmdRaw = 0.0;
  } else {
    rty_Out->EngTrqDmdRaw = localB->Product_f;
  }

  /* End of Switch: '<S68>/Switch1' */

  /* DataTypeConversion: '<S6>/Cast To Double' */
  localB->Tanh_Exponent = *rtu_In_Tanh_Exponent;

  /* Product: '<S86>/Product1' */
  localB->Product1 = localB->Switch2_m * localB->Tanh_Exponent;

  /* Trigonometry: '<S86>/Tanh' */
  localB->Tanh = sinh(localB->Product1);

  /* DataTypeConversion: '<S6>/Cast To Double1' */
  localB->Tanh_multiplier = *rtu_In_Tanh_multiplier;

  /* Product: '<S86>/Product' */
  localB->Product_n = localB->Tanh * localB->Tanh_multiplier;

  /* Abs: '<S86>/Abs' */
  localB->Abs_g = fabs(localB->Product_n);

  /* Gain: '<S69>/Gain19' */
  localB->VehSpdMPH = HSC_Model_P.Gain19_Gain * localB->CastToBoolean40;

  /* Gain: '<S74>/Gain19' */
  localB->VehSpdMPH_g = HSC_Model_P.Gain19_Gain_l * localB->CastToBoolean40;

  /* Chart: '<S74>/APP Hysterisis' */
  /* Gateway: Energy_Management_Control_Process/MoreMotorReq/APP Hysterisis */
  /* During: Energy_Management_Control_Process/MoreMotorReq/APP Hysterisis */
  if (localDW->is_active_c13_HSC_Model == 0U) {
    /* Entry: Energy_Management_Control_Process/MoreMotorReq/APP Hysterisis */
    localDW->is_active_c13_HSC_Model = 1U;

    /* Entry Internal: Energy_Management_Control_Process/MoreMotorReq/APP Hysterisis */
    /* Transition: '<S107>:2' */
    localDW->is_c13_HSC_Model = HSC_Model_IN_SwitchOff;

    /* Entry 'SwitchOff': '<S107>:3' */
    localB->Switch_o1 = 0.0;
  } else if (localDW->is_c13_HSC_Model == 1) {
    /* During 'SwitchOff': '<S107>:3' */
    sf_internal_predicateOutput = ((localB->APP < 40.0) && (localB->APP > 5.0) &&
      (localB->CastToBoolean35 > 50.0) && (localB->VehSpdMPH_g > 2.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S107>:5' */
      localDW->is_c13_HSC_Model = HSC_Model_IN_SwitchOn;

      /* Entry 'SwitchOn': '<S107>:1' */
      localB->Switch_o1 = 1.0;
    } else {
      localB->Switch_o1 = 0.0;
    }
  } else {
    /* During 'SwitchOn': '<S107>:1' */
    if (localB->APP > 45.0) {
      /* Transition: '<S107>:4' */
      localDW->is_c13_HSC_Model = HSC_Model_IN_SwitchOff;

      /* Entry 'SwitchOff': '<S107>:3' */
      localB->Switch_o1 = 0.0;
    } else {
      localB->Switch_o1 = 1.0;
    }
  }

  /* End of Chart: '<S74>/APP Hysterisis' */

  /* Gain: '<S74>/Gain' */
  localB->Gain_hg = HSC_Model_P.Gain_Gain_b * localB->Switch_o1;

  /* DataTypeConversion: '<S74>/Cast To Boolean' */
  rty_Out->ReduceMotSwitch = (localB->Gain_hg != 0.0);

  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S108>/Constant'
   */
  localB->Compare_bp = (localB->CAVPCM_ACCMdActive ==
                        HSC_Model_P.CompareToConstant_const_j);

  /* RelationalOperator: '<S109>/Compare' incorporates:
   *  Constant: '<S109>/Constant'
   */
  localB->Compare_ms = (localB->CAVPCM_ACCMdActive ==
                        HSC_Model_P.CompareToConstant1_const_f);

  /* Logic: '<S74>/OR' */
  localB->OR = (localB->Compare_bp || localB->Compare_ms);

  /* Switch: '<S74>/Switch1' incorporates:
   *  Switch: '<S74>/Switch'
   */
  if (localB->OR) {
    localB->Switch1_h = localB->Product_d;
  } else {
    if (localB->Gain_hg > HSC_Model_P.Switch_Threshold_n) {
      /* Lookup_n-D: '<S74>/1-D Lookup Table' incorporates:
       *  Switch: '<S74>/Switch'
       */
      localB->uDLookupTable_c = look1_binlxpw(localB->VehSpdMPH_g,
        HSC_Model_P.uDLookupTable_bp01Data, HSC_Model_P.uDLookupTable_tableData,
        4U);

      /* Switch: '<S74>/Switch' */
      localB->Switch_je = localB->uDLookupTable_c;
    } else {
      /* Switch: '<S74>/Switch' incorporates:
       *  Constant: '<S74>/Constant'
       */
      localB->Switch_je = HSC_Model_P.Constant_Value_c;
    }

    /* Product: '<S74>/Product' */
    localB->Product_l = localB->Product_d * localB->Switch_je;
    localB->Switch1_h = localB->Product_l;
  }

  /* End of Switch: '<S74>/Switch1' */

  /* DataTypeConversion: '<S6>/Cast To Boolean' */
  localB->dist_is_valid = *rtu_In_dist_is_valid;

  /* DataTypeConversion: '<S6>/Cast To Boolean1' */
  localB->CastToBoolean1 = (*rtu_In_CAVsCrsCntrlSwStOnSwAct != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean11' */
  localB->ACCBrakeTime = *rtu_In_ACCBrakeTime;

  /* DataTypeConversion: '<S6>/Cast To Boolean12' */
  localB->TrafficLightPresent = *rtu_In_TrafficLightPresent;

  /* DataTypeConversion: '<S6>/Cast To Boolean15' */
  localB->grade = *rtu_In_grade;

  /* DataTypeConversion: '<S6>/Cast To Boolean16' */
  localB->CastToBoolean16 = (*rtu_In_DistanceObjValid != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean2' */
  localB->CastToBoolean2 = (*rtu_In_CAVsCrsCntrlStSetSwAct != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean24' */
  localB->CastToBoolean24 = (*rtu_In_APPv != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean29' */
  u0 = rt_roundd_snf(*rtu_In_HdSt);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  localB->CastToBoolean29 = (int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean29' */

  /* DataTypeConversion: '<S6>/Cast To Boolean38' */
  localB->CastToBoolean38 = (*rtu_In_StrWhAngV != 0.0);

  /* DataTypeConversion: '<S6>/Cast To Boolean6' */
  u0 = rt_roundd_snf(*rtu_In_MotorRC);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  localB->CastToBoolean6 = (int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S6>/Cast To Boolean6' */

  /* DataTypeConversion: '<S6>/Cast To Boolean8' */
  localB->DrvIntndAxlTrqMin = *rtu_In_DrvIntndAxlTrqMin;

  /* DataTypeConversion: '<S6>/Cast To Double2' */
  localB->CurrentState = *rtu_In_CurrentState;

  /* DataTypeConversion: '<S6>/Cast To Double3' */
  localB->DistanceToIntersection = *rtu_In_DistanceToIntersection;

  /* DataTypeConversion: '<S6>/Cast To Double4' */
  localB->TimeToIntersection = *rtu_In_TimeToNextState;

  /* DataTypeConversion: '<S6>/Cast To Double5' */
  localB->Decel_Division_Value = *rtu_In_Decel_Division_Value;

  /* DataTypeConversion: '<S7>/Cast To Boolean1' */
  rty_Out->CAVPCM_ACCMdAtv = localB->CAVPCM_ACCAct;

  /* DataTypeConversion: '<S7>/Cast To Boolean2' */
  rty_Out->CAVPCM_ACCMdReq = localB->CAVACCReq;

  /* DataTypeConversion: '<S7>/Cast To Boolean4' */
  rty_Out->protectHV = localB->LogicalOperator1_a;

  /* DataTypeConversion: '<S7>/Cast To Boolean5' */
  rty_Out->MotorCntrlFault = localB->LogicalOperator1_c;

  /* DataTypeConversion: '<S7>/Cast To Boolean6' */
  rty_Out->ZeroPwrTrq = localB->LogicalOperator1_i;

  /* DataTypeConversion: '<S7>/Cast To Boolean7' incorporates:
   *  Constant: '<S3>/Constant'
   */
  rty_Out->MotorTrqDirFault = (HSC_Model_P.Constant_Value_ok != 0.0);

  /* Gain: '<S7>/Gain2' */
  rty_Out->DesEngPwr = HSC_Model_P.Gain2_Gain_p * localB->ACC_Correc_Eng;

  /* Gain: '<S7>/Gain' */
  rty_Out->DesElecPwr = HSC_Model_P.Gain_Gain_f * localB->ACC_Correc_Mot;

  /* Gain: '<S7>/Gain3' */
  rty_Out->PwrPMNoRegen = HSC_Model_P.Gain3_Gain * localB->map;

  /* Gain: '<S7>/Gain1' */
  rty_Out->TotPwrPedalMap = HSC_Model_P.Gain1_Gain_i * localB->emcp_ptot_W;

  /* DataTypeConversion: '<S7>/Cast To Boolean' */
  rty_Out->ControllerSwitch = false;

  /* DataTypeConversion: '<S7>/Cast To Boolean8' */
  rty_Out->GFD = localB->DataTypeConversion3_k;

  /* DataTypeConversion: '<S7>/Cast To Boolean3' */
  rty_Out->Battery_Overheat = (localB->Fault != 0.0);

  /* DataTypeConversion: '<S7>/Cast To Boolean11' */
  rty_Out->Batt_Overheat_Susp = (localB->Fault_g != 0.0);

  /* DataTypeConversion: '<S7>/Cast To Boolean10' */
  rty_Out->BPPCancel = (localB->Memory1_m != 0);

  /* DataTypeConversion: '<S7>/Cast To Boolean9' */
  rty_Out->ZeroPwrTmTrq = localB->LogicalOperator1_i;

  /* DataTypeConversion: '<S7>/Cast To Boolean12' */
  rty_Out->MotorControlFault = localB->LogicalOperator1_c;

  /* DataTypeConversion: '<S7>/Cast To Boolean13' */
  rty_Out->MtrCommFault = false;

  /* DataTypeConversion: '<S7>/Cast To Boolean14' */
  rty_Out->AutoMdSpdLmtStat = (localB->AutoMdSpdLmtStat != 0.0);

  /* DataTypeConversion: '<S7>/Cast To Boolean15' */
  rty_Out->ACCAct370 = (localB->ACCAct370 != 0.0);

  /* DataTypeConversion: '<S7>/Cast To Boolean16' */
  rty_Out->AdapCrsCntVDA = (localB->AdapCrsCntVDA != 0.0);

  /* DataTypeConversion: '<S7>/Cast To Double' */
  rty_Out->ACCDrvrSeltdSpd = localB->ACCDrvrSeltdSpd;

  /* BusCreator: '<S7>/Bus Creator1' incorporates:
   *  Constant: '<S10>/VMUmajorProt'
   *  Constant: '<S10>/VMUminorProt'
   */
  rty_Out->EngAxleTrqDmd = localB->Saturation;
  rty_Out->McuTorqueCommand = localB->motor_trq_demand_Nm;
  rty_Out->HSCbmsEnable = localB->hsc_bms_enable;
  rty_Out->MPDMBMSign = localB->hsc_mpdm_R1_bmsIgn;
  rty_Out->HSCbmsLeakage = localB->hsc_bms_leakage_ena;
  rty_Out->MPDMBMSpwr = localB->hsc_mpdm_R8_bmsPwr;
  rty_Out->HSCBrusaEnable = localB->hsc_brusa_enable;
  rty_Out->HSCbmsMainCclose = localB->hsc_bms_mainc_close;
  rty_Out->MPDMMCUign = localB->hsc_mpdm_R2_mcuIgn;
  rty_Out->VMUCmd1OpRq = localB->VMU_Cmd1_OpReq;
  rty_Out->VMUCmd2OpMd = localB->VMU_Cmd2_OpMdCmd;
  rty_Out->VMUmajorProt = HSC_Model_P.VMUmajorProt_Value;
  rty_Out->VMUminorProt = HSC_Model_P.VMUminorProt_Value;
  rty_Out->MPDMHVpump = localB->hsc_mpdm_HVpump;
  rty_Out->VMU_Kickout = localB->VMU_Kickout;
  rty_Out->vmcp_StartupSt = localB->vmcp_StartupSt;
  rty_Out->CrsCntrlSwStOnSwAct = 0.0;
  rty_Out->CrsCntrlSwStSetSwAct = 0.0;
  rty_Out->VMU_Cmd2_CommandMd = localB->VMU_Cmd2_CommandMd;
  rty_Out->ACCPIDOut = 0.0;
  rty_Out->DistError = 0.0;
  rty_Out->RelDist = 0.0;
  rty_Out->SafeDist = localB->ACCext.DistInfo[1];
  rty_Out->MotorTrqEst = localB->CastToBoolean34;
  rty_Out->TrqDmdPedalMap = localB->TotDrvrDmdTrq_g;
  rty_Out->EBCM_Decel = localB->ACCext.Product2;
  rty_Out->powertraindirectionfault = localB->powerdirectionfault;
  rty_Out->VehicleShiftStateControlfault = localB->IC_e;
  rty_Out->MotorTrqCutFlag = localB->DiagnosticFaults;
  rty_Out->EngTrqCutFlag = localB->LogicalOperator1_i;
  rty_Out->SetSpeedCmd = localB->ACCext.SetSpeedCmd;
  rty_Out->TotalAccelComandBeforeRoadLoad =
    localB->ACCext.TotalAccelCommandBeforeRoadLoad;
  rty_Out->TotalForceAfterRoadLoad = localB->ACCext.TotalForceAfterRoadLoad;
  rty_Out->ACCReqPwr = localB->ACCext.ACC_pwr_ext;
  rty_Out->BattPwrChrgLmt = localB->Memory1;
  rty_Out->BattPwrDischrgLmt = localB->Memory;
  rty_Out->PSOC = localB->Switch2_p;

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   */
  localB->Compare_o0 = (localB->CastToBoolean38 !=
                        HSC_Model_P.CompareToConstant3_const_p);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  localB->DataTypeConversion_g = localB->Compare_o0;

  /* Product: '<S9>/Product2' */
  localB->Product2_a = localB->SteeringWheelAngleFadeOut *
    localB->DataTypeConversion_g;

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   */
  localB->Compare_nj = (localB->vmcp_operating_mode !=
                        HSC_Model_P.CompareToConstant2_const_g);

  /* Update for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    HSC_Model_P.DiscreteTimeIntegrator_gainval * localB->xdotref;

  /* Update for DiscreteIntegrator: '<S19>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE +=
    HSC_Model_P.DiscreteTimeIntegrator1_gainval * localB->VehSpdms;

  /* Update for Memory: '<S3>/Memory1' */
  localDW->Memory1_PreviousInput_l = localB->BPPTrqCancel;

  /* Update for Memory: '<S33>/Memory7' */
  localDW->Memory7_PreviousInput = localB->hsc_bms_leakage_ena;

  /* Update for Memory: '<S2>/Memory' */
  localDW->Memory_PreviousInput = localB->DischargeLimit;

  /* Update for Memory: '<S2>/Memory1' */
  localDW->Memory1_PreviousInput = localB->ChargeLimit_l;

  /* Update for Memory: '<S3>/Memory2' */
  localDW->Memory2_PreviousInput = localB->IC_d;

  /* Update for Delay: '<S86>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = localB->Switch2_m;
}

/* Output and update for referenced model: 'HSC_Model' */
void HSC_ModelTID1(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW)
{
  /* Outputs for Atomic SubSystem: '<S12>/ACC ext' */
  HSC_Model_ACCextTID1(&localB->ACCext, &localDW->ACCext, &HSC_Model_P.ACCext);

  /* End of Outputs for SubSystem: '<S12>/ACC ext' */
}

/* Model initialize function */
void HSC_Model_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, RT_MODEL_HSC_Model_T *
  const HSC_Model_M, B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  HSC_Model_P.Saturation_UpperSat = rtInf;
  HSC_Model_P.Saturation2_UpperSat = rtInf;
  HSC_Model_P.Saturation1_UpperSat_n = rtInf;
  HSC_Model_P.Saturation_UpperSat_a = rtInf;
  HSC_Model_P.ACCext.Saturation1_UpperSat = rtInf;

  /* initialize real-time model */
  (void) memset((void *)HSC_Model_M, 0,
                sizeof(RT_MODEL_HSC_Model_T));

  /* setup the global timing engine */
  HSC_Model_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  HSC_Model_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  HSC_Model_M->timingBridge = (timingBridge);

  /* initialize error status */
  rtmSetErrorStatusPointer(HSC_Model_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_HSC_Model_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_HSC_Model_f_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  {
    HSC_Model_InitializeDataMapInfo(HSC_Model_M, localB, localDW);
  }

  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (NULL)) && (rt_ChildPath != (NULL))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx,
                        &(HSC_Model_M->DataMapInfo.mmi));
    rtwCAPI_SetPath(HSC_Model_M->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex(HSC_Model_M->DataMapInfo.mmi, rt_CSTATEIdx);
  }
}

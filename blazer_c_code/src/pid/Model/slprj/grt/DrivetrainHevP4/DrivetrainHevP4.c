/*
 * Code generation for system model 'DrivetrainHevP4'
 *
 * Model                      : DrivetrainHevP4
 * Model version              : 1.972
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 26 20:33:49 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "DrivetrainHevP4_capi.h"
#include "DrivetrainHevP4.h"
#include "DrivetrainHevP4_private.h"
#include "automldiffopen_JOnsp80G.h"
#include "interp2_mlHznKcA.h"
#include "intrp1d_la_pw.h"
#include "intrp4d_l_pw.h"
#include "look1_binlcpw.h"
#include "look1_binlxpw.h"
#include "plook_binc.h"
#include "plook_bincpa.h"
#include "plook_u32d_binckan.h"
#include "rt_atan2d_snf.h"
#include "rt_powd_snf.h"

/* Named constants for Chart: '<S222>/Clutch' */
#define DrivetrainHevP4_IN_Locked      ((uint8_T)1U)
#define DrivetrainHevP4_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define DrivetrainHevP4_IN_Slipping    ((uint8_T)2U)

P_DrivetrainHevP4_T DrivetrainHevP4_P = {
  2.78,
  0.379,
  8000.0,
  0.0,

  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 },
  2.0,
  0.025,
  0.2,

  { 0.01, 0.011, 0.011, 0.011, 0.011, 0.011, 0.011, 0.011, 0.011, 0.011 },
  0.01,
  0.01,
  0.01,
  10000.0,
  0.15,
  2185.0,

  { 0.001, 4.6890263757733646, 3.3056930424400308, 3.0122586990056872,
    2.4457831325301203, 1.9229528780860636, 1.4457831325301196,
    1.0000000000000004, 0.74747474747474718, 0.61666666666666636 },
  2.0,
  2.0,
  3.8,
  101325.0,
  0.36,
  0.11,
  0.158,
  273.0,

  { 366.15, 367.15 },

  { 20.0, 50.0, 100.0, 150.0 },
  0.383,
  2.0,
  0.0053,
  1.243,
  0.0,
  100.0,
  0.0,
  1.614,
  0.001,
  1.0,
  0.003,

  { 0.003, 0.003, 0.003, 0.003, 0.003, 0.003, 0.003, 0.003, 0.003, 0.003 },
  0.001,
  0.003,
  0.001,
  0.001,
  0.0,
  0.06,
  0.0,

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.6965, 0.8244, 0.8814, 0.8946, 0.696, 0.8242,
    0.8814, 0.8946, 0.6955, 0.8242, 0.8814, 0.8945333333333334, 0.6915,
    0.82739999999999991, 0.8839, 0.8968666666666667, 0.6875, 0.8306,
    0.88650000000000007, 0.89913333333333334, 0.6835, 0.8336, 0.8891,
    0.90140000000000009, 0.6795, 0.8368000000000001, 0.8917, 0.90373333333333339,
    0.6095, 0.8106, 0.8786, 0.89213333333333333, 0.5515, 0.79099999999999993,
    0.8692, 0.88373333333333337, 0.8455, 0.8918, 0.9036, 0.9068, 0.845,
    0.89560000000000006, 0.90960000000000008, 0.91153333333333331, 0.8675,
    0.9092, 0.914, 0.9162, 0.8675, 0.9122, 0.9151, 0.9170666666666667, 0.8685,
    0.9142, 0.9206, 0.92093333333333327, 0.865, 0.9142, 0.9267,
    0.92366666666666675, 0.86, 0.91280000000000006, 0.9256, 0.92740000000000011,
    0.8205, 0.89760000000000006, 0.91799999999999993, 0.92273333333333329, 0.765,
    0.8774, 0.9113, 0.91899999999999993, 0.8455, 0.89379999999999993, 0.9084,
    0.83573333333333333, 0.84149999999999991, 0.89560000000000006, 0.9134,
    0.91386666666666672, 0.8345, 0.8978, 0.917, 0.91686666666666672, 0.8625, 0.9,
    0.9177, 0.92113333333333325, 0.86449999999999994, 0.9116, 0.9189,
    0.92299999999999993, 0.8615, 0.9134, 0.9257, 0.92386666666666672, 0.857,
    0.9124, 0.92790000000000006, 0.92706666666666671, 0.817, 0.8978, 0.922,
    0.92606666666666659, 0.771, 0.88, 0.9153, 0.92253333333333332,
    0.84149999999999991, 0.8908, 0.91150000000000009, 0.917, 0.8375, 0.8944,
    0.9098, 0.9136, 0.849, 0.8936, 0.91170000000000007, 0.91466666666666663,
    0.8445, 0.8986, 0.91299999999999992, 0.91673333333333329,
    0.84000000000000008, 0.902, 0.91260000000000008, 0.91746666666666665,
    0.83100000000000007, 0.9, 0.9155, 0.91793333333333327, 0.8265, 0.8986,
    0.9201, 0.9207333333333334, 0.7905, 0.8859999999999999, 0.91489999999999994,
    0.92273333333333329, 0.74649999999999994, 0.8698, 0.9095,
    0.92006666666666659, 0.7895, 0.8832, 0.91480000000000006, 0.9230666666666667,
    0.77699999999999991, 0.8796, 0.91370000000000007, 0.9242,
    0.79399999999999993, 0.89, 0.9159, 0.92513333333333336, 0.7915, 0.8924,
    0.922, 0.92573333333333341, 0.789, 0.893, 0.92260000000000009,
    0.92953333333333343, 0.808, 0.8978, 0.9235, 0.93166666666666664,
    0.81500000000000006, 0.90560000000000007, 0.92760000000000009,
    0.93513333333333337, 0.8065, 0.8998, 0.92819999999999991,
    0.93706666666666671, 0.75299999999999989, 0.87840000000000007,
    0.91980000000000006, 0.93193333333333328, 0.687, 0.8572, 0.90879999999999994,
    0.92646666666666666, 0.75250000000000006, 0.87120000000000009,
    0.91680000000000006, 0.93446666666666656, 0.775, 0.8992, 0.92489999999999994,
    0.93693333333333328, 0.8195, 0.9112, 0.9342, 0.93973333333333342,
    0.83200000000000007, 0.9164, 0.9396, 0.9412, 0.833, 0.91680000000000006,
    0.93849999999999989, 0.94606666666666661, 0.8115, 0.9098, 0.9369, 0.9464,
    0.754, 0.88359999999999994, 0.92430000000000012, 0.9389333333333334,
    0.65199999999999991, 0.8406, 0.9022, 0.92580000000000007, 0.799, 0.8986,
    0.9328, 0.94353333333333333, 0.792, 0.8914, 0.9278, 0.9386, 0.8105,
    0.89319999999999988, 0.9269, 0.93826666666666669, 0.80199999999999994, 0.903,
    0.9258, 0.9388, 0.80749999999999988, 0.904, 0.9325, 0.93933333333333335,
    0.8145, 0.90319999999999989, 0.9383, 0.94273333333333331,
    0.81400000000000006, 0.9074, 0.9408, 0.9508, 0.788, 0.90060000000000007,
    0.9364, 0.9496, 0.717, 0.8676, 0.92180000000000006, 0.93946666666666656,
    0.819, 0.9064, 0.93870000000000009, 0.94653333333333323, 0.8055,
    0.90460000000000007, 0.9336, 0.944, 0.796, 0.90060000000000007, 0.9333,
    0.9432666666666667, 0.80299999999999994, 0.90579999999999994, 0.9312,
    0.94286666666666674, 0.80049999999999988, 0.904, 0.9316, 0.9422, 0.7895,
    0.9014, 0.93209999999999993, 0.9428, 0.774, 0.895, 0.9312, 0.9446,
    0.67999999999999994, 0.8528, 0.9125, 0.9317333333333333, 0.5405,
    0.79680000000000006, 0.88450000000000006, 0.91399999999999992, 0.7355,
    0.8682, 0.9161, 0.93240000000000012, 0.7115, 0.8626, 0.91150000000000009,
    0.92813333333333337, 0.71449999999999991, 0.865, 0.90689999999999993, 0.9236,
    0.67799999999999994, 0.8532, 0.9012, 0.92140000000000011,
    0.66850000000000009, 0.845, 0.8983, 0.91759999999999986, 0.651, 0.8384,
    0.8951, 0.91799999999999993, 0.62249999999999994, 0.8292, 0.8904,
    0.91386666666666672, 0.493, 0.7718, 0.8609, 0.8976, 0.27199999999999996,
    0.6806, 0.8221, 0.86793333333333333, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.6965,
    0.8244, 0.8814, 0.8946, 0.696, 0.8242, 0.8814, 0.8946, 0.6955, 0.8242,
    0.8814, 0.8945333333333334, 0.6915, 0.82739999999999991, 0.8839,
    0.8968666666666667, 0.6875, 0.8306, 0.88650000000000007, 0.89913333333333334,
    0.6835, 0.8336, 0.8891, 0.90140000000000009, 0.6795, 0.8368000000000001,
    0.8917, 0.90373333333333339, 0.6095, 0.8106, 0.8786, 0.89213333333333333,
    0.5515, 0.79099999999999993, 0.8692, 0.88373333333333337, 0.8455, 0.8918,
    0.9036, 0.9068, 0.845, 0.89560000000000006, 0.90960000000000008,
    0.91153333333333331, 0.8675, 0.9092, 0.914, 0.9162, 0.8675, 0.9122, 0.9151,
    0.9170666666666667, 0.8685, 0.9142, 0.9206, 0.92093333333333327, 0.865,
    0.9142, 0.9267, 0.92366666666666675, 0.86, 0.91280000000000006, 0.9256,
    0.92740000000000011, 0.8205, 0.89760000000000006, 0.91799999999999993,
    0.92273333333333329, 0.765, 0.8774, 0.9113, 0.91899999999999993, 0.8455,
    0.89379999999999993, 0.9084, 0.83573333333333333, 0.84149999999999991,
    0.89560000000000006, 0.9134, 0.91386666666666672, 0.8345, 0.8978, 0.917,
    0.91686666666666672, 0.8625, 0.9, 0.9177, 0.92113333333333325,
    0.86449999999999994, 0.9116, 0.9189, 0.92299999999999993, 0.8615, 0.9134,
    0.9257, 0.92386666666666672, 0.857, 0.9124, 0.92790000000000006,
    0.92706666666666671, 0.817, 0.8978, 0.922, 0.92606666666666659, 0.771, 0.88,
    0.9153, 0.92253333333333332, 0.84149999999999991, 0.8908,
    0.91150000000000009, 0.917, 0.8375, 0.8944, 0.9098, 0.9136, 0.849, 0.8936,
    0.91170000000000007, 0.91466666666666663, 0.8445, 0.8986,
    0.91299999999999992, 0.91673333333333329, 0.84000000000000008, 0.902,
    0.91260000000000008, 0.91746666666666665, 0.83100000000000007, 0.9, 0.9155,
    0.91793333333333327, 0.8265, 0.8986, 0.9201, 0.9207333333333334, 0.7905,
    0.8859999999999999, 0.91489999999999994, 0.92273333333333329,
    0.74649999999999994, 0.8698, 0.9095, 0.92006666666666659, 0.7895, 0.8832,
    0.91480000000000006, 0.9230666666666667, 0.77699999999999991, 0.8796,
    0.91370000000000007, 0.9242, 0.79399999999999993, 0.89, 0.9159,
    0.92513333333333336, 0.7915, 0.8924, 0.922, 0.92573333333333341, 0.789,
    0.893, 0.92260000000000009, 0.92953333333333343, 0.808, 0.8978, 0.9235,
    0.93166666666666664, 0.81500000000000006, 0.90560000000000007,
    0.92760000000000009, 0.93513333333333337, 0.8065, 0.8998,
    0.92819999999999991, 0.93706666666666671, 0.75299999999999989,
    0.87840000000000007, 0.91980000000000006, 0.93193333333333328, 0.687, 0.8572,
    0.90879999999999994, 0.92646666666666666, 0.75250000000000006,
    0.87120000000000009, 0.91680000000000006, 0.93446666666666656, 0.775, 0.8992,
    0.92489999999999994, 0.93693333333333328, 0.8195, 0.9112, 0.9342,
    0.93973333333333342, 0.83200000000000007, 0.9164, 0.9396, 0.9412, 0.833,
    0.91680000000000006, 0.93849999999999989, 0.94606666666666661, 0.8115,
    0.9098, 0.9369, 0.9464, 0.754, 0.88359999999999994, 0.92430000000000012,
    0.9389333333333334, 0.65199999999999991, 0.8406, 0.9022, 0.92580000000000007,
    0.799, 0.8986, 0.9328, 0.94353333333333333, 0.792, 0.8914, 0.9278, 0.9386,
    0.8105, 0.89319999999999988, 0.9269, 0.93826666666666669,
    0.80199999999999994, 0.903, 0.9258, 0.9388, 0.80749999999999988, 0.904,
    0.9325, 0.93933333333333335, 0.8145, 0.90319999999999989, 0.9383,
    0.94273333333333331, 0.81400000000000006, 0.9074, 0.9408, 0.9508, 0.788,
    0.90060000000000007, 0.9364, 0.9496, 0.717, 0.8676, 0.92180000000000006,
    0.93946666666666656, 0.819, 0.9064, 0.93870000000000009, 0.94653333333333323,
    0.8055, 0.90460000000000007, 0.9336, 0.944, 0.796, 0.90060000000000007,
    0.9333, 0.9432666666666667, 0.80299999999999994, 0.90579999999999994, 0.9312,
    0.94286666666666674, 0.80049999999999988, 0.904, 0.9316, 0.9422, 0.7895,
    0.9014, 0.93209999999999993, 0.9428, 0.774, 0.895, 0.9312, 0.9446,
    0.67999999999999994, 0.8528, 0.9125, 0.9317333333333333, 0.5405,
    0.79680000000000006, 0.88450000000000006, 0.91399999999999992, 0.7355,
    0.8682, 0.9161, 0.93240000000000012, 0.7115, 0.8626, 0.91150000000000009,
    0.92813333333333337, 0.71449999999999991, 0.865, 0.90689999999999993, 0.9236,
    0.67799999999999994, 0.8532, 0.9012, 0.92140000000000011,
    0.66850000000000009, 0.845, 0.8983, 0.91759999999999986, 0.651, 0.8384,
    0.8951, 0.91799999999999993, 0.62249999999999994, 0.8292, 0.8904,
    0.91386666666666672, 0.493, 0.7718, 0.8609, 0.8976, 0.27199999999999996,
    0.6806, 0.8221, 0.86793333333333333 },
  9.81,
  0.65,
  5000.0,
  1.5,
  1.5,
  0.35,
  0.4,
  0.4,
  0.45,
  2.0,
  100.0,
  0.0,
  0.0,
  94.247779607693786,
  0.0,
  0.0,
  83.775804095727821,
  0.0,
  0.0,

  { 0.0, 0.05, 0.099, 0.199, 0.299, 0.399, 0.5, 0.599, 0.649, 0.699, 0.749,
    0.799, 0.824, 0.849, 0.874, 0.89, 0.903, 0.909, 0.92, 0.925, 0.93, 0.94,
    0.945, 0.95, 0.955, 0.96, 0.965, 0.97, 0.975, 0.98, 0.985, 0.99, 0.995,
    0.99999999, 1.003, 1.006, 1.009, 1.012, 1.015, 1.02, 1.03, 1.05, 1.1, 1.2,
    1.4, 2.0, 4.0 },
  0.85,
  234400.0,

  { 22.664496600547967, 22.770263553218818, 22.865558530377712,
    22.942003951615064, 22.9304847785519, 22.833095406290617, 22.522077733585224,
    22.384894854378469, 23.083375621026605, 23.928464044842258,
    24.784024444169876, 25.709747079427668, 26.228109867269989,
    26.790454952262561, 27.415631890326932, 27.8554548618295, 30.368728984701331,
    31.593950119601352, 33.999295676797118, 35.188396374690647,
    36.453556393125382, 39.28756043551838, 40.910957274664433,
    42.725231789925957, 44.790257697651334, 47.192120709116196,
    50.059313846024104, 53.593313706474092, 58.13153434105471,
    64.292837119523853, 73.373833740514371, 88.743892627175214,
    123.84449218890741, 1.0471975511965977E+7, 195.12279562686646,
    177.57075021654367, 164.03696260367835, 153.19029856086465,
    144.24504819296979, 122.136436485122, 103.71925982023318, 88.872617316206771,
    71.369583913672642, 56.084391455759807, 42.663067585073421,
    25.641394183106168, 10.742827083119744 },
  0.6,
  0.1,
  0.0875,
  0.0,
  100.0,
  0.0,
  0.0,

  { 1.725, 1.707, 1.689, 1.633, 1.561, 1.474, 1.385, 1.308, 1.267, 1.221, 1.172,
    1.118, 1.089, 1.059, 1.027, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },
  0.0,
  0.0,

  { 0.0, 0.0 },

  { 0.0, 0.0 },
  0.0,
  1.0,
  3.45,
  287.058,
  0.0,
  0.0,

  { -1.0, 1.0 },
  1.0,
  1.0,
  1.0,
  0.0,
  1.0E-6,
  1.0E-6,
  1.0,
  1.0E-6,
  1.0E-6,

  { 52.359877559829883, 78.539816339744831, 104.71975511965977,
    130.89969389957471, 157.07963267948966, 183.25957145940458,
    209.43951023931953, 314.15926535897933, 418.87902047863906 },
  1.0,
  0.0,
  1.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,

  { 52.359877559829883, 78.539816339744831, 104.71975511965977,
    130.89969389957471, 157.07963267948966, 183.25957145940458,
    209.43951023931953, 314.15926535897933, 418.87902047863906 },
  0.0,
  0.0,
  1.0,
  0.0,
  1.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  5000.0,
  -5000.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.15915494309189535,
  0.0,
  2.2204460492503131E-16,
  0.0,
  0.0,
  5000.0,
  -5000.0,
  5000.0,
  -5000.0,
  4.0,
  1.0,
  1.0,
  1.0,
  -1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  2.2204460492503131E-16,
  0.0,
  0.0,
  0.0,
  -1.0,
  0.6,
  0.78539816339744828,
  0.0,
  2.2204460492503131E-16,
  1.0,
  1.375,
  10.0,
  0.01,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  10000.0,
  1.0E+6,

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  2.2204460492503131E-16,
  0.0,
  0.0,
  0.0,
  -1.0,
  0.4,
  0.78539816339744828,
  0.0,
  2.2204460492503131E-16,
  1.0,
  1.375,
  10.0,
  0.01,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  10000.0,
  1.0E+6,

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,

  { 0.0, 0.0 },

  { -1.0, 1.0 },

  { 4.0, 4.0, 4.0 },

  { 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  2.2204460492503131E-16,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  2.2204460492503131E-16,
  6.2831853071795862,
  1.0,
  366.15,
  6.2831853071795862,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  5000.0,
  -5000.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  5000.0,
  -5000.0,
  0.5,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  4.0,
  -98.100000000000009,
  -10.0,
  0.0,
  0.0,
  4.0,
  -98.100000000000009,
  -10.0,
  0.0,
  0.0,
  0.5,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,

  { 3U, 8U, 9U, 1U },

  { 1U, 4U, 36U, 360U },

  { 3U, 8U, 9U, 1U },

  { 1U, 4U, 36U, 360U },
  46U,
  46U,
  false,

  { false, true, false, false, true, true, true, false },
  true,
  false,

  /* Start of '<S249>/Clutch' */
  {
    /* Start of '<S222>/CoreSubsys' */
    {
      /* Start of '<S222>/Clutch' */
      {
        0.0,
        0.0,
        0.0,
        0.0,
        -4.0,
        false,
        false,
        false,

        { false, true, false, false, true, true, true, false }
      }
      /* End of '<S222>/Clutch' */
    }
    /* End of '<S222>/CoreSubsys' */
  }
  ,

  /* End of '<S249>/Clutch' */

  /* Start of '<S211>/Clutch' */
  {
    /* Start of '<S222>/CoreSubsys' */
    {
      /* Start of '<S222>/Clutch' */
      {
        0.0,
        0.0,
        0.0,
        0.0,
        -4.0,
        false,
        false,
        false,

        { false, true, false, false, true, true, true, false }
      }
      /* End of '<S222>/Clutch' */
    }
    /* End of '<S222>/CoreSubsys' */
  }
  ,

  /* End of '<S211>/Clutch' */

  /* Start of '<S47>/Open Differential' */
  {
    1.0
  }
  ,

  /* End of '<S47>/Open Differential' */

  /* Start of '<S19>/Open Differential' */
  {
    1.0
  }
  /* End of '<S19>/Open Differential' */
};

/* Forward declaration for local functions */
static void DrivetrainHevP4_power(const real_T a_data[], const int32_T a_size[2],
  real_T y_data[], int32_T y_size[2]);
static real_T DrivetrainHevP4_automltirekappa(real_T Re, real_T omega, real_T Vx,
  real_T b_VXLOW, real_T b_kappamax);
static real_T DrivetrainHevP4_automltirepurelongFx(real_T kappa, real_T Vx,
  real_T Fz, real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN,
  real_T b_FZMAX, real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX,
  real_T PCX1, real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2,
  real_T PEX3, real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1,
  real_T PHX2, real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3,
  real_T PPX4, real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T
  lam_Kxkappa, real_T lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx);
static real_T DrivetrainHevP4_automltirelongFxMapped(real_T kappa, real_T Fz,
  const real_T kappaFx[3], const real_T FzFx[3], const real_T FxMap[9], real_T
  b_FZMIN, real_T b_FZMAX, real_T lam_mux);
static real_T DrivetrainHevP4_automltirelongMySAE(real_T Fz, real_T omega,
  real_T Vx, real_T press, real_T QSY1, real_T QSY2, real_T QSY3, real_T QSY7,
  real_T QSY8, real_T UNLOADED_RADIUS, real_T b_FZMIN, real_T b_FZMAX, real_T
  PRESMIN, real_T PRESMAX);
static real_T DrivetrainHevP4_automltirelongMyMapped(real_T omega, real_T Fz,
  real_T Vx, const real_T VxMy[3], const real_T FzMy[3], const real_T MyMap[9],
  real_T b_FZMAX);
static real_T DrivetrainHevP4_automltirelongMyISO(real_T Fz, real_T omega,
  real_T Tamb, real_T Fpl, real_T Cr, real_T Kt, real_T Tmeas, real_T Re, real_T
  b_FZMIN, real_T b_FZMAX, real_T TMIN, real_T TMAX);

/* Forward declaration for local functions */
static boolean_T DrivetrainHevP4_detectLockup(real_T Tout, real_T Tfmaxs, real_T
  rtp_br, B_Clutch_DrivetrainHevP4_p_T *localB, DW_Clutch_DrivetrainHevP4_b_T
  *localDW, P_Clutch_DrivetrainHevP4_m_T *localP);
static boolean_T DrivetrainHevP4_detectSlip(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainHevP4_p_T *localB);

/*
 * Output and update for atomic system:
 *    '<S19>/Open Differential'
 *    '<S47>/Open Differential'
 */
void DrivetrainHevP4_OpenDifferential(real_T rtu_u, real_T rtu_u_d, real_T
  rtu_u_i, real_T rtu_bw1, real_T rtu_bd, real_T rtu_bw2, real_T rtu_Ndiff,
  real_T rtu_Jd, real_T rtu_Jw1, real_T rtu_Jw2, const real_T rtu_x[2],
  B_OpenDifferential_DrivetrainHevP4_T *localB,
  P_OpenDifferential_DrivetrainHevP4_T *localP)
{
  real_T a__2[3];

  /* SignalConversion generated from: '<S22>/ SFunction ' */
  localB->TmpSignalConversionAtSFunctionInport1[0] = rtu_u;
  localB->TmpSignalConversionAtSFunctionInport1[1] = rtu_u_d;
  localB->TmpSignalConversionAtSFunctionInport1[2] = rtu_u_i;

  /* MATLAB Function 'Open Differential/Open Differential': '<S22>:1' */
  if (localP->OpenDifferential_shaftSwitchMask == 1.0) {
    /* '<S22>:1:3' */
    /* '<S22>:1:4' */
    automldiffopen_JOnsp80G(localB->TmpSignalConversionAtSFunctionInport1,
      rtu_bw1, rtu_bd, rtu_bw2, rtu_Ndiff, 1.0, rtu_Jd, rtu_Jw1, rtu_Jw2, rtu_x,
      a__2, localB->xdot);

    /* '<S22>:1:4' */
  } else {
    /* '<S22>:1:6' */
    automldiffopen_JOnsp80G(localB->TmpSignalConversionAtSFunctionInport1,
      rtu_bw1, rtu_bd, rtu_bw2, rtu_Ndiff, 0.0, rtu_Jd, rtu_Jw1, rtu_Jw2, rtu_x,
      a__2, localB->xdot);

    /* '<S22>:1:6' */
  }
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static void DrivetrainHevP4_power(const real_T a_data[], const int32_T a_size[2],
  real_T y_data[], int32_T y_size[2])
{
  int8_T b_idx_1;
  b_idx_1 = (int8_T)a_size[1];
  y_size[0] = 1;
  y_size[1] = a_size[1];
  if (0 <= b_idx_1 - 1) {
    y_data[0] = a_data[0] * a_data[0];
  }
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static real_T DrivetrainHevP4_automltirekappa(real_T Re, real_T omega, real_T Vx,
  real_T b_VXLOW, real_T b_kappamax)
{
  real_T Vxpabs;
  real_T Vxpabs_data;
  real_T kappa;
  real_T tmp_data;
  int32_T Vxpabs_size[2];
  int32_T tmp_size[2];
  int32_T b_trueCount;
  Vxpabs = fabs(Vx);
  b_trueCount = 0;
  if (Vxpabs < b_VXLOW) {
    b_trueCount = 1;
  }

  Vxpabs_size[0] = 1;
  Vxpabs_size[1] = b_trueCount;
  if (0 <= b_trueCount - 1) {
    Vxpabs_data = Vxpabs / b_VXLOW;
  }

  DrivetrainHevP4_power(&Vxpabs_data, Vxpabs_size, &tmp_data, tmp_size);
  if (0 <= b_trueCount - 1) {
    Vxpabs_data = 2.0 * b_VXLOW / (3.0 - tmp_data);
  }

  if (Vxpabs < b_VXLOW) {
    Vxpabs = Vxpabs_data;
  }

  kappa = (Re * omega - Vx) / Vxpabs;
  b_trueCount = 0;
  if (kappa < -b_kappamax) {
    b_trueCount = 1;
  }

  if (0 <= b_trueCount - 1) {
    kappa = -b_kappamax;
  }

  if (kappa > b_kappamax) {
    kappa = b_kappamax;
  }

  return kappa;
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static real_T DrivetrainHevP4_automltirepurelongFx(real_T kappa, real_T Vx,
  real_T Fz, real_T b_gamma, real_T LONGVL, real_T FNOMIN, real_T b_FZMIN,
  real_T b_FZMAX, real_T press, real_T NOMPRES, real_T PRESMIN, real_T PRESMAX,
  real_T PCX1, real_T PDX1, real_T PDX2, real_T PDX3, real_T PEX1, real_T PEX2,
  real_T PEX3, real_T PEX4, real_T PKX1, real_T PKX2, real_T PKX3, real_T PHX1,
  real_T PHX2, real_T PVX1, real_T PVX2, real_T PPX1, real_T PPX2, real_T PPX3,
  real_T PPX4, real_T lam_Fzo, real_T lam_muV, real_T lam_mux, real_T
  lam_Kxkappa, real_T lam_Cx, real_T lam_Ex, real_T lam_Hx, real_T lam_Vx)
{
  real_T Cx;
  real_T Fxo;
  real_T Vsx;
  real_T a__1;
  real_T a__1_data;
  real_T b_idx_0;
  real_T dfz;
  real_T dpi;
  real_T f_idx_0;
  real_T g_idx_0;
  real_T h_idx_0;
  real_T kappa_x;
  real_T tmp_data;
  int32_T a__1_size[2];
  int32_T tmp_size[2];
  int32_T trueCount;
  b_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    b_idx_0 = b_FZMIN;
  }

  if (b_idx_0 > b_FZMAX) {
    b_idx_0 = b_FZMAX;
  }

  dpi = press;
  if (press < PRESMIN) {
    dpi = PRESMIN;
  }

  if (dpi > PRESMAX) {
    dpi = PRESMAX;
  }

  dpi = (dpi - NOMPRES) / NOMPRES;
  dfz = (b_idx_0 - FNOMIN * lam_Fzo) / FNOMIN * lam_Fzo;
  kappa_x = (PHX2 * dfz + PHX1) * lam_Hx + kappa;
  Vsx = -fabs(Vx) * kappa;
  Vsx = lam_mux / (sqrt(Vsx * Vsx) * lam_muV / LONGVL + 1.0);
  Cx = PCX1 * lam_Cx;
  f_idx_0 = Cx;
  if (Cx < 0.0) {
    f_idx_0 = 0.0;
  }

  Cx = ((PPX3 * dpi + 1.0) + dpi * dpi * PPX4) * (PDX2 * dfz + PDX1) * (1.0 -
    b_gamma * b_gamma * PDX3) * Vsx * b_idx_0;
  g_idx_0 = Cx;
  if (Cx < 0.0) {
    g_idx_0 = 0.0;
  }

  Cx = ((PEX2 * dfz + PEX1) + dfz * dfz * PEX3) * (1.0 - tanh(10.0 * kappa_x) *
    PEX4) * lam_Ex;
  h_idx_0 = Cx;
  if (Cx > 1.0) {
    h_idx_0 = 1.0;
  }

  Cx = f_idx_0 * g_idx_0;
  a__1 = fabs(Cx);
  trueCount = 0;
  if (a__1 < 0.1) {
    trueCount = 1;
  }

  a__1_size[0] = 1;
  a__1_size[1] = trueCount;
  if (0 <= trueCount - 1) {
    a__1_data = a__1 / 0.1;
  }

  DrivetrainHevP4_power(&a__1_data, a__1_size, &tmp_data, tmp_size);
  if (0 <= trueCount - 1) {
    a__1_data = 0.2 / (3.0 - tmp_data);
  }

  if (a__1 < 0.1) {
    a__1 = a__1_data;
  }

  trueCount = 0;
  if (Cx < 0.0) {
    trueCount = 1;
  }

  trueCount--;
  if (0 <= trueCount) {
    a__1_data = -a__1;
  }

  if (Cx < 0.0) {
    a__1 = a__1_data;
  }

  dpi = (PKX2 * dfz + PKX1) * b_idx_0 * exp(PKX3 * dfz) * ((PPX1 * dpi + 1.0) +
    dpi * dpi * PPX2) * lam_Kxkappa / a__1;
  Fxo = sin(atan(dpi * kappa_x - (dpi * kappa_x - atan(dpi * kappa_x)) * h_idx_0)
            * f_idx_0) * g_idx_0 + (PVX2 * dfz + PVX1) * b_idx_0 * (Vsx * 10.0 /
    (9.0 * Vsx + 1.0)) * lam_Vx;
  return Fxo;
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static real_T DrivetrainHevP4_automltirelongFxMapped(real_T kappa, real_T Fz,
  const real_T kappaFx[3], const real_T FzFx[3], const real_T FxMap[9], real_T
  b_FZMIN, real_T b_FZMAX, real_T lam_mux)
{
  real_T FxMap_0[9];
  real_T Fx;
  real_T b_idx_0;
  int32_T i;
  b_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    b_idx_0 = b_FZMIN;
  }

  if (b_idx_0 > b_FZMAX) {
    b_idx_0 = b_FZMAX;
  }

  for (i = 0; i < 3; i++) {
    FxMap_0[3 * i] = FxMap[i];
    FxMap_0[3 * i + 1] = FxMap[i + 3];
    FxMap_0[3 * i + 2] = FxMap[i + 6];
  }

  Fx = interp2_mlHznKcA(kappaFx, FzFx, FxMap_0, kappa, b_idx_0) * lam_mux;
  return Fx;
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static real_T DrivetrainHevP4_automltirelongMySAE(real_T Fz, real_T omega,
  real_T Vx, real_T press, real_T QSY1, real_T QSY2, real_T QSY3, real_T QSY7,
  real_T QSY8, real_T UNLOADED_RADIUS, real_T b_FZMIN, real_T b_FZMAX, real_T
  PRESMIN, real_T PRESMAX)
{
  real_T My;
  real_T b_idx_0;
  real_T d_idx_0;
  b_idx_0 = press;
  if (press < PRESMIN) {
    b_idx_0 = PRESMIN;
  }

  if (b_idx_0 > PRESMAX) {
    b_idx_0 = PRESMAX;
  }

  d_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    d_idx_0 = b_FZMIN;
  }

  if (d_idx_0 > b_FZMAX) {
    d_idx_0 = b_FZMAX;
  }

  My = ((QSY2 * fabs(Vx) + QSY1) + Vx * Vx * QSY3) * (tanh(omega) *
    UNLOADED_RADIUS) * (rt_powd_snf(d_idx_0, QSY7) * rt_powd_snf(b_idx_0, QSY8));
  return My;
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static real_T DrivetrainHevP4_automltirelongMyMapped(real_T omega, real_T Fz,
  real_T Vx, const real_T VxMy[3], const real_T FzMy[3], const real_T MyMap[9],
  real_T b_FZMAX)
{
  real_T MyMap_0[9];
  real_T My;
  real_T b_idx_0;
  int32_T i;
  b_idx_0 = Fz;
  if (Fz < 0.0) {
    b_idx_0 = 0.0;
  }

  if (b_idx_0 > b_FZMAX) {
    b_idx_0 = b_FZMAX;
  }

  for (i = 0; i < 3; i++) {
    MyMap_0[3 * i] = MyMap[i];
    MyMap_0[3 * i + 1] = MyMap[i + 3];
    MyMap_0[3 * i + 2] = MyMap[i + 6];
  }

  My = tanh(omega) * interp2_mlHznKcA(VxMy, FzMy, MyMap_0, Vx, b_idx_0);
  return My;
}

/* Function for MATLAB Function: '<S207>/Simple Magic Tire' */
static real_T DrivetrainHevP4_automltirelongMyISO(real_T Fz, real_T omega,
  real_T Tamb, real_T Fpl, real_T Cr, real_T Kt, real_T Tmeas, real_T Re, real_T
  b_FZMIN, real_T b_FZMAX, real_T TMIN, real_T TMAX)
{
  real_T b_idx_0;
  real_T d_idx_0;
  b_idx_0 = Tamb;
  if (Tamb < TMIN) {
    b_idx_0 = TMIN;
  }

  if (b_idx_0 > TMAX) {
    b_idx_0 = TMAX;
  }

  d_idx_0 = Fz;
  if (Fz < b_FZMIN) {
    d_idx_0 = b_FZMIN;
  }

  if (d_idx_0 > b_FZMAX) {
    d_idx_0 = b_FZMAX;
  }

  return (d_idx_0 * Cr * 0.001 / ((b_idx_0 - Tmeas) * Kt + 1.0) + Fpl) * (-tanh
    (omega) * Re);
}

/*
 * Output and update for atomic system:
 *    '<S207>/Simple Magic Tire'
 *    '<S245>/Simple Magic Tire'
 */
void DrivetrainHevP4_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz, real_T
  rtu_Omega, real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_d, real_T
  rtu_MagicPeak_e, real_T rtu_MagicPeak_l, real_T rtu_MagicPeak_et, const real_T
  rtu_MagicFxo[34], const real_T rtu_kappaFx[3], const real_T rtu_FzFx[3], const
  real_T rtu_FxMap[9], real_T rtu_RollRes, real_T rtu_RollRes_f, real_T
  rtu_RollRes_h, real_T rtu_RollRes_p, real_T rtu_RollRes_c, real_T
  rtu_RollRes_pv, real_T rtu_RollRes_o, real_T rtu_RollRes_c1, real_T
  rtu_RollRes_py, real_T rtu_RollRes_ob, real_T rtu_RollRes_n, real_T
  rtu_RollRes_cb, real_T rtu_RollRes_b, real_T rtu_RollRes_d, real_T
  rtu_RollRes_br, real_T rtu_RollRes_j, const real_T rtu_VxMy[3], const real_T
  rtu_FzMy[3], const real_T rtu_MyMap[9], real_T rtu_rho, real_T rtu_MagicVert,
  real_T rtu_MagicVert_f, real_T rtu_MagicVert_g, real_T rtu_MagicVert_a, real_T
  rtu_MagicVert_as, real_T rtu_MagicVert_e, real_T rtu_MagicVert_h, real_T
  rtu_MagicVert_n, real_T rtu_MagicVert_l, real_T rtu_MagicVert_d, real_T
  rtu_MagicVert_dm, real_T rtu_MagicVert_dh, real_T rtu_MagicVert_j, real_T
  rtu_MagicVert_o, real_T rtu_MagicVert_i, real_T rtu_MagicVert_ab, real_T
  rtu_MagicVert_nx, real_T rtu_MagicVert_ov, real_T rtu_MagicVert_c, real_T
  rtu_MagicVert_iw, real_T rtu_MagicVert_lx, real_T rtu_MagicVert_fs, real_T
  rtu_MagicVert_m, real_T rtu_FxType, real_T rtu_rollingType, real_T
  rtu_vertType, real_T rtp_FZMAX, real_T rtp_FZMIN, real_T rtp_VXLOW, real_T
  rtp_kappamax, B_SimpleMagicTire_DrivetrainHevP4_T *localB)
{
  real_T Fx;
  real_T FzTire;
  real_T Kappa;
  real_T My;
  real_T Re;
  real_T g_idx_0;

  /* SignalConversion generated from: '<S217>/ SFunction ' */
  localB->TmpSignalConversionAtSFunctionInport5[0] = rtu_MagicPeak;
  localB->TmpSignalConversionAtSFunctionInport5[1] = rtu_MagicPeak_d;
  localB->TmpSignalConversionAtSFunctionInport5[2] = rtu_MagicPeak_e;
  localB->TmpSignalConversionAtSFunctionInport5[3] = rtu_MagicPeak_l;
  localB->TmpSignalConversionAtSFunctionInport5[4] = rtu_MagicPeak_et;

  /* SignalConversion generated from: '<S217>/ SFunction ' */
  localB->TmpSignalConversionAtSFunctionInport10[0] = rtu_RollRes;
  localB->TmpSignalConversionAtSFunctionInport10[1] = rtu_RollRes_f;
  localB->TmpSignalConversionAtSFunctionInport10[2] = rtu_RollRes_h;
  localB->TmpSignalConversionAtSFunctionInport10[3] = rtu_RollRes_p;
  localB->TmpSignalConversionAtSFunctionInport10[4] = rtu_RollRes_c;
  localB->TmpSignalConversionAtSFunctionInport10[5] = rtu_RollRes_pv;
  localB->TmpSignalConversionAtSFunctionInport10[6] = rtu_RollRes_o;
  localB->TmpSignalConversionAtSFunctionInport10[7] = rtu_RollRes_c1;
  localB->TmpSignalConversionAtSFunctionInport10[8] = rtu_RollRes_py;
  localB->TmpSignalConversionAtSFunctionInport10[9] = rtu_RollRes_ob;
  localB->TmpSignalConversionAtSFunctionInport10[10] = rtu_RollRes_n;
  localB->TmpSignalConversionAtSFunctionInport10[11] = rtu_RollRes_cb;
  localB->TmpSignalConversionAtSFunctionInport10[12] = rtu_RollRes_b;
  localB->TmpSignalConversionAtSFunctionInport10[13] = rtu_RollRes_d;
  localB->TmpSignalConversionAtSFunctionInport10[14] = rtu_RollRes_br;
  localB->TmpSignalConversionAtSFunctionInport10[15] = rtu_RollRes_j;

  /* SignalConversion generated from: '<S217>/ SFunction ' */
  localB->TmpSignalConversionAtSFunctionInport15[0] = rtu_RollRes;
  localB->TmpSignalConversionAtSFunctionInport15[1] = rtu_MagicVert;
  localB->TmpSignalConversionAtSFunctionInport15[2] = rtu_MagicVert_f;
  localB->TmpSignalConversionAtSFunctionInport15[3] = rtu_MagicVert_g;
  localB->TmpSignalConversionAtSFunctionInport15[4] = rtu_MagicVert_a;
  localB->TmpSignalConversionAtSFunctionInport15[5] = rtu_MagicVert_as;
  localB->TmpSignalConversionAtSFunctionInport15[6] = rtu_MagicVert_e;
  localB->TmpSignalConversionAtSFunctionInport15[7] = rtu_MagicVert_h;
  localB->TmpSignalConversionAtSFunctionInport15[8] = rtu_MagicVert_n;
  localB->TmpSignalConversionAtSFunctionInport15[9] = rtu_MagicVert_l;
  localB->TmpSignalConversionAtSFunctionInport15[10] = rtu_MagicVert_d;
  localB->TmpSignalConversionAtSFunctionInport15[11] = rtu_MagicVert_dm;
  localB->TmpSignalConversionAtSFunctionInport15[12] = rtu_MagicVert_dh;
  localB->TmpSignalConversionAtSFunctionInport15[13] = rtu_MagicVert_j;
  localB->TmpSignalConversionAtSFunctionInport15[14] = rtu_MagicVert_o;
  localB->TmpSignalConversionAtSFunctionInport15[15] = rtu_MagicVert_i;
  localB->TmpSignalConversionAtSFunctionInport15[16] = rtu_MagicVert_ab;
  localB->TmpSignalConversionAtSFunctionInport15[17] = rtu_MagicVert_nx;
  localB->TmpSignalConversionAtSFunctionInport15[18] = rtu_MagicVert_ov;
  localB->TmpSignalConversionAtSFunctionInport15[19] = rtu_MagicVert_c;
  localB->TmpSignalConversionAtSFunctionInport15[20] = rtu_MagicVert_iw;
  localB->TmpSignalConversionAtSFunctionInport15[21] = rtu_MagicVert_lx;
  localB->TmpSignalConversionAtSFunctionInport15[22] = rtu_MagicVert_fs;
  localB->TmpSignalConversionAtSFunctionInport15[23] = rtu_MagicVert_m;

  /* MATLAB Function 'Longitudinal Wheel/Longitudinal Basic Magic Tire/Simple Magic Tire': '<S217>:1' */
  /* '<S217>:1:36' */
  switch ((int32_T)rtu_vertType) {
   case 0:
    /* '<S217>:1:7' */
    FzTire = rtu_Fz;

    /* '<S217>:1:8' */
    Re = rtu_ReNom;
    break;

   case 1:
    /* '<S217>:1:10' */
    Re = 0.0 * fabs(rtu_Omega) + rtu_rho;
    if (Re < 0.001) {
      Re = 0.001;
    }

    /* '<S217>:1:10' */
    FzTire = (rtNaN);
    break;

   case 2:
    /* '<S217>:1:13' */
    Re = rtu_ReNom;

    /* '<S217>:1:14' */
    FzTire = rtu_Fz;
    break;

   default:
    /* '<S217>:1:16' */
    Re = rtu_ReNom;

    /* '<S217>:1:17' */
    FzTire = rtu_Fz;
    break;
  }

  /* '<S217>:1:19' */
  Kappa = DrivetrainHevP4_automltirekappa(rtu_ReNom, rtu_Omega, rtu_Vx,
    rtp_VXLOW, rtp_kappamax);
  switch ((int32_T)rtu_FxType) {
   case 0:
    /* '<S217>:1:22' */
    Fx = rtu_Fz;
    if (rtu_Fz < rtp_FZMIN) {
      Fx = rtp_FZMIN;
    }

    if (Fx > rtp_FZMAX) {
      Fx = rtp_FZMAX;
    }

    Fx = sin(atan(localB->TmpSignalConversionAtSFunctionInport5[2] * Kappa -
                  (localB->TmpSignalConversionAtSFunctionInport5[2] * Kappa -
                   atan(localB->TmpSignalConversionAtSFunctionInport5[2] * Kappa))
                  * localB->TmpSignalConversionAtSFunctionInport5[3]) *
             localB->TmpSignalConversionAtSFunctionInport5[1]) *
      localB->TmpSignalConversionAtSFunctionInport5[0] * (Fx *
      localB->TmpSignalConversionAtSFunctionInport5[4]);
    break;

   case 2:
    /* '<S217>:1:25' */
    Fx = DrivetrainHevP4_automltirepurelongFx(Kappa, rtu_Vx, rtu_Fz,
      rtu_MagicFxo[0], rtu_MagicFxo[1], rtu_MagicFxo[2], rtp_FZMIN, rtp_FZMAX,
      rtu_MagicFxo[3], rtu_MagicFxo[4], rtu_MagicFxo[5], rtu_MagicFxo[6],
      rtu_MagicFxo[7], rtu_MagicFxo[8], rtu_MagicFxo[9], rtu_MagicFxo[10],
      rtu_MagicFxo[11], rtu_MagicFxo[12], rtu_MagicFxo[13], rtu_MagicFxo[14],
      rtu_MagicFxo[15], rtu_MagicFxo[16], rtu_MagicFxo[17], rtu_MagicFxo[18],
      rtu_MagicFxo[19], rtu_MagicFxo[20], rtu_MagicFxo[21], rtu_MagicFxo[22],
      rtu_MagicFxo[23], rtu_MagicFxo[24], rtu_MagicFxo[25], rtu_MagicFxo[26],
      rtu_MagicFxo[27], rtu_MagicFxo[28], rtu_MagicFxo[29], rtu_MagicFxo[30],
      rtu_MagicFxo[31], rtu_MagicFxo[32], rtu_MagicFxo[33]);
    break;

   case 3:
    /* '<S217>:1:38' */
    Fx = DrivetrainHevP4_automltirelongFxMapped(Kappa, rtu_Fz, rtu_kappaFx,
      rtu_FzFx, rtu_FxMap, rtp_FZMIN, rtp_FZMAX,
      localB->TmpSignalConversionAtSFunctionInport5[4]);
    break;

   default:
    /* '<S217>:1:40' */
    Fx = 0.0;

    /* '<S217>:1:41' */
    Kappa = 0.0;
    break;
  }

  switch ((int32_T)rtu_rollingType) {
   case 0:
    /* '<S217>:1:46' */
    My = 0.0;
    break;

   case 1:
    /* '<S217>:1:48' */
    My = DrivetrainHevP4_automltirelongMySAE(rtu_Fz, rtu_Omega, rtu_Vx,
      localB->TmpSignalConversionAtSFunctionInport10[0],
      localB->TmpSignalConversionAtSFunctionInport10[3],
      localB->TmpSignalConversionAtSFunctionInport10[4],
      localB->TmpSignalConversionAtSFunctionInport10[5],
      localB->TmpSignalConversionAtSFunctionInport10[9],
      localB->TmpSignalConversionAtSFunctionInport10[10], Re, rtp_FZMIN,
      rtp_FZMAX, localB->TmpSignalConversionAtSFunctionInport10[14],
      localB->TmpSignalConversionAtSFunctionInport10[15]);
    break;

   case 2:
    /* '<S217>:1:51' */
    My = localB->TmpSignalConversionAtSFunctionInport10[0];
    if (localB->TmpSignalConversionAtSFunctionInport10[0] <
        localB->TmpSignalConversionAtSFunctionInport10[14]) {
      My = localB->TmpSignalConversionAtSFunctionInport10[14];
    }

    if (My > localB->TmpSignalConversionAtSFunctionInport10[15]) {
      My = localB->TmpSignalConversionAtSFunctionInport10[15];
    }

    g_idx_0 = rtu_Fz;
    if (rtu_Fz < 0.0) {
      g_idx_0 = 0.0;
    }

    if (g_idx_0 > rtp_FZMAX) {
      g_idx_0 = rtp_FZMAX;
    }

    My = ((((localB->TmpSignalConversionAtSFunctionInport10[4] * Fx /
             localB->TmpSignalConversionAtSFunctionInport10[1] +
             localB->TmpSignalConversionAtSFunctionInport10[3]) + fabs(rtu_Vx /
             16.7) * localB->TmpSignalConversionAtSFunctionInport10[5]) +
           rt_powd_snf(rtu_Vx / 16.7, 4.0) *
           localB->TmpSignalConversionAtSFunctionInport10[6]) + (g_idx_0 *
           localB->TmpSignalConversionAtSFunctionInport10[8] /
           localB->TmpSignalConversionAtSFunctionInport10[1] +
           localB->TmpSignalConversionAtSFunctionInport10[7]) *
          (localB->TmpSignalConversionAtSFunctionInport10[11] *
           localB->TmpSignalConversionAtSFunctionInport10[11])) * (tanh
      (rtu_Omega) * g_idx_0 * localB->TmpSignalConversionAtSFunctionInport10[13])
      * (rt_powd_snf(g_idx_0 / localB->TmpSignalConversionAtSFunctionInport10[1],
                     localB->TmpSignalConversionAtSFunctionInport10[9]) *
         rt_powd_snf(My / localB->TmpSignalConversionAtSFunctionInport10[2],
                     localB->TmpSignalConversionAtSFunctionInport10[10])) *
      localB->TmpSignalConversionAtSFunctionInport10[12];
    break;

   case 3:
    /* '<S217>:1:54' */
    My = -DrivetrainHevP4_automltirelongMyMapped(rtu_Omega, rtu_Fz, rtu_Vx,
      rtu_VxMy, rtu_FzMy, rtu_MyMap, rtp_FZMAX);
    break;

   case 4:
    /* '<S217>:1:56' */
    My = -DrivetrainHevP4_automltirelongMyISO(rtu_Fz, rtu_Omega,
      localB->TmpSignalConversionAtSFunctionInport10[0],
      localB->TmpSignalConversionAtSFunctionInport10[3],
      localB->TmpSignalConversionAtSFunctionInport10[4],
      localB->TmpSignalConversionAtSFunctionInport10[5],
      localB->TmpSignalConversionAtSFunctionInport10[6], Re, rtp_FZMIN,
      rtp_FZMAX, localB->TmpSignalConversionAtSFunctionInport10[14],
      localB->TmpSignalConversionAtSFunctionInport10[15]);
    break;

   default:
    /* '<S217>:1:59' */
    My = 0.0;
    break;
  }

  localB->Fx = Fx;
  localB->My = My;
  localB->Kappa = Kappa;
  localB->Re = Re;
  localB->FzTire = FzTire;
}

/* Function for Chart: '<S222>/Clutch' */
static boolean_T DrivetrainHevP4_detectLockup(real_T Tout, real_T Tfmaxs, real_T
  rtp_br, B_Clutch_DrivetrainHevP4_p_T *localB, DW_Clutch_DrivetrainHevP4_b_T
  *localDW, P_Clutch_DrivetrainHevP4_m_T *localP)
{
  int32_T rowIdx;
  boolean_T tmp;

  /* Simulink Function 'detectLockup': '<S227>:63' */
  localB->Tout_o = Tout;
  localB->Tfmaxs_d = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S227>/detectLockup' */
  /* Gain: '<S236>/Output Damping' incorporates:
   *  Constant: '<S230>/Constant'
   */
  localB->OutputDamping_f = rtp_br * localP->Constant_Value;

  /* Sum: '<S236>/Sum2' */
  localB->Sum2 = (0.0 - localB->Tout_o) - localB->OutputDamping_f;

  /* Sum: '<S236>/Sum1' */
  localB->Sum1 = localB->Sum2 + localB->OutputDamping_f;

  /* Abs: '<S233>/Abs' */
  localB->Abs = fabs(localB->Sum1);

  /* RelationalOperator: '<S233>/Relational Operator' */
  localB->RelationalOperator = (localB->Abs >= localB->Tfmaxs_d);

  /* UnaryMinus: '<S237>/Unary Minus' */
  localB->UnaryMinus = -localB->Tout_o;

  /* Abs: '<S238>/Abs' */
  localB->Abs_b = fabs(localB->UnaryMinus);

  /* RelationalOperator: '<S238>/Relational Operator' */
  localB->RelationalOperator_f = (localB->Abs_b <= localB->Tfmaxs_d);

  /* UnitDelay: '<S235>/Unit Delay' */
  localB->UnitDelay = localDW->UnitDelay_DSTATE;

  /* CombinatorialLogic: '<S235>/Combinatorial  Logic' */
  tmp = localB->RelationalOperator_f;
  rowIdx = tmp;
  tmp = localB->RelationalOperator;
  rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + tmp);
  tmp = localB->UnitDelay;
  rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + tmp);

  /* CombinatorialLogic: '<S235>/Combinatorial  Logic' */
  localB->CombinatorialLogic = localP->CombinatorialLogic_table[(uint32_T)rowIdx];

  /* Update for UnitDelay: '<S235>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localB->CombinatorialLogic;

  /* End of Outputs for SubSystem: '<S227>/detectLockup' */
  return localB->CombinatorialLogic;
}

/* Function for Chart: '<S222>/Clutch' */
static boolean_T DrivetrainHevP4_detectSlip(real_T Tout, real_T Tfmaxs,
  B_Clutch_DrivetrainHevP4_p_T *localB)
{
  /* Simulink Function 'detectSlip': '<S227>:65' */
  localB->Tout = Tout;
  localB->Tfmaxs = Tfmaxs;

  /* Outputs for Function Call SubSystem: '<S227>/detectSlip' */
  /* Abs: '<S239>/Abs' */
  localB->Abs_n = fabs(localB->Tout);

  /* RelationalOperator: '<S239>/Relational Operator' */
  localB->RelationalOperator_e = (localB->Abs_n >= localB->Tfmaxs);

  /* End of Outputs for SubSystem: '<S227>/detectSlip' */
  return localB->RelationalOperator_e;
}

/*
 * System initialize for atomic system:
 *    '<S222>/Clutch'
 *    '<S260>/Clutch'
 */
void DrivetrainHevP4_Clutch_Init(real_T rtp_omegao, B_Clutch_DrivetrainHevP4_p_T
  *localB, DW_Clutch_DrivetrainHevP4_b_T *localDW, P_Clutch_DrivetrainHevP4_m_T *
  localP, X_Clutch_DrivetrainHevP4_o_T *localX)
{
  /* Merge: '<S227>/ Merge ' */
  localB->Omega = 0.0;

  /* Merge: '<S227>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* Merge: '<S227>/ Merge 3' */
  localB->Myb = 0.0;

  /* Merge: '<S227>/ Merge 2' */
  localB->ReactionTorque = 0.0;
  localB->Tout = 0.0;
  localB->Tfmaxs = 0.0;
  localB->Tout_o = 0.0;
  localB->Tfmaxs_d = 0.0;

  /* Merge: '<S227>/ Merge ' */
  localB->Omega = 0.0;

  /* Merge: '<S227>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* Merge: '<S227>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* Merge: '<S227>/ Merge 3' */
  localB->Myb = 0.0;
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = DrivetrainHevP4_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for Merge: '<S227>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge 2' */
  localB->ReactionTorque = 0.0;

  /* SystemInitialize for Function Call SubSystem: '<S227>/detectSlip' */
  /* SystemInitialize for Abs: '<S239>/Abs' */
  localB->Abs_n = 0.0;

  /* SystemInitialize for RelationalOperator: '<S239>/Relational Operator' incorporates:
   *  Outport: '<S231>/yn'
   */
  localB->RelationalOperator_e = localP->yn_Y0;

  /* End of SystemInitialize for SubSystem: '<S227>/detectSlip' */

  /* SystemInitialize for Function Call SubSystem: '<S227>/detectLockup' */
  /* SystemInitialize for Gain: '<S236>/Output Damping' */
  localB->OutputDamping_f = 0.0;

  /* SystemInitialize for Sum: '<S236>/Sum2' */
  localB->Sum2 = 0.0;

  /* SystemInitialize for Sum: '<S236>/Sum1' */
  localB->Sum1 = 0.0;

  /* SystemInitialize for Abs: '<S233>/Abs' */
  localB->Abs = 0.0;

  /* SystemInitialize for RelationalOperator: '<S233>/Relational Operator' */
  localB->RelationalOperator = false;

  /* SystemInitialize for UnaryMinus: '<S237>/Unary Minus' */
  localB->UnaryMinus = 0.0;

  /* SystemInitialize for Abs: '<S238>/Abs' */
  localB->Abs_b = 0.0;

  /* SystemInitialize for RelationalOperator: '<S238>/Relational Operator' */
  localB->RelationalOperator_f = false;

  /* SystemInitialize for UnitDelay: '<S235>/Unit Delay' */
  localB->UnitDelay = false;

  /* InitializeConditions for UnitDelay: '<S235>/Unit Delay' */
  localDW->UnitDelay_DSTATE = localP->UnitDelay_InitialCondition;

  /* SystemInitialize for CombinatorialLogic: '<S235>/Combinatorial  Logic' incorporates:
   *  Outport: '<S230>/yn'
   */
  localB->CombinatorialLogic = localP->yn_Y0_l;

  /* End of SystemInitialize for SubSystem: '<S227>/detectLockup' */

  /* SystemInitialize for IfAction SubSystem: '<S227>/Slipping' */
  /* SystemInitialize for Integrator: '<S229>/omega wheel' */
  localB->omegawheel = 0.0;

  /* SystemInitialize for Gain: '<S229>/-4' */
  localB->u = 0.0;

  /* SystemInitialize for Trigonometry: '<S229>/Trigonometric Function' */
  localB->TrigonometricFunction = 0.0;

  /* SystemInitialize for Product: '<S229>/Max Dynamic Friction Torque1' */
  localB->MaxDynamicFrictionTorque1 = 0.0;

  /* SystemInitialize for Gain: '<S229>/Output Damping' */
  localB->OutputDamping = 0.0;

  /* SystemInitialize for Sum: '<S229>/Output Sum' */
  localB->OutputSum = 0.0;

  /* SystemInitialize for Gain: '<S229>/Output Inertia' */
  localB->OutputInertia = 0.0;

  /* InitializeConditions for Integrator: '<S229>/omega wheel' */
  localX->omegaWheel = rtp_omegao;

  /* End of SystemInitialize for SubSystem: '<S227>/Slipping' */
}

/*
 * System reset for atomic system:
 *    '<S222>/Clutch'
 *    '<S260>/Clutch'
 */
void DrivetrainHevP4_Clutch_Reset(B_Clutch_DrivetrainHevP4_p_T *localB,
  DW_Clutch_DrivetrainHevP4_b_T *localDW, X_Clutch_DrivetrainHevP4_o_T *localX)
{
  localDW->is_active_c8_autolibshared = 0U;
  localDW->is_c8_autolibshared = DrivetrainHevP4_IN_NO_ACTIVE_CHILD;
  localX->omegaWheel = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge ' */
  localB->Omega = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge 1' */
  localB->Omegadot = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge 3' */
  localB->Myb = 0.0;

  /* InitializeConditions for Merge: '<S227>/ Merge 2' */
  localB->ReactionTorque = 0.0;
}

/*
 * Outputs for atomic system:
 *    '<S222>/Clutch'
 *    '<S260>/Clutch'
 */
void DrivetrainHevP4_Clutch(RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M,
  real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk, real_T rtp_omegao,
  real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol,
  B_Clutch_DrivetrainHevP4_p_T *localB, DW_Clutch_DrivetrainHevP4_b_T *localDW,
  P_Clutch_DrivetrainHevP4_m_T *localP, X_Clutch_DrivetrainHevP4_o_T *localX)
{
  real_T tmp;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    localDW->lastMajorTime = (*(DrivetrainHevP4_M->timingBridge->
      taskTime[DrivetrainHevP4_M->Timing.mdlref_GlobalTID[0]]));

    /* Chart: '<S222>/Clutch' */
    /* Gateway: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
    /* During: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
    if (localDW->is_active_c8_autolibshared == 0U) {
      /* Entry: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
      localDW->is_active_c8_autolibshared = 1U;

      /* Entry Internal: Longitudinal Wheel/Wheel Module/Clutch/Clutch */
      /* Transition: '<S227>:18' */
      localX->omegaWheel = rtp_omegao;
      localDW->is_c8_autolibshared = DrivetrainHevP4_IN_Slipping;

      /* Integrator: '<S229>/omega wheel' */
      localB->omegawheel = localX->omegaWheel;

      /* Gain: '<S229>/-4' */
      localB->u = localP->u_Gain * localB->omegawheel;

      /* Trigonometry: '<S229>/Trigonometric Function' */
      localB->TrigonometricFunction = tanh(localB->u);

      /* Product: '<S229>/Max Dynamic Friction Torque1' */
      localB->MaxDynamicFrictionTorque1 = rtu_Tfmaxk *
        localB->TrigonometricFunction;

      /* Gain: '<S229>/Output Damping' */
      localB->OutputDamping = rtp_br * localB->omegawheel;

      /* Merge: '<S227>/ Merge 3' incorporates:
       *  SignalConversion generated from: '<S229>/Myb'
       */
      localB->Myb = localB->OutputDamping;

      /* Merge: '<S227>/ Merge ' incorporates:
       *  SignalConversion generated from: '<S229>/Omega'
       */
      localB->Omega = localB->omegawheel;

      /* Sum: '<S229>/Output Sum' */
      localB->OutputSum = (localB->MaxDynamicFrictionTorque1 - rtu_Tout) -
        localB->OutputDamping;

      /* Gain: '<S229>/Output Inertia' */
      tmp = 1.0 / rtp_Iyy;

      /* Gain: '<S229>/Output Inertia' */
      localB->OutputInertia = tmp * localB->OutputSum;

      /* Merge: '<S227>/ Merge 1' incorporates:
       *  SignalConversion generated from: '<S229>/Omegadot'
       */
      localB->Omegadot = localB->OutputInertia;

      /* Merge: '<S227>/ Merge 2' incorporates:
       *  SignalConversion generated from: '<S229>/ReactionTorque'
       */
      localB->ReactionTorque = localB->OutputSum;
      rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainHevP4_M->solverInfo,
        true);
    } else if (localDW->is_c8_autolibshared == DrivetrainHevP4_IN_Locked) {
      /* During 'Locked': '<S227>:2' */
      if (DrivetrainHevP4_detectSlip(rtu_Tout, rtu_Tfmaxs, localB)) {
        /* Transition: '<S227>:17' */
        localX->omegaWheel = 0.0;
        localDW->is_c8_autolibshared = DrivetrainHevP4_IN_Slipping;

        /* Integrator: '<S229>/omega wheel' */
        localB->omegawheel = localX->omegaWheel;

        /* Gain: '<S229>/-4' */
        localB->u = localP->u_Gain * localB->omegawheel;

        /* Trigonometry: '<S229>/Trigonometric Function' */
        localB->TrigonometricFunction = tanh(localB->u);

        /* Product: '<S229>/Max Dynamic Friction Torque1' */
        localB->MaxDynamicFrictionTorque1 = rtu_Tfmaxk *
          localB->TrigonometricFunction;

        /* Gain: '<S229>/Output Damping' */
        localB->OutputDamping = rtp_br * localB->omegawheel;

        /* Merge: '<S227>/ Merge 3' incorporates:
         *  SignalConversion generated from: '<S229>/Myb'
         */
        localB->Myb = localB->OutputDamping;

        /* Merge: '<S227>/ Merge ' incorporates:
         *  SignalConversion generated from: '<S229>/Omega'
         */
        localB->Omega = localB->omegawheel;

        /* Sum: '<S229>/Output Sum' */
        localB->OutputSum = (localB->MaxDynamicFrictionTorque1 - rtu_Tout) -
          localB->OutputDamping;

        /* Gain: '<S229>/Output Inertia' */
        tmp = 1.0 / rtp_Iyy;

        /* Gain: '<S229>/Output Inertia' */
        localB->OutputInertia = tmp * localB->OutputSum;

        /* Merge: '<S227>/ Merge 1' incorporates:
         *  SignalConversion generated from: '<S229>/Omegadot'
         */
        localB->Omegadot = localB->OutputInertia;

        /* Merge: '<S227>/ Merge 2' incorporates:
         *  SignalConversion generated from: '<S229>/ReactionTorque'
         */
        localB->ReactionTorque = localB->OutputSum;
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      /* During 'Slipping': '<S227>:62' */
    } else if (DrivetrainHevP4_detectLockup(rtu_Tout, rtu_Tfmaxs, rtp_br, localB,
                localDW, localP) && (fabs(localB->Omega) <= rtp_OmegaTol)) {
      /* Transition: '<S227>:16' */
      localDW->is_c8_autolibshared = DrivetrainHevP4_IN_Locked;

      /* Merge: '<S227>/ Merge 2' incorporates:
       *  UnaryMinus: '<S228>/Unary Minus'
       */
      localB->ReactionTorque = -rtu_Tout;
      if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
        /* Merge: '<S227>/ Merge ' incorporates:
         *  Constant: '<S228>/locked'
         *  SignalConversion generated from: '<S228>/Omega'
         */
        localB->Omega = localP->locked_Value;

        /* Merge: '<S227>/ Merge 1' incorporates:
         *  Constant: '<S228>/locked1'
         *  SignalConversion generated from: '<S228>/Omegadot'
         */
        localB->Omegadot = localP->locked1_Value;

        /* Merge: '<S227>/ Merge 3' incorporates:
         *  Constant: '<S228>/locked2'
         *  SignalConversion generated from: '<S228>/Myb'
         */
        localB->Myb = localP->locked2_Value;
      }

      rtsiSetBlockStateForSolverChangedAtMajorStep(DrivetrainHevP4_M->solverInfo,
        true);
    }

    /* End of Chart: '<S222>/Clutch' */
  }

  if (localDW->is_c8_autolibshared == DrivetrainHevP4_IN_Locked) {
    /* Merge: '<S227>/ Merge 2' incorporates:
     *  UnaryMinus: '<S228>/Unary Minus'
     */
    /* During 'Locked': '<S227>:2' */
    localB->ReactionTorque = -rtu_Tout;
    if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
      /* Merge: '<S227>/ Merge ' incorporates:
       *  Constant: '<S228>/locked'
       *  SignalConversion generated from: '<S228>/Omega'
       */
      localB->Omega = localP->locked_Value;

      /* Merge: '<S227>/ Merge 1' incorporates:
       *  Constant: '<S228>/locked1'
       *  SignalConversion generated from: '<S228>/Omegadot'
       */
      localB->Omegadot = localP->locked1_Value;

      /* Merge: '<S227>/ Merge 3' incorporates:
       *  Constant: '<S228>/locked2'
       *  SignalConversion generated from: '<S228>/Myb'
       */
      localB->Myb = localP->locked2_Value;
    }
  } else {
    /* Integrator: '<S229>/omega wheel' */
    /* During 'Slipping': '<S227>:62' */
    localB->omegawheel = localX->omegaWheel;

    /* Gain: '<S229>/-4' */
    localB->u = localP->u_Gain * localB->omegawheel;

    /* Trigonometry: '<S229>/Trigonometric Function' */
    localB->TrigonometricFunction = tanh(localB->u);

    /* Product: '<S229>/Max Dynamic Friction Torque1' */
    localB->MaxDynamicFrictionTorque1 = rtu_Tfmaxk *
      localB->TrigonometricFunction;

    /* Gain: '<S229>/Output Damping' */
    localB->OutputDamping = rtp_br * localB->omegawheel;

    /* Merge: '<S227>/ Merge 3' incorporates:
     *  SignalConversion generated from: '<S229>/Myb'
     */
    localB->Myb = localB->OutputDamping;

    /* Merge: '<S227>/ Merge ' incorporates:
     *  SignalConversion generated from: '<S229>/Omega'
     */
    localB->Omega = localB->omegawheel;

    /* Sum: '<S229>/Output Sum' */
    localB->OutputSum = (localB->MaxDynamicFrictionTorque1 - rtu_Tout) -
      localB->OutputDamping;

    /* Gain: '<S229>/Output Inertia' */
    tmp = 1.0 / rtp_Iyy;

    /* Gain: '<S229>/Output Inertia' */
    localB->OutputInertia = tmp * localB->OutputSum;

    /* Merge: '<S227>/ Merge 1' incorporates:
     *  SignalConversion generated from: '<S229>/Omegadot'
     */
    localB->Omegadot = localB->OutputInertia;

    /* Merge: '<S227>/ Merge 2' incorporates:
     *  SignalConversion generated from: '<S229>/ReactionTorque'
     */
    localB->ReactionTorque = localB->OutputSum;
  }
}

/*
 * Derivatives for atomic system:
 *    '<S222>/Clutch'
 *    '<S260>/Clutch'
 */
void DrivetrainHevP4_Clutch_Deriv(B_Clutch_DrivetrainHevP4_p_T *localB,
  DW_Clutch_DrivetrainHevP4_b_T *localDW, XDot_Clutch_DrivetrainHevP4_f_T
  *localXdot)
{
  localXdot->omegaWheel = 0.0;
  if (localDW->is_c8_autolibshared == 2) {
    /* Derivatives for Integrator: '<S229>/omega wheel' */
    localXdot->omegaWheel = localB->OutputInertia;
  }
}

/*
 * System initialize for iterator system:
 *    '<S211>/Clutch'
 *    '<S249>/Clutch'
 */
void DrivetrainHevP4_Clutch_b_Init(int32_T NumIters, real_T rtp_omegao,
  B_Clutch_DrivetrainHevP4_T localB[1], DW_Clutch_DrivetrainHevP4_T localDW[1],
  P_Clutch_DrivetrainHevP4_T *localP, X_Clutch_DrivetrainHevP4_T localX[1])
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  for (ForEach_itr = 0; ForEach_itr < NumIters; ForEach_itr++) {
    /* SystemInitialize for Chart: '<S222>/Clutch' */
    DrivetrainHevP4_Clutch_Init(rtp_omegao, &localB[ForEach_itr].
      CoreSubsys.sf_Clutch, &localDW[ForEach_itr].CoreSubsys.sf_Clutch,
      &localP->CoreSubsys.sf_Clutch, &localX[ForEach_itr].CoreSubsys.sf_Clutch);
  }
}

/*
 * System reset for iterator system:
 *    '<S211>/Clutch'
 *    '<S249>/Clutch'
 */
void DrivetrainHevP4_Clutch_o_Reset(int32_T NumIters, B_Clutch_DrivetrainHevP4_T
  localB[1], DW_Clutch_DrivetrainHevP4_T localDW[1], X_Clutch_DrivetrainHevP4_T
  localX[1])
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  for (ForEach_itr = 0; ForEach_itr < NumIters; ForEach_itr++) {
    /* SystemReset for Chart: '<S222>/Clutch' */
    DrivetrainHevP4_Clutch_Reset(&localB[ForEach_itr].CoreSubsys.sf_Clutch,
      &localDW[ForEach_itr].CoreSubsys.sf_Clutch, &localX[ForEach_itr].
      CoreSubsys.sf_Clutch);
  }
}

/*
 * Outputs for iterator system:
 *    '<S211>/Clutch'
 *    '<S249>/Clutch'
 */
void DrivetrainHevP4_Clutch_j(int32_T NumIters, RT_MODEL_DrivetrainHevP4_T *
  const DrivetrainHevP4_M, const real_T *rtu_Tout, const real_T *rtu_Tfmaxs,
  const real_T *rtu_Tfmaxk, real_T *rty_Omega, real_T *rty_Omegadot, real_T
  *rty_Myb, real_T rtp_omegao, real_T rtp_br, real_T rtp_Iyy, real_T rtp_VXLOW,
  real_T rtp_Re, B_Clutch_DrivetrainHevP4_T localB[1],
  DW_Clutch_DrivetrainHevP4_T localDW[1], P_Clutch_DrivetrainHevP4_T *localP,
  X_Clutch_DrivetrainHevP4_T localX[1])
{
  /* local block i/o variables */
  real_T rtb_ImpSel_InsertedFor_Tout_at_outport_0;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_at_outport_0;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_at_outport_0;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  real_T tmp;

  /* Outputs for Iterator SubSystem: '<S211>/Clutch' incorporates:
   *  ForEach: '<S222>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < NumIters; ForEach_itr++) {
    /* ForEachSliceSelector generated from: '<S222>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_outport_0 = rtu_Tout[ForEach_itr];

    /* ForEachSliceSelector generated from: '<S222>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_at_outport_0 = rtu_Tfmaxs[ForEach_itr];

    /* ForEachSliceSelector generated from: '<S222>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_at_outport_0 = rtu_Tfmaxk[ForEach_itr];

    /* Chart: '<S222>/Clutch' */
    tmp = rtp_VXLOW * rtp_Re * 0.0;
    DrivetrainHevP4_Clutch(DrivetrainHevP4_M,
      rtb_ImpSel_InsertedFor_Tout_at_outport_0,
      rtb_ImpSel_InsertedFor_Tfmaxs_at_outport_0,
      rtb_ImpSel_InsertedFor_Tfmaxk_at_outport_0, rtp_omegao, rtp_br, rtp_Iyy,
      tmp, &localB[ForEach_itr].CoreSubsys.sf_Clutch, &localDW[ForEach_itr].
      CoreSubsys.sf_Clutch, &localP->CoreSubsys.sf_Clutch, &localX[ForEach_itr].
      CoreSubsys.sf_Clutch);

    /* ForEachSliceAssignment generated from: '<S222>/Omegadot' */
    rty_Omegadot[ForEach_itr] = localB[ForEach_itr].
      CoreSubsys.sf_Clutch.Omegadot;

    /* ForEachSliceAssignment generated from: '<S222>/Omega' */
    rty_Omega[ForEach_itr] = localB[ForEach_itr].CoreSubsys.sf_Clutch.Omega;

    /* ForEachSliceAssignment generated from: '<S222>/Myb' */
    rty_Myb[ForEach_itr] = localB[ForEach_itr].CoreSubsys.sf_Clutch.Myb;
  }

  /* End of Outputs for SubSystem: '<S211>/Clutch' */
}

/*
 * Derivatives for iterator system:
 *    '<S211>/Clutch'
 *    '<S249>/Clutch'
 */
void DrivetrainHevP4_Clutch_k_Deriv(int32_T NumIters, const real_T *rtu_Tout,
  const real_T *rtu_Tfmaxs, const real_T *rtu_Tfmaxk, B_Clutch_DrivetrainHevP4_T
  localB[1], DW_Clutch_DrivetrainHevP4_T localDW[1],
  XDot_Clutch_DrivetrainHevP4_T localXdot[1])
{
  /* local block i/o variables */
  real_T rtb_ImpSel_InsertedFor_Tout_at_outport_0;
  real_T rtb_ImpSel_InsertedFor_Tfmaxs_at_outport_0;
  real_T rtb_ImpSel_InsertedFor_Tfmaxk_at_outport_0;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  for (ForEach_itr = 0; ForEach_itr < NumIters; ForEach_itr++) {
    /* Derivatives for ForEachSliceSelector generated from: '<S222>/Tout' */
    rtb_ImpSel_InsertedFor_Tout_at_outport_0 = rtu_Tout[ForEach_itr];

    /* Derivatives for ForEachSliceSelector generated from: '<S222>/Tfmaxs' */
    rtb_ImpSel_InsertedFor_Tfmaxs_at_outport_0 = rtu_Tfmaxs[ForEach_itr];

    /* Derivatives for ForEachSliceSelector generated from: '<S222>/Tfmaxk' */
    rtb_ImpSel_InsertedFor_Tfmaxk_at_outport_0 = rtu_Tfmaxk[ForEach_itr];

    /* Derivatives for Chart: '<S222>/Clutch' */
    DrivetrainHevP4_Clutch_Deriv(&localB[ForEach_itr].CoreSubsys.sf_Clutch,
      &localDW[ForEach_itr].CoreSubsys.sf_Clutch, &localXdot[ForEach_itr].
      CoreSubsys.sf_Clutch);
  }
}

/* System initialize for referenced model: 'DrivetrainHevP4' */
void DrivetrainHevP4_Init(RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M,
  real_T *rty_EngSpd, B_DrivetrainHevP4_c_T *localB, DW_DrivetrainHevP4_f_T
  *localDW, X_DrivetrainHevP4_n_T *localX)
{
  /* Start for Constant: '<S11>/domega_o' */
  localB->domega_o = DrivetrainHevP4_P.domega_o;

  /* Start for Constant: '<S39>/domega_o' */
  localB->domega_o_k = DrivetrainHevP4_P.domega_o;

  /* Start for Constant: '<S81>/domega_o' */
  localB->domega_o_c = DrivetrainHevP4_P.domega_o;

  /* Start for Constant: '<S144>/Constant2' */
  localB->Constant2 = DrivetrainHevP4_P.Constant2_Value_m;

  /* Start for InitialCondition: '<S124>/IC' */
  localDW->IC_FirstOutputTime = true;

  /* Start for InitialCondition: '<S129>/IC' */
  localDW->IC_FirstOutputTime_f = true;

  /* Start for InitialCondition: '<S123>/IC' */
  localDW->IC_FirstOutputTime_e = true;

  /* Start for If: '<S121>/If' */
  localDW->If_ActiveSubsystem = -1;

  /* Start for Constant: '<S89>/Constant1' */
  localB->Constant1_d = DrivetrainHevP4_P.IdealFixedGearTransmission_G_o;

  /* Start for Constant: '<S72>/domega_o' */
  localB->domega_o_d = DrivetrainHevP4_P.domega_o;

  /* Start for InitialCondition: '<S96>/IC' */
  localDW->IC_FirstOutputTime_eo = true;

  /* Start for InitialCondition: '<S94>/IC' */
  localDW->IC_FirstOutputTime_k = true;

  /* Start for InitialCondition: '<S92>/IC' */
  localDW->IC_FirstOutputTime_h = true;

  /* Start for If: '<S89>/If' */
  localDW->If_ActiveSubsystem_c = -1;

  /* InitializeConditions for Integrator: '<S164>/Integrator' */
  localX->Integrator_CSTATE = DrivetrainHevP4_P.xdot_o;

  /* InitializeConditions for Integrator: '<S159>/Integrator1' */
  localX->Integrator1_CSTATE = DrivetrainHevP4_P.Integrator1_IC;

  /* InitializeConditions for Memory: '<S12>/Memory' */
  localDW->Memory_PreviousInput = DrivetrainHevP4_P.Memory_InitialCondition;

  /* InitializeConditions for Integrator: '<S12>/Integrator' incorporates:
   *  Integrator: '<S40>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_m = 0.0;
    localX->Integrator_CSTATE_a = 0.0;
  }

  localDW->Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S12>/Integrator' */

  /* InitializeConditions for Integrator: '<S11>/Integrator' */
  localX->Integrator_CSTATE_g = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Integrator: '<S240>/Integrator' */
  localX->Integrator_CSTATE_o = DrivetrainHevP4_P.Integrator_IC_k;

  /* InitializeConditions for Integrator: '<S158>/Integrator1' */
  localX->Integrator1_CSTATE_n = DrivetrainHevP4_P.Integrator1_IC_b;

  /* InitializeConditions for Memory: '<S40>/Memory' */
  localDW->Memory_PreviousInput_c = DrivetrainHevP4_P.Memory_InitialCondition_m;

  /* InitializeConditions for Integrator: '<S40>/Integrator' */
  localDW->Integrator_IWORK_d = 1;

  /* InitializeConditions for Integrator: '<S39>/Integrator' */
  localX->Integrator_CSTATE_p = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Integrator: '<S278>/Integrator' */
  localX->Integrator_CSTATE_h = DrivetrainHevP4_P.Integrator_IC_o;

  /* InitializeConditions for Integrator: '<S172>/Integrator3' */
  localX->Integrator3_CSTATE = DrivetrainHevP4_P.xdot_o;

  /* InitializeConditions for Integrator: '<S161>/Integrator1' */
  localX->Integrator1_CSTATE_h = DrivetrainHevP4_P.x_o;

  /* InitializeConditions for Memory: '<S82>/Memory' */
  localDW->Memory_PreviousInput_h = DrivetrainHevP4_P.Memory_InitialCondition_e;

  /* InitializeConditions for Integrator: '<S82>/Integrator' incorporates:
   *  Integrator: '<S145>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_b = 0.0;
    localX->Integrator_CSTATE_c = 0.0;
  }

  localDW->Integrator_IWORK_k = 1;

  /* End of InitializeConditions for Integrator: '<S82>/Integrator' */

  /* InitializeConditions for Integrator: '<S81>/Integrator' */
  localX->Integrator_CSTATE_e = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Memory: '<S145>/Memory' */
  localDW->Memory_PreviousInput_i = DrivetrainHevP4_P.Memory_InitialCondition_b;

  /* InitializeConditions for Integrator: '<S145>/Integrator' */
  localDW->Integrator_IWORK_i = 1;

  /* InitializeConditions for Memory: '<S140>/Memory' */
  localDW->Memory_PreviousInput_o = DrivetrainHevP4_P.Memory_InitialCondition_n;

  /* InitializeConditions for Memory: '<S91>/Memory' */
  localDW->Memory_PreviousInput_m = DrivetrainHevP4_P.Memory_InitialCondition_c;

  /* InitializeConditions for Integrator: '<S91>/Integrator' incorporates:
   *  Integrator: '<S73>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_ho = 0.0;
    localX->Integrator_CSTATE_mi = 0.0;
  }

  localDW->Integrator_IWORK_a = 1;

  /* End of InitializeConditions for Integrator: '<S91>/Integrator' */

  /* InitializeConditions for Memory: '<S73>/Memory' */
  localDW->Memory_PreviousInput_a = DrivetrainHevP4_P.Memory_InitialCondition_o;

  /* InitializeConditions for Integrator: '<S73>/Integrator' */
  localDW->Integrator_IWORK_k3 = 1;

  /* InitializeConditions for Integrator: '<S72>/Integrator' */
  localX->Integrator_CSTATE_bd = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Integrator: '<S19>/Integrator' incorporates:
   *  Integrator: '<S47>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_f[0] = 0.0;
    localX->Integrator_CSTATE_f[1] = 0.0;
    localX->Integrator_CSTATE_m0[0] = 0.0;
    localX->Integrator_CSTATE_m0[1] = 0.0;
  }

  localDW->Integrator_IWORK_l = 1;

  /* End of InitializeConditions for Integrator: '<S19>/Integrator' */

  /* InitializeConditions for Integrator: '<S47>/Integrator' */
  localDW->Integrator_IWORK_g = 1;

  /* SystemInitialize for Iterator SubSystem: '<S211>/Clutch' */
  DrivetrainHevP4_Clutch_b_Init(1, DrivetrainHevP4_P.omegao, localB->Clutch,
    localDW->Clutch, &DrivetrainHevP4_P.Clutch, localX->Clutch);

  /* End of SystemInitialize for SubSystem: '<S211>/Clutch' */

  /* SystemInitialize for Iterator SubSystem: '<S249>/Clutch' */
  DrivetrainHevP4_Clutch_b_Init(1, DrivetrainHevP4_P.omegao, localB->Clutch_e,
    localDW->Clutch_e, &DrivetrainHevP4_P.Clutch_e, localX->Clutch_e);

  /* End of SystemInitialize for SubSystem: '<S249>/Clutch' */

  /* SystemInitialize for IfAction SubSystem: '<S121>/Unlocked' */
  /* SystemInitialize for IfAction SubSystem: '<S121>/Locked' */
  /* InitializeConditions for Integrator: '<S127>/Locked Shaft Integrator' incorporates:
   *  Integrator: '<S128>/Pump Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->LockedShaftIntegrator_CSTATE = 0.0;
    localX->PumpIntegrator_CSTATE = 0.0;
  }

  /* End of SystemInitialize for SubSystem: '<S121>/Unlocked' */
  localDW->LockedShaftIntegrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S127>/Locked Shaft Integrator' */
  /* End of SystemInitialize for SubSystem: '<S121>/Locked' */

  /* SystemInitialize for IfAction SubSystem: '<S121>/Unlocked' */
  /* InitializeConditions for Integrator: '<S128>/Pump Integrator' */
  localDW->PumpIntegrator_IWORK = 1;

  /* SystemInitialize for IfAction SubSystem: '<S89>/Locked' */
  /* InitializeConditions for Integrator: '<S128>/Turbine Integrator' incorporates:
   *  Integrator: '<S93>/x'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->TurbineIntegrator_CSTATE = 0.0;
    localX->w = 0.0;
  }

  /* End of SystemInitialize for SubSystem: '<S89>/Locked' */
  localDW->TurbineIntegrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S128>/Turbine Integrator' */

  /* SystemInitialize for Enabled SubSystem: '<S148>/LPF' */
  /* InitializeConditions for Integrator: '<S152>/Integrator' */
  localX->Integrator_CSTATE_d = DrivetrainHevP4_P.Integrator_IC;

  /* SystemInitialize for Integrator: '<S152>/Integrator' incorporates:
   *  Outport: '<S151>/Out1'
   */
  localB->Integrator_dg = DrivetrainHevP4_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S148>/LPF' */
  /* End of SystemInitialize for SubSystem: '<S121>/Unlocked' */

  /* SystemInitialize for Merge: '<S121>/Merge1' */
  *rty_EngSpd = DrivetrainHevP4_P.Merge1_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S121>/Merge4' */
  localB->PwrStoredImp = DrivetrainHevP4_P.Merge4_4_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S121>/Merge4' */
  localB->PwrStoredTurb = DrivetrainHevP4_P.Merge4_5_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S121>/Merge4' */
  localB->PwrDampLoss = DrivetrainHevP4_P.Merge4_1_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S121>/Merge4' */
  localB->PwrFluidHeatLoss = DrivetrainHevP4_P.Merge4_2_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S121>/Merge4' */
  localB->PwrCltchLoss = DrivetrainHevP4_P.Merge4_3_InitialOutput;

  /* SystemInitialize for IfAction SubSystem: '<S89>/Locked' */
  /* InitializeConditions for Integrator: '<S93>/x' */
  localDW->x_IWORK = 1;

  /* End of SystemInitialize for SubSystem: '<S89>/Locked' */

  /* SystemInitialize for IfAction SubSystem: '<S89>/Unlocked' */
  /* InitializeConditions for Integrator: '<S95>/xe' incorporates:
   *  Integrator: '<S95>/xv'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->we = 0.0;
    localX->wv = 0.0;
  }

  localDW->xe_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S95>/xe' */

  /* InitializeConditions for Integrator: '<S95>/xv' */
  localDW->xv_IWORK = 1;

  /* End of SystemInitialize for SubSystem: '<S89>/Unlocked' */

  /* SystemInitialize for Merge generated from: '<S89>/Merge2' */
  localB->PwrStoredTrans = DrivetrainHevP4_P.Merge2_1_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S89>/Merge2' */
  localB->PwrDampLoss_h = DrivetrainHevP4_P.Merge2_2_InitialOutput;

  /* SystemInitialize for Merge generated from: '<S89>/Merge2' */
  localB->PwrEffLoss = DrivetrainHevP4_P.Merge2_3_InitialOutput;
}

/* System reset for referenced model: 'DrivetrainHevP4' */
void DrivetrainHevP4_Reset(RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M,
  B_DrivetrainHevP4_c_T *localB, DW_DrivetrainHevP4_f_T *localDW,
  X_DrivetrainHevP4_n_T *localX)
{
  /* InitializeConditions for Integrator: '<S164>/Integrator' */
  localX->Integrator_CSTATE = DrivetrainHevP4_P.xdot_o;

  /* InitializeConditions for Integrator: '<S159>/Integrator1' */
  localX->Integrator1_CSTATE = DrivetrainHevP4_P.Integrator1_IC;

  /* InitializeConditions for Memory: '<S12>/Memory' */
  localDW->Memory_PreviousInput = DrivetrainHevP4_P.Memory_InitialCondition;

  /* InitializeConditions for Integrator: '<S12>/Integrator' incorporates:
   *  Integrator: '<S40>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_m = 0.0;
    localX->Integrator_CSTATE_a = 0.0;
  }

  localDW->Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S12>/Integrator' */

  /* InitializeConditions for Integrator: '<S11>/Integrator' */
  localX->Integrator_CSTATE_g = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Integrator: '<S240>/Integrator' */
  localX->Integrator_CSTATE_o = DrivetrainHevP4_P.Integrator_IC_k;

  /* InitializeConditions for Integrator: '<S158>/Integrator1' */
  localX->Integrator1_CSTATE_n = DrivetrainHevP4_P.Integrator1_IC_b;

  /* InitializeConditions for Memory: '<S40>/Memory' */
  localDW->Memory_PreviousInput_c = DrivetrainHevP4_P.Memory_InitialCondition_m;

  /* InitializeConditions for Integrator: '<S40>/Integrator' */
  localDW->Integrator_IWORK_d = 1;

  /* InitializeConditions for Integrator: '<S39>/Integrator' */
  localX->Integrator_CSTATE_p = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Integrator: '<S278>/Integrator' */
  localX->Integrator_CSTATE_h = DrivetrainHevP4_P.Integrator_IC_o;

  /* InitializeConditions for Integrator: '<S172>/Integrator3' */
  localX->Integrator3_CSTATE = DrivetrainHevP4_P.xdot_o;

  /* InitializeConditions for Integrator: '<S161>/Integrator1' */
  localX->Integrator1_CSTATE_h = DrivetrainHevP4_P.x_o;

  /* InitializeConditions for Memory: '<S82>/Memory' */
  localDW->Memory_PreviousInput_h = DrivetrainHevP4_P.Memory_InitialCondition_e;

  /* InitializeConditions for Integrator: '<S82>/Integrator' incorporates:
   *  Integrator: '<S145>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_b = 0.0;
    localX->Integrator_CSTATE_c = 0.0;
  }

  localDW->Integrator_IWORK_k = 1;

  /* End of InitializeConditions for Integrator: '<S82>/Integrator' */

  /* InitializeConditions for Integrator: '<S81>/Integrator' */
  localX->Integrator_CSTATE_e = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Memory: '<S145>/Memory' */
  localDW->Memory_PreviousInput_i = DrivetrainHevP4_P.Memory_InitialCondition_b;

  /* InitializeConditions for Integrator: '<S145>/Integrator' */
  localDW->Integrator_IWORK_i = 1;

  /* InitializeConditions for Memory: '<S140>/Memory' */
  localDW->Memory_PreviousInput_o = DrivetrainHevP4_P.Memory_InitialCondition_n;

  /* InitializeConditions for Memory: '<S91>/Memory' */
  localDW->Memory_PreviousInput_m = DrivetrainHevP4_P.Memory_InitialCondition_c;

  /* InitializeConditions for Integrator: '<S91>/Integrator' incorporates:
   *  Integrator: '<S73>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_ho = 0.0;
    localX->Integrator_CSTATE_mi = 0.0;
  }

  localDW->Integrator_IWORK_a = 1;

  /* End of InitializeConditions for Integrator: '<S91>/Integrator' */

  /* InitializeConditions for Memory: '<S73>/Memory' */
  localDW->Memory_PreviousInput_a = DrivetrainHevP4_P.Memory_InitialCondition_o;

  /* InitializeConditions for Integrator: '<S73>/Integrator' */
  localDW->Integrator_IWORK_k3 = 1;

  /* InitializeConditions for Integrator: '<S72>/Integrator' */
  localX->Integrator_CSTATE_bd = DrivetrainHevP4_P.theta_o;

  /* InitializeConditions for Integrator: '<S19>/Integrator' incorporates:
   *  Integrator: '<S47>/Integrator'
   */
  if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
    localX->Integrator_CSTATE_f[0] = 0.0;
    localX->Integrator_CSTATE_f[1] = 0.0;
    localX->Integrator_CSTATE_m0[0] = 0.0;
    localX->Integrator_CSTATE_m0[1] = 0.0;
  }

  localDW->Integrator_IWORK_l = 1;

  /* End of InitializeConditions for Integrator: '<S19>/Integrator' */

  /* InitializeConditions for Integrator: '<S47>/Integrator' */
  localDW->Integrator_IWORK_g = 1;

  /* SystemReset for Iterator SubSystem: '<S211>/Clutch' */
  DrivetrainHevP4_Clutch_o_Reset(1, localB->Clutch, localDW->Clutch,
    localX->Clutch);

  /* End of SystemReset for SubSystem: '<S211>/Clutch' */

  /* SystemReset for Iterator SubSystem: '<S249>/Clutch' */
  DrivetrainHevP4_Clutch_o_Reset(1, localB->Clutch_e, localDW->Clutch_e,
    localX->Clutch_e);

  /* End of SystemReset for SubSystem: '<S249>/Clutch' */
}

/* Disable for referenced model: 'DrivetrainHevP4' */
void DrivetrainHevP4_Disable(DW_DrivetrainHevP4_f_T *localDW)
{
  /* Disable for If: '<S121>/If' */
  if (localDW->If_ActiveSubsystem == 1) {
    /* Disable for Enabled SubSystem: '<S148>/LPF' */
    localDW->LPF_MODE = false;

    /* End of Disable for SubSystem: '<S148>/LPF' */
  }

  localDW->If_ActiveSubsystem = -1;

  /* End of Disable for If: '<S121>/If' */

  /* Disable for If: '<S89>/If' */
  localDW->If_ActiveSubsystem_c = -1;
}

/* Outputs for referenced model: 'DrivetrainHevP4' */
void DrivetrainHevP4(RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M, const
                     real_T *rtu_EngTrq, const real_T *rtu_MotTrq, const real_T *
                     rtu_Grade, const real_T *rtu_WindVel, const real_T
                     *rtu_BrkCmd, const real_T *rtu_GearCmd, real_T *rty_VehSpd,
                     real_T *rty_EngSpd, boolean_T *rty_Cltch1State, boolean_T
                     *rty_Cltch2State, real_T *rty_MotSpd, real_T *rty_TransGear,
                     B_DrivetrainHevP4_c_T *localB, DW_DrivetrainHevP4_f_T
                     *localDW, X_DrivetrainHevP4_n_T *localX,
                     ZCE_DrivetrainHevP4_T *localZCE)
{
  real_T tmpForInput[5];
  real_T fractions[4];
  real_T Bias;
  real_T tmp;
  real_T tmp_0;
  real_T u1;
  real_T *tmp_1;
  int32_T i;
  uint32_T bpIndices[4];
  uint32_T bpIndex;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T zcEvent;
  ZCEventType zcEvent_0;

  /* Integrator: '<S164>/Integrator' */
  localB->Integrator = localX->Integrator_CSTATE;

  /* SignalConversion generated from: '<S161>/Vector Concatenate2' */
  localB->VectorConcatenate2[0] = localB->Integrator;

  /* SignalConversion generated from: '<S161>/Vector Concatenate2' */
  localB->VectorConcatenate2[1] = 0.0;

  /* SignalConversion generated from: '<S161>/Vector Concatenate2' */
  localB->VectorConcatenate2[2] = 0.0;

  /* SignalConversion generated from: '<Root>/VehSpd' */
  *rty_VehSpd = localB->VectorConcatenate2[0];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Sum: '<S211>/Add2' incorporates:
     *  Constant: '<S211>/Constant9'
     */
    localB->Add2 = DrivetrainHevP4_P.Re;

    /* Saturate: '<S211>/Saturation' */
    if (localB->Add2 > DrivetrainHevP4_P.Saturation_UpperSat_b) {
      /* Saturate: '<S211>/Saturation' */
      localB->Saturation = DrivetrainHevP4_P.Saturation_UpperSat_b;
    } else if (localB->Add2 < DrivetrainHevP4_P.Saturation_LowerSat_c) {
      /* Saturate: '<S211>/Saturation' */
      localB->Saturation = DrivetrainHevP4_P.Saturation_LowerSat_c;
    } else {
      /* Saturate: '<S211>/Saturation' */
      localB->Saturation = localB->Add2;
    }

    /* End of Saturate: '<S211>/Saturation' */

    /* Memory: '<S12>/Memory' */
    localB->Memory = localDW->Memory_PreviousInput;

    /* Constant: '<S11>/domega_o' */
    localB->domega_o = DrivetrainHevP4_P.domega_o;
  }

  /* Integrator: '<S159>/Integrator1' */
  localB->Integrator1 = localX->Integrator1_CSTATE;

  /* SignalConversion: '<S220>/Signal Copy1' */
  localB->SignalCopy1 = localB->Integrator1;

  /* Integrator: '<S12>/Integrator' */
  zcEvent = rtsiGetIsOkayToUpdateMode(DrivetrainHevP4_M->solverInfo);
  if (zcEvent) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE,
                         (localB->Memory));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent || (localDW->Integrator_IWORK != 0)) {
      localX->Integrator_CSTATE_m = localB->domega_o;
    }
  }

  /* Integrator: '<S12>/Integrator' */
  localB->Integrator_c = localX->Integrator_CSTATE_m;

  /* Gain: '<S11>/Gain2' */
  localB->Gain2 = DrivetrainHevP4_P.b * localB->Integrator_c;

  /* Integrator: '<S11>/Integrator' */
  localB->Integrator_j = localX->Integrator_CSTATE_g;

  /* Gain: '<S11>/Gain1' */
  localB->Gain1 = DrivetrainHevP4_P.k * localB->Integrator_j;

  /* Sum: '<S11>/Subtract1' */
  localB->Subtract1 = localB->Gain2 + localB->Gain1;

  /* Gain: '<S203>/2//NF' */
  Bias = 2.0 / DrivetrainHevP4_P.NF;

  /* Gain: '<S203>/2//NF' */
  localB->uNF = Bias * localB->Subtract1;

  /* Integrator: '<S240>/Integrator' */
  localB->Integrator_a = localX->Integrator_CSTATE_o;

  /* Product: '<S224>/Product1' */
  localB->Product1 = localB->Integrator_a * localB->Saturation;

  /* Sum: '<S211>/Add1' */
  localB->Add1 = localB->uNF - localB->Product1;

  /* Gain: '<S211>/Sign convention' */
  localB->Signconvention = DrivetrainHevP4_P.Signconvention_Gain * localB->Add1;

  /* Gain: '<S203>/Front Bias' */
  localB->FrontBias = DrivetrainHevP4_P.FrontBias_Gain * *rtu_BrkCmd;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Gain: '<S226>/Torque Conversion1' incorporates:
     *  Constant: '<S226>/Disk brake actuator bore'
     */
    localB->TorqueConversion1 = DrivetrainHevP4_P.TorqueConversion1_Gain *
      DrivetrainHevP4_P.disk_abore;
  }

  /* Product: '<S226>/product' incorporates:
   *  Constant: '<S226>/Disk brake actuator bore'
   *  Constant: '<S226>/Number of brake pads'
   */
  localB->product = localB->FrontBias * localB->TorqueConversion1 *
    DrivetrainHevP4_P.disk_abore * DrivetrainHevP4_P.num_pads;

  /* Saturate: '<S226>/Disallow Negative Brake Torque' */
  if (localB->product > DrivetrainHevP4_P.DisallowNegativeBrakeTorque_UpperSat)
  {
    /* Saturate: '<S226>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque =
      DrivetrainHevP4_P.DisallowNegativeBrakeTorque_UpperSat;
  } else if (localB->product <
             DrivetrainHevP4_P.DisallowNegativeBrakeTorque_LowerSat) {
    /* Saturate: '<S226>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque =
      DrivetrainHevP4_P.DisallowNegativeBrakeTorque_LowerSat;
  } else {
    /* Saturate: '<S226>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque = localB->product;
  }

  /* End of Saturate: '<S226>/Disallow Negative Brake Torque' */

  /* Gain: '<S226>/Torque Conversion' */
  Bias = DrivetrainHevP4_P.Rm * DrivetrainHevP4_P.mu_kinetic;

  /* Gain: '<S226>/Torque Conversion' */
  localB->TorqueConversion = Bias * localB->DisallowNegativeBrakeTorque;

  /* Gain: '<S223>/Ratio of static to kinetic' */
  Bias = DrivetrainHevP4_P.mu_static / DrivetrainHevP4_P.mu_kinetic;

  /* Gain: '<S223>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic = Bias * localB->TorqueConversion;

  /* Outputs for Iterator SubSystem: '<S211>/Clutch' */
  DrivetrainHevP4_Clutch_j(1, DrivetrainHevP4_M, &localB->Signconvention,
    &localB->Ratioofstatictokinetic, &localB->TorqueConversion,
    &localB->ImpAsg_InsertedFor_Omega_at_inport_0_a,
    &localB->ImpAsg_InsertedFor_Omegadot_at_inport_0_m,
    &localB->ImpAsg_InsertedFor_Myb_at_inport_0_p, DrivetrainHevP4_P.omegao,
    DrivetrainHevP4_P.br, DrivetrainHevP4_P.Iyy_Whl, DrivetrainHevP4_P.VXLOW,
    DrivetrainHevP4_P.Re, localB->Clutch, localDW->Clutch,
    &DrivetrainHevP4_P.Clutch, localX->Clutch);

  /* End of Outputs for SubSystem: '<S211>/Clutch' */

  /* MATLAB Function: '<S207>/Simple Magic Tire' incorporates:
   *  Constant: '<S204>/FxType'
   *  Constant: '<S204>/TirePrsConstant'
   *  Constant: '<S204>/lam_muxConstant'
   *  Constant: '<S204>/rollType'
   *  Constant: '<S204>/vertType'
   *  Constant: '<S218>/Constant'
   *  Constant: '<S218>/Constant1'
   *  Constant: '<S218>/Constant12'
   *  Constant: '<S218>/Constant14'
   *  Constant: '<S218>/Constant19'
   *  Constant: '<S218>/Constant2'
   *  Constant: '<S218>/Constant6'
   *  Constant: '<S218>/Constant7'
   *  Constant: '<S219>/Constant1'
   *  Constant: '<S219>/Constant10'
   *  Constant: '<S219>/Constant11'
   *  Constant: '<S219>/Constant12'
   *  Constant: '<S219>/Constant13'
   *  Constant: '<S219>/Constant14'
   *  Constant: '<S219>/Constant15'
   *  Constant: '<S219>/Constant16'
   *  Constant: '<S219>/Constant17'
   *  Constant: '<S219>/Constant18'
   *  Constant: '<S219>/Constant19'
   *  Constant: '<S219>/Constant2'
   *  Constant: '<S219>/Constant3'
   *  Constant: '<S219>/Constant4'
   *  Constant: '<S219>/Constant5'
   *  Constant: '<S219>/Constant7'
   *  Constant: '<S219>/Constant8'
   *  Constant: '<S219>/Constant9'
   *  Constant: '<S220>/Constant1'
   *  Constant: '<S220>/Constant10'
   *  Constant: '<S220>/Constant11'
   *  Constant: '<S220>/Constant13'
   *  Constant: '<S220>/Constant14'
   *  Constant: '<S220>/Constant15'
   *  Constant: '<S220>/Constant16'
   *  Constant: '<S220>/Constant17'
   *  Constant: '<S220>/Constant18'
   *  Constant: '<S220>/Constant19'
   *  Constant: '<S220>/Constant2'
   *  Constant: '<S220>/Constant20'
   *  Constant: '<S220>/Constant21'
   *  Constant: '<S220>/Constant22'
   *  Constant: '<S220>/Constant23'
   *  Constant: '<S220>/Constant24'
   *  Constant: '<S220>/Constant3'
   *  Constant: '<S220>/Constant4'
   *  Constant: '<S220>/Constant5'
   *  Constant: '<S220>/Constant6'
   *  Constant: '<S220>/Constant7'
   *  Constant: '<S220>/Constant8'
   *  Constant: '<S220>/Constant9'
   */
  DrivetrainHevP4_SimpleMagicTire(localB->Saturation, localB->SignalCopy1,
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a, localB->VectorConcatenate2[0],
    DrivetrainHevP4_P.Constant_Value_e, DrivetrainHevP4_P.Constant1_Value_c,
    DrivetrainHevP4_P.Constant7_Value, DrivetrainHevP4_P.Constant6_Value,
    DrivetrainHevP4_P.lam_x, DrivetrainHevP4_P.Constant2_Value_b,
    DrivetrainHevP4_P.Constant19_Value, DrivetrainHevP4_P.Constant12_Value,
    DrivetrainHevP4_P.Constant14_Value, DrivetrainHevP4_P.press,
    DrivetrainHevP4_P.Constant5_Value, DrivetrainHevP4_P.Constant2_Value_h,
    DrivetrainHevP4_P.aMy, DrivetrainHevP4_P.bMy, DrivetrainHevP4_P.cMy,
    DrivetrainHevP4_P.Constant16_Value, DrivetrainHevP4_P.Constant7_Value_n,
    DrivetrainHevP4_P.Constant9_Value, DrivetrainHevP4_P.betaMy,
    DrivetrainHevP4_P.alphaMy, DrivetrainHevP4_P.Constant11_Value,
    DrivetrainHevP4_P.Constant10_Value, DrivetrainHevP4_P.UNLOADED_RADIUS,
    DrivetrainHevP4_P.Constant1_Value_n, DrivetrainHevP4_P.Constant3_Value,
    DrivetrainHevP4_P.Constant19_Value_o, DrivetrainHevP4_P.Constant12_Value_o,
    DrivetrainHevP4_P.Constant14_Value_k, 0.0,
    DrivetrainHevP4_P.Constant14_Value_m, DrivetrainHevP4_P.Constant1_Value_l,
    DrivetrainHevP4_P.Constant19_Value_m, DrivetrainHevP4_P.Constant2_Value_d,
    DrivetrainHevP4_P.Constant3_Value_b, DrivetrainHevP4_P.Constant4_Value,
    DrivetrainHevP4_P.Constant5_Value_d, DrivetrainHevP4_P.Constant6_Value_o,
    DrivetrainHevP4_P.Constant7_Value_o, DrivetrainHevP4_P.Constant8_Value,
    DrivetrainHevP4_P.Constant9_Value_d, DrivetrainHevP4_P.Constant10_Value_n,
    DrivetrainHevP4_P.Constant11_Value_o, DrivetrainHevP4_P.Constant16_Value_i,
    DrivetrainHevP4_P.Constant17_Value, DrivetrainHevP4_P.Constant13_Value,
    DrivetrainHevP4_P.Constant15_Value, DrivetrainHevP4_P.Constant21_Value,
    DrivetrainHevP4_P.Constant22_Value, DrivetrainHevP4_P.Constant18_Value,
    DrivetrainHevP4_P.Constant20_Value, DrivetrainHevP4_P.Constant24_Value,
    DrivetrainHevP4_P.Constant23_Value, DrivetrainHevP4_P.FxType_Value,
    DrivetrainHevP4_P.rollType_Value, DrivetrainHevP4_P.vertType_Value,
    DrivetrainHevP4_P.FZMAX, DrivetrainHevP4_P.FZMIN, DrivetrainHevP4_P.VXLOW,
    DrivetrainHevP4_P.kappamax, &localB->sf_SimpleMagicTire);

  /* Gain: '<S203>/NF' */
  localB->NF = DrivetrainHevP4_P.NF * localB->sf_SimpleMagicTire.Fx;

  /* SignalConversion generated from: '<S164>/Vector Concatenate2' */
  localB->VectorConcatenate4[0] = localB->NF;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Sum: '<S249>/Add2' incorporates:
     *  Constant: '<S249>/Constant9'
     */
    localB->Add2_h = DrivetrainHevP4_P.Re;

    /* Saturate: '<S249>/Saturation' */
    if (localB->Add2_h > DrivetrainHevP4_P.Saturation_UpperSat_l) {
      /* Saturate: '<S249>/Saturation' */
      localB->Saturation_m = DrivetrainHevP4_P.Saturation_UpperSat_l;
    } else if (localB->Add2_h < DrivetrainHevP4_P.Saturation_LowerSat_d) {
      /* Saturate: '<S249>/Saturation' */
      localB->Saturation_m = DrivetrainHevP4_P.Saturation_LowerSat_d;
    } else {
      /* Saturate: '<S249>/Saturation' */
      localB->Saturation_m = localB->Add2_h;
    }

    /* End of Saturate: '<S249>/Saturation' */

    /* Memory: '<S40>/Memory' */
    localB->Memory_e = localDW->Memory_PreviousInput_c;

    /* Constant: '<S39>/domega_o' */
    localB->domega_o_k = DrivetrainHevP4_P.domega_o;
  }

  /* Integrator: '<S158>/Integrator1' */
  localB->Integrator1_i = localX->Integrator1_CSTATE_n;

  /* SignalConversion: '<S258>/Signal Copy1' */
  localB->SignalCopy1_l = localB->Integrator1_i;

  /* Integrator: '<S40>/Integrator' */
  zcEvent = rtsiGetIsOkayToUpdateMode(DrivetrainHevP4_M->solverInfo);
  if (zcEvent) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE_m,
                         (localB->Memory_e));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent || (localDW->Integrator_IWORK_d != 0)) {
      localX->Integrator_CSTATE_a = localB->domega_o_k;
    }
  }

  /* Integrator: '<S40>/Integrator' */
  localB->Integrator_jf = localX->Integrator_CSTATE_a;

  /* Gain: '<S39>/Gain2' */
  localB->Gain2_i = DrivetrainHevP4_P.b * localB->Integrator_jf;

  /* Integrator: '<S39>/Integrator' */
  localB->Integrator_je = localX->Integrator_CSTATE_p;

  /* Gain: '<S39>/Gain1' */
  localB->Gain1_f = DrivetrainHevP4_P.k * localB->Integrator_je;

  /* Sum: '<S39>/Subtract1' */
  localB->Subtract1_b = localB->Gain2_i + localB->Gain1_f;

  /* Gain: '<S203>/2//NR' */
  Bias = 2.0 / DrivetrainHevP4_P.NR;

  /* Gain: '<S203>/2//NR' */
  localB->uNR = Bias * localB->Subtract1_b;

  /* Integrator: '<S278>/Integrator' */
  localB->Integrator_i = localX->Integrator_CSTATE_h;

  /* Product: '<S262>/Product1' */
  localB->Product1_f = localB->Integrator_i * localB->Saturation_m;

  /* Sum: '<S249>/Add1' */
  localB->Add1_m = localB->uNR - localB->Product1_f;

  /* Gain: '<S249>/Sign convention' */
  localB->Signconvention_p = DrivetrainHevP4_P.Signconvention_Gain_m *
    localB->Add1_m;

  /* Gain: '<S203>/Rear Bias' */
  localB->RearBias = DrivetrainHevP4_P.RearBias_Gain * *rtu_BrkCmd;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Gain: '<S264>/Torque Conversion1' incorporates:
     *  Constant: '<S264>/Disk brake actuator bore'
     */
    localB->TorqueConversion1_g = DrivetrainHevP4_P.TorqueConversion1_Gain_m *
      DrivetrainHevP4_P.disk_abore;
  }

  /* Product: '<S264>/product' incorporates:
   *  Constant: '<S264>/Disk brake actuator bore'
   *  Constant: '<S264>/Number of brake pads'
   */
  localB->product_m = localB->RearBias * localB->TorqueConversion1_g *
    DrivetrainHevP4_P.disk_abore * DrivetrainHevP4_P.num_pads;

  /* Saturate: '<S264>/Disallow Negative Brake Torque' */
  if (localB->product_m >
      DrivetrainHevP4_P.DisallowNegativeBrakeTorque_UpperSat_k) {
    /* Saturate: '<S264>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_m =
      DrivetrainHevP4_P.DisallowNegativeBrakeTorque_UpperSat_k;
  } else if (localB->product_m <
             DrivetrainHevP4_P.DisallowNegativeBrakeTorque_LowerSat_j) {
    /* Saturate: '<S264>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_m =
      DrivetrainHevP4_P.DisallowNegativeBrakeTorque_LowerSat_j;
  } else {
    /* Saturate: '<S264>/Disallow Negative Brake Torque' */
    localB->DisallowNegativeBrakeTorque_m = localB->product_m;
  }

  /* End of Saturate: '<S264>/Disallow Negative Brake Torque' */

  /* Gain: '<S264>/Torque Conversion' */
  Bias = DrivetrainHevP4_P.Rm * DrivetrainHevP4_P.mu_kinetic;

  /* Gain: '<S264>/Torque Conversion' */
  localB->TorqueConversion_o = Bias * localB->DisallowNegativeBrakeTorque_m;

  /* Gain: '<S261>/Ratio of static to kinetic' */
  Bias = DrivetrainHevP4_P.mu_static / DrivetrainHevP4_P.mu_kinetic;

  /* Gain: '<S261>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic_o = Bias * localB->TorqueConversion_o;

  /* Outputs for Iterator SubSystem: '<S249>/Clutch' */
  DrivetrainHevP4_Clutch_j(1, DrivetrainHevP4_M, &localB->Signconvention_p,
    &localB->Ratioofstatictokinetic_o, &localB->TorqueConversion_o,
    &localB->ImpAsg_InsertedFor_Omega_at_inport_0,
    &localB->ImpAsg_InsertedFor_Omegadot_at_inport_0,
    &localB->ImpAsg_InsertedFor_Myb_at_inport_0, DrivetrainHevP4_P.omegao,
    DrivetrainHevP4_P.br, DrivetrainHevP4_P.Iyy_Whl, DrivetrainHevP4_P.VXLOW,
    DrivetrainHevP4_P.Re, localB->Clutch_e, localDW->Clutch_e,
    &DrivetrainHevP4_P.Clutch_e, localX->Clutch_e);

  /* End of Outputs for SubSystem: '<S249>/Clutch' */

  /* MATLAB Function: '<S245>/Simple Magic Tire' incorporates:
   *  Constant: '<S205>/FxType'
   *  Constant: '<S205>/TirePrsConstant'
   *  Constant: '<S205>/lam_muxConstant'
   *  Constant: '<S205>/rollType'
   *  Constant: '<S205>/vertType'
   *  Constant: '<S256>/Constant'
   *  Constant: '<S256>/Constant1'
   *  Constant: '<S256>/Constant12'
   *  Constant: '<S256>/Constant14'
   *  Constant: '<S256>/Constant19'
   *  Constant: '<S256>/Constant2'
   *  Constant: '<S256>/Constant6'
   *  Constant: '<S256>/Constant7'
   *  Constant: '<S257>/Constant1'
   *  Constant: '<S257>/Constant10'
   *  Constant: '<S257>/Constant11'
   *  Constant: '<S257>/Constant12'
   *  Constant: '<S257>/Constant13'
   *  Constant: '<S257>/Constant14'
   *  Constant: '<S257>/Constant15'
   *  Constant: '<S257>/Constant16'
   *  Constant: '<S257>/Constant17'
   *  Constant: '<S257>/Constant18'
   *  Constant: '<S257>/Constant19'
   *  Constant: '<S257>/Constant2'
   *  Constant: '<S257>/Constant3'
   *  Constant: '<S257>/Constant4'
   *  Constant: '<S257>/Constant5'
   *  Constant: '<S257>/Constant7'
   *  Constant: '<S257>/Constant8'
   *  Constant: '<S257>/Constant9'
   *  Constant: '<S258>/Constant1'
   *  Constant: '<S258>/Constant10'
   *  Constant: '<S258>/Constant11'
   *  Constant: '<S258>/Constant13'
   *  Constant: '<S258>/Constant14'
   *  Constant: '<S258>/Constant15'
   *  Constant: '<S258>/Constant16'
   *  Constant: '<S258>/Constant17'
   *  Constant: '<S258>/Constant18'
   *  Constant: '<S258>/Constant19'
   *  Constant: '<S258>/Constant2'
   *  Constant: '<S258>/Constant20'
   *  Constant: '<S258>/Constant21'
   *  Constant: '<S258>/Constant22'
   *  Constant: '<S258>/Constant23'
   *  Constant: '<S258>/Constant24'
   *  Constant: '<S258>/Constant3'
   *  Constant: '<S258>/Constant4'
   *  Constant: '<S258>/Constant5'
   *  Constant: '<S258>/Constant6'
   *  Constant: '<S258>/Constant7'
   *  Constant: '<S258>/Constant8'
   *  Constant: '<S258>/Constant9'
   */
  DrivetrainHevP4_SimpleMagicTire(localB->Saturation_m, localB->SignalCopy1_l,
    localB->ImpAsg_InsertedFor_Omega_at_inport_0, localB->VectorConcatenate2[0],
    DrivetrainHevP4_P.Constant_Value_l, DrivetrainHevP4_P.Constant1_Value_f,
    DrivetrainHevP4_P.Constant7_Value_m, DrivetrainHevP4_P.Constant6_Value_j,
    DrivetrainHevP4_P.lam_x, DrivetrainHevP4_P.Constant2_Value_dc,
    DrivetrainHevP4_P.Constant19_Value_i, DrivetrainHevP4_P.Constant12_Value_k,
    DrivetrainHevP4_P.Constant14_Value_c, DrivetrainHevP4_P.press,
    DrivetrainHevP4_P.Constant5_Value_i, DrivetrainHevP4_P.Constant2_Value_p,
    DrivetrainHevP4_P.aMy, DrivetrainHevP4_P.bMy, DrivetrainHevP4_P.cMy,
    DrivetrainHevP4_P.Constant16_Value_n, DrivetrainHevP4_P.Constant7_Value_l,
    DrivetrainHevP4_P.Constant9_Value_h, DrivetrainHevP4_P.betaMy,
    DrivetrainHevP4_P.alphaMy, DrivetrainHevP4_P.Constant11_Value_k,
    DrivetrainHevP4_P.Constant10_Value_d, DrivetrainHevP4_P.UNLOADED_RADIUS,
    DrivetrainHevP4_P.Constant1_Value_e, DrivetrainHevP4_P.Constant3_Value_e,
    DrivetrainHevP4_P.Constant19_Value_h, DrivetrainHevP4_P.Constant12_Value_b,
    DrivetrainHevP4_P.Constant14_Value_kc, 0.0,
    DrivetrainHevP4_P.Constant14_Value_f, DrivetrainHevP4_P.Constant1_Value_d,
    DrivetrainHevP4_P.Constant19_Value_e, DrivetrainHevP4_P.Constant2_Value_i,
    DrivetrainHevP4_P.Constant3_Value_p, DrivetrainHevP4_P.Constant4_Value_n,
    DrivetrainHevP4_P.Constant5_Value_c, DrivetrainHevP4_P.Constant6_Value_g,
    DrivetrainHevP4_P.Constant7_Value_h, DrivetrainHevP4_P.Constant8_Value_o,
    DrivetrainHevP4_P.Constant9_Value_p, DrivetrainHevP4_P.Constant10_Value_c,
    DrivetrainHevP4_P.Constant11_Value_f, DrivetrainHevP4_P.Constant16_Value_l,
    DrivetrainHevP4_P.Constant17_Value_k, DrivetrainHevP4_P.Constant13_Value_l,
    DrivetrainHevP4_P.Constant15_Value_f, DrivetrainHevP4_P.Constant21_Value_m,
    DrivetrainHevP4_P.Constant22_Value_m, DrivetrainHevP4_P.Constant18_Value_f,
    DrivetrainHevP4_P.Constant20_Value_o, DrivetrainHevP4_P.Constant24_Value_i,
    DrivetrainHevP4_P.Constant23_Value_j, DrivetrainHevP4_P.FxType_Value_l,
    DrivetrainHevP4_P.rollType_Value_d, DrivetrainHevP4_P.vertType_Value_g,
    DrivetrainHevP4_P.FZMAX, DrivetrainHevP4_P.FZMIN, DrivetrainHevP4_P.VXLOW,
    DrivetrainHevP4_P.kappamax, &localB->sf_SimpleMagicTire_h);

  /* Gain: '<S203>/NR' */
  localB->NR = DrivetrainHevP4_P.NR * localB->sf_SimpleMagicTire_h.Fx;

  /* SignalConversion generated from: '<S164>/Vector Concatenate2' */
  localB->VectorConcatenate4[1] = localB->NR;

  /* SignalConversion generated from: '<S164>/Vector Concatenate5' */
  localB->VectorConcatenate5[0] = localB->Integrator;

  /* SignalConversion generated from: '<S164>/Vector Concatenate5' */
  localB->VectorConcatenate5[1] = 0.0;

  /* SignalConversion generated from: '<S164>/Vector Concatenate5' */
  localB->VectorConcatenate5[2] = 0.0;

  /* SignalConversion generated from: '<S202>/Vector Concatenate5' */
  localB->VectorConcatenate5_m[0] = *rtu_WindVel;

  /* SignalConversion generated from: '<S202>/Vector Concatenate5' */
  localB->VectorConcatenate5_m[1] = 0.0;

  /* SignalConversion generated from: '<S202>/Vector Concatenate5' */
  localB->VectorConcatenate5_m[2] = 0.0;

  /* UnaryMinus: '<S164>/Unary Minus' */
  localB->UnaryMinus[0] = -localB->VectorConcatenate5_m[0];

  /* Sum: '<S201>/Add1' */
  localB->Add1_o[0] = localB->VectorConcatenate5[0] - localB->UnaryMinus[0];

  /* Product: '<S201>/Product' */
  localB->Product[0] = localB->Add1_o[0] * localB->Add1_o[0];

  /* UnaryMinus: '<S164>/Unary Minus' */
  localB->UnaryMinus[1] = -localB->VectorConcatenate5_m[1];

  /* Sum: '<S201>/Add1' */
  localB->Add1_o[1] = localB->VectorConcatenate5[1] - localB->UnaryMinus[1];

  /* Product: '<S201>/Product' */
  localB->Product[1] = localB->Add1_o[1] * localB->Add1_o[1];

  /* UnaryMinus: '<S164>/Unary Minus' */
  localB->UnaryMinus[2] = -localB->VectorConcatenate5_m[2];

  /* Sum: '<S201>/Add1' */
  localB->Add1_o[2] = localB->VectorConcatenate5[2] - localB->UnaryMinus[2];

  /* Product: '<S201>/Product' */
  localB->Product[2] = localB->Add1_o[2] * localB->Add1_o[2];

  /* Sum: '<S201>/Sum of Elements' */
  Bias = localB->Product[0];
  Bias += localB->Product[1];
  Bias += localB->Product[2];

  /* Sum: '<S201>/Sum of Elements' */
  localB->SumofElements = Bias;

  /* Sqrt: '<S201>/Sqrt' */
  localB->Sqrt = sqrt(localB->SumofElements);

  /* Product: '<S201>/Product2' */
  localB->Product2 = localB->Sqrt * localB->Sqrt;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Constant: '<S201>/Constant' */
    localB->VectorConcatenate[0] = DrivetrainHevP4_P.Cd;
  }

  /* Trigonometry: '<S201>/Trigonometric Function' */
  localB->TrigonometricFunction = rt_atan2d_snf(localB->Add1_o[1],
    localB->Add1_o[0]);

  /* Lookup_n-D: '<S201>/Cs' incorporates:
   *  Trigonometry: '<S201>/Trigonometric Function'
   */
  localB->VectorConcatenate[1] = look1_binlcpw(localB->TrigonometricFunction,
    DrivetrainHevP4_P.DragForce_beta_w, DrivetrainHevP4_P.DragForce_Cs, 1U);
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Constant: '<S201>/Constant1' */
    localB->VectorConcatenate[2] =
      DrivetrainHevP4_P.VehicleBody1DOFLongitudinal_Cl;
  }

  /* Lookup_n-D: '<S201>/Crm' incorporates:
   *  Trigonometry: '<S201>/Trigonometric Function'
   */
  localB->VectorConcatenate[3] = look1_binlxpw(localB->TrigonometricFunction,
    DrivetrainHevP4_P.Crm_bp01Data, DrivetrainHevP4_P.Crm_tableData, 1U);

  /* Gain: '<S201>/4' */
  localB->u[0] = DrivetrainHevP4_P.u_Gain_i[0] * localB->Add1_o[0];

  /* Trigonometry: '<S201>/Tanh' */
  localB->Tanh[0] = tanh(localB->u[0]);

  /* Gain: '<S201>/4' */
  localB->u[1] = DrivetrainHevP4_P.u_Gain_i[1] * localB->Add1_o[1];

  /* Trigonometry: '<S201>/Tanh' */
  localB->Tanh[1] = tanh(localB->u[1]);

  /* Gain: '<S201>/4' */
  localB->u[2] = DrivetrainHevP4_P.u_Gain_i[2] * localB->Add1_o[2];

  /* Trigonometry: '<S201>/Tanh' */
  localB->Tanh[2] = tanh(localB->u[2]);

  /* Product: '<S201>/Product5' incorporates:
   *  Constant: '<S201>/Constant2'
   */
  localB->VectorConcatenate[4] = localB->Tanh[0] *
    DrivetrainHevP4_P.VehicleBody1DOFLongitudinal_Cpm;

  /* Lookup_n-D: '<S201>/Cym' incorporates:
   *  Trigonometry: '<S201>/Trigonometric Function'
   */
  localB->VectorConcatenate[5] = look1_binlxpw(localB->TrigonometricFunction,
    DrivetrainHevP4_P.DragForce_beta_w, DrivetrainHevP4_P.DragForce_Cym, 1U);

  /* Gain: '<S201>/.5.*A.*Pabs.//R.//T' */
  Bias = 0.5 * DrivetrainHevP4_P.Af * DrivetrainHevP4_P.Pabs /
    DrivetrainHevP4_P.DragForce_R;
  for (i = 0; i < 6; i++) {
    /* Product: '<S201>/Product1' incorporates:
     *  Constant: '<S160>/AirTempConstant'
     */
    localB->Product1_p[i] = localB->Product2 * localB->VectorConcatenate[i] /
      DrivetrainHevP4_P.T;

    /* Gain: '<S201>/.5.*A.*Pabs.//R.//T' */
    localB->uAPabsRT[i] = Bias * localB->Product1_p[i];
  }

  /* Product: '<S201>/Product4' incorporates:
   *  Constant: '<S201>/Constant3'
   */
  Bias = DrivetrainHevP4_P.a_CG + DrivetrainHevP4_P.b_CG;

  /* Product: '<S201>/Product4' */
  localB->Product4[0] = localB->uAPabsRT[3] * Bias;
  localB->Product4[1] = localB->uAPabsRT[4] * Bias;
  localB->Product4[2] = localB->uAPabsRT[5] * Bias;

  /* Sum: '<S164>/Add6' incorporates:
   *  Constant: '<S160>/MExtConstant'
   */
  localB->Add6 = localB->Product4[1] + DrivetrainHevP4_P.MExtConstant_Value[1];

  /* UnitConversion: '<S161>/Unit Conversion' */
  /* Unit Conversion - from: deg to: rad
     Expression: output = (0.0174533*input) + (0) */
  localB->UnitConversion = 0.017453292519943295 * *rtu_Grade;

  /* Trigonometry: '<S164>/Trigonometric Function2' */
  Bias = localB->UnitConversion;
  u1 = sin(Bias);
  Bias = cos(Bias);

  /* Trigonometry: '<S164>/Trigonometric Function2' */
  localB->TrigonometricFunction2_o1 = u1;

  /* Trigonometry: '<S164>/Trigonometric Function2' */
  localB->TrigonometricFunction2_o2 = Bias;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Gain: '<S164>/m' incorporates:
     *  Constant: '<S164>/g'
     */
    localB->Fz = DrivetrainHevP4_P.Mass * DrivetrainHevP4_P.g;

    /* Constant: '<S172>/Constant1' */
    localB->Constant1 = DrivetrainHevP4_P.Constant1_Value_p;

    /* Constant: '<S172>/Constant11' */
    localB->Constant11 = DrivetrainHevP4_P.Constant11_Value_p;

    /* Constant: '<S172>/Constant8' */
    localB->Constant8 = DrivetrainHevP4_P.Constant8_Value_m;
  }

  /* Product: '<S164>/Product2' */
  localB->Product2_n = localB->TrigonometricFunction2_o2 * localB->Fz;

  /* Product: '<S201>/Product3' */
  localB->Product3[0] = localB->Tanh[0] * localB->uAPabsRT[0];
  localB->Product3[1] = localB->Tanh[1] * localB->uAPabsRT[1];
  localB->Product3[2] = localB->Tanh[2] * localB->uAPabsRT[2];

  /* Sum: '<S164>/Add1' incorporates:
   *  Constant: '<S160>/FExtConstant'
   */
  localB->Add1_l = (localB->Product2_n + DrivetrainHevP4_P.FExtConstant_Value[2])
    + localB->Product3[2];

  /* Gain: '<S164>/b' */
  localB->b = DrivetrainHevP4_P.b_CG * localB->Add1_l;

  /* Product: '<S164>/Product1' */
  localB->Product1_m = localB->TrigonometricFunction2_o1 * localB->Fz;

  /* Sum: '<S164>/Add' incorporates:
   *  Constant: '<S160>/FExtConstant'
   */
  localB->Add = (((DrivetrainHevP4_P.FExtConstant_Value[0] - localB->Product1_m)
                  + localB->NF) + localB->NR) - localB->Product3[0];

  /* Sum: '<S164>/Add3' incorporates:
   *  Constant: '<S160>/FExtConstant'
   */
  localB->Add3 = ((localB->Product3[0] - DrivetrainHevP4_P.FExtConstant_Value[0])
                  + localB->Product1_m) + localB->Add;

  /* Gain: '<S164>/h' */
  localB->h = DrivetrainHevP4_P.h * localB->Add3;

  /* Sum: '<S164>/Add2' */
  localB->Add2_i = (localB->b - localB->Add6) - localB->h;

  /* Gain: '<S164>/1//(a+b)' */
  Bias = 1.0 / (DrivetrainHevP4_P.a_CG + DrivetrainHevP4_P.b_CG);
  localB->VectorConcatenate4[2] = Bias * localB->Add2_i;

  /* Gain: '<S164>/a' */
  localB->a = DrivetrainHevP4_P.a_CG * localB->Add1_l;

  /* Sum: '<S164>/Add4' */
  localB->Add4 = (localB->Add6 + localB->a) + localB->h;

  /* Gain: '<S164>/1//(a+b) ' */
  Bias = 1.0 / (DrivetrainHevP4_P.a_CG + DrivetrainHevP4_P.b_CG);
  localB->VectorConcatenate4[3] = Bias * localB->Add4;

  /* Selector: '<S173>/Selector1' incorporates:
   *  Concatenate: '<S164>/Vector Concatenate4'
   */
  localB->Selector1[0] = localB->VectorConcatenate4[2];
  localB->Selector1[1] = localB->VectorConcatenate4[3];

  /* Gain: '<S173>/1//NR' */
  Bias = 1.0 / DrivetrainHevP4_P.NR;

  /* Gain: '<S173>/1//NR' */
  localB->Fz_d = Bias * localB->Selector1[1];

  /* Sum: '<S158>/Sum' */
  localB->Sum = localB->Fz_d - localB->Integrator1_i;

  /* Product: '<S158>/Divide' incorporates:
   *  Constant: '<S158>/Constant'
   */
  localB->Divide = localB->Sum * DrivetrainHevP4_P.wc;

  /* Gain: '<S173>/1//NF' */
  Bias = 1.0 / DrivetrainHevP4_P.NF;

  /* Gain: '<S173>/1//NF' */
  localB->Fz_i = Bias * localB->Selector1[0];

  /* Sum: '<S159>/Sum' */
  localB->Sum_h = localB->Fz_i - localB->Integrator1;

  /* Product: '<S159>/Divide' incorporates:
   *  Constant: '<S159>/Constant'
   */
  localB->Divide_i = localB->Sum_h * DrivetrainHevP4_P.wc;

  /* Integrator: '<S172>/Integrator3' */
  localB->x = localX->Integrator3_CSTATE;

  /* Gain: '<S164>/1//m' */
  Bias = 1.0 / DrivetrainHevP4_P.Mass;

  /* Gain: '<S164>/1//m' */
  localB->xddot = Bias * localB->Add;

  /* UnitConversion: '<S172>/Unit Conversion' */
  /* Unit Conversion - from: m/s^2 to: gn
     Expression: output = (0.101972*input) + (0) */
  localB->UnitConversion_i = 0.10197162129779282 * localB->xddot;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Constant: '<S173>/Constant10' */
    localB->Constant10 = DrivetrainHevP4_P.Constant10_Value_dk;

    /* Constant: '<S173>/Constant14' */
    localB->Constant14 = DrivetrainHevP4_P.Constant14_Value_c4;

    /* Constant: '<S173>/Constant3' */
    localB->Constant3 = DrivetrainHevP4_P.Constant3_Value_bp;

    /* Constant: '<S173>/Constant4' */
    localB->Constant4 = DrivetrainHevP4_P.Constant4_Value_o;

    /* Constant: '<S173>/Constant6' */
    localB->Constant6 = DrivetrainHevP4_P.Constant6_Value_jd;

    /* Constant: '<S173>/Constant8' */
    localB->Constant8_e = DrivetrainHevP4_P.Constant8_Value_g;

    /* Constant: '<S173>/Constant9' */
    localB->Constant9 = DrivetrainHevP4_P.Constant9_Value_k;
  }

  /* Selector: '<S173>/Selector' incorporates:
   *  Concatenate: '<S164>/Vector Concatenate4'
   */
  localB->Selector[0] = localB->VectorConcatenate4[0];
  localB->Selector[1] = localB->VectorConcatenate4[1];

  /* UnaryMinus: '<S173>/Unary Minus' */
  localB->UnaryMinus_g = -localB->Selector1[0];

  /* UnaryMinus: '<S173>/Unary Minus1' */
  localB->UnaryMinus1 = -localB->Selector1[1];

  /* SignalConversion generated from: '<S199>/sincos' incorporates:
   *  Constant: '<S163>/Constant'
   */
  localB->TmpSignalConversionAtsincosInport1[0] =
    DrivetrainHevP4_P.Constant_Value_e1;
  localB->TmpSignalConversionAtsincosInport1[1] = localB->UnitConversion;
  localB->TmpSignalConversionAtsincosInport1[2] =
    DrivetrainHevP4_P.Constant_Value_e1;

  /* Trigonometry: '<S199>/sincos' */
  Bias = localB->TmpSignalConversionAtsincosInport1[0];
  u1 = sin(Bias);
  Bias = cos(Bias);
  localB->sincos_o1[0] = u1;
  localB->sincos_o2[0] = Bias;
  Bias = localB->TmpSignalConversionAtsincosInport1[1];
  u1 = sin(Bias);
  Bias = cos(Bias);
  localB->sincos_o1[1] = u1;
  localB->sincos_o2[1] = Bias;
  Bias = localB->TmpSignalConversionAtsincosInport1[2];
  u1 = sin(Bias);
  Bias = cos(Bias);
  localB->sincos_o1[2] = u1;
  localB->sincos_o2[2] = Bias;

  /* Fcn: '<S199>/Fcn11' */
  localB->VectorConcatenate_e[0] = localB->sincos_o2[0] * localB->sincos_o2[1];

  /* Fcn: '<S199>/Fcn21' */
  localB->VectorConcatenate_e[1] = localB->sincos_o1[1] * localB->sincos_o1[2] *
    localB->sincos_o2[0] - localB->sincos_o1[0] * localB->sincos_o2[2];

  /* Fcn: '<S199>/Fcn31' */
  localB->VectorConcatenate_e[2] = localB->sincos_o1[1] * localB->sincos_o2[2] *
    localB->sincos_o2[0] + localB->sincos_o1[0] * localB->sincos_o1[2];

  /* Fcn: '<S199>/Fcn12' */
  localB->VectorConcatenate_e[3] = localB->sincos_o1[0] * localB->sincos_o2[1];

  /* Fcn: '<S199>/Fcn22' */
  localB->VectorConcatenate_e[4] = localB->sincos_o1[1] * localB->sincos_o1[2] *
    localB->sincos_o1[0] + localB->sincos_o2[0] * localB->sincos_o2[2];

  /* Fcn: '<S199>/Fcn32' */
  localB->VectorConcatenate_e[5] = localB->sincos_o1[1] * localB->sincos_o2[2] *
    localB->sincos_o1[0] - localB->sincos_o2[0] * localB->sincos_o1[2];

  /* Fcn: '<S199>/Fcn13' */
  localB->VectorConcatenate_e[6] = -localB->sincos_o1[1];

  /* Fcn: '<S199>/Fcn23' */
  localB->VectorConcatenate_e[7] = localB->sincos_o2[1] * localB->sincos_o1[2];

  /* Fcn: '<S199>/Fcn33' */
  localB->VectorConcatenate_e[8] = localB->sincos_o2[1] * localB->sincos_o2[2];

  /* Reshape: '<S200>/Reshape (9) to [3x3] column-major' */
  memcpy(&localB->Reshape9to3x3columnmajor[0], &localB->VectorConcatenate_e[0],
         9U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    /* Math: '<S163>/Transpose' incorporates:
     *  Reshape: '<S200>/Reshape (9) to [3x3] column-major'
     */
    localB->Transpose[3 * i] = localB->Reshape9to3x3columnmajor[i];
    localB->Transpose[3 * i + 1] = localB->Reshape9to3x3columnmajor[i + 3];
    localB->Transpose[3 * i + 2] = localB->Reshape9to3x3columnmajor[i + 6];
  }

  /* Integrator: '<S161>/Integrator1' */
  localB->VectorConcatenate5_h[0] = localX->Integrator1_CSTATE_h;

  /* SignalConversion generated from: '<S161>/Vector Concatenate5' */
  localB->VectorConcatenate5_h[1] = 0.0;

  /* SignalConversion generated from: '<S163>/Product' incorporates:
   *  Constant: '<S163>/Constant'
   */
  localB->TmpSignalConversionAtProductInport2[0] = localB->VectorConcatenate5_h
    [0];
  localB->TmpSignalConversionAtProductInport2[1] =
    DrivetrainHevP4_P.Constant_Value_e1;
  localB->TmpSignalConversionAtProductInport2[2] = localB->VectorConcatenate5_h
    [1];

  /* Product: '<S163>/Product' incorporates:
   *  Math: '<S163>/Transpose'
   *  Product: '<S178>/Product'
   *  Product: '<S179>/Product'
   *  Product: '<S185>/Product'
   *  Product: '<S186>/Product'
   *  Product: '<S191>/Product'
   */
  tmp_1 = &localB->Transpose[0];
  Bias = localB->TmpSignalConversionAtProductInport2[0];
  tmp = localB->TmpSignalConversionAtProductInport2[1];
  tmp_0 = localB->TmpSignalConversionAtProductInport2[2];
  for (i = 0; i < 3; i++) {
    u1 = tmp_1[i] * Bias;
    u1 += tmp_1[i + 3] * tmp;
    u1 += tmp_1[i + 6] * tmp_0;

    /* Product: '<S163>/Product' */
    localB->Product_p[i] = u1;
  }

  /* SignalConversion generated from: '<S161>/Vector Concatenate6' */
  localB->VectorConcatenate6[0] = localB->Product_p[0];

  /* SignalConversion generated from: '<S161>/Vector Concatenate6' */
  localB->VectorConcatenate6[1] = 0.0;

  /* SignalConversion generated from: '<S161>/Vector Concatenate6' */
  localB->VectorConcatenate6[2] = localB->Product_p[2];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* SignalConversion generated from: '<S177>/sincos' incorporates:
     *  Constant: '<S169>/Constant1'
     *  Constant: '<S169>/Constant2'
     */
    localB->TmpSignalConversionAtsincosInport1_b[0] =
      DrivetrainHevP4_P.Constant2_Value_d3;
    localB->TmpSignalConversionAtsincosInport1_b[1] = 0.0;
    localB->TmpSignalConversionAtsincosInport1_b[2] =
      DrivetrainHevP4_P.Constant1_Value_a;

    /* Trigonometry: '<S177>/sincos' */
    Bias = localB->TmpSignalConversionAtsincosInport1_b[0];
    u1 = sin(Bias);
    Bias = cos(Bias);
    localB->sincos_o1_a[0] = u1;
    localB->sincos_o2_i[0] = Bias;
    Bias = localB->TmpSignalConversionAtsincosInport1_b[1];
    u1 = sin(Bias);
    Bias = cos(Bias);
    localB->sincos_o1_a[1] = u1;
    localB->sincos_o2_i[1] = Bias;
    Bias = localB->TmpSignalConversionAtsincosInport1_b[2];
    u1 = sin(Bias);
    Bias = cos(Bias);
    localB->sincos_o1_a[2] = u1;
    localB->sincos_o2_i[2] = Bias;

    /* Fcn: '<S177>/Fcn11' */
    localB->VectorConcatenate_g[0] = localB->sincos_o2_i[0] *
      localB->sincos_o2_i[1];

    /* Fcn: '<S177>/Fcn21' */
    localB->VectorConcatenate_g[1] = localB->sincos_o1_a[1] *
      localB->sincos_o1_a[2] * localB->sincos_o2_i[0] - localB->sincos_o1_a[0] *
      localB->sincos_o2_i[2];

    /* Fcn: '<S177>/Fcn31' */
    localB->VectorConcatenate_g[2] = localB->sincos_o1_a[1] *
      localB->sincos_o2_i[2] * localB->sincos_o2_i[0] + localB->sincos_o1_a[0] *
      localB->sincos_o1_a[2];

    /* Fcn: '<S177>/Fcn12' */
    localB->VectorConcatenate_g[3] = localB->sincos_o1_a[0] *
      localB->sincos_o2_i[1];

    /* Fcn: '<S177>/Fcn22' */
    localB->VectorConcatenate_g[4] = localB->sincos_o1_a[1] *
      localB->sincos_o1_a[2] * localB->sincos_o1_a[0] + localB->sincos_o2_i[0] *
      localB->sincos_o2_i[2];

    /* Fcn: '<S177>/Fcn32' */
    localB->VectorConcatenate_g[5] = localB->sincos_o1_a[1] *
      localB->sincos_o2_i[2] * localB->sincos_o1_a[0] - localB->sincos_o2_i[0] *
      localB->sincos_o1_a[2];

    /* Fcn: '<S177>/Fcn13' */
    localB->VectorConcatenate_g[6] = -localB->sincos_o1_a[1];

    /* Fcn: '<S177>/Fcn23' */
    localB->VectorConcatenate_g[7] = localB->sincos_o2_i[1] *
      localB->sincos_o1_a[2];

    /* Fcn: '<S177>/Fcn33' */
    localB->VectorConcatenate_g[8] = localB->sincos_o2_i[1] *
      localB->sincos_o2_i[2];

    /* Reshape: '<S181>/Reshape (9) to [3x3] column-major' */
    memcpy(&localB->Reshape9to3x3columnmajor_a[0], &localB->VectorConcatenate_g
           [0], 9U * sizeof(real_T));

    /* Constant: '<S175>/R_T1' */
    localB->VectorConcatenate_j[0] = DrivetrainHevP4_P.a_CG;

    /* Constant: '<S175>/R_T2' */
    localB->VectorConcatenate_j[1] =
      DrivetrainHevP4_P.HardPointCoordinateTransformFront_R_T2;

    /* Constant: '<S175>/R_T3' */
    localB->VectorConcatenate_j[2] = DrivetrainHevP4_P.h;
    for (i = 0; i < 3; i++) {
      /* Math: '<S175>/Transpose1' incorporates:
       *  Reshape: '<S181>/Reshape (9) to [3x3] column-major'
       */
      localB->Transpose1[3 * i] = localB->Reshape9to3x3columnmajor_a[i];
      localB->Transpose1[3 * i + 1] = localB->Reshape9to3x3columnmajor_a[i + 3];
      localB->Transpose1[3 * i + 2] = localB->Reshape9to3x3columnmajor_a[i + 6];

      /* Reshape: '<S179>/Reshape1' */
      localB->Reshape1[i] = localB->VectorConcatenate_j[i];
    }

    /* Product: '<S179>/Product' incorporates:
     *  Math: '<S175>/Transpose1'
     *  Product: '<S163>/Product'
     *  Product: '<S178>/Product'
     *  Product: '<S185>/Product'
     *  Product: '<S186>/Product'
     *  Product: '<S191>/Product'
     *  Reshape: '<S179>/Reshape1'
     */
    tmp_1 = &localB->Transpose1[0];
    Bias = localB->Reshape1[0];
    tmp = localB->Reshape1[1];
    tmp_0 = localB->Reshape1[2];
    for (i = 0; i < 3; i++) {
      /* Product: '<S179>/Product' */
      localB->Product_j[i] = 0.0;
      localB->Product_j[i] += tmp_1[i] * Bias;
      localB->Product_j[i] += tmp_1[i + 3] * tmp;
      localB->Product_j[i] += tmp_1[i + 6] * tmp_0;

      /* Reshape: '<S179>/Reshape2' incorporates:
       *  Product: '<S179>/Product'
       */
      localB->Reshape2[i] = localB->Product_j[i];
    }

    /* Product: '<S182>/j x k' */
    localB->jxk = 0.0 * localB->VectorConcatenate_j[2];

    /* Product: '<S182>/k x i' */
    localB->kxi = 0.0 * localB->VectorConcatenate_j[0];

    /* Product: '<S182>/i x j' */
    localB->ixj = 0.0 * localB->VectorConcatenate_j[1];

    /* Product: '<S183>/k x j' */
    localB->kxj = 0.0 * localB->VectorConcatenate_j[1];

    /* Product: '<S183>/i x k' */
    localB->ixk = 0.0 * localB->VectorConcatenate_j[2];

    /* Product: '<S183>/j x i' */
    localB->jxi = 0.0 * localB->VectorConcatenate_j[0];

    /* Sum: '<S180>/Sum' */
    localB->Sum_d[0] = localB->jxk - localB->kxj;
    localB->Sum_d[1] = localB->kxi - localB->ixk;
    localB->Sum_d[2] = localB->ixj - localB->jxi;
  }

  /* Sum: '<S175>/Add' incorporates:
   *  Constant: '<S169>/Constant12'
   */
  localB->Add_k[0] = localB->VectorConcatenate6[0] + localB->Reshape2[0];
  localB->Add_k[1] = DrivetrainHevP4_P.Constant12_Value_bz + localB->Reshape2[1];
  localB->Add_k[2] = localB->VectorConcatenate6[2] + localB->Reshape2[2];

  /* Sum: '<S175>/Add1' */
  localB->Add1_h[0] = localB->Sum_d[0] + localB->VectorConcatenate2[0];
  localB->Add1_h[1] = localB->Sum_d[1] + localB->VectorConcatenate2[1];
  localB->Add1_h[2] = localB->Sum_d[2] + localB->VectorConcatenate2[2];

  /* Sum: '<S169>/Add' */
  localB->Add_k1 = localB->UnitConversion;

  /* SignalConversion generated from: '<S192>/sincos' incorporates:
   *  Constant: '<S191>/Constant'
   */
  localB->TmpSignalConversionAtsincosInport1_c[0] =
    DrivetrainHevP4_P.Constant_Value_j;
  localB->TmpSignalConversionAtsincosInport1_c[1] = localB->Add_k1;
  localB->TmpSignalConversionAtsincosInport1_c[2] =
    DrivetrainHevP4_P.Constant_Value_j;

  /* Trigonometry: '<S192>/sincos' */
  Bias = localB->TmpSignalConversionAtsincosInport1_c[0];
  u1 = sin(Bias);
  Bias = cos(Bias);
  localB->sincos_o1_l[0] = u1;
  localB->sincos_o2_o[0] = Bias;
  Bias = localB->TmpSignalConversionAtsincosInport1_c[1];
  u1 = sin(Bias);
  Bias = cos(Bias);
  localB->sincos_o1_l[1] = u1;
  localB->sincos_o2_o[1] = Bias;
  Bias = localB->TmpSignalConversionAtsincosInport1_c[2];
  u1 = sin(Bias);
  Bias = cos(Bias);
  localB->sincos_o1_l[2] = u1;
  localB->sincos_o2_o[2] = Bias;

  /* Fcn: '<S192>/Fcn11' */
  localB->VectorConcatenate_m[0] = localB->sincos_o2_o[0] * localB->sincos_o2_o
    [1];

  /* Fcn: '<S192>/Fcn21' */
  localB->VectorConcatenate_m[1] = localB->sincos_o1_l[1] * localB->sincos_o1_l
    [2] * localB->sincos_o2_o[0] - localB->sincos_o1_l[0] * localB->sincos_o2_o
    [2];

  /* Fcn: '<S192>/Fcn31' */
  localB->VectorConcatenate_m[2] = localB->sincos_o1_l[1] * localB->sincos_o2_o
    [2] * localB->sincos_o2_o[0] + localB->sincos_o1_l[0] * localB->sincos_o1_l
    [2];

  /* Fcn: '<S192>/Fcn12' */
  localB->VectorConcatenate_m[3] = localB->sincos_o1_l[0] * localB->sincos_o2_o
    [1];

  /* Fcn: '<S192>/Fcn22' */
  localB->VectorConcatenate_m[4] = localB->sincos_o1_l[1] * localB->sincos_o1_l
    [2] * localB->sincos_o1_l[0] + localB->sincos_o2_o[0] * localB->sincos_o2_o
    [2];

  /* Fcn: '<S192>/Fcn32' */
  localB->VectorConcatenate_m[5] = localB->sincos_o1_l[1] * localB->sincos_o2_o
    [2] * localB->sincos_o1_l[0] - localB->sincos_o2_o[0] * localB->sincos_o1_l
    [2];

  /* Fcn: '<S192>/Fcn13' */
  localB->VectorConcatenate_m[6] = -localB->sincos_o1_l[1];

  /* Fcn: '<S192>/Fcn23' */
  localB->VectorConcatenate_m[7] = localB->sincos_o2_o[1] * localB->sincos_o1_l
    [2];

  /* Fcn: '<S192>/Fcn33' */
  localB->VectorConcatenate_m[8] = localB->sincos_o2_o[1] * localB->sincos_o2_o
    [2];

  /* Reshape: '<S193>/Reshape (9) to [3x3] column-major' */
  memcpy(&localB->Reshape9to3x3columnmajor_e[0], &localB->VectorConcatenate_m[0],
         9U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    /* Math: '<S191>/Transpose' incorporates:
     *  Reshape: '<S193>/Reshape (9) to [3x3] column-major'
     */
    localB->Transpose_p[3 * i] = localB->Reshape9to3x3columnmajor_e[i];
    localB->Transpose_p[3 * i + 1] = localB->Reshape9to3x3columnmajor_e[i + 3];
    localB->Transpose_p[3 * i + 2] = localB->Reshape9to3x3columnmajor_e[i + 6];
  }

  /* SignalConversion generated from: '<S191>/Product' incorporates:
   *  Constant: '<S191>/Constant'
   */
  localB->TmpSignalConversionAtProductInport2_b[0] = localB->VectorConcatenate2
    [0];
  localB->TmpSignalConversionAtProductInport2_b[1] =
    DrivetrainHevP4_P.Constant_Value_j;
  localB->TmpSignalConversionAtProductInport2_b[2] = localB->VectorConcatenate2
    [2];

  /* Product: '<S191>/Product' incorporates:
   *  Math: '<S191>/Transpose'
   *  Product: '<S163>/Product'
   *  Product: '<S178>/Product'
   *  Product: '<S179>/Product'
   *  Product: '<S185>/Product'
   *  Product: '<S186>/Product'
   */
  tmp_1 = &localB->Transpose_p[0];
  Bias = localB->TmpSignalConversionAtProductInport2_b[0];
  tmp = localB->TmpSignalConversionAtProductInport2_b[1];
  tmp_0 = localB->TmpSignalConversionAtProductInport2_b[2];
  for (i = 0; i < 3; i++) {
    u1 = tmp_1[i] * Bias;
    u1 += tmp_1[i + 3] * tmp;
    u1 += tmp_1[i + 6] * tmp_0;

    /* Product: '<S191>/Product' */
    localB->Product_m[i] = u1;
  }

  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Reshape: '<S178>/Reshape1' */
    localB->Reshape1_p[0] = localB->Sum_d[0];
    localB->Reshape1_p[1] = localB->Sum_d[1];
    localB->Reshape1_p[2] = localB->Sum_d[2];

    /* Product: '<S178>/Product' incorporates:
     *  Math: '<S175>/Transpose1'
     *  Product: '<S163>/Product'
     *  Product: '<S179>/Product'
     *  Product: '<S185>/Product'
     *  Product: '<S186>/Product'
     *  Product: '<S191>/Product'
     *  Reshape: '<S178>/Reshape1'
     */
    tmp_1 = &localB->Transpose1[0];
    Bias = localB->Reshape1_p[0];
    tmp = localB->Reshape1_p[1];
    tmp_0 = localB->Reshape1_p[2];
    for (i = 0; i < 3; i++) {
      /* Product: '<S178>/Product' */
      localB->Product_c[i] = 0.0;
      localB->Product_c[i] += tmp_1[i] * Bias;
      localB->Product_c[i] += tmp_1[i + 3] * tmp;
      localB->Product_c[i] += tmp_1[i + 6] * tmp_0;

      /* Reshape: '<S178>/Reshape2' incorporates:
       *  Product: '<S178>/Product'
       */
      localB->Reshape2_n[i] = localB->Product_c[i];
    }

    /* Trigonometry: '<S184>/sincos' */
    Bias = localB->TmpSignalConversionAtsincosInport1_b[0];
    u1 = sin(Bias);
    Bias = cos(Bias);
    localB->sincos_o1_au[0] = u1;
    localB->sincos_o2_m[0] = Bias;
    Bias = localB->TmpSignalConversionAtsincosInport1_b[1];
    u1 = sin(Bias);
    Bias = cos(Bias);
    localB->sincos_o1_au[1] = u1;
    localB->sincos_o2_m[1] = Bias;
    Bias = localB->TmpSignalConversionAtsincosInport1_b[2];
    u1 = sin(Bias);
    Bias = cos(Bias);
    localB->sincos_o1_au[2] = u1;
    localB->sincos_o2_m[2] = Bias;

    /* Fcn: '<S184>/Fcn11' */
    localB->VectorConcatenate_gi[0] = localB->sincos_o2_m[0] *
      localB->sincos_o2_m[1];

    /* Fcn: '<S184>/Fcn21' */
    localB->VectorConcatenate_gi[1] = localB->sincos_o1_au[1] *
      localB->sincos_o1_au[2] * localB->sincos_o2_m[0] - localB->sincos_o1_au[0]
      * localB->sincos_o2_m[2];

    /* Fcn: '<S184>/Fcn31' */
    localB->VectorConcatenate_gi[2] = localB->sincos_o1_au[1] *
      localB->sincos_o2_m[2] * localB->sincos_o2_m[0] + localB->sincos_o1_au[0] *
      localB->sincos_o1_au[2];

    /* Fcn: '<S184>/Fcn12' */
    localB->VectorConcatenate_gi[3] = localB->sincos_o1_au[0] *
      localB->sincos_o2_m[1];

    /* Fcn: '<S184>/Fcn22' */
    localB->VectorConcatenate_gi[4] = localB->sincos_o1_au[1] *
      localB->sincos_o1_au[2] * localB->sincos_o1_au[0] + localB->sincos_o2_m[0]
      * localB->sincos_o2_m[2];

    /* Fcn: '<S184>/Fcn32' */
    localB->VectorConcatenate_gi[5] = localB->sincos_o1_au[1] *
      localB->sincos_o2_m[2] * localB->sincos_o1_au[0] - localB->sincos_o2_m[0] *
      localB->sincos_o1_au[2];

    /* Fcn: '<S184>/Fcn13' */
    localB->VectorConcatenate_gi[6] = -localB->sincos_o1_au[1];

    /* Fcn: '<S184>/Fcn23' */
    localB->VectorConcatenate_gi[7] = localB->sincos_o2_m[1] *
      localB->sincos_o1_au[2];

    /* Fcn: '<S184>/Fcn33' */
    localB->VectorConcatenate_gi[8] = localB->sincos_o2_m[1] *
      localB->sincos_o2_m[2];

    /* Reshape: '<S188>/Reshape (9) to [3x3] column-major' */
    memcpy(&localB->Reshape9to3x3columnmajor_f[0], &localB->
           VectorConcatenate_gi[0], 9U * sizeof(real_T));

    /* Constant: '<S176>/R_T1' */
    Bias = -DrivetrainHevP4_P.b_CG;
    localB->VectorConcatenate_d[0] = Bias;

    /* Constant: '<S176>/R_T2' */
    localB->VectorConcatenate_d[1] =
      DrivetrainHevP4_P.HardPointCoordinateTransformRear_R_T2;

    /* Constant: '<S176>/R_T3' */
    localB->VectorConcatenate_d[2] = DrivetrainHevP4_P.h;
    for (i = 0; i < 3; i++) {
      /* Math: '<S176>/Transpose1' incorporates:
       *  Reshape: '<S188>/Reshape (9) to [3x3] column-major'
       */
      localB->Transpose1_d[3 * i] = localB->Reshape9to3x3columnmajor_f[i];
      localB->Transpose1_d[3 * i + 1] = localB->Reshape9to3x3columnmajor_f[i + 3];
      localB->Transpose1_d[3 * i + 2] = localB->Reshape9to3x3columnmajor_f[i + 6];

      /* Reshape: '<S186>/Reshape1' */
      localB->Reshape1_f[i] = localB->VectorConcatenate_d[i];
    }

    /* Product: '<S186>/Product' incorporates:
     *  Math: '<S176>/Transpose1'
     *  Product: '<S163>/Product'
     *  Product: '<S178>/Product'
     *  Product: '<S179>/Product'
     *  Product: '<S185>/Product'
     *  Product: '<S191>/Product'
     *  Reshape: '<S186>/Reshape1'
     */
    tmp_1 = &localB->Transpose1_d[0];
    Bias = localB->Reshape1_f[0];
    tmp = localB->Reshape1_f[1];
    tmp_0 = localB->Reshape1_f[2];
    for (i = 0; i < 3; i++) {
      /* Product: '<S186>/Product' */
      localB->Product_pc[i] = 0.0;
      localB->Product_pc[i] += tmp_1[i] * Bias;
      localB->Product_pc[i] += tmp_1[i + 3] * tmp;
      localB->Product_pc[i] += tmp_1[i + 6] * tmp_0;

      /* Reshape: '<S186>/Reshape2' incorporates:
       *  Product: '<S186>/Product'
       */
      localB->Reshape2_h[i] = localB->Product_pc[i];
    }
  }

  /* Sum: '<S175>/Add4' incorporates:
   *  Constant: '<S169>/Constant10'
   */
  localB->V_wb[0] = localB->Product_m[0] + localB->Reshape2_n[0];
  localB->V_wb[1] = DrivetrainHevP4_P.Constant10_Value_co + localB->Reshape2_n[1];
  localB->V_wb[2] = localB->Product_m[2] + localB->Reshape2_n[2];

  /* Sum: '<S176>/Add' incorporates:
   *  Constant: '<S169>/Constant12'
   */
  localB->Add_f[0] = localB->VectorConcatenate6[0] + localB->Reshape2_h[0];
  localB->Add_f[1] = DrivetrainHevP4_P.Constant12_Value_bz + localB->Reshape2_h
    [1];
  localB->Add_f[2] = localB->VectorConcatenate6[2] + localB->Reshape2_h[2];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Product: '<S189>/j x k' */
    localB->jxk_k = 0.0 * localB->VectorConcatenate_d[2];

    /* Product: '<S189>/k x i' */
    localB->kxi_i = 0.0 * localB->VectorConcatenate_d[0];

    /* Product: '<S189>/i x j' */
    localB->ixj_e = 0.0 * localB->VectorConcatenate_d[1];

    /* Product: '<S190>/k x j' */
    localB->kxj_g = 0.0 * localB->VectorConcatenate_d[1];

    /* Product: '<S190>/i x k' */
    localB->ixk_h = 0.0 * localB->VectorConcatenate_d[2];

    /* Product: '<S190>/j x i' */
    localB->jxi_a = 0.0 * localB->VectorConcatenate_d[0];

    /* Sum: '<S187>/Sum' */
    localB->Sum_n[0] = localB->jxk_k - localB->kxj_g;
    localB->Sum_n[1] = localB->kxi_i - localB->ixk_h;
    localB->Sum_n[2] = localB->ixj_e - localB->jxi_a;
  }

  /* Sum: '<S176>/Add1' */
  localB->Add1_f[0] = localB->Sum_n[0] + localB->VectorConcatenate2[0];
  localB->Add1_f[1] = localB->Sum_n[1] + localB->VectorConcatenate2[1];
  localB->Add1_f[2] = localB->Sum_n[2] + localB->VectorConcatenate2[2];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Reshape: '<S185>/Reshape1' */
    localB->Reshape1_o[0] = localB->Sum_n[0];
    localB->Reshape1_o[1] = localB->Sum_n[1];
    localB->Reshape1_o[2] = localB->Sum_n[2];

    /* Product: '<S185>/Product' incorporates:
     *  Math: '<S176>/Transpose1'
     *  Product: '<S163>/Product'
     *  Product: '<S178>/Product'
     *  Product: '<S179>/Product'
     *  Product: '<S186>/Product'
     *  Product: '<S191>/Product'
     *  Reshape: '<S185>/Reshape1'
     */
    tmp_1 = &localB->Transpose1_d[0];
    Bias = localB->Reshape1_o[0];
    tmp = localB->Reshape1_o[1];
    tmp_0 = localB->Reshape1_o[2];
    for (i = 0; i < 3; i++) {
      /* Product: '<S185>/Product' */
      localB->Product_i[i] = 0.0;
      localB->Product_i[i] += tmp_1[i] * Bias;
      localB->Product_i[i] += tmp_1[i + 3] * tmp;
      localB->Product_i[i] += tmp_1[i + 6] * tmp_0;

      /* Reshape: '<S185>/Reshape2' incorporates:
       *  Product: '<S185>/Product'
       */
      localB->Reshape2_i[i] = localB->Product_i[i];
    }
  }

  /* Sum: '<S176>/Add4' incorporates:
   *  Constant: '<S169>/Constant10'
   */
  localB->V_wb_g[0] = localB->Product_m[0] + localB->Reshape2_i[0];
  localB->V_wb_g[1] = DrivetrainHevP4_P.Constant10_Value_co + localB->
    Reshape2_i[1];
  localB->V_wb_g[2] = localB->Product_m[2] + localB->Reshape2_i[2];

  /* Product: '<S194>/Product' incorporates:
   *  Constant: '<S194>/Constant'
   */
  Bias = DrivetrainHevP4_P.Mass * DrivetrainHevP4_P.g;

  /* Product: '<S194>/Product' */
  localB->Product_iv = Bias * localB->Product_m[2];

  /* UnitConversion: '<S194>/Unit Conversion' */
  /* Unit Conversion - from: gn to: m/s^2
     Expression: output = (9.80665*input) + (0) */
  localB->UnitConversion_p = 9.8066500000000012 * localB->UnitConversion_i;

  /* Product: '<S194>/Product1' incorporates:
   *  Constant: '<S194>/Constant1'
   */
  localB->Product1_d = DrivetrainHevP4_P.Mass * localB->VectorConcatenate2[0] *
    localB->UnitConversion_p;

  /* Product: '<S194>/Product8' incorporates:
   *  Constant: '<S160>/FExtConstant'
   */
  localB->Product8[0] = DrivetrainHevP4_P.FExtConstant_Value[0] *
    localB->VectorConcatenate2[0];
  localB->Product8[1] = localB->Product3[0] * localB->VectorConcatenate2[0];
  localB->Product8[2] = localB->Selector[0] * localB->VectorConcatenate2[0];
  localB->Product8[3] = localB->VectorConcatenate2[0] * localB->Selector[1];

  /* UnaryMinus: '<S194>/Unary Minus' */
  localB->UnaryMinus_o = -localB->Product8[1];

  /* UnaryMinus: '<S194>/Unary Minus1' */
  localB->UnaryMinus1_l = -localB->Product_iv;

  /* SignalConversion generated from: '<S161>/Vector Concatenate1' */
  localB->VectorConcatenate1[0] = localB->Add;

  /* SignalConversion generated from: '<S161>/Vector Concatenate1' */
  localB->VectorConcatenate1[1] = 0.0;

  /* SignalConversion generated from: '<S161>/Vector Concatenate1' */
  localB->VectorConcatenate1[2] = 0.0;

  /* SignalConversion generated from: '<S161>/Vector Concatenate4' */
  localB->VectorConcatenate4_l[0] = localB->NF;

  /* SignalConversion generated from: '<S161>/Vector Concatenate4' */
  localB->VectorConcatenate4_l[1] = localB->NR;

  /* SignalConversion generated from: '<S164>/Vector Concatenate1' */
  localB->VectorConcatenate1_b[0] = localB->Product1_m;

  /* SignalConversion generated from: '<S164>/Vector Concatenate1' */
  localB->VectorConcatenate1_b[1] = localB->Product2_n;

  /* Sum: '<S139>/Sum' */
  localB->Sum_f = localX->PumpIntegrator_CSTATE -
    localX->TurbineIntegrator_CSTATE;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* HitCross: '<S139>/Velocities Match' */
    zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,&localZCE->VelocitiesMatch_Input_ZCE,
                         (localB->Sum_f -
                          DrivetrainHevP4_P.VelocitiesMatch_Offset));
    if (localDW->VelocitiesMatch_MODE == 0) {
      if (zcEvent_0 != NO_ZCEVENT) {
        /* HitCross: '<S139>/Velocities Match' */
        localB->VelocitiesMatch = !localB->VelocitiesMatch;
        localDW->VelocitiesMatch_MODE = 1;
      } else if (localB->VelocitiesMatch) {
        /* HitCross: '<S139>/Velocities Match' */
        localB->VelocitiesMatch = ((!(localB->Sum_f !=
          DrivetrainHevP4_P.VelocitiesMatch_Offset)) && localB->VelocitiesMatch);
      } else {
        /* HitCross: '<S139>/Velocities Match' */
        localB->VelocitiesMatch = ((localB->Sum_f ==
          DrivetrainHevP4_P.VelocitiesMatch_Offset) || localB->VelocitiesMatch);
      }
    } else {
      /* HitCross: '<S139>/Velocities Match' */
      localB->VelocitiesMatch = ((!(localB->Sum_f !=
        DrivetrainHevP4_P.VelocitiesMatch_Offset)) && localB->VelocitiesMatch);
      localDW->VelocitiesMatch_MODE = 0;
    }

    /* End of HitCross: '<S139>/Velocities Match' */

    /* Memory: '<S82>/Memory' */
    localB->Memory_d = localDW->Memory_PreviousInput_h;

    /* Constant: '<S81>/domega_o' */
    localB->domega_o_c = DrivetrainHevP4_P.domega_o;
  }

  /* Integrator: '<S82>/Integrator' */
  zcEvent = rtsiGetIsOkayToUpdateMode(DrivetrainHevP4_M->solverInfo);
  if (zcEvent) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE_l,
                         (localB->Memory_d));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent || (localDW->Integrator_IWORK_k != 0)) {
      localX->Integrator_CSTATE_b = localB->domega_o_c;
    }
  }

  /* Integrator: '<S82>/Integrator' */
  localB->Integrator_ao = localX->Integrator_CSTATE_b;

  /* Gain: '<S81>/Gain2' */
  localB->Gain2_n = DrivetrainHevP4_P.b * localB->Integrator_ao;

  /* Integrator: '<S81>/Integrator' */
  localB->Integrator_iq = localX->Integrator_CSTATE_e;

  /* Gain: '<S81>/Gain1' */
  localB->Gain1_k = DrivetrainHevP4_P.k * localB->Integrator_iq;

  /* Sum: '<S81>/Subtract1' */
  localB->Subtract1_m = localB->Gain2_n + localB->Gain1_k;

  /* UnaryMinus: '<S81>/Unary Minus' */
  localB->UnaryMinus_k = -localB->Subtract1_m;

  /* Gain: '<S142>/Input Damping' */
  localB->InputDamping = DrivetrainHevP4_P.bi * localX->PumpIntegrator_CSTATE;

  /* Gain: '<S142>/Output Damping' */
  localB->OutputDamping = DrivetrainHevP4_P.bt * localX->PumpIntegrator_CSTATE;

  /* Sum: '<S142>/Sum' */
  localB->Sum_c = ((*rtu_EngTrq + localB->UnaryMinus_k) - localB->InputDamping)
    - localB->OutputDamping;

  /* Gain: '<S142>/Inertia Ratio' */
  Bias = DrivetrainHevP4_P.Jt / (DrivetrainHevP4_P.Ji + DrivetrainHevP4_P.Jt);

  /* Gain: '<S142>/Inertia Ratio' */
  localB->InertiaRatio = Bias * localB->Sum_c;

  /* Sum: '<S142>/Sum1' */
  localB->Sum1 = localB->InertiaRatio + localB->OutputDamping;

  /* Abs: '<S143>/Abs' */
  localB->Abs = fabs(localB->Sum1);
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Memory: '<S145>/Memory' */
    localB->Memory_a = localDW->Memory_PreviousInput_i;

    /* Constant: '<S144>/Constant2' */
    localB->Constant2 = DrivetrainHevP4_P.Constant2_Value_m;
  }

  /* Integrator: '<S145>/Integrator' */
  zcEvent = rtsiGetIsOkayToUpdateMode(DrivetrainHevP4_M->solverInfo);
  if (zcEvent) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE_f,
                         (localB->Memory_a));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent || (localDW->Integrator_IWORK_i != 0)) {
      localX->Integrator_CSTATE_c = localB->Constant2;
    }
  }

  /* Integrator: '<S145>/Integrator' */
  localB->Integrator_e = localX->Integrator_CSTATE_c;

  /* Gain: '<S144>/ClutchGain' */
  localB->ClutchGain = DrivetrainHevP4_P.K_c * localB->Integrator_e;

  /* Saturate: '<S146>/Saturation' */
  if (localB->ClutchGain > DrivetrainHevP4_P.Saturation_UpperSat_p) {
    /* Saturate: '<S146>/Saturation' */
    localB->Saturation_d = DrivetrainHevP4_P.Saturation_UpperSat_p;
  } else if (localB->ClutchGain < DrivetrainHevP4_P.Saturation_LowerSat_dv) {
    /* Saturate: '<S146>/Saturation' */
    localB->Saturation_d = DrivetrainHevP4_P.Saturation_LowerSat_dv;
  } else {
    /* Saturate: '<S146>/Saturation' */
    localB->Saturation_d = localB->ClutchGain;
  }

  /* End of Saturate: '<S146>/Saturation' */

  /* Gain: '<S146>/Torque Conversion' */
  Bias = DrivetrainHevP4_P.Reff * DrivetrainHevP4_P.muk;

  /* Gain: '<S146>/Torque Conversion' */
  localB->TorqueConversion_h = Bias * localB->Saturation_d;

  /* Gain: '<S146>/Ratio of static to kinetic' */
  Bias = DrivetrainHevP4_P.mus / DrivetrainHevP4_P.muk;

  /* Gain: '<S146>/Ratio of static to kinetic' */
  localB->Ratioofstatictokinetic_i = Bias * localB->TorqueConversion_h;

  /* RelationalOperator: '<S143>/Relational Operator' */
  localB->RelationalOperator = (localB->Abs <= localB->Ratioofstatictokinetic_i);

  /* Logic: '<S139>/Logic' */
  localB->Logic = (localB->VelocitiesMatch && localB->RelationalOperator);

  /* Gain: '<S141>/Impeller Damping' */
  localB->ImpellerDamping = DrivetrainHevP4_P.bi *
    localX->LockedShaftIntegrator_CSTATE;

  /* Gain: '<S141>/Turbine Damping' */
  localB->TurbineDamping = DrivetrainHevP4_P.bt *
    localX->LockedShaftIntegrator_CSTATE;

  /* Sum: '<S141>/Sum' */
  localB->Sum_k = ((*rtu_EngTrq + localB->UnaryMinus_k) -
                   localB->ImpellerDamping) - localB->TurbineDamping;

  /* Gain: '<S141>/Inertia Ratio' */
  Bias = DrivetrainHevP4_P.Jt / (DrivetrainHevP4_P.Ji + DrivetrainHevP4_P.Jt);

  /* Gain: '<S141>/Inertia Ratio' */
  localB->InertiaRatio_p = Bias * localB->Sum_k;

  /* Sum: '<S141>/Sum1' */
  localB->Sum1_l = localB->InertiaRatio_p + localB->TurbineDamping;

  /* Abs: '<S138>/Abs' */
  localB->Abs_k = fabs(localB->Sum1_l);

  /* RelationalOperator: '<S138>/Relational Operator' */
  localB->RelationalOperator_a = (localB->Abs_k >=
    localB->Ratioofstatictokinetic_i);
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Memory: '<S140>/Memory' */
    localB->Memory_dr = localDW->Memory_PreviousInput_o;

    /* InitialCondition: '<S124>/IC' */
    if (localDW->IC_FirstOutputTime) {
      localDW->IC_FirstOutputTime = false;

      /* InitialCondition: '<S124>/IC' */
      localB->IC = DrivetrainHevP4_P.IC_Value;
    } else {
      /* InitialCondition: '<S124>/IC' incorporates:
       *  Constant: '<S124>/Constant1'
       */
      localB->IC = DrivetrainHevP4_P.Constant1_Value_nq;
    }

    /* End of InitialCondition: '<S124>/IC' */
  }

  /* CombinatorialLogic: '<S140>/Combinatorial  Logic' */
  zcEvent = localB->Logic;
  bpIndex = zcEvent;
  zcEvent = localB->RelationalOperator_a;
  bpIndex = (bpIndex << 1) + zcEvent;
  zcEvent = localB->Memory_dr;
  bpIndex = (bpIndex << 1) + zcEvent;
  *rty_Cltch2State = DrivetrainHevP4_P.CombinatorialLogic_table[bpIndex];

  /* Switch: '<S124>/Switch' */
  if (localB->IC > DrivetrainHevP4_P.Switch_Threshold_gc) {
    /* Switch: '<S124>/Switch' */
    localB->Switch = localX->LockedShaftIntegrator_CSTATE;
  } else {
    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S124>/Constant'
     */
    localB->Switch = DrivetrainHevP4_P.omegai_o;
  }

  /* End of Switch: '<S124>/Switch' */
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* InitialCondition: '<S129>/IC' */
    if (localDW->IC_FirstOutputTime_f) {
      localDW->IC_FirstOutputTime_f = false;

      /* InitialCondition: '<S129>/IC' */
      localB->IC_e = DrivetrainHevP4_P.IC_Value_o;
    } else {
      /* InitialCondition: '<S129>/IC' incorporates:
       *  Constant: '<S129>/Constant1'
       */
      localB->IC_e = DrivetrainHevP4_P.Constant1_Value_fd;
    }

    /* End of InitialCondition: '<S129>/IC' */

    /* InitialCondition: '<S123>/IC' */
    if (localDW->IC_FirstOutputTime_e) {
      localDW->IC_FirstOutputTime_e = false;

      /* InitialCondition: '<S123>/IC' */
      localB->IC_k = DrivetrainHevP4_P.IC_Value_j;
    } else {
      /* InitialCondition: '<S123>/IC' incorporates:
       *  Constant: '<S123>/Constant1'
       */
      localB->IC_k = DrivetrainHevP4_P.Constant1_Value_ci;
    }

    /* End of InitialCondition: '<S123>/IC' */
  }

  /* Switch: '<S129>/Switch' */
  if (localB->IC_e > DrivetrainHevP4_P.Switch_Threshold_c) {
    /* Switch: '<S129>/Switch' */
    localB->Switch_j = localX->LockedShaftIntegrator_CSTATE;
  } else {
    /* Switch: '<S129>/Switch' incorporates:
     *  Constant: '<S129>/Constant'
     */
    localB->Switch_j = DrivetrainHevP4_P.omegat_o;
  }

  /* End of Switch: '<S129>/Switch' */

  /* Switch: '<S123>/Switch' */
  if (localB->IC_k > DrivetrainHevP4_P.Switch_Threshold_o) {
    /* Switch: '<S123>/Switch' */
    localB->Switch_b = localX->PumpIntegrator_CSTATE;
  } else {
    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S123>/Constant'
     */
    localB->Switch_b = DrivetrainHevP4_P.omegai_o;
  }

  /* End of Switch: '<S123>/Switch' */

  /* If: '<S121>/If' incorporates:
   *  Constant: '<S149>/Constant1'
   *  Constant: '<S149>/Constant2'
   */
  rtPrevAction = localDW->If_ActiveSubsystem;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    rtAction = (int8_T)!*rty_Cltch2State;
    localDW->If_ActiveSubsystem = rtAction;
  } else {
    rtAction = localDW->If_ActiveSubsystem;
  }

  if ((rtPrevAction != rtAction) && (rtPrevAction == 1)) {
    /* Disable for Enabled SubSystem: '<S148>/LPF' */
    localDW->LPF_MODE = false;

    /* End of Disable for SubSystem: '<S148>/LPF' */
  }

  switch (rtAction) {
   case 0:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S121>/Locked' incorporates:
       *  ActionPort: '<S127>/Action'
       */
      /* InitializeConditions for If: '<S121>/If' incorporates:
       *  Integrator: '<S127>/Locked Shaft Integrator'
       */
      if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
        localX->LockedShaftIntegrator_CSTATE = 0.0;
      }

      localDW->LockedShaftIntegrator_IWORK = 1;

      /* End of InitializeConditions for SubSystem: '<S121>/Locked' */
    }

    /* Outputs for IfAction SubSystem: '<S121>/Locked' incorporates:
     *  ActionPort: '<S127>/Action'
     */
    /* Integrator: '<S127>/Locked Shaft Integrator' */
    /* Limited  Integrator  */
    if (localDW->LockedShaftIntegrator_IWORK != 0) {
      localX->LockedShaftIntegrator_CSTATE = localB->Switch_b;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (DrivetrainHevP4_M->solverInfo, true);
    }

    if (localX->LockedShaftIntegrator_CSTATE >=
        DrivetrainHevP4_P.LockedShaftIntegrator_UpperSat) {
      if (localX->LockedShaftIntegrator_CSTATE !=
          DrivetrainHevP4_P.LockedShaftIntegrator_UpperSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      localX->LockedShaftIntegrator_CSTATE =
        DrivetrainHevP4_P.LockedShaftIntegrator_UpperSat;
    } else if (localX->LockedShaftIntegrator_CSTATE <=
               DrivetrainHevP4_P.LockedShaftIntegrator_LowerSat) {
      if (localX->LockedShaftIntegrator_CSTATE !=
          DrivetrainHevP4_P.LockedShaftIntegrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      localX->LockedShaftIntegrator_CSTATE =
        DrivetrainHevP4_P.LockedShaftIntegrator_LowerSat;
    }

    /* Integrator: '<S127>/Locked Shaft Integrator' */
    localB->omega_h = localX->LockedShaftIntegrator_CSTATE;

    /* Gain: '<S127>/Impeller Damping' */
    localB->ImpellerDamping_i = DrivetrainHevP4_P.bi * localB->omega_h;

    /* Gain: '<S127>/Turbine Damping' */
    localB->TurbineDamping_e = DrivetrainHevP4_P.bt * localB->omega_h;

    /* Sum: '<S127>/Add1' */
    localB->Add1_o4 = localB->ImpellerDamping_i + localB->TurbineDamping_e;

    /* Merge: '<S121>/Merge3' incorporates:
     *  Sum: '<S127>/Add'
     */
    localB->Merge3 = *rtu_EngTrq - localB->Add1_o4;

    /* Sum: '<S127>/Sum' */
    localB->Sum_l = (*rtu_EngTrq + localB->UnaryMinus_k) - localB->Add1_o4;

    /* Gain: '<S127>/Inertia' */
    Bias = 1.0 / (DrivetrainHevP4_P.Ji + DrivetrainHevP4_P.Jt);

    /* Gain: '<S127>/Inertia' */
    localB->Inertia = Bias * localB->Sum_l;

    /* Product: '<S127>/Product1' */
    localB->Product1_j = localB->omega_h * localB->Inertia;

    /* Gain: '<S127>/Inertia1' */
    localB->PwrStoredImp_g = DrivetrainHevP4_P.Ji * localB->Product1_j;

    /* Gain: '<S127>/Inertia2' */
    localB->PwrStoredTurb_i = DrivetrainHevP4_P.Jt * localB->Product1_j;

    /* UnaryMinus: '<S127>/Unary Minus' */
    localB->UnaryMinus_f = -localB->Add1_o4;

    /* Product: '<S127>/Product' */
    localB->PwrDampLoss_j = localB->omega_h * localB->UnaryMinus_f;

    /* Merge: '<S121>/Merge' incorporates:
     *  SignalConversion: '<S127>/Signal Conversion'
     */
    localB->TurbineSpd = localB->omega_h;

    /* SignalConversion: '<S127>/Signal Conversion1' */
    *rty_EngSpd = localB->omega_h;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S127>/Signal Conversion2'
     */
    localB->PwrDampLoss = localB->PwrDampLoss_j;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  Constant: '<S127>/Constant2'
     *  SignalConversion generated from: '<S127>/Signal Conversion2'
     */
    localB->PwrFluidHeatLoss = DrivetrainHevP4_P.Constant2_Value;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  Constant: '<S127>/Constant1'
     *  SignalConversion generated from: '<S127>/Signal Conversion2'
     */
    localB->PwrCltchLoss = DrivetrainHevP4_P.Constant1_Value;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S127>/Signal Conversion2'
     */
    localB->PwrStoredImp = localB->PwrStoredImp_g;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S127>/Signal Conversion2'
     */
    localB->PwrStoredTurb = localB->PwrStoredTurb_i;
    if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
      /* Merge: '<S121>/Merge2' incorporates:
       *  Constant: '<S127>/Constant'
       *  SignalConversion generated from: '<S127>/Speed Ratio'
       */
      localB->SpdRatio = DrivetrainHevP4_P.Constant_Value_p;
    }

    /* End of Outputs for SubSystem: '<S121>/Locked' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S121>/Unlocked' incorporates:
       *  ActionPort: '<S128>/Action'
       */
      /* InitializeConditions for If: '<S121>/If' incorporates:
       *  Integrator: '<S128>/Pump Integrator'
       *  Integrator: '<S128>/Turbine Integrator'
       */
      if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
        localX->PumpIntegrator_CSTATE = 0.0;
        localX->TurbineIntegrator_CSTATE = 0.0;
      }

      localDW->PumpIntegrator_IWORK = 1;
      localDW->TurbineIntegrator_IWORK = 1;

      /* End of InitializeConditions for SubSystem: '<S121>/Unlocked' */
    }

    /* Outputs for IfAction SubSystem: '<S121>/Unlocked' incorporates:
     *  ActionPort: '<S128>/Action'
     */
    /* Integrator: '<S128>/Pump Integrator' */
    /* Limited  Integrator  */
    if (localDW->PumpIntegrator_IWORK != 0) {
      localX->PumpIntegrator_CSTATE = localB->Switch;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (DrivetrainHevP4_M->solverInfo, true);
    }

    if (localX->PumpIntegrator_CSTATE >=
        DrivetrainHevP4_P.PumpIntegrator_UpperSat) {
      if (localX->PumpIntegrator_CSTATE !=
          DrivetrainHevP4_P.PumpIntegrator_UpperSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      localX->PumpIntegrator_CSTATE = DrivetrainHevP4_P.PumpIntegrator_UpperSat;
    } else if (localX->PumpIntegrator_CSTATE <=
               DrivetrainHevP4_P.PumpIntegrator_LowerSat) {
      if (localX->PumpIntegrator_CSTATE !=
          DrivetrainHevP4_P.PumpIntegrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      localX->PumpIntegrator_CSTATE = DrivetrainHevP4_P.PumpIntegrator_LowerSat;
    }

    /* Integrator: '<S128>/Pump Integrator' */
    localB->PumpIntegrator = localX->PumpIntegrator_CSTATE;

    /* Integrator: '<S128>/Turbine Integrator' */
    /* Limited  Integrator  */
    if (localDW->TurbineIntegrator_IWORK != 0) {
      localX->TurbineIntegrator_CSTATE = localB->Switch_j;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (DrivetrainHevP4_M->solverInfo, true);
    }

    if (localX->TurbineIntegrator_CSTATE >=
        DrivetrainHevP4_P.TurbineIntegrator_UpperSat) {
      if (localX->TurbineIntegrator_CSTATE !=
          DrivetrainHevP4_P.TurbineIntegrator_UpperSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      localX->TurbineIntegrator_CSTATE =
        DrivetrainHevP4_P.TurbineIntegrator_UpperSat;
    } else if (localX->TurbineIntegrator_CSTATE <=
               DrivetrainHevP4_P.TurbineIntegrator_LowerSat) {
      if (localX->TurbineIntegrator_CSTATE !=
          DrivetrainHevP4_P.TurbineIntegrator_LowerSat) {
        rtsiSetBlockStateForSolverChangedAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
        rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
          (DrivetrainHevP4_M->solverInfo, true);
      }

      localX->TurbineIntegrator_CSTATE =
        DrivetrainHevP4_P.TurbineIntegrator_LowerSat;
    }

    /* Integrator: '<S128>/Turbine Integrator' */
    localB->omega = localX->TurbineIntegrator_CSTATE;

    /* Sum: '<S128>/W_Slip' */
    localB->W_Slip = localB->PumpIntegrator - localB->omega;

    /* Gain: '<S128>/4' */
    localB->u_i = DrivetrainHevP4_P.u_Gain * localB->W_Slip;

    /* Gain: '<S128>/Turbine Damping' */
    localB->TurbineDamping_f = DrivetrainHevP4_P.bt * localB->omega;

    /* Product: '<S128>/Product1' */
    localB->Product1_b = localB->omega * localB->TurbineDamping_f;

    /* Gain: '<S128>/Impeller Damping' */
    localB->ImpellerDamping_o = DrivetrainHevP4_P.bi * localB->PumpIntegrator;

    /* Product: '<S128>/Product' */
    localB->Product_af = localB->PumpIntegrator * localB->ImpellerDamping_o;

    /* Sum: '<S128>/Add' */
    localB->PwrDampLoss_hd = (0.0 - localB->Product1_b) - localB->Product_af;
    if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
      localB->VectorConcatenate_if[0] = DrivetrainHevP4_P.Constant1_Value_k;
      memcpy(&localB->VectorConcatenate_if[1], &DrivetrainHevP4_P.phi[0], 47U *
             sizeof(real_T));
    }

    /* MinMax: '<S149>/MinMax' incorporates:
     *  Constant: '<S149>/Constant1'
     *  Constant: '<S149>/Constant2'
     */
    Bias = localB->VectorConcatenate_if[0];
    for (i = 0; i < 47; i++) {
      u1 = localB->VectorConcatenate_if[i + 1];
      if ((!(Bias > u1)) && (!rtIsNaN(u1))) {
        Bias = u1;
      }
    }

    /* MinMax: '<S149>/MinMax' */
    localB->MinMax = Bias;

    /* Abs: '<S149>/Abs' */
    localB->Abs_ce = fabs(localB->PumpIntegrator);

    /* RelationalOperator: '<S153>/Compare' incorporates:
     *  Constant: '<S153>/Constant'
     */
    localB->Compare_l = (localB->Abs_ce >
                         DrivetrainHevP4_P.CompareToConstant2_const);

    /* Switch: '<S149>/Switch' */
    if (localB->Compare_l) {
      /* RelationalOperator: '<S157>/Compare' incorporates:
       *  Constant: '<S157>/Constant'
       */
      localB->Compare_c = (localB->PumpIntegrator <=
                           DrivetrainHevP4_P.div0protectpoly_thresh);

      /* RelationalOperator: '<S156>/Compare' incorporates:
       *  Constant: '<S156>/Constant'
       */
      Bias = -DrivetrainHevP4_P.div0protectpoly_thresh;

      /* RelationalOperator: '<S156>/Compare' */
      localB->Compare_cn = (localB->PumpIntegrator >= Bias);

      /* Logic: '<S155>/Logical Operator' */
      localB->LogicalOperator_ie = (localB->Compare_cn && localB->Compare_c);

      /* Switch: '<S155>/Switch' */
      if (localB->LogicalOperator_ie) {
        /* Fcn: '<S155>/Fcn' */
        u1 = localB->PumpIntegrator;
        Bias = rt_powd_snf(u1, 2.0);

        /* Fcn: '<S155>/Fcn' */
        localB->Fcn_h = 2.0 / (3.0 - Bias);

        /* Switch: '<S155>/Switch1' */
        if (localB->PumpIntegrator >= DrivetrainHevP4_P.Switch1_Threshold) {
          /* Switch: '<S155>/Switch1' incorporates:
           *  Constant: '<S155>/Constant'
           */
          localB->Switch1_i = DrivetrainHevP4_P.Constant_Value_c;
        } else {
          /* UnaryMinus: '<S155>/Unary Minus' incorporates:
           *  Constant: '<S155>/Constant'
           */
          localB->UnaryMinus_i = -DrivetrainHevP4_P.Constant_Value_c;

          /* Switch: '<S155>/Switch1' */
          localB->Switch1_i = localB->UnaryMinus_i;
        }

        /* End of Switch: '<S155>/Switch1' */

        /* Product: '<S155>/Product' */
        localB->Product_mm = localB->Switch1_i * localB->Fcn_h;

        /* Switch: '<S155>/Switch' */
        localB->Switch_f = localB->Product_mm;
      } else {
        /* Switch: '<S155>/Switch' */
        localB->Switch_f = localB->PumpIntegrator;
      }

      /* End of Switch: '<S155>/Switch' */

      /* Product: '<S149>/Divide' */
      localB->phi_b = localB->omega / localB->Switch_f;

      /* Switch: '<S149>/Switch' */
      localB->phi = localB->phi_b;
    } else {
      /* Switch: '<S149>/Switch' incorporates:
       *  Constant: '<S149>/Constant'
       */
      localB->phi = DrivetrainHevP4_P.Constant_Value_i;
    }

    /* End of Switch: '<S149>/Switch' */

    /* RelationalOperator: '<S154>/LowerRelop1' */
    localB->LowerRelop1 = (localB->phi > localB->MinMax);

    /* Gain: '<S149>/Gain' */
    localB->Gain_k = DrivetrainHevP4_P.Gain_Gain_h * localB->MinMax;

    /* RelationalOperator: '<S154>/UpperRelop' */
    localB->UpperRelop = (localB->phi < localB->Gain_k);

    /* Switch: '<S154>/Switch' */
    if (localB->UpperRelop) {
      /* Switch: '<S154>/Switch' */
      localB->Switch_pe = localB->Gain_k;
    } else {
      /* Switch: '<S154>/Switch' */
      localB->Switch_pe = localB->phi;
    }

    /* End of Switch: '<S154>/Switch' */

    /* Switch: '<S154>/Switch2' */
    if (localB->LowerRelop1) {
      /* Switch: '<S154>/Switch2' */
      localB->Switch2 = localB->MinMax;
    } else {
      /* Switch: '<S154>/Switch2' */
      localB->Switch2 = localB->Switch_pe;
    }

    /* End of Switch: '<S154>/Switch2' */

    /* PreLookup: '<S147>/speed ratio Prelookup' incorporates:
     *  Constant: '<S147>/phi'
     */
    localB->speedratioPrelookup_o1 = plook_bincpa(localB->Switch2,
      DrivetrainHevP4_P.phi, 46U, &localB->speedratioPrelookup_o2,
      &localDW->speedratioPrelookup_DWORK1);

    /* Interpolation_n-D: '<S147>/Torque Ratio zeta Interpolation' */
    Bias = localB->speedratioPrelookup_o2;
    bpIndex = localB->speedratioPrelookup_o1;

    /* Interpolation_n-D: '<S147>/Torque Ratio zeta Interpolation' incorporates:
     *  Constant: '<S147>/zeta'
     */
    localB->TorqueRatiozetaInterpolation = intrp1d_la_pw(bpIndex, Bias,
      DrivetrainHevP4_P.zeta, 46U);

    /* RelationalOperator: '<S150>/Compare' incorporates:
     *  Constant: '<S148>/Constant'
     *  Constant: '<S150>/Constant'
     */
    localB->Compare_aj = (DrivetrainHevP4_P.tauTC >
                          DrivetrainHevP4_P.Constant_Value_mk);
    if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
      /* SignalConversion generated from: '<S151>/Enable' */
      localB->HiddenBuf_InsertedFor_LPF_at_inport_2 = localB->Compare_aj;

      /* Outputs for Enabled SubSystem: '<S148>/LPF' incorporates:
       *  EnablePort: '<S151>/Enable'
       */
      if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
        if (localB->HiddenBuf_InsertedFor_LPF_at_inport_2) {
          if (!localDW->LPF_MODE) {
            /* InitializeConditions for Integrator: '<S152>/Integrator' */
            localX->Integrator_CSTATE_d = DrivetrainHevP4_P.Integrator_IC;
            localDW->LPF_MODE = true;
          }
        } else {
          localDW->LPF_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S148>/LPF' */
    }

    /* Outputs for Enabled SubSystem: '<S148>/LPF' incorporates:
     *  EnablePort: '<S151>/Enable'
     */
    if (localDW->LPF_MODE) {
      /* Integrator: '<S152>/Integrator' */
      localB->Integrator_dg = localX->Integrator_CSTATE_d;

      /* Gain: '<S151>/Gain' incorporates:
       *  Constant: '<S148>/Constant'
       */
      localB->Gain_l = DrivetrainHevP4_P.Gain_Gain_d * DrivetrainHevP4_P.tauTC;

      /* Saturate: '<S151>/Saturation' */
      if (localB->Gain_l > DrivetrainHevP4_P.Saturation_UpperSat_h) {
        /* Saturate: '<S151>/Saturation' */
        localB->Saturation_c = DrivetrainHevP4_P.Saturation_UpperSat_h;
      } else if (localB->Gain_l < DrivetrainHevP4_P.Saturation_LowerSat_h) {
        /* Saturate: '<S151>/Saturation' */
        localB->Saturation_c = DrivetrainHevP4_P.Saturation_LowerSat_h;
      } else {
        /* Saturate: '<S151>/Saturation' */
        localB->Saturation_c = localB->Gain_l;
      }

      /* End of Saturate: '<S151>/Saturation' */

      /* Product: '<S151>/Product' */
      localB->Product_b0 = 1.0 / localB->Saturation_c;

      /* Sum: '<S152>/Sum' */
      localB->Sum_ag = localB->TorqueRatiozetaInterpolation -
        localB->Integrator_dg;

      /* Product: '<S152>/Product' */
      localB->Product_fu = localB->Product_b0 * localB->Sum_ag;
    }

    /* End of Outputs for SubSystem: '<S148>/LPF' */

    /* Switch: '<S148>/Switch' incorporates:
     *  Constant: '<S148>/Constant'
     */
    if (DrivetrainHevP4_P.tauTC > DrivetrainHevP4_P.Switch_Threshold_m) {
      /* Switch: '<S148>/Switch' */
      localB->Switch_cs = localB->Integrator_dg;
    } else {
      /* Switch: '<S148>/Switch' */
      localB->Switch_cs = localB->TorqueRatiozetaInterpolation;
    }

    /* End of Switch: '<S148>/Switch' */
    for (i = 0; i < 47; i++) {
      /* Switch: '<S147>/Switch1' incorporates:
       *  Constant: '<S147>/Constant1'
       */
      if (DrivetrainHevP4_P.TorqueConverter_KType >
          DrivetrainHevP4_P.Switch1_Threshold_j) {
        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S147>/psi'
         */
        localB->Switch1[i] = DrivetrainHevP4_P.psi[i];
      } else {
        /* Product: '<S147>/Product3' incorporates:
         *  Constant: '<S147>/psi'
         */
        localB->Product3_a0[i] = 1.0 / DrivetrainHevP4_P.psi[i] /
          DrivetrainHevP4_P.psi[i];

        /* Switch: '<S147>/Switch1' */
        localB->Switch1[i] = localB->Product3_a0[i];
      }

      /* End of Switch: '<S147>/Switch1' */
    }

    /* Interpolation_n-D: '<S147>/Capacity, K-factor Interpolation' */
    Bias = localB->speedratioPrelookup_o2;
    bpIndex = localB->speedratioPrelookup_o1;

    /* Interpolation_n-D: '<S147>/Capacity, K-factor Interpolation' incorporates:
     *  Switch: '<S147>/Switch1'
     */
    localB->CapacityKfactorInterpolation = intrp1d_la_pw(bpIndex, Bias,
      localB->Switch1, 46U);

    /* Sum: '<S149>/Add' */
    localB->Add_a = localB->PumpIntegrator - localB->omega;

    /* Trigonometry: '<S147>/Trigonometric Function' */
    localB->TrigonometricFunction_ey = tanh(localB->Add_a);

    /* Product: '<S147>/Divide1' */
    localB->T1 = localB->CapacityKfactorInterpolation *
      localB->TrigonometricFunction_ey * localB->PumpIntegrator *
      localB->PumpIntegrator;

    /* Saturate: '<S147>/uniclutch' */
    if (localB->T1 > DrivetrainHevP4_P.uniclutch_UpperSat) {
      /* Saturate: '<S147>/uniclutch' */
      localB->uniclutch = DrivetrainHevP4_P.uniclutch_UpperSat;
    } else if (localB->T1 < DrivetrainHevP4_P.uniclutch_LowerSat) {
      /* Saturate: '<S147>/uniclutch' */
      localB->uniclutch = DrivetrainHevP4_P.uniclutch_LowerSat;
    } else {
      /* Saturate: '<S147>/uniclutch' */
      localB->uniclutch = localB->T1;
    }

    /* End of Saturate: '<S147>/uniclutch' */

    /* Product: '<S147>/Divide2' */
    localB->T2 = localB->Switch_cs * localB->uniclutch;

    /* Trigonometry: '<S128>/Trigonometric Function' */
    localB->TrigonometricFunction_g = tanh(localB->u_i);

    /* Product: '<S128>/Max Dynamic Friction Torque' */
    localB->MaxDynamicFrictionTorque = localB->TorqueConversion_h *
      localB->TrigonometricFunction_g;

    /* Sum: '<S128>/Output Sum' */
    localB->OutputSum = (localB->T2 + localB->MaxDynamicFrictionTorque) -
      localB->TurbineDamping_f;

    /* Sum: '<S128>/Add1' */
    localB->Add1_a = localB->OutputSum + localB->UnaryMinus_k;

    /* Sum: '<S128>/Input Sum' */
    localB->InputSum = ((*rtu_EngTrq - localB->MaxDynamicFrictionTorque) -
                        localB->uniclutch) - localB->ImpellerDamping_o;

    /* Gain: '<S128>/Impeller Inertia' */
    Bias = 1.0 / DrivetrainHevP4_P.Ji;

    /* Gain: '<S128>/Impeller Inertia' */
    localB->ImpellerInertia = Bias * localB->InputSum;

    /* Product: '<S128>/Product2' */
    localB->PwrStoredImp_b = localB->InputSum * localB->PumpIntegrator;

    /* Product: '<S128>/Product3' */
    localB->PwrStoredTurb_l = localB->Add1_a * localB->omega;

    /* Product: '<S128>/Product5' */
    localB->Product5_k = localB->W_Slip * localB->MaxDynamicFrictionTorque;

    /* Merge: '<S121>/Merge' incorporates:
     *  SignalConversion: '<S128>/Signal Conversion'
     */
    localB->TurbineSpd = localB->omega;

    /* SignalConversion: '<S128>/Signal Conversion1' */
    *rty_EngSpd = localB->PumpIntegrator;

    /* Merge: '<S121>/Merge2' incorporates:
     *  SignalConversion: '<S128>/Signal Conversion2'
     */
    localB->SpdRatio = localB->Switch2;

    /* Merge: '<S121>/Merge3' incorporates:
     *  SignalConversion: '<S128>/Signal Conversion3'
     */
    localB->Merge3 = localB->OutputSum;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S128>/Signal Conversion4'
     */
    localB->PwrDampLoss = localB->PwrDampLoss_hd;

    /* Product: '<S147>/Product' */
    localB->Product_gx = localB->uniclutch * localB->PumpIntegrator;

    /* Product: '<S147>/Product1' */
    localB->Product1_c = localB->T2 * localB->omega;

    /* Sum: '<S147>/Subtract' */
    localB->Subtract_j = localB->Product1_c - localB->Product_gx;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S128>/Signal Conversion4'
     */
    localB->PwrFluidHeatLoss = localB->Subtract_j;

    /* UnaryMinus: '<S128>/Unary Minus' */
    localB->PwrCltchLoss_g = -localB->Product5_k;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S128>/Signal Conversion4'
     */
    localB->PwrCltchLoss = localB->PwrCltchLoss_g;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S128>/Signal Conversion4'
     */
    localB->PwrStoredImp = localB->PwrStoredImp_b;

    /* Merge generated from: '<S121>/Merge4' incorporates:
     *  SignalConversion generated from: '<S128>/Signal Conversion4'
     */
    localB->PwrStoredTurb = localB->PwrStoredTurb_l;

    /* Gain: '<S128>/Turbine Inertia' */
    Bias = 1.0 / DrivetrainHevP4_P.Jt;

    /* Gain: '<S128>/Turbine Inertia' */
    localB->TurbineInertia = Bias * localB->Add1_a;

    /* End of Outputs for SubSystem: '<S121>/Unlocked' */
    break;
  }

  /* End of If: '<S121>/If' */

  /* Product: '<S122>/Product' */
  localB->Product_o = *rtu_EngTrq * *rty_EngSpd;

  /* Product: '<S122>/Product1' */
  localB->Product1_h = localB->UnaryMinus_k * localB->TurbineSpd;

  /* UnaryMinus: '<S130>/Unary Minus' */
  localB->UnaryMinus_od[0] = -localB->PwrStoredImp;
  localB->UnaryMinus_od[1] = -localB->PwrStoredTurb;

  /* Saturate: '<S130>/Saturation1' */
  if (localB->Product_o > DrivetrainHevP4_P.Saturation1_UpperSat_b) {
    u1 = DrivetrainHevP4_P.Saturation1_UpperSat_b;
  } else if (localB->Product_o < DrivetrainHevP4_P.Saturation1_LowerSat_k) {
    u1 = DrivetrainHevP4_P.Saturation1_LowerSat_k;
  } else {
    u1 = localB->Product_o;
  }

  /* Saturate: '<S130>/Saturation1' */
  localB->Saturation1[0] = u1;

  /* Saturate: '<S130>/Saturation1' */
  if (localB->Product1_h > DrivetrainHevP4_P.Saturation1_UpperSat_b) {
    u1 = DrivetrainHevP4_P.Saturation1_UpperSat_b;
  } else if (localB->Product1_h < DrivetrainHevP4_P.Saturation1_LowerSat_k) {
    u1 = DrivetrainHevP4_P.Saturation1_LowerSat_k;
  } else {
    u1 = localB->Product1_h;
  }

  /* Saturate: '<S130>/Saturation1' */
  localB->Saturation1[1] = u1;

  /* Saturate: '<S130>/Saturation1' */
  u1 = localB->UnaryMinus_od[0];
  if (u1 > DrivetrainHevP4_P.Saturation1_UpperSat_b) {
    u1 = DrivetrainHevP4_P.Saturation1_UpperSat_b;
  } else if (u1 < DrivetrainHevP4_P.Saturation1_LowerSat_k) {
    u1 = DrivetrainHevP4_P.Saturation1_LowerSat_k;
  }

  /* Saturate: '<S130>/Saturation1' */
  localB->Saturation1[2] = u1;

  /* Saturate: '<S130>/Saturation1' */
  u1 = localB->UnaryMinus_od[1];
  if (u1 > DrivetrainHevP4_P.Saturation1_UpperSat_b) {
    u1 = DrivetrainHevP4_P.Saturation1_UpperSat_b;
  } else if (u1 < DrivetrainHevP4_P.Saturation1_LowerSat_k) {
    u1 = DrivetrainHevP4_P.Saturation1_LowerSat_k;
  }

  /* Saturate: '<S130>/Saturation1' */
  localB->Saturation1[3] = u1;

  /* Sum: '<S130>/Sum of Elements1' */
  Bias = localB->Saturation1[0];
  Bias += localB->Saturation1[1];
  Bias += localB->Saturation1[2];
  Bias += localB->Saturation1[3];

  /* Sum: '<S130>/Sum of Elements1' */
  localB->SumofElements1 = Bias;

  /* Abs: '<S130>/Abs' */
  localB->Abs_c = fabs(localB->SumofElements1);

  /* Saturate: '<S130>/Saturation' */
  if (localB->Product_o > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (localB->Product_o < DrivetrainHevP4_P.Saturation_LowerSat_f) {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  } else {
    u1 = localB->Product_o;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[0] = u1;

  /* Saturate: '<S130>/Saturation' */
  if (localB->Product1_h > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (localB->Product1_h < DrivetrainHevP4_P.Saturation_LowerSat_f) {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  } else {
    u1 = localB->Product1_h;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[1] = u1;

  /* Saturate: '<S130>/Saturation' */
  if (localB->PwrDampLoss > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (localB->PwrDampLoss < DrivetrainHevP4_P.Saturation_LowerSat_f) {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  } else {
    u1 = localB->PwrDampLoss;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[2] = u1;

  /* Saturate: '<S130>/Saturation' */
  if (localB->PwrFluidHeatLoss > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (localB->PwrFluidHeatLoss < DrivetrainHevP4_P.Saturation_LowerSat_f)
  {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  } else {
    u1 = localB->PwrFluidHeatLoss;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[3] = u1;

  /* Saturate: '<S130>/Saturation' */
  if (localB->PwrCltchLoss > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (localB->PwrCltchLoss < DrivetrainHevP4_P.Saturation_LowerSat_f) {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  } else {
    u1 = localB->PwrCltchLoss;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[4] = u1;

  /* Saturate: '<S130>/Saturation' */
  u1 = localB->UnaryMinus_od[0];
  if (u1 > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (u1 < DrivetrainHevP4_P.Saturation_LowerSat_f) {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[5] = u1;

  /* Saturate: '<S130>/Saturation' */
  u1 = localB->UnaryMinus_od[1];
  if (u1 > DrivetrainHevP4_P.Saturation_UpperSat_n) {
    u1 = DrivetrainHevP4_P.Saturation_UpperSat_n;
  } else if (u1 < DrivetrainHevP4_P.Saturation_LowerSat_f) {
    u1 = DrivetrainHevP4_P.Saturation_LowerSat_f;
  }

  /* Saturate: '<S130>/Saturation' */
  localB->Saturation_h[6] = u1;

  /* Sum: '<S130>/Sum of Elements' */
  Bias = -0.0;
  for (i = 0; i < 7; i++) {
    Bias += localB->Saturation_h[i];
  }

  /* Sum: '<S130>/Sum of Elements' */
  localB->SumofElements_o = Bias;

  /* RelationalOperator: '<S133>/Compare' incorporates:
   *  Constant: '<S133>/Constant'
   */
  Bias = -DrivetrainHevP4_P.div0protectabspoly_thresh_e;

  /* RelationalOperator: '<S133>/Compare' */
  localB->Compare = (localB->SumofElements_o >= Bias);

  /* RelationalOperator: '<S134>/Compare' incorporates:
   *  Constant: '<S134>/Constant'
   */
  localB->Compare_i = (localB->SumofElements_o <=
                       DrivetrainHevP4_P.div0protectabspoly_thresh_e);

  /* Logic: '<S132>/Logical Operator' */
  localB->LogicalOperator = (localB->Compare && localB->Compare_i);

  /* Switch: '<S132>/Switch' */
  if (localB->LogicalOperator) {
    /* Fcn: '<S132>/Fcn' */
    u1 = localB->SumofElements_o / 1.0e-6;
    Bias = rt_powd_snf(u1, 2.0);

    /* Fcn: '<S132>/Fcn' */
    localB->Fcn_h2 = 2.0E-6 / (3.0 - Bias);

    /* Switch: '<S132>/Switch' */
    localB->Switch_c = localB->Fcn_h2;
  } else {
    /* Abs: '<S132>/Abs' */
    localB->Abs_o = fabs(localB->SumofElements_o);

    /* Switch: '<S132>/Switch' */
    localB->Switch_c = localB->Abs_o;
  }

  /* End of Switch: '<S132>/Switch' */

  /* Product: '<S130>/Divide' */
  localB->Divide_a = localB->Abs_c / localB->Switch_c;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Constant: '<S121>/Clutch Force' */
    localB->ClutchForce = DrivetrainHevP4_P.ClutchForce_Value;

    /* Product: '<S144>/s2hz' incorporates:
     *  Constant: '<S144>/Constant1'
     */
    localB->s2hz = 1.0 / DrivetrainHevP4_P.tauC;

    /* Gain: '<S144>/Hz2rad' */
    localB->Hz2rad = DrivetrainHevP4_P.Hz2rad_Gain * localB->s2hz;
  }

  /* Relay: '<S144>/Relay1' */
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    localDW->Relay1_Mode = ((*rty_EngSpd >= DrivetrainHevP4_P.omegal) ||
      ((!(*rty_EngSpd <= DrivetrainHevP4_P.omegau)) && localDW->Relay1_Mode));
  }

  if (localDW->Relay1_Mode) {
    /* Relay: '<S144>/Relay1' */
    localB->Relay1 = DrivetrainHevP4_P.Relay1_YOn;
  } else {
    /* Relay: '<S144>/Relay1' */
    localB->Relay1 = DrivetrainHevP4_P.Relay1_YOff;
  }

  /* End of Relay: '<S144>/Relay1' */

  /* RelationalOperator: '<S144>/Relational Operator' incorporates:
   *  Constant: '<S144>/Constant'
   */
  localB->RelationalOperator_p = (localB->SpdRatio >= DrivetrainHevP4_P.philu);

  /* Logic: '<S144>/Logic' */
  localB->Logic_n = (localB->Relay1 && localB->RelationalOperator_p);

  /* DataTypeConversion: '<S144>/Data Type Conversion' */
  localB->DataTypeConversion = localB->Logic_n;

  /* Switch: '<S145>/Switch' */
  if (localB->Memory_a != 0.0) {
    /* Switch: '<S145>/Switch' */
    localB->Switch_o = localB->Integrator_e;
  } else {
    /* Switch: '<S145>/Switch' */
    localB->Switch_o = localB->Constant2;
  }

  /* End of Switch: '<S145>/Switch' */

  /* Sum: '<S145>/Sum' */
  localB->Sum_a = localB->DataTypeConversion - localB->Switch_o;

  /* Product: '<S145>/Product' */
  localB->Product_a = localB->Hz2rad * localB->Sum_a;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Product: '<S89>/Product' incorporates:
     *  Constant: '<S89>/Constant'
     */
    localB->Product_oq = 1.0 / DrivetrainHevP4_P.tau_s;

    /* Gain: '<S89>/2*pi' */
    localB->upi = DrivetrainHevP4_P.upi_Gain * localB->Product_oq;

    /* Memory: '<S91>/Memory' */
    localB->Memory_n = localDW->Memory_PreviousInput_m;

    /* Constant: '<S89>/Constant1' */
    localB->Constant1_d = DrivetrainHevP4_P.IdealFixedGearTransmission_G_o;
  }

  /* Integrator: '<S91>/Integrator' */
  zcEvent = rtsiGetIsOkayToUpdateMode(DrivetrainHevP4_M->solverInfo);
  if (zcEvent) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE_k,
                         (localB->Memory_n));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent || (localDW->Integrator_IWORK_a != 0)) {
      localX->Integrator_CSTATE_ho = localB->Constant1_d;
    }
  }

  *rty_TransGear = localX->Integrator_CSTATE_ho;

  /* End of Integrator: '<S91>/Integrator' */
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Memory: '<S73>/Memory' */
    localB->Memory_d0 = localDW->Memory_PreviousInput_a;

    /* Constant: '<S72>/domega_o' */
    localB->domega_o_d = DrivetrainHevP4_P.domega_o;
  }

  /* Integrator: '<S73>/Integrator' */
  zcEvent = rtsiGetIsOkayToUpdateMode(DrivetrainHevP4_M->solverInfo);
  if (zcEvent) {
    zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Integrator_Reset_ZCE_p,
                         (localB->Memory_d0));
    zcEvent = (zcEvent_0 != NO_ZCEVENT);

    /* evaluate zero-crossings */
    if (zcEvent || (localDW->Integrator_IWORK_k3 != 0)) {
      localX->Integrator_CSTATE_mi = localB->domega_o_d;
    }
  }

  /* Integrator: '<S73>/Integrator' */
  localB->Integrator_o = localX->Integrator_CSTATE_mi;

  /* Gain: '<S72>/Gain2' */
  localB->Gain2_k = DrivetrainHevP4_P.b * localB->Integrator_o;

  /* Integrator: '<S72>/Integrator' */
  localB->Integrator_n = localX->Integrator_CSTATE_bd;

  /* Gain: '<S72>/Gain1' */
  localB->Gain1_a = DrivetrainHevP4_P.k * localB->Integrator_n;

  /* Sum: '<S72>/Subtract1' */
  localB->Subtract1_a = localB->Gain2_k + localB->Gain1_a;

  /* UnaryMinus: '<S72>/Unary Minus' */
  localB->UnaryMinus_d = -localB->Subtract1_a;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* InitialCondition: '<S96>/IC' */
    if (localDW->IC_FirstOutputTime_eo) {
      localDW->IC_FirstOutputTime_eo = false;

      /* InitialCondition: '<S96>/IC' */
      localB->IC_b = DrivetrainHevP4_P.IC_Value_oc;
    } else {
      /* InitialCondition: '<S96>/IC' incorporates:
       *  Constant: '<S96>/Constant1'
       */
      localB->IC_b = DrivetrainHevP4_P.Constant1_Value_cd;
    }

    /* End of InitialCondition: '<S96>/IC' */

    /* InitialCondition: '<S94>/IC' */
    if (localDW->IC_FirstOutputTime_k) {
      localDW->IC_FirstOutputTime_k = false;

      /* InitialCondition: '<S94>/IC' */
      localB->IC_a = DrivetrainHevP4_P.IC_Value_g;
    } else {
      /* InitialCondition: '<S94>/IC' incorporates:
       *  Constant: '<S94>/Constant1'
       */
      localB->IC_a = DrivetrainHevP4_P.Constant1_Value_fg;
    }

    /* End of InitialCondition: '<S94>/IC' */
  }

  /* Switch: '<S96>/Switch' */
  if (localB->IC_b > DrivetrainHevP4_P.Switch_Threshold_j) {
    /* Switch: '<S96>/Switch' */
    localB->Switch_k = localX->w;
  } else {
    /* Switch: '<S96>/Switch' incorporates:
     *  Constant: '<S96>/Constant'
     */
    localB->Switch_k = DrivetrainHevP4_P.omega_o;
  }

  /* End of Switch: '<S96>/Switch' */

  /* Switch: '<S94>/Switch' */
  if (localB->IC_a > DrivetrainHevP4_P.Switch_Threshold_ov) {
    /* Switch: '<S94>/Switch' */
    localB->Switch_e = localX->w;
  } else {
    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S94>/Constant'
     */
    localB->Switch_e = DrivetrainHevP4_P.IdealFixedGearTransmission_omegaN_o;
  }

  /* End of Switch: '<S94>/Switch' */
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* InitialCondition: '<S92>/IC' */
    if (localDW->IC_FirstOutputTime_h) {
      localDW->IC_FirstOutputTime_h = false;

      /* InitialCondition: '<S92>/IC' */
      localB->IC_g = DrivetrainHevP4_P.IC_Value_g0;
    } else {
      /* InitialCondition: '<S92>/IC' incorporates:
       *  Constant: '<S92>/Constant1'
       */
      localB->IC_g = DrivetrainHevP4_P.Constant1_Value_ep;
    }

    /* End of InitialCondition: '<S92>/IC' */
  }

  /* Switch: '<S92>/Switch' */
  if (localB->IC_g > DrivetrainHevP4_P.Switch_Threshold_n) {
    /* Switch: '<S92>/Switch' */
    localB->Switch_l = localX->we;
  } else {
    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S92>/Constant'
     */
    localB->Switch_l = DrivetrainHevP4_P.omega_o;
  }

  /* End of Switch: '<S92>/Switch' */

  /* If: '<S89>/If' */
  rtPrevAction = localDW->If_ActiveSubsystem_c;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    rtAction = (int8_T)!(*rty_TransGear != 0.0);
    localDW->If_ActiveSubsystem_c = rtAction;
  } else {
    rtAction = localDW->If_ActiveSubsystem_c;
  }

  switch (rtAction) {
   case 0:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S89>/Locked' incorporates:
       *  ActionPort: '<S93>/Action'
       */
      /* InitializeConditions for If: '<S89>/If' incorporates:
       *  Integrator: '<S93>/x'
       */
      if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
        localX->w = 0.0;
      }

      localDW->x_IWORK = 1;

      /* End of InitializeConditions for SubSystem: '<S89>/Locked' */
    }

    /* Outputs for IfAction SubSystem: '<S89>/Locked' incorporates:
     *  ActionPort: '<S93>/Action'
     */
    /* Lookup_n-D: '<S107>/Gear2Ratios' */
    localB->N_b = look1_binlxpw(*rty_TransGear, DrivetrainHevP4_P.G,
      DrivetrainHevP4_P.N, 9U);

    /* Abs: '<S93>/Abs' */
    localB->Abs_f = fabs(localB->N_b);

    /* Integrator: '<S93>/x' */
    if (localDW->x_IWORK != 0) {
      localX->w = localB->Switch_l;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (DrivetrainHevP4_M->solverInfo, true);
    }

    /* Integrator: '<S93>/x' */
    localB->Omega = localX->w;

    /* Lookup_n-D: '<S112>/Eta 4D' incorporates:
     *  Constant: '<S4>/Constant'
     *  Integrator: '<S93>/x'
     *  Sum: '<S81>/Subtract1'
     */
    bpIndex = plook_binc(localB->Subtract1_m, DrivetrainHevP4_P.Trq_bpts, 3U,
                         &Bias);
    fractions[0U] = Bias;
    bpIndices[0U] = bpIndex;
    bpIndex = plook_binc(localB->Omega, DrivetrainHevP4_P.Eta4D_bp02Data, 8U,
                         &Bias);
    fractions[1U] = Bias;
    bpIndices[1U] = bpIndex;
    bpIndex = plook_binc(*rty_TransGear, DrivetrainHevP4_P.G, 9U, &Bias);
    fractions[2U] = Bias;
    bpIndices[2U] = bpIndex;
    bpIndex = plook_binc(DrivetrainHevP4_P.Constant_Value_jc,
                         DrivetrainHevP4_P.Temp_bpts, 1U, &Bias);
    fractions[3U] = Bias;
    bpIndices[3U] = bpIndex;

    /* Lookup_n-D: '<S112>/Eta 4D' */
    localB->Eta4D_g = intrp4d_l_pw(bpIndices, fractions,
      DrivetrainHevP4_P.eta_tbl, DrivetrainHevP4_P.Eta4D_dimSizes);

    /* Product: '<S104>/Product1' */
    localB->Product1_fi = localB->Subtract1_m * localB->Omega;

    /* Switch: '<S104>/Switch' */
    if (localB->Product1_fi > DrivetrainHevP4_P.Switch_Threshold) {
      /* Switch: '<S104>/Switch' */
      localB->Switch_pn = localB->Eta4D_g;
    } else {
      /* Switch: '<S104>/Switch' incorporates:
       *  Constant: '<S104>/Constant'
       */
      localB->Switch_pn = DrivetrainHevP4_P.Constant_Value;
    }

    /* End of Switch: '<S104>/Switch' */

    /* Product: '<S104>/Product4' */
    localB->Product4_ma = localB->Switch_pn * localB->Subtract1_m;

    /* Sum: '<S104>/Subtract' */
    localB->Subtract_cz = localB->Product4_ma - localB->Subtract1_m;

    /* Product: '<S104>/Product2' */
    localB->Product2_h = localB->Subtract_cz * localB->Omega;

    /* Product: '<S93>/Product5' */
    localB->Product5_b = localB->UnaryMinus_d / localB->N_b;

    /* Product: '<S105>/Product1' */
    localB->Product1_o2 = localB->Product5_b * localB->Omega;

    /* Switch: '<S105>/Switch' */
    if (localB->Product1_o2 > DrivetrainHevP4_P.Switch_Threshold_g) {
      /* Switch: '<S105>/Switch' */
      localB->Switch_p2 = localB->Eta4D_g;
    } else {
      /* Switch: '<S105>/Switch' incorporates:
       *  Constant: '<S105>/Constant'
       */
      localB->Switch_p2 = DrivetrainHevP4_P.Constant_Value_m;
    }

    /* End of Switch: '<S105>/Switch' */

    /* Product: '<S105>/Product4' */
    localB->Product4_k = localB->Switch_p2 * localB->Product5_b;

    /* Sum: '<S105>/Subtract' */
    localB->Subtract_f = localB->Product4_k - localB->Product5_b;

    /* Product: '<S105>/Product2' */
    localB->Product2_o = localB->Subtract_f * localB->Omega;

    /* Merge generated from: '<S89>/Merge2' incorporates:
     *  Sum: '<S93>/Add'
     */
    localB->PwrEffLoss = localB->Product2_h + localB->Product2_o;

    /* Product: '<S106>/Product' */
    localB->Product_g5 = localB->Subtract1_m * localB->Omega;

    /* Product: '<S93>/Product2' */
    localB->Product2_o3 = localB->Omega / localB->N_b;

    /* Product: '<S106>/Product1' */
    localB->Product1_a = localB->UnaryMinus_d * localB->Product2_o3;

    /* Sum: '<S93>/Sum1' */
    localB->Sum1_e = localB->Product4_ma + localB->Product4_k;

    /* Lookup_n-D: '<S107>/Gear2damping' */
    localB->b_j = look1_binlxpw(*rty_TransGear, DrivetrainHevP4_P.G,
      DrivetrainHevP4_P.bout, 9U);

    /* Product: '<S93>/Product1' */
    localB->Product1_ja = 1.0 / localB->Abs_f / localB->Abs_f * localB->b_j;

    /* Product: '<S93>/Product6' */
    localB->Product6_a = localB->Product1_ja * localB->Omega;

    /* Sum: '<S93>/Sum' */
    localB->Sum_le = localB->Sum1_e - localB->Product6_a;

    /* Product: '<S93>/Product' */
    localB->Product_dc = localB->Omega * localB->Sum_le;

    /* Gain: '<S106>/Gain' */
    localB->Gain_g = DrivetrainHevP4_P.Gain_Gain * localB->Product_dc;

    /* Saturate: '<S106>/Saturation1' */
    if (localB->Product_g5 > DrivetrainHevP4_P.Saturation1_UpperSat) {
      u1 = DrivetrainHevP4_P.Saturation1_UpperSat;
    } else if (localB->Product_g5 < DrivetrainHevP4_P.Saturation1_LowerSat) {
      u1 = DrivetrainHevP4_P.Saturation1_LowerSat;
    } else {
      u1 = localB->Product_g5;
    }

    /* Saturate: '<S106>/Saturation1' */
    localB->Saturation1_m[0] = u1;

    /* Saturate: '<S106>/Saturation1' */
    if (localB->Product1_a > DrivetrainHevP4_P.Saturation1_UpperSat) {
      u1 = DrivetrainHevP4_P.Saturation1_UpperSat;
    } else if (localB->Product1_a < DrivetrainHevP4_P.Saturation1_LowerSat) {
      u1 = DrivetrainHevP4_P.Saturation1_LowerSat;
    } else {
      u1 = localB->Product1_a;
    }

    /* Saturate: '<S106>/Saturation1' */
    localB->Saturation1_m[1] = u1;

    /* Saturate: '<S106>/Saturation1' */
    if (localB->Gain_g > DrivetrainHevP4_P.Saturation1_UpperSat) {
      u1 = DrivetrainHevP4_P.Saturation1_UpperSat;
    } else if (localB->Gain_g < DrivetrainHevP4_P.Saturation1_LowerSat) {
      u1 = DrivetrainHevP4_P.Saturation1_LowerSat;
    } else {
      u1 = localB->Gain_g;
    }

    /* Saturate: '<S106>/Saturation1' */
    localB->Saturation1_m[2] = u1;

    /* Sum: '<S106>/Sum of Elements1' */
    Bias = localB->Saturation1_m[0];
    Bias += localB->Saturation1_m[1];
    Bias += localB->Saturation1_m[2];

    /* Sum: '<S106>/Sum of Elements1' */
    localB->SumofElements1_l = Bias;

    /* Abs: '<S106>/Abs1' */
    localB->Abs1_b = fabs(localB->SumofElements1_l);

    /* Saturate: '<S106>/Saturation2' */
    if (localB->Product_g5 > DrivetrainHevP4_P.Saturation2_UpperSat) {
      u1 = DrivetrainHevP4_P.Saturation2_UpperSat;
    } else if (localB->Product_g5 < DrivetrainHevP4_P.Saturation2_LowerSat) {
      u1 = DrivetrainHevP4_P.Saturation2_LowerSat;
    } else {
      u1 = localB->Product_g5;
    }

    /* Saturate: '<S106>/Saturation2' */
    localB->Saturation2_h[0] = u1;

    /* Saturate: '<S106>/Saturation2' */
    if (localB->Product1_a > DrivetrainHevP4_P.Saturation2_UpperSat) {
      u1 = DrivetrainHevP4_P.Saturation2_UpperSat;
    } else if (localB->Product1_a < DrivetrainHevP4_P.Saturation2_LowerSat) {
      u1 = DrivetrainHevP4_P.Saturation2_LowerSat;
    } else {
      u1 = localB->Product1_a;
    }

    /* Saturate: '<S106>/Saturation2' */
    localB->Saturation2_h[1] = u1;

    /* Saturate: '<S106>/Saturation2' */
    if (localB->Gain_g > DrivetrainHevP4_P.Saturation2_UpperSat) {
      u1 = DrivetrainHevP4_P.Saturation2_UpperSat;
    } else if (localB->Gain_g < DrivetrainHevP4_P.Saturation2_LowerSat) {
      u1 = DrivetrainHevP4_P.Saturation2_LowerSat;
    } else {
      u1 = localB->Gain_g;
    }

    /* Saturate: '<S106>/Saturation2' */
    localB->Saturation2_h[2] = u1;

    /* Sum: '<S106>/Sum of Elements' */
    Bias = localB->Saturation2_h[0];
    Bias += localB->Saturation2_h[1];
    Bias += localB->Saturation2_h[2];

    /* Sum: '<S106>/Sum of Elements' */
    localB->SumofElements_j = Bias;

    /* RelationalOperator: '<S109>/Compare' incorporates:
     *  Constant: '<S109>/Constant'
     */
    Bias = -DrivetrainHevP4_P.div0protectabspoly_thresh;

    /* RelationalOperator: '<S109>/Compare' */
    localB->Compare_bu = (localB->SumofElements_j >= Bias);

    /* RelationalOperator: '<S110>/Compare' incorporates:
     *  Constant: '<S110>/Constant'
     */
    localB->Compare_jb = (localB->SumofElements_j <=
                          DrivetrainHevP4_P.div0protectabspoly_thresh);

    /* Logic: '<S108>/Logical Operator' */
    localB->LogicalOperator_n = (localB->Compare_bu && localB->Compare_jb);

    /* Switch: '<S108>/Switch' */
    if (localB->LogicalOperator_n) {
      /* Fcn: '<S108>/Fcn' */
      u1 = localB->SumofElements_j / 1.0e-6;
      Bias = rt_powd_snf(u1, 2.0);

      /* Fcn: '<S108>/Fcn' */
      localB->Fcn_k = 2.0E-6 / (3.0 - Bias);

      /* Switch: '<S108>/Switch' */
      localB->Switch_fc = localB->Fcn_k;
    } else {
      /* Abs: '<S108>/Abs' */
      localB->Abs_cw = fabs(localB->SumofElements_j);

      /* Switch: '<S108>/Switch' */
      localB->Switch_fc = localB->Abs_cw;
    }

    /* End of Switch: '<S108>/Switch' */

    /* Product: '<S106>/Product2' */
    localB->Product2_h4 = localB->Abs1_b / localB->Switch_fc;

    /* Saturate: '<S106>/Saturation' */
    if (localB->Product2_h4 > DrivetrainHevP4_P.Saturation_UpperSat) {
      /* Merge: '<S89>/Merge3' */
      localB->Merge3_o = DrivetrainHevP4_P.Saturation_UpperSat;
    } else if (localB->Product2_h4 < DrivetrainHevP4_P.Saturation_LowerSat) {
      /* Merge: '<S89>/Merge3' */
      localB->Merge3_o = DrivetrainHevP4_P.Saturation_LowerSat;
    } else {
      /* Merge: '<S89>/Merge3' */
      localB->Merge3_o = localB->Product2_h4;
    }

    /* End of Saturate: '<S106>/Saturation' */

    /* Lookup_n-D: '<S107>/Gear2inertias' */
    localB->J_i = look1_binlxpw(*rty_TransGear, DrivetrainHevP4_P.G,
      DrivetrainHevP4_P.Jout, 9U);

    /* Product: '<S93>/Product3' */
    localB->Product3_a2 = localB->J_i / localB->Abs_f / localB->Abs_f;

    /* UnaryMinus: '<S93>/Unary Minus' */
    localB->UnaryMinus_n = -localB->Product6_a;

    /* Merge generated from: '<S89>/Merge2' incorporates:
     *  Product: '<S93>/Product4'
     */
    localB->PwrDampLoss_h = localB->Omega * localB->UnaryMinus_n;

    /* Product: '<S93>/Product8' */
    localB->Product8_h = 1.0 / localB->Product3_a2 * localB->Sum_le;

    /* Merge generated from: '<S89>/Merge2' incorporates:
     *  SignalConversion: '<S93>/Signal Conversion'
     */
    localB->PwrStoredTrans = localB->Product_dc;

    /* Merge: '<S89>/Merge1' incorporates:
     *  SignalConversion: '<S93>/Signal Conversion2'
     */
    localB->Merge1 = localB->Omega;

    /* Merge: '<S89>/Merge' incorporates:
     *  SignalConversion: '<S93>/Signal Conversion3'
     */
    localB->Merge = localB->Product2_o3;

    /* End of Outputs for SubSystem: '<S89>/Locked' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S89>/Unlocked' incorporates:
       *  ActionPort: '<S95>/Action'
       */
      /* InitializeConditions for If: '<S89>/If' incorporates:
       *  Integrator: '<S95>/xe'
       *  Integrator: '<S95>/xv'
       */
      if (rtmIsFirstInitCond(DrivetrainHevP4_M)) {
        localX->we = 0.0;
        localX->wv = 0.0;
      }

      localDW->xe_IWORK = 1;
      localDW->xv_IWORK = 1;

      /* End of InitializeConditions for SubSystem: '<S89>/Unlocked' */
    }

    /* Outputs for IfAction SubSystem: '<S89>/Unlocked' incorporates:
     *  ActionPort: '<S95>/Action'
     */
    /* Lookup_n-D: '<S115>/Gear2Ratios' */
    localB->N = look1_binlxpw(*rty_TransGear, DrivetrainHevP4_P.G,
      DrivetrainHevP4_P.N, 9U);

    /* Abs: '<S95>/Abs' */
    localB->Abs_g = fabs(localB->N);

    /* Integrator: '<S95>/xe' */
    if (localDW->xe_IWORK != 0) {
      localX->we = localB->Switch_k;
      rtsiSetContTimeOutputInconsistentWithStateAtMajorStep
        (DrivetrainHevP4_M->solverInfo, true);
    }

    /* Integrator: '<S95>/xe' */
    localB->xe = localX->we;

    /* Lookup_n-D: '<S95>/Gear2damping' incorporates:
     *  Constant: '<S95>/Neutral'
     */
    bpIndex = plook_u32d_binckan(DrivetrainHevP4_P.Neutral_Value,
      DrivetrainHevP4_P.G, 9U);

    /* Lookup_n-D: '<S95>/Gear2damping' */
    localB->b_g = DrivetrainHevP4_P.bout[bpIndex];

    /* Product: '<S95>/Product7' */
    localB->Product7_a = localB->b_g * localB->xe;

    /* Sum: '<S95>/Sum1' */
    localB->Sum1_n = localB->Subtract1_m - localB->Product7_a;

    /* Product: '<S95>/Product12' */
    localB->Product12_i = localB->xe * localB->Sum1_n;

    /* Lookup_n-D: '<S115>/Gear2damping' */
    localB->b_o = look1_binlxpw(*rty_TransGear, DrivetrainHevP4_P.G,
      DrivetrainHevP4_P.bout, 9U);

    /* Product: '<S95>/Product1' */
    localB->Product1_k3 = 1.0 / localB->Abs_g / localB->Abs_g * localB->b_o;

    /* Integrator: '<S95>/xv' */
    if (localDW->xv_IWORK != 0) {
      localX->wv = localB->Switch_e;
    }

    /* Integrator: '<S95>/xv' */
    localB->omega_m = localX->wv;

    /* Product: '<S95>/Product6' */
    localB->Product6_b = localB->Product1_k3 * localB->omega_m;

    /* Product: '<S95>/Product5' */
    localB->Product5_g = localB->UnaryMinus_d / localB->N;

    /* Product: '<S113>/Product1' */
    localB->Product1_lu = localB->Product5_g * localB->omega_m;

    /* Switch: '<S113>/Switch' */
    if (localB->Product1_lu > DrivetrainHevP4_P.Switch_Threshold_k) {
      /* Lookup_n-D: '<S120>/Eta 4D' incorporates:
       *  Constant: '<S4>/Constant'
       *  Constant: '<S95>/No Input Torque'
       *  Integrator: '<S95>/xv'
       */
      bpIndex = plook_binc(DrivetrainHevP4_P.NoInputTorque_Value,
                           DrivetrainHevP4_P.Trq_bpts, 3U, &Bias);
      fractions[0U] = Bias;
      bpIndices[0U] = bpIndex;
      bpIndex = plook_binc(localB->omega_m, DrivetrainHevP4_P.Eta4D_bp02Data_h,
                           8U, &Bias);
      fractions[1U] = Bias;
      bpIndices[1U] = bpIndex;
      bpIndex = plook_binc(*rty_TransGear, DrivetrainHevP4_P.G, 9U, &Bias);
      fractions[2U] = Bias;
      bpIndices[2U] = bpIndex;
      bpIndex = plook_binc(DrivetrainHevP4_P.Constant_Value_jc,
                           DrivetrainHevP4_P.Temp_bpts, 1U, &Bias);
      fractions[3U] = Bias;
      bpIndices[3U] = bpIndex;

      /* Lookup_n-D: '<S120>/Eta 4D' */
      localB->Eta4D = intrp4d_l_pw(bpIndices, fractions,
        DrivetrainHevP4_P.eta_tbl, DrivetrainHevP4_P.Eta4D_dimSizes_b);

      /* Switch: '<S113>/Switch' */
      localB->Switch_ae = localB->Eta4D;
    } else {
      /* Switch: '<S113>/Switch' incorporates:
       *  Constant: '<S113>/Constant'
       */
      localB->Switch_ae = DrivetrainHevP4_P.Constant_Value_a;
    }

    /* End of Switch: '<S113>/Switch' */

    /* Product: '<S113>/Product4' */
    localB->Product4_c = localB->Switch_ae * localB->Product5_g;

    /* Sum: '<S95>/Sum' */
    localB->Sum_ol = localB->Product4_c - localB->Product6_b;

    /* Product: '<S95>/Product' */
    localB->Product_d3 = localB->Sum_ol * localB->omega_m;

    /* Sum: '<S95>/Add' */
    localB->Add_e = localB->Product12_i + localB->Product_d3;

    /* Product: '<S95>/Product10' */
    localB->Product10_p = localB->xe * localB->Product7_a;

    /* Product: '<S95>/Product9' */
    localB->Product9_h = localB->omega_m * localB->Product6_b;

    /* Sum: '<S95>/Add1' */
    localB->Add1_e = localB->Product10_p + localB->Product9_h;

    /* Sum: '<S113>/Subtract' */
    localB->Subtract_mr = localB->Product4_c - localB->Product5_g;

    /* Merge generated from: '<S89>/Merge2' incorporates:
     *  Product: '<S113>/Product2'
     */
    localB->PwrEffLoss = localB->Subtract_mr * localB->omega_m;

    /* Lookup_n-D: '<S95>/Gear2inertias' incorporates:
     *  Constant: '<S95>/Neutral'
     */
    bpIndex = plook_u32d_binckan(DrivetrainHevP4_P.Neutral_Value,
      DrivetrainHevP4_P.G, 9U);

    /* Lookup_n-D: '<S95>/Gear2inertias' */
    localB->JN = DrivetrainHevP4_P.Jout[bpIndex];

    /* Lookup_n-D: '<S95>/Gear2inertias1' incorporates:
     *  Constant: '<S95>/First'
     */
    bpIndex = plook_u32d_binckan(DrivetrainHevP4_P.First_Value,
      DrivetrainHevP4_P.G, 9U);

    /* Lookup_n-D: '<S95>/Gear2inertias1' */
    localB->J1 = DrivetrainHevP4_P.Jout[bpIndex];

    /* Product: '<S114>/Product' */
    localB->Product_i3 = localB->Subtract1_m * localB->xe;

    /* Product: '<S95>/Product2' */
    localB->Product2_e = localB->omega_m / localB->N;

    /* Product: '<S114>/Product1' */
    localB->Product1_n = localB->UnaryMinus_d * localB->Product2_e;

    /* Gain: '<S114>/Gain' */
    localB->Gain_h = DrivetrainHevP4_P.Gain_Gain_e * localB->Add_e;

    /* Saturate: '<S114>/Saturation1' */
    if (localB->Product_i3 > DrivetrainHevP4_P.Saturation1_UpperSat_n) {
      u1 = DrivetrainHevP4_P.Saturation1_UpperSat_n;
    } else if (localB->Product_i3 < DrivetrainHevP4_P.Saturation1_LowerSat_n) {
      u1 = DrivetrainHevP4_P.Saturation1_LowerSat_n;
    } else {
      u1 = localB->Product_i3;
    }

    /* Saturate: '<S114>/Saturation1' */
    localB->Saturation1_c[0] = u1;

    /* Saturate: '<S114>/Saturation1' */
    if (localB->Product1_n > DrivetrainHevP4_P.Saturation1_UpperSat_n) {
      u1 = DrivetrainHevP4_P.Saturation1_UpperSat_n;
    } else if (localB->Product1_n < DrivetrainHevP4_P.Saturation1_LowerSat_n) {
      u1 = DrivetrainHevP4_P.Saturation1_LowerSat_n;
    } else {
      u1 = localB->Product1_n;
    }

    /* Saturate: '<S114>/Saturation1' */
    localB->Saturation1_c[1] = u1;

    /* Saturate: '<S114>/Saturation1' */
    if (localB->Gain_h > DrivetrainHevP4_P.Saturation1_UpperSat_n) {
      u1 = DrivetrainHevP4_P.Saturation1_UpperSat_n;
    } else if (localB->Gain_h < DrivetrainHevP4_P.Saturation1_LowerSat_n) {
      u1 = DrivetrainHevP4_P.Saturation1_LowerSat_n;
    } else {
      u1 = localB->Gain_h;
    }

    /* Saturate: '<S114>/Saturation1' */
    localB->Saturation1_c[2] = u1;

    /* Sum: '<S114>/Sum of Elements1' */
    Bias = localB->Saturation1_c[0];
    Bias += localB->Saturation1_c[1];
    Bias += localB->Saturation1_c[2];

    /* Sum: '<S114>/Sum of Elements1' */
    localB->SumofElements1_o = Bias;

    /* Abs: '<S114>/Abs1' */
    localB->Abs1 = fabs(localB->SumofElements1_o);

    /* Saturate: '<S114>/Saturation2' */
    if (localB->Product_i3 > DrivetrainHevP4_P.Saturation2_UpperSat_b) {
      u1 = DrivetrainHevP4_P.Saturation2_UpperSat_b;
    } else if (localB->Product_i3 < DrivetrainHevP4_P.Saturation2_LowerSat_e) {
      u1 = DrivetrainHevP4_P.Saturation2_LowerSat_e;
    } else {
      u1 = localB->Product_i3;
    }

    /* Saturate: '<S114>/Saturation2' */
    localB->Saturation2[0] = u1;

    /* Saturate: '<S114>/Saturation2' */
    if (localB->Product1_n > DrivetrainHevP4_P.Saturation2_UpperSat_b) {
      u1 = DrivetrainHevP4_P.Saturation2_UpperSat_b;
    } else if (localB->Product1_n < DrivetrainHevP4_P.Saturation2_LowerSat_e) {
      u1 = DrivetrainHevP4_P.Saturation2_LowerSat_e;
    } else {
      u1 = localB->Product1_n;
    }

    /* Saturate: '<S114>/Saturation2' */
    localB->Saturation2[1] = u1;

    /* Saturate: '<S114>/Saturation2' */
    if (localB->Gain_h > DrivetrainHevP4_P.Saturation2_UpperSat_b) {
      u1 = DrivetrainHevP4_P.Saturation2_UpperSat_b;
    } else if (localB->Gain_h < DrivetrainHevP4_P.Saturation2_LowerSat_e) {
      u1 = DrivetrainHevP4_P.Saturation2_LowerSat_e;
    } else {
      u1 = localB->Gain_h;
    }

    /* Saturate: '<S114>/Saturation2' */
    localB->Saturation2[2] = u1;

    /* Sum: '<S114>/Sum of Elements' */
    Bias = localB->Saturation2[0];
    Bias += localB->Saturation2[1];
    Bias += localB->Saturation2[2];

    /* Sum: '<S114>/Sum of Elements' */
    localB->SumofElements_b = Bias;

    /* RelationalOperator: '<S117>/Compare' incorporates:
     *  Constant: '<S117>/Constant'
     */
    Bias = -DrivetrainHevP4_P.div0protectabspoly_thresh_c;

    /* RelationalOperator: '<S117>/Compare' */
    localB->Compare_hp = (localB->SumofElements_b >= Bias);

    /* RelationalOperator: '<S118>/Compare' incorporates:
     *  Constant: '<S118>/Constant'
     */
    localB->Compare_ca = (localB->SumofElements_b <=
                          DrivetrainHevP4_P.div0protectabspoly_thresh_c);

    /* Logic: '<S116>/Logical Operator' */
    localB->LogicalOperator_m = (localB->Compare_hp && localB->Compare_ca);

    /* Switch: '<S116>/Switch' */
    if (localB->LogicalOperator_m) {
      /* Fcn: '<S116>/Fcn' */
      u1 = localB->SumofElements_b / 1.0e-6;
      Bias = rt_powd_snf(u1, 2.0);

      /* Fcn: '<S116>/Fcn' */
      localB->Fcn_i = 2.0E-6 / (3.0 - Bias);

      /* Switch: '<S116>/Switch' */
      localB->Switch_ez = localB->Fcn_i;
    } else {
      /* Abs: '<S116>/Abs' */
      localB->Abs_cx = fabs(localB->SumofElements_b);

      /* Switch: '<S116>/Switch' */
      localB->Switch_ez = localB->Abs_cx;
    }

    /* End of Switch: '<S116>/Switch' */

    /* Product: '<S114>/Product2' */
    localB->Product2_dv = localB->Abs1 / localB->Switch_ez;

    /* Saturate: '<S114>/Saturation' */
    if (localB->Product2_dv > DrivetrainHevP4_P.Saturation_UpperSat_j) {
      /* Merge: '<S89>/Merge3' */
      localB->Merge3_o = DrivetrainHevP4_P.Saturation_UpperSat_j;
    } else if (localB->Product2_dv < DrivetrainHevP4_P.Saturation_LowerSat_k) {
      /* Merge: '<S89>/Merge3' */
      localB->Merge3_o = DrivetrainHevP4_P.Saturation_LowerSat_k;
    } else {
      /* Merge: '<S89>/Merge3' */
      localB->Merge3_o = localB->Product2_dv;
    }

    /* End of Saturate: '<S114>/Saturation' */

    /* Lookup_n-D: '<S115>/Gear2inertias' */
    localB->J = look1_binlxpw(*rty_TransGear, DrivetrainHevP4_P.G,
      DrivetrainHevP4_P.Jout, 9U);

    /* Product: '<S95>/Product3' */
    localB->Product3_i = localB->J / localB->Abs_g / localB->Abs_g;

    /* Sum: '<S95>/Subtract' */
    localB->JFlywheel = localB->J1 - localB->JN;

    /* Product: '<S95>/Product4' */
    localB->Product4_gf = 1.0 / localB->JFlywheel * localB->Sum1_n;

    /* Product: '<S95>/Product8' */
    localB->Product8_b = 1.0 / localB->Product3_i * localB->Sum_ol;

    /* Merge: '<S89>/Merge' incorporates:
     *  SignalConversion: '<S95>/Signal Conversion'
     */
    localB->Merge = localB->Product2_e;

    /* Merge: '<S89>/Merge1' incorporates:
     *  SignalConversion: '<S95>/Signal Conversion1'
     */
    localB->Merge1 = localB->xe;

    /* Merge generated from: '<S89>/Merge2' incorporates:
     *  SignalConversion: '<S95>/Signal Conversion2'
     */
    localB->PwrStoredTrans = localB->Add_e;

    /* Merge generated from: '<S89>/Merge2' incorporates:
     *  UnaryMinus: '<S95>/Unary Minus'
     */
    localB->PwrDampLoss_h = -localB->Add1_e;

    /* End of Outputs for SubSystem: '<S89>/Unlocked' */
    break;
  }

  /* End of If: '<S89>/If' */

  /* Product: '<S90>/Product' */
  localB->Product_jv = localB->Subtract1_m * localB->Merge1;

  /* Product: '<S90>/Product2' */
  localB->Product2_g = localB->UnaryMinus_d * localB->Merge;

  /* RelationalOperator: '<S102>/Compare' incorporates:
   *  Constant: '<S102>/Constant'
   */
  Bias = -DrivetrainHevP4_P.div0protectabspoly1_thresh;

  /* RelationalOperator: '<S102>/Compare' */
  localB->Compare_a = (localB->Merge >= Bias);

  /* RelationalOperator: '<S103>/Compare' incorporates:
   *  Constant: '<S103>/Constant'
   */
  localB->Compare_h = (localB->Merge <=
                       DrivetrainHevP4_P.div0protectabspoly1_thresh);

  /* Logic: '<S98>/Logical Operator' */
  localB->LogicalOperator_p = (localB->Compare_a && localB->Compare_h);

  /* Switch: '<S98>/Switch' */
  if (localB->LogicalOperator_p) {
    /* Fcn: '<S98>/Fcn' */
    u1 = localB->Merge / 1.0e-6;
    Bias = rt_powd_snf(u1, 2.0);

    /* Fcn: '<S98>/Fcn' */
    localB->Fcn_j = 2.0E-6 / (3.0 - Bias);

    /* Switch: '<S98>/Switch' */
    localB->Switch_a = localB->Fcn_j;
  } else {
    /* Abs: '<S98>/Abs' */
    localB->Abs_h = fabs(localB->Merge);

    /* Switch: '<S98>/Switch' */
    localB->Switch_a = localB->Abs_h;
  }

  /* End of Switch: '<S98>/Switch' */

  /* Product: '<S90>/Product3' */
  localB->TransSpdRatio = localB->Merge1 / localB->Switch_a;

  /* Switch: '<S91>/Switch' */
  if (localB->Memory_n != 0.0) {
    /* Switch: '<S91>/Switch' */
    localB->Switch_p = *rty_TransGear;
  } else {
    /* Switch: '<S91>/Switch' */
    localB->Switch_p = localB->Constant1_d;
  }

  /* End of Switch: '<S91>/Switch' */

  /* Sum: '<S91>/Sum' */
  localB->Sum_j = *rtu_GearCmd - localB->Switch_p;

  /* Product: '<S91>/Product' */
  localB->Product_a3 = localB->upi * localB->Sum_j;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Constant'
     */
    if (DrivetrainHevP4_P.Constant_Value_d >
        DrivetrainHevP4_P.Switch_Threshold_mr) {
      /* Switch: '<S23>/Switch' incorporates:
       *  Constant: '<S23>/Constant1'
       */
      localB->diffDir = DrivetrainHevP4_P.Constant1_Value_nv;
    } else {
      /* UnaryMinus: '<S23>/Unary Minus' incorporates:
       *  Constant: '<S23>/Constant1'
       */
      localB->UnaryMinus_a3 = -DrivetrainHevP4_P.Constant1_Value_nv;

      /* Switch: '<S23>/Switch' */
      localB->diffDir = localB->UnaryMinus_a3;
    }

    /* End of Switch: '<S23>/Switch' */

    /* Constant: '<S19>/Constant' */
    localB->VectorConcatenate_l[0] = DrivetrainHevP4_P.omegaw1o;

    /* Constant: '<S19>/Constant1' */
    localB->VectorConcatenate_l[1] = DrivetrainHevP4_P.omegaw2o;
  }

  /* Integrator: '<S19>/Integrator' */
  /* Limited  Integrator  */
  if (localDW->Integrator_IWORK_l != 0) {
    localX->Integrator_CSTATE_f[0] = localB->VectorConcatenate_l[0];
    localX->Integrator_CSTATE_f[1] = localB->VectorConcatenate_l[1];
  }

  if (localX->Integrator_CSTATE_f[0] >= DrivetrainHevP4_P.Integrator_UpperSat) {
    localX->Integrator_CSTATE_f[0] = DrivetrainHevP4_P.Integrator_UpperSat;
  } else if (localX->Integrator_CSTATE_f[0] <=
             DrivetrainHevP4_P.Integrator_LowerSat) {
    localX->Integrator_CSTATE_f[0] = DrivetrainHevP4_P.Integrator_LowerSat;
  }

  if (localX->Integrator_CSTATE_f[1] >= DrivetrainHevP4_P.Integrator_UpperSat) {
    localX->Integrator_CSTATE_f[1] = DrivetrainHevP4_P.Integrator_UpperSat;
  } else if (localX->Integrator_CSTATE_f[1] <=
             DrivetrainHevP4_P.Integrator_LowerSat) {
    localX->Integrator_CSTATE_f[1] = DrivetrainHevP4_P.Integrator_LowerSat;
  }

  /* Integrator: '<S19>/Integrator' */
  localB->Integrator_aj[0] = localX->Integrator_CSTATE_f[0];
  localB->Integrator_aj[1] = localX->Integrator_CSTATE_f[1];

  /* Product: '<S23>/Product' */
  localB->Product_f[0] = localB->diffDir * localB->Integrator_aj[0];
  localB->Product_f[1] = localB->diffDir * localB->Integrator_aj[1];

  /* Gain: '<S23>/Gain' */
  Bias = DrivetrainHevP4_P.Ndiff / 2.0;

  /* Gain: '<S23>/Gain' */
  localB->Gain[0] = Bias * localB->Product_f[0];
  localB->Gain[1] = Bias * localB->Product_f[1];

  /* Sum: '<S23>/Sum of Elements' */
  Bias = localB->Gain[0];
  Bias += localB->Gain[1];

  /* Sum: '<S23>/Sum of Elements' */
  localB->SumofElements_e = Bias;

  /* Sum: '<S72>/Subtract' */
  localB->Subtract = localB->Merge - localB->SumofElements_e;

  /* Switch: '<S73>/Switch' */
  if (localB->Memory_d0 != 0.0) {
    /* Switch: '<S73>/Switch' */
    localB->Switch_ct = localB->Integrator_o;
  } else {
    /* Switch: '<S73>/Switch' */
    localB->Switch_ct = localB->domega_o_d;
  }

  /* End of Switch: '<S73>/Switch' */

  /* Sum: '<S73>/Sum' */
  localB->Sum_h3 = localB->Subtract - localB->Switch_ct;

  /* Product: '<S73>/Product' incorporates:
   *  Constant: '<S72>/omega_c'
   */
  localB->Product_b = DrivetrainHevP4_P.omega_c * localB->Sum_h3;

  /* Product: '<S75>/Product1' incorporates:
   *  Constant: '<S75>/Constant8'
   */
  localB->Product1_k = DrivetrainHevP4_P.b * localB->Integrator_o;

  /* UnaryMinus: '<S75>/Unary Minus' */
  localB->UnaryMinus_b = -localB->Product1_k;

  /* Product: '<S75>/Product4' */
  localB->PwrDampLoss_h5 = localB->UnaryMinus_b * localB->Integrator_o;

  /* Product: '<S74>/Product' */
  localB->Product_l = localB->Subtract * localB->Gain1_a;

  /* UnaryMinus: '<S72>/Unary Minus1' */
  localB->UnaryMinus1_o = -localB->Subtract1_a;

  /* SignalConversion: '<S72>/Signal Copy1' */
  localB->SignalCopy1_g = localB->Subtract1_a;

  /* SignalConversion: '<S72>/Signal Copy' */
  localB->R = localB->Merge;

  /* Product: '<S74>/Transferred Power' */
  localB->TransferredPower[0] = localB->UnaryMinus1_o * localB->R;
  localB->TransferredPower[1] = localB->SignalCopy1_g * localB->SumofElements_e;

  /* UnaryMinus: '<S74>/Unary Minus1' */
  localB->UnaryMinus1_n[0] = -localB->TransferredPower[0];
  localB->UnaryMinus1_n[1] = -localB->TransferredPower[1];

  /* Sum: '<S81>/Subtract' */
  localB->Subtract_p = localB->TurbineSpd - localB->Merge1;

  /* Switch: '<S82>/Switch' */
  if (localB->Memory_d != 0.0) {
    /* Switch: '<S82>/Switch' */
    localB->Switch_g = localB->Integrator_ao;
  } else {
    /* Switch: '<S82>/Switch' */
    localB->Switch_g = localB->domega_o_c;
  }

  /* End of Switch: '<S82>/Switch' */

  /* Sum: '<S82>/Sum' */
  localB->Sum_o = localB->Subtract_p - localB->Switch_g;

  /* Product: '<S82>/Product' incorporates:
   *  Constant: '<S81>/omega_c'
   */
  localB->Product_jh = DrivetrainHevP4_P.omega_c * localB->Sum_o;

  /* Product: '<S84>/Product1' incorporates:
   *  Constant: '<S84>/Constant8'
   */
  localB->Product1_o = DrivetrainHevP4_P.b * localB->Integrator_ao;

  /* UnaryMinus: '<S84>/Unary Minus' */
  localB->UnaryMinus_a = -localB->Product1_o;

  /* Product: '<S84>/Product4' */
  localB->PwrDampLoss_n = localB->UnaryMinus_a * localB->Integrator_ao;

  /* Product: '<S83>/Product' */
  localB->Product_j0 = localB->Subtract_p * localB->Gain1_k;

  /* UnaryMinus: '<S81>/Unary Minus1' */
  localB->UnaryMinus1_n3 = -localB->Subtract1_m;

  /* SignalConversion: '<S81>/Signal Copy1' */
  localB->SignalCopy1_f = localB->Subtract1_m;

  /* SignalConversion: '<S81>/Signal Copy' */
  localB->R_i = localB->TurbineSpd;

  /* Product: '<S83>/Transferred Power' */
  localB->TransferredPower_a[0] = localB->UnaryMinus1_n3 * localB->R_i;
  localB->TransferredPower_a[1] = localB->SignalCopy1_f * localB->Merge1;

  /* UnaryMinus: '<S83>/Unary Minus1' */
  localB->UnaryMinus1_nv[0] = -localB->TransferredPower_a[0];
  localB->UnaryMinus1_nv[1] = -localB->TransferredPower_a[1];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    *rty_Cltch1State = false;

    /* Switch: '<S51>/Switch' incorporates:
     *  Constant: '<S51>/Constant'
     */
    if (DrivetrainHevP4_P.Constant_Value_n >
        DrivetrainHevP4_P.Switch_Threshold_cs) {
      /* Switch: '<S51>/Switch' incorporates:
       *  Constant: '<S51>/Constant1'
       */
      localB->diffDir_k = DrivetrainHevP4_P.Constant1_Value_m;
    } else {
      /* UnaryMinus: '<S51>/Unary Minus' incorporates:
       *  Constant: '<S51>/Constant1'
       */
      localB->UnaryMinus_cm = -DrivetrainHevP4_P.Constant1_Value_m;

      /* Switch: '<S51>/Switch' */
      localB->diffDir_k = localB->UnaryMinus_cm;
    }

    /* End of Switch: '<S51>/Switch' */

    /* Constant: '<S47>/Constant' */
    localB->VectorConcatenate_jy[0] = DrivetrainHevP4_P.omegaw1o;

    /* Constant: '<S47>/Constant1' */
    localB->VectorConcatenate_jy[1] = DrivetrainHevP4_P.omegaw2o;
  }

  /* Integrator: '<S47>/Integrator' */
  /* Limited  Integrator  */
  if (localDW->Integrator_IWORK_g != 0) {
    localX->Integrator_CSTATE_m0[0] = localB->VectorConcatenate_jy[0];
    localX->Integrator_CSTATE_m0[1] = localB->VectorConcatenate_jy[1];
  }

  if (localX->Integrator_CSTATE_m0[0] >= DrivetrainHevP4_P.Integrator_UpperSat_o)
  {
    localX->Integrator_CSTATE_m0[0] = DrivetrainHevP4_P.Integrator_UpperSat_o;
  } else if (localX->Integrator_CSTATE_m0[0] <=
             DrivetrainHevP4_P.Integrator_LowerSat_m) {
    localX->Integrator_CSTATE_m0[0] = DrivetrainHevP4_P.Integrator_LowerSat_m;
  }

  if (localX->Integrator_CSTATE_m0[1] >= DrivetrainHevP4_P.Integrator_UpperSat_o)
  {
    localX->Integrator_CSTATE_m0[1] = DrivetrainHevP4_P.Integrator_UpperSat_o;
  } else if (localX->Integrator_CSTATE_m0[1] <=
             DrivetrainHevP4_P.Integrator_LowerSat_m) {
    localX->Integrator_CSTATE_m0[1] = DrivetrainHevP4_P.Integrator_LowerSat_m;
  }

  /* Integrator: '<S47>/Integrator' */
  localB->Integrator_d[0] = localX->Integrator_CSTATE_m0[0];
  localB->Integrator_d[1] = localX->Integrator_CSTATE_m0[1];

  /* Product: '<S51>/Product' */
  localB->Product_lu[0] = localB->diffDir_k * localB->Integrator_d[0];
  localB->Product_lu[1] = localB->diffDir_k * localB->Integrator_d[1];

  /* Gain: '<S51>/Gain' */
  Bias = DrivetrainHevP4_P.OpenDifferential_Ndiff / 2.0;

  /* Gain: '<S51>/Gain' */
  localB->Gain_e[0] = Bias * localB->Product_lu[0];
  localB->Gain_e[1] = Bias * localB->Product_lu[1];

  /* Sum: '<S51>/Sum of Elements' */
  Bias = localB->Gain_e[0];
  Bias += localB->Gain_e[1];
  *rty_MotSpd = Bias;

  /* SignalConversion generated from: '<S51>/Vector Concatenate' */
  localB->VectorConcatenate_i[0] = *rty_MotSpd;

  /* UnaryMinus: '<S51>/Unary Minus1' */
  localB->UnaryMinus1_p[0] = -localB->Integrator_d[0];
  localB->UnaryMinus1_p[1] = -localB->Integrator_d[1];

  /* SignalConversion generated from: '<S51>/Vector Concatenate' */
  localB->VectorConcatenate_i[1] = localB->UnaryMinus1_p[0];

  /* SignalConversion generated from: '<S51>/Vector Concatenate' */
  localB->VectorConcatenate_i[2] = localB->UnaryMinus1_p[1];

  /* Gain: '<S51>/Gain1' */
  localB->Gain1_m[0] = DrivetrainHevP4_P.Gain1_Gain * localB->Integrator_d[0];
  localB->Gain1_m[1] = DrivetrainHevP4_P.Gain1_Gain * localB->Integrator_d[1];

  /* Sum: '<S51>/Add' */
  localB->VectorConcatenate_i[3] = localB->Gain1_m[0] - localB->Gain1_m[1];

  /* Abs: '<S53>/Abs' */
  localB->Abs_d[0] = fabs(localB->VectorConcatenate_i[0]);
  localB->Abs_d[1] = fabs(localB->VectorConcatenate_i[1]);
  localB->Abs_d[2] = fabs(localB->VectorConcatenate_i[2]);

  /* Product: '<S53>/Product1' incorporates:
   *  Constant: '<S53>/Constant6'
   *  Constant: '<S53>/Constant7'
   *  Constant: '<S53>/Constant8'
   */
  localB->Product1_hd[0] = DrivetrainHevP4_P.bd * localB->Abs_d[0];
  localB->Product1_hd[1] = DrivetrainHevP4_P.bw1 * localB->Abs_d[1];
  localB->Product1_hd[2] = DrivetrainHevP4_P.bw2 * localB->Abs_d[2];

  /* UnaryMinus: '<S53>/Unary Minus' */
  localB->UnaryMinus_c[0] = -localB->Product1_hd[0];

  /* Product: '<S53>/Product4' */
  localB->Product4_d[0] = localB->UnaryMinus_c[0] * localB->Abs_d[0];

  /* UnaryMinus: '<S53>/Unary Minus' */
  localB->UnaryMinus_c[1] = -localB->Product1_hd[1];

  /* Product: '<S53>/Product4' */
  localB->Product4_d[1] = localB->UnaryMinus_c[1] * localB->Abs_d[1];

  /* UnaryMinus: '<S53>/Unary Minus' */
  localB->UnaryMinus_c[2] = -localB->Product1_hd[2];

  /* Product: '<S53>/Product4' */
  localB->Product4_d[2] = localB->UnaryMinus_c[2] * localB->Abs_d[2];

  /* Sum: '<S53>/Sum of Elements2' */
  Bias = localB->Product4_d[0];
  Bias += localB->Product4_d[1];
  Bias += localB->Product4_d[2];

  /* Sum: '<S53>/Sum of Elements2' */
  localB->SumofElements2 = Bias;

  /* Product: '<S61>/Product1' */
  localB->Product1_l = *rtu_MotTrq * localB->VectorConcatenate_i[0];

  /* Switch: '<S61>/Switch' */
  if (localB->Product1_l > DrivetrainHevP4_P.Switch_Threshold_b) {
    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     */
    localB->Switch_i = DrivetrainHevP4_P.OpenDifferential_eta;
  } else {
    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S61>/Constant'
     */
    localB->Switch_i = DrivetrainHevP4_P.Constant_Value_m0;
  }

  /* End of Switch: '<S61>/Switch' */

  /* Product: '<S61>/Product4' */
  localB->Product4_m = localB->Switch_i * *rtu_MotTrq;

  /* UnaryMinus: '<S39>/Unary Minus' */
  localB->UnaryMinus_dd = -localB->Subtract1_b;

  /* Product: '<S59>/Product1' */
  localB->Product1_fe = localB->UnaryMinus_dd * localB->VectorConcatenate_i[1];

  /* Switch: '<S59>/Switch' */
  if (localB->Product1_fe > DrivetrainHevP4_P.Switch_Threshold_d) {
    /* Switch: '<S59>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     */
    localB->Switch_lc = DrivetrainHevP4_P.OpenDifferential_eta;
  } else {
    /* Switch: '<S59>/Switch' incorporates:
     *  Constant: '<S59>/Constant'
     */
    localB->Switch_lc = DrivetrainHevP4_P.Constant_Value_k;
  }

  /* End of Switch: '<S59>/Switch' */

  /* Product: '<S59>/Product4' */
  localB->Product4_n = localB->Switch_lc * localB->UnaryMinus_dd;

  /* Product: '<S60>/Product1' */
  localB->Product1_l0 = localB->UnaryMinus_dd * localB->VectorConcatenate_i[2];

  /* Switch: '<S60>/Switch' */
  if (localB->Product1_l0 > DrivetrainHevP4_P.Switch_Threshold_a) {
    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     */
    localB->Switch_eh = DrivetrainHevP4_P.OpenDifferential_eta;
  } else {
    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S60>/Constant'
     */
    localB->Switch_eh = DrivetrainHevP4_P.Constant_Value_ln;
  }

  /* End of Switch: '<S60>/Switch' */

  /* Product: '<S60>/Product4' */
  localB->Product4_h = localB->Switch_eh * localB->UnaryMinus_dd;

  /* MATLAB Function: '<S47>/Open Differential' incorporates:
   *  Constant: '<S47>/Jd'
   *  Constant: '<S47>/Jw1'
   *  Constant: '<S47>/Jw3'
   *  Constant: '<S47>/Ndiff2'
   *  Constant: '<S47>/bd'
   *  Constant: '<S47>/bw1'
   *  Constant: '<S47>/bw2'
   */
  DrivetrainHevP4_OpenDifferential(localB->Product4_m, localB->Product4_n,
    localB->Product4_h, DrivetrainHevP4_P.bw1, DrivetrainHevP4_P.bd,
    DrivetrainHevP4_P.bw2, DrivetrainHevP4_P.OpenDifferential_Ndiff,
    DrivetrainHevP4_P.Jd, DrivetrainHevP4_P.Jw1, DrivetrainHevP4_P.Jw2,
    localB->Integrator_d, &localB->sf_OpenDifferential_j,
    &DrivetrainHevP4_P.sf_OpenDifferential_j);

  /* UnaryMinus: '<S54>/Unary Minus2' */
  localB->UnaryMinus2[0] = -localB->sf_OpenDifferential_j.xdot[0];
  localB->UnaryMinus2[1] = -localB->sf_OpenDifferential_j.xdot[1];

  /* SignalConversion generated from: '<S54>/Vector Concatenate' */
  localB->omegadot[1] = localB->UnaryMinus2[0];

  /* SignalConversion generated from: '<S54>/Vector Concatenate' */
  localB->omegadot[2] = localB->UnaryMinus2[1];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S54>/Constant'
     */
    if (DrivetrainHevP4_P.Constant_Value_lu >
        DrivetrainHevP4_P.Switch1_Threshold_h) {
      /* Switch: '<S54>/Switch1' incorporates:
       *  Constant: '<S54>/Constant6'
       */
      localB->diffDir_kr = DrivetrainHevP4_P.Constant6_Value_l;
    } else {
      /* UnaryMinus: '<S54>/Unary Minus' incorporates:
       *  Constant: '<S54>/Constant6'
       */
      localB->UnaryMinus_o2 = -DrivetrainHevP4_P.Constant6_Value_l;

      /* Switch: '<S54>/Switch1' */
      localB->diffDir_kr = localB->UnaryMinus_o2;
    }

    /* End of Switch: '<S54>/Switch1' */
  }

  /* Product: '<S54>/Product1' */
  localB->Product1_db[0] = localB->diffDir_kr *
    localB->sf_OpenDifferential_j.xdot[0];
  localB->Product1_db[1] = localB->diffDir_kr *
    localB->sf_OpenDifferential_j.xdot[1];

  /* Gain: '<S54>/Gain1' */
  Bias = DrivetrainHevP4_P.OpenDifferential_Ndiff / 2.0;

  /* Gain: '<S54>/Gain1' */
  localB->Gain1_o[0] = Bias * localB->Product1_db[0];
  localB->Gain1_o[1] = Bias * localB->Product1_db[1];

  /* Sum: '<S54>/Sum of Elements2' */
  Bias = localB->Gain1_o[0];
  Bias += localB->Gain1_o[1];
  localB->omegadot[0] = Bias;

  /* Product: '<S54>/Product5' incorporates:
   *  Constant: '<S54>/Constant1'
   *  Constant: '<S54>/Constant4'
   *  Constant: '<S54>/Constant5'
   */
  localB->Product5[0] = localB->VectorConcatenate_i[0] * localB->omegadot[0] *
    DrivetrainHevP4_P.Jd;
  localB->Product5[1] = localB->VectorConcatenate_i[1] * localB->omegadot[1] *
    DrivetrainHevP4_P.Jw1;
  localB->Product5[2] = localB->VectorConcatenate_i[2] * localB->omegadot[2] *
    DrivetrainHevP4_P.Jw2;

  /* Sum: '<S54>/Sum of Elements1' */
  Bias = localB->Product5[0];
  Bias += localB->Product5[1];
  Bias += localB->Product5[2];

  /* Sum: '<S54>/Sum of Elements1' */
  localB->KineticPower = Bias;

  /* Product: '<S52>/Transferred Power' */
  localB->TransferredPower_j[0] = *rtu_MotTrq * localB->VectorConcatenate_i[0];
  localB->TransferredPower_j[1] = localB->UnaryMinus_dd *
    localB->VectorConcatenate_i[1];
  localB->TransferredPower_j[2] = localB->UnaryMinus_dd *
    localB->VectorConcatenate_i[2];

  /* UnaryMinus: '<S52>/Unary Minus' */
  localB->UnaryMinus_b4 = -localB->KineticPower;

  /* Sum: '<S52>/Sum of Elements3' */
  tmpForInput[0] = localB->TransferredPower_j[0];
  tmpForInput[1] = localB->TransferredPower_j[1];
  tmpForInput[2] = localB->TransferredPower_j[2];
  tmpForInput[3] = localB->SumofElements2;
  tmpForInput[4] = localB->UnaryMinus_b4;
  Bias = 0.0;
  for (i = 0; i < 5; i++) {
    Bias -= tmpForInput[i];
  }

  /* Sum: '<S52>/Sum of Elements3' */
  localB->SumofElements3 = Bias;

  /* Sum: '<S59>/Subtract' */
  localB->Subtract_h = localB->Product4_n - localB->UnaryMinus_dd;

  /* Product: '<S59>/Product2' */
  localB->Product2_i = localB->Subtract_h * localB->VectorConcatenate_i[1];

  /* Sum: '<S60>/Subtract' */
  localB->Subtract_hs = localB->Product4_h - localB->UnaryMinus_dd;

  /* Product: '<S60>/Product2' */
  localB->Product2_f = localB->Subtract_hs * localB->VectorConcatenate_i[2];

  /* Sum: '<S61>/Subtract' */
  localB->Subtract_m = localB->Product4_m - *rtu_MotTrq;

  /* Product: '<S61>/Product2' */
  localB->Product2_p = localB->Subtract_m * localB->VectorConcatenate_i[0];

  /* Sum: '<S39>/Subtract' */
  localB->Subtract_l = localB->UnaryMinus1_p[0] -
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;

  /* Switch: '<S40>/Switch' */
  if (localB->Memory_e != 0.0) {
    /* Switch: '<S40>/Switch' */
    localB->Switch_go = localB->Integrator_jf;
  } else {
    /* Switch: '<S40>/Switch' */
    localB->Switch_go = localB->domega_o_k;
  }

  /* End of Switch: '<S40>/Switch' */

  /* Sum: '<S40>/Sum' */
  localB->Sum_g = localB->Subtract_l - localB->Switch_go;

  /* Product: '<S40>/Product' incorporates:
   *  Constant: '<S39>/omega_c'
   */
  localB->Product_g = DrivetrainHevP4_P.omega_c * localB->Sum_g;

  /* Product: '<S42>/Product1' incorporates:
   *  Constant: '<S42>/Constant8'
   */
  localB->Product1_o5 = DrivetrainHevP4_P.b * localB->Integrator_jf;

  /* UnaryMinus: '<S42>/Unary Minus' */
  localB->UnaryMinus_l = -localB->Product1_o5;

  /* Product: '<S42>/Product4' */
  localB->PwrDampLoss_g = localB->UnaryMinus_l * localB->Integrator_jf;

  /* Product: '<S41>/Product' */
  localB->Product_e = localB->Subtract_l * localB->Gain1_f;

  /* UnaryMinus: '<S39>/Unary Minus1' */
  localB->UnaryMinus1_i = -localB->Subtract1_b;

  /* SignalConversion: '<S39>/Signal Copy1' */
  localB->SignalCopy1_m = localB->Subtract1_b;

  /* SignalConversion: '<S39>/Signal Copy' */
  localB->R_j = localB->UnaryMinus1_p[0];

  /* Product: '<S41>/Transferred Power' */
  localB->TransferredPower_jv[0] = localB->UnaryMinus1_i * localB->R_j;
  localB->TransferredPower_jv[1] = localB->SignalCopy1_m *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;

  /* UnaryMinus: '<S41>/Unary Minus1' */
  localB->UnaryMinus1_d[0] = -localB->TransferredPower_jv[0];
  localB->UnaryMinus1_d[1] = -localB->TransferredPower_jv[1];

  /* Gain: '<S212>/4' */
  localB->u_p = DrivetrainHevP4_P.u_Gain_a *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;

  /* Product: '<S212>/Product11' */
  localB->Product11 = localB->sf_SimpleMagicTire.Fx * localB->
    VectorConcatenate2[0];

  /* Product: '<S212>/Product13' */
  localB->Product13 = localB->sf_SimpleMagicTire.Re *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;

  /* Product: '<S212>/Product7' */
  localB->Product7 = localB->Integrator_a * localB->Product13;

  /* Product: '<S212>/Product6' */
  localB->Product6 = localB->sf_SimpleMagicTire.My *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;

  /* Sum: '<S212>/Add' */
  localB->Add_g = (localB->Product11 - localB->Product7) + localB->Product6;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Product: '<S212>/Product' incorporates:
     *  Constant: '<S212>/Constant'
     */
    localB->Product_po = DrivetrainHevP4_P.Constant_Value_mkm * 0.0;

    /* Product: '<S212>/Product4' incorporates:
     *  Constant: '<S212>/Constant1'
     */
    localB->Product4_f = DrivetrainHevP4_P.Constant1_Value_p4 * 0.0 * 0.0;
  }

  /* SignalConversion: '<S220>/Signal Copy' */
  localB->SignalCopy = localB->sf_SimpleMagicTire.FzTire;

  /* Product: '<S212>/Product10' */
  localB->Product10 = localB->SignalCopy * 0.0;

  /* Product: '<S212>/Product12' */
  localB->Product12 = localB->ImpAsg_InsertedFor_Myb_at_inport_0_p *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;

  /* Product: '<S212>/Product2' */
  localB->Product2_fp = localB->ImpAsg_InsertedFor_Omega_at_inport_0_a *
    localB->uNF;

  /* Product: '<S212>/Product3' */
  localB->Product3_c = localB->Integrator1 * 0.0;

  /* Product: '<S212>/Product5' incorporates:
   *  Constant: '<S212>/Constant2'
   */
  localB->Product5_j = DrivetrainHevP4_P.Iyy_Whl *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a *
    localB->ImpAsg_InsertedFor_Omegadot_at_inport_0_m;

  /* Trigonometry: '<S212>/Trigonometric Function' */
  localB->TrigonometricFunction_k = tanh(localB->u_p);

  /* Product: '<S212>/Product8' */
  localB->Product8_l = localB->TorqueConversion *
    localB->TrigonometricFunction_k *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Product: '<S212>/Product9' */
    localB->Product9 = 0.0;

    /* UnaryMinus: '<S212>/Unary Minus8' */
    localB->UnaryMinus8 = -localB->Product9;
  }

  /* UnaryMinus: '<S212>/Unary Minus1' */
  localB->UnaryMinus1_dr = -localB->Product6;

  /* UnaryMinus: '<S212>/Unary Minus3' */
  localB->UnaryMinus3 = -localB->Product8_l;

  /* UnaryMinus: '<S212>/Unary Minus4' */
  localB->UnaryMinus4 = -localB->Product12;

  /* UnaryMinus: '<S212>/Unary Minus5' */
  localB->UnaryMinus5 = -localB->Product11;

  /* SignalConversion: '<S206>/Signal Copy' */
  localB->SignalCopy_b = localB->sf_SimpleMagicTire.FzTire;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Constant: '<S204>/GndConstant' */
    localB->GndConstant = DrivetrainHevP4_P.GndConstant_Value;

    /* Constant: '<S204>/TambConstant' */
    localB->TambConstant = DrivetrainHevP4_P.TambConstant_Value;
  }

  /* Product: '<S224>/Product' */
  localB->Product_ls = localB->sf_SimpleMagicTire.My / localB->Saturation;

  /* Sum: '<S224>/Add' */
  localB->Add_ku = localB->sf_SimpleMagicTire.Fx + localB->Product_ls;

  /* Product: '<S224>/Product3' */
  localB->Product3_a = localB->ImpAsg_InsertedFor_Omega_at_inport_0_a *
    localB->Saturation;

  /* RelationalOperator: '<S242>/Compare' incorporates:
   *  Constant: '<S242>/Constant'
   */
  Bias = -DrivetrainHevP4_P.VXLOW;

  /* RelationalOperator: '<S242>/Compare' */
  localB->Compare_j = (localB->Product3_a >= Bias);

  /* RelationalOperator: '<S243>/Compare' incorporates:
   *  Constant: '<S243>/Constant'
   */
  localB->Compare_b = (localB->Product3_a <= DrivetrainHevP4_P.VXLOW);

  /* Logic: '<S241>/Logical Operator' */
  localB->LogicalOperator_d = (localB->Compare_j && localB->Compare_b);

  /* Switch: '<S241>/Switch' */
  if (localB->LogicalOperator_d) {
    /* Fcn: '<S241>/Fcn' */
    u1 = localB->Product3_a / 2.0;
    Bias = rt_powd_snf(u1, 2.0);

    /* Fcn: '<S241>/Fcn' */
    localB->Fcn_m = 4.0 / (3.0 - Bias);

    /* Switch: '<S241>/Switch' */
    localB->Switch_j5 = localB->Fcn_m;
  } else {
    /* Abs: '<S241>/Abs' */
    localB->Abs_dw = fabs(localB->Product3_a);

    /* Switch: '<S241>/Switch' */
    localB->Switch_j5 = localB->Abs_dw;
  }

  /* End of Switch: '<S241>/Switch' */

  /* Product: '<S224>/Product2' incorporates:
   *  Constant: '<S224>/Constant2'
   */
  localB->Product2_k = localB->Switch_j5 / DrivetrainHevP4_P.Lrel;

  /* Sum: '<S240>/Sum' */
  localB->Sum_dw = localB->Add_ku - localB->Integrator_a;

  /* Product: '<S240>/Product' */
  localB->Product_h = localB->Product2_k * localB->Sum_dw;

  /* Gain: '<S250>/4' */
  localB->u_l = DrivetrainHevP4_P.u_Gain_m *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;

  /* Product: '<S250>/Product11' */
  localB->Product11_g = localB->sf_SimpleMagicTire_h.Fx *
    localB->VectorConcatenate2[0];

  /* Product: '<S250>/Product13' */
  localB->Product13_n = localB->sf_SimpleMagicTire_h.Re *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;

  /* Product: '<S250>/Product7' */
  localB->Product7_c = localB->Integrator_i * localB->Product13_n;

  /* Product: '<S250>/Product6' */
  localB->Product6_j = localB->sf_SimpleMagicTire_h.My *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;

  /* Sum: '<S250>/Add' */
  localB->Add_kj = (localB->Product11_g - localB->Product7_c) +
    localB->Product6_j;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Product: '<S250>/Product' incorporates:
     *  Constant: '<S250>/Constant'
     */
    localB->Product_p5 = DrivetrainHevP4_P.Constant_Value_et * 0.0;

    /* Product: '<S250>/Product4' incorporates:
     *  Constant: '<S250>/Constant1'
     */
    localB->Product4_dy = DrivetrainHevP4_P.Constant1_Value_i * 0.0 * 0.0;
  }

  /* SignalConversion: '<S258>/Signal Copy' */
  localB->SignalCopy_c = localB->sf_SimpleMagicTire_h.FzTire;

  /* Product: '<S250>/Product10' */
  localB->Product10_k = localB->SignalCopy_c * 0.0;

  /* Product: '<S250>/Product12' */
  localB->Product12_p = localB->ImpAsg_InsertedFor_Myb_at_inport_0 *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;

  /* Product: '<S250>/Product2' */
  localB->Product2_d = localB->ImpAsg_InsertedFor_Omega_at_inport_0 *
    localB->uNR;

  /* Product: '<S250>/Product3' */
  localB->Product3_l = localB->Integrator1_i * 0.0;

  /* Product: '<S250>/Product5' incorporates:
   *  Constant: '<S250>/Constant2'
   */
  localB->Product5_f = DrivetrainHevP4_P.Iyy_Whl *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0 *
    localB->ImpAsg_InsertedFor_Omegadot_at_inport_0;

  /* Trigonometry: '<S250>/Trigonometric Function' */
  localB->TrigonometricFunction_e = tanh(localB->u_l);

  /* Product: '<S250>/Product8' */
  localB->Product8_j = localB->TorqueConversion_o *
    localB->TrigonometricFunction_e *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Product: '<S250>/Product9' */
    localB->Product9_f = 0.0;

    /* UnaryMinus: '<S250>/Unary Minus8' */
    localB->UnaryMinus8_m = -localB->Product9_f;
  }

  /* UnaryMinus: '<S250>/Unary Minus1' */
  localB->UnaryMinus1_k = -localB->Product6_j;

  /* UnaryMinus: '<S250>/Unary Minus3' */
  localB->UnaryMinus3_d = -localB->Product8_j;

  /* UnaryMinus: '<S250>/Unary Minus4' */
  localB->UnaryMinus4_e = -localB->Product12_p;

  /* UnaryMinus: '<S250>/Unary Minus5' */
  localB->UnaryMinus5_a = -localB->Product11_g;

  /* SignalConversion: '<S244>/Signal Copy' */
  localB->SignalCopy_j = localB->sf_SimpleMagicTire_h.FzTire;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Constant: '<S205>/GndConstant' */
    localB->GndConstant_l = DrivetrainHevP4_P.GndConstant_Value_c;

    /* Constant: '<S205>/TambConstant' */
    localB->TambConstant_j = DrivetrainHevP4_P.TambConstant_Value_p;
  }

  /* Product: '<S262>/Product' */
  localB->Product_c0 = localB->sf_SimpleMagicTire_h.My / localB->Saturation_m;

  /* Sum: '<S262>/Add' */
  localB->Add_ke = localB->sf_SimpleMagicTire_h.Fx + localB->Product_c0;

  /* Product: '<S262>/Product3' */
  localB->Product3_cs = localB->ImpAsg_InsertedFor_Omega_at_inport_0 *
    localB->Saturation_m;

  /* RelationalOperator: '<S280>/Compare' incorporates:
   *  Constant: '<S280>/Constant'
   */
  Bias = -DrivetrainHevP4_P.VXLOW;

  /* RelationalOperator: '<S280>/Compare' */
  localB->Compare_d = (localB->Product3_cs >= Bias);

  /* RelationalOperator: '<S281>/Compare' incorporates:
   *  Constant: '<S281>/Constant'
   */
  localB->Compare_id = (localB->Product3_cs <= DrivetrainHevP4_P.VXLOW);

  /* Logic: '<S279>/Logical Operator' */
  localB->LogicalOperator_i = (localB->Compare_d && localB->Compare_id);

  /* Switch: '<S279>/Switch' */
  if (localB->LogicalOperator_i) {
    /* Fcn: '<S279>/Fcn' */
    u1 = localB->Product3_cs / 2.0;
    Bias = rt_powd_snf(u1, 2.0);

    /* Fcn: '<S279>/Fcn' */
    localB->Fcn = 4.0 / (3.0 - Bias);

    /* Switch: '<S279>/Switch' */
    localB->Switch_n = localB->Fcn;
  } else {
    /* Abs: '<S279>/Abs' */
    localB->Abs_p = fabs(localB->Product3_cs);

    /* Switch: '<S279>/Switch' */
    localB->Switch_n = localB->Abs_p;
  }

  /* End of Switch: '<S279>/Switch' */

  /* Product: '<S262>/Product2' incorporates:
   *  Constant: '<S262>/Constant2'
   */
  localB->Product2_ks = localB->Switch_n / DrivetrainHevP4_P.Lrel;

  /* Sum: '<S278>/Sum' */
  localB->Sum_e = localB->Add_ke - localB->Integrator_i;

  /* Product: '<S278>/Product' */
  localB->Product_d = localB->Product2_ks * localB->Sum_e;

  /* SignalConversion generated from: '<S23>/Vector Concatenate' */
  localB->VectorConcatenate_k[0] = localB->SumofElements_e;

  /* UnaryMinus: '<S23>/Unary Minus1' */
  localB->UnaryMinus1_dv[0] = -localB->Integrator_aj[0];
  localB->UnaryMinus1_dv[1] = -localB->Integrator_aj[1];

  /* SignalConversion generated from: '<S23>/Vector Concatenate' */
  localB->VectorConcatenate_k[1] = localB->UnaryMinus1_dv[0];

  /* SignalConversion generated from: '<S23>/Vector Concatenate' */
  localB->VectorConcatenate_k[2] = localB->UnaryMinus1_dv[1];

  /* Gain: '<S23>/Gain1' */
  localB->Gain1_fa[0] = DrivetrainHevP4_P.Gain1_Gain_k * localB->Integrator_aj[0];
  localB->Gain1_fa[1] = DrivetrainHevP4_P.Gain1_Gain_k * localB->Integrator_aj[1];

  /* Sum: '<S23>/Add' */
  localB->VectorConcatenate_k[3] = localB->Gain1_fa[0] - localB->Gain1_fa[1];

  /* Abs: '<S25>/Abs' */
  localB->Abs_n[0] = fabs(localB->VectorConcatenate_k[0]);
  localB->Abs_n[1] = fabs(localB->VectorConcatenate_k[1]);
  localB->Abs_n[2] = fabs(localB->VectorConcatenate_k[2]);

  /* Product: '<S25>/Product1' incorporates:
   *  Constant: '<S25>/Constant6'
   *  Constant: '<S25>/Constant7'
   *  Constant: '<S25>/Constant8'
   */
  localB->Product1_e[0] = DrivetrainHevP4_P.bd * localB->Abs_n[0];
  localB->Product1_e[1] = DrivetrainHevP4_P.bw1 * localB->Abs_n[1];
  localB->Product1_e[2] = DrivetrainHevP4_P.bw2 * localB->Abs_n[2];

  /* UnaryMinus: '<S25>/Unary Minus' */
  localB->UnaryMinus_dr[0] = -localB->Product1_e[0];

  /* Product: '<S25>/Product4' */
  localB->Product4_a[0] = localB->UnaryMinus_dr[0] * localB->Abs_n[0];

  /* UnaryMinus: '<S25>/Unary Minus' */
  localB->UnaryMinus_dr[1] = -localB->Product1_e[1];

  /* Product: '<S25>/Product4' */
  localB->Product4_a[1] = localB->UnaryMinus_dr[1] * localB->Abs_n[1];

  /* UnaryMinus: '<S25>/Unary Minus' */
  localB->UnaryMinus_dr[2] = -localB->Product1_e[2];

  /* Product: '<S25>/Product4' */
  localB->Product4_a[2] = localB->UnaryMinus_dr[2] * localB->Abs_n[2];

  /* Sum: '<S25>/Sum of Elements2' */
  Bias = localB->Product4_a[0];
  Bias += localB->Product4_a[1];
  Bias += localB->Product4_a[2];

  /* Sum: '<S25>/Sum of Elements2' */
  localB->SumofElements2_m = Bias;

  /* Product: '<S33>/Product1' */
  localB->Product1_pt = localB->Subtract1_a * localB->VectorConcatenate_k[0];

  /* Switch: '<S33>/Switch' */
  if (localB->Product1_pt > DrivetrainHevP4_P.Switch_Threshold_f) {
    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S35>/Constant'
     */
    localB->Switch_lk = DrivetrainHevP4_P.OpenDifferential_eta_l;
  } else {
    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S33>/Constant'
     */
    localB->Switch_lk = DrivetrainHevP4_P.Constant_Value_ch;
  }

  /* End of Switch: '<S33>/Switch' */

  /* Product: '<S33>/Product4' */
  localB->Product4_f3 = localB->Switch_lk * localB->Subtract1_a;

  /* UnaryMinus: '<S11>/Unary Minus' */
  localB->UnaryMinus_cy = -localB->Subtract1;

  /* Product: '<S31>/Product1' */
  localB->Product1_lk = localB->UnaryMinus_cy * localB->VectorConcatenate_k[1];

  /* Switch: '<S31>/Switch' */
  if (localB->Product1_lk > DrivetrainHevP4_P.Switch_Threshold_mv) {
    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S35>/Constant'
     */
    localB->Switch_bl = DrivetrainHevP4_P.OpenDifferential_eta_l;
  } else {
    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S31>/Constant'
     */
    localB->Switch_bl = DrivetrainHevP4_P.Constant_Value_f;
  }

  /* End of Switch: '<S31>/Switch' */

  /* Product: '<S31>/Product4' */
  localB->Product4_fd = localB->Switch_bl * localB->UnaryMinus_cy;

  /* Product: '<S32>/Product1' */
  localB->Product1_d2 = localB->UnaryMinus_cy * localB->VectorConcatenate_k[2];

  /* Switch: '<S32>/Switch' */
  if (localB->Product1_d2 > DrivetrainHevP4_P.Switch_Threshold_e) {
    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S35>/Constant'
     */
    localB->Switch_iu = DrivetrainHevP4_P.OpenDifferential_eta_l;
  } else {
    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S32>/Constant'
     */
    localB->Switch_iu = DrivetrainHevP4_P.Constant_Value_m2;
  }

  /* End of Switch: '<S32>/Switch' */

  /* Product: '<S32>/Product4' */
  localB->Product4_g = localB->Switch_iu * localB->UnaryMinus_cy;

  /* MATLAB Function: '<S19>/Open Differential' incorporates:
   *  Constant: '<S19>/Jd'
   *  Constant: '<S19>/Jw1'
   *  Constant: '<S19>/Jw3'
   *  Constant: '<S19>/Ndiff2'
   *  Constant: '<S19>/bd'
   *  Constant: '<S19>/bw1'
   *  Constant: '<S19>/bw2'
   */
  DrivetrainHevP4_OpenDifferential(localB->Product4_f3, localB->Product4_fd,
    localB->Product4_g, DrivetrainHevP4_P.bw1, DrivetrainHevP4_P.bd,
    DrivetrainHevP4_P.bw2, DrivetrainHevP4_P.Ndiff, DrivetrainHevP4_P.Jd,
    DrivetrainHevP4_P.Jw1, DrivetrainHevP4_P.Jw2, localB->Integrator_aj,
    &localB->sf_OpenDifferential, &DrivetrainHevP4_P.sf_OpenDifferential);

  /* UnaryMinus: '<S26>/Unary Minus2' */
  localB->UnaryMinus2_g[0] = -localB->sf_OpenDifferential.xdot[0];
  localB->UnaryMinus2_g[1] = -localB->sf_OpenDifferential.xdot[1];

  /* SignalConversion generated from: '<S26>/Vector Concatenate' */
  localB->omegadot_k[1] = localB->UnaryMinus2_g[0];

  /* SignalConversion generated from: '<S26>/Vector Concatenate' */
  localB->omegadot_k[2] = localB->UnaryMinus2_g[1];
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S26>/Constant'
     */
    if (DrivetrainHevP4_P.Constant_Value_ab >
        DrivetrainHevP4_P.Switch1_Threshold_a) {
      /* Switch: '<S26>/Switch1' incorporates:
       *  Constant: '<S26>/Constant6'
       */
      localB->diffDir_i = DrivetrainHevP4_P.Constant6_Value_b;
    } else {
      /* UnaryMinus: '<S26>/Unary Minus' incorporates:
       *  Constant: '<S26>/Constant6'
       */
      localB->UnaryMinus_fz = -DrivetrainHevP4_P.Constant6_Value_b;

      /* Switch: '<S26>/Switch1' */
      localB->diffDir_i = localB->UnaryMinus_fz;
    }

    /* End of Switch: '<S26>/Switch1' */
  }

  /* Product: '<S26>/Product1' */
  localB->Product1_i[0] = localB->diffDir_i * localB->sf_OpenDifferential.xdot[0];
  localB->Product1_i[1] = localB->diffDir_i * localB->sf_OpenDifferential.xdot[1];

  /* Gain: '<S26>/Gain1' */
  Bias = DrivetrainHevP4_P.Ndiff / 2.0;

  /* Gain: '<S26>/Gain1' */
  localB->Gain1_c[0] = Bias * localB->Product1_i[0];
  localB->Gain1_c[1] = Bias * localB->Product1_i[1];

  /* Sum: '<S26>/Sum of Elements2' */
  Bias = localB->Gain1_c[0];
  Bias += localB->Gain1_c[1];
  localB->omegadot_k[0] = Bias;

  /* Product: '<S26>/Product5' incorporates:
   *  Constant: '<S26>/Constant1'
   *  Constant: '<S26>/Constant4'
   *  Constant: '<S26>/Constant5'
   */
  localB->Product5_n[0] = localB->VectorConcatenate_k[0] * localB->omegadot_k[0]
    * DrivetrainHevP4_P.Jd;
  localB->Product5_n[1] = localB->VectorConcatenate_k[1] * localB->omegadot_k[1]
    * DrivetrainHevP4_P.Jw1;
  localB->Product5_n[2] = localB->VectorConcatenate_k[2] * localB->omegadot_k[2]
    * DrivetrainHevP4_P.Jw2;

  /* Product: '<S24>/Transferred Power' */
  localB->TransferredPower_l[0] = localB->Subtract1_a *
    localB->VectorConcatenate_k[0];
  localB->TransferredPower_l[1] = localB->UnaryMinus_cy *
    localB->VectorConcatenate_k[1];
  localB->TransferredPower_l[2] = localB->UnaryMinus_cy *
    localB->VectorConcatenate_k[2];

  /* Sum: '<S26>/Sum of Elements1' */
  Bias = localB->Product5_n[0];

  /* Sum: '<S24>/Sum of Elements3' */
  tmpForInput[0] = localB->TransferredPower_l[0];

  /* Sum: '<S26>/Sum of Elements1' */
  Bias += localB->Product5_n[1];

  /* Sum: '<S24>/Sum of Elements3' */
  tmpForInput[1] = localB->TransferredPower_l[1];

  /* Sum: '<S26>/Sum of Elements1' */
  Bias += localB->Product5_n[2];

  /* Sum: '<S24>/Sum of Elements3' */
  tmpForInput[2] = localB->TransferredPower_l[2];

  /* Sum: '<S26>/Sum of Elements1' */
  localB->KineticPower_b = Bias;

  /* UnaryMinus: '<S24>/Unary Minus' */
  localB->UnaryMinus_ao = -localB->KineticPower_b;

  /* Sum: '<S24>/Sum of Elements3' */
  tmpForInput[3] = localB->SumofElements2_m;
  tmpForInput[4] = localB->UnaryMinus_ao;
  Bias = 0.0;
  for (i = 0; i < 5; i++) {
    Bias -= tmpForInput[i];
  }

  /* Sum: '<S24>/Sum of Elements3' */
  localB->SumofElements3_i = Bias;

  /* Sum: '<S31>/Subtract' */
  localB->Subtract_c = localB->Product4_fd - localB->UnaryMinus_cy;

  /* Product: '<S31>/Product2' */
  localB->Product2_a = localB->Subtract_c * localB->VectorConcatenate_k[1];

  /* Sum: '<S32>/Subtract' */
  localB->Subtract_g = localB->Product4_g - localB->UnaryMinus_cy;

  /* Product: '<S32>/Product2' */
  localB->Product2_gh = localB->Subtract_g * localB->VectorConcatenate_k[2];

  /* Sum: '<S33>/Subtract' */
  localB->Subtract_k = localB->Product4_f3 - localB->Subtract1_a;

  /* Product: '<S33>/Product2' */
  localB->Product2_j = localB->Subtract_k * localB->VectorConcatenate_k[0];

  /* Sum: '<S11>/Subtract' */
  localB->Subtract_cp = localB->UnaryMinus1_dv[0] -
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;

  /* Switch: '<S12>/Switch' */
  if (localB->Memory != 0.0) {
    /* Switch: '<S12>/Switch' */
    localB->Switch_lb = localB->Integrator_c;
  } else {
    /* Switch: '<S12>/Switch' */
    localB->Switch_lb = localB->domega_o;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S12>/Sum' */
  localB->Sum_b = localB->Subtract_cp - localB->Switch_lb;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S11>/omega_c'
   */
  localB->Product_il = DrivetrainHevP4_P.omega_c * localB->Sum_b;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S14>/Constant8'
   */
  localB->Product1_es = DrivetrainHevP4_P.b * localB->Integrator_c;

  /* UnaryMinus: '<S14>/Unary Minus' */
  localB->UnaryMinus_bv = -localB->Product1_es;

  /* Product: '<S14>/Product4' */
  localB->PwrDampLoss_l = localB->UnaryMinus_bv * localB->Integrator_c;

  /* Product: '<S13>/Product' */
  localB->Product_o3 = localB->Subtract_cp * localB->Gain1;

  /* UnaryMinus: '<S11>/Unary Minus1' */
  localB->UnaryMinus1_pg = -localB->Subtract1;

  /* SignalConversion: '<S11>/Signal Copy1' */
  localB->SignalCopy1_f3 = localB->Subtract1;

  /* SignalConversion: '<S11>/Signal Copy' */
  localB->R_d = localB->UnaryMinus1_dv[0];

  /* Product: '<S13>/Transferred Power' */
  localB->TransferredPower_n[0] = localB->UnaryMinus1_pg * localB->R_d;
  localB->TransferredPower_n[1] = localB->SignalCopy1_f3 *
    localB->ImpAsg_InsertedFor_Omega_at_inport_0_a;

  /* UnaryMinus: '<S13>/Unary Minus1' */
  localB->UnaryMinus1_a[0] = -localB->TransferredPower_n[0];
  localB->UnaryMinus1_a[1] = -localB->TransferredPower_n[1];
}

/* Update for referenced model: 'DrivetrainHevP4' */
void DrivetrainHevP4_Update(RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M,
  boolean_T *rty_Cltch2State, DW_DrivetrainHevP4_f_T *localDW)
{
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Update for Memory: '<S12>/Memory' incorporates:
     *  Constant: '<S12>/Reset'
     */
    localDW->Memory_PreviousInput = DrivetrainHevP4_P.Reset_Value_n;

    /* Update for Memory: '<S40>/Memory' incorporates:
     *  Constant: '<S40>/Reset'
     */
    localDW->Memory_PreviousInput_c = DrivetrainHevP4_P.Reset_Value_da;
  }

  /* Update for Integrator: '<S12>/Integrator' */
  localDW->Integrator_IWORK = 0;

  /* Update for Integrator: '<S40>/Integrator' */
  localDW->Integrator_IWORK_d = 0;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Update for Memory: '<S82>/Memory' incorporates:
     *  Constant: '<S82>/Reset'
     */
    localDW->Memory_PreviousInput_h = DrivetrainHevP4_P.Reset_Value_f;

    /* Update for Memory: '<S145>/Memory' incorporates:
     *  Constant: '<S145>/Reset'
     */
    localDW->Memory_PreviousInput_i = DrivetrainHevP4_P.Reset_Value;
  }

  /* Update for Integrator: '<S82>/Integrator' */
  localDW->Integrator_IWORK_k = 0;

  /* Update for Integrator: '<S145>/Integrator' */
  localDW->Integrator_IWORK_i = 0;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Update for Memory: '<S140>/Memory' */
    localDW->Memory_PreviousInput_o = *rty_Cltch2State;

    /* Update for Memory: '<S91>/Memory' incorporates:
     *  Constant: '<S91>/Reset'
     */
    localDW->Memory_PreviousInput_m = DrivetrainHevP4_P.Reset_Value_b;
  }

  /* Update for If: '<S121>/If' */
  switch (localDW->If_ActiveSubsystem) {
   case 0:
    /* Update for IfAction SubSystem: '<S121>/Locked' incorporates:
     *  ActionPort: '<S127>/Action'
     */
    /* Update for Integrator: '<S127>/Locked Shaft Integrator' */
    localDW->LockedShaftIntegrator_IWORK = 0;

    /* End of Update for SubSystem: '<S121>/Locked' */
    break;

   case 1:
    /* Update for IfAction SubSystem: '<S121>/Unlocked' incorporates:
     *  ActionPort: '<S128>/Action'
     */
    /* Update for Integrator: '<S128>/Pump Integrator' */
    localDW->PumpIntegrator_IWORK = 0;

    /* Update for Integrator: '<S128>/Turbine Integrator' */
    localDW->TurbineIntegrator_IWORK = 0;

    /* End of Update for SubSystem: '<S121>/Unlocked' */
    break;
  }

  /* End of Update for If: '<S121>/If' */

  /* Update for Integrator: '<S91>/Integrator' */
  localDW->Integrator_IWORK_a = 0;
  if (rtmIsMajorTimeStep(DrivetrainHevP4_M)) {
    /* Update for Memory: '<S73>/Memory' incorporates:
     *  Constant: '<S73>/Reset'
     */
    localDW->Memory_PreviousInput_a = DrivetrainHevP4_P.Reset_Value_d;
  }

  /* Update for Integrator: '<S73>/Integrator' */
  localDW->Integrator_IWORK_k3 = 0;

  /* Update for If: '<S89>/If' */
  switch (localDW->If_ActiveSubsystem_c) {
   case 0:
    /* Update for IfAction SubSystem: '<S89>/Locked' incorporates:
     *  ActionPort: '<S93>/Action'
     */
    /* Update for Integrator: '<S93>/x' */
    localDW->x_IWORK = 0;

    /* End of Update for SubSystem: '<S89>/Locked' */
    break;

   case 1:
    /* Update for IfAction SubSystem: '<S89>/Unlocked' incorporates:
     *  ActionPort: '<S95>/Action'
     */
    /* Update for Integrator: '<S95>/xe' */
    localDW->xe_IWORK = 0;

    /* Update for Integrator: '<S95>/xv' */
    localDW->xv_IWORK = 0;

    /* End of Update for SubSystem: '<S89>/Unlocked' */
    break;
  }

  /* End of Update for If: '<S89>/If' */

  /* Update for Integrator: '<S19>/Integrator' */
  localDW->Integrator_IWORK_l = 0;

  /* Update for Integrator: '<S47>/Integrator' */
  localDW->Integrator_IWORK_g = 0;
}

/* Derivatives for referenced model: 'DrivetrainHevP4' */
void DrivetrainHevP4_Deriv(B_DrivetrainHevP4_c_T *localB, DW_DrivetrainHevP4_f_T
  *localDW, X_DrivetrainHevP4_n_T *localX, XDot_DrivetrainHevP4_n_T *localXdot)
{
  boolean_T lsat;
  boolean_T usat;

  /* Derivatives for Integrator: '<S164>/Integrator' */
  localXdot->Integrator_CSTATE = localB->xddot;

  /* Derivatives for Integrator: '<S159>/Integrator1' */
  localXdot->Integrator1_CSTATE = localB->Divide_i;

  /* Derivatives for Integrator: '<S12>/Integrator' */
  localXdot->Integrator_CSTATE_m = localB->Product_il;

  /* Derivatives for Integrator: '<S11>/Integrator' */
  localXdot->Integrator_CSTATE_g = localB->Subtract_cp;

  /* Derivatives for Integrator: '<S240>/Integrator' */
  localXdot->Integrator_CSTATE_o = localB->Product_h;

  /* Derivatives for Iterator SubSystem: '<S211>/Clutch' */
  DrivetrainHevP4_Clutch_k_Deriv(1, &localB->Signconvention,
    &localB->Ratioofstatictokinetic, &localB->TorqueConversion, localB->Clutch,
    localDW->Clutch, localXdot->Clutch);

  /* End of Derivatives for SubSystem: '<S211>/Clutch' */

  /* Derivatives for Integrator: '<S158>/Integrator1' */
  localXdot->Integrator1_CSTATE_n = localB->Divide;

  /* Derivatives for Integrator: '<S40>/Integrator' */
  localXdot->Integrator_CSTATE_a = localB->Product_g;

  /* Derivatives for Integrator: '<S39>/Integrator' */
  localXdot->Integrator_CSTATE_p = localB->Subtract_l;

  /* Derivatives for Integrator: '<S278>/Integrator' */
  localXdot->Integrator_CSTATE_h = localB->Product_d;

  /* Derivatives for Iterator SubSystem: '<S249>/Clutch' */
  DrivetrainHevP4_Clutch_k_Deriv(1, &localB->Signconvention_p,
    &localB->Ratioofstatictokinetic_o, &localB->TorqueConversion_o,
    localB->Clutch_e, localDW->Clutch_e, localXdot->Clutch_e);

  /* End of Derivatives for SubSystem: '<S249>/Clutch' */

  /* Derivatives for Integrator: '<S172>/Integrator3' */
  localXdot->Integrator3_CSTATE = localB->VectorConcatenate2[0];

  /* Derivatives for Integrator: '<S161>/Integrator1' */
  localXdot->Integrator1_CSTATE_h = localB->Integrator;

  /* Derivatives for Integrator: '<S82>/Integrator' */
  localXdot->Integrator_CSTATE_b = localB->Product_jh;

  /* Derivatives for Integrator: '<S81>/Integrator' */
  localXdot->Integrator_CSTATE_e = localB->Subtract_p;

  /* Derivatives for Integrator: '<S145>/Integrator' */
  localXdot->Integrator_CSTATE_c = localB->Product_a;

  /* Derivatives for If: '<S121>/If' */
  localXdot->LockedShaftIntegrator_CSTATE = 0.0;

  {
    real_T *dx;
    int_T i;
    dx = &(localXdot->PumpIntegrator_CSTATE);
    for (i=0; i < 3; i++) {
      dx[i] = 0.0;
    }
  }

  switch (localDW->If_ActiveSubsystem) {
   case 0:
    /* Derivatives for IfAction SubSystem: '<S121>/Locked' incorporates:
     *  ActionPort: '<S127>/Action'
     */
    /* Derivatives for Integrator: '<S127>/Locked Shaft Integrator' */
    lsat = (localX->LockedShaftIntegrator_CSTATE <=
            DrivetrainHevP4_P.LockedShaftIntegrator_LowerSat);
    usat = (localX->LockedShaftIntegrator_CSTATE >=
            DrivetrainHevP4_P.LockedShaftIntegrator_UpperSat);
    if (((!lsat) && (!usat)) || (lsat && (localB->Inertia > 0.0)) || (usat &&
         (localB->Inertia < 0.0))) {
      localXdot->LockedShaftIntegrator_CSTATE = localB->Inertia;
    } else {
      /* in saturation */
      localXdot->LockedShaftIntegrator_CSTATE = 0.0;
    }

    /* End of Derivatives for Integrator: '<S127>/Locked Shaft Integrator' */
    /* End of Derivatives for SubSystem: '<S121>/Locked' */
    break;

   case 1:
    /* Derivatives for IfAction SubSystem: '<S121>/Unlocked' incorporates:
     *  ActionPort: '<S128>/Action'
     */
    /* Derivatives for Integrator: '<S128>/Pump Integrator' */
    lsat = (localX->PumpIntegrator_CSTATE <=
            DrivetrainHevP4_P.PumpIntegrator_LowerSat);
    usat = (localX->PumpIntegrator_CSTATE >=
            DrivetrainHevP4_P.PumpIntegrator_UpperSat);
    if (((!lsat) && (!usat)) || (lsat && (localB->ImpellerInertia > 0.0)) ||
        (usat && (localB->ImpellerInertia < 0.0))) {
      localXdot->PumpIntegrator_CSTATE = localB->ImpellerInertia;
    } else {
      /* in saturation */
      localXdot->PumpIntegrator_CSTATE = 0.0;
    }

    /* End of Derivatives for Integrator: '<S128>/Pump Integrator' */

    /* Derivatives for Integrator: '<S128>/Turbine Integrator' */
    lsat = (localX->TurbineIntegrator_CSTATE <=
            DrivetrainHevP4_P.TurbineIntegrator_LowerSat);
    usat = (localX->TurbineIntegrator_CSTATE >=
            DrivetrainHevP4_P.TurbineIntegrator_UpperSat);
    if (((!lsat) && (!usat)) || (lsat && (localB->TurbineInertia > 0.0)) ||
        (usat && (localB->TurbineInertia < 0.0))) {
      localXdot->TurbineIntegrator_CSTATE = localB->TurbineInertia;
    } else {
      /* in saturation */
      localXdot->TurbineIntegrator_CSTATE = 0.0;
    }

    /* End of Derivatives for Integrator: '<S128>/Turbine Integrator' */

    /* Derivatives for Enabled SubSystem: '<S148>/LPF' */
    if (localDW->LPF_MODE) {
      /* Derivatives for Integrator: '<S152>/Integrator' */
      localXdot->Integrator_CSTATE_d = localB->Product_fu;
    } else {
      localXdot->Integrator_CSTATE_d = 0.0;
    }

    /* End of Derivatives for SubSystem: '<S148>/LPF' */
    /* End of Derivatives for SubSystem: '<S121>/Unlocked' */
    break;
  }

  /* End of Derivatives for If: '<S121>/If' */

  /* Derivatives for Integrator: '<S91>/Integrator' */
  localXdot->Integrator_CSTATE_ho = localB->Product_a3;

  /* Derivatives for Integrator: '<S73>/Integrator' */
  localXdot->Integrator_CSTATE_mi = localB->Product_b;

  /* Derivatives for Integrator: '<S72>/Integrator' */
  localXdot->Integrator_CSTATE_bd = localB->Subtract;

  /* Derivatives for If: '<S89>/If' */
  localXdot->w = 0.0;

  {
    real_T *dx;
    int_T i;
    dx = &(localXdot->we);
    for (i=0; i < 2; i++) {
      dx[i] = 0.0;
    }
  }

  switch (localDW->If_ActiveSubsystem_c) {
   case 0:
    /* Derivatives for IfAction SubSystem: '<S89>/Locked' incorporates:
     *  ActionPort: '<S93>/Action'
     */
    /* Derivatives for Integrator: '<S93>/x' */
    localXdot->w = localB->Product8_h;

    /* End of Derivatives for SubSystem: '<S89>/Locked' */
    break;

   case 1:
    /* Derivatives for IfAction SubSystem: '<S89>/Unlocked' incorporates:
     *  ActionPort: '<S95>/Action'
     */
    /* Derivatives for Integrator: '<S95>/xe' */
    localXdot->we = localB->Product4_gf;

    /* Derivatives for Integrator: '<S95>/xv' */
    localXdot->wv = localB->Product8_b;

    /* End of Derivatives for SubSystem: '<S89>/Unlocked' */
    break;
  }

  /* End of Derivatives for If: '<S89>/If' */

  /* Derivatives for Integrator: '<S19>/Integrator' */
  lsat = (localX->Integrator_CSTATE_f[0] <=
          DrivetrainHevP4_P.Integrator_LowerSat);
  usat = (localX->Integrator_CSTATE_f[0] >=
          DrivetrainHevP4_P.Integrator_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (localB->sf_OpenDifferential.xdot[0] >
        0.0)) || (usat && (localB->sf_OpenDifferential.xdot[0] < 0.0))) {
    localXdot->Integrator_CSTATE_f[0] = localB->sf_OpenDifferential.xdot[0];
  } else {
    /* in saturation */
    localXdot->Integrator_CSTATE_f[0] = 0.0;
  }

  lsat = (localX->Integrator_CSTATE_f[1] <=
          DrivetrainHevP4_P.Integrator_LowerSat);
  usat = (localX->Integrator_CSTATE_f[1] >=
          DrivetrainHevP4_P.Integrator_UpperSat);
  if (((!lsat) && (!usat)) || (lsat && (localB->sf_OpenDifferential.xdot[1] >
        0.0)) || (usat && (localB->sf_OpenDifferential.xdot[1] < 0.0))) {
    localXdot->Integrator_CSTATE_f[1] = localB->sf_OpenDifferential.xdot[1];
  } else {
    /* in saturation */
    localXdot->Integrator_CSTATE_f[1] = 0.0;
  }

  /* End of Derivatives for Integrator: '<S19>/Integrator' */

  /* Derivatives for Integrator: '<S47>/Integrator' */
  lsat = (localX->Integrator_CSTATE_m0[0] <=
          DrivetrainHevP4_P.Integrator_LowerSat_m);
  usat = (localX->Integrator_CSTATE_m0[0] >=
          DrivetrainHevP4_P.Integrator_UpperSat_o);
  if (((!lsat) && (!usat)) || (lsat && (localB->sf_OpenDifferential_j.xdot[0] >
        0.0)) || (usat && (localB->sf_OpenDifferential_j.xdot[0] < 0.0))) {
    localXdot->Integrator_CSTATE_m0[0] = localB->sf_OpenDifferential_j.xdot[0];
  } else {
    /* in saturation */
    localXdot->Integrator_CSTATE_m0[0] = 0.0;
  }

  lsat = (localX->Integrator_CSTATE_m0[1] <=
          DrivetrainHevP4_P.Integrator_LowerSat_m);
  usat = (localX->Integrator_CSTATE_m0[1] >=
          DrivetrainHevP4_P.Integrator_UpperSat_o);
  if (((!lsat) && (!usat)) || (lsat && (localB->sf_OpenDifferential_j.xdot[1] >
        0.0)) || (usat && (localB->sf_OpenDifferential_j.xdot[1] < 0.0))) {
    localXdot->Integrator_CSTATE_m0[1] = localB->sf_OpenDifferential_j.xdot[1];
  } else {
    /* in saturation */
    localXdot->Integrator_CSTATE_m0[1] = 0.0;
  }

  /* End of Derivatives for Integrator: '<S47>/Integrator' */
}

/* Model initialize function */
void DrivetrainHevP4_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1,
  RT_MODEL_DrivetrainHevP4_T *const DrivetrainHevP4_M, B_DrivetrainHevP4_c_T
  *localB, DW_DrivetrainHevP4_f_T *localDW, X_DrivetrainHevP4_n_T *localX,
  ZCE_DrivetrainHevP4_T *localZCE, rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  DrivetrainHevP4_P.Saturation1_LowerSat = rtMinusInf;
  DrivetrainHevP4_P.Saturation2_UpperSat = rtInf;
  DrivetrainHevP4_P.Saturation1_LowerSat_n = rtMinusInf;
  DrivetrainHevP4_P.Saturation2_UpperSat_b = rtInf;
  DrivetrainHevP4_P.Saturation_UpperSat_h = rtInf;
  DrivetrainHevP4_P.uniclutch_UpperSat = rtInf;
  DrivetrainHevP4_P.Saturation_UpperSat_b = rtInf;
  DrivetrainHevP4_P.DisallowNegativeBrakeTorque_UpperSat = rtInf;
  DrivetrainHevP4_P.Saturation_UpperSat_l = rtInf;
  DrivetrainHevP4_P.DisallowNegativeBrakeTorque_UpperSat_k = rtInf;
  DrivetrainHevP4_P.Saturation_UpperSat_p = rtInf;
  DrivetrainHevP4_P.Saturation1_LowerSat_k = rtMinusInf;
  DrivetrainHevP4_P.Saturation_UpperSat_n = rtInf;

  /* initialize real-time model */
  (void) memset((void *)DrivetrainHevP4_M, 0,
                sizeof(RT_MODEL_DrivetrainHevP4_T));

  /* setup the global timing engine */
  DrivetrainHevP4_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  DrivetrainHevP4_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  DrivetrainHevP4_M->timingBridge = (timingBridge);

  /* initialize error status */
  rtmSetErrorStatusPointer(DrivetrainHevP4_M, rt_errorStatus);

  /* initialize stop requested flag */
  rtmSetStopRequestedPtr(DrivetrainHevP4_M, rt_stopRequested);

  /* initialize RTWSolverInfo */
  DrivetrainHevP4_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(DrivetrainHevP4_M, rtsiGetSimTimeStepPtr
    (DrivetrainHevP4_M->solverInfo));
  DrivetrainHevP4_M->Timing.stepSize0 = (rtsiGetStepSize
    (DrivetrainHevP4_M->solverInfo));

  /* block I/O */
  (void) memset(((void *) localB), 0,
                sizeof(B_DrivetrainHevP4_c_T));

  /* states (dwork) */
  (void) memset((void *)localDW, 0,
                sizeof(DW_DrivetrainHevP4_f_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  {
    DrivetrainHevP4_InitializeDataMapInfo(DrivetrainHevP4_M, localB, localX);
  }

  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (NULL)) && (rt_ChildPath != (NULL))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx,
                        &(DrivetrainHevP4_M->DataMapInfo.mmi));
    rtwCAPI_SetPath(DrivetrainHevP4_M->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex(DrivetrainHevP4_M->DataMapInfo.mmi,
      rt_CSTATEIdx);
  }

  localZCE->Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  localZCE->Integrator_Reset_ZCE_m = UNINITIALIZED_ZCSIG;
  localZCE->VelocitiesMatch_Input_ZCE = UNINITIALIZED_ZCSIG;
  localZCE->Integrator_Reset_ZCE_l = UNINITIALIZED_ZCSIG;
  localZCE->Integrator_Reset_ZCE_f = UNINITIALIZED_ZCSIG;
  localZCE->Integrator_Reset_ZCE_k = UNINITIALIZED_ZCSIG;
  localZCE->Integrator_Reset_ZCE_p = UNINITIALIZED_ZCSIG;
}

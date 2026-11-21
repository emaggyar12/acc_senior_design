/*
 * Code generation for system system '<S12>/ACC ext'
 * For more details, see corresponding source file HSC_Model_ACCext.c
 *
 */

#ifndef RTW_HEADER_HSC_Model_ACCext_h_
#define RTW_HEADER_HSC_Model_ACCext_h_
#ifndef HSC_Model_COMMON_INCLUDES_
# define HSC_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* HSC_Model_COMMON_INCLUDES_ */

#include "HSC_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for system '<S12>/ACC ext' */
typedef struct {
  real_T EnginePowerBlock;             /* '<S21>/EnginePowerBlock' */
  real_T MotorPowerBlock;              /* '<S21>/MotorPowerBlock' */
  real_T ACC_pwr_ext;                  /* '<S21>/Add' */
  real_T Multiply;                     /* '<S21>/Multiply' */
  real_T Divide;                       /* '<S21>/Divide' */
  real_T Gain1;                        /* '<S21>/Gain1' */
  real_T uDLookupTable;                /* '<S21>/2-D Lookup Table' */
  real_T FoundationBrakesBlock;        /* '<S21>/FoundationBrakesBlock' */
  real_T Constant10;                   /* '<S21>/Constant10' */
  real_T TotalAccelCommandBeforeRoadLoad;/* '<S21>/Constant12' */
  real_T TotalForceAfterRoadLoad;      /* '<S21>/Constant13' */
  real_T SetSpeedCmd;                  /* '<S21>/Constant14' */
  real_T TSamp;                        /* '<S22>/TSamp' */
  real_T Uk1;                          /* '<S22>/UD' */
  real_T Diff;                         /* '<S22>/Diff' */
  real_T TSamp_m;                      /* '<S23>/TSamp' */
  real_T Uk1_f;                        /* '<S23>/UD' */
  real_T Diff_b;                       /* '<S23>/Diff' */
  real_T DistInfo[3];                  /* '<S21>/DistInfo' */
  real_T Gain2;                        /* '<S21>/Gain2' */
  real_T Switch;                       /* '<S21>/Switch' */
  real_T Product2;                     /* '<S21>/Product2' */
  real_T Divide1;                      /* '<S21>/Divide1' */
  real_T Divide2;                      /* '<S21>/Divide2' */
  real_T Headway_intrusion;            /* '<S21>/Divide3' */
  real_T DiscreteTimeIntegrator;       /* '<S24>/Discrete-Time Integrator' */
  real_T Product;                      /* '<S24>/Product' */
  real_T UnitDelay[2];                 /* '<S24>/Unit Delay' */
  real_T VectorConcatenate1[2];        /* '<S24>/Vector Concatenate1' */
  real_T Switch_g[2];                  /* '<S24>/Switch' */
  real_T Minus;                        /* '<S21>/Minus' */
  real_T SetSpd;                       /* '<S21>/kph2m//s' */
  real_T Minus1;                       /* '<S21>/Minus1' */
  real_T UnitDelay1;                   /* '<S21>/Unit Delay1' */
  real_T Minus2;                       /* '<S21>/Minus2' */
  real_T UnitDelay_k;                  /* '<S21>/Unit Delay' */
  real_T Minus3;                       /* '<S21>/Minus3' */
  real_T UnitDelay2;                   /* '<S21>/Unit Delay2' */
  real_T Minus4;                       /* '<S21>/Minus4' */
  real_T set_spd_diff;                 /* '<S21>/Minus5' */
  real_T Saturation;                   /* '<S21>/Saturation' */
  real_T EgoPosition;                  /* '<S21>/Discrete-Time Integrator' */
  real_T RateTransition1;              /* '<S21>/Rate Transition1' */
  real_T Product4;                     /* '<S21>/Product4' */
  real_T Saturation1;                  /* '<S21>/Saturation1' */
  real_T Product_h;                    /* '<S21>/Product' */
  real_T Product3;                     /* '<S21>/Product3' */
  real_T Gain;                         /* '<S21>/Gain' */
  real_T Square;                       /* '<S21>/Square' */
  real_T Product1;                     /* '<S21>/Product1' */
  real_T Product5;                     /* '<S21>/Product5' */
  real_T Add1;                         /* '<S21>/Add1' */
  real_T Divide4;                      /* '<S21>/Divide4' */
  boolean_T VectorConcatenate[2];      /* '<S24>/Vector Concatenate' */
} B_ACCext_HSC_Model_T;

/* Block states (default storage) for system '<S12>/ACC ext' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S22>/UD' */
  real_T UD_DSTATE_d;                  /* '<S23>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S24>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE[2];          /* '<S24>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S21>/Unit Delay1' */
  real_T UnitDelay_DSTATE_d;           /* '<S21>/Unit Delay' */
  real_T UnitDelay2_DSTATE;            /* '<S21>/Unit Delay2' */
  real_T DiscreteTimeIntegrator_DSTATE_f;/* '<S21>/Discrete-Time Integrator' */
  real_T RateTransition1_Buffer;       /* '<S21>/Rate Transition1' */
} DW_ACCext_HSC_Model_T;

/* Parameters for system: '<S12>/ACC ext' */
struct P_ACCext_HSC_Model_T_ {
  real_T DiscreteDerivative_ICPrevScaledInput;
                         /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                          * Referenced by: '<S22>/UD'
                          */
  real_T DiscreteDerivative1_ICPrevScaledInput;
                        /* Mask Parameter: DiscreteDerivative1_ICPrevScaledInput
                         * Referenced by: '<S23>/UD'
                         */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant11'
                                        */
  real_T Constant7_Value;              /* Expression: 2220
                                        * Referenced by: '<S21>/Constant7'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S21>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1
                                        * Referenced by: '<S21>/Saturation1'
                                        */
  real_T MgCrr_Value;                  /* Expression: 118.55
                                        * Referenced by: '<S21>/M*g*Crr'
                                        */
  real_T Constant5_Value;              /* Expression: 9.81
                                        * Referenced by: '<S21>/Constant5'
                                        */
  real_T Constant_Value;               /* Expression: 2220
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T RoadGrade_Value;              /* Expression: 0
                                        * Referenced by: '<S21>/RoadGrade'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T Af_Value;                     /* Expression: 3.535790981
                                        * Referenced by: '<S21>/Af'
                                        */
  real_T Cd_Value;                     /* Expression: 0.379
                                        * Referenced by: '<S21>/Cd'
                                        */
  real_T Constant1_Value;              /* Expression: 1.2
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real_T Constant4_Value;              /* Expression: 0.5
                                        * Referenced by: '<S21>/Constant4'
                                        */
  real_T EnginePowerBlock_Value;       /* Expression: 0
                                        * Referenced by: '<S21>/EnginePowerBlock'
                                        */
  real_T MotorPowerBlock_Value;        /* Expression: 50000
                                        * Referenced by: '<S21>/MotorPowerBlock'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1.60934
                                        * Referenced by: '<S21>/Gain1'
                                        */
  real_T uDLookupTable_bp01Data[50];   /* Expression: [-298
                                          -107.877551
                                          82.24489796
                                          272.3673469
                                          462.4897959
                                          652.6122449
                                          842.7346939
                                          1032.857143
                                          1222.979592
                                          1413.102041
                                          1603.22449
                                          1793.346939
                                          1983.469388
                                          2173.591837
                                          2363.714286
                                          2553.836735
                                          2743.959184
                                          2934.081633
                                          3124.204082
                                          3314.326531
                                          3504.44898
                                          3694.571429
                                          3884.693878
                                          4074.816327
                                          4264.938776
                                          4455.061224
                                          4645.183673
                                          4835.306122
                                          5025.428571
                                          5215.55102
                                          5405.673469
                                          5595.795918
                                          5785.918367
                                          5976.040816
                                          6166.163265
                                          6356.285714
                                          6546.408163
                                          6736.530612
                                          6926.653061
                                          7116.77551
                                          7306.897959
                                          7497.020408
                                          7687.142857
                                          7877.265306
                                          8067.387755
                                          8257.510204
                                          8447.632653
                                          8637.755102
                                          8827.877551
                                          9018
                                          ]
                                        * Referenced by: '<S21>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[17];
              /* Expression: [0	2	4	6	10	20	30	40	50	60	70	80	90	100	120	140	180
                 ]
               * Referenced by: '<S21>/2-D Lookup Table'
               */
  real_T FoundationBrakesBlock_Value;  /* Expression: 0
                                        * Referenced by: '<S21>/FoundationBrakesBlock'
                                        */
  real_T Constant10_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant10'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant14'
                                        */
  real_T Constant2_Value;              /* Expression: 3
                                        * Referenced by: '<S21>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 100
                                        * Referenced by: '<S21>/Constant3'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S22>/TSamp'
                                        */
  real_T TSamp_WtEt_l;                 /* Computed Parameter: TSamp_WtEt_l
                                        * Referenced by: '<S23>/TSamp'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S21>/Gain2'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.1
                                        * Referenced by: '<S21>/Switch'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S24>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S24>/Discrete-Time Integrator'
                                        */
  real_T UnitDelay_InitialCondition[2];/* Expression: [0,0]
                                        * Referenced by: '<S24>/Unit Delay'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 0.277778
                                        * Referenced by: '<S21>/kph2m//s'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S21>/Unit Delay1'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S21>/Unit Delay'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S21>/Unit Delay2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T DiscreteTimeIntegrator_gainval_l;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_l
                          * Referenced by: '<S21>/Discrete-Time Integrator'
                          */
  real_T DiscreteTimeIntegrator_IC_m;  /* Expression: 0
                                        * Referenced by: '<S21>/Discrete-Time Integrator'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S21>/2-D Lookup Table'
                                    */
};

extern void HSC_Model_ACCext_Init(DW_ACCext_HSC_Model_T *localDW,
  P_ACCext_HSC_Model_T *localP);
extern void HSC_Model_ACCext_Reset(DW_ACCext_HSC_Model_T *localDW,
  P_ACCext_HSC_Model_T *localP);
extern void HSC_Model_ACCextTID0(RT_MODEL_HSC_Model_T * const HSC_Model_M,
  real_T rtu_EgoSpd, real_T rtu_TargetRelPos, real_T rtu_TargetRelSpd, real_T
  rtu_Info, real_T rtu_Info_g, real_T rtu_DistInfo, real_T rtu_DistInfo_j,
  real_T rtu_DistInfo_c, B_ACCext_HSC_Model_T *localB, DW_ACCext_HSC_Model_T
  *localDW, P_ACCext_HSC_Model_T *localP);
extern void HSC_Model_ACCextTID1(B_ACCext_HSC_Model_T *localB,
  DW_ACCext_HSC_Model_T *localDW, P_ACCext_HSC_Model_T *localP);

#endif                                 /* RTW_HEADER_HSC_Model_ACCext_h_ */

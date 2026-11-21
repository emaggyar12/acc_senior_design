/*
 * Code generation for system system '<S12>/ACC Lookup'
 * For more details, see corresponding source file PID_HSC_Model_ACCLookup.c
 *
 */

#ifndef RTW_HEADER_PID_HSC_Model_ACCLookup_h_
#define RTW_HEADER_PID_HSC_Model_ACCLookup_h_
#include <math.h>
#include <string.h>
#ifndef PID_HSC_Model_COMMON_INCLUDES_
#define PID_HSC_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* PID_HSC_Model_COMMON_INCLUDES_ */

#include "PID_HSC_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S12>/ACC Lookup' */
typedef struct {
  real_T SetSpd;                       /* '<S22>/kph2m//s' */
  real_T SetSpeedError;                /* '<S22>/Sum3' */
  real_T ProportionalGain;             /* '<S71>/Proportional Gain' */
  real_T DerivativeGain;               /* '<S58>/Derivative Gain' */
  real_T Tsamp;                        /* '<S61>/Tsamp' */
  real_T UD;                           /* '<S59>/UD' */
  real_T Diff;                         /* '<S59>/Diff' */
  real_T SumFdbk;                      /* '<S76>/Sum Fdbk' */
  real_T ZeroGain;                     /* '<S55>/ZeroGain' */
  real_T DeadZone;                     /* '<S57>/DeadZone' */
  real_T SignPreSat;                   /* '<S55>/SignPreSat' */
  real_T IntegralGain;                 /* '<S63>/Integral Gain' */
  real_T SignPreIntegrator;            /* '<S55>/SignPreIntegrator' */
  real_T Switch;                       /* '<S55>/Switch' */
  real_T Integrator;                   /* '<S66>/Integrator' */
  real_T Sum;                          /* '<S75>/Sum' */
  real_T Saturation;                   /* '<S73>/Saturation' */
  real_T Saturation4;                  /* '<S22>/Saturation4' */
  real_T DistInfo[6];                  /* '<S22>/DistInfo' */
  real_T Switch14;                     /* '<S22>/Switch14' */
  real_T Saturation1;                  /* '<S22>/Saturation1' */
  real_T DelayOneStep;                 /* '<S22>/Delay One Step' */
  real_T DistanceKeepTrack;            /* '<S22>/Discrete-Time Integrator3' */
  real_T Minus2;                       /* '<S22>/Minus2' */
  real_T Divide4;                      /* '<S22>/Divide4' */
  real_T StopLightAccel;               /* '<S22>/Switch4' */
  real_T TotalACCAccel;                /* '<S22>/Min' */
  real_T Switch1;                      /* '<S22>/Switch1' */
  real_T Saturation3;                  /* '<S22>/Saturation3' */
  real_T Product2;                     /* '<S22>/Product2' */
  real_T AccelCmd;                     /* '<S22>/Saturation2' */
  real_T m1;                           /* '<S83>/m1' */
  real_T UnitConversion;               /* '<S83>/Unit Conversion' */
  real_T TrigonometricFunction1_o1;    /* '<S83>/Trigonometric Function1' */
  real_T TrigonometricFunction1_o2;    /* '<S83>/Trigonometric Function1' */
  real_T m;                            /* '<S83>/m' */
  real_T Product5;                     /* '<S83>/Product5' */
  real_T um2;                          /* '<S83>/1//m2' */
  real_T TrigonometricFunction2;       /* '<S83>/Trigonometric Function2' */
  real_T Product7;                     /* '<S83>/Product7' */
  real_T Product6;                     /* '<S83>/Product6' */
  real_T c;                            /* '<S83>/c' */
  real_T b;                            /* '<S83>/b' */
  real_T Add1;                         /* '<S83>/Add1' */
  real_T TotalForce;                   /* '<S83>/Add2' */
  real_T ACCReqPwr;                    /* '<S22>/Switch3' */
  real_T DistErrFLipped;               /* '<S22>/Unary Minus' */
  real_T Gain;                         /* '<S22>/Gain' */
  real_T uDLookupTable1;               /* '<S22>/2-D Lookup Table1' */
  real_T Constant2;                    /* '<S22>/Constant2' */
  real_T Constant21;                   /* '<S22>/Constant21' */
  real_T Constant22;                   /* '<S22>/Constant22' */
  real_T Constant23;                   /* '<S22>/Constant23' */
  real_T Divide1;                      /* '<S22>/Divide1' */
  real_T DiscreteTimeIntegrator;       /* '<S28>/Discrete-Time Integrator' */
  real_T Product;                      /* '<S28>/Product' */
  real_T UnitDelay[2];                 /* '<S28>/Unit Delay' */
  real_T VectorConcatenate1[2];        /* '<S28>/Vector Concatenate1' */
  real_T Switch_l[2];                  /* '<S28>/Switch' */
  real_T Gain2;                        /* '<S22>/Gain2' */
  real_T Switch11;                     /* '<S22>/Switch11' */
  real_T Switch5;                      /* '<S22>/Switch5' */
  real_T TargetRelPos;                 /* '<S22>/TargetRelPos' */
  real_T Constant11;                   /* '<S92>/Constant11' */
  real_T x;                            /* '<S92>/Integrator3' */
  real_T VectorConcatenate2[3];        /* '<S83>/Vector Concatenate2' */
  real_T UnitConversion_e[3];          /* '<S92>/Unit Conversion' */
  real_T Constant14;                   /* '<S93>/Constant14' */
  real_T Constant5;                    /* '<S93>/Constant5' */
  real_T Constant7;                    /* '<S93>/Constant7' */
  real_T Add;                          /* '<S89>/Add' */
  real_T Constant1;                    /* '<S89>/Constant1' */
  real_T Constant10;                   /* '<S89>/Constant10' */
  real_T Y;                            /* '<S89>/Constant12' */
  real_T Constant2_i;                  /* '<S89>/Constant2' */
  real_T TmpSignalConversionAtsincosInport1[3];
  real_T sincos_o1[3];                 /* '<S96>/sincos' */
  real_T sincos_o2[3];                 /* '<S96>/sincos' */
  real_T VectorConcatenate[9];         /* '<S97>/Vector Concatenate' */
  real_T Reshape9to3x3columnmajor[9];
                                 /* '<S97>/Reshape (9) to [3x3] column-major' */
  real_T Transpose[9];                 /* '<S95>/Transpose' */
  real_T VectorConcatenate1_i[3];      /* '<S83>/Vector Concatenate1' */
  real_T TmpSignalConversionAtProductInport2[3];
  real_T Product_h[3];                 /* '<S95>/Product' */
  real_T Product_d;                    /* '<S98>/Product' */
  real_T UnitConversion_l;             /* '<S98>/Unit Conversion' */
  real_T Product1;                     /* '<S98>/Product1' */
  real_T VectorConcatenate4[3];        /* '<S83>/Vector Concatenate4' */
  real_T Product8;                     /* '<S98>/Product8' */
  real_T Product9;                     /* '<S98>/Product9' */
  real_T UnaryMinus;                   /* '<S98>/Unary Minus' */
  real_T UnaryMinus1;                  /* '<S98>/Unary Minus1' */
  real_T TmpSignalConversionAtsincosInport1_a[3];
  real_T sincos_o1_h[3];               /* '<S103>/sincos' */
  real_T sincos_o2_n[3];               /* '<S103>/sincos' */
  real_T VectorConcatenate_b[9];       /* '<S104>/Vector Concatenate' */
  real_T Reshape9to3x3columnmajor_c[9];
                                /* '<S104>/Reshape (9) to [3x3] column-major' */
  real_T Transpose_d[9];               /* '<S85>/Transpose' */
  real_T VectorConcatenate3[2];        /* '<S83>/Vector Concatenate3' */
  real_T TmpSignalConversionAtProductInport2_p[3];
  real_T Product_c[3];                 /* '<S85>/Product' */
  real_T VectorConcatenate_k[2];       /* '<S83>/Vector Concatenate' */
  real_T VectorConcatenate5[3];        /* '<S83>/Vector Concatenate5' */
  real_T VectorConcatenate6[3];        /* '<S83>/Vector Concatenate6' */
  real_T RateTransition;               /* '<S22>/Rate Transition' */
  real_T TSamp;                        /* '<S26>/TSamp' */
  real_T Uk1;                          /* '<S26>/UD' */
  real_T Diff_g;                       /* '<S26>/Diff' */
  real_T TSamp_l;                      /* '<S27>/TSamp' */
  real_T Uk1_c;                        /* '<S27>/UD' */
  real_T Diff_l;                       /* '<S27>/Diff' */
  real_T EgoPosition;                  /* '<S22>/Discrete-Time Integrator' */
  real_T xdotPosition;                 /* '<S22>/Discrete-Time Integrator1' */
  real_T RateTransition1;              /* '<S22>/Rate Transition1' */
  real_T RateTransition2;              /* '<S22>/Rate Transition2' */
  real_T Gain1;                        /* '<S22>/Gain1' */
  real_T Multiply;                     /* '<S22>/Multiply' */
  real_T Divide;                       /* '<S22>/Divide' */
  real_T uDLookupTable;                /* '<S22>/2-D Lookup Table' */
  real_T Divide2;                      /* '<S22>/Divide2' */
  real_T uDLookupTable4;               /* '<S22>/2-D Lookup Table4' */
  real_T Saturation_e;                 /* '<S22>/Saturation' */
  real_T ACCReqPwr_m;                  /* '<S22>/Product3' */
  real_T DistanceControllerAccel;      /* '<S22>/Multiport Switch' */
  real_T Gain6;                        /* '<S22>/Gain6' */
  real_T Far;                          /* '<S22>/Far' */
  real_T Gain5;                        /* '<S22>/Gain5' */
  real_T Near;                         /* '<S22>/Near' */
  real_T Gain4;                        /* '<S22>/Gain4' */
  real_T MediumV2;                     /* '<S22>/Medium V2' */
  real_T Gain3;                        /* '<S22>/Gain3' */
  real_T MediumV1;                     /* '<S22>/Medium V1' */
  real_T LastDistance;                 /* '<S22>/Chart2' */
  real_T Switch_e;                     /* '<S22>/Chart' */
  int8_T DataTypeConv1;                /* '<S55>/DataTypeConv1' */
  int8_T DataTypeConv2;                /* '<S55>/DataTypeConv2' */
  boolean_T NotEqual;                  /* '<S55>/NotEqual' */
  boolean_T Equal1;                    /* '<S55>/Equal1' */
  boolean_T AND3;                      /* '<S55>/AND3' */
  boolean_T CastToBoolean1;            /* '<S22>/Cast To Boolean1' */
  boolean_T Compare;                   /* '<S25>/Compare' */
  boolean_T OR1;                       /* '<S22>/OR1' */
  boolean_T VectorConcatenate_e[2];    /* '<S28>/Vector Concatenate' */
  boolean_T NOT2;                      /* '<S22>/NOT2' */
} B_ACCLookup_PID_HSC_Model_T;

/* Block states (default storage) for system '<S12>/ACC Lookup' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S59>/UD' */
  real_T Integrator_DSTATE;            /* '<S66>/Integrator' */
  real_T DelayOneStep_DSTATE;          /* '<S22>/Delay One Step' */
  real_T DiscreteTimeIntegrator3_DSTATE;/* '<S22>/Discrete-Time Integrator3' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S28>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE[2];          /* '<S28>/Unit Delay' */
  real_T UD_DSTATE_k;                  /* '<S26>/UD' */
  real_T UD_DSTATE_i;                  /* '<S27>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S22>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S22>/Discrete-Time Integrator1' */
  real_T RateTransition_Buffer;        /* '<S22>/Rate Transition' */
  real_T RateTransition1_Buffer;       /* '<S22>/Rate Transition1' */
  real_T RateTransition2_Buffer;       /* '<S22>/Rate Transition2' */
  real_T DistanceTravelled;            /* '<S22>/Chart' */
  real_T DistanceTraveling;            /* '<S22>/Chart' */
  int8_T DiscreteTimeIntegrator3_PrevResetState;/* '<S22>/Discrete-Time Integrator3' */
  uint8_T is_active_c23_PID_HSC_Model;     /* '<S22>/Chart2' */
  uint8_T is_c23_PID_HSC_Model;            /* '<S22>/Chart2' */
  uint8_T is_active_c7_PID_HSC_Model;      /* '<S22>/Chart' */
  uint8_T is_c7_PID_HSC_Model;             /* '<S22>/Chart' */
} DW_ACCLookup_PID_HSC_Model_T;

/* Continuous states for system '<S12>/ACC Lookup' */
typedef struct {
  real_T Integrator3_CSTATE;           /* '<S92>/Integrator3' */
  real_T Integrator1_CSTATE;           /* '<S83>/Integrator1' */
} X_ACCLookup_PID_HSC_Model_T;

/* State derivatives for system '<S12>/ACC Lookup' */
typedef struct {
  real_T Integrator3_CSTATE;           /* '<S92>/Integrator3' */
  real_T Integrator1_CSTATE;           /* '<S83>/Integrator1' */
} XDot_ACCLookup_PID_HSC_Model_T;

/* State Disabled for system '<S12>/ACC Lookup' */
typedef struct {
  boolean_T Integrator3_CSTATE;        /* '<S92>/Integrator3' */
  boolean_T Integrator1_CSTATE;        /* '<S83>/Integrator1' */
} XDis_ACCLookup_PID_HSC_Model_T;

/* Parameters for system: '<S12>/ACC Lookup' */
struct P_ACCLookup_PID_HSC_Model_T_ {
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S58>/Derivative Gain'
                                        */
  real_T PIDController1_DifferentiatorICPrevScaledInput;
               /* Mask Parameter: PIDController1_DifferentiatorICPrevScaledInput
                * Referenced by: '<S59>/UD'
                */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S63>/Integral Gain'
                                        */
  real_T DiscreteDerivative_ICPrevScaledInput;
                         /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                          * Referenced by: '<S26>/UD'
                          */
  real_T DiscreteDerivative1_ICPrevScaledInput;
                        /* Mask Parameter: DiscreteDerivative1_ICPrevScaledInput
                         * Referenced by: '<S27>/UD'
                         */
  real_T PIDController1_InitialConditionForIntegrator;
                 /* Mask Parameter: PIDController1_InitialConditionForIntegrator
                  * Referenced by: '<S66>/Integrator'
                  */
  real_T PIDController1_LowerSaturationLimit;
                          /* Mask Parameter: PIDController1_LowerSaturationLimit
                           * Referenced by:
                           *   '<S73>/Saturation'
                           *   '<S57>/DeadZone'
                           */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S71>/Proportional Gain'
                                        */
  real_T PIDController1_UpperSaturationLimit;
                          /* Mask Parameter: PIDController1_UpperSaturationLimit
                           * Referenced by:
                           *   '<S73>/Saturation'
                           *   '<S57>/DeadZone'
                           */
  real_T VehicleBodyTotalRoadLoad_a;
                                   /* Mask Parameter: VehicleBodyTotalRoadLoad_a
                                    * Referenced by: '<S83>/Constant3'
                                    */
  real_T VehicleBodyTotalRoadLoad_b;
                                   /* Mask Parameter: VehicleBodyTotalRoadLoad_b
                                    * Referenced by: '<S83>/b'
                                    */
  real_T VehicleBodyTotalRoadLoad_c;
                                   /* Mask Parameter: VehicleBodyTotalRoadLoad_c
                                    * Referenced by: '<S83>/c'
                                    */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S25>/Constant'
                                      */
  real_T VehicleBodyTotalRoadLoad_g;
                                   /* Mask Parameter: VehicleBodyTotalRoadLoad_g
                                    * Referenced by:
                                    *   '<S83>/Constant4'
                                    *   '<S98>/Constant'
                                    */
  real_T VehicleBodyTotalRoadLoad_m;
                                   /* Mask Parameter: VehicleBodyTotalRoadLoad_m
                                    * Referenced by:
                                    *   '<S83>/m'
                                    *   '<S83>/m1'
                                    *   '<S98>/Constant'
                                    *   '<S98>/Constant1'
                                    */
  real_T VehicleBodyTotalRoadLoad_x_o;
                                 /* Mask Parameter: VehicleBodyTotalRoadLoad_x_o
                                  * Referenced by: '<S83>/Integrator1'
                                  */
  real_T VehicleBodyTotalRoadLoad_xdot_o;
                              /* Mask Parameter: VehicleBodyTotalRoadLoad_xdot_o
                               * Referenced by: '<S92>/Integrator3'
                               */
  real_T Gain3_Gain;                   /* Expression: 2.23694
                                        * Referenced by: '<S22>/Gain3'
                                        */
  real_T MediumV1_bp01Data[22];        /* Expression: [0
                                          12.5
                                          34.12635414
                                          48.13676586
                                          56.7650508
                                          60.20004909
                                          61.01339923
                                          61.74133173
                                          62.40513994
                                          63.01857703
                                          63.59112569
                                          64.12964606
                                          64.63928775
                                          65.12403117
                                          65.58702723
                                          66.03081991
                                          66.45749768
                                          66.86879967
                                          70
                                          80
                                          90
                                          100
                                          ]
                                        * Referenced by: '<S22>/Medium V1'
                                        */
  real_T MediumV1_bp02Data[17];        /* Expression: [0:5:80]
                                        * Referenced by: '<S22>/Medium V1'
                                        */
  real_T Gain4_Gain;                   /* Expression: 2.23694
                                        * Referenced by: '<S22>/Gain4'
                                        */
  real_T MediumV2_bp01Data[22];        /* Expression: [0
                                          12.5
                                          34.12635414
                                          48.13676586
                                          56.7650508
                                          60.20004909
                                          61.01339923
                                          61.74133173
                                          62.40513994
                                          63.01857703
                                          63.59112569
                                          64.12964606
                                          64.63928775
                                          65.12403117
                                          65.58702723
                                          66.03081991
                                          66.45749768
                                          66.86879967
                                          70
                                          80
                                          90
                                          100
                                          ]
                                        * Referenced by: '<S22>/Medium V2'
                                        */
  real_T MediumV2_bp02Data[17];        /* Expression: [0:5:80]
                                        * Referenced by: '<S22>/Medium V2'
                                        */
  real_T Gain5_Gain;                   /* Expression: 2.23694
                                        * Referenced by: '<S22>/Gain5'
                                        */
  real_T Near_bp01Data[23];            /* Expression: [0
                                          8.75
                                          23.6895312
                                          32.20514879
                                          37.6475762
                                          40.30007363
                                          41.52009884
                                          42.6119976
                                          43.60770991
                                          44.52786555
                                          45.38668853
                                          46.1944691
                                          46.95893162
                                          47.68604676
                                          48.38054085
                                          49.04622986
                                          49.68624651
                                          50.3031995
                                          60
                                          70
                                          80
                                          90
                                          100]
                                        * Referenced by: '<S22>/Near'
                                        */
  real_T Near_bp02Data[17];            /* Expression: [0:5:80]
                                        * Referenced by: '<S22>/Near'
                                        */
  real_T Gain6_Gain;                   /* Expression: 2.23694
                                        * Referenced by: '<S22>/Gain6'
                                        */
  real_T Far_bp01Data[22];             /* Expression: [0
                                          16.25
                                          44.56317707
                                          64.06838293
                                          75.8825254
                                          80.10002454
                                          80.50669961
                                          80.87066587
                                          81.20256997
                                          81.50928852
                                          81.79556284
                                          82.06482303
                                          82.31964387
                                          82.56201559
                                          82.79351362
                                          83.01540995
                                          83.22874884
                                          83.43439983
                                          90
                                          100
                                          110
                                          120]
                                        * Referenced by: '<S22>/Far'
                                        */
  real_T Far_bp02Data[17];             /* Expression: [0:5:80]
                                        * Referenced by: '<S22>/Far'
                                        */
  real_T uDLookupTable4_bp01Data[21];  /* Expression: [0:5:100]
                                        * Referenced by: '<S22>/2-D Lookup Table4'
                                        */
  real_T uDLookupTable4_bp02Data[16];  /* Expression: [0:2:30]
                                        * Referenced by: '<S22>/2-D Lookup Table4'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -15
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1.60934
                                        * Referenced by: '<S22>/Gain1'
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
                                        * Referenced by: '<S22>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[17];
              /* Expression: [0	2	4	6	10	20	30	40	50	60	70	80	90	100	120	140	180
                 ]
               * Referenced by: '<S22>/2-D Lookup Table'
               */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S55>/Constant1'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<S22>/Constant1'
                                        */
  real_T kph2ms_Gain;                  /* Expression: 0.277778
                                        * Referenced by: '<S22>/kph2m//s'
                                        */
  real_T Tsamp_WtEt;                   /* Computed Parameter: Tsamp_WtEt
                                        * Referenced by: '<S61>/Tsamp'
                                        */
  real_T ZeroGain_Gain;                /* Expression: 0
                                        * Referenced by: '<S55>/ZeroGain'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S66>/Integrator'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S22>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -5
                                        * Referenced by: '<S22>/Saturation4'
                                        */
  real_T Constant26_Value;             /* Expression: 1.5
                                        * Referenced by: '<S22>/Constant26'
                                        */
  real_T Switch14_Threshold;           /* Expression: 0.1
                                        * Referenced by: '<S22>/Switch14'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S22>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -5
                                        * Referenced by: '<S22>/Saturation1'
                                        */
  real_T DelayOneStep_InitialCondition;/* Expression: 0.0
                                        * Referenced by: '<S22>/Delay One Step'
                                        */
  real_T DiscreteTimeIntegrator3_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator3_gainval
                           * Referenced by: '<S22>/Discrete-Time Integrator3'
                           */
  real_T DiscreteTimeIntegrator3_IC;   /* Expression: 0
                                        * Referenced by: '<S22>/Discrete-Time Integrator3'
                                        */
  real_T deceleration_Value;           /* Expression: 2
                                        * Referenced by: '<S22>/deceleration'
                                        */
  real_T Constant10_Value;             /* Expression: 10
                                        * Referenced by: '<S22>/Constant10'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S22>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S22>/Saturation3'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S22>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S22>/Saturation2'
                                        */
  real_T um2_Gain;                     /* Expression: 4
                                        * Referenced by: '<S83>/1//m2'
                                        */
  real_T Gain_Gain;                    /* Expression: 2.23694
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T uDLookupTable1_bp01Data[17];  /* Expression: [-75:10:-5,0,5:10:75]
                                        * Referenced by: '<S22>/2-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp02Data[17];  /* Expression: [0:5:80]
                                        * Referenced by: '<S22>/2-D Lookup Table1'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S22>/Constant11'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S22>/Constant2'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S22>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S22>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S22>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: -3
                                        * Referenced by: '<S22>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S22>/Constant25'
                                        */
  real_T Constant3_Value;              /* Expression: 100
                                        * Referenced by: '<S22>/Constant3'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S28>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S28>/Discrete-Time Integrator'
                                        */
  real_T UnitDelay_InitialCondition[2];/* Expression: [0,0]
                                        * Referenced by: '<S28>/Unit Delay'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S22>/Gain2'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.1
                                        * Referenced by: '<S22>/Switch5'
                                        */
  real_T Constant11_Value_m;           /* Expression: 0
                                        * Referenced by: '<S92>/Constant11'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S93>/Constant14'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S93>/Constant5'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S93>/Constant7'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S89>/Constant1'
                                        */
  real_T Constant10_Value_l;           /* Expression: 0
                                        * Referenced by: '<S89>/Constant10'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S89>/Constant12'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S89>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S95>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S85>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval_i;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_i
                          * Referenced by: '<S22>/Discrete-Time Integrator'
                          */
  real_T DiscreteTimeIntegrator_IC_b;  /* Expression: 0
                                        * Referenced by: '<S22>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S22>/Discrete-Time Integrator1'
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S22>/Discrete-Time Integrator1'
                                        */
  uint32_T MediumV1_maxIndex[2];       /* Computed Parameter: MediumV1_maxIndex
                                        * Referenced by: '<S22>/Medium V1'
                                        */
  uint32_T MediumV2_maxIndex[2];       /* Computed Parameter: MediumV2_maxIndex
                                        * Referenced by: '<S22>/Medium V2'
                                        */
  uint32_T Near_maxIndex[2];           /* Computed Parameter: Near_maxIndex
                                        * Referenced by: '<S22>/Near'
                                        */
  uint32_T Far_maxIndex[2];            /* Computed Parameter: Far_maxIndex
                                        * Referenced by: '<S22>/Far'
                                        */
  uint32_T uDLookupTable4_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable4_maxIndex
                                   * Referenced by: '<S22>/2-D Lookup Table4'
                                   */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S22>/2-D Lookup Table'
                                    */
  uint32_T uDLookupTable1_maxIndex[2];
                                  /* Computed Parameter: uDLookupTable1_maxIndex
                                   * Referenced by: '<S22>/2-D Lookup Table1'
                                   */
};

extern void PID_HSC_Model_ACCLookup_Init(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP,
  X_ACCLookup_PID_HSC_Model_T *localX);
extern void PID_HSC_Model_ACCLookup_Reset(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP,
  X_ACCLookup_PID_HSC_Model_T *localX);
extern void PID_HSC_Model_ACCLookup_Deriv(real_T rtu_EgoSpd, B_ACCLookup_PID_HSC_Model_T
  *localB, XDot_ACCLookup_PID_HSC_Model_T *localXdot);
extern void PID_HSC_Model_ACCLookup_UpdateTID0(RT_MODEL_PID_HSC_Model_T * const
  PID_HSC_Model_M, real_T rtu_StopLightInfo, boolean_T rtu_StopLightInfo_j,
  B_ACCLookup_PID_HSC_Model_T *localB, DW_ACCLookup_PID_HSC_Model_T *localDW,
  P_ACCLookup_PID_HSC_Model_T *localP);
extern void PID_HSC_Model_ACCLookup_UpdateTID2(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW, P_ACCLookup_PID_HSC_Model_T *localP);
extern void PID_HSC_Model_ACCLookupTID0(RT_MODEL_PID_HSC_Model_T * const PID_HSC_Model_M,
  real_T rtu_EgoSpd, real_T rtu_TargetRelPos, real_T rtu_TargetRelSpd, real_T
  rtu_Info, real_T rtu_Info_h, real_T rtu_Info_e, real_T rtu_Info_p, real_T
  rtu_DistInfo, real_T rtu_DistInfo_k, real_T rtu_DistInfo_j, real_T
  rtu_DistInfo_kj, real_T rtu_DistInfo_o, real_T rtu_DistInfo_c, boolean_T
  rtu_StopLightInfo_j, real_T rtu_StopLightInfo_b, boolean_T rtu_StopLightInfo_k,
  real_T rtu_StopLightInfo_i, real_T rtu_StopLightInfo_p, boolean_T
  rtu_StopLightInfo_n, const real_T *rtu_StopLightInfo_l,
  B_ACCLookup_PID_HSC_Model_T *localB, DW_ACCLookup_PID_HSC_Model_T *localDW,
  P_ACCLookup_PID_HSC_Model_T *localP, X_ACCLookup_PID_HSC_Model_T *localX);
extern void PID_HSC_Model_ACCLookupTID2(B_ACCLookup_PID_HSC_Model_T *localB,
  DW_ACCLookup_PID_HSC_Model_T *localDW);

#endif                                 /* RTW_HEADER_PID_HSC_Model_ACCLookup_h_ */

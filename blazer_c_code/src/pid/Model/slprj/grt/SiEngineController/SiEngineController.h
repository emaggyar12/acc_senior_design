/*
 * Code generation for system model 'SiEngineController'
 * For more details, see corresponding source file SiEngineController.c
 *
 */

#ifndef RTW_HEADER_SiEngineController_h_
#define RTW_HEADER_SiEngineController_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SiEngineController_COMMON_INCLUDES_
#define SiEngineController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SiEngineController_COMMON_INCLUDES_ */

#include "SiEngineController_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Block signals for model 'SiEngineController' */
typedef struct {
  real_T UnitDelay1;                   /* '<S50>/Unit Delay1' */
  real_T Saturation3;                  /* '<S50>/Saturation3' */
  real_T Subtract;                     /* '<S50>/Subtract' */
  real_T Saturation1;                  /* '<S51>/Saturation1' */
  real_T IdealGasConstantIVCTrappedGas;
                                /* '<S51>/Ideal Gas Constant IVC Trapped Gas' */
  real_T CylinderGasDensityatIVC;      /* '<S51>/Cylinder Gas Density at IVC' */
  real_T IVCVolumevsICPCalibration;  /* '<S51>/IVC Volume vs ICP Calibration' */
  real_T Saturation2;                  /* '<S51>/Saturation2' */
  real_T Product;                      /* '<S51>/Product' */
  real_T Saturation;                   /* '<S51>/Saturation' */
  real_T TrappedMassCorrection;        /* '<S51>/Trapped Mass Correction' */
  real_T Cylinderspersec;              /* '<S51>/Cylinders per sec' */
  real_T FinalTrappedGasMassFlowEquivalent;
                            /* '<S51>/Final Trapped Gas Mass Flow Equivalent' */
  real_T IdealMassFlow;                /* '<S51>/Ideal Mass Flow' */
  real_T Product1;                     /* '<S51>/Product1' */
  real_T NominalCylinderAirMassgcyl;
                                  /* '<S51>/Nominal Cylinder Air Mass g//cyl' */
  real_T NominalFlowAtCurrentSpeedandSTP;
                             /* '<S51>/Nominal Flow At Current Speed and STP' */
  real_T Saturation3_k;                /* '<S51>/Saturation3' */
  real_T CalcIdealLoad;                /* '<S51>/Calc Ideal Load' */
  real_T AirMassFlowCorrection;        /* '<S51>/Air Mass Flow Correction' */
  real_T CalcLoad;                     /* '<S51>/Calc Load' */
  real_T SpeedBlend;                   /* '<S52>/Speed Blend' */
  real_T NominalCylinderAirMassgcyl2;
                                 /* '<S52>/Nominal Cylinder Air Mass g//cyl2' */
  real_T Sum1;                         /* '<S52>/Sum1' */
  real_T NominalCylinderAirMassgcyl_f;
                                  /* '<S52>/Nominal Cylinder Air Mass g//cyl' */
  real_T NominalCylinderAirMassgcyl1;
                                 /* '<S52>/Nominal Cylinder Air Mass g//cyl1' */
  real_T NrmlzdAirChrg;                /* '<S52>/Sum' */
  real_T Saturation1_c;                /* '<S15>/Saturation1' */
  real_T Divide;                       /* '<S15>/Divide' */
  real_T Saturation1_j;                /* '<S48>/Saturation1' */
  real_T Divide_k;                     /* '<S48>/Divide' */
  real_T TemperatureCorrection;        /* '<S48>/Temperature Correction' */
  real_T Saturation_i;                 /* '<S48>/Saturation' */
  real_T Divide1;                      /* '<S48>/Divide1' */
  real_T CalcCorrectedAirMassFlow;   /* '<S51>/Calc Corrected  Air Mass Flow' */
  real_T gstokgs;                      /* '<S51>/g//s to kg//s' */
  real_T kgstogs;                      /* '<S48>/kg//s to g//s' */
  real_T Product_h;                    /* '<S48>/Product' */
  real_T IntakePressureRatio;          /* '<S48>/Intake Pressure Ratio' */
  real_T Divide2;                      /* '<S48>/Divide2' */
  real_T Add;                          /* '<S47>/Add' */
  real_T Divide1_o;                    /* '<S15>/Divide1' */
  real_T Divide2_d;                    /* '<S15>/Divide2' */
  real_T EGRPercentCommand;            /* '<S15>/EGR Percent Command' */
  real_T Gain;                         /* '<S15>/Gain' */
  real_T Saturation4;                  /* '<S51>/Saturation4' */
  real_T EgrMassFlwCmd;                /* '<S15>/Product' */
  real_T TemperatureCorrection_d;      /* '<S15>/Temperature Correction' */
  real_T Product1_m;                   /* '<S15>/Product1' */
  real_T OpenEGRValveMassFlowRate;   /* '<S15>/Open EGR Valve Mass Flow Rate' */
  real_T Saturation_j;                 /* '<S15>/Saturation' */
  real_T gstokgs_g;                    /* '<S15>/g//s to kg//s' */
  real_T Divide3;                      /* '<S15>/Divide3' */
  real_T MinMax;                       /* '<S11>/MinMax' */
  real_T Product1_k;                   /* '<S12>/Product1' */
  real_T uDLookupTable;                /* '<S12>/1-D Lookup Table' */
  real_T Product_g;                    /* '<S12>/Product' */
  real_T ThrottleAreaPercentFeedforward;
                                 /* '<S17>/Throttle Area Percent Feedforward' */
  real_T OptimalLambda;                /* '<S29>/ Optimal Lambda' */
  real_T Sum;                          /* '<S29>/Sum' */
  real_T FuelCut;                      /* '<S22>/Fuel Cut' */
  real_T InjPw;                        /* '<S10>/Product' */
  real_T InjectorSlopemgms;            /* '<S23>/Injector Slope mg//ms' */
  real_T FuelFlowCalc;                 /* '<S25>/Fuel Flow Calc' */
  real_T Switch;                       /* '<S26>/Switch' */
  real_T AFRcalc;                      /* '<S25>/AFR calc' */
  real_T Product1_e;                   /* '<S10>/Product1' */
  real_T Saturation_o;                 /* '<S47>/Saturation' */
  real_T Divide_j;                     /* '<S47>/Divide' */
  real_T Divide1_c;                    /* '<S47>/Divide1' */
  real_T Divide2_c;                    /* '<S47>/Divide2' */
  real_T EGRCorrectedMassFlowRate;    /* '<S47>/EGR Corrected Mass Flow Rate' */
  real_T TemperatureCorrection_n;      /* '<S47>/Temperature Correction' */
  real_T Product_hg;                   /* '<S47>/Product' */
  real_T gstokgs_e;                    /* '<S47>/g//s to kg//s' */
  real_T ExhaustTemperatureatNominalPhaserPositionsAFRSparkAdvance;
  /* '<S49>/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance' */
  real_T Saturation1_f;                /* '<S50>/Saturation1' */
  real_T Divide_jz;                    /* '<S50>/Divide' */
  real_T Saturation2_d;                /* '<S50>/Saturation2' */
  real_T Subtract1;                    /* '<S50>/Subtract1' */
  real_T Divide1_f;                    /* '<S50>/Divide1' */
  real_T WeightedSampleTime;           /* '<S50>/Weighted Sample Time' */
  real_T Add_k;                        /* '<S50>/Add' */
  real_T PumpingTorqueTable;           /* '<S53>/Pumping Torque Table' */
  real_T Sign;                         /* '<S53>/Sign' */
  real_T uDLookupTable3;               /* '<S56>/1-D Lookup Table3' */
  real_T Sum1_i;                       /* '<S56>/Sum1' */
  real_T Switch_n;                     /* '<S58>/Switch' */
  real_T Divide2_m;                    /* '<S56>/Divide2' */
  real_T Product4;                     /* '<S53>/Product4' */
  real_T FrictionTemperatureFactor;    /* '<S53>/Friction Temperature Factor' */
  real_T FrictionTorqueTable;          /* '<S53>/Friction Torque Table' */
  real_T Product1_j;                   /* '<S53>/Product1' */
  real_T InnerTorqueTable;             /* '<S53>/Inner Torque Table' */
  real_T OptimalSparkAdvanceDegBTDC;   /* '<S53>/Optimal Spark Table' */
  real_T SparkRetardFromOptimal;       /* '<S53>/Add1' */
  real_T SparkEfficiencyTable;         /* '<S53>/Spark Efficiency Table' */
  real_T Lambda;                       /* '<S53>/Divide' */
  real_T LambdaEfficiencyTable;        /* '<S53>/Lambda Efficiency Table' */
  real_T IndicatedTorque;              /* '<S53>/Product' */
  real_T Product3;                     /* '<S53>/Product3' */
  real_T Add_b;                        /* '<S53>/Add' */
  real_T Product2;                     /* '<S53>/Product2' */
  real_T Saturation_f;                 /* '<S53>/Saturation' */
  real_T Sum_f;                        /* '<S53>/Sum' */
  real_T UnitDelay;                    /* '<S3>/Unit Delay' */
  real_T UnitDelay1_c;                 /* '<S3>/Unit Delay1' */
  real_T Switch_d;                     /* '<S3>/Switch' */
  real_T Switch3;                      /* '<S3>/Switch3' */
  real_T Add_o;                        /* '<S3>/Add' */
  real_T TimeSinceStartTSS;            /* '<S3>/Add1' */
  real_T Fcn;                          /* '<S58>/Fcn' */
  real_T Switch1;                      /* '<S58>/Switch1' */
  real_T Product_i;                    /* '<S58>/Product' */
  real_T UnaryMinus;                   /* '<S58>/Unary Minus' */
  real_T Add_d;                        /* '<S42>/Add' */
  real_T WeightedSampleTimeMath;       /* '<S42>/Weighted Sample Time Math' */
  real_T IGain;                        /* '<S42>/I Gain' */
  real_T Product_m;                    /* '<S42>/Product' */
  real_T UnitDelay_g;                  /* '<S42>/Unit Delay' */
  real_T Saturation_a;                 /* '<S42>/Saturation' */
  real_T Add1;                         /* '<S42>/Add1' */
  real_T PGain;                        /* '<S42>/P Gain' */
  real_T Add2;                         /* '<S42>/Add2' */
  real_T Saturation1_j0;               /* '<S42>/Saturation1' */
  real_T Saturation_p;                 /* '<S22>/Saturation' */
  real_T u;                            /* '<S22>/ 1' */
  real_T StoichiometricAFR;            /* '<S29>/Stoichiometric AFR' */
  real_T kgstogs_e;                    /* '<S22>/kg//s to g//s' */
  real_T FuelFlowRate;                 /* '<S22>/Fuel Flow Rate' */
  real_T u_p;                          /* '<S22>/  ' */
  real_T Sum_l;                        /* '<S21>/Sum' */
  real_T Gain1;                        /* '<S21>/Gain1' */
  real_T WeightedSampleTime_l;         /* '<S21>/Weighted Sample Time' */
  real_T ClsdLpFuelMult;      /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T ClsdLpFuelIntgBias;  /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T UnitDelay_gu;                 /* '<S32>/Unit Delay' */
  real_T Switch_c;                     /* '<S32>/Switch' */
  real_T Sum5;                         /* '<S32>/Sum5' */
  real_T StartupDeltaLambda;           /* '<S32>/Startup Delta Lambda' */
  real_T StartupLambdaDecayTimeConstant;
                                /* '<S32>/Startup Lambda Decay Time Constant' */
  real_T DataTypeConversion;           /* '<S31>/Data Type Conversion' */
  real_T DataTypeConversion1;          /* '<S31>/Data Type Conversion1' */
  real_T WeightedSampleTimeMath_n;     /* '<S31>/Weighted Sample Time Math' */
  real_T Gain_g;                       /* '<S31>/Gain' */
  real_T Switch_f;                     /* '<S33>/Switch' */
  real_T Switch_l;                     /* '<S34>/Switch' */
  real_T Product_n;                    /* '<S31>/Product' */
  real_T Product1_c;                   /* '<S31>/Product1' */
  real_T MathFunction;                 /* '<S31>/Math Function' */
  real_T UnitDelay_b;                  /* '<S31>/Unit Delay' */
  real_T Product2_p;                   /* '<S31>/Product2' */
  real_T Product4_k;                   /* '<S31>/Product4' */
  real_T Sum1_h;                       /* '<S31>/Sum1' */
  real_T Fcn_c;                        /* '<S34>/Fcn' */
  real_T Switch1_o;                    /* '<S34>/Switch1' */
  real_T Product_mv;                   /* '<S34>/Product' */
  real_T UnaryMinus_n;                 /* '<S34>/Unary Minus' */
  real_T Fcn_g;                        /* '<S33>/Fcn' */
  real_T Switch1_j;                    /* '<S33>/Switch1' */
  real_T Product_h4;                   /* '<S33>/Product' */
  real_T UnaryMinus_a;                 /* '<S33>/Unary Minus' */
  real_T Fcn_e;                        /* '<S26>/Fcn' */
  real_T Switch1_m;                    /* '<S26>/Switch1' */
  real_T Product_e;                    /* '<S26>/Product' */
  real_T UnaryMinus_k;                 /* '<S26>/Unary Minus' */
  boolean_T Compare;                   /* '<S41>/Compare' */
  boolean_T Compare_g;                 /* '<S27>/Compare' */
  boolean_T Compare_l;                 /* '<S28>/Compare' */
  boolean_T LogicalOperator;           /* '<S26>/Logical Operator' */
  boolean_T RelationalOperator;        /* '<S12>/Relational Operator' */
  boolean_T Compare_d;                 /* '<S59>/Compare' */
  boolean_T Compare_o;                 /* '<S60>/Compare' */
  boolean_T LogicalOperator_o;         /* '<S58>/Logical Operator' */
  boolean_T Compare_a;                 /* '<S54>/Compare' */
  boolean_T Compare_m;                 /* '<S62>/Compare' */
  boolean_T Compare_p;                 /* '<S61>/Compare' */
  boolean_T LogicalOperator2;          /* '<S3>/Logical Operator2' */
  boolean_T Compare_lj;                /* '<S63>/Compare' */
  boolean_T LogicalOperator_oq;        /* '<S3>/Logical Operator' */
  boolean_T LogicalOperator1;          /* '<S3>/Logical Operator1' */
  boolean_T RelationalOperator_j;      /* '<S21>/Relational Operator' */
  boolean_T AND;                       /* '<S21>/AND' */
  boolean_T Compare_g2;                /* '<S39>/Compare' */
  boolean_T NOT;                       /* '<S31>/NOT' */
  boolean_T Compare_n;                 /* '<S35>/Compare' */
  boolean_T Compare_oq;                /* '<S36>/Compare' */
  boolean_T LogicalOperator_m;         /* '<S33>/Logical Operator' */
  boolean_T Compare_l0;                /* '<S37>/Compare' */
  boolean_T Compare_mi;                /* '<S38>/Compare' */
  boolean_T LogicalOperator_e;         /* '<S34>/Logical Operator' */
} B_SiEngineController_c_T;

/* Block states (default storage) for model 'SiEngineController' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S50>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S3>/Unit Delay1' */
  real_T UnitDelay_DSTATE_k;           /* '<S42>/Unit Delay' */
  real_T UnitDelay_DSTATE_f;           /* '<S32>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S31>/Unit Delay' */
  real_T RichCount;           /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T LeanCount;           /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T DitherCount;         /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2VoltLearnTimeSen;  /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2OfsVoltSen;        /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2StoichVoltSen;     /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2MinVoltSen;        /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2MaxVoltSen;        /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2ReadySen;          /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T O2VoltLastSen;       /* '<S21>/Calculate Front AFR Control Feedback' */
  real_T ClsdLpFuelIntgLast;  /* '<S21>/Calculate Front AFR Control Feedback' */
  boolean_T RichCount_not_empty;
                              /* '<S21>/Calculate Front AFR Control Feedback' */
  boolean_T IdleSpeedControl_MODE;     /* '<S11>/Idle Speed Control' */
} DW_SiEngineController_f_T;

/* Invariant block signals for model 'SiEngineController' */
typedef struct {
  const real_T Width;                  /* '<S56>/Width' */
} ConstB_SiEngineController_h_T;

/* Parameters (default storage) */
struct P_SiEngineController_T_ {
  real_T CatLightOffTime;              /* Variable: CatLightOffTime
                                        * Referenced by:
                                        *   '<S3>/Unit Delay1'
                                        *   '<S63>/Constant'
                                        */
  real_T Cps;                          /* Variable: Cps
                                        * Referenced by:
                                        *   '<S22>/rev per cycle'
                                        *   '<S51>/rev per cycle'
                                        *   '<S25>/rev per cycle'
                                        */
  real_T CrankSpeed;                   /* Variable: CrankSpeed
                                        * Referenced by:
                                        *   '<S21>/Constant18'
                                        *   '<S39>/Constant'
                                        *   '<S35>/Constant'
                                        *   '<S36>/Constant'
                                        */
  real_T EngStopTime;                  /* Variable: EngStopTime
                                        * Referenced by:
                                        *   '<S3>/Unit Delay'
                                        *   '<S61>/Constant'
                                        */
  real_T NCyl;                         /* Variable: NCyl
                                        * Referenced by:
                                        *   '<S22>/inj per cycle'
                                        *   '<S51>/cyls per cycle'
                                        *   '<S51>/cyls per cycle '
                                        *   '<S25>/inj per cycle'
                                        */
  real_T Pstd;                         /* Variable: Pstd
                                        * Referenced by:
                                        *   '<S15>/Standard Pressure'
                                        *   '<S47>/Standard Pressure'
                                        *   '<S48>/Standard Pressure'
                                        *   '<S51>/Standard Pressure Sea Level'
                                        *   '<S52>/Standard Pressure Sea Level'
                                        */
  real_T Rair;                         /* Variable: Rair
                                        * Referenced by:
                                        *   '<S51>/Ideal Gas Constant'
                                        *   '<S51>/Ideal Gas Constant IVC Trapped Gas'
                                        */
  real_T Sinj;                         /* Variable: Sinj
                                        * Referenced by:
                                        *   '<S22>/Injector Slope mg//ms'
                                        *   '<S23>/Injector Slope mg//ms'
                                        */
  real_T Ts;                           /* Variable: Ts
                                        * Referenced by:
                                        *   '<S3>/Constant'
                                        *   '<S3>/Constant3'
                                        */
  real_T Tstd;                         /* Variable: Tstd
                                        * Referenced by:
                                        *   '<S15>/Standard Temperature'
                                        *   '<S47>/Standard Temperature'
                                        *   '<S48>/Standard Temperature'
                                        *   '<S51>/Standard Air Temperature'
                                        *   '<S51>/Standard Air Temperature K'
                                        *   '<S52>/Standard Air Temperature'
                                        */
  real_T Vd;                           /* Variable: Vd
                                        * Referenced by: '<S51>/Engine Displacement'
                                        */
  real_T afr_stoich;                   /* Variable: afr_stoich
                                        * Referenced by:
                                        *   '<S53>/Constant'
                                        *   '<S29>/Stoichiometric AFR'
                                        */
  real_T f_cp_ld_bpt[16];              /* Variable: f_cp_ld_bpt
                                        * Referenced by:
                                        *   '<S14>/Optimal Exhaust Cam Phaser Retard'
                                        *   '<S14>/Optimal Intake Cam Phaser Advance'
                                        */
  real_T f_cp_n_bpt[15];               /* Variable: f_cp_n_bpt
                                        * Referenced by:
                                        *   '<S14>/Optimal Exhaust Cam Phaser Retard'
                                        *   '<S14>/Optimal Intake Cam Phaser Advance'
                                        */
  real_T f_del_sa_bpt[65];             /* Variable: f_del_sa_bpt
                                        * Referenced by: '<S53>/Spark Efficiency Table'
                                        */
  real_T f_ecp[240];                   /* Variable: f_ecp
                                        * Referenced by: '<S14>/Optimal Exhaust Cam Phaser Retard'
                                        */
  real_T f_egr_areapct_cmd[600];       /* Variable: f_egr_areapct_cmd
                                        * Referenced by: '<S15>/EGR Valve Area Percent'
                                        */
  real_T f_egr_areapct_nrmlzdflow_bpt[30];/* Variable: f_egr_areapct_nrmlzdflow_bpt
                                           * Referenced by: '<S15>/EGR Valve Area Percent'
                                           */
  real_T f_egr_areapct_pr_bpt[20];     /* Variable: f_egr_areapct_pr_bpt
                                        * Referenced by:
                                        *   '<S15>/EGR Valve Area Percent'
                                        *   '<S15>/Open EGR Valve Mass Flow Rate'
                                        */
  real_T f_egr_max_stdflow[20];        /* Variable: f_egr_max_stdflow
                                        * Referenced by: '<S15>/Open EGR Valve Mass Flow Rate'
                                        */
  real_T f_egr_stdflow[420];           /* Variable: f_egr_stdflow
                                        * Referenced by: '<S47>/EGR Corrected Mass Flow Rate'
                                        */
  real_T f_egr_stdflow_egrap_bpt[21];  /* Variable: f_egr_stdflow_egrap_bpt
                                        * Referenced by: '<S47>/EGR Corrected Mass Flow Rate'
                                        */
  real_T f_egr_stdflow_pr_bpt[20];     /* Variable: f_egr_stdflow_pr_bpt
                                        * Referenced by: '<S47>/EGR Corrected Mass Flow Rate'
                                        */
  real_T f_egrpct_cmd[240];            /* Variable: f_egrpct_cmd
                                        * Referenced by: '<S15>/EGR Percent Command'
                                        */
  real_T f_egrpct_ld_bpt[16];          /* Variable: f_egrpct_ld_bpt
                                        * Referenced by: '<S15>/EGR Percent Command'
                                        */
  real_T f_egrpct_n_bpt[15];           /* Variable: f_egrpct_n_bpt
                                        * Referenced by: '<S15>/EGR Percent Command'
                                        */
  real_T f_fric_temp_bpt[46];          /* Variable: f_fric_temp_bpt
                                        * Referenced by: '<S53>/Friction Temperature Factor'
                                        */
  real_T f_fric_temp_mod[46];          /* Variable: f_fric_temp_mod
                                        * Referenced by: '<S53>/Friction Temperature Factor'
                                        */
  real_T f_icp[240];                   /* Variable: f_icp
                                        * Referenced by: '<S14>/Optimal Intake Cam Phaser Advance'
                                        */
  real_T f_intksys_stdflow_bpt[20];    /* Variable: f_intksys_stdflow_bpt
                                        * Referenced by: '<S48>/Intake Pressure Ratio'
                                        */
  real_T f_intksys_stdflow_pr[20];     /* Variable: f_intksys_stdflow_pr
                                        * Referenced by: '<S48>/Intake Pressure Ratio'
                                        */
  real_T f_lamcmd[240];                /* Variable: f_lamcmd
                                        * Referenced by: '<S29>/ Optimal Lambda'
                                        */
  real_T f_lamcmd_ld_bpt[16];          /* Variable: f_lamcmd_ld_bpt
                                        * Referenced by: '<S29>/ Optimal Lambda'
                                        */
  real_T f_lamcmd_n_bpt[15];           /* Variable: f_lamcmd_n_bpt
                                        * Referenced by: '<S29>/ Optimal Lambda'
                                        */
  real_T f_lcmd[315];                  /* Variable: f_lcmd
                                        * Referenced by: '<S16>/Load Command From Torque Command At Current Engine Speed'
                                        */
  real_T f_lcmd_n_bpt[15];             /* Variable: f_lcmd_n_bpt
                                        * Referenced by: '<S16>/Load Command From Torque Command At Current Engine Speed'
                                        */
  real_T f_lcmd_tq_bpt[21];            /* Variable: f_lcmd_tq_bpt
                                        * Referenced by: '<S16>/Load Command From Torque Command At Current Engine Speed'
                                        */
  real_T f_m_lam[10];                  /* Variable: f_m_lam
                                        * Referenced by: '<S53>/Lambda Efficiency Table'
                                        */
  real_T f_m_lam_bpt[10];              /* Variable: f_m_lam_bpt
                                        * Referenced by: '<S53>/Lambda Efficiency Table'
                                        */
  real_T f_m_sa[65];                   /* Variable: f_m_sa
                                        * Referenced by: '<S53>/Spark Efficiency Table'
                                        */
  real_T f_mdot_air_corr[400];         /* Variable: f_mdot_air_corr
                                        * Referenced by: '<S51>/Air Mass Flow Correction'
                                        */
  real_T f_mdot_air_corr_ld_bpt[20];   /* Variable: f_mdot_air_corr_ld_bpt
                                        * Referenced by: '<S51>/Air Mass Flow Correction'
                                        */
  real_T f_mdot_air_n_bpt[20];         /* Variable: f_mdot_air_n_bpt
                                        * Referenced by: '<S51>/Air Mass Flow Correction'
                                        */
  real_T f_mdot_intk[400];             /* Variable: f_mdot_intk
                                        * Referenced by: '<S51>/Ideal Mass Flow'
                                        */
  real_T f_mdot_intk_ecp_bpt[20];      /* Variable: f_mdot_intk_ecp_bpt
                                        * Referenced by: '<S51>/Ideal Mass Flow'
                                        */
  real_T f_mdot_trpd_bpt[20];          /* Variable: f_mdot_trpd_bpt
                                        * Referenced by: '<S51>/Ideal Mass Flow'
                                        */
  real_T f_sa[240];                    /* Variable: f_sa
                                        * Referenced by: '<S13>/Optimal Spark Advance'
                                        */
  real_T f_sa_ld_bpt[16];              /* Variable: f_sa_ld_bpt
                                        * Referenced by: '<S13>/Optimal Spark Advance'
                                        */
  real_T f_sa_n_bpt[15];               /* Variable: f_sa_n_bpt
                                        * Referenced by: '<S13>/Optimal Spark Advance'
                                        */
  real_T f_sa_opt[225];                /* Variable: f_sa_opt
                                        * Referenced by: '<S53>/Optimal Spark Table'
                                        */
  real_T f_startup_ect_bpt[4];         /* Variable: f_startup_ect_bpt
                                        * Referenced by:
                                        *   '<S32>/Startup Delta Lambda'
                                        *   '<S32>/Startup Lambda Decay Time Constant'
                                        */
  real_T f_startup_lambda_delta[4];    /* Variable: f_startup_lambda_delta
                                        * Referenced by: '<S32>/Startup Delta Lambda'
                                        */
  real_T f_startup_lambda_delta_timecnst[4];
                                    /* Variable: f_startup_lambda_delta_timecnst
                                     * Referenced by: '<S32>/Startup Lambda Decay Time Constant'
                                     */
  real_T f_t_exh[225];                 /* Variable: f_t_exh
                                        * Referenced by: '<S49>/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance'
                                        */
  real_T f_t_exh_l_bpt[15];            /* Variable: f_t_exh_l_bpt
                                        * Referenced by: '<S49>/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance'
                                        */
  real_T f_t_exh_n_bpt[15];            /* Variable: f_t_exh_n_bpt
                                        * Referenced by: '<S49>/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance'
                                        */
  real_T f_tap[315];                   /* Variable: f_tap
                                        * Referenced by: '<S17>/Throttle Area Percent Feedforward'
                                        */
  real_T f_tap_ld_bpt[21];             /* Variable: f_tap_ld_bpt
                                        * Referenced by: '<S17>/Throttle Area Percent Feedforward'
                                        */
  real_T f_tap_n_bpt[15];              /* Variable: f_tap_n_bpt
                                        * Referenced by: '<S17>/Throttle Area Percent Feedforward'
                                        */
  real_T f_tm_corr[400];               /* Variable: f_tm_corr
                                        * Referenced by: '<S51>/Trapped Mass Correction'
                                        */
  real_T f_tm_corr_n_bpt[20];          /* Variable: f_tm_corr_n_bpt
                                        * Referenced by: '<S51>/Trapped Mass Correction'
                                        */
  real_T f_tm_corr_nd_bpt[20];         /* Variable: f_tm_corr_nd_bpt
                                        * Referenced by: '<S51>/Trapped Mass Correction'
                                        */
  real_T f_tpp[2];                     /* Variable: f_tpp
                                        * Referenced by: '<S17>/Throttle Position Percent'
                                        */
  real_T f_tpp_tap_bpt[2];             /* Variable: f_tpp_tap_bpt
                                        * Referenced by: '<S17>/Throttle Position Percent'
                                        */
  real_T f_tq_fric[225];               /* Variable: f_tq_fric
                                        * Referenced by: '<S53>/Friction Torque Table'
                                        */
  real_T f_tq_inr[225];                /* Variable: f_tq_inr
                                        * Referenced by: '<S53>/Inner Torque Table'
                                        */
  real_T f_tq_inr_l_bpt[15];           /* Variable: f_tq_inr_l_bpt
                                        * Referenced by:
                                        *   '<S53>/Friction Torque Table'
                                        *   '<S53>/Inner Torque Table'
                                        *   '<S53>/Optimal Spark Table'
                                        *   '<S53>/Pumping Torque Table'
                                        */
  real_T f_tq_inr_n_bpt[15];           /* Variable: f_tq_inr_n_bpt
                                        * Referenced by:
                                        *   '<S53>/Friction Torque Table'
                                        *   '<S53>/Inner Torque Table'
                                        *   '<S53>/Optimal Spark Table'
                                        *   '<S53>/Pumping Torque Table'
                                        */
  real_T f_tq_pump[225];               /* Variable: f_tq_pump
                                        * Referenced by: '<S53>/Pumping Torque Table'
                                        */
  real_T f_vivc[20];                   /* Variable: f_vivc
                                        * Referenced by: '<S51>/IVC Volume vs ICP Calibration'
                                        */
  real_T f_vivc_icp_bpt[20];           /* Variable: f_vivc_icp_bpt
                                        * Referenced by: '<S51>/IVC Volume vs ICP Calibration'
                                        */
  real_T f_wap[315];                   /* Variable: f_wap
                                        * Referenced by: '<S18>/Wastegate Area Percent Feedforward'
                                        */
  real_T f_wap_ld_bpt[21];             /* Variable: f_wap_ld_bpt
                                        * Referenced by: '<S18>/Wastegate Area Percent Feedforward'
                                        */
  real_T f_wap_n_bpt[15];              /* Variable: f_wap_n_bpt
                                        * Referenced by: '<S18>/Wastegate Area Percent Feedforward'
                                        */
  real_T tau_egr;                      /* Variable: tau_egr
                                        * Referenced by: '<S50>/Time constant'
                                        */
  boolean_T EngStopStartEnable;        /* Variable: EngStopStartEnable
                                        * Referenced by: '<S3>/Constant5'
                                        */
  real_T SIController_ClsdLpFuelEn; /* Mask Parameter: SIController_ClsdLpFuelEn
                                     * Referenced by: '<S21>/Constant'
                                     */
  real_T SIController_EngRevLim;       /* Mask Parameter: SIController_EngRevLim
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T SIController_Ki_idle;         /* Mask Parameter: SIController_Ki_idle
                                        * Referenced by: '<S42>/I Gain'
                                        */
  real_T SIController_Kp_idle;         /* Mask Parameter: SIController_Kp_idle
                                        * Referenced by: '<S42>/P Gain'
                                        */
  real_T SIController_N_idle;          /* Mask Parameter: SIController_N_idle
                                        * Referenced by:
                                        *   '<S21>/Constant17'
                                        *   '<S42>/Base Idle Speed'
                                        *   '<S31>/Constant2'
                                        */
  real_T SIController_OpenLpDitherEn;
                                  /* Mask Parameter: SIController_OpenLpDitherEn
                                   * Referenced by: '<S21>/Constant11'
                                   */
  real_T SIController_Trq_idlecmd_enable;
                              /* Mask Parameter: SIController_Trq_idlecmd_enable
                               * Referenced by: '<S41>/Constant'
                               */
  real_T SIController_Trq_idlecmd_max;
                                 /* Mask Parameter: SIController_Trq_idlecmd_max
                                  * Referenced by:
                                  *   '<S42>/Saturation'
                                  *   '<S42>/Saturation1'
                                  */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S62>/Constant'
                                      */
  real_T div0protectpoly1_thresh;     /* Mask Parameter: div0protectpoly1_thresh
                                       * Referenced by:
                                       *   '<S37>/Constant'
                                       *   '<S38>/Constant'
                                       */
  real_T div0protectpoly_thresh;       /* Mask Parameter: div0protectpoly_thresh
                                        * Referenced by:
                                        *   '<S27>/Constant'
                                        *   '<S28>/Constant'
                                        */
  real_T div0protectpoly1_thresh_o; /* Mask Parameter: div0protectpoly1_thresh_o
                                     * Referenced by:
                                     *   '<S59>/Constant'
                                     *   '<S60>/Constant'
                                     */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S26>/Switch1'
                                        */
  real_T Switch1_Threshold_c;          /* Expression: 0
                                        * Referenced by: '<S33>/Switch1'
                                        */
  real_T Switch1_Threshold_g;          /* Expression: 0
                                        * Referenced by: '<S34>/Switch1'
                                        */
  real_T WeightedSampleTimeMath_WtEt;
                              /* Computed Parameter: WeightedSampleTimeMath_WtEt
                               * Referenced by: '<S31>/Weighted Sample Time Math'
                               */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S31>/Unit Delay'
                                        */
  real_T Constant2_Value;              /* Expression: 273.15
                                        * Referenced by: '<S32>/Constant2'
                                        */
  real_T UnitDelay_InitialCondition_o; /* Expression: 0
                                        * Referenced by: '<S32>/Unit Delay'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S21>/Gain1'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant15'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant16'
                                        */
  real_T Constant4_Value;              /* Expression: ClsdLpFuelPGain
                                        * Referenced by: '<S21>/Constant4'
                                        */
  real_T Constant12_Value;             /* Expression: ClsdLpFuelIGain
                                        * Referenced by: '<S21>/Constant12'
                                        */
  real_T Constant19_Value;             /* Expression: ClsdLpFuelIntgLmt
                                        * Referenced by: '<S21>/Constant19'
                                        */
  real_T WeightedSampleTime_WtEt; /* Computed Parameter: WeightedSampleTime_WtEt
                                   * Referenced by: '<S21>/Weighted Sample Time'
                                   */
  real_T Constant5_Value;              /* Expression: LambdaDitherAmp
                                        * Referenced by: '<S21>/Constant5'
                                        */
  real_T Constant3_Value;              /* Expression: LambdaDitherFrq
                                        * Referenced by: '<S21>/Constant3'
                                        */
  real_T Constant6_Value;              /* Expression: O2ResetStoichVoltSen
                                        * Referenced by: '<S21>/Constant6'
                                        */
  real_T Constant1_Value;              /* Expression: O2ResetMinVoltSen
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real_T Constant7_Value;              /* Expression: O2ResetMaxVoltSen
                                        * Referenced by: '<S21>/Constant7'
                                        */
  real_T Constant13_Value;             /* Expression: O2LearnUpdatePerSen
                                        * Referenced by: '<S21>/Constant13'
                                        */
  real_T Constant8_Value;              /* Expression: O2AmpMinVoltSen
                                        * Referenced by: '<S21>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: O2ReadyVoltSen
                                        * Referenced by: '<S21>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: O2NotReadyVoltSen
                                        * Referenced by: '<S21>/Constant10'
                                        */
  real_T Constant2_Value_e;            /* Expression: 0
                                        * Referenced by: '<S21>/Constant2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: Nmin
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T secpermin_Value;              /* Expression: 60
                                        * Referenced by: '<S22>/sec per min'
                                        */
  real_T mgperg_Value;                 /* Expression: 1000
                                        * Referenced by: '<S22>/mg per g'
                                        */
  real_T kgstogs_Gain;                 /* Expression: 1000
                                        * Referenced by: '<S22>/kg//s to g//s'
                                        */
  real_T Constant_Value_hu;            /* Expression: 0
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T TrqCmd_Y0;                    /* Expression: 1
                                        * Referenced by: '<S42>/TrqCmd'
                                        */
  real_T WeightedSampleTimeMath_WtEt_m;
                            /* Computed Parameter: WeightedSampleTimeMath_WtEt_m
                             * Referenced by: '<S42>/Weighted Sample Time Math'
                             */
  real_T UnitDelay_InitialCondition_a; /* Expression: 0
                                        * Referenced by: '<S42>/Unit Delay'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0
                                        * Referenced by: '<S42>/Saturation'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S42>/Saturation1'
                                        */
  real_T Switch1_Threshold_j;          /* Expression: 0
                                        * Referenced by: '<S58>/Switch1'
                                        */
  real_T Constant4_Value_n;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S50>/Constant'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay1'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S50>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S50>/Saturation3'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1e6
                                        * Referenced by: '<S51>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a;       /* Expression: 1
                                        * Referenced by: '<S51>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1e6
                                        * Referenced by: '<S51>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 1
                                        * Referenced by: '<S51>/Saturation2'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: 20000
                                        * Referenced by: '<S51>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0
                                        * Referenced by: '<S51>/Saturation'
                                        */
  real_T secpermin_Value_a;            /* Expression: 60
                                        * Referenced by: '<S51>/sec per min'
                                        */
  real_T kgtog_Value;                  /* Expression: 1000
                                        * Referenced by: '<S51>/kg to g'
                                        */
  real_T Saturation3_UpperSat_n;       /* Expression: 1e6
                                        * Referenced by: '<S51>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_g;       /* Expression: 0.01
                                        * Referenced by: '<S51>/Saturation3'
                                        */
  real_T SpeedBlend_tableData[2];      /* Expression: [0 1]
                                        * Referenced by: '<S52>/Speed Blend'
                                        */
  real_T SpeedBlend_bp01Data[2];       /* Expression: [0 300]
                                        * Referenced by: '<S52>/Speed Blend'
                                        */
  real_T Constant_Value_oj;            /* Expression: 1
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T Saturation1_UpperSat_b;       /* Expression: inf
                                        * Referenced by: '<S15>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_i;       /* Expression: 1
                                        * Referenced by: '<S15>/Saturation1'
                                        */
  real_T Saturation1_UpperSat_h;       /* Expression: inf
                                        * Referenced by: '<S48>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_h;       /* Expression: 1
                                        * Referenced by: '<S48>/Saturation1'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: inf
                                        * Referenced by: '<S48>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 1
                                        * Referenced by: '<S48>/Saturation'
                                        */
  real_T gstokgs_Gain;                 /* Expression: 0.001
                                        * Referenced by: '<S51>/g//s to kg//s'
                                        */
  real_T kgstogs_Gain_d;               /* Expression: 1000
                                        * Referenced by: '<S48>/kg//s to g//s'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1/100
                                        * Referenced by: '<S15>/Gain'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S51>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0.0001
                                        * Referenced by: '<S51>/Saturation4'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: inf
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T Saturation_LowerSat_g0;       /* Expression: .00001
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T gstokgs_Gain_j;               /* Expression: 0.001
                                        * Referenced by: '<S15>/g//s to kg//s'
                                        */
  real_T uDLookupTable_tableData[2];   /* Expression: [1 0]
                                        * Referenced by: '<S12>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[2];    /* Expression: [1 1.01]
                                        * Referenced by: '<S12>/1-D Lookup Table'
                                        */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T FuelCut_Threshold;            /* Expression: 0
                                        * Referenced by: '<S22>/Fuel Cut'
                                        */
  real_T mintos_Value;                 /* Expression: 60
                                        * Referenced by: '<S25>/min to s'
                                        */
  real_T mgmstoKgs_Value;              /* Expression: 1e6
                                        * Referenced by: '<S25>/mg//ms to Kg//s'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 1
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: inf
                                        * Referenced by: '<S47>/Saturation'
                                        */
  real_T Saturation_LowerSat_bn;       /* Expression: 1
                                        * Referenced by: '<S47>/Saturation'
                                        */
  real_T gstokgs_Gain_d;               /* Expression: 0.001
                                        * Referenced by: '<S47>/g//s to kg//s'
                                        */
  real_T Saturation1_UpperSat_k;       /* Expression: 1e6
                                        * Referenced by: '<S50>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_hg;      /* Expression: 0.0001
                                        * Referenced by: '<S50>/Saturation1'
                                        */
  real_T Saturation2_UpperSat_i;       /* Expression: 1
                                        * Referenced by: '<S50>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_n;       /* Expression: 0
                                        * Referenced by: '<S50>/Saturation2'
                                        */
  real_T WeightedSampleTime_WtEt_p;
                                /* Computed Parameter: WeightedSampleTime_WtEt_p
                                 * Referenced by: '<S50>/Weighted Sample Time'
                                 */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T uDLookupTable3_tableData[3];  /* Expression: [0 1 1]
                                        * Referenced by: '<S56>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[3];   /* Expression: [-1e-6 0 1e-6]
                                        * Referenced by: '<S56>/1-D Lookup Table3'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 0
                                        * Referenced by: '<S53>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: -1
                                        * Referenced by: '<S53>/Saturation'
                                        */
  uint32_T TrappedMassCorrection_maxIndex[2];
                           /* Computed Parameter: TrappedMassCorrection_maxIndex
                            * Referenced by: '<S51>/Trapped Mass Correction'
                            */
  uint32_T IdealMassFlow_maxIndex[2];
                                   /* Computed Parameter: IdealMassFlow_maxIndex
                                    * Referenced by: '<S51>/Ideal Mass Flow'
                                    */
  uint32_T AirMassFlowCorrection_maxIndex[2];
                           /* Computed Parameter: AirMassFlowCorrection_maxIndex
                            * Referenced by: '<S51>/Air Mass Flow Correction'
                            */
  uint32_T OptimalExhaustCamPhaserRetard_maxIndex[2];
                   /* Computed Parameter: OptimalExhaustCamPhaserRetard_maxIndex
                    * Referenced by: '<S14>/Optimal Exhaust Cam Phaser Retard'
                    */
  uint32_T OptimalIntakeCamPhaserAdvance_maxIndex[2];
                   /* Computed Parameter: OptimalIntakeCamPhaserAdvance_maxIndex
                    * Referenced by: '<S14>/Optimal Intake Cam Phaser Advance'
                    */
  uint32_T EGRPercentCommand_maxIndex[2];
                               /* Computed Parameter: EGRPercentCommand_maxIndex
                                * Referenced by: '<S15>/EGR Percent Command'
                                */
  uint32_T EGRValveAreaPercent_maxIndex[2];
                             /* Computed Parameter: EGRValveAreaPercent_maxIndex
                              * Referenced by: '<S15>/EGR Valve Area Percent'
                              */
  uint32_T LoadCommandFromTorqueCommandAtCurrentEngineSpeed_maxIndex[2];
  /* Computed Parameter: LoadCommandFromTorqueCommandAtCurrentEngineSpeed_maxIndex
   * Referenced by: '<S16>/Load Command From Torque Command At Current Engine Speed'
   */
  uint32_T ThrottleAreaPercentFeedforward_maxIndex[2];
                  /* Computed Parameter: ThrottleAreaPercentFeedforward_maxIndex
                   * Referenced by: '<S17>/Throttle Area Percent Feedforward'
                   */
  uint32_T WastegateAreaPercentFeedforward_maxIndex[2];
                 /* Computed Parameter: WastegateAreaPercentFeedforward_maxIndex
                  * Referenced by: '<S18>/Wastegate Area Percent Feedforward'
                  */
  uint32_T OptimalLambda_maxIndex[2];
                                   /* Computed Parameter: OptimalLambda_maxIndex
                                    * Referenced by: '<S29>/ Optimal Lambda'
                                    */
  uint32_T OptimalSparkAdvance_maxIndex[2];
                             /* Computed Parameter: OptimalSparkAdvance_maxIndex
                              * Referenced by: '<S13>/Optimal Spark Advance'
                              */
  uint32_T EGRCorrectedMassFlowRate_maxIndex[2];
                        /* Computed Parameter: EGRCorrectedMassFlowRate_maxIndex
                         * Referenced by: '<S47>/EGR Corrected Mass Flow Rate'
                         */
  uint32_T ExhaustTemperatureatNominalPhaserPositionsAFRSparkAdvance_maxInd[2];
  /* Computed Parameter: ExhaustTemperatureatNominalPhaserPositionsAFRSparkAdvance_maxInd
   * Referenced by: '<S49>/Exhaust Temperature at Nominal Phaser Positions, AFR, Spark Advance'
   */
  uint32_T PumpingTorqueTable_maxIndex[2];
                              /* Computed Parameter: PumpingTorqueTable_maxIndex
                               * Referenced by: '<S53>/Pumping Torque Table'
                               */
  uint32_T FrictionTorqueTable_maxIndex[2];
                             /* Computed Parameter: FrictionTorqueTable_maxIndex
                              * Referenced by: '<S53>/Friction Torque Table'
                              */
  uint32_T InnerTorqueTable_maxIndex[2];
                                /* Computed Parameter: InnerTorqueTable_maxIndex
                                 * Referenced by: '<S53>/Inner Torque Table'
                                 */
  uint32_T OptimalSparkTable_maxIndex[2];
                               /* Computed Parameter: OptimalSparkTable_maxIndex
                                * Referenced by: '<S53>/Optimal Spark Table'
                                */
};

/* Real-time Model Data Structure */
struct tag_RTM_SiEngineController_T {
  const char_T **errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[409];
    int32_T* vardimsAddress[409];
    RTWLoggingFcnPtr loggingPtrs[409];
  } DataMapInfo;
};

typedef struct {
  B_SiEngineController_c_T rtb;
  DW_SiEngineController_f_T rtdw;
  RT_MODEL_SiEngineController_T rtm;
} MdlrefDW_SiEngineController_T;

/* Model reference registration function */
extern void SiEngineController_initialize(const char_T **rt_errorStatus,
  RT_MODEL_SiEngineController_T *const SiEngineController_M,
  B_SiEngineController_c_T *localB, DW_SiEngineController_f_T *localDW,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  SiEngineController_GetCAPIStaticMap(void);
extern void SiEngineController_Init(real_T *rty_FuelMainSoi, real_T
  *rty_TurboRackPosCmd, real_T *rty_VarCompRatioPosCmd, real_T
  *rty_IntkVlvLiftCmd, real_T *rty_VarIntkRunLenCmd, real_T
  *rty_VarIntkManPosCmd, real_T *rty_IntkSwirlVlvPosCmd,
  B_SiEngineController_c_T *localB, DW_SiEngineController_f_T *localDW);
extern void SiEngineController_Reset(DW_SiEngineController_f_T *localDW);
extern void SiEngineController_Disable(B_SiEngineController_c_T *localB,
  DW_SiEngineController_f_T *localDW);
extern void SiEngineController(const real_T *rtu_TrqCmd, const real_T
  *rtu_EngSpd, const real_T *rtu_Map, const real_T *rtu_Mat, const real_T
  *rtu_IntkCamPhase, const real_T *rtu_ExhCamPhase, const real_T
  *rtu_EgrVlvAreaPct, const real_T *rtu_AmbPrs, const real_T *rtu_Iat, const
  real_T *rtu_Ect, const real_T *rtu_EgrVlvDeltaPrs, const real_T
  *rtu_EgrVlvInTemp, real_T *rty_ThrPosPctCmd, real_T *rty_WgAreaPctCmd, real_T *
  rty_InjPw, real_T *rty_FuelMainSoi, real_T *rty_SpkAdv, real_T
  *rty_IntkCamPhaseCmd, real_T *rty_ExhCamPhaseCmd, real_T *rty_TurboRackPosCmd,
  real_T *rty_EgrVlvAreaPctCmd, real_T *rty_VarCompRatioPosCmd, real_T
  *rty_IntkVlvLiftCmd, real_T *rty_VarIntkRunLenCmd, real_T
  *rty_VarIntkManPosCmd, real_T *rty_IntkSwirlVlvPosCmd, real_T *rty_TrqCmdISC,
  real_T *rty_LoadCmd, real_T *rty_EstIntkPortFlw, B_SiEngineController_c_T
  *localB, DW_SiEngineController_f_T *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SiEngineController'
 * '<S1>'   : 'SiEngineController/RTI Data'
 * '<S2>'   : 'SiEngineController/SI Controller'
 * '<S3>'   : 'SiEngineController/Start Stop Logic'
 * '<S4>'   : 'SiEngineController/RTI Data/RTI Data Store'
 * '<S5>'   : 'SiEngineController/RTI Data/RTI Data Store/RTI Data Store'
 * '<S6>'   : 'SiEngineController/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S7>'   : 'SiEngineController/SI Controller/Controllers'
 * '<S8>'   : 'SiEngineController/SI Controller/Estimators'
 * '<S9>'   : 'SiEngineController/SI Controller/Controllers/Air'
 * '<S10>'  : 'SiEngineController/SI Controller/Controllers/Fuel'
 * '<S11>'  : 'SiEngineController/SI Controller/Controllers/Idle Speed Control'
 * '<S12>'  : 'SiEngineController/SI Controller/Controllers/Rev Limiter Control'
 * '<S13>'  : 'SiEngineController/SI Controller/Controllers/Spark'
 * '<S14>'  : 'SiEngineController/SI Controller/Controllers/Air/Cam Phaser Control'
 * '<S15>'  : 'SiEngineController/SI Controller/Controllers/Air/EGR Control'
 * '<S16>'  : 'SiEngineController/SI Controller/Controllers/Air/Load Command'
 * '<S17>'  : 'SiEngineController/SI Controller/Controllers/Air/Throttle Position Control'
 * '<S18>'  : 'SiEngineController/SI Controller/Controllers/Air/Wastegate Control'
 * '<S19>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR'
 * '<S20>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command'
 * '<S21>'  : 'SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback'
 * '<S22>'  : 'SiEngineController/SI Controller/Controllers/Fuel/Open-Loop AFR Control'
 * '<S23>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation'
 * '<S24>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation'
 * '<S25>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol'
 * '<S26>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly'
 * '<S27>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Compare To Constant'
 * '<S28>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR/Engine AFR and Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation/Fuel Mass Engine AFR and  Fuel Calculation Without Vol/div0protect - poly/Compare To Constant1'
 * '<S29>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command'
 * '<S30>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset'
 * '<S31>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay'
 * '<S32>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization'
 * '<S33>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly'
 * '<S34>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1'
 * '<S35>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Compare To Constant'
 * '<S36>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly/Compare To Constant1'
 * '<S37>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Compare To Constant'
 * '<S38>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/div0protect - poly1/Compare To Constant1'
 * '<S39>'  : 'SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Compare To Constant'
 * '<S40>'  : 'SiEngineController/SI Controller/Controllers/Fuel/Front AFR Control Feedback/Calculate Front AFR Control Feedback'
 * '<S41>'  : 'SiEngineController/SI Controller/Controllers/Idle Speed Control/Compare To Constant'
 * '<S42>'  : 'SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control'
 * '<S43>'  : 'SiEngineController/SI Controller/Estimators/EGR Flow Estimator'
 * '<S44>'  : 'SiEngineController/SI Controller/Estimators/Exhaust'
 * '<S45>'  : 'SiEngineController/SI Controller/Estimators/Intake Air Flow'
 * '<S46>'  : 'SiEngineController/SI Controller/Estimators/Torque'
 * '<S47>'  : 'SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Mass Flow Rate'
 * '<S48>'  : 'SiEngineController/SI Controller/Estimators/EGR Flow Estimator/EGR Outlet Pressure'
 * '<S49>'  : 'SiEngineController/SI Controller/Estimators/Exhaust/Spark Ignition Exhaust'
 * '<S50>'  : 'SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction'
 * '<S51>'  : 'SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing'
 * '<S52>'  : 'SiEngineController/SI Controller/Estimators/Intake Air Flow/SI Engine Breathing with Cam Phasing/Shut down load'
 * '<S53>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure'
 * '<S54>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Compare To Zero'
 * '<S55>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Crank angle based cylinder pressure and torque'
 * '<S56>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem'
 * '<S57>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Crank angle based cylinder pressure and torque/Cylinder Pressure Inactive'
 * '<S58>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1'
 * '<S59>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Compare To Constant'
 * '<S60>'  : 'SiEngineController/SI Controller/Estimators/Torque/Spark Ignition Torque Structure/Subsystem/div0protect - poly1/Compare To Constant1'
 * '<S61>'  : 'SiEngineController/Start Stop Logic/Compare To Constant'
 * '<S62>'  : 'SiEngineController/Start Stop Logic/Compare To Constant1'
 * '<S63>'  : 'SiEngineController/Start Stop Logic/Compare To Constant2'
 */
#endif                                 /* RTW_HEADER_SiEngineController_h_ */

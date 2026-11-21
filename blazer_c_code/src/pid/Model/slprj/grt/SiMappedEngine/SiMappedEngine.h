/*
 * Code generation for system model 'SiMappedEngine'
 * For more details, see corresponding source file SiMappedEngine.c
 *
 */

#ifndef RTW_HEADER_SiMappedEngine_h_
#define RTW_HEADER_SiMappedEngine_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SiMappedEngine_COMMON_INCLUDES_
#define SiMappedEngine_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SiMappedEngine_COMMON_INCLUDES_ */

#include "SiMappedEngine_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Block signals for model 'SiMappedEngine' */
typedef struct {
  real_T ElectronicThrottleActuatorDynamics;
                            /* '<Root>/Electronic Throttle Actuator Dynamics' */
  real_T UnaryMinus;                   /* '<S13>/Unary Minus' */
  real_T Switch;                       /* '<S13>/Switch' */
  real_T UnaryMinus_b;                 /* '<S12>/Unary Minus' */
  real_T Switch_g;                     /* '<S12>/Switch' */
  real_T Divide;                       /* '<S5>/Divide' */
  real_T Integrator;                   /* '<S6>/Integrator' */
  real_T RPMtodegs;                    /* '<S6>/RPM to deg//s' */
  real_T Gain;                         /* '<S7>/Gain' */
  real_T Cylinderspersec;              /* '<S8>/Cylinders per sec' */
  real_T NominalCylinderAirMassgcyl;
                                   /* '<S8>/Nominal Cylinder Air Mass g//cyl' */
  real_T NominalAirflowAtCurrentSpeedandSTP;
                           /* '<S8>/Nominal Airflow At Current Speed and STP' */
  real_T Saturation3;                  /* '<S8>/Saturation3' */
  real_T EngTrq;                       /* '<S19>/EngTrq Table' */
  real_T EoCO;                         /* '<S19>/EoCO Table' */
  real_T EoHC;                         /* '<S19>/EoHC Table' */
  real_T EoNOx;                        /* '<S19>/EoNOx Table' */
  real_T EoPm;                         /* '<S19>/EoPm Table' */
  real_T LHV;                          /* '<S10>/LHV' */
  real_T Constant;                     /* '<S21>/Constant' */
  real_T rpmtorads;                    /* '<S10>/rpm to rad//s' */
  real_T Product;                      /* '<S10>/Product' */
  real_T Subtract;                     /* '<S10>/Subtract' */
  real_T NetTorque;                    /* '<Root>/Net Torque' */
  real_T uDLookupTable;                /* '<S4>/1-D Lookup Table' */
  real_T uDLookupTable1;               /* '<S4>/1-D Lookup Table1' */
  real_T O2Storage;                    /* '<S4>/O2 Storage' */
  real_T Add;                          /* '<S4>/Add' */
  real_T TWCNOxConversionEfficiency; /* '<S28>/TWC NOx Conversion Efficiency' */
  real_T Add_o;                        /* '<S28>/Add' */
  real_T TWCCOConversionEfficiency;   /* '<S28>/TWC CO Conversion Efficiency' */
  real_T Add1;                         /* '<S28>/Add1' */
  real_T TWCHCConversionEfficiency;   /* '<S28>/TWC HC Conversion Efficiency' */
  real_T Add2;                         /* '<S28>/Add2' */
  real_T Fcn;                          /* '<S13>/Fcn' */
  real_T Switch1;                      /* '<S13>/Switch1' */
  real_T Product_j;                    /* '<S13>/Product' */
  real_T Fcn_e;                        /* '<S12>/Fcn' */
  real_T Switch1_g;                    /* '<S12>/Switch1' */
  real_T Product_a;                    /* '<S12>/Product' */
  boolean_T Compare;                   /* '<S16>/Compare' */
  boolean_T Compare_d;                 /* '<S17>/Compare' */
  boolean_T LogicalOperator;           /* '<S13>/Logical Operator' */
  boolean_T Compare_p;                 /* '<S14>/Compare' */
  boolean_T Compare_pg;                /* '<S15>/Compare' */
  boolean_T LogicalOperator_c;         /* '<S12>/Logical Operator' */
} B_SiMappedEngine_c_T;

/* Block states (default storage) for model 'SiMappedEngine' */
typedef struct {
  int8_T CatalystLightOff_ActiveSubsystem;/* '<S4>/Catalyst Light-Off' */
} DW_SiMappedEngine_f_T;

/* Continuous states for model 'SiMappedEngine' */
typedef struct {
  real_T ElectronicThrottleActuatorDynamics_CSTATE;
                            /* '<Root>/Electronic Throttle Actuator Dynamics' */
  real_T LumpedTorqueDynamics_CSTATE;  /* '<Root>/Lumped Torque Dynamics' */
  real_T Integrator_CSTATE;            /* '<S6>/Integrator' */
  real_T O2Storage_CSTATE;             /* '<S4>/O2 Storage' */
  real_T ElectronicThrottleActuatorDynamics_CSTATE_b;
                              /* '<S1>/Electronic Throttle Actuator Dynamics' */
  real_T WastegateActuatorDynamics_CSTATE;/* '<S1>/Wastegate Actuator Dynamics' */
  real_T IntakeCamPhaserActuatorDynamics_CSTATE;
                               /* '<S1>/Intake Cam Phaser  Actuator Dynamics' */
  real_T ExhaustCamPhaserActuatorDynamics_CSTATE;
                              /* '<S1>/Exhaust Cam Phaser  Actuator Dynamics' */
  real_T VGTActuatorDynamics_CSTATE;   /* '<S1>/VGT Actuator Dynamics' */
  real_T EGRValveDynamics_CSTATE;      /* '<S1>/EGR Valve Dynamics' */
  real_T VariableCompressionRatioActuatorDynamics_CSTATE;
                       /* '<S1>/Variable Compression Ratio Actuator Dynamics' */
  real_T VariableIntakeValveLiftActuatorDynamics_CSTATE;
                       /* '<S1>/Variable Intake Valve Lift Actuator Dynamics' */
  real_T VariableIntakeRunnerLengthActuatorDynamics_CSTATE;
                    /* '<S1>/Variable Intake Runner Length Actuator Dynamics' */
  real_T IntakeManifoldFlapActuatorDynamics_CSTATE;
                             /* '<S1>/Intake Manifold Flap Actuator Dynamics' */
  real_T SwirlValveActuatorDynamics_CSTATE;
                                      /* '<S1>/Swirl Valve Actuator Dynamics' */
} X_SiMappedEngine_n_T;

/* Periodic continuous state vector (global) */
typedef int_T PeriodicIndX_SiMappedEngine_T[1];
typedef real_T PeriodicRngX_SiMappedEngine_T[2];

/* State derivatives for model 'SiMappedEngine' */
typedef struct {
  real_T ElectronicThrottleActuatorDynamics_CSTATE;
                            /* '<Root>/Electronic Throttle Actuator Dynamics' */
  real_T LumpedTorqueDynamics_CSTATE;  /* '<Root>/Lumped Torque Dynamics' */
  real_T Integrator_CSTATE;            /* '<S6>/Integrator' */
  real_T O2Storage_CSTATE;             /* '<S4>/O2 Storage' */
  real_T ElectronicThrottleActuatorDynamics_CSTATE_b;
                              /* '<S1>/Electronic Throttle Actuator Dynamics' */
  real_T WastegateActuatorDynamics_CSTATE;/* '<S1>/Wastegate Actuator Dynamics' */
  real_T IntakeCamPhaserActuatorDynamics_CSTATE;
                               /* '<S1>/Intake Cam Phaser  Actuator Dynamics' */
  real_T ExhaustCamPhaserActuatorDynamics_CSTATE;
                              /* '<S1>/Exhaust Cam Phaser  Actuator Dynamics' */
  real_T VGTActuatorDynamics_CSTATE;   /* '<S1>/VGT Actuator Dynamics' */
  real_T EGRValveDynamics_CSTATE;      /* '<S1>/EGR Valve Dynamics' */
  real_T VariableCompressionRatioActuatorDynamics_CSTATE;
                       /* '<S1>/Variable Compression Ratio Actuator Dynamics' */
  real_T VariableIntakeValveLiftActuatorDynamics_CSTATE;
                       /* '<S1>/Variable Intake Valve Lift Actuator Dynamics' */
  real_T VariableIntakeRunnerLengthActuatorDynamics_CSTATE;
                    /* '<S1>/Variable Intake Runner Length Actuator Dynamics' */
  real_T IntakeManifoldFlapActuatorDynamics_CSTATE;
                             /* '<S1>/Intake Manifold Flap Actuator Dynamics' */
  real_T SwirlValveActuatorDynamics_CSTATE;
                                      /* '<S1>/Swirl Valve Actuator Dynamics' */
} XDot_SiMappedEngine_n_T;

/* State Disabled for model 'SiMappedEngine' */
typedef struct {
  boolean_T ElectronicThrottleActuatorDynamics_CSTATE;
                            /* '<Root>/Electronic Throttle Actuator Dynamics' */
  boolean_T LumpedTorqueDynamics_CSTATE;/* '<Root>/Lumped Torque Dynamics' */
  boolean_T Integrator_CSTATE;         /* '<S6>/Integrator' */
  boolean_T O2Storage_CSTATE;          /* '<S4>/O2 Storage' */
  boolean_T ElectronicThrottleActuatorDynamics_CSTATE_b;
                              /* '<S1>/Electronic Throttle Actuator Dynamics' */
  boolean_T WastegateActuatorDynamics_CSTATE;/* '<S1>/Wastegate Actuator Dynamics' */
  boolean_T IntakeCamPhaserActuatorDynamics_CSTATE;
                               /* '<S1>/Intake Cam Phaser  Actuator Dynamics' */
  boolean_T ExhaustCamPhaserActuatorDynamics_CSTATE;
                              /* '<S1>/Exhaust Cam Phaser  Actuator Dynamics' */
  boolean_T VGTActuatorDynamics_CSTATE;/* '<S1>/VGT Actuator Dynamics' */
  boolean_T EGRValveDynamics_CSTATE;   /* '<S1>/EGR Valve Dynamics' */
  boolean_T VariableCompressionRatioActuatorDynamics_CSTATE;
                       /* '<S1>/Variable Compression Ratio Actuator Dynamics' */
  boolean_T VariableIntakeValveLiftActuatorDynamics_CSTATE;
                       /* '<S1>/Variable Intake Valve Lift Actuator Dynamics' */
  boolean_T VariableIntakeRunnerLengthActuatorDynamics_CSTATE;
                    /* '<S1>/Variable Intake Runner Length Actuator Dynamics' */
  boolean_T IntakeManifoldFlapActuatorDynamics_CSTATE;
                             /* '<S1>/Intake Manifold Flap Actuator Dynamics' */
  boolean_T SwirlValveActuatorDynamics_CSTATE;
                                      /* '<S1>/Swirl Valve Actuator Dynamics' */
} XDis_SiMappedEngine_n_T;

/* Parameters (default storage) */
struct P_SiMappedEngine_T_ {
  real_T f_air[1600];                  /* Variable: f_air
                                        * Referenced by: '<S19>/IntkGasMassFlw Table'
                                        */
  real_T f_co[1600];                   /* Variable: f_co
                                        * Referenced by: '<S19>/EoCO Table'
                                        */
  real_T f_co2[1600];                  /* Variable: f_co2
                                        * Referenced by: '<S19>/EoCO2 Table'
                                        */
  real_T f_eff[1600];                  /* Variable: f_eff
                                        * Referenced by: '<S19>/Bsfc Table'
                                        */
  real_T f_fuel[1600];                 /* Variable: f_fuel
                                        * Referenced by: '<S19>/FuelMassFlw Table'
                                        */
  real_T f_hc[1600];                   /* Variable: f_hc
                                        * Referenced by: '<S19>/EoHC Table'
                                        */
  real_T f_nox[1600];                  /* Variable: f_nox
                                        * Referenced by: '<S19>/EoNOx Table'
                                        */
  real_T f_pm[1600];                   /* Variable: f_pm
                                        * Referenced by: '<S19>/EoPm Table'
                                        */
  real_T f_tbrake[1600];               /* Variable: f_tbrake
                                        * Referenced by: '<S19>/EngTrq Table'
                                        */
  real_T f_tbrake_n_bpt[40];           /* Variable: f_tbrake_n_bpt
                                        * Referenced by:
                                        *   '<S19>/Bsfc Table'
                                        *   '<S19>/EngTrq Table'
                                        *   '<S19>/EoCO Table'
                                        *   '<S19>/EoCO2 Table'
                                        *   '<S19>/EoHC Table'
                                        *   '<S19>/EoNOx Table'
                                        *   '<S19>/EoPm Table'
                                        *   '<S19>/ExhManGasTemp Table'
                                        *   '<S19>/FuelMassFlw Table'
                                        *   '<S19>/IntkGasMassFlw Table'
                                        */
  real_T f_tbrake_t_bpt[40];           /* Variable: f_tbrake_t_bpt
                                        * Referenced by:
                                        *   '<S19>/Bsfc Table'
                                        *   '<S19>/EngTrq Table'
                                        *   '<S19>/EoCO Table'
                                        *   '<S19>/EoCO2 Table'
                                        *   '<S19>/EoHC Table'
                                        *   '<S19>/EoNOx Table'
                                        *   '<S19>/EoPm Table'
                                        *   '<S19>/ExhManGasTemp Table'
                                        *   '<S19>/FuelMassFlw Table'
                                        *   '<S19>/IntkGasMassFlw Table'
                                        */
  real_T f_texh[1600];                 /* Variable: f_texh
                                        * Referenced by: '<S19>/ExhManGasTemp Table'
                                        */
  real_T f_twc_eff_co[7];              /* Variable: f_twc_eff_co
                                        * Referenced by: '<S28>/TWC CO Conversion Efficiency'
                                        */
  real_T f_twc_eff_hc[7];              /* Variable: f_twc_eff_hc
                                        * Referenced by: '<S28>/TWC HC Conversion Efficiency'
                                        */
  real_T f_twc_eff_lam[7];             /* Variable: f_twc_eff_lam
                                        * Referenced by:
                                        *   '<S28>/TWC CO Conversion Efficiency'
                                        *   '<S28>/TWC HC Conversion Efficiency'
                                        *   '<S28>/TWC NOx Conversion Efficiency'
                                        */
  real_T f_twc_eff_nox[7];             /* Variable: f_twc_eff_nox
                                        * Referenced by: '<S28>/TWC NOx Conversion Efficiency'
                                        */
  real_T MappedSIEngine_Lhv;           /* Mask Parameter: MappedSIEngine_Lhv
                                        * Referenced by: '<S10>/LHV'
                                        */
  real_T MappedSIEngine_Sg;            /* Mask Parameter: MappedSIEngine_Sg
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T div0protectpoly2_thresh;     /* Mask Parameter: div0protectpoly2_thresh
                                       * Referenced by:
                                       *   '<S16>/Constant'
                                       *   '<S17>/Constant'
                                       */
  real_T div0protectpoly1_thresh;     /* Mask Parameter: div0protectpoly1_thresh
                                       * Referenced by:
                                       *   '<S14>/Constant'
                                       *   '<S15>/Constant'
                                       */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S12>/Switch1'
                                        */
  real_T Switch1_Threshold_e;          /* Expression: 0
                                        * Referenced by: '<S13>/Switch1'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S28>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S28>/Constant3'
                                        */
  real_T ElectronicThrottleActuatorDynamics_A;
                     /* Computed Parameter: ElectronicThrottleActuatorDynamics_A
                      * Referenced by: '<Root>/Electronic Throttle Actuator Dynamics'
                      */
  real_T ElectronicThrottleActuatorDynamics_C;
                     /* Computed Parameter: ElectronicThrottleActuatorDynamics_C
                      * Referenced by: '<Root>/Electronic Throttle Actuator Dynamics'
                      */
  real_T LumpedTorqueDynamics_A;   /* Computed Parameter: LumpedTorqueDynamics_A
                                    * Referenced by: '<Root>/Lumped Torque Dynamics'
                                    */
  real_T LumpedTorqueDynamics_C;   /* Computed Parameter: LumpedTorqueDynamics_C
                                    * Referenced by: '<Root>/Lumped Torque Dynamics'
                                    */
  real_T Constant_Value;               /* Expression: 100
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 1
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S6>/Integrator'
                                        */
  real_T Integrator_WrappedStateUpperValue;/* Expression: 360*Cps
                                            * Referenced by: '<S6>/Integrator'
                                            */
  real_T Integrator_WrappedStateLowerValue;/* Expression: 0
                                            * Referenced by: '<S6>/Integrator'
                                            */
  real_T RPMtodegs_Gain;               /* Expression: 180/30
                                        * Referenced by: '<S6>/RPM to deg//s'
                                        */
  real_T Gain_Gain;                    /* Expression: 1000
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T cylspercycle_Value;           /* Expression: NCyl
                                        * Referenced by: '<S8>/cyls per cycle'
                                        */
  real_T revpercycle_Value;            /* Expression: Cps
                                        * Referenced by: '<S8>/rev per cycle'
                                        */
  real_T secpermin_Value;              /* Expression: 60
                                        * Referenced by: '<S8>/sec per min'
                                        */
  real_T EngineDisplacement_Value;     /* Expression: Vd
                                        * Referenced by: '<S8>/Engine Displacement'
                                        */
  real_T StandardPressureSeaLevel_Value;/* Expression: Pstd
                                         * Referenced by: '<S8>/Standard Pressure Sea Level'
                                         */
  real_T StandardAirTemperature_Value; /* Expression: Tstd
                                        * Referenced by: '<S8>/Standard Air Temperature'
                                        */
  real_T IdealGasConstant_Value;       /* Expression: Rair
                                        * Referenced by: '<S8>/Ideal Gas Constant'
                                        */
  real_T cylspercycle_Value_m;         /* Expression: NCyl
                                        * Referenced by: '<S8>/cyls per cycle '
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 1e6
                                        * Referenced by: '<S8>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0.0001
                                        * Referenced by: '<S8>/Saturation3'
                                        */
  real_T Constant_Value_h;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T rpmtorads_Gain;               /* Expression: -pi/30
                                        * Referenced by: '<S10>/rpm to rad//s'
                                        */
  real_T uDLookupTable_tableData[3];   /* Expression: [0 15 AfrStoich]/AfrStoich
                                        * Referenced by: '<S4>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[3];    /* Expression: [0 15 100]
                                        * Referenced by: '<S4>/1-D Lookup Table'
                                        */
  real_T uDLookupTable1_tableData[4];  /* Expression: [-1 0 0 0.07]
                                        * Referenced by: '<S4>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[4];   /* Expression: [0 0.97 1.03 1.1]
                                        * Referenced by: '<S4>/1-D Lookup Table1'
                                        */
  real_T O2Storage_A;                  /* Computed Parameter: O2Storage_A
                                        * Referenced by: '<S4>/O2 Storage'
                                        */
  real_T O2Storage_C;                  /* Computed Parameter: O2Storage_C
                                        * Referenced by: '<S4>/O2 Storage'
                                        */
  real_T Constant1_Value_m;            /* Expression: 1
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S4>/Merge'
                                       */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S4>/Merge1'
                                      */
  real_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                      * Referenced by: '<S4>/Merge2'
                                      */
  real_T ElectronicThrottleActuatorDynamics_A_a;
                   /* Computed Parameter: ElectronicThrottleActuatorDynamics_A_a
                    * Referenced by: '<S1>/Electronic Throttle Actuator Dynamics'
                    */
  real_T ElectronicThrottleActuatorDynamics_C_k;
                   /* Computed Parameter: ElectronicThrottleActuatorDynamics_C_k
                    * Referenced by: '<S1>/Electronic Throttle Actuator Dynamics'
                    */
  real_T WastegateActuatorDynamics_A;
                              /* Computed Parameter: WastegateActuatorDynamics_A
                               * Referenced by: '<S1>/Wastegate Actuator Dynamics'
                               */
  real_T WastegateActuatorDynamics_C;
                              /* Computed Parameter: WastegateActuatorDynamics_C
                               * Referenced by: '<S1>/Wastegate Actuator Dynamics'
                               */
  real_T IntakeCamPhaserActuatorDynamics_A;
                        /* Computed Parameter: IntakeCamPhaserActuatorDynamics_A
                         * Referenced by: '<S1>/Intake Cam Phaser  Actuator Dynamics'
                         */
  real_T IntakeCamPhaserActuatorDynamics_C;
                        /* Computed Parameter: IntakeCamPhaserActuatorDynamics_C
                         * Referenced by: '<S1>/Intake Cam Phaser  Actuator Dynamics'
                         */
  real_T ExhaustCamPhaserActuatorDynamics_A;
                       /* Computed Parameter: ExhaustCamPhaserActuatorDynamics_A
                        * Referenced by: '<S1>/Exhaust Cam Phaser  Actuator Dynamics'
                        */
  real_T ExhaustCamPhaserActuatorDynamics_C;
                       /* Computed Parameter: ExhaustCamPhaserActuatorDynamics_C
                        * Referenced by: '<S1>/Exhaust Cam Phaser  Actuator Dynamics'
                        */
  real_T VGTActuatorDynamics_A;     /* Computed Parameter: VGTActuatorDynamics_A
                                     * Referenced by: '<S1>/VGT Actuator Dynamics'
                                     */
  real_T VGTActuatorDynamics_C;     /* Computed Parameter: VGTActuatorDynamics_C
                                     * Referenced by: '<S1>/VGT Actuator Dynamics'
                                     */
  real_T EGRValveDynamics_A;           /* Computed Parameter: EGRValveDynamics_A
                                        * Referenced by: '<S1>/EGR Valve Dynamics'
                                        */
  real_T EGRValveDynamics_C;           /* Computed Parameter: EGRValveDynamics_C
                                        * Referenced by: '<S1>/EGR Valve Dynamics'
                                        */
  real_T VariableCompressionRatioActuatorDynamics_A;
               /* Computed Parameter: VariableCompressionRatioActuatorDynamics_A
                * Referenced by: '<S1>/Variable Compression Ratio Actuator Dynamics'
                */
  real_T VariableCompressionRatioActuatorDynamics_C;
               /* Computed Parameter: VariableCompressionRatioActuatorDynamics_C
                * Referenced by: '<S1>/Variable Compression Ratio Actuator Dynamics'
                */
  real_T VariableIntakeValveLiftActuatorDynamics_A;
                /* Computed Parameter: VariableIntakeValveLiftActuatorDynamics_A
                 * Referenced by: '<S1>/Variable Intake Valve Lift Actuator Dynamics'
                 */
  real_T VariableIntakeValveLiftActuatorDynamics_C;
                /* Computed Parameter: VariableIntakeValveLiftActuatorDynamics_C
                 * Referenced by: '<S1>/Variable Intake Valve Lift Actuator Dynamics'
                 */
  real_T VariableIntakeRunnerLengthActuatorDynamics_A;
             /* Computed Parameter: VariableIntakeRunnerLengthActuatorDynamics_A
              * Referenced by: '<S1>/Variable Intake Runner Length Actuator Dynamics'
              */
  real_T VariableIntakeRunnerLengthActuatorDynamics_C;
             /* Computed Parameter: VariableIntakeRunnerLengthActuatorDynamics_C
              * Referenced by: '<S1>/Variable Intake Runner Length Actuator Dynamics'
              */
  real_T IntakeManifoldFlapActuatorDynamics_A;
                     /* Computed Parameter: IntakeManifoldFlapActuatorDynamics_A
                      * Referenced by: '<S1>/Intake Manifold Flap Actuator Dynamics'
                      */
  real_T IntakeManifoldFlapActuatorDynamics_C;
                     /* Computed Parameter: IntakeManifoldFlapActuatorDynamics_C
                      * Referenced by: '<S1>/Intake Manifold Flap Actuator Dynamics'
                      */
  real_T SwirlValveActuatorDynamics_A;
                             /* Computed Parameter: SwirlValveActuatorDynamics_A
                              * Referenced by: '<S1>/Swirl Valve Actuator Dynamics'
                              */
  real_T SwirlValveActuatorDynamics_C;
                             /* Computed Parameter: SwirlValveActuatorDynamics_C
                              * Referenced by: '<S1>/Swirl Valve Actuator Dynamics'
                              */
  real_T Constant_Value_k;             /* Expression: 375
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint32_T IntkGasMassFlwTable_maxIndex[2];
                             /* Computed Parameter: IntkGasMassFlwTable_maxIndex
                              * Referenced by: '<S19>/IntkGasMassFlw Table'
                              */
  uint32_T FuelMassFlwTable_maxIndex[2];
                                /* Computed Parameter: FuelMassFlwTable_maxIndex
                                 * Referenced by: '<S19>/FuelMassFlw Table'
                                 */
  uint32_T BsfcTable_maxIndex[2];      /* Computed Parameter: BsfcTable_maxIndex
                                        * Referenced by: '<S19>/Bsfc Table'
                                        */
  uint32_T EngTrqTable_maxIndex[2];  /* Computed Parameter: EngTrqTable_maxIndex
                                      * Referenced by: '<S19>/EngTrq Table'
                                      */
  uint32_T EoCOTable_maxIndex[2];      /* Computed Parameter: EoCOTable_maxIndex
                                        * Referenced by: '<S19>/EoCO Table'
                                        */
  uint32_T EoCO2Table_maxIndex[2];    /* Computed Parameter: EoCO2Table_maxIndex
                                       * Referenced by: '<S19>/EoCO2 Table'
                                       */
  uint32_T EoHCTable_maxIndex[2];      /* Computed Parameter: EoHCTable_maxIndex
                                        * Referenced by: '<S19>/EoHC Table'
                                        */
  uint32_T EoNOxTable_maxIndex[2];    /* Computed Parameter: EoNOxTable_maxIndex
                                       * Referenced by: '<S19>/EoNOx Table'
                                       */
  uint32_T EoPmTable_maxIndex[2];      /* Computed Parameter: EoPmTable_maxIndex
                                        * Referenced by: '<S19>/EoPm Table'
                                        */
  uint32_T ExhManGasTempTable_maxIndex[2];
                              /* Computed Parameter: ExhManGasTempTable_maxIndex
                               * Referenced by: '<S19>/ExhManGasTemp Table'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_SiMappedEngine_T {
  const char_T **errorStatus;
  RTWSolverInfo *solverInfo;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[153];
    int32_T* vardimsAddress[153];
    RTWLoggingFcnPtr loggingPtrs[153];
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize0;
    SimTimeStep *simTimeStep;
    boolean_T *stopRequestedFlag;
  } Timing;
};

typedef struct {
  B_SiMappedEngine_c_T rtb;
  DW_SiMappedEngine_f_T rtdw;
  RT_MODEL_SiMappedEngine_T rtm;
} MdlrefDW_SiMappedEngine_T;

/* Model reference registration function */
extern void SiMappedEngine_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, RT_MODEL_SiMappedEngine_T *
  const SiMappedEngine_M, B_SiMappedEngine_c_T *localB, DW_SiMappedEngine_f_T
  *localDW, X_SiMappedEngine_n_T *localX, rtwCAPI_ModelMappingInfo *rt_ParentMMI,
  const char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  SiMappedEngine_GetCAPIStaticMap(void);
extern void SiMappedEngine_Init(real_T *rty_Map, real_T *rty_Mat, real_T
  *rty_TurboSpd, real_T *rty_TurbPrsRatio, real_T *rty_CompPrsRatio, real_T
  *rty_TurbTempOut, real_T *rty_CompTempOut, real_T *rty_EgrPct, real_T
  *rty_EgrMassFlwRate, real_T *rty_EgrCoolerTempOut, real_T
  *rty_IntercoolerTempOut, real_T *rty_TPHC, real_T *rty_TPCO, real_T *rty_TPNOx,
  real_T *rty_Iat, real_T *rty_Ect, real_T *rty_EgrVlvDeltaPrs, real_T
  *rty_EgrVlvInTemp, DW_SiMappedEngine_f_T *localDW, X_SiMappedEngine_n_T
  *localX);
extern void SiMappedEngine_Reset(X_SiMappedEngine_n_T *localX);
extern void SiMappedEngine_Deriv(const real_T *rtu_ThrPosPctCmd, const real_T
  *rtu_WgAreaPctCmd, const real_T *rtu_IntkCamPhaseCmd, const real_T
  *rtu_ExhCamPhaseCmd, const real_T *rtu_TurboRackPosCmd, const real_T
  *rtu_EgrVlvAreaPctCmd, const real_T *rtu_VarCompRatioPosCmd, const real_T
  *rtu_IntkVlvLiftCmd, const real_T *rtu_VarIntkRunLenCmd, const real_T
  *rtu_VarIntkManPosCmd, const real_T *rtu_IntkSwirlVlvPosCmd, const real_T
  *rtu_TrqCmd, B_SiMappedEngine_c_T *localB, X_SiMappedEngine_n_T *localX,
  XDot_SiMappedEngine_n_T *localXdot);
extern void SiMappedEngine_Update(void);
extern void SiMappedEngine(RT_MODEL_SiMappedEngine_T * const SiMappedEngine_M,
  const real_T *rtu_EngSpd, real_T *rty_EngTrq, real_T *rty_EngSpdOut, real_T
  *rty_Map, real_T *rty_Mat, real_T *rty_ThrPosPct, real_T *rty_WgAreaPct,
  real_T *rty_IntkCamPhase, real_T *rty_ExhCamPhase, real_T *rty_TurboRackPos,
  real_T *rty_EgrVlvAreaPct, real_T *rty_VarCompRatioPos, real_T
  *rty_IntkVlvLift, real_T *rty_VarIntkRunLen, real_T *rty_VarIntkManPos, real_T
  *rty_IntkSwirlVlvPos, real_T *rty_FuelFlw, real_T *rty_IntkPortFlw, real_T
  *rty_NormAirChrg, real_T *rty_ExhManGasTemp, real_T *rty_Afr, real_T
  *rty_TurboSpd, real_T *rty_TurbPrsRatio, real_T *rty_CompPrsRatio, real_T
  *rty_TurbTempOut, real_T *rty_CompTempOut, real_T *rty_EgrPct, real_T
  *rty_EgrMassFlwRate, real_T *rty_EgrCoolerTempOut, real_T
  *rty_IntercoolerTempOut, real_T *rty_BSFC, real_T *rty_TPHC, real_T *rty_TPCO,
  real_T *rty_TPNOx, real_T *rty_TPCO2, real_T *rty_Iat, real_T *rty_Ect, real_T
  *rty_EgrVlvDeltaPrs, real_T *rty_EgrVlvInTemp, real_T *rty_FuelVolFlow,
  B_SiMappedEngine_c_T *localB, DW_SiMappedEngine_f_T *localDW,
  X_SiMappedEngine_n_T *localX);

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
 * '<Root>' : 'SiMappedEngine'
 * '<S1>'   : 'SiMappedEngine/Actuators'
 * '<S2>'   : 'SiMappedEngine/Mapped SI Engine'
 * '<S3>'   : 'SiMappedEngine/RTI Data'
 * '<S4>'   : 'SiMappedEngine/Three-Way Catalyst'
 * '<S5>'   : 'SiMappedEngine/Mapped SI Engine/Afr Calculation'
 * '<S6>'   : 'SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation'
 * '<S7>'   : 'SiMappedEngine/Mapped SI Engine/Fuel Volume Flow'
 * '<S8>'   : 'SiMappedEngine/Mapped SI Engine/Load Calculation'
 * '<S9>'   : 'SiMappedEngine/Mapped SI Engine/Mapped Core Engine'
 * '<S10>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info'
 * '<S11>'  : 'SiMappedEngine/Mapped SI Engine/SI Engine Torque without Boost Lag'
 * '<S12>'  : 'SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1'
 * '<S13>'  : 'SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2'
 * '<S14>'  : 'SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Compare To Constant'
 * '<S15>'  : 'SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly1/Compare To Constant1'
 * '<S16>'  : 'SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Compare To Constant'
 * '<S17>'  : 'SiMappedEngine/Mapped SI Engine/Afr Calculation/div0protect - poly2/Compare To Constant1'
 * '<S18>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input'
 * '<S19>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Core Engine/Without Temperature Input/Mapped Core Engine'
 * '<S20>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Power Accounting Bus Creator'
 * '<S21>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Power Accounting Bus Creator/No PwrStored Input'
 * '<S22>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S23>'  : 'SiMappedEngine/Mapped SI Engine/Mapped Engine Power Info/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S24>'  : 'SiMappedEngine/RTI Data/RTI Data Store'
 * '<S25>'  : 'SiMappedEngine/RTI Data/RTI Data Store/RTI Data Store'
 * '<S26>'  : 'SiMappedEngine/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S27>'  : 'SiMappedEngine/Three-Way Catalyst/Catalyst  Non-Activated'
 * '<S28>'  : 'SiMappedEngine/Three-Way Catalyst/Catalyst Activated'
 */
#endif                                 /* RTW_HEADER_SiMappedEngine_h_ */

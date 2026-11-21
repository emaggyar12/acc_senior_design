/*
 * Code generation for system model 'HSC_Model'
 * For more details, see corresponding source file HSC_Model.c
 *
 */

#ifndef RTW_HEADER_HSC_Model_h_
#define RTW_HEADER_HSC_Model_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef HSC_Model_COMMON_INCLUDES_
# define HSC_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* HSC_Model_COMMON_INCLUDES_ */

#include "HSC_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "HSC_Model_ACCext.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S2>/Chart' */
typedef struct {
  real_T timer;                        /* '<S2>/Chart' */
} B_Chart_HSC_Model_T;

/* Block states (default storage) for system '<S2>/Chart' */
typedef struct {
  real_T currtime;                     /* '<S2>/Chart' */
  real_T orig;                         /* '<S2>/Chart' */
  uint32_T temporalCounter_i1;         /* '<S2>/Chart' */
  uint8_T is_active_c16_HSC_Model;     /* '<S2>/Chart' */
  uint8_T is_c16_HSC_Model;            /* '<S2>/Chart' */
} DW_Chart_HSC_Model_T;

/* Block signals for system '<S36>/Fault counter1' */
typedef struct {
  real_T fail_flag;                    /* '<S36>/Fault counter1' */
} B_Faultcounter1_HSC_Model_T;

/* Block states (default storage) for system '<S36>/Fault counter1' */
typedef struct {
  real_T count;                        /* '<S36>/Fault counter1' */
  real_T flag;                         /* '<S36>/Fault counter1' */
  uint8_T is_active_c24_HSC_Model;     /* '<S36>/Fault counter1' */
  uint8_T is_c24_HSC_Model;            /* '<S36>/Fault counter1' */
  uint8_T is_Normal;                   /* '<S36>/Fault counter1' */
} DW_Faultcounter1_HSC_Model_T;

/* Block signals for model 'HSC_Model' */
typedef struct {
  real_T CastToBoolean25;              /* '<S6>/Cast To Boolean25' */
  real_T CastToBoolean40;              /* '<S6>/Cast To Boolean40' */
  real_T VehSpdms;                     /* '<S1>/km//h2m//s1' */
  real_T EgoSpd;                       /* '<S19>/Data Type Conversion' */
  real_T TargetPos;                    /* '<S19>/Discrete-Time Integrator' */
  real_T EgoPos;                       /* '<S19>/Discrete-Time Integrator1' */
  real_T Switch1;                      /* '<S19>/Switch1' */
  real_T xdotref;                      /* '<S6>/Cast To Boolean10' */
  real_T Switch;                       /* '<S19>/Switch' */
  real_T Switch2;                      /* '<S1>/Switch2' */
  real_T VehSpd_ms;                    /* '<S3>/kph to mps' */
  real_T DataTypeConversion;           /* '<S36>/Data Type Conversion' */
  real_T IC;                           /* '<S36>/IC' */
  real_T Gain;                         /* '<S36>/Gain' */
  real_T DataTypeConversion1;          /* '<S38>/Data Type Conversion1' */
  real_T CastToBoolean32;              /* '<S6>/Cast To Boolean32' */
  real_T DataTypeConversion7;          /* '<S35>/Data Type Conversion7' */
  real_T CastToBoolean41;              /* '<S6>/Cast To Boolean41' */
  real_T DataTypeConversion2;          /* '<S35>/Data Type Conversion2' */
  real_T Memory7;                      /* '<S33>/Memory7' */
  real_T CastToBoolean31;              /* '<S6>/Cast To Boolean31' */
  real_T kohmstoohms;                  /* '<S33>/kohms to ohms' */
  real_T CastToBoolean48;              /* '<S6>/Cast To Boolean48' */
  real_T closedcontactorbatteryrange;
                                    /* '<S33>/closed contactor battery range' */
  real_T Divide;                       /* '<S33>/Divide' */
  real_T DataTypeConversion1_k;        /* '<S35>/Data Type Conversion1' */
  real_T DataTypeConversion3;          /* '<S35>/Data Type Conversion3' */
  real_T CAVPCM_ACCMdActive;           /* '<S1>/Switch1' */
  real_T ActDist;                      /* '<S20>/Product' */
  real_T SafeDist;                     /* '<S20>/Sum2' */
  real_T DistErr;                      /* '<S20>/Sum1' */
  real_T Gain_h;                       /* '<S20>/Gain' */
  real_T Power;                        /* '<S20>/Power' */
  real_T Product2;                     /* '<S20>/Product2' */
  real_T Add2;                         /* '<S20>/Add2' */
  real_T Switch_e;                     /* '<S20>/Switch' */
  real_T Add3;                         /* '<S20>/Add3' */
  real_T Divide_f;                     /* '<S20>/Divide' */
  real_T Switch_l;                     /* '<S2>/Switch' */
  real_T CastToBoolean35;              /* '<S6>/Cast To Boolean35' */
  real_T ContinuousCurrentLimit;       /* '<S2>/2-D Lookup Table' */
  real_T Memory;                       /* '<S2>/Memory' */
  real_T Memory1;                      /* '<S2>/Memory1' */
  real_T Switch_o;                     /* '<S106>/Switch' */
  real_T Switch2_c;                    /* '<S106>/Switch2' */
  real_T Product;                      /* '<S4>/Product' */
  real_T APP;                          /* '<S6>/Cast To Boolean23' */
  real_T ACC_Deadzone;                 /* '<S4>/ACC_Deadzone' */
  real_T TotDrvrDmdTrq;               /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T TotDrvrDmdTrq_g;              /* '<S4>/Saturation2' */
  real_T kphtomps;                     /* '<S4>/kph to mps' */
  real_T mpstorads;                    /* '<S4>/mps to rad//s' */
  real_T preventszeroingPwrDmdat0kph;
                                  /* '<S4>/prevents zeroing Pwr Dmd at 0 kph' */
  real_T map;                          /* '<S4>/Multiply' */
  real_T Switch_j;                     /* '<S4>/Switch' */
  real_T CastToBoolean37;              /* '<S6>/Cast To Boolean37' */
  real_T SteeringWheelAngleFadeOut;   /* '<S9>/Steering Wheel Angle Fade Out' */
  real_T MultiportSwitch;              /* '<S9>/Multiport Switch' */
  real_T total;                        /* '<S4>/Sum' */
  real_T CastToBoolean46;              /* '<S6>/Cast To Boolean46' */
  real_T kphtomph;                     /* '<S10>/kph to mph' */
  real_T gear;                         /* '<S6>/Cast To Boolean28' */
  real_T Switch_jq;                    /* '<S29>/Switch' */
  real_T MatrixConcatenate1[5];        /* '<S29>/Matrix Concatenate1' */
  real_T MatrixConcatenate[5];         /* '<S29>/Matrix Concatenate' */
  real_T DynamicPSOCTable1;            /* '<S29>/Dynamic PSOC Table1' */
  real_T Product_m;                    /* '<S29>/Product' */
  real_T Switch_lp;                    /* '<S30>/Switch' */
  real_T Switch2_p;                    /* '<S30>/Switch2' */
  real_T FixPtGatewayIn;               /* '<S73>/FixPt Gateway In' */
  real_T FixPtSum1;                    /* '<S73>/FixPt Sum1' */
  real_T kphtomph_c;                   /* '<S5>/kph to mph' */
  real_T Switch_i;                     /* '<S5>/Switch' */
  real_T Saturation1;                  /* '<S5>/Saturation1' */
  real_T Gain_m;                       /* '<S5>/Gain' */
  real_T Product_d;                    /* '<S5>/Product' */
  real_T ACC_Correc_Mot;               /* '<S71>/Switch4' */
  real_T IC6;                          /* '<S2>/IC6' */
  real_T CurrentDemanded;              /* '<S2>/Divide' */
  real_T CurrentLimit;                 /* '<S2>/2-D Lookup Table2' */
  real_T IC_m;                         /* '<S2>/IC' */
  real_T CurrentDemanded_k;            /* '<S2>/Divide1' */
  real_T ContinuousDischageLimit;      /* '<S2>/ContinuousDischageLimit' */
  real_T CurrentLimit_f;               /* '<S2>/2-D Lookup Table5' */
  real_T CastToBoolean33;              /* '<S6>/Cast To Boolean33' */
  real_T IC5;                          /* '<S2>/IC5' */
  real_T ContinuousMotorPowerLimit;    /* '<S2>/ContinuousMotorPowerLimit' */
  real_T IC2;                          /* '<S2>/IC2' */
  real_T IC1;                          /* '<S2>/IC1' */
  real_T ContinuousMotorPowerLimit2;   /* '<S2>/ContinuousMotorPowerLimit2' */
  real_T IC8;                          /* '<S2>/IC8' */
  real_T IC3;                          /* '<S2>/IC3' */
  real_T IC7;                          /* '<S2>/IC7' */
  real_T IC4;                          /* '<S2>/IC4' */
  real_T Battery_Pwr_Limit_Charge;     /* '<S2>/Product4' */
  real_T Switch1_m;                    /* '<S2>/Switch1' */
  real_T ChargeLimit;                  /* '<S2>/Min' */
  real_T ChargeLimit_l;                /* '<S2>/Gain1' */
  real_T Battery_Pwr_Limit_Charge_a;   /* '<S2>/Product5' */
  real_T Switch3;                      /* '<S2>/Switch3' */
  real_T DischargeLimit;               /* '<S2>/Min1' */
  real_T Memory2;                      /* '<S3>/Memory2' */
  real_T CastToBoolean34;              /* '<S6>/Cast To Boolean34' */
  real_T uDLookupTable;                /* '<S5>/1-D Lookup Table' */
  real_T Switch1_i;                    /* '<S88>/Switch1' */
  real_T Abs1;                         /* '<S85>/Abs1' */
  real_T Switch2_a;                    /* '<S85>/Switch2' */
  real_T Gain1;                        /* '<S5>/Gain1' */
  real_T Switch_g;                     /* '<S87>/Switch' */
  real_T Switch2_m;                    /* '<S87>/Switch2' */
  real_T DelayOneStep;                 /* '<S86>/Delay One Step' */
  real_T Switch_eg;                    /* '<S69>/Switch' */
  real_T motor_trq_demand_Nm;          /* '<S69>/Switch1' */
  real_T Product2_e;                   /* '<S40>/Product2' */
  real_T Abs1_d;                       /* '<S40>/Abs1' */
  real_T Abs2;                         /* '<S40>/Abs2' */
  real_T Add;                          /* '<S40>/Add' */
  real_T Abs3;                         /* '<S40>/Abs3' */
  real_T DataTypeConversion4;          /* '<S40>/Data Type Conversion4' */
  real_T IC_d;                         /* '<S40>/IC' */
  real_T Switch_gm;                    /* '<S105>/Switch' */
  real_T Switch2_cx;                   /* '<S105>/Switch2' */
  real_T ACC_Correc_Eng;               /* '<S70>/Switch3' */
  real_T kphtomps1;                    /* '<S5>/kph to mps1' */
  real_T whlspd;                       /* '<S68>/m//s2rad//s' */
  real_T preventsdividingbyzero;       /* '<S68>/prevents dividing by zero' */
  real_T Divide_g;                     /* '<S68>/Divide' */
  real_T Product_f;                    /* '<S68>/Product' */
  real_T Switch2_d;                    /* '<S68>/Switch2' */
  real_T Saturation;                   /* '<S68>/Saturation' */
  real_T eng_mot;                      /* '<S5>/Add1' */
  real_T diff;                         /* '<S5>/Add2' */
  real_T diff_d;                       /* '<S5>/Add6' */
  real_T totaloutputpower;             /* '<S5>/Add' */
  real_T Abs;                          /* '<S5>/Abs' */
  real_T diff_ds;                      /* '<S5>/Add7' */
  real_T Abs1_a;                       /* '<S5>/Abs1' */
  real_T Tanh_Exponent;                /* '<S6>/Cast To Double' */
  real_T Product1;                     /* '<S86>/Product1' */
  real_T Tanh;                         /* '<S86>/Tanh' */
  real_T Tanh_multiplier;              /* '<S6>/Cast To Double1' */
  real_T Product_n;                    /* '<S86>/Product' */
  real_T Abs_g;                        /* '<S86>/Abs' */
  real_T VehSpdMPH;                    /* '<S69>/Gain19' */
  real_T VehSpdMPH_g;                  /* '<S74>/Gain19' */
  real_T Gain_hg;                      /* '<S74>/Gain' */
  real_T Switch1_h;                    /* '<S74>/Switch1' */
  real_T ACCBrakeTime;                 /* '<S6>/Cast To Boolean11' */
  real_T grade;                        /* '<S6>/Cast To Boolean15' */
  real_T DrvIntndAxlTrqMin;            /* '<S6>/Cast To Boolean8' */
  real_T CurrentState;                 /* '<S6>/Cast To Double2' */
  real_T DistanceToIntersection;       /* '<S6>/Cast To Double3' */
  real_T TimeToIntersection;           /* '<S6>/Cast To Double4' */
  real_T Decel_Division_Value;         /* '<S6>/Cast To Double5' */
  real_T DataTypeConversion_g;         /* '<S9>/Data Type Conversion' */
  real_T Product2_a;                   /* '<S9>/Product2' */
  real_T hsc_bms_enable;               /* '<S10>/VMCP' */
  real_T hsc_bms_leakage_ena;          /* '<S10>/VMCP' */
  real_T hsc_bms_mainc_close;          /* '<S10>/VMCP' */
  real_T hsc_brusa_enable;             /* '<S10>/VMCP' */
  real_T Eng_Start;                    /* '<S10>/VMCP' */
  real_T hsc_mpdm_R1_bmsIgn;           /* '<S10>/VMCP' */
  real_T hsc_mpdm_R2_mcuIgn;           /* '<S10>/VMCP' */
  real_T VMU_Cmd1_OpReq;               /* '<S10>/VMCP' */
  real_T VMU_Cmd2_OpMdCmd;             /* '<S10>/VMCP' */
  real_T vmcp_StartupSt;               /* '<S10>/VMCP' */
  real_T vmcp_operating_mode;          /* '<S10>/VMCP' */
  real_T hsc_mpdm_R8_bmsPwr;           /* '<S10>/VMCP' */
  real_T hsc_mpdm_HVpump;              /* '<S10>/VMCP' */
  real_T VMU_Kickout;                  /* '<S10>/VMCP' */
  real_T VMU_Cmd2_CommandMd;           /* '<S10>/VMCP' */
  real_T kphtomph_o;                   /* '<S9>/kph to mph' */
  real_T VehicleSpeedFadeOut;          /* '<S9>/Vehicle Speed Fade Out' */
  real_T BPPFadeOut;                   /* '<S9>/BPP Fade Out' */
  real_T Product3;                     /* '<S9>/Product3' */
  real_T Add_k;                        /* '<S9>/Add' */
  real_T RegenPowerW;                  /* '<S9>/Product1' */
  real_T Saturation1_g;                /* '<S9>/Saturation1' */
  real_T rbcp_regen_enable;            /* '<S9>/rbcp_regen_enable' */
  real_T Switch_o1;                    /* '<S74>/APP Hysterisis' */
  real_T Switch_je;                    /* '<S74>/Switch' */
  real_T Product_l;                    /* '<S74>/Product' */
  real_T uDLookupTable_c;              /* '<S74>/1-D Lookup Table' */
  real_T emcp_p_eng_des_W;             /* '<S5>/Energy Management Strategy' */
  real_T emcp_ptot_W;                  /* '<S5>/Energy Management Strategy' */
  real_T emcp_p_elec_des_W;            /* '<S5>/Energy Management Strategy' */
  real_T emcp_mode;                    /* '<S5>/Energy Management Strategy' */
  real_T RPM_to_rads;                  /* '<S69>/RPM_to_rad//s' */
  real_T preventsdividingbyzero_h;     /* '<S69>/prevents dividing by zero' */
  real_T Motor_Trq_Req_Raw_Nm;         /* '<S69>/Divide1' */
  real_T TorqueOut;                    /* '<S86>/Chart' */
  real_T DeltaTime;                    /* '<S86>/Chart' */
  real_T TorqueReversed;               /* '<S86>/Chart' */
  real_T kphtomps_m;                   /* '<S5>/kph to mps' */
  real_T uDLookupCreepTrq_Nm;          /* '<S85>/1-D Lookup Creep Trq_Nm' */
  real_T Switch_oa;                    /* '<S86>/Switch' */
  real_T MultiportSwitch_o;            /* '<S91>/Multiport Switch' */
  real_T Product3_f;                   /* '<S69>/Product3' */
  real_T uDLookupTable1;               /* '<S86>/1-D Lookup Table1' */
  real_T Product2_i;                   /* '<S86>/Product2' */
  real_T Gain_ha;                      /* '<S69>/Gain' */
  real_T MinMax1;                      /* '<S68>/MinMax1' */
  real_T Gain2;                        /* '<S5>/Gain2' */
  real_T DirectLookupTablenD;          /* '<S5>/Direct Lookup Table (n-D)' */
  real_T FinalDrive;                   /* '<S5>/FinalDrive' */
  real_T Product1_m;                   /* '<S5>/Product1' */
  real_T Saturation_h;                 /* '<S5>/Saturation' */
  real_T Gain4;                        /* '<S5>/Gain4' */
  real_T uDLookupTable1_p;             /* '<S5>/1-D Lookup Table1' */
  real_T Engine_Axle_Torque;           /* '<S5>/Product2' */
  real_T DrvIntndAxlTrqMax;            /* '<S6>/Cast To Boolean7' */
  real_T Fault;                        /* '<S35>/fault Counter3' */
  real_T Fault_g;                      /* '<S35>/fault Counter2' */
  real_T Fault_o;                      /* '<S35>/fault Counter1' */
  real_T GFDLightOn;                   /* '<S33>/Chart' */
  real_T kphtomph_f;                   /* '<S2>/kph to mph' */
  real_T VehicleSpeedMultiplier;       /* '<S29>/Vehicle Speed Multiplier' */
  real_T timer;                        /* '<S2>/Chart3' */
  real_T timer_g;                      /* '<S2>/Chart1' */
  real_T bcm_coolan_temp_C;            /* '<S6>/Cast To Double6' */
  real_T ContinuousMotorPowerLimit1;   /* '<S2>/ContinuousMotorPowerLimit1' */
  real_T DiscreteMotorPowerLimit;      /* '<S2>/DiscreteMotorPowerLimit' */
  real_T ContinuousMotorPowerLimit3;   /* '<S2>/ContinuousMotorPowerLimit3' */
  real_T DiscreteMotorPowerLimit1;     /* '<S2>/DiscreteMotorPowerLimit1' */
  real_T Add_ku;                       /* '<S20>/Add' */
  real_T Square;                       /* '<S20>/Square' */
  real_T Product1_h;                   /* '<S20>/Product1' */
  real_T Add1;                         /* '<S20>/Add1' */
  real_T Add1_i;                       /* '<S19>/Add1' */
  real_T CAVtrgVel;                    /* '<S6>/Cast To Boolean13' */
  real_T Add_p;                        /* '<S19>/Add' */
  real_T CAVtrgDist;                   /* '<S6>/Cast To Boolean14' */
  real_T ACCSetSpd;                    /* '<S1>/Generate SetSpd' */
  real_T AutoMdSpdLmtStat;             /* '<S1>/Chart' */
  real_T ACCAct370;                    /* '<S1>/Chart' */
  real_T AdapCrsCntVDA;                /* '<S1>/Chart' */
  real_T ACCDrvrSeltdSpd;              /* '<S1>/Chart' */
  real_T CAVACCRequest;                /* '<S1>/CAVPCM_ACCMd_Request' */
  real_T CastToBoolean27;              /* '<S6>/Cast To Boolean27' */
  real_T Switch_ja;                    /* '<S1>/Switch' */
  real_T Gain_b;                       /* '<S1>/Gain' */
  int16_T lvrpos;                      /* '<S6>/Cast To Boolean39' */
  int16_T CastToBoolean3;              /* '<S6>/Cast To Boolean3' */
  uint8_T CastToBoolean30;             /* '<S6>/Cast To Boolean30' */
  uint8_T Memory1_m;                   /* '<S3>/Memory1' */
  uint8_T BPPTrqCancel;                /* '<S32>/Gain' */
  int8_T TrqReqStat;                   /* '<S6>/Cast To Boolean9' */
  int8_T CastToBoolean47;              /* '<S6>/Cast To Boolean47' */
  int8_T CastToBoolean36;              /* '<S6>/Cast To Boolean36' */
  int8_T CastToBoolean29;              /* '<S6>/Cast To Boolean29' */
  int8_T CastToBoolean6;               /* '<S6>/Cast To Boolean6' */
  boolean_T CastToBoolean26;           /* '<S6>/Cast To Boolean26' */
  boolean_T CastToBoolean22;           /* '<S6>/Cast To Boolean22' */
  boolean_T Compare;                   /* '<S56>/Compare' */
  boolean_T Compare_l;                 /* '<S52>/Compare' */
  boolean_T LogicalOperator6;          /* '<S36>/Logical Operator6' */
  boolean_T Compare_f;                 /* '<S53>/Compare' */
  boolean_T Compare_i;                 /* '<S55>/Compare' */
  boolean_T LogicalOperator7;          /* '<S36>/Logical Operator7' */
  boolean_T LogicalOperator8;          /* '<S36>/Logical Operator8' */
  boolean_T powerdirectionfault;       /* '<S3>/Cast To Boolean' */
  boolean_T Compare_k;                 /* '<S57>/Compare' */
  boolean_T Compare_a;                 /* '<S60>/Compare' */
  boolean_T LogicalOperator1;          /* '<S38>/Logical Operator1' */
  boolean_T Compare_h;                 /* '<S61>/Compare' */
  boolean_T Compare_fb;                /* '<S63>/Compare' */
  boolean_T Compare_lt;                /* '<S64>/Compare' */
  boolean_T RecieveDrive;              /* '<S38>/Logical Operator' */
  boolean_T LogicalOperator2;          /* '<S38>/Logical Operator2' */
  boolean_T Compare_j;                 /* '<S59>/Compare' */
  boolean_T LogicalOperator4;          /* '<S38>/Logical Operator4' */
  boolean_T LogicalOperator3;          /* '<S38>/Logical Operator3' */
  boolean_T Compare_n;                 /* '<S58>/Compare' */
  boolean_T LogicalOperator6_k;        /* '<S38>/Logical Operator6' */
  boolean_T LogicalOperator5;          /* '<S38>/Logical Operator5' */
  boolean_T LogicalOperator7_c;        /* '<S38>/Logical Operator7' */
  boolean_T IC_e;                      /* '<S38>/IC' */
  boolean_T LogicalOperator1_i;        /* '<S39>/Logical Operator1' */
  boolean_T Compare_b;                 /* '<S48>/Compare' */
  boolean_T LogicalOperator1_c;        /* '<S34>/Logical Operator1' */
  boolean_T Compare_e;                 /* '<S46>/Compare' */
  boolean_T Compare_m;                 /* '<S44>/Compare' */
  boolean_T gfd;                       /* '<S33>/Logical Operator11' */
  boolean_T FirstTimeFlag;             /* '<S33>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_k;     /* '<S33>/Data Type Conversion3' */
  boolean_T Compare_c;                 /* '<S45>/Compare' */
  boolean_T Compare_jl;                /* '<S47>/Compare' */
  boolean_T LogicalOperator;           /* '<S35>/Logical Operator' */
  boolean_T LogicalOperator1_a;        /* '<S37>/Logical Operator1' */
  boolean_T CastToBoolean4;            /* '<S6>/Cast To Boolean4' */
  boolean_T CAVACCReq;                 /* '<S1>/Cast To Boolean' */
  boolean_T CAVPCM_ACCAct;             /* '<S1>/Cast To Boolean1' */
  boolean_T LowerRelop1;               /* '<S106>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S106>/UpperRelop' */
  boolean_T AND;                       /* '<S71>/AND' */
  boolean_T NOT;                       /* '<S4>/NOT' */
  boolean_T Compare_o;                 /* '<S113>/Compare' */
  boolean_T CastToBoolean51;           /* '<S6>/Cast To Boolean51' */
  boolean_T Compare_kp;                /* '<S114>/Compare' */
  boolean_T Compare_oa;                /* '<S117>/Compare' */
  boolean_T LogicalOperator_l;         /* '<S9>/Logical Operator' */
  boolean_T CastToBoolean49;           /* '<S6>/Cast To Boolean49' */
  boolean_T CastToBoolean45;           /* '<S6>/Cast To Boolean45' */
  boolean_T CastToBoolean43;           /* '<S6>/Cast To Boolean43' */
  boolean_T CastToBoolean44;           /* '<S6>/Cast To Boolean44' */
  boolean_T CastToBoolean42;           /* '<S6>/Cast To Boolean42' */
  boolean_T Compare_kf;                /* '<S31>/Compare' */
  boolean_T LowerRelop1_e;             /* '<S30>/LowerRelop1' */
  boolean_T UpperRelop_h;              /* '<S30>/UpperRelop' */
  boolean_T Compare_j1;                /* '<S41>/Compare' */
  boolean_T Compare_j2;                /* '<S42>/Compare' */
  boolean_T LogicalOperator3_d;        /* '<S32>/Logical Operator3' */
  boolean_T BPPTrqCancel_h;            /* '<S32>/IC' */
  boolean_T DiagnosticFaults;          /* '<S69>/Diagnostic Faults' */
  boolean_T Compare_jg;                /* '<S94>/Compare' */
  boolean_T Compare_nu;                /* '<S92>/Compare' */
  boolean_T LowerRelop1_h;             /* '<S87>/LowerRelop1' */
  boolean_T UpperRelop_l;              /* '<S87>/UpperRelop' */
  boolean_T Compare_m2;                /* '<S90>/Compare' */
  boolean_T Compare_p;                 /* '<S66>/Compare' */
  boolean_T Compare_nq;                /* '<S65>/Compare' */
  boolean_T AND_a;                     /* '<S40>/AND' */
  boolean_T LowerRelop1_n;             /* '<S105>/LowerRelop1' */
  boolean_T UpperRelop_e;              /* '<S105>/UpperRelop' */
  boolean_T AND_f;                     /* '<S70>/AND' */
  boolean_T Compare_ha;                /* '<S75>/Compare' */
  boolean_T Compare_nm;                /* '<S77>/Compare' */
  boolean_T Compare_g;                 /* '<S79>/Compare' */
  boolean_T LogicalOperator_f;         /* '<S76>/Logical Operator' */
  boolean_T Compare_lf;                /* '<S78>/Compare' */
  boolean_T LogicalOperator1_d;        /* '<S76>/Logical Operator1' */
  boolean_T Compare_bp;                /* '<S108>/Compare' */
  boolean_T Compare_ms;                /* '<S109>/Compare' */
  boolean_T OR;                        /* '<S74>/OR' */
  boolean_T dist_is_valid;             /* '<S6>/Cast To Boolean' */
  boolean_T CastToBoolean1;            /* '<S6>/Cast To Boolean1' */
  boolean_T TrafficLightPresent;       /* '<S6>/Cast To Boolean12' */
  boolean_T CastToBoolean16;           /* '<S6>/Cast To Boolean16' */
  boolean_T CastToBoolean2;            /* '<S6>/Cast To Boolean2' */
  boolean_T CastToBoolean24;           /* '<S6>/Cast To Boolean24' */
  boolean_T CastToBoolean38;           /* '<S6>/Cast To Boolean38' */
  boolean_T Compare_o0;                /* '<S116>/Compare' */
  boolean_T Compare_nj;                /* '<S115>/Compare' */
  boolean_T Compare_bz;                /* '<S95>/Compare' */
  boolean_T Compare_lv;                /* '<S96>/Compare' */
  boolean_T Compare_lz;                /* '<S97>/Compare' */
  boolean_T allowsbrakingtorqueifineithercruisechangingmodes;
         /* '<S89>/allows braking torque if in  either cruise changing modes' */
  boolean_T Compare_ni;                /* '<S100>/Compare' */
  boolean_T Compare_nz;                /* '<S98>/Compare' */
  boolean_T LogicalOperator1_a1;       /* '<S89>/Logical Operator1' */
  boolean_T Compare_me;                /* '<S99>/Compare' */
  boolean_T OR_n;                      /* '<S89>/OR' */
  boolean_T CastToBoolean50;           /* '<S6>/Cast To Boolean50' */
  boolean_T Compare_nw;                /* '<S84>/Compare' */
  boolean_T Compare_o5;                /* '<S82>/Compare' */
  boolean_T Compare_mq;                /* '<S83>/Compare' */
  boolean_T Compare_ib;                /* '<S81>/Compare' */
  boolean_T LogicalOperator_d;         /* '<S69>/Logical Operator' */
  boolean_T LogicalOperator1_e;        /* '<S69>/Logical Operator1' */
  boolean_T Compare_bf;                /* '<S80>/Compare' */
  boolean_T Compare_ns;                /* '<S104>/Compare' */
  boolean_T Compare_el;                /* '<S103>/Compare' */
  boolean_T LogicalOperator1_d1;       /* '<S91>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S102>/Compare' */
  boolean_T Compare_fi;                /* '<S101>/Compare' */
  boolean_T LogicalOperator_fc;        /* '<S91>/Logical Operator' */
  boolean_T LogicalOperator2_m;        /* '<S91>/Logical Operator2' */
  boolean_T fail_flag;                 /* '<S38>/Fault Counter' */
  boolean_T Compare_pq;                /* '<S16>/Compare' */
  boolean_T Compare_av;                /* '<S15>/Compare' */
  boolean_T Compare_mu;                /* '<S17>/Compare' */
  boolean_T CastToBoolean5;            /* '<S6>/Cast To Boolean5' */
  boolean_T OR1;                       /* '<S1>/OR1' */
  B_Faultcounter1_HSC_Model_T sf_Faultcounter1_f;/* '<S40>/Fault counter1' */
  B_Faultcounter1_HSC_Model_T sf_Faultcounter1;/* '<S36>/Fault counter1' */
  B_Chart_HSC_Model_T sf_Chart2;       /* '<S2>/Chart2' */
  B_Chart_HSC_Model_T sf_Chart_g;      /* '<S2>/Chart' */
  B_ACCext_HSC_Model_T ACCext;         /* '<S12>/ACC ext' */
} B_HSC_Model_c_T;

/* Block states (default storage) for model 'HSC_Model' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S19>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S19>/Discrete-Time Integrator1' */
  real_T DelayOneStep_DSTATE;          /* '<S86>/Delay One Step' */
  real_T Memory7_PreviousInput;        /* '<S33>/Memory7' */
  real_T Memory_PreviousInput;         /* '<S2>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S2>/Memory1' */
  real_T m_bpLambda[3];                /* '<S2>/2-D Lookup Table2' */
  real_T m_bpLambda_h[3];              /* '<S2>/2-D Lookup Table5' */
  real_T Memory2_PreviousInput;        /* '<S3>/Memory2' */
  real_T Regen_Active;                 /* '<S10>/VMCP' */
  real_T Full_Power_Active;            /* '<S10>/VMCP' */
  real_T Cruise_Charge_Available;      /* '<S10>/VMCP' */
  real_T Launch_Mode;                  /* '<S10>/VMCP' */
  real_T Low_Speed_Cruise_Charge;      /* '<S10>/VMCP' */
  real_T emcp_psoc_W;                  /* '<S5>/Energy Management Strategy' */
  real_T count;                        /* '<S38>/Fault Counter' */
  real_T flag;                         /* '<S38>/Fault Counter' */
  real_T fail_flag;                    /* '<S35>/fault Counter3' */
  real_T count_g;                      /* '<S35>/fault Counter3' */
  real_T fail_flag_b;                  /* '<S35>/fault Counter2' */
  real_T count_f;                      /* '<S35>/fault Counter2' */
  real_T fail_flag_p;                  /* '<S35>/fault Counter1' */
  real_T count_o;                      /* '<S35>/fault Counter1' */
  real_T currtime;                     /* '<S2>/Chart3' */
  real_T orig;                         /* '<S2>/Chart3' */
  real_T currtime_g;                   /* '<S2>/Chart1' */
  real_T orig_c;                       /* '<S2>/Chart1' */
  uint32_T m_bpIndex[3];               /* '<S2>/2-D Lookup Table2' */
  uint32_T m_bpIndex_h[3];             /* '<S2>/2-D Lookup Table5' */
  uint32_T temporalCounter_i1;         /* '<S86>/Chart' */
  uint32_T temporalCounter_i1_o;       /* '<S2>/Chart3' */
  uint32_T temporalCounter_i1_d;       /* '<S2>/Chart1' */
  uint16_T temporalCounter_i1_b;       /* '<S1>/Generate SetSpd' */
  uint8_T is_active_c3_HSC_Model;      /* '<S10>/VMCP' */
  uint8_T is_Startup_Shutdown_Sequence;/* '<S10>/VMCP' */
  uint8_T is_HV_Start_Up;              /* '<S10>/VMCP' */
  uint8_T is_Brusa_Charging;           /* '<S10>/VMCP' */
  uint8_T is_Shutdown;                 /* '<S10>/VMCP' */
  uint8_T is_ON_State;                 /* '<S10>/VMCP' */
  uint8_T is_Operating_Mode;           /* '<S10>/VMCP' */
  uint8_T is_active_c13_HSC_Model;     /* '<S74>/APP Hysterisis' */
  uint8_T is_c13_HSC_Model;            /* '<S74>/APP Hysterisis' */
  uint8_T is_active_c1_HSC_Model;      /* '<S5>/Energy Management Strategy' */
  uint8_T is_SOC_Maintenance;          /* '<S5>/Energy Management Strategy' */
  uint8_T is_active_c22_HSC_Model;     /* '<S86>/Chart' */
  uint8_T is_c22_HSC_Model;            /* '<S86>/Chart' */
  uint8_T is_active_c18_HSC_Model;     /* '<S38>/Fault Counter' */
  uint8_T is_c18_HSC_Model;            /* '<S38>/Fault Counter' */
  uint8_T is_Normal;                   /* '<S38>/Fault Counter' */
  uint8_T is_active_c11_HSC_Model;     /* '<S35>/fault Counter3' */
  uint8_T is_c11_HSC_Model;            /* '<S35>/fault Counter3' */
  uint8_T is_Normal_Operation;         /* '<S35>/fault Counter3' */
  uint8_T is_active_c10_HSC_Model;     /* '<S35>/fault Counter2' */
  uint8_T is_c10_HSC_Model;            /* '<S35>/fault Counter2' */
  uint8_T is_Normal_Operation_i;       /* '<S35>/fault Counter2' */
  uint8_T is_active_c9_HSC_Model;      /* '<S35>/fault Counter1' */
  uint8_T is_c9_HSC_Model;             /* '<S35>/fault Counter1' */
  uint8_T is_Normal_Operation_g;       /* '<S35>/fault Counter1' */
  uint8_T is_active_c5_HSC_Model;      /* '<S33>/Chart' */
  uint8_T is_c5_HSC_Model;             /* '<S33>/Chart' */
  uint8_T is_active_c20_HSC_Model;     /* '<S2>/Chart3' */
  uint8_T is_c20_HSC_Model;            /* '<S2>/Chart3' */
  uint8_T is_active_c17_HSC_Model;     /* '<S2>/Chart1' */
  uint8_T is_c17_HSC_Model;            /* '<S2>/Chart1' */
  uint8_T is_active_c15_HSC_Model;     /* '<S1>/Generate SetSpd' */
  uint8_T is_c15_HSC_Model;            /* '<S1>/Generate SetSpd' */
  uint8_T is_active_c21_HSC_Model;     /* '<S1>/Chart' */
  uint8_T is_c21_HSC_Model;            /* '<S1>/Chart' */
  uint8_T is_CruiseSet;                /* '<S1>/Chart' */
  uint8_T temporalCounter_i1_on;       /* '<S1>/Chart' */
  uint8_T is_active_c4_HSC_Model;      /* '<S1>/CAVPCM_ACCMd_Request' */
  uint8_T is_c4_HSC_Model;             /* '<S1>/CAVPCM_ACCMd_Request' */
  uint8_T is_active_c2_HSC_Model;      /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_c2_HSC_Model;             /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_CruiseOn;                 /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_Turn_Cruise_Control_Off;  /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_CruiseControlAutomation;  /* '<S1>/ACC Auto Engage Controller' */
  uint8_T temporalCounter_i1_j;        /* '<S1>/ACC Auto Engage Controller' */
  uint8_T temporalCounter_i2;          /* '<S1>/ACC Auto Engage Controller' */
  boolean_T IC_FirstOutputTime;        /* '<S36>/IC' */
  boolean_T IC_FirstOutputTime_j;      /* '<S38>/IC' */
  boolean_T IC6_FirstOutputTime;       /* '<S2>/IC6' */
  boolean_T IC_FirstOutputTime_b;      /* '<S2>/IC' */
  boolean_T IC5_FirstOutputTime;       /* '<S2>/IC5' */
  boolean_T IC2_FirstOutputTime;       /* '<S2>/IC2' */
  boolean_T IC1_FirstOutputTime;       /* '<S2>/IC1' */
  boolean_T IC8_FirstOutputTime;       /* '<S2>/IC8' */
  boolean_T IC3_FirstOutputTime;       /* '<S2>/IC3' */
  boolean_T IC7_FirstOutputTime;       /* '<S2>/IC7' */
  boolean_T IC4_FirstOutputTime;       /* '<S2>/IC4' */
  boolean_T IC_FirstOutputTime_m;      /* '<S32>/IC' */
  boolean_T IC_FirstOutputTime_d;      /* '<S40>/IC' */
  uint8_T Memory1_PreviousInput_l;     /* '<S3>/Memory1' */
  DW_Faultcounter1_HSC_Model_T sf_Faultcounter1_f;/* '<S40>/Fault counter1' */
  DW_Faultcounter1_HSC_Model_T sf_Faultcounter1;/* '<S36>/Fault counter1' */
  DW_Chart_HSC_Model_T sf_Chart2;      /* '<S2>/Chart2' */
  DW_Chart_HSC_Model_T sf_Chart_g;     /* '<S2>/Chart' */
  DW_ACCext_HSC_Model_T ACCext;        /* '<S12>/ACC ext' */
} DW_HSC_Model_f_T;

/* Parameters (default storage) */
struct P_HSC_Model_T_ {
  struct_Vvva7FSOBKsqeNDpnUVqsB PedalMap_LCV;/* Variable: PedalMap_LCV
                                              * Referenced by: '<S4>/LCV Pedal Map Axle Torque Nm1'
                                              */
  real_T N[10];                        /* Variable: N
                                        * Referenced by: '<S5>/Direct Lookup Table (n-D)'
                                        */
  real_T Re;                           /* Variable: Re
                                        * Referenced by:
                                        *   '<S4>/mps to rad//s'
                                        *   '<S5>/Gain'
                                        *   '<S5>/Gain2'
                                        *   '<S68>/m//s2rad//s'
                                        *   '<S21>/Multiply'
                                        */
  real_T bppRegenLookup[23];           /* Variable: bppRegenLookup
                                        * Referenced by: '<S9>/BPP Fade Out'
                                        */
  real_T bppRegenMap[23];              /* Variable: bppRegenMap
                                        * Referenced by: '<S9>/BPP Fade Out'
                                        */
  real_T f_tbrake_n_bpt[40];           /* Variable: f_tbrake_n_bpt
                                        * Referenced by: '<S5>/1-D Lookup Table1'
                                        */
  real_T motor_speed_bkp_rpm[33];      /* Variable: motor_speed_bkp_rpm
                                        * Referenced by: '<S5>/1-D Lookup Table'
                                        */
  real_T peak_trq_curve[33];           /* Variable: peak_trq_curve
                                        * Referenced by: '<S5>/1-D Lookup Table'
                                        */
  real_T CompareToConstant3_const;   /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S17>/Constant'
                                      */
  real_T ReverseMotionCheck_const;   /* Mask Parameter: ReverseMotionCheck_const
                                      * Referenced by: '<S56>/Constant'
                                      */
  real_T ForwardMotionCheck_const;   /* Mask Parameter: ForwardMotionCheck_const
                                      * Referenced by: '<S55>/Constant'
                                      */
  real_T CheckForReverse_const;        /* Mask Parameter: CheckForReverse_const
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T FirstGearOrGreater_const;   /* Mask Parameter: FirstGearOrGreater_const
                                      * Referenced by: '<S63>/Constant'
                                      */
  real_T NinethGearOrless_const;       /* Mask Parameter: NinethGearOrless_const
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T CompareToConstant6_const;   /* Mask Parameter: CompareToConstant6_const
                                      * Referenced by: '<S48>/Constant'
                                      */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S46>/Constant'
                                      */
  real_T CompetitionRequirement500ohmspervolt_const;
                   /* Mask Parameter: CompetitionRequirement500ohmspervolt_const
                    * Referenced by: '<S44>/Constant'
                    */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S45>/Constant'
                                      */
  real_T CompareToConstant3_const_n;
                                   /* Mask Parameter: CompareToConstant3_const_n
                                    * Referenced by: '<S47>/Constant'
                                    */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S113>/Constant'
                                       */
  real_T SOCChargeLimit_const;         /* Mask Parameter: SOCChargeLimit_const
                                        * Referenced by: '<S117>/Constant'
                                        */
  real_T checksforLowSpeedCruiseChargeMode_const;
                      /* Mask Parameter: checksforLowSpeedCruiseChargeMode_const
                       * Referenced by: '<S31>/Constant'
                       */
  real_T BPPCheck_const;               /* Mask Parameter: BPPCheck_const
                                        * Referenced by: '<S41>/Constant'
                                        */
  real_T LaunchModeCheck_const;        /* Mask Parameter: LaunchModeCheck_const
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T CheckForLaunchMode_const;   /* Mask Parameter: CheckForLaunchMode_const
                                      * Referenced by: '<S94>/Constant'
                                      */
  real_T CreepTorqueThreshold_Nm_const;
                                /* Mask Parameter: CreepTorqueThreshold_Nm_const
                                 * Referenced by: '<S92>/Constant'
                                 */
  real_T ChargeSOCLimit_const;         /* Mask Parameter: ChargeSOCLimit_const
                                        * Referenced by: '<S101>/Constant'
                                        */
  real_T DischargingSOCLimit_const; /* Mask Parameter: DischargingSOCLimit_const
                                     * Referenced by: '<S104>/Constant'
                                     */
  real_T checksifregenmode_const;     /* Mask Parameter: checksifregenmode_const
                                       * Referenced by: '<S97>/Constant'
                                       */
  real_T checksiflowspeedCruiseChargingmode_const;
                     /* Mask Parameter: checksiflowspeedCruiseChargingmode_const
                      * Referenced by: '<S96>/Constant'
                      */
  real_T checksifcruisechargingmode_const;
                             /* Mask Parameter: checksifcruisechargingmode_const
                              * Referenced by: '<S95>/Constant'
                              */
  real_T CompareToConstant_const_m; /* Mask Parameter: CompareToConstant_const_m
                                     * Referenced by: '<S65>/Constant'
                                     */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S108>/Constant'
                                     */
  real_T CompareToConstant1_const_f;
                                   /* Mask Parameter: CompareToConstant1_const_f
                                    * Referenced by: '<S109>/Constant'
                                    */
  real_T CompareToConstant2_const_g;
                                   /* Mask Parameter: CompareToConstant2_const_g
                                    * Referenced by: '<S115>/Constant'
                                    */
  int16_T CheckForDrive_const;         /* Mask Parameter: CheckForDrive_const
                                        * Referenced by: '<S52>/Constant'
                                        */
  int16_T CheckForReverse_const_b;    /* Mask Parameter: CheckForReverse_const_b
                                       * Referenced by: '<S53>/Constant'
                                       */
  int16_T CheckForDrive1_const;        /* Mask Parameter: CheckForDrive1_const
                                        * Referenced by: '<S57>/Constant'
                                        */
  int16_T CheckForReverse2_const;      /* Mask Parameter: CheckForReverse2_const
                                        * Referenced by: '<S61>/Constant'
                                        */
  int16_T CheckForPark1_const;         /* Mask Parameter: CheckForPark1_const
                                        * Referenced by: '<S59>/Constant'
                                        */
  int16_T CheckForNeutral_const;       /* Mask Parameter: CheckForNeutral_const
                                        * Referenced by: '<S58>/Constant'
                                        */
  int16_T CompareToConstant1_const_c;
                                   /* Mask Parameter: CompareToConstant1_const_c
                                    * Referenced by: '<S15>/Constant'
                                    */
  int16_T CompareToConstant2_const_a;
                                   /* Mask Parameter: CompareToConstant2_const_a
                                    * Referenced by: '<S16>/Constant'
                                    */
  int16_T ChecksforDrive_const;        /* Mask Parameter: ChecksforDrive_const
                                        * Referenced by: '<S81>/Constant'
                                        */
  int16_T ChecksforShftLvrPosUnknown_const;
                             /* Mask Parameter: ChecksforShftLvrPosUnknown_const
                              * Referenced by: '<S83>/Constant'
                              */
  int16_T ChecksforShftLvrPosReverse_const;
                             /* Mask Parameter: ChecksforShftLvrPosReverse_const
                              * Referenced by: '<S82>/Constant'
                              */
  int16_T Reverse_const;               /* Mask Parameter: Reverse_const
                                        * Referenced by: '<S90>/Constant'
                                        */
  int16_T ChecksforDrive_const_p;      /* Mask Parameter: ChecksforDrive_const_p
                                        * Referenced by: '<S77>/Constant'
                                        */
  int16_T ChecksforShftLvrPosUnknown_const_a;
                           /* Mask Parameter: ChecksforShftLvrPosUnknown_const_a
                            * Referenced by: '<S79>/Constant'
                            */
  int16_T ChecksforReverse_const;      /* Mask Parameter: ChecksforReverse_const
                                        * Referenced by: '<S78>/Constant'
                                        */
  boolean_T CompareToConstant1_const_g;
                                   /* Mask Parameter: CompareToConstant1_const_g
                                    * Referenced by: '<S114>/Constant'
                                    */
  boolean_T CompareToConstant_const_p;
                                    /* Mask Parameter: CompareToConstant_const_p
                                     * Referenced by: '<S84>/Constant'
                                     */
  boolean_T CompareToConstant3_const_p;
                                   /* Mask Parameter: CompareToConstant3_const_p
                                    * Referenced by: '<S116>/Constant'
                                    */
  uint8_T CheckforkeyinRun_const;      /* Mask Parameter: CheckforkeyinRun_const
                                        * Referenced by: '<S80>/Constant'
                                        */
  uint8_T CompareToConstant_const_f;/* Mask Parameter: CompareToConstant_const_f
                                     * Referenced by: '<S75>/Constant'
                                     */
  real_T SetSpdMPH_Value;              /* Expression: 10
                                        * Referenced by: '<S1>/SetSpdMPH'
                                        */
  real_T Gain_Gain;                    /* Expression: 3.6
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Denied_Value;                 /* Expression: 0
                                        * Referenced by: '<S1>/Denied'
                                        */
  real_T Change_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/Change'
                                        */
  real_T TargetInitialPos_Value;       /* Expression: 15
                                        * Referenced by: '<S19>/TargetInitialPos'
                                        */
  real_T Constant3_Value;              /* Expression: 100
                                        * Referenced by: '<S20>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 20
                                        * Referenced by: '<S20>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: -0.2
                                        * Referenced by: '<S20>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 100
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T DiscreteMotorPowerLimit1_tableData[22];/* Expression: [0
                                                   7800
                                                   24079
                                                   44373
                                                   64324
                                                   81523
                                                   85995
                                                   84275
                                                   82211
                                                   79803
                                                   79459
                                                   78428
                                                   77740
                                                   77740
                                                   76020
                                                   76708
                                                   60197
                                                   42654
                                                   29926
                                                   18575
                                                   10319
                                                   688]
                                                 * Referenced by: '<S2>/DiscreteMotorPowerLimit1'
                                                 */
  real_T DiscreteMotorPowerLimit1_bp01Data[22];/* Expression: [0
                                                  290.9
                                                  916.4
                                                  1643.6
                                                  2385.5
                                                  3040
                                                  3461.8
                                                  3898.2
                                                  4392.7
                                                  5018.2
                                                  5861.8
                                                  6574.5
                                                  7941.8
                                                  8640
                                                  9309.1
                                                  10050.9
                                                  10181.8
                                                  10283.6
                                                  10341.8
                                                  10429.1
                                                  10458.2
                                                  10538.2]
                                                * Referenced by: '<S2>/DiscreteMotorPowerLimit1'
                                                */
  real_T ContinuousMotorPowerLimit3_tableData[22];/* Expression: [0
                                                     4138
                                                     7586
                                                     14138
                                                     20000
                                                     26552
                                                     32069
                                                     35862
                                                     39655
                                                     41034
                                                     44138
                                                     45862
                                                     44828
                                                     43793
                                                     41034
                                                     38276
                                                     34483
                                                     30690
                                                     28276
                                                     18966
                                                     10000
                                                     1379]
                                                   * Referenced by: '<S2>/ContinuousMotorPowerLimit3'
                                                   */
  real_T ContinuousMotorPowerLimit3_bp01Data[22];/* Expression: [0
                                                    363.6
                                                    829.1
                                                    1483.6
                                                    2254.5
                                                    2981.8
                                                    3709.1
                                                    4363.6
                                                    4945.5
                                                    5367.3
                                                    5905.5
                                                    6865.5
                                                    7403.6
                                                    8029.1
                                                    8625.5
                                                    9221.8
                                                    9803.6
                                                    10109.1
                                                    10370.9
                                                    10429.1
                                                    10472.7
                                                    10538.2]
                                                  * Referenced by: '<S2>/ContinuousMotorPowerLimit3'
                                                  */
  real_T DiscreteMotorPowerLimit_tableData[22];/* Expression: [0
                                                  8943
                                                  24079
                                                  44373
                                                  64324
                                                  81523
                                                  85995
                                                  84275
                                                  82211
                                                  79803
                                                  79459
                                                  78428
                                                  77740
                                                  77740
                                                  76020
                                                  76708
                                                  60197
                                                  42654
                                                  29926
                                                  18575
                                                  10319
                                                  688]
                                                * Referenced by: '<S2>/DiscreteMotorPowerLimit'
                                                */
  real_T DiscreteMotorPowerLimit_bp01Data[22];/* Expression: [0
                                                 290.9
                                                 916.4
                                                 1643.6
                                                 2385.5
                                                 3040
                                                 3461.8
                                                 3898.2
                                                 4392.7
                                                 5018.2
                                                 5861.8
                                                 6574.5
                                                 7941.8
                                                 8640
                                                 9309.1
                                                 10050.9
                                                 10181.8
                                                 10283.6
                                                 10341.8
                                                 10429.1
                                                 10458.2
                                                 10538.2]
                                               * Referenced by: '<S2>/DiscreteMotorPowerLimit'
                                               */
  real_T ContinuousMotorPowerLimit1_tableData[22];/* Expression: [0
                                                     4138
                                                     7586
                                                     14138
                                                     20000
                                                     26552
                                                     32069
                                                     35862
                                                     39655
                                                     41034
                                                     44138
                                                     45862
                                                     44828
                                                     43793
                                                     41034
                                                     38276
                                                     34483
                                                     30690
                                                     28276
                                                     18966
                                                     10000
                                                     1379]
                                                   * Referenced by: '<S2>/ContinuousMotorPowerLimit1'
                                                   */
  real_T ContinuousMotorPowerLimit1_bp01Data[22];/* Expression: [0
                                                    363.6
                                                    829.1
                                                    1483.6
                                                    2254.5
                                                    2981.8
                                                    3709.1
                                                    4363.6
                                                    4945.5
                                                    5367.3
                                                    5905.5
                                                    6865.5
                                                    7403.6
                                                    8029.1
                                                    8625.5
                                                    9221.8
                                                    9803.6
                                                    10109.1
                                                    10370.9
                                                    10429.1
                                                    10472.7
                                                    10538.2]
                                                  * Referenced by: '<S2>/ContinuousMotorPowerLimit1'
                                                  */
  real_T Constant_Value_d;             /* Expression: 20
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T kphtomph_Gain;                /* Expression: 0.621371
                                        * Referenced by: '<S2>/kph to mph'
                                        */
  real_T VehicleSpeedMultiplier_tableData[6];
                                     /* Expression: [0 0.05 0.10 0.15 0.20 0.20]
                                      * Referenced by: '<S29>/Vehicle Speed Multiplier'
                                      */
  real_T VehicleSpeedMultiplier_bp01Data[6];/* Expression: [7 10 15 20 25 30]
                                             * Referenced by: '<S29>/Vehicle Speed Multiplier'
                                             */
  real_T FinalDrive_Gain;              /* Expression: 3.8
                                        * Referenced by: '<S5>/FinalDrive'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 52
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Gain4_Gain;                   /* Expression: 30/pi
                                        * Referenced by: '<S5>/Gain4'
                                        */
  real_T uDLookupTable1_tableData[40]; /* Expression: [0 max(f_tbrake(:,2:end))]
                                        * Referenced by: '<S5>/1-D Lookup Table1'
                                        */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S69>/Gain'
                                        */
  real_T uDLookupTable1_bp01Data[1001];/* Expression: [0:0.0005:0.5]
                                        * Referenced by: '<S86>/1-D Lookup Table1'
                                        */
  real_T SOCOkay_Value;                /* Expression: 1
                                        * Referenced by: '<S91>/SOC Okay'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S86>/Switch'
                                        */
  real_T MotorEnable_Value;            /* Expression: 1
                                        * Referenced by: '<S5>/Motor Enable'
                                        */
  real_T kphtomps_Gain;                /* Expression: 0.277778
                                        * Referenced by: '<S5>/kph to mps'
                                        */
  real_T uDLookupCreepTrq_Nm_tableData[2];/* Expression: [6
                                             9]
                                           * Referenced by: '<S85>/1-D Lookup Creep Trq_Nm'
                                           */
  real_T uDLookupCreepTrq_Nm_bp01Data[2];/* Expression: [0 7]
                                          * Referenced by: '<S85>/1-D Lookup Creep Trq_Nm'
                                          */
  real_T RPM_to_rads_Gain;             /* Expression: pi/30
                                        * Referenced by: '<S69>/RPM_to_rad//s'
                                        */
  real_T preventsdividingbyzero_UpperSat;/* Expression: 3435
                                          * Referenced by: '<S69>/prevents dividing by zero'
                                          */
  real_T preventsdividingbyzero_LowerSat;/* Expression: 1
                                          * Referenced by: '<S69>/prevents dividing by zero'
                                          */
  real_T LoadTorqueNm_Value;           /* Expression: 30
                                        * Referenced by: '<S88>/Load Torque Nm'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S74>/Constant'
                                        */
  real_T uDLookupTable_tableData[5];   /* Expression: [0.55 0.60 0.70 0.85 1]
                                        * Referenced by: '<S74>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[5];    /* Expression: [10 15 20 25 30]
                                        * Referenced by: '<S74>/1-D Lookup Table'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
                                        * Referenced by: '<S74>/Switch'
                                        */
  real_T Constant1_Value_j;            /* Expression: 0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T kphtomph_Gain_c;              /* Expression: 0.621371
                                        * Referenced by: '<S9>/kph to mph'
                                        */
  real_T VehicleSpeedFadeOut_tableData[2];/* Expression: [0 1]
                                           * Referenced by: '<S9>/Vehicle Speed Fade Out'
                                           */
  real_T VehicleSpeedFadeOut_bp01Data[2];/* Expression: [10 20]
                                          * Referenced by: '<S9>/Vehicle Speed Fade Out'
                                          */
  real_T OffThrottleRegenPowerDemandW_Value;/* Expression: -5000
                                             * Referenced by: '<S9>/Off Throttle Regen Power Demand W'
                                             */
  real_T MaxBPPRegenW_Value;           /* Expression: -15000
                                        * Referenced by: '<S9>/Max BPP Regen W'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -20000
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  real_T rbcp_regen_enable_Gain;       /* Expression: 1
                                        * Referenced by: '<S9>/rbcp_regen_enable'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S66>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S98>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S99>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S102>/Constant'
                                        */
  real_T Constant_Value_o5;            /* Expression: 0
                                        * Referenced by: '<S103>/Constant'
                                        */
  real_T kmh2ms1_Gain;                 /* Expression: 0.277778
                                        * Referenced by: '<S1>/km//h2m//s1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S19>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S19>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S19>/Discrete-Time Integrator1'
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S19>/Discrete-Time Integrator1'
                                        */
  real_T ActivateMILHILVersion_Value;  /* Expression: 1
                                        * Referenced by: '<S6>/Activate MIL//HIL Version'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S19>/Switch1'
                                        */
  real_T Switch_Threshold_g;           /* Expression: 0
                                        * Referenced by: '<S19>/Switch'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S1>/Switch2'
                                        */
  real_T kphtomps_Gain_p;              /* Expression: 0.277778
                                        * Referenced by: '<S3>/kph to mps'
                                        */
  real_T IC_Value;                     /* Expression: 0
                                        * Referenced by: '<S36>/IC'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 0
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T Constant_Value_ok;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant_Value_dx;            /* Expression: 0
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T Memory7_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S33>/Memory7'
                                        */
  real_T kohmstoohms_Gain;             /* Expression: 1000
                                        * Referenced by: '<S33>/kohms to ohms'
                                        */
  real_T closedcontactorbatteryrange_UpperSat;/* Expression: 360
                                               * Referenced by: '<S33>/closed contactor battery range'
                                               */
  real_T closedcontactorbatteryrange_LowerSat;/* Expression: 200
                                               * Referenced by: '<S33>/closed contactor battery range'
                                               */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T Switch1_Threshold_j;          /* Expression: 0
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T DefaultSpacing_Value;         /* Expression: 15
                                        * Referenced by: '<S20>/Default Spacing'
                                        */
  real_T Gain1_Gain;                   /* Expression: 100
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 100
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0.621371
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Gain_Gain_iu;                 /* Expression: 2.23694
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T Constant4_Value;              /* Expression: 0.45
                                        * Referenced by: '<S20>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 4
                                        * Referenced by: '<S20>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 5
                                        * Referenced by: '<S20>/Constant6'
                                        */
  real_T Switch_Threshold_gz;          /* Expression: 20
                                        * Referenced by: '<S20>/Switch'
                                        */
  real_T Constant7_Value;              /* Expression: 2
                                        * Referenced by: '<S20>/Constant7'
                                        */
  real_T Switch_Threshold_nu;          /* Expression: 0
                                        * Referenced by: '<S2>/Switch'
                                        */
  real_T uDLookupTable_bp01Data_m[10]; /* Expression: [-30:10:60]
                                        * Referenced by: '<S2>/2-D Lookup Table'
                                        */
  real_T uDLookupTable_bp02Data[11];   /* Expression: [0:10:100]
                                        * Referenced by: '<S2>/2-D Lookup Table'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S2>/Memory'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S2>/Memory1'
                                        */
  real_T ACC_Deadzone_tableData[3];    /* Expression: [0 0 100]
                                        * Referenced by: '<S4>/ACC_Deadzone'
                                        */
  real_T ACC_Deadzone_bp01Data[3];     /* Expression: [0 4 100]
                                        * Referenced by: '<S4>/ACC_Deadzone'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S4>/Saturation2'
                                        */
  real_T kphtomps_Gain_g;              /* Expression: 1000/3600
                                        * Referenced by: '<S4>/kph to mps'
                                        */
  real_T preventszeroingPwrDmdat0kph_UpperSat;/* Expression: 250
                                               * Referenced by: '<S4>/prevents zeroing Pwr Dmd at 0 kph'
                                               */
  real_T preventszeroingPwrDmdat0kph_LowerSat;/* Expression: 1
                                               * Referenced by: '<S4>/prevents zeroing Pwr Dmd at 0 kph'
                                               */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S4>/Switch'
                                        */
  real_T SteeringWheelAngleFadeOut_tableData[4];/* Expression: [0 1 1 0]
                                                 * Referenced by: '<S9>/Steering Wheel Angle Fade Out'
                                                 */
  real_T SteeringWheelAngleFadeOut_bp01Data[4];/* Expression: [-100 -50 50 100]
                                                * Referenced by: '<S9>/Steering Wheel Angle Fade Out'
                                                */
  real_T BrusaEnable_Value;            /* Expression: 0
                                        * Referenced by: '<S10>/Brusa Enable'
                                        */
  real_T kphtomph_Gain_i;              /* Expression: 0.621371
                                        * Referenced by: '<S10>/kph to mph'
                                        */
  real_T Constant2_Value_p;            /* Expression: 0
                                        * Referenced by: '<S29>/Constant2'
                                        */
  real_T psoc_table_SOC_offset_Value;  /* Expression: 5
                                        * Referenced by: '<S29>/psoc_table_SOC_offset'
                                        */
  real_T TargetSOC_Value;              /* Expression: 70
                                        * Referenced by: '<S2>/Target SOC'
                                        */
  real_T Constant3_Value_g;            /* Expression: 100
                                        * Referenced by: '<S29>/Constant3'
                                        */
  real_T Constant4_Value_k;            /* Expression: -20000
                                        * Referenced by: '<S29>/Constant4'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<S29>/Constant1'
                                        */
  real_T Constant7_Value_b;            /* Expression: 20000
                                        * Referenced by: '<S29>/Constant7'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S73>/FixPt Constant'
                                        */
  real_T kphtomph_Gain_e;              /* Expression: 0.277778
                                        * Referenced by: '<S5>/kph to mph'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S5>/Switch'
                                        */
  real_T Saturation1_UpperSat_n;       /* Expression: inf
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: 1
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T IC6_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC6'
                                        */
  real_T uDLookupTable2_bp01Data[10];  /* Expression: [-30:10:60]
                                        * Referenced by: '<S2>/2-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp02Data[11];  /* Expression: [0:10:100]
                                        * Referenced by: '<S2>/2-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp03Data[2];   /* Expression: [10,60]
                                        * Referenced by: '<S2>/2-D Lookup Table2'
                                        */
  real_T IC_Value_h;                   /* Expression: 0
                                        * Referenced by: '<S2>/IC'
                                        */
  real_T ContinuousDischageLimit_bp01Data[10];/* Expression: [-30:10:60]
                                               * Referenced by: '<S2>/ContinuousDischageLimit'
                                               */
  real_T ContinuousDischageLimit_bp02Data[11];/* Expression: [0:10:100]
                                               * Referenced by: '<S2>/ContinuousDischageLimit'
                                               */
  real_T uDLookupTable5_bp01Data[10];  /* Expression: [-30:10:60]
                                        * Referenced by: '<S2>/2-D Lookup Table5'
                                        */
  real_T uDLookupTable5_bp02Data[11];  /* Expression: [0:10:100]
                                        * Referenced by: '<S2>/2-D Lookup Table5'
                                        */
  real_T uDLookupTable5_bp03Data[2];   /* Expression: [10,60]
                                        * Referenced by: '<S2>/2-D Lookup Table5'
                                        */
  real_T IC5_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC5'
                                        */
  real_T ContinuousMotorPowerLimit_tableData[22];/* Expression: [0
                                                    4138
                                                    7586
                                                    14138
                                                    20000
                                                    26552
                                                    32069
                                                    35862
                                                    39655
                                                    41034
                                                    44138
                                                    45862
                                                    44828
                                                    43793
                                                    41034
                                                    38276
                                                    34483
                                                    30690
                                                    28276
                                                    18966
                                                    10000
                                                    1379]
                                                  * Referenced by: '<S2>/ContinuousMotorPowerLimit'
                                                  */
  real_T ContinuousMotorPowerLimit_bp01Data[22];/* Expression: [0
                                                   363.6
                                                   829.1
                                                   1483.6
                                                   2254.5
                                                   2981.8
                                                   3709.1
                                                   4363.6
                                                   4945.5
                                                   5367.3
                                                   5905.5
                                                   6865.5
                                                   7403.6
                                                   8029.1
                                                   8625.5
                                                   9221.8
                                                   9803.6
                                                   10109.1
                                                   10370.9
                                                   10429.1
                                                   10472.7
                                                   10538.2]
                                                 * Referenced by: '<S2>/ContinuousMotorPowerLimit'
                                                 */
  real_T IC2_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC2'
                                        */
  real_T IC1_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC1'
                                        */
  real_T ContinuousMotorPowerLimit2_tableData[22];/* Expression: [0
                                                     4138
                                                     7586
                                                     14138
                                                     20000
                                                     26552
                                                     32069
                                                     35862
                                                     39655
                                                     41034
                                                     44138
                                                     45862
                                                     44828
                                                     43793
                                                     41034
                                                     38276
                                                     34483
                                                     30690
                                                     28276
                                                     18966
                                                     10000
                                                     1379]
                                                   * Referenced by: '<S2>/ContinuousMotorPowerLimit2'
                                                   */
  real_T ContinuousMotorPowerLimit2_bp01Data[22];/* Expression: [0
                                                    363.6
                                                    829.1
                                                    1483.6
                                                    2254.5
                                                    2981.8
                                                    3709.1
                                                    4363.6
                                                    4945.5
                                                    5367.3
                                                    5905.5
                                                    6865.5
                                                    7403.6
                                                    8029.1
                                                    8625.5
                                                    9221.8
                                                    9803.6
                                                    10109.1
                                                    10370.9
                                                    10429.1
                                                    10472.7
                                                    10538.2]
                                                  * Referenced by: '<S2>/ContinuousMotorPowerLimit2'
                                                  */
  real_T IC8_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC8'
                                        */
  real_T IC3_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC3'
                                        */
  real_T IC7_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC7'
                                        */
  real_T IC4_Value;                    /* Expression: 0
                                        * Referenced by: '<S2>/IC4'
                                        */
  real_T Switch1_Threshold_d;          /* Expression: 10
                                        * Referenced by: '<S2>/Switch1'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: -1
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T Switch3_Threshold;            /* Expression: 10
                                        * Referenced by: '<S2>/Switch3'
                                        */
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S3>/Memory2'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: -1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T DelayOneStep_InitialCondition;/* Expression: 0.0
                                        * Referenced by: '<S86>/Delay One Step'
                                        */
  real_T IC_Value_b;                   /* Expression: 0
                                        * Referenced by: '<S40>/IC'
                                        */
  real_T Constant_Value_ic;            /* Expression: 0
                                        * Referenced by: '<S70>/Constant'
                                        */
  real_T kphtomps1_Gain;               /* Expression: 0.277778
                                        * Referenced by: '<S5>/kph to mps1'
                                        */
  real_T preventsdividingbyzero_UpperSat_a;/* Expression: 1050
                                            * Referenced by: '<S68>/prevents dividing by zero'
                                            */
  real_T preventsdividingbyzero_LowerSat_n;/* Expression: 1
                                            * Referenced by: '<S68>/prevents dividing by zero'
                                            */
  real_T Saturation_UpperSat_a;        /* Expression: inf
                                        * Referenced by: '<S68>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S68>/Saturation'
                                        */
  real_T Gain19_Gain;                  /* Expression: 0.621371
                                        * Referenced by: '<S69>/Gain19'
                                        */
  real_T Gain19_Gain_l;                /* Expression: 0.621371
                                        * Referenced by: '<S74>/Gain19'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 0
                                        * Referenced by: '<S74>/Gain'
                                        */
  real_T VMUmajorProt_Value;           /* Expression: 4
                                        * Referenced by: '<S10>/VMUmajorProt'
                                        */
  real_T VMUminorProt_Value;           /* Expression: 1
                                        * Referenced by: '<S10>/VMUminorProt'
                                        */
  real_T Gain2_Gain_p;                 /* Expression: 1
                                        * Referenced by: '<S7>/Gain2'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S7>/Gain3'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1
                                        * Referenced by: '<S7>/Gain1'
                                        */
  uint32_T uDLookupTable_maxIndex[2];
                                   /* Computed Parameter: uDLookupTable_maxIndex
                                    * Referenced by: '<S2>/2-D Lookup Table'
                                    */
  uint32_T LCVPedalMapAxleTorqueNm1_maxIndex[2];
                        /* Computed Parameter: LCVPedalMapAxleTorqueNm1_maxIndex
                         * Referenced by: '<S4>/LCV Pedal Map Axle Torque Nm1'
                         */
  uint32_T uDLookupTable2_maxIndex[3];
                                  /* Computed Parameter: uDLookupTable2_maxIndex
                                   * Referenced by: '<S2>/2-D Lookup Table2'
                                   */
  uint32_T uDLookupTable2_dimSizes[3];
                                  /* Computed Parameter: uDLookupTable2_dimSizes
                                   * Referenced by: '<S2>/2-D Lookup Table2'
                                   */
  uint32_T ContinuousDischageLimit_maxIndex[2];
                         /* Computed Parameter: ContinuousDischageLimit_maxIndex
                          * Referenced by: '<S2>/ContinuousDischageLimit'
                          */
  uint32_T uDLookupTable5_maxIndex[3];
                                  /* Computed Parameter: uDLookupTable5_maxIndex
                                   * Referenced by: '<S2>/2-D Lookup Table5'
                                   */
  uint32_T uDLookupTable5_dimSizes[3];
                                  /* Computed Parameter: uDLookupTable5_dimSizes
                                   * Referenced by: '<S2>/2-D Lookup Table5'
                                   */
  boolean_T Constant_Value_k;          /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S100>/Constant'
                                        */
  boolean_T IC_Value_m;                /* Computed Parameter: IC_Value_m
                                        * Referenced by: '<S38>/IC'
                                        */
  boolean_T IC_Value_c;                /* Computed Parameter: IC_Value_c
                                        * Referenced by: '<S32>/IC'
                                        */
  uint8_T Memory1_InitialCondition_d;
                               /* Computed Parameter: Memory1_InitialCondition_d
                                * Referenced by: '<S3>/Memory1'
                                */
  uint8_T Gain_Gain_g;                 /* Computed Parameter: Gain_Gain_g
                                        * Referenced by: '<S32>/Gain'
                                        */
  P_ACCext_HSC_Model_T ACCext;         /* '<S12>/ACC ext' */
};

/* Real-time Model Data Structure */
struct tag_RTM_HSC_Model_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[737];
    int32_T* vardimsAddress[737];
    RTWLoggingFcnPtr loggingPtrs[737];
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    int_T mdlref_GlobalTID[2];
    struct {
      uint32_T TID0_1;
    } RateInteraction;
  } Timing;
};

typedef struct {
  B_HSC_Model_c_T rtb;
  DW_HSC_Model_f_T rtdw;
  RT_MODEL_HSC_Model_T rtm;
} MdlrefDW_HSC_Model_T;

/* Model block global parameters (default storage) */
extern real_T rtP_ContinuousBatteryCharge[110];/* Variable: ContinuousBatteryCharge
                                                * Referenced by: '<S2>/2-D Lookup Table'
                                                */
extern real_T rtP_ContinuousBatteryDischarge[110];/* Variable: ContinuousBatteryDischarge
                                                   * Referenced by: '<S2>/ContinuousDischageLimit'
                                                   */
extern real_T rtP_InterpBatteryCharge[220];/* Variable: InterpBatteryCharge
                                            * Referenced by: '<S2>/2-D Lookup Table2'
                                            */
extern real_T rtP_InterpBatteryDischarge[220];/* Variable: InterpBatteryDischarge
                                               * Referenced by: '<S2>/2-D Lookup Table5'
                                               */
extern real_T rtP_New_Mass_Toque_Map[289];/* Variable: New_Mass_Toque_Map
                                           * Referenced by: '<S4>/LCV Pedal Map Axle Torque Nm1'
                                           */
extern real_T rtP_Reverse_APP[850];    /* Variable: Reverse_APP
                                        * Referenced by: '<S21>/2-D Lookup Table'
                                        */
extern real_T rtP_tandivide[1001];     /* Variable: tandivide
                                        * Referenced by: '<S86>/1-D Lookup Table1'
                                        */

/* Model reference registration function */
extern void HSC_Model_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1,
  RT_MODEL_HSC_Model_T *const HSC_Model_M, B_HSC_Model_c_T *localB,
  DW_HSC_Model_f_T *localDW, rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  HSC_Model_GetCAPIStaticMap(void);
extern void HSC_Model_Chart_Init(DW_Chart_HSC_Model_T *localDW);
extern void HSC_Model_Chart_Reset(DW_Chart_HSC_Model_T *localDW);
extern void HSC_Model_Chart(real_T rtu_CurrentDemanded, real_T
  rtu_ContinuousCurrentLimit, B_Chart_HSC_Model_T *localB, DW_Chart_HSC_Model_T *
  localDW);
extern void HSC_Model_Faultcounter1_Init(B_Faultcounter1_HSC_Model_T *localB,
  DW_Faultcounter1_HSC_Model_T *localDW);
extern void HSC_Model_Faultcounter1_Reset(B_Faultcounter1_HSC_Model_T *localB,
  DW_Faultcounter1_HSC_Model_T *localDW);
extern void HSC_Model_Faultcounter1(real_T rtu_err, uint8_T rtu_key_status,
  B_Faultcounter1_HSC_Model_T *localB, DW_Faultcounter1_HSC_Model_T *localDW);
extern void HSC_Model_Init(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW);
extern void HSC_Model_Reset(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW);
extern void HSC_ModelTID0(RT_MODEL_HSC_Model_T * const HSC_Model_M, const real_T
  *rtu_In_ABSAtv, const real_T *rtu_In_APP, const real_T *rtu_In_APPv, const
  real_T *rtu_In_BPP, const real_T *rtu_In_EngRunAtv, const real_T
  *rtu_In_EngSpd, const real_T *rtu_In_Gear, const real_T *rtu_In_HdSt, const
  real_T *rtu_In_KeySt, const real_T *rtu_In_gfd, const real_T
  *rtu_In_McuThermal, const real_T *rtu_In_MotorSpd, const real_T
  *rtu_In_MotorTrqEst, const real_T *rtu_In_SOC, const real_T *rtu_In_StateMcu,
  const real_T *rtu_In_StrWhAng, const real_T *rtu_In_StrWhAngV, const real_T
  *rtu_In_TrnsShftPos, const real_T *rtu_In_VehSpd, const real_T
  *rtu_In_battTcoolant, const real_T *rtu_In_bcmready, const real_T
  *rtu_In_cpwrcmd, const real_T *rtu_In_cpwrmon, const real_T *rtu_In_hvilmon,
  const real_T *rtu_In_ibat, const real_T *rtu_In_maincstat, const real_T
  *rtu_In_vbat, const real_T *rtu_In_vehmon, const real_T *rtu_In_ICESwitch,
  const real_T *rtu_In_RegenSwitch, const real_T *rtu_In_CAVsCrsLmtrSwStat,
  const real_T *rtu_In_CAVsCrsCntrlSwStOnSwAct, const real_T
  *rtu_In_CAVsCrsCntrlStSetSwAct, const real_T *rtu_In_Long_Switch, const real_T
  *rtu_In_TCSysAtv, const real_T *rtu_In_MotorRC, const real_T
  *rtu_In_DrvIntndAxlTrqMax, const real_T *rtu_In_DrvIntndAxlTrqMin, const
  real_T *rtu_In_TrqReqStat, const real_T *rtu_In_xdotref, const real_T
  *rtu_In_ACCBrakeTime, const real_T *rtu_In_CAVtrgVel, const real_T
  *rtu_In_CAVtrgDist, const real_T *rtu_In_grade, const real_T
  *rtu_In_Tanh_Exponent, const real_T *rtu_In_Tanh_multiplier, const boolean_T
  *rtu_In_dist_is_valid, const boolean_T *rtu_In_TrafficLightPresent, const
  real_T *rtu_In_DistanceToIntersection, const real_T *rtu_In_TimeToNextState,
  const real_T *rtu_In_CurrentState, const real_T *rtu_In_Decel_Division_Value,
  const real_T *rtu_In_bcm_coolan_temp_C, const real_T *rtu_In_DistanceObjValid,
  const real_T *rtu_In_TimeGap, HSCOutputs *rty_Out, B_HSC_Model_c_T *localB,
  DW_HSC_Model_f_T *localDW);
extern void HSC_ModelTID1(B_HSC_Model_c_T *localB, DW_HSC_Model_f_T *localDW);

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
 * '<Root>' : 'HSC_Model'
 * '<S1>'   : 'HSC_Model/ACC Controller '
 * '<S2>'   : 'HSC_Model/Battery_Management_Control_Process'
 * '<S3>'   : 'HSC_Model/Diagnostics'
 * '<S4>'   : 'HSC_Model/Driver_Arbitration'
 * '<S5>'   : 'HSC_Model/Energy_Management_Control_Process'
 * '<S6>'   : 'HSC_Model/Input_Wrapper'
 * '<S7>'   : 'HSC_Model/Output_Wrapper'
 * '<S8>'   : 'HSC_Model/RTI Data'
 * '<S9>'   : 'HSC_Model/Regenerative_Braking_Control_Process'
 * '<S10>'  : 'HSC_Model/Vehicle_Mode_Control_Process'
 * '<S11>'  : 'HSC_Model/ACC Controller /ACC Auto Engage Controller'
 * '<S12>'  : 'HSC_Model/ACC Controller /ACC Classical'
 * '<S13>'  : 'HSC_Model/ACC Controller /CAVPCM_ACCMd_Request'
 * '<S14>'  : 'HSC_Model/ACC Controller /Chart'
 * '<S15>'  : 'HSC_Model/ACC Controller /Compare To Constant1'
 * '<S16>'  : 'HSC_Model/ACC Controller /Compare To Constant2'
 * '<S17>'  : 'HSC_Model/ACC Controller /Compare To Constant3'
 * '<S18>'  : 'HSC_Model/ACC Controller /Generate SetSpd'
 * '<S19>'  : 'HSC_Model/ACC Controller /HostPerceptionModel'
 * '<S20>'  : 'HSC_Model/ACC Controller /Subsystem'
 * '<S21>'  : 'HSC_Model/ACC Controller /ACC Classical/ACC ext'
 * '<S22>'  : 'HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative'
 * '<S23>'  : 'HSC_Model/ACC Controller /ACC Classical/ACC ext/Discrete Derivative1'
 * '<S24>'  : 'HSC_Model/ACC Controller /ACC Classical/ACC ext/Error Metrics'
 * '<S25>'  : 'HSC_Model/Battery_Management_Control_Process/Chart'
 * '<S26>'  : 'HSC_Model/Battery_Management_Control_Process/Chart1'
 * '<S27>'  : 'HSC_Model/Battery_Management_Control_Process/Chart2'
 * '<S28>'  : 'HSC_Model/Battery_Management_Control_Process/Chart3'
 * '<S29>'  : 'HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power'
 * '<S30>'  : 'HSC_Model/Battery_Management_Control_Process/Saturation Dynamic'
 * '<S31>'  : 'HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/checks for Low Speed Cruise Charge Mode'
 * '<S32>'  : 'HSC_Model/Diagnostics/Brake Torque Cancelation'
 * '<S33>'  : 'HSC_Model/Diagnostics/Ground Fault Detection'
 * '<S34>'  : 'HSC_Model/Diagnostics/Motor Control Fault'
 * '<S35>'  : 'HSC_Model/Diagnostics/Overheat'
 * '<S36>'  : 'HSC_Model/Diagnostics/Powertrain direction fault'
 * '<S37>'  : 'HSC_Model/Diagnostics/Protect HV'
 * '<S38>'  : 'HSC_Model/Diagnostics/Shift Validity'
 * '<S39>'  : 'HSC_Model/Diagnostics/ZeroPwrTmTrq'
 * '<S40>'  : 'HSC_Model/Diagnostics/motor_torque direction fault'
 * '<S41>'  : 'HSC_Model/Diagnostics/Brake Torque Cancelation/BPPCheck'
 * '<S42>'  : 'HSC_Model/Diagnostics/Brake Torque Cancelation/Launch Mode Check'
 * '<S43>'  : 'HSC_Model/Diagnostics/Ground Fault Detection/Chart'
 * '<S44>'  : 'HSC_Model/Diagnostics/Ground Fault Detection/Competition Requirement 500 ohms per volt'
 * '<S45>'  : 'HSC_Model/Diagnostics/Overheat/Compare To Constant1'
 * '<S46>'  : 'HSC_Model/Diagnostics/Overheat/Compare To Constant2'
 * '<S47>'  : 'HSC_Model/Diagnostics/Overheat/Compare To Constant3'
 * '<S48>'  : 'HSC_Model/Diagnostics/Overheat/Compare To Constant6'
 * '<S49>'  : 'HSC_Model/Diagnostics/Overheat/fault Counter1'
 * '<S50>'  : 'HSC_Model/Diagnostics/Overheat/fault Counter2'
 * '<S51>'  : 'HSC_Model/Diagnostics/Overheat/fault Counter3'
 * '<S52>'  : 'HSC_Model/Diagnostics/Powertrain direction fault/CheckForDrive'
 * '<S53>'  : 'HSC_Model/Diagnostics/Powertrain direction fault/CheckForReverse'
 * '<S54>'  : 'HSC_Model/Diagnostics/Powertrain direction fault/Fault counter1'
 * '<S55>'  : 'HSC_Model/Diagnostics/Powertrain direction fault/ForwardMotionCheck'
 * '<S56>'  : 'HSC_Model/Diagnostics/Powertrain direction fault/ReverseMotionCheck'
 * '<S57>'  : 'HSC_Model/Diagnostics/Shift Validity/CheckForDrive1'
 * '<S58>'  : 'HSC_Model/Diagnostics/Shift Validity/CheckForNeutral'
 * '<S59>'  : 'HSC_Model/Diagnostics/Shift Validity/CheckForPark1'
 * '<S60>'  : 'HSC_Model/Diagnostics/Shift Validity/CheckForReverse '
 * '<S61>'  : 'HSC_Model/Diagnostics/Shift Validity/CheckForReverse2'
 * '<S62>'  : 'HSC_Model/Diagnostics/Shift Validity/Fault Counter'
 * '<S63>'  : 'HSC_Model/Diagnostics/Shift Validity/FirstGearOrGreater'
 * '<S64>'  : 'HSC_Model/Diagnostics/Shift Validity/NinethGearOrless'
 * '<S65>'  : 'HSC_Model/Diagnostics/motor_torque direction fault/Compare To Constant'
 * '<S66>'  : 'HSC_Model/Diagnostics/motor_torque direction fault/Compare To Zero'
 * '<S67>'  : 'HSC_Model/Diagnostics/motor_torque direction fault/Fault counter1'
 * '<S68>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque'
 * '<S69>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque'
 * '<S70>'  : 'HSC_Model/Energy_Management_Control_Process/Choosing the Engine source'
 * '<S71>'  : 'HSC_Model/Energy_Management_Control_Process/Choosing the Motor source'
 * '<S72>'  : 'HSC_Model/Energy_Management_Control_Process/Energy Management Strategy'
 * '<S73>'  : 'HSC_Model/Energy_Management_Control_Process/Increment Stored Integer'
 * '<S74>'  : 'HSC_Model/Energy_Management_Control_Process/MoreMotorReq'
 * '<S75>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Compare To Constant'
 * '<S76>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check'
 * '<S77>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Drive'
 * '<S78>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Reverse'
 * '<S79>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for ShftLvrPos Unknown'
 * '<S80>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Check for key in Run'
 * '<S81>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for Drive'
 * '<S82>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Reverse'
 * '<S83>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Unknown'
 * '<S84>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Compare To Constant'
 * '<S85>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque'
 * '<S86>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter'
 * '<S87>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits'
 * '<S88>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode'
 * '<S89>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation'
 * '<S90>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Reverse'
 * '<S91>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation'
 * '<S92>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Creep Torque Threshold_Nm'
 * '<S93>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart'
 * '<S94>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Check For  Launch Mode'
 * '<S95>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if cruise charging mode'
 * '<S96>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if low speed Cruise Charging mode'
 * '<S97>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if regen mode'
 * '<S98>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks negative torque'
 * '<S99>'  : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks positive torque'
 * '<S100>' : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks regen switch is on'
 * '<S101>' : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charge SOC Limit'
 * '<S102>' : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charging Motor Torque'
 * '<S103>' : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging Motor Torque'
 * '<S104>' : 'HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging SOC Limit'
 * '<S105>' : 'HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic'
 * '<S106>' : 'HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1'
 * '<S107>' : 'HSC_Model/Energy_Management_Control_Process/MoreMotorReq/APP Hysterisis'
 * '<S108>' : 'HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Compare To Constant'
 * '<S109>' : 'HSC_Model/Energy_Management_Control_Process/MoreMotorReq/Compare To Constant1'
 * '<S110>' : 'HSC_Model/RTI Data/RTI Data Store'
 * '<S111>' : 'HSC_Model/RTI Data/RTI Data Store/RTI Data Store'
 * '<S112>' : 'HSC_Model/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S113>' : 'HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant'
 * '<S114>' : 'HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant1'
 * '<S115>' : 'HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant2'
 * '<S116>' : 'HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant3'
 * '<S117>' : 'HSC_Model/Regenerative_Braking_Control_Process/SOC Charge Limit'
 * '<S118>' : 'HSC_Model/Vehicle_Mode_Control_Process/VMCP'
 */
#endif                                 /* RTW_HEADER_HSC_Model_h_ */

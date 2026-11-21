/*
 * Code generation for system model 'PID_HSC_Model'
 * For more details, see corresponding source file PID_HSC_Model.c
 *
 */

#ifndef RTW_HEADER_PID_HSC_Model_h_
#define RTW_HEADER_PID_HSC_Model_h_
#include <string.h>
#include <math.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef PID_HSC_Model_COMMON_INCLUDES_
#define PID_HSC_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* PID_HSC_Model_COMMON_INCLUDES_ */

#include "PID_HSC_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "PID_HSC_Model_ACCLookup.h"
#include "rtsplntypes.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S2>/Chart' */
typedef struct {
  real_T timer;                        /* '<S2>/Chart' */
} B_Chart_PID_HSC_Model_T;

/* Block states (default storage) for system '<S2>/Chart' */
typedef struct {
  real_T currtime;                     /* '<S2>/Chart' */
  real_T orig;                         /* '<S2>/Chart' */
  uint32_T temporalCounter_i1;         /* '<S2>/Chart' */
  uint8_T is_active_c16_PID_HSC_Model;     /* '<S2>/Chart' */
  uint8_T is_c16_PID_HSC_Model;            /* '<S2>/Chart' */
} DW_Chart_PID_HSC_Model_T;

/* Block signals for system '<S113>/ABSRegenOff' */
typedef struct {
  boolean_T Fault_Out;                 /* '<S113>/ABSRegenOff' */
} B_ABSRegenOff_PID_HSC_Model_T;

/* Block states (default storage) for system '<S113>/ABSRegenOff' */
typedef struct {
  real_T error_time;                   /* '<S113>/ABSRegenOff' */
  real_T t;                            /* '<S113>/ABSRegenOff' */
  real_T t1;                           /* '<S113>/ABSRegenOff' */
  uint32_T temporalCounter_i1;         /* '<S113>/ABSRegenOff' */
  uint8_T is_active_c31_PID_HSC_Model;     /* '<S113>/ABSRegenOff' */
  uint8_T is_c31_PID_HSC_Model;            /* '<S113>/ABSRegenOff' */
  uint8_T is_Check;                    /* '<S113>/ABSRegenOff' */
} DW_ABSRegenOff_PID_HSC_Model_T;

/* Block signals for system '<S118>/OverVoltage' */
typedef struct {
  boolean_T Fault_Out;                 /* '<S118>/OverVoltage' */
} B_OverVoltage_PID_HSC_Model_T;

/* Block states (default storage) for system '<S118>/OverVoltage' */
typedef struct {
  real_T error_time;                   /* '<S118>/OverVoltage' */
  real_T t;                            /* '<S118>/OverVoltage' */
  real_T t1;                           /* '<S118>/OverVoltage' */
  uint32_T temporalCounter_i1;         /* '<S118>/OverVoltage' */
  uint8_T is_active_c27_PID_HSC_Model;     /* '<S118>/OverVoltage' */
  uint8_T is_c27_PID_HSC_Model;            /* '<S118>/OverVoltage' */
  uint8_T is_Check;                    /* '<S118>/OverVoltage' */
} DW_OverVoltage_PID_HSC_Model_T;

/* Block signals for system '<S121>/Fault counter1' */
typedef struct {
  real_T fail_flag;                    /* '<S121>/Fault counter1' */
} B_Faultcounter1_PID_HSC_Model_T;

/* Block states (default storage) for system '<S121>/Fault counter1' */
typedef struct {
  real_T count;                        /* '<S121>/Fault counter1' */
  real_T flag;                         /* '<S121>/Fault counter1' */
  uint8_T is_active_c24_PID_HSC_Model;     /* '<S121>/Fault counter1' */
  uint8_T is_c24_PID_HSC_Model;            /* '<S121>/Fault counter1' */
  uint8_T is_Normal;                   /* '<S121>/Fault counter1' */
} DW_Faultcounter1_PID_HSC_Model_T;

/* Block signals for model 'PID_HSC_Model' */
typedef struct {
  real_T CastToBoolean25;              /* '<S6>/Cast To Boolean25' */
  real_T CastToBoolean40;              /* '<S6>/Cast To Boolean40' */
  real_T VehSpdms;                     /* '<S1>/km//h2m//s1' */
  real_T EgoSpd;                       /* '<S20>/Data Type Conversion' */
  real_T TargetPos;                    /* '<S20>/Discrete-Time Integrator' */
  real_T EgoPos;                       /* '<S20>/Discrete-Time Integrator1' */
  real_T Add;                          /* '<S20>/Add' */
  real_T Switch1;                      /* '<S20>/Switch1' */
  real_T xdotref;                      /* '<S6>/Cast To Boolean10' */
  real_T Switch;                       /* '<S20>/Switch' */
  real_T Switch2;                      /* '<S1>/Switch2' */
  real_T VehSpd_ms;                    /* '<S3>/kph to mps' */
  real_T DataTypeConversion;           /* '<S121>/Data Type Conversion' */
  real_T IC;                           /* '<S121>/IC' */
  real_T Gain;                         /* '<S121>/Gain' */
  real_T DataTypeConversion1;          /* '<S123>/Data Type Conversion1' */
  real_T CastToBoolean32;              /* '<S6>/Cast To Boolean32' */
  real_T DataTypeConversion7;          /* '<S120>/Data Type Conversion7' */
  real_T CastToBoolean48;              /* '<S6>/Cast To Boolean48' */
  real_T CastToBoolean46;              /* '<S6>/Cast To Boolean46' */
  real_T CastToBoolean35;              /* '<S6>/Cast To Boolean35' */
  real_T APP;                          /* '<S6>/Cast To Boolean23' */
  real_T CastToBoolean41;              /* '<S6>/Cast To Boolean41' */
  real_T DataTypeConversion2;          /* '<S120>/Data Type Conversion2' */
  real_T Memory7;                      /* '<S116>/Memory7' */
  real_T CastToBoolean31;              /* '<S6>/Cast To Boolean31' */
  real_T kohmstoohms;                  /* '<S116>/kohms to ohms' */
  real_T closedcontactorbatteryrange;
                                   /* '<S116>/closed contactor battery range' */
  real_T Divide;                       /* '<S116>/Divide' */
  real_T DataTypeConversion1_k;        /* '<S120>/Data Type Conversion1' */
  real_T DataTypeConversion3;          /* '<S120>/Data Type Conversion3' */
  real_T kphtomph;                     /* '<S10>/kph to mph' */
  real_T gear;                         /* '<S6>/Cast To Boolean28' */
  real_T CAVPCM_ACCMdActive;           /* '<S1>/Switch1' */
  real_T grade;                        /* '<S6>/Cast To Boolean15' */
  real_T ActDist;                      /* '<S21>/Product' */
  real_T Gain_h;                       /* '<S21>/Gain' */
  real_T SafeDist;                     /* '<S21>/1-D Lookup Table' */
  real_T DelayOneStep1;                /* '<S21>/Delay One Step1' */
  real_T DelayOneStep;                 /* '<S21>/Delay One Step' */
  real_T DistanceKeepTrack;            /* '<S21>/Discrete-Time Integrator3' */
  real_T Distance;                     /* '<S21>/Minus2' */
  real_T DistErr;                      /* '<S21>/Sum1' */
  real_T Minus;                        /* '<S21>/Minus' */
  real_T LeadVehicleSpeedmph;          /* '<S21>/Gain1' */
  real_T DistanceValidity;             /* '<S21>/Cast To Double' */
  real_T TimeToIntersection;           /* '<S6>/Cast To Double4' */
  real_T CurrentState;                 /* '<S6>/Cast To Double2' */
  real_T SafeDist2;                    /* '<S21>/Sum2' */
  real_T Switch11;                     /* '<S21>/Switch11' */
  real_T Clock;                        /* '<S1>/Clock' */
  real_T Switch11_e;                   /* '<S1>/Switch11' */
  real_T Switch_l;                     /* '<S2>/Switch' */
  real_T ContinuousCurrentLimit;       /* '<S2>/2-D Lookup Table' */
  real_T Memory;                       /* '<S2>/Memory' */
  real_T Memory1;                      /* '<S2>/Memory1' */
  real_T Switch_o;                     /* '<S200>/Switch' */
  real_T Switch2_c;                    /* '<S200>/Switch2' */
  real_T Product;                      /* '<S4>/Product' */
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
  real_T rbcp_brake_power_demand_W;    /* '<S9>/Multiport Switch' */
  real_T total;                        /* '<S4>/Sum' */
  real_T Switch_jq;                    /* '<S110>/Switch' */
  real_T MatrixConcatenate1[5];        /* '<S110>/Matrix Concatenate1' */
  real_T MatrixConcatenate[5];         /* '<S110>/Matrix Concatenate' */
  real_T DynamicPSOCTable1;            /* '<S110>/Dynamic PSOC Table1' */
  real_T Product_m;                    /* '<S110>/Product' */
  real_T Switch_lp;                    /* '<S111>/Switch' */
  real_T Switch2_p;                    /* '<S111>/Switch2' */
  real_T FixPtGatewayIn;               /* '<S167>/FixPt Gateway In' */
  real_T FixPtSum1;                    /* '<S167>/FixPt Sum1' */
  real_T kphtomph_c;                   /* '<S5>/kph to mph' */
  real_T Switch_i;                     /* '<S5>/Switch' */
  real_T Saturation1;                  /* '<S5>/Saturation1' */
  real_T Gain_m;                       /* '<S5>/Gain' */
  real_T Product_d;                    /* '<S5>/Product' */
  real_T ACC_Correc_Mot;               /* '<S165>/Switch4' */
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
  real_T kphtomps_m;                   /* '<S5>/kph to mps' */
  real_T Switch_g;                     /* '<S199>/Switch' */
  real_T Switch2_cx;                   /* '<S199>/Switch2' */
  real_T ACC_Correc_Eng;               /* '<S164>/Switch3' */
  real_T kphtomps1;                    /* '<S5>/kph to mps1' */
  real_T whlspd;                       /* '<S162>/m//s2rad//s' */
  real_T preventsdividingbyzero;       /* '<S162>/prevents dividing by zero' */
  real_T Divide_g;                     /* '<S162>/Divide' */
  real_T Product_f;                    /* '<S162>/Product' */
  real_T Switch2_d;                    /* '<S162>/Switch2' */
  real_T Saturation;                   /* '<S162>/Saturation' */
  real_T Switch1_i;                    /* '<S182>/Switch1' */
  real_T Abs1;                         /* '<S179>/Abs1' */
  real_T Switch2_a;                    /* '<S179>/Switch2' */
  real_T Gain1;                        /* '<S5>/Gain1' */
  real_T Switch_gc;                    /* '<S181>/Switch' */
  real_T Switch2_m;                    /* '<S181>/Switch2' */
  real_T DelayOneStep_b;               /* '<S180>/Delay One Step' */
  real_T Switch_oa;                    /* '<S180>/Switch' */
  real_T Switch_e;                     /* '<S163>/Switch' */
  real_T motor_trq_demand_Nm;          /* '<S163>/Switch1' */
  real_T Product2;                     /* '<S125>/Product2' */
  real_T Abs1_d;                       /* '<S125>/Abs1' */
  real_T Abs2;                         /* '<S125>/Abs2' */
  real_T Add_m;                        /* '<S125>/Add' */
  real_T Abs3;                         /* '<S125>/Abs3' */
  real_T DataTypeConversion4;          /* '<S125>/Data Type Conversion4' */
  real_T IC_d;                         /* '<S125>/IC' */
  real_T eng_mot;                      /* '<S5>/Add1' */
  real_T diff;                         /* '<S5>/Add2' */
  real_T diff_d;                       /* '<S5>/Add6' */
  real_T totaloutputpower;             /* '<S5>/Add' */
  real_T Abs;                          /* '<S5>/Abs' */
  real_T diff_ds;                      /* '<S5>/Add7' */
  real_T Abs1_a;                       /* '<S5>/Abs1' */
  real_T Tanh_Exponent;                /* '<S6>/Cast To Double' */
  real_T Product1;                     /* '<S180>/Product1' */
  real_T Tanh;                         /* '<S180>/Tanh' */
  real_T Tanh_multiplier;              /* '<S6>/Cast To Double1' */
  real_T Product_n;                    /* '<S180>/Product' */
  real_T Abs_g;                        /* '<S180>/Abs' */
  real_T VehSpdMPH;                    /* '<S163>/Gain19' */
  real_T ACCBrakeTime;                 /* '<S6>/Cast To Boolean11' */
  real_T DrvIntndAxlTrqMin;            /* '<S6>/Cast To Boolean8' */
  real_T DistanceToIntersection;       /* '<S6>/Cast To Double3' */
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
  real_T rbcp_brake_motor_fade_out;    /* '<S9>/Vehicle Speed Fade Out' */
  real_T BPPFadeOut;                   /* '<S9>/BPP Fade Out' */
  real_T Product3;                     /* '<S9>/Product3' */
  real_T Add_k;                        /* '<S9>/Add' */
  real_T RegenPowerW;                  /* '<S9>/Product1' */
  real_T Saturation1_g;                /* '<S9>/Saturation1' */
  real_T rbcp_regen_enable;            /* '<S9>/rbcp_regen_enable' */
  real_T DrvIntndAxlTrqMax;            /* '<S6>/Cast To Boolean7' */
  real_T Gain2;                        /* '<S5>/Gain2' */
  real_T DirectLookupTablenD;          /* '<S5>/Direct Lookup Table (n-D)' */
  real_T FinalDrive;                   /* '<S5>/FinalDrive' */
  real_T Product1_m;                   /* '<S5>/Product1' */
  real_T Saturation_h;                 /* '<S5>/Saturation' */
  real_T Gain4;                        /* '<S5>/Gain4' */
  real_T uDLookupTable1;               /* '<S5>/1-D Lookup Table1' */
  real_T Engine_Axle_Torque;           /* '<S5>/Product2' */
  real_T emcp_p_eng_des_W;             /* '<S5>/Energy Management Strategy' */
  real_T emcp_ptot_W;                  /* '<S5>/Energy Management Strategy' */
  real_T emcp_p_elec_des_W;            /* '<S5>/Energy Management Strategy' */
  real_T emcp_mode;                    /* '<S5>/Energy Management Strategy' */
  real_T MultiportSwitch;              /* '<S185>/Multiport Switch' */
  real_T Product3_f;                   /* '<S163>/Product3' */
  real_T Gain_ha;                      /* '<S163>/Gain' */
  real_T RPM_to_rads;                  /* '<S163>/RPM_to_rad//s' */
  real_T preventsdividingbyzero_h;     /* '<S163>/prevents dividing by zero' */
  real_T Switch2_py;                   /* '<S163>/Switch2' */
  real_T Add_g;                        /* '<S163>/Add' */
  real_T Motor_Trq_Req_Raw_Nm;         /* '<S163>/Divide1' */
  real_T Gain1_l;                      /* '<S163>/Gain1' */
  real_T PowerLossBetweenShifts;       /* '<S163>/Product' */
  real_T uDLookupTable1_g;             /* '<S180>/1-D Lookup Table1' */
  real_T Product2_i;                   /* '<S180>/Product2' */
  real_T TorqueOut;                    /* '<S180>/Chart' */
  real_T DeltaTime;                    /* '<S180>/Chart' */
  real_T TorqueReversed;               /* '<S180>/Chart' */
  real_T uDLookupCreepTrq_Nm;          /* '<S179>/1-D Lookup Creep Trq_Nm' */
  real_T TorqueLoss;                   /* '<S163>/Chart' */
  real_T MinMax1;                      /* '<S162>/MinMax1' */
  real_T Fault;                        /* '<S120>/fault Counter3' */
  real_T Fault_i;                      /* '<S120>/fault Counter2' */
  real_T Fault_d;                      /* '<S120>/fault Counter1' */
  real_T GFDLightOn;                   /* '<S116>/Chart' */
  real_T bcm_coolan_temp_C;            /* '<S6>/Cast To Double6' */
  real_T DiscreteMotorPowerLimit1;     /* '<S2>/DiscreteMotorPowerLimit1' */
  real_T ContinuousMotorPowerLimit3;   /* '<S2>/ContinuousMotorPowerLimit3' */
  real_T DiscreteMotorPowerLimit;      /* '<S2>/DiscreteMotorPowerLimit' */
  real_T ContinuousMotorPowerLimit1;   /* '<S2>/ContinuousMotorPowerLimit1' */
  real_T kphtomph_f;                   /* '<S2>/kph to mph' */
  real_T VehicleSpeedMultiplier;       /* '<S110>/Vehicle Speed Multiplier' */
  real_T timer;                        /* '<S2>/Chart3' */
  real_T timer_c;                      /* '<S2>/Chart1' */
  real_T Gain_b;                       /* '<S1>/Gain' */
  real_T CastToBoolean27;              /* '<S6>/Cast To Boolean27' */
  real_T Switch_ja;                    /* '<S1>/Switch' */
  real_T Switch12;                     /* '<S1>/Switch12' */
  real_T Switch10;                     /* '<S1>/Switch10' */
  real_T Switch9;                      /* '<S1>/Switch9' */
  real_T Switch8;                      /* '<S1>/Switch8' */
  real_T Switch7;                      /* '<S1>/Switch7' */
  real_T Switch6;                      /* '<S1>/Switch6' */
  real_T Switch5;                      /* '<S1>/Switch5' */
  real_T Switch4;                      /* '<S1>/Switch4' */
  real_T Switch3_b;                    /* '<S1>/Switch3' */
  real_T LastSpeed;                    /* '<S21>/Chart2' */
  real_T LastDistance;                 /* '<S21>/Chart2' */
  real_T KeepTrackValidity;            /* '<S21>/Chart2' */
  real_T CAVtrgVel;                    /* '<S6>/Cast To Boolean13' */
  real_T Add1;                         /* '<S20>/Add1' */
  real_T CAVtrgDist;                   /* '<S6>/Cast To Boolean14' */
  real_T ACCSetSpd;                    /* '<S1>/Generate SetSpd' */
  real_T AutoMdSpdLmtStat;             /* '<S1>/Chart' */
  real_T ACCAct370;                    /* '<S1>/Chart' */
  real_T AdapCrsCntVDA;                /* '<S1>/Chart' */
  real_T ACCDrvrSeltdSpd;              /* '<S1>/Chart' */
  real_T CAVACCRequest;                /* '<S1>/CAVPCM_ACCMd_Request' */
  real_T CrsSpdLmtrSwStat;             /* '<S1>/ACC Auto Engage Controller' */
  real_T ACCATC_ACCAct;                /* '<S1>/ACC Auto Engage Controller' */
  real_T Track;                        /* '<S1>/ACC Auto Engage Controller' */
  int16_T lvrpos;                      /* '<S6>/Cast To Boolean39' */
  int16_T CastToBoolean3;              /* '<S6>/Cast To Boolean3' */
  uint8_T CastToBoolean30;             /* '<S6>/Cast To Boolean30' */
  uint8_T Memory1_m;                   /* '<S3>/Memory1' */
  uint8_T BPPTrqCancel;                /* '<S114>/Gain' */
  int8_T TrqReqStat;                   /* '<S6>/Cast To Boolean9' */
  int8_T CastToBoolean47;              /* '<S6>/Cast To Boolean47' */
  int8_T CastToBoolean36;              /* '<S6>/Cast To Boolean36' */
  int8_T CastToBoolean29;              /* '<S6>/Cast To Boolean29' */
  int8_T CastToBoolean6;               /* '<S6>/Cast To Boolean6' */
  boolean_T CastToBoolean26;           /* '<S6>/Cast To Boolean26' */
  boolean_T CastToBoolean22;           /* '<S6>/Cast To Boolean22' */
  boolean_T Compare;                   /* '<S150>/Compare' */
  boolean_T Compare_l;                 /* '<S146>/Compare' */
  boolean_T LogicalOperator6;          /* '<S121>/Logical Operator6' */
  boolean_T Compare_f;                 /* '<S147>/Compare' */
  boolean_T Compare_i;                 /* '<S149>/Compare' */
  boolean_T LogicalOperator7;          /* '<S121>/Logical Operator7' */
  boolean_T LogicalOperator8;          /* '<S121>/Logical Operator8' */
  boolean_T powerdirectionfault;       /* '<S3>/Cast To Boolean' */
  boolean_T Compare_k;                 /* '<S151>/Compare' */
  boolean_T Compare_a;                 /* '<S154>/Compare' */
  boolean_T LogicalOperator1;          /* '<S123>/Logical Operator1' */
  boolean_T Compare_h;                 /* '<S155>/Compare' */
  boolean_T Compare_fb;                /* '<S157>/Compare' */
  boolean_T Compare_lt;                /* '<S158>/Compare' */
  boolean_T RecieveDrive;              /* '<S123>/Logical Operator' */
  boolean_T LogicalOperator2;          /* '<S123>/Logical Operator2' */
  boolean_T Compare_j;                 /* '<S153>/Compare' */
  boolean_T LogicalOperator4;          /* '<S123>/Logical Operator4' */
  boolean_T LogicalOperator3;          /* '<S123>/Logical Operator3' */
  boolean_T Compare_n;                 /* '<S152>/Compare' */
  boolean_T LogicalOperator6_k;        /* '<S123>/Logical Operator6' */
  boolean_T LogicalOperator5;          /* '<S123>/Logical Operator5' */
  boolean_T LogicalOperator7_c;        /* '<S123>/Logical Operator7' */
  boolean_T IC_e;                      /* '<S123>/IC' */
  boolean_T LogicalOperator1_i;        /* '<S124>/Logical Operator1' */
  boolean_T Compare_b;                 /* '<S142>/Compare' */
  boolean_T Compare_e;                 /* '<S133>/Compare' */
  boolean_T CastToBoolean49;           /* '<S6>/Cast To Boolean49' */
  boolean_T CastToBoolean45;           /* '<S6>/Cast To Boolean45' */
  boolean_T CastToBoolean43;           /* '<S6>/Cast To Boolean43' */
  boolean_T CastToBoolean44;           /* '<S6>/Cast To Boolean44' */
  boolean_T CastToBoolean42;           /* '<S6>/Cast To Boolean42' */
  boolean_T Compare_ej;                /* '<S140>/Compare' */
  boolean_T Compare_m;                 /* '<S132>/Compare' */
  boolean_T gfd;                       /* '<S116>/Logical Operator11' */
  boolean_T FirstTimeFlag;             /* '<S116>/Data Type Conversion2' */
  boolean_T DataTypeConversion3_k;     /* '<S116>/Data Type Conversion3' */
  boolean_T Compare_c;                 /* '<S139>/Compare' */
  boolean_T Compare_jl;                /* '<S141>/Compare' */
  boolean_T LogicalOperator;           /* '<S120>/Logical Operator' */
  boolean_T LogicalOperator1_a;        /* '<S122>/Logical Operator1' */
  boolean_T CastToBoolean51;           /* '<S6>/Cast To Boolean51' */
  boolean_T Compare_nx;                /* '<S134>/Compare' */
  boolean_T Compare_jlo;               /* '<S137>/Compare' */
  boolean_T LogicalOperator1_c;        /* '<S117>/Logical Operator1' */
  boolean_T CastToBoolean4;            /* '<S6>/Cast To Boolean4' */
  boolean_T OR;                        /* '<S1>/OR' */
  boolean_T CastToBoolean16;           /* '<S6>/Cast To Boolean16' */
  boolean_T DistanceValidity_d;        /* '<S21>/OR' */
  boolean_T dist_is_valid;             /* '<S6>/Cast To Boolean' */
  boolean_T TrafficLightPresent;       /* '<S6>/Cast To Boolean12' */
  boolean_T CAVACCReq;                 /* '<S1>/Cast To Boolean' */
  boolean_T CAVPCM_ACCAct;             /* '<S1>/Cast To Boolean1' */
  boolean_T LowerRelop1;               /* '<S200>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S200>/UpperRelop' */
  boolean_T AND;                       /* '<S165>/AND' */
  boolean_T NOT;                       /* '<S4>/NOT' */
  boolean_T Compare_o;                 /* '<S204>/Compare' */
  boolean_T Compare_kp;                /* '<S205>/Compare' */
  boolean_T Compare_oa;                /* '<S208>/Compare' */
  boolean_T LogicalOperator_l;         /* '<S9>/Logical Operator' */
  boolean_T Compare_kf;                /* '<S112>/Compare' */
  boolean_T LowerRelop1_e;             /* '<S111>/LowerRelop1' */
  boolean_T UpperRelop_h;              /* '<S111>/UpperRelop' */
  boolean_T Compare_j1;                /* '<S127>/Compare' */
  boolean_T Compare_j2;                /* '<S128>/Compare' */
  boolean_T LogicalOperator3_d;        /* '<S114>/Logical Operator3' */
  boolean_T BPPTrqCancel_h;            /* '<S114>/IC' */
  boolean_T Compare_nf;                /* '<S130>/Compare' */
  boolean_T DiagnosticFaults;          /* '<S163>/Diagnostic Faults' */
  boolean_T Compare_jg;                /* '<S188>/Compare' */
  boolean_T LowerRelop1_n;             /* '<S199>/LowerRelop1' */
  boolean_T UpperRelop_e;              /* '<S199>/UpperRelop' */
  boolean_T AND_f;                     /* '<S164>/AND' */
  boolean_T Compare_ha;                /* '<S168>/Compare' */
  boolean_T Compare_nm;                /* '<S170>/Compare' */
  boolean_T Compare_g;                 /* '<S172>/Compare' */
  boolean_T LogicalOperator_f;         /* '<S169>/Logical Operator' */
  boolean_T Compare_lf;                /* '<S171>/Compare' */
  boolean_T LogicalOperator1_d;        /* '<S169>/Logical Operator1' */
  boolean_T Compare_nu;                /* '<S186>/Compare' */
  boolean_T LowerRelop1_h;             /* '<S181>/LowerRelop1' */
  boolean_T UpperRelop_l;              /* '<S181>/UpperRelop' */
  boolean_T Compare_d;                 /* '<S196>/Compare' */
  boolean_T Compare_el;                /* '<S197>/Compare' */
  boolean_T Compare_me;                /* '<S193>/Compare' */
  boolean_T Compare_nz;                /* '<S192>/Compare' */
  boolean_T Compare_lz;                /* '<S191>/Compare' */
  boolean_T Compare_lv;                /* '<S190>/Compare' */
  boolean_T Compare_bz;                /* '<S189>/Compare' */
  boolean_T allowsbrakingtorqueifineithercruisechangingmodes;
        /* '<S183>/allows braking torque if in  either cruise changing modes' */
  boolean_T Compare_m2;                /* '<S184>/Compare' */
  boolean_T Compare_p;                 /* '<S160>/Compare' */
  boolean_T Compare_nq;                /* '<S159>/Compare' */
  boolean_T AND_a;                     /* '<S125>/AND' */
  boolean_T Constant3;                 /* '<S3>/Constant3' */
  boolean_T CastToBoolean1;            /* '<S6>/Cast To Boolean1' */
  boolean_T CastToBoolean2;            /* '<S6>/Cast To Boolean2' */
  boolean_T CastToBoolean24;           /* '<S6>/Cast To Boolean24' */
  boolean_T CastToBoolean38;           /* '<S6>/Cast To Boolean38' */
  boolean_T Compare_o0;                /* '<S207>/Compare' */
  boolean_T Compare_nj;                /* '<S206>/Compare' */
  boolean_T Compare_ni;                /* '<S194>/Compare' */
  boolean_T LogicalOperator1_a1;       /* '<S183>/Logical Operator1' */
  boolean_T OR_n;                      /* '<S183>/OR' */
  boolean_T CastToBoolean50;           /* '<S6>/Cast To Boolean50' */
  boolean_T Compare_nw;                /* '<S178>/Compare' */
  boolean_T Compare_o5;                /* '<S176>/Compare' */
  boolean_T Compare_mq;                /* '<S177>/Compare' */
  boolean_T Compare_ib;                /* '<S175>/Compare' */
  boolean_T LogicalOperator_d;         /* '<S163>/Logical Operator' */
  boolean_T LogicalOperator1_e;        /* '<S163>/Logical Operator1' */
  boolean_T Compare_bf;                /* '<S174>/Compare' */
  boolean_T Compare_ns;                /* '<S198>/Compare' */
  boolean_T LogicalOperator1_d1;       /* '<S185>/Logical Operator1' */
  boolean_T Compare_fi;                /* '<S195>/Compare' */
  boolean_T LogicalOperator_fc;        /* '<S185>/Logical Operator' */
  boolean_T LogicalOperator2_m;        /* '<S185>/Logical Operator2' */
  boolean_T fail_flag;                 /* '<S123>/Fault Counter' */
  boolean_T Compare_pq;                /* '<S17>/Compare' */
  boolean_T Compare_av;                /* '<S16>/Compare' */
  boolean_T Compare_mu;                /* '<S18>/Compare' */
  boolean_T CastToBoolean5;            /* '<S6>/Cast To Boolean5' */
  boolean_T OR1;                       /* '<S1>/OR1' */
  boolean_T HoldCancelDecel;           /* '<S1>/Chart3' */
  B_Faultcounter1_PID_HSC_Model_T sf_Faultcounter1_f;/* '<S125>/Fault counter1' */
  B_Faultcounter1_PID_HSC_Model_T sf_Faultcounter1;/* '<S121>/Fault counter1' */
  B_OverVoltage_PID_HSC_Model_T sf_OverDischarge;/* '<S119>/OverDischarge' */
  B_OverVoltage_PID_HSC_Model_T sf_UnderVoltage;/* '<S118>/UnderVoltage' */
  B_OverVoltage_PID_HSC_Model_T sf_OverVoltage;/* '<S118>/OverVoltage' */
  B_ABSRegenOff_PID_HSC_Model_T sf_ABSRegenOff_f;/* '<S115>/ABSRegenOff' */
  B_ABSRegenOff_PID_HSC_Model_T sf_ABSRegenOff;/* '<S113>/ABSRegenOff' */
  B_Chart_PID_HSC_Model_T sf_Chart2_m;     /* '<S2>/Chart2' */
  B_Chart_PID_HSC_Model_T sf_Chart_g;      /* '<S2>/Chart' */
  B_ACCLookup_PID_HSC_Model_T ACCLookup;   /* '<S12>/ACC Lookup' */
} B_PID_HSC_Model_c_T;

/* Block states (default storage) for model 'PID_HSC_Model' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S20>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S20>/Discrete-Time Integrator1' */
  real_T DelayOneStep1_DSTATE;         /* '<S21>/Delay One Step1' */
  real_T DelayOneStep_DSTATE;          /* '<S21>/Delay One Step' */
  real_T DiscreteTimeIntegrator3_DSTATE;/* '<S21>/Discrete-Time Integrator3' */
  real_T DelayOneStep_DSTATE_b;        /* '<S180>/Delay One Step' */
  real_T Memory7_PreviousInput;        /* '<S116>/Memory7' */
  real_T Memory_PreviousInput;         /* '<S2>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S2>/Memory1' */
  real_T m_bpLambda[2];               /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T m_yyA[17];                   /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T m_yyB[17];                   /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T m_yy2[17];                   /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T m_up[17];                    /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T m_y2[289];                   /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T prevBp0AndTableData[306];    /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  real_T IC6_FirstOutputTime;          /* '<S2>/IC6' */
  real_T IC_FirstOutputTime;           /* '<S2>/IC' */
  real_T IC5_FirstOutputTime;          /* '<S2>/IC5' */
  real_T IC2_FirstOutputTime;          /* '<S2>/IC2' */
  real_T IC1_FirstOutputTime;          /* '<S2>/IC1' */
  real_T IC8_FirstOutputTime;          /* '<S2>/IC8' */
  real_T IC3_FirstOutputTime;          /* '<S2>/IC3' */
  real_T IC7_FirstOutputTime;          /* '<S2>/IC7' */
  real_T IC4_FirstOutputTime;          /* '<S2>/IC4' */
  real_T IC_FirstOutputTime_m;         /* '<S114>/IC' */
  real_T Memory2_PreviousInput;        /* '<S3>/Memory2' */
  real_T Regen_Active;                 /* '<S10>/VMCP' */
  real_T Full_Power_Active;            /* '<S10>/VMCP' */
  real_T Cruise_Charge_Available;      /* '<S10>/VMCP' */
  real_T Launch_Mode;                  /* '<S10>/VMCP' */
  real_T Low_Speed_Cruise_Charge;      /* '<S10>/VMCP' */
  real_T emcp_psoc_W;                  /* '<S5>/Energy Management Strategy' */
  real_T count;                        /* '<S123>/Fault Counter' */
  real_T flag;                         /* '<S123>/Fault Counter' */
  real_T fail_flag;                    /* '<S120>/fault Counter3' */
  real_T count_a;                      /* '<S120>/fault Counter3' */
  real_T fail_flag_b;                  /* '<S120>/fault Counter2' */
  real_T count_k;                      /* '<S120>/fault Counter2' */
  real_T fail_flag_f;                  /* '<S120>/fault Counter1' */
  real_T count_m;                      /* '<S120>/fault Counter1' */
  real_T currtime;                     /* '<S2>/Chart3' */
  real_T orig;                         /* '<S2>/Chart3' */
  real_T currtime_f;                   /* '<S2>/Chart1' */
  real_T orig_a;                       /* '<S2>/Chart1' */
  void* m_bpDataSet[2];               /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  void* TWork[6];                     /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  void* SWork[9];                     /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  uint32_T m_bpIndex[2];              /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  uint32_T temporalCounter_i1;         /* '<S180>/Chart' */
  uint32_T temporalCounter_i1_j;       /* '<S2>/Chart3' */
  uint32_T temporalCounter_i1_e;       /* '<S2>/Chart1' */
  uint16_T temporalCounter_i1_o;       /* '<S1>/Generate SetSpd' */
  uint16_T temporalCounter_i1_l;       /* '<S1>/Chart3' */
  int8_T DiscreteTimeIntegrator3_PrevResetState;/* '<S21>/Discrete-Time Integrator3' */
  uint8_T reCalcSecDerivFirstDimCoeffs;
                                      /* '<S4>/LCV Pedal Map Axle Torque Nm1' */
  uint8_T is_active_c3_PID_HSC_Model;      /* '<S10>/VMCP' */
  uint8_T is_Startup_Shutdown_Sequence;/* '<S10>/VMCP' */
  uint8_T is_HV_Start_Up;              /* '<S10>/VMCP' */
  uint8_T is_Brusa_Charging;           /* '<S10>/VMCP' */
  uint8_T is_Shutdown;                 /* '<S10>/VMCP' */
  uint8_T is_ON_State;                 /* '<S10>/VMCP' */
  uint8_T is_Operating_Mode;           /* '<S10>/VMCP' */
  uint8_T is_active_c1_PID_HSC_Model;      /* '<S5>/Energy Management Strategy' */
  uint8_T is_SOC_Maintenance;          /* '<S5>/Energy Management Strategy' */
  uint8_T is_active_c22_PID_HSC_Model;     /* '<S180>/Chart' */
  uint8_T is_c22_PID_HSC_Model;            /* '<S180>/Chart' */
  uint8_T is_active_c25_PID_HSC_Model;     /* '<S163>/Chart' */
  uint8_T is_c25_PID_HSC_Model;            /* '<S163>/Chart' */
  uint8_T is_active_c18_PID_HSC_Model;     /* '<S123>/Fault Counter' */
  uint8_T is_c18_PID_HSC_Model;            /* '<S123>/Fault Counter' */
  uint8_T is_Normal;                   /* '<S123>/Fault Counter' */
  uint8_T is_active_c11_PID_HSC_Model;     /* '<S120>/fault Counter3' */
  uint8_T is_c11_PID_HSC_Model;            /* '<S120>/fault Counter3' */
  uint8_T is_Normal_Operation;         /* '<S120>/fault Counter3' */
  uint8_T is_active_c10_PID_HSC_Model;     /* '<S120>/fault Counter2' */
  uint8_T is_c10_PID_HSC_Model;            /* '<S120>/fault Counter2' */
  uint8_T is_Normal_Operation_n;       /* '<S120>/fault Counter2' */
  uint8_T is_active_c9_PID_HSC_Model;      /* '<S120>/fault Counter1' */
  uint8_T is_c9_PID_HSC_Model;             /* '<S120>/fault Counter1' */
  uint8_T is_Normal_Operation_i;       /* '<S120>/fault Counter1' */
  uint8_T is_active_c5_PID_HSC_Model;      /* '<S116>/Chart' */
  uint8_T is_c5_PID_HSC_Model;             /* '<S116>/Chart' */
  uint8_T is_active_c20_PID_HSC_Model;     /* '<S2>/Chart3' */
  uint8_T is_c20_PID_HSC_Model;            /* '<S2>/Chart3' */
  uint8_T is_active_c17_PID_HSC_Model;     /* '<S2>/Chart1' */
  uint8_T is_c17_PID_HSC_Model;            /* '<S2>/Chart1' */
  uint8_T is_active_c28_PID_HSC_Model;     /* '<S21>/Chart2' */
  uint8_T is_c28_PID_HSC_Model;            /* '<S21>/Chart2' */
  uint8_T temporalCounter_i1_h;        /* '<S21>/Chart2' */
  uint8_T is_active_c15_PID_HSC_Model;     /* '<S1>/Generate SetSpd' */
  uint8_T is_c15_PID_HSC_Model;            /* '<S1>/Generate SetSpd' */
  uint8_T is_active_c34_PID_HSC_Model;     /* '<S1>/Chart3' */
  uint8_T is_c34_PID_HSC_Model;            /* '<S1>/Chart3' */
  uint8_T is_active_c21_PID_HSC_Model;     /* '<S1>/Chart' */
  uint8_T is_c21_PID_HSC_Model;            /* '<S1>/Chart' */
  uint8_T is_CruiseSet;                /* '<S1>/Chart' */
  uint8_T temporalCounter_i1_oe;       /* '<S1>/Chart' */
  uint8_T is_active_c4_PID_HSC_Model;      /* '<S1>/CAVPCM_ACCMd_Request' */
  uint8_T is_c4_PID_HSC_Model;             /* '<S1>/CAVPCM_ACCMd_Request' */
  uint8_T is_active_c2_PID_HSC_Model;      /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_c2_PID_HSC_Model;             /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_CruiseOn;                 /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_Turn_Cruise_Control_Off;  /* '<S1>/ACC Auto Engage Controller' */
  uint8_T is_CruiseControlAutomation;  /* '<S1>/ACC Auto Engage Controller' */
  uint8_T temporalCounter_i1_js;       /* '<S1>/ACC Auto Engage Controller' */
  uint8_T temporalCounter_i2;          /* '<S1>/ACC Auto Engage Controller' */
  boolean_T IC_FirstOutputTime_c;      /* '<S121>/IC' */
  boolean_T IC_FirstOutputTime_j;      /* '<S123>/IC' */
  boolean_T IC_FirstOutputTime_d;      /* '<S125>/IC' */
  uint8_T Memory1_PreviousInput_l;     /* '<S3>/Memory1' */
  DW_Faultcounter1_PID_HSC_Model_T sf_Faultcounter1_f;/* '<S125>/Fault counter1' */
  DW_Faultcounter1_PID_HSC_Model_T sf_Faultcounter1;/* '<S121>/Fault counter1' */
  DW_OverVoltage_PID_HSC_Model_T sf_OverDischarge;/* '<S119>/OverDischarge' */
  DW_OverVoltage_PID_HSC_Model_T sf_UnderVoltage;/* '<S118>/UnderVoltage' */
  DW_OverVoltage_PID_HSC_Model_T sf_OverVoltage;/* '<S118>/OverVoltage' */
  DW_ABSRegenOff_PID_HSC_Model_T sf_ABSRegenOff_f;/* '<S115>/ABSRegenOff' */
  DW_ABSRegenOff_PID_HSC_Model_T sf_ABSRegenOff;/* '<S113>/ABSRegenOff' */
  DW_Chart_PID_HSC_Model_T sf_Chart2_m;    /* '<S2>/Chart2' */
  DW_Chart_PID_HSC_Model_T sf_Chart_g;     /* '<S2>/Chart' */
  DW_ACCLookup_PID_HSC_Model_T ACCLookup;  /* '<S12>/ACC Lookup' */
} DW_PID_HSC_Model_f_T;

/* Continuous states for model 'PID_HSC_Model' */
typedef struct {
  X_ACCLookup_PID_HSC_Model_T ACCLookup;   /* '<S12>/ACC Lookup' */
} X_PID_HSC_Model_n_T;

/* State derivatives for model 'PID_HSC_Model' */
typedef struct {
  XDot_ACCLookup_PID_HSC_Model_T ACCLookup;/* '<S12>/ACC Lookup' */
} XDot_PID_HSC_Model_n_T;

/* State Disabled for model 'PID_HSC_Model' */
typedef struct {
  XDis_ACCLookup_PID_HSC_Model_T ACCLookup;/* '<S12>/ACC Lookup' */
} XDis_PID_HSC_Model_n_T;

/* Parameters (default storage) */
struct P_PID_HSC_Model_T_ {
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
                                        *   '<S162>/m//s2rad//s'
                                        *   '<S163>/Gain1'
                                        *   '<S22>/Multiply'
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
                                      * Referenced by: '<S18>/Constant'
                                      */
  real_T ReverseMotionCheck_const;   /* Mask Parameter: ReverseMotionCheck_const
                                      * Referenced by: '<S150>/Constant'
                                      */
  real_T ForwardMotionCheck_const;   /* Mask Parameter: ForwardMotionCheck_const
                                      * Referenced by: '<S149>/Constant'
                                      */
  real_T CheckForReverse_const;        /* Mask Parameter: CheckForReverse_const
                                        * Referenced by: '<S154>/Constant'
                                        */
  real_T FirstGearOrGreater_const;   /* Mask Parameter: FirstGearOrGreater_const
                                      * Referenced by: '<S157>/Constant'
                                      */
  real_T NinethGearOrless_const;       /* Mask Parameter: NinethGearOrless_const
                                        * Referenced by: '<S158>/Constant'
                                        */
  real_T CompareToConstant6_const;   /* Mask Parameter: CompareToConstant6_const
                                      * Referenced by: '<S142>/Constant'
                                      */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S133>/Constant'
                                       */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S140>/Constant'
                                      */
  real_T CompetitionRequirement500ohmspervolt_const;
                   /* Mask Parameter: CompetitionRequirement500ohmspervolt_const
                    * Referenced by: '<S132>/Constant'
                    */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S139>/Constant'
                                      */
  real_T CompareToConstant3_const_n;
                                   /* Mask Parameter: CompareToConstant3_const_n
                                    * Referenced by: '<S141>/Constant'
                                    */
  real_T CompareToConstant1_const_d;
                                   /* Mask Parameter: CompareToConstant1_const_d
                                    * Referenced by: '<S134>/Constant'
                                    */
  real_T CompareToConstant_const_c; /* Mask Parameter: CompareToConstant_const_c
                                     * Referenced by: '<S137>/Constant'
                                     */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S204>/Constant'
                                     */
  real_T SOCChargeLimit_const;         /* Mask Parameter: SOCChargeLimit_const
                                        * Referenced by: '<S208>/Constant'
                                        */
  real_T checksforLowSpeedCruiseChargeMode_const;
                      /* Mask Parameter: checksforLowSpeedCruiseChargeMode_const
                       * Referenced by: '<S112>/Constant'
                       */
  real_T BPPCheck_const;               /* Mask Parameter: BPPCheck_const
                                        * Referenced by: '<S127>/Constant'
                                        */
  real_T LaunchModeCheck_const;        /* Mask Parameter: LaunchModeCheck_const
                                        * Referenced by: '<S128>/Constant'
                                        */
  real_T CompareToConstant_const_p; /* Mask Parameter: CompareToConstant_const_p
                                     * Referenced by: '<S130>/Constant'
                                     */
  real_T CheckForLaunchMode_const;   /* Mask Parameter: CheckForLaunchMode_const
                                      * Referenced by: '<S188>/Constant'
                                      */
  real_T CreepTorqueThreshold_Nm_const;
                                /* Mask Parameter: CreepTorqueThreshold_Nm_const
                                 * Referenced by: '<S186>/Constant'
                                 */
  real_T ChargeSOCLimit_const;         /* Mask Parameter: ChargeSOCLimit_const
                                        * Referenced by: '<S195>/Constant'
                                        */
  real_T DischargingSOCLimit_const; /* Mask Parameter: DischargingSOCLimit_const
                                     * Referenced by: '<S198>/Constant'
                                     */
  real_T checksifregenmode_const;     /* Mask Parameter: checksifregenmode_const
                                       * Referenced by: '<S191>/Constant'
                                       */
  real_T checksiflowspeedCruiseChargingmode_const;
                     /* Mask Parameter: checksiflowspeedCruiseChargingmode_const
                      * Referenced by: '<S190>/Constant'
                      */
  real_T checksifcruisechargingmode_const;
                             /* Mask Parameter: checksifcruisechargingmode_const
                              * Referenced by: '<S189>/Constant'
                              */
  real_T CompareToConstant_const_m; /* Mask Parameter: CompareToConstant_const_m
                                     * Referenced by: '<S159>/Constant'
                                     */
  real_T CompareToConstant2_const_g;
                                   /* Mask Parameter: CompareToConstant2_const_g
                                    * Referenced by: '<S206>/Constant'
                                    */
  int16_T CheckForDrive_const;         /* Mask Parameter: CheckForDrive_const
                                        * Referenced by: '<S146>/Constant'
                                        */
  int16_T CheckForReverse_const_b;    /* Mask Parameter: CheckForReverse_const_b
                                       * Referenced by: '<S147>/Constant'
                                       */
  int16_T CheckForDrive1_const;        /* Mask Parameter: CheckForDrive1_const
                                        * Referenced by: '<S151>/Constant'
                                        */
  int16_T CheckForReverse2_const;      /* Mask Parameter: CheckForReverse2_const
                                        * Referenced by: '<S155>/Constant'
                                        */
  int16_T CheckForPark1_const;         /* Mask Parameter: CheckForPark1_const
                                        * Referenced by: '<S153>/Constant'
                                        */
  int16_T CheckForNeutral_const;       /* Mask Parameter: CheckForNeutral_const
                                        * Referenced by: '<S152>/Constant'
                                        */
  int16_T CompareToConstant1_const_c;
                                   /* Mask Parameter: CompareToConstant1_const_c
                                    * Referenced by: '<S16>/Constant'
                                    */
  int16_T CompareToConstant2_const_a;
                                   /* Mask Parameter: CompareToConstant2_const_a
                                    * Referenced by: '<S17>/Constant'
                                    */
  int16_T ChecksforDrive_const;        /* Mask Parameter: ChecksforDrive_const
                                        * Referenced by: '<S170>/Constant'
                                        */
  int16_T ChecksforShftLvrPosUnknown_const;
                             /* Mask Parameter: ChecksforShftLvrPosUnknown_const
                              * Referenced by: '<S172>/Constant'
                              */
  int16_T ChecksforReverse_const;      /* Mask Parameter: ChecksforReverse_const
                                        * Referenced by: '<S171>/Constant'
                                        */
  int16_T ChecksforDrive_const_a;      /* Mask Parameter: ChecksforDrive_const_a
                                        * Referenced by: '<S175>/Constant'
                                        */
  int16_T ChecksforShftLvrPosUnknown_const_i;
                           /* Mask Parameter: ChecksforShftLvrPosUnknown_const_i
                            * Referenced by: '<S177>/Constant'
                            */
  int16_T ChecksforShftLvrPosReverse_const;
                             /* Mask Parameter: ChecksforShftLvrPosReverse_const
                              * Referenced by: '<S176>/Constant'
                              */
  int16_T Reverse_const;               /* Mask Parameter: Reverse_const
                                        * Referenced by: '<S184>/Constant'
                                        */
  boolean_T CompareToConstant1_const_g;
                                   /* Mask Parameter: CompareToConstant1_const_g
                                    * Referenced by: '<S205>/Constant'
                                    */
  boolean_T CompareToConstant_const_ph;
                                   /* Mask Parameter: CompareToConstant_const_ph
                                    * Referenced by: '<S178>/Constant'
                                    */
  boolean_T CompareToConstant3_const_p;
                                   /* Mask Parameter: CompareToConstant3_const_p
                                    * Referenced by: '<S207>/Constant'
                                    */
  uint8_T CompareToConstant_const_f;/* Mask Parameter: CompareToConstant_const_f
                                     * Referenced by: '<S168>/Constant'
                                     */
  uint8_T CheckforkeyinRun_const;      /* Mask Parameter: CheckforkeyinRun_const
                                        * Referenced by: '<S174>/Constant'
                                        */
  real_T Switch3_Threshold;            /* Expression: 10
                                        * Referenced by: '<S1>/Switch3'
                                        */
  real_T Switch4_Threshold;            /* Expression: 15
                                        * Referenced by: '<S1>/Switch4'
                                        */
  real_T Switch5_Threshold;            /* Expression: 20
                                        * Referenced by: '<S1>/Switch5'
                                        */
  real_T Switch6_Threshold;            /* Expression: 30
                                        * Referenced by: '<S1>/Switch6'
                                        */
  real_T Switch7_Threshold;            /* Expression: 40
                                        * Referenced by: '<S1>/Switch7'
                                        */
  real_T Switch8_Threshold;            /* Expression: 50
                                        * Referenced by: '<S1>/Switch8'
                                        */
  real_T Switch9_Threshold;            /* Expression: 60
                                        * Referenced by: '<S1>/Switch9'
                                        */
  real_T Switch10_Threshold;           /* Expression: 70
                                        * Referenced by: '<S1>/Switch10'
                                        */
  real_T Switch12_Threshold;           /* Expression: 80
                                        * Referenced by: '<S1>/Switch12'
                                        */
  real_T SetSpdMPS_Value;              /* Expression: 2
                                        * Referenced by: '<S1>/SetSpdMPS'
                                        */
  real_T Gain_Gain;                    /* Expression: 3.6
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T kphtomph_Gain;                /* Expression: 0.621371
                                        * Referenced by: '<S2>/kph to mph'
                                        */
  real_T VehicleSpeedMultiplier_tableData[6];
                                     /* Expression: [0 0.05 0.10 0.15 0.20 0.20]
                                      * Referenced by: '<S110>/Vehicle Speed Multiplier'
                                      */
  real_T VehicleSpeedMultiplier_bp01Data[6];/* Expression: [7 10 15 20 25 30]
                                             * Referenced by: '<S110>/Vehicle Speed Multiplier'
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
  real_T uDLookupCreepTrq_Nm_tableData[2];/* Expression: [6
                                             9]
                                           * Referenced by: '<S179>/1-D Lookup Creep Trq_Nm'
                                           */
  real_T uDLookupCreepTrq_Nm_bp01Data[2];/* Expression: [0 7]
                                          * Referenced by: '<S179>/1-D Lookup Creep Trq_Nm'
                                          */
  real_T uDLookupTable1_bp01Data[1001];/* Expression: [0:0.0005:0.5]
                                        * Referenced by: '<S180>/1-D Lookup Table1'
                                        */
  real_T RPM_to_rads_Gain;             /* Expression: pi/30
                                        * Referenced by: '<S163>/RPM_to_rad//s'
                                        */
  real_T preventsdividingbyzero_UpperSat;/* Expression: 3435
                                          * Referenced by: '<S163>/prevents dividing by zero'
                                          */
  real_T preventsdividingbyzero_LowerSat;/* Expression: 1
                                          * Referenced by: '<S163>/prevents dividing by zero'
                                          */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S163>/Gain'
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
  real_T kphtomph_Gain_c;              /* Expression: 0.621371
                                        * Referenced by: '<S9>/kph to mph'
                                        */
  real_T VehicleSpeedFadeOut_tableData[2];/* Expression: [0 1]
                                           * Referenced by: '<S9>/Vehicle Speed Fade Out'
                                           */
  real_T VehicleSpeedFadeOut_bp01Data[2];/* Expression: [15 20]
                                          * Referenced by: '<S9>/Vehicle Speed Fade Out'
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
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S160>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S192>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S193>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S196>/Constant'
                                        */
  real_T Constant_Value_o5;            /* Expression: 0
                                        * Referenced by: '<S197>/Constant'
                                        */
  real_T kmh2ms1_Gain;                 /* Expression: 0.277778
                                        * Referenced by: '<S1>/km//h2m//s1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S20>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S20>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S20>/Discrete-Time Integrator1'
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S20>/Discrete-Time Integrator1'
                                        */
  real_T TargetInitialPos_Value;       /* Expression: 0
                                        * Referenced by: '<S20>/TargetInitialPos'
                                        */
  real_T ActivateMILHILVersion_Value;  /* Expression: 1
                                        * Referenced by: '<S6>/Activate MIL//HIL Version'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S20>/Switch1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S20>/Switch'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S1>/Switch2'
                                        */
  real_T Change_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/Change'
                                        */
  real_T Denied_Value;                 /* Expression: 0
                                        * Referenced by: '<S1>/Denied'
                                        */
  real_T kphtomps_Gain;                /* Expression: 0.277778
                                        * Referenced by: '<S3>/kph to mps'
                                        */
  real_T IC_Value;                     /* Expression: 0
                                        * Referenced by: '<S121>/IC'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 0
                                        * Referenced by: '<S121>/Gain'
                                        */
  real_T Constant_Value_ok;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S117>/Constant'
                                        */
  real_T BrusaEnable_Value;            /* Expression: 0
                                        * Referenced by: '<S10>/Brusa Enable'
                                        */
  real_T Memory7_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S116>/Memory7'
                                        */
  real_T kohmstoohms_Gain;             /* Expression: 1000
                                        * Referenced by: '<S116>/kohms to ohms'
                                        */
  real_T closedcontactorbatteryrange_UpperSat;/* Expression: 360
                                               * Referenced by: '<S116>/closed contactor battery range'
                                               */
  real_T closedcontactorbatteryrange_LowerSat;/* Expression: 200
                                               * Referenced by: '<S116>/closed contactor battery range'
                                               */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S122>/Constant'
                                        */
  real_T kphtomph_Gain_i;              /* Expression: 0.621371
                                        * Referenced by: '<S10>/kph to mph'
                                        */
  real_T Switch1_Threshold_j;          /* Expression: 0
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T Gain_Gain_iu;                 /* Expression: 2.23694
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T uDLookupTable_tableData[17];
  /* Expression: [12.5	34.12635414	48.13676586	56.7650508	60.20004909	61.01339923	61.74133173	62.40513994	63.01857703	63.59112569	64.12964606	64.63928775	65.12403117	65.58702723	66.03081991	66.45749768	66.86879967
     ]
   * Referenced by: '<S21>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[17];   /* Expression: [0:5:80]
                                        * Referenced by: '<S21>/1-D Lookup Table'
                                        */
  real_T DelayOneStep1_InitialCondition;/* Expression: 0.0
                                         * Referenced by: '<S21>/Delay One Step1'
                                         */
  real_T DelayOneStep_InitialCondition;/* Expression: 0.0
                                        * Referenced by: '<S21>/Delay One Step'
                                        */
  real_T DiscreteTimeIntegrator3_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator3_gainval
                           * Referenced by: '<S21>/Discrete-Time Integrator3'
                           */
  real_T DiscreteTimeIntegrator3_IC;   /* Expression: 0
                                        * Referenced by: '<S21>/Discrete-Time Integrator3'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2.23694
                                        * Referenced by: '<S21>/Gain1'
                                        */
  real_T Constant10_Value;             /* Expression: -2.94
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 100
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 100
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0.621371
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant25'
                                        */
  real_T DefaultSpacing_Value;         /* Expression: 15
                                        * Referenced by: '<S21>/Default Spacing'
                                        */
  real_T Switch11_Threshold;           /* Expression: 0.1
                                        * Referenced by: '<S21>/Switch11'
                                        */
  real_T Constant_Value_fe;            /* Expression: 4
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 6
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 8
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 10
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 12
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 14
                                        * Referenced by: '<S1>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 16
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 18
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 10
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 20
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T SetSpdMPS2_Value;             /* Expression: 2
                                        * Referenced by: '<S1>/SetSpdMPS2'
                                        */
  real_T Switch11_Threshold_f;         /* Expression: 100
                                        * Referenced by: '<S1>/Switch11'
                                        */
  real_T Constant_Value_dh;            /* Expression: 20
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
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
  real_T MaxBPPRegenW_Value;           /* Expression: -15000
                                        * Referenced by: '<S9>/Max BPP Regen W'
                                        */
  real_T OffThrottleRegenPowerDemandW_Value;/* Expression: -5000
                                             * Referenced by: '<S9>/Off Throttle Regen Power Demand W'
                                             */
  real_T SteeringWheelAngleFadeOut_tableData[4];/* Expression: [0 1 1 0]
                                                 * Referenced by: '<S9>/Steering Wheel Angle Fade Out'
                                                 */
  real_T SteeringWheelAngleFadeOut_bp01Data[4];/* Expression: [-100 -50 50 100]
                                                * Referenced by: '<S9>/Steering Wheel Angle Fade Out'
                                                */
  real_T Constant1_Value_j;            /* Expression: 0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S110>/Constant'
                                        */
  real_T Constant2_Value_p;            /* Expression: 0
                                        * Referenced by: '<S110>/Constant2'
                                        */
  real_T psoc_table_SOC_offset_Value;  /* Expression: 5
                                        * Referenced by: '<S110>/psoc_table_SOC_offset'
                                        */
  real_T TargetSOC_Value;              /* Expression: 70
                                        * Referenced by: '<S2>/Target SOC'
                                        */
  real_T Constant3_Value_g;            /* Expression: 100
                                        * Referenced by: '<S110>/Constant3'
                                        */
  real_T Constant4_Value_k;            /* Expression: -20000
                                        * Referenced by: '<S110>/Constant4'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<S110>/Constant1'
                                        */
  real_T Constant7_Value_b;            /* Expression: 20000
                                        * Referenced by: '<S110>/Constant7'
                                        */
  real_T FixPtConstant_Value;          /* Expression: 1
                                        * Referenced by: '<S167>/FixPt Constant'
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
  real_T Switch3_Threshold_c;          /* Expression: 10
                                        * Referenced by: '<S2>/Switch3'
                                        */
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S3>/Memory2'
                                        */
  real_T LoadTorqueNm_Value;           /* Expression: 30
                                        * Referenced by: '<S182>/Load Torque Nm'
                                        */
  real_T kphtomps_Gain_i;              /* Expression: 0.277778
                                        * Referenced by: '<S5>/kph to mps'
                                        */
  real_T Constant_Value_ic;            /* Expression: 0
                                        * Referenced by: '<S164>/Constant'
                                        */
  real_T kphtomps1_Gain;               /* Expression: 0.277778
                                        * Referenced by: '<S5>/kph to mps1'
                                        */
  real_T preventsdividingbyzero_UpperSat_a;/* Expression: 1050
                                            * Referenced by: '<S162>/prevents dividing by zero'
                                            */
  real_T preventsdividingbyzero_LowerSat_n;/* Expression: 1
                                            * Referenced by: '<S162>/prevents dividing by zero'
                                            */
  real_T Saturation_UpperSat_a;        /* Expression: inf
                                        * Referenced by: '<S162>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S162>/Saturation'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S163>/Constant'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: -1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T DelayOneStep_InitialCondition_a;/* Expression: 0.0
                                          * Referenced by: '<S180>/Delay One Step'
                                          */
  real_T Switch_Threshold_nw;          /* Expression: 0.5
                                        * Referenced by: '<S180>/Switch'
                                        */
  real_T MotorEnable_Value;            /* Expression: 1
                                        * Referenced by: '<S5>/Motor Enable'
                                        */
  real_T SOCOkay_Value;                /* Expression: 1
                                        * Referenced by: '<S185>/SOC Okay'
                                        */
  real_T IC_Value_b;                   /* Expression: 0
                                        * Referenced by: '<S125>/IC'
                                        */
  real_T Gain19_Gain;                  /* Expression: 0.621371
                                        * Referenced by: '<S163>/Gain19'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
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
  uint32_T LCVPedalMapAxleTorqueNm1_dimSizes[2];
                        /* Computed Parameter: LCVPedalMapAxleTorqueNm1_dimSizes
                         * Referenced by: '<S4>/LCV Pedal Map Axle Torque Nm1'
                         */
  uint32_T LCVPedalMapAxleTorqueNm1_numYWorkElts[3];
                    /* Computed Parameter: LCVPedalMapAxleTorqueNm1_numYWorkElts
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
                                        * Referenced by: '<S194>/Constant'
                                        */
  boolean_T IC_Value_m;                /* Computed Parameter: IC_Value_m
                                        * Referenced by: '<S123>/IC'
                                        */
  boolean_T IC_Value_c;                /* Computed Parameter: IC_Value_c
                                        * Referenced by: '<S114>/IC'
                                        */
  boolean_T Constant3_Value_i;         /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S3>/Constant3'
                                        */
  uint8_T Memory1_InitialCondition_d;
                               /* Computed Parameter: Memory1_InitialCondition_d
                                * Referenced by: '<S3>/Memory1'
                                */
  uint8_T Gain_Gain_g;                 /* Computed Parameter: Gain_Gain_g
                                        * Referenced by: '<S114>/Gain'
                                        */
  P_ACCLookup_PID_HSC_Model_T ACCLookup;   /* '<S12>/ACC Lookup' */
};

/* Real-time Model Data Structure */
struct tag_RTM_PID_HSC_Model_T {
  const char_T **errorStatus;
  RTWSolverInfo *solverInfo;
  const rtTimingBridge *timingBridge;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[963];
    int32_T* vardimsAddress[963];
    RTWLoggingFcnPtr loggingPtrs[963];
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize0;
    int_T mdlref_GlobalTID[3];
    struct {
      uint32_T TID1_2;
    } RateInteraction;

    SimTimeStep *simTimeStep;
    boolean_T *stopRequestedFlag;
  } Timing;
};

typedef struct {
  B_PID_HSC_Model_c_T rtb;
  DW_PID_HSC_Model_f_T rtdw;
  RT_MODEL_PID_HSC_Model_T rtm;
} MdlrefDW_PID_HSC_Model_T;

/* Model block global parameters (default storage) */
extern real_T rtP_ACC_Distance_Lookup[289];/* Variable: ACC_Distance_Lookup
                                            * Referenced by: '<S22>/2-D Lookup Table1'
                                            */
extern real_T rtP_ACC_Distance_Lookup_Direct_Distance[374];
                                /* Variable: ACC_Distance_Lookup_Direct_Distance
                                 * Referenced by: '<S22>/Medium V1'
                                 */
extern real_T rtP_ACC_Distance_Lookup_Direct_DistanceV2[374];
                              /* Variable: ACC_Distance_Lookup_Direct_DistanceV2
                               * Referenced by: '<S22>/Medium V2'
                               */
extern real_T rtP_ACC_Far_Distance_Lookup_Direct[374];
                                     /* Variable: ACC_Far_Distance_Lookup_Direct
                                      * Referenced by: '<S22>/Far'
                                      */
extern real_T rtP_ACC_Near_Distance_Lookup_Direct[391];
                                    /* Variable: ACC_Near_Distance_Lookup_Direct
                                     * Referenced by: '<S22>/Near'
                                     */
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
                                        * Referenced by: '<S22>/2-D Lookup Table'
                                        */
extern real_T rtP_Stoplight_distance_speed_only[336];
                                      /* Variable: Stoplight_distance_speed_only
                                       * Referenced by: '<S22>/2-D Lookup Table4'
                                       */
extern real_T rtP_tandivide[1001];     /* Variable: tandivide
                                        * Referenced by: '<S180>/1-D Lookup Table1'
                                        */

/* Model reference registration function */
extern void PID_HSC_Model_initialize(const char_T **rt_errorStatus, boolean_T
  *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, int_T mdlref_TID2,
  RT_MODEL_PID_HSC_Model_T *const PID_HSC_Model_M, B_PID_HSC_Model_c_T *localB,
  DW_PID_HSC_Model_f_T *localDW, X_PID_HSC_Model_n_T *localX, rtwCAPI_ModelMappingInfo
  *rt_ParentMMI, const char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T
  rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  PID_HSC_Model_GetCAPIStaticMap(void);
extern void PID_HSC_Model_Chart_Init(B_Chart_PID_HSC_Model_T *localB,
  DW_Chart_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_Chart_Reset(B_Chart_PID_HSC_Model_T *localB,
  DW_Chart_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_Chart(real_T rtu_CurrentDemanded, real_T
  rtu_ContinuousCurrentLimit, B_Chart_PID_HSC_Model_T *localB, DW_Chart_PID_HSC_Model_T *
  localDW);
extern void PID_HSC_Model_ABSRegenOff_Init(B_ABSRegenOff_PID_HSC_Model_T *localB,
  DW_ABSRegenOff_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_ABSRegenOff_Reset(B_ABSRegenOff_PID_HSC_Model_T *localB,
  DW_ABSRegenOff_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_ABSRegenOff(boolean_T rtu_Fault, B_ABSRegenOff_PID_HSC_Model_T
  *localB, DW_ABSRegenOff_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_OverVoltage_Init(B_OverVoltage_PID_HSC_Model_T *localB,
  DW_OverVoltage_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_OverVoltage_Reset(B_OverVoltage_PID_HSC_Model_T *localB,
  DW_OverVoltage_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_OverVoltage(uint8_T rtu_key_status, boolean_T rtu_Fault,
  real_T rtu_Battery_Contactors, B_OverVoltage_PID_HSC_Model_T *localB,
  DW_OverVoltage_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_Faultcounter1_Init(B_Faultcounter1_PID_HSC_Model_T *localB,
  DW_Faultcounter1_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_Faultcounter1_Reset(B_Faultcounter1_PID_HSC_Model_T *localB,
  DW_Faultcounter1_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_Faultcounter1(real_T rtu_err, uint8_T rtu_key_status,
  B_Faultcounter1_PID_HSC_Model_T *localB, DW_Faultcounter1_PID_HSC_Model_T *localDW);
extern void PID_HSC_Model_Init(B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T *localDW,
  X_PID_HSC_Model_n_T *localX);
extern void PID_HSC_Model_Reset(B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T *localDW,
  X_PID_HSC_Model_n_T *localX);
extern void PID_HSC_Model_Deriv(B_PID_HSC_Model_c_T *localB, XDot_PID_HSC_Model_n_T
  *localXdot);
extern void PID_HSC_Model_UpdateTID0(RT_MODEL_PID_HSC_Model_T * const PID_HSC_Model_M,
  B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T *localDW);
extern void PID_HSC_Model_UpdateTID1(void);
extern void PID_HSC_Model_UpdateTID2(B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T
  *localDW);
extern void PID_HSC_ModelTID0(RT_MODEL_PID_HSC_Model_T * const PID_HSC_Model_M, const real_T
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
  const real_T *rtu_In_TimeGap, const real_T *rtu_In_TransEstGear, const real_T *
  rtu_In_ActualAxleTrq, const boolean_T *rtu_In_MotorShiftCompensation, const
  real_T *rtu_In_DirectDistanceLookupTableSwitch, HSCOutputs *rty_Out,
  B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T *localDW, X_PID_HSC_Model_n_T *localX);
extern void PID_HSC_ModelTID1(void);
extern void PID_HSC_ModelTID2(B_PID_HSC_Model_c_T *localB, DW_PID_HSC_Model_f_T *localDW);

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
 * '<Root>' : 'PID_HSC_Model'
 * '<S1>'   : 'PID_HSC_Model/ACC Controller '
 * '<S2>'   : 'PID_HSC_Model/Battery_Management_Control_Process'
 * '<S3>'   : 'PID_HSC_Model/Diagnostics'
 * '<S4>'   : 'PID_HSC_Model/Driver_Arbitration'
 * '<S5>'   : 'PID_HSC_Model/Energy_Management_Control_Process'
 * '<S6>'   : 'PID_HSC_Model/Input_Wrapper'
 * '<S7>'   : 'PID_HSC_Model/Output_Wrapper'
 * '<S8>'   : 'PID_HSC_Model/RTI Data'
 * '<S9>'   : 'PID_HSC_Model/Regenerative_Braking_Control_Process'
 * '<S10>'  : 'PID_HSC_Model/Vehicle_Mode_Control_Process'
 * '<S11>'  : 'PID_HSC_Model/ACC Controller /ACC Auto Engage Controller'
 * '<S12>'  : 'PID_HSC_Model/ACC Controller /ACC Classical'
 * '<S13>'  : 'PID_HSC_Model/ACC Controller /CAVPCM_ACCMd_Request'
 * '<S14>'  : 'PID_HSC_Model/ACC Controller /Chart'
 * '<S15>'  : 'PID_HSC_Model/ACC Controller /Chart3'
 * '<S16>'  : 'PID_HSC_Model/ACC Controller /Compare To Constant1'
 * '<S17>'  : 'PID_HSC_Model/ACC Controller /Compare To Constant2'
 * '<S18>'  : 'PID_HSC_Model/ACC Controller /Compare To Constant3'
 * '<S19>'  : 'PID_HSC_Model/ACC Controller /Generate SetSpd'
 * '<S20>'  : 'PID_HSC_Model/ACC Controller /HostPerceptionModel'
 * '<S21>'  : 'PID_HSC_Model/ACC Controller /Subsystem'
 * '<S22>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup'
 * '<S23>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Chart'
 * '<S24>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Chart2'
 * '<S25>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Compare To Constant2'
 * '<S26>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative'
 * '<S27>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Discrete Derivative1'
 * '<S28>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Error Metrics'
 * '<S29>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1'
 * '<S30>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load'
 * '<S31>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup'
 * '<S32>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/D Gain'
 * '<S33>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter'
 * '<S34>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter ICs'
 * '<S35>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/I Gain'
 * '<S36>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Ideal P Gain'
 * '<S37>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Ideal P Gain Fdbk'
 * '<S38>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator'
 * '<S39>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator ICs'
 * '<S40>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/N Copy'
 * '<S41>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/N Gain'
 * '<S42>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/P Copy'
 * '<S43>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Parallel P Gain'
 * '<S44>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Reset Signal'
 * '<S45>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Saturation'
 * '<S46>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Saturation Fdbk'
 * '<S47>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Sum'
 * '<S48>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Sum Fdbk'
 * '<S49>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tracking Mode'
 * '<S50>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tracking Mode Sum'
 * '<S51>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tsamp - Integral'
 * '<S52>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tsamp - Ngain'
 * '<S53>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/postSat Signal'
 * '<S54>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/preSat Signal'
 * '<S55>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S56>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S57>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S58>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/D Gain/Internal Parameters'
 * '<S59>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator'
 * '<S60>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/Tsamp'
 * '<S61>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S62>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S63>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/I Gain/Internal Parameters'
 * '<S64>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Ideal P Gain/Passthrough'
 * '<S65>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S66>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator/Discrete'
 * '<S67>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Integrator ICs/Internal IC'
 * '<S68>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S69>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/N Gain/Passthrough'
 * '<S70>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/P Copy/Disabled'
 * '<S71>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S72>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Reset Signal/Disabled'
 * '<S73>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Saturation/Enabled'
 * '<S74>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Saturation Fdbk/Passthrough'
 * '<S75>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Sum/Sum_PID'
 * '<S76>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Sum Fdbk/Enabled'
 * '<S77>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tracking Mode/Disabled'
 * '<S78>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S79>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S80>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S81>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/postSat Signal/Feedback_Path'
 * '<S82>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/PID Controller1/preSat Signal/Feedback_Path'
 * '<S83>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input'
 * '<S84>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation'
 * '<S85>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes'
 * '<S86>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame'
 * '<S87>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces'
 * '<S88>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Frame Routing'
 * '<S89>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame'
 * '<S90>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Moments'
 * '<S91>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power'
 * '<S92>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Body Frame/Road Load'
 * '<S93>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Forces/Forces Road Load'
 * '<S94>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Frame Routing/Road Load'
 * '<S95>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes'
 * '<S96>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S97>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S98>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load'
 * '<S99>'  : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Power Accounting Bus Creator'
 * '<S100>' : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S101>' : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Power Accounting Bus Creator/PwrStored Input'
 * '<S102>' : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Bus Creation/Power/Road Load/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S103>' : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S104>' : 'PID_HSC_Model/ACC Controller /ACC Classical/ACC Lookup/Vehicle Body Total Road Load/Vehicle Body Total Road Load Kinematic Input/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S105>' : 'PID_HSC_Model/ACC Controller /Subsystem/Chart2'
 * '<S106>' : 'PID_HSC_Model/Battery_Management_Control_Process/Chart'
 * '<S107>' : 'PID_HSC_Model/Battery_Management_Control_Process/Chart1'
 * '<S108>' : 'PID_HSC_Model/Battery_Management_Control_Process/Chart2'
 * '<S109>' : 'PID_HSC_Model/Battery_Management_Control_Process/Chart3'
 * '<S110>' : 'PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power'
 * '<S111>' : 'PID_HSC_Model/Battery_Management_Control_Process/Saturation Dynamic'
 * '<S112>' : 'PID_HSC_Model/Battery_Management_Control_Process/SOC Maintenance Power/checks for Low Speed Cruise Charge Mode'
 * '<S113>' : 'PID_HSC_Model/Diagnostics/ABSRegenOff'
 * '<S114>' : 'PID_HSC_Model/Diagnostics/Brake Torque Cancelation'
 * '<S115>' : 'PID_HSC_Model/Diagnostics/Electronics_Cooling'
 * '<S116>' : 'PID_HSC_Model/Diagnostics/Ground Fault Detection'
 * '<S117>' : 'PID_HSC_Model/Diagnostics/Motor Control Fault'
 * '<S118>' : 'PID_HSC_Model/Diagnostics/Over//UnderVoltage'
 * '<S119>' : 'PID_HSC_Model/Diagnostics/OverDischarge'
 * '<S120>' : 'PID_HSC_Model/Diagnostics/Overheat'
 * '<S121>' : 'PID_HSC_Model/Diagnostics/Powertrain direction fault'
 * '<S122>' : 'PID_HSC_Model/Diagnostics/Protect HV'
 * '<S123>' : 'PID_HSC_Model/Diagnostics/Shift Validity'
 * '<S124>' : 'PID_HSC_Model/Diagnostics/ZeroPwrTmTrq'
 * '<S125>' : 'PID_HSC_Model/Diagnostics/motor_torque direction fault'
 * '<S126>' : 'PID_HSC_Model/Diagnostics/ABSRegenOff/ABSRegenOff'
 * '<S127>' : 'PID_HSC_Model/Diagnostics/Brake Torque Cancelation/BPPCheck'
 * '<S128>' : 'PID_HSC_Model/Diagnostics/Brake Torque Cancelation/Launch Mode Check'
 * '<S129>' : 'PID_HSC_Model/Diagnostics/Electronics_Cooling/ABSRegenOff'
 * '<S130>' : 'PID_HSC_Model/Diagnostics/Electronics_Cooling/Compare To Constant'
 * '<S131>' : 'PID_HSC_Model/Diagnostics/Ground Fault Detection/Chart'
 * '<S132>' : 'PID_HSC_Model/Diagnostics/Ground Fault Detection/Competition Requirement 500 ohms per volt'
 * '<S133>' : 'PID_HSC_Model/Diagnostics/Over//UnderVoltage/Compare To Constant'
 * '<S134>' : 'PID_HSC_Model/Diagnostics/Over//UnderVoltage/Compare To Constant1'
 * '<S135>' : 'PID_HSC_Model/Diagnostics/Over//UnderVoltage/OverVoltage'
 * '<S136>' : 'PID_HSC_Model/Diagnostics/Over//UnderVoltage/UnderVoltage'
 * '<S137>' : 'PID_HSC_Model/Diagnostics/OverDischarge/Compare To Constant'
 * '<S138>' : 'PID_HSC_Model/Diagnostics/OverDischarge/OverDischarge'
 * '<S139>' : 'PID_HSC_Model/Diagnostics/Overheat/Compare To Constant1'
 * '<S140>' : 'PID_HSC_Model/Diagnostics/Overheat/Compare To Constant2'
 * '<S141>' : 'PID_HSC_Model/Diagnostics/Overheat/Compare To Constant3'
 * '<S142>' : 'PID_HSC_Model/Diagnostics/Overheat/Compare To Constant6'
 * '<S143>' : 'PID_HSC_Model/Diagnostics/Overheat/fault Counter1'
 * '<S144>' : 'PID_HSC_Model/Diagnostics/Overheat/fault Counter2'
 * '<S145>' : 'PID_HSC_Model/Diagnostics/Overheat/fault Counter3'
 * '<S146>' : 'PID_HSC_Model/Diagnostics/Powertrain direction fault/CheckForDrive'
 * '<S147>' : 'PID_HSC_Model/Diagnostics/Powertrain direction fault/CheckForReverse'
 * '<S148>' : 'PID_HSC_Model/Diagnostics/Powertrain direction fault/Fault counter1'
 * '<S149>' : 'PID_HSC_Model/Diagnostics/Powertrain direction fault/ForwardMotionCheck'
 * '<S150>' : 'PID_HSC_Model/Diagnostics/Powertrain direction fault/ReverseMotionCheck'
 * '<S151>' : 'PID_HSC_Model/Diagnostics/Shift Validity/CheckForDrive1'
 * '<S152>' : 'PID_HSC_Model/Diagnostics/Shift Validity/CheckForNeutral'
 * '<S153>' : 'PID_HSC_Model/Diagnostics/Shift Validity/CheckForPark1'
 * '<S154>' : 'PID_HSC_Model/Diagnostics/Shift Validity/CheckForReverse '
 * '<S155>' : 'PID_HSC_Model/Diagnostics/Shift Validity/CheckForReverse2'
 * '<S156>' : 'PID_HSC_Model/Diagnostics/Shift Validity/Fault Counter'
 * '<S157>' : 'PID_HSC_Model/Diagnostics/Shift Validity/FirstGearOrGreater'
 * '<S158>' : 'PID_HSC_Model/Diagnostics/Shift Validity/NinethGearOrless'
 * '<S159>' : 'PID_HSC_Model/Diagnostics/motor_torque direction fault/Compare To Constant'
 * '<S160>' : 'PID_HSC_Model/Diagnostics/motor_torque direction fault/Compare To Zero'
 * '<S161>' : 'PID_HSC_Model/Diagnostics/motor_torque direction fault/Fault counter1'
 * '<S162>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque'
 * '<S163>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque'
 * '<S164>' : 'PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source'
 * '<S165>' : 'PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source'
 * '<S166>' : 'PID_HSC_Model/Energy_Management_Control_Process/Energy Management Strategy'
 * '<S167>' : 'PID_HSC_Model/Energy_Management_Control_Process/Increment Stored Integer'
 * '<S168>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Compare To Constant'
 * '<S169>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check'
 * '<S170>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Drive'
 * '<S171>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for Reverse'
 * '<S172>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Engine Torque/Shift Lever Position Check/Checks for ShftLvrPos Unknown'
 * '<S173>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Chart'
 * '<S174>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Check for key in Run'
 * '<S175>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for Drive'
 * '<S176>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Reverse'
 * '<S177>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Checks for ShftLvrPos Unknown'
 * '<S178>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Compare To Constant'
 * '<S179>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque'
 * '<S180>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter'
 * '<S181>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Saturation Motor Limits'
 * '<S182>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode'
 * '<S183>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation'
 * '<S184>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Reverse'
 * '<S185>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation'
 * '<S186>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Creep Torque/Creep Torque Threshold_Nm'
 * '<S187>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Dynamic Motor Torque Rate Limiter/Chart'
 * '<S188>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Launch Mode/Check For  Launch Mode'
 * '<S189>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if cruise charging mode'
 * '<S190>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if low speed Cruise Charging mode'
 * '<S191>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks if regen mode'
 * '<S192>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks negative torque'
 * '<S193>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks positive torque'
 * '<S194>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/Regen Switch Torque Cancelation/checks regen switch is on'
 * '<S195>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charge SOC Limit'
 * '<S196>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Charging Motor Torque'
 * '<S197>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging Motor Torque'
 * '<S198>' : 'PID_HSC_Model/Energy_Management_Control_Process/Calculate Motor Torque/SOC Limit Cancelation/Discharging SOC Limit'
 * '<S199>' : 'PID_HSC_Model/Energy_Management_Control_Process/Choosing the Engine source/Saturation Dynamic'
 * '<S200>' : 'PID_HSC_Model/Energy_Management_Control_Process/Choosing the Motor source/Saturation Dynamic1'
 * '<S201>' : 'PID_HSC_Model/RTI Data/RTI Data Store'
 * '<S202>' : 'PID_HSC_Model/RTI Data/RTI Data Store/RTI Data Store'
 * '<S203>' : 'PID_HSC_Model/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S204>' : 'PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant'
 * '<S205>' : 'PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant1'
 * '<S206>' : 'PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant2'
 * '<S207>' : 'PID_HSC_Model/Regenerative_Braking_Control_Process/Compare To Constant3'
 * '<S208>' : 'PID_HSC_Model/Regenerative_Braking_Control_Process/SOC Charge Limit'
 * '<S209>' : 'PID_HSC_Model/Vehicle_Mode_Control_Process/VMCP'
 */
#endif                                 /* RTW_HEADER_PID_HSC_Model_h_ */

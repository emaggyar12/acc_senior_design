/*
 * Code generation for system model 'Blazer_Plant_Model'
 * For more details, see corresponding source file Blazer_Plant_Model.c
 *
 */

#ifndef RTW_HEADER_Blazer_Plant_Model_h_
#define RTW_HEADER_Blazer_Plant_Model_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Blazer_Plant_Model_COMMON_INCLUDES_
# define Blazer_Plant_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Blazer_Plant_Model_COMMON_INCLUDES_ */

#include "Blazer_Plant_Model_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "SiEngineController.h"
#include "SiMappedEngine.h"
#include "TransmissionController.h"
#include "DrivetrainHevP4.h"
#include "BattHev.h"
#include "MotMapped.h"
#include "StarterSystemP2.h"
#include "rt_nonfinite.h"

/* Block signals for model 'Blazer_Plant_Model' */
typedef struct {
  real_T FromWs;                       /* '<S1>/FromWs' */
  real_T Switch1;                      /* '<S13>/Switch1' */
  real_T UnitDelay2;                   /* '<S18>/Unit Delay2' */
  real_T UnitDelay4;                   /* '<S18>/Unit Delay4' */
  real_T UnitDelay5;                   /* '<S18>/Unit Delay5' */
  real_T UnitDelay6;                   /* '<S18>/Unit Delay6' */
  real_T UnitDelay7;                   /* '<S18>/Unit Delay7' */
  real_T UnitDelay8;                   /* '<S18>/Unit Delay8' */
  real_T UnitDelay9;                   /* '<S18>/Unit Delay9' */
  real_T UnitDelay10;                  /* '<S18>/Unit Delay10' */
  real_T UnitDelay11;                  /* '<S18>/Unit Delay11' */
  real_T UnitDelay12;                  /* '<S18>/Unit Delay12' */
  real_T ThrPosPctCmd;                 /* '<S19>/SiEngineController' */
  real_T WgAreaPctCmd;                 /* '<S19>/SiEngineController' */
  real_T InjPw;                        /* '<S19>/SiEngineController' */
  real_T SiEngineController_o4;        /* '<S19>/SiEngineController' */
  real_T SpkAdv;                       /* '<S19>/SiEngineController' */
  real_T IntkCamPhaseCmd;              /* '<S19>/SiEngineController' */
  real_T ExhCamPhaseCmd;               /* '<S19>/SiEngineController' */
  real_T SiEngineController_o8;        /* '<S19>/SiEngineController' */
  real_T SiEngineController_o9;        /* '<S19>/SiEngineController' */
  real_T SiEngineController_o10;       /* '<S19>/SiEngineController' */
  real_T SiEngineController_o11;       /* '<S19>/SiEngineController' */
  real_T SiEngineController_o12;       /* '<S19>/SiEngineController' */
  real_T SiEngineController_o13;       /* '<S19>/SiEngineController' */
  real_T SiEngineController_o14;       /* '<S19>/SiEngineController' */
  real_T TrqCmd;                       /* '<S19>/SiEngineController' */
  real_T LdCmd;                        /* '<S19>/SiEngineController' */
  real_T EstIntkPortMassFlw;           /* '<S19>/SiEngineController' */
  real_T SensorDynamics;               /* '<S83>/Sensor Dynamics' */
  real_T radstorpm;                    /* '<S83>/rad//s to rpm' */
  real_T SiMappedEngine_o3;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o4;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o5;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o6;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o7;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o8;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o9;            /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o10;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o11;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o12;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o13;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o14;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o15;           /* '<S82>/SiMappedEngine' */
  real_T FuelMassFlw;                  /* '<S82>/SiMappedEngine' */
  real_T IntkGasMassFlw;               /* '<S82>/SiMappedEngine' */
  real_T NrmlzdAirChrg;                /* '<S82>/SiMappedEngine' */
  real_T ExhManGasTemp;                /* '<S82>/SiMappedEngine' */
  real_T Afr;                          /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o21;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o22;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o23;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o24;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o25;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o26;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o27;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o28;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o29;           /* '<S82>/SiMappedEngine' */
  real_T Bsfc;                         /* '<S82>/SiMappedEngine' */
  real_T TPHC;                         /* '<S82>/SiMappedEngine' */
  real_T TPCO;                         /* '<S82>/SiMappedEngine' */
  real_T TPNOx;                        /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o34;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o35;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o36;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o37;           /* '<S82>/SiMappedEngine' */
  real_T SiMappedEngine_o38;           /* '<S82>/SiMappedEngine' */
  real_T FuelVolFlw;                   /* '<S82>/SiMappedEngine' */
  real_T Integrator1;                  /* '<S97>/Integrator1' */
  real_T UnitConversion2;              /* '<S95>/Unit Conversion2' */
  real_T TrigonometricFunction;        /* '<S95>/Trigonometric Function' */
  real_T Gain;                         /* '<S95>/Gain' */
  real_T Add;                          /* '<S95>/Add' */
  real_T Switch1_b;                    /* '<S98>/Switch1' */
  real_T Decel;                        /* '<S98>/Saturation' */
  real_T Switch;                       /* '<S18>/Switch' */
  real_T UnitDelay;                    /* '<S18>/Unit Delay' */
  real_T Switch1_g;                    /* '<S96>/Switch1' */
  real_T ImpellerSpd;                  /* '<S76>/DrivetrainHevP4' */
  real_T TransGear;                    /* '<S76>/DrivetrainHevP4' */
  real_T Clock;                        /* '<S46>/Clock' */
  real_T Switch_j;                     /* '<S46>/Switch' */
  real_T uDLookupTable;                /* '<S46>/1-D Lookup Table' */
  real_T ReferenceSpeed;               /* '<S44>/UnitConversion' */
  real_T Clock_l;                      /* '<S22>/Clock' */
  real_T Switch_l;                     /* '<S22>/Switch' */
  real_T uDLookupTable_a;              /* '<S22>/1-D Lookup Table' */
  real_T ReferenceSpeed_n;             /* '<S20>/UnitConversion' */
  real_T Clock_n;                      /* '<S30>/Clock' */
  real_T Switch_k;                     /* '<S30>/Switch' */
  real_T uDLookupTable_m;              /* '<S30>/1-D Lookup Table' */
  real_T ReferenceSpeed_o;             /* '<S28>/UnitConversion' */
  real_T Clock_h;                      /* '<S38>/Clock' */
  real_T Switch_i;                     /* '<S38>/Switch' */
  real_T uDLookupTable_n;              /* '<S38>/1-D Lookup Table' */
  real_T ReferenceSpeed_f;             /* '<S36>/UnitConversion' */
  real_T Clock_d;                      /* '<S54>/Clock' */
  real_T Switch_e;                     /* '<S54>/Switch' */
  real_T uDLookupTable_f;              /* '<S54>/1-D Lookup Table' */
  real_T ReferenceSpeed_oz;            /* '<S52>/UnitConversion' */
  real_T Clock_k;                      /* '<S62>/Clock' */
  real_T Switch_ec;                    /* '<S62>/Switch' */
  real_T uDLookupTable_ae;             /* '<S62>/1-D Lookup Table' */
  real_T ReferenceSpeed_fu;            /* '<S60>/UnitConversion' */
  real_T Clock_p;                      /* '<S70>/Clock' */
  real_T Switch_b;                     /* '<S70>/Switch' */
  real_T uDLookupTable_h;              /* '<S70>/1-D Lookup Table' */
  real_T ReferenceSpeed_c;             /* '<S68>/UnitConversion' */
  real_T radstorpm_p;                  /* '<S15>/rad//s to rpm' */
  real_T AmbTemp;                      /* '<S80>/Rate Transition3' */
  real_T BattV;                        /* '<S85>/Battery' */
  real_T distance_m;                   /* '<S114>/Integrator' */
  real_T distance_mi;                  /* '<S114>/m to mile' */
  real_T Integrator1_j;                /* '<S114>/Integrator1' */
  real_T Kgtom3CaliforniaPhaseIIGasolineSG;
                      /* '<S114>/Kg to m^3 California Phase II Gasoline S.G.' */
  real_T gal;                          /* '<S114>/m^3 to US Gal' */
  real_T Saturation1;                  /* '<S114>/Saturation1' */
  real_T USMPGCalc;                    /* '<S114>/US MPG Calc' */
  real_T USMPG;                        /* '<S114>/Rate Transition3' */
  real_T Integrator;                   /* '<S113>/Integrator' */
  real_T mtomi;                        /* '<S113>/m to mi' */
  real_T Saturation;                   /* '<S113>/Saturation' */
  real_T Integrator3;                  /* '<S113>/Integrator3' */
  real_T Kgtog;                        /* '<S113>/Kg to g  ' */
  real_T mtokm;                        /* '<S113>/m to km' */
  real_T Saturation1_c;                /* '<S113>/Saturation1' */
  real_T Integrator4;                  /* '<S113>/Integrator4' */
  real_T Kgtog_i;                      /* '<S113>/Kg to g   ' */
  real_T Integrator2;                  /* '<S113>/Integrator2' */
  real_T Kgtog_h;                      /* '<S113>/Kg to g ' */
  real_T Integrator1_m;                /* '<S113>/Integrator1' */
  real_T Kgtog_b;                      /* '<S113>/Kg to g' */
  real_T Divide;                       /* '<S114>/Divide' */
  real_T Divide2;                      /* '<S114>/Divide2' */
  real_T Divide1;                      /* '<S114>/Divide1' */
  real_T m3pergal;                     /* '<S114>/m^3 per gal' */
  real_T BattFuel;   /* '<S114>/California Phase II Gasoline density kg//m^3' */
  real_T TotFuel;                      /* '<S114>/Add' */
  real_T UnitConversion;               /* '<S16>/Unit Conversion' */
  real_T UnitConversion1;              /* '<S16>/Unit Conversion1' */
  real_T UnitConversion10;             /* '<S16>/Unit Conversion10' */
  real_T UnitConversion11;             /* '<S16>/Unit Conversion11' */
  real_T UnitConversion12;             /* '<S16>/Unit Conversion12' */
  real_T UnitConversion13;             /* '<S16>/Unit Conversion13' */
  real_T UnitConversion14;             /* '<S16>/Unit Conversion14' */
  real_T UnitConversion15;             /* '<S16>/Unit Conversion15' */
  real_T UnitConversion16;             /* '<S16>/Unit Conversion16' */
  real_T UnitConversion17;             /* '<S16>/Unit Conversion17' */
  real_T UnitConversion18;             /* '<S16>/Unit Conversion18' */
  real_T UnitConversion19;             /* '<S16>/Unit Conversion19' */
  real_T UnitConversion2_p;            /* '<S16>/Unit Conversion2' */
  real_T UnitConversion3;              /* '<S16>/Unit Conversion3' */
  real_T UnitConversion4;              /* '<S16>/Unit Conversion4' */
  real_T UnitConversion5;              /* '<S16>/Unit Conversion5' */
  real_T UnitConversion6;              /* '<S16>/Unit Conversion6' */
  real_T UnitConversion7;              /* '<S16>/Unit Conversion7' */
  real_T UnitConversion8;              /* '<S16>/Unit Conversion8' */
  real_T UnitConversion9;              /* '<S16>/Unit Conversion9' */
  real_T UnitDelay1;                   /* '<S18>/Unit Delay1' */
  real_T uDLookupTable1;               /* '<S22>/1-D Lookup Table1' */
  real_T ReferenceAccel;               /* '<S20>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2;          /* '<S22>/Digital Clock' */
  real_T Add1;                         /* '<S22>/Add1' */
  real_T uDLookupTable2;               /* '<S22>/1-D Lookup Table2' */
  real_T UnitConversion2_h;            /* '<S23>/Unit Conversion2' */
  real_T TraceConvert;                 /* '<S23>/TraceConvert' */
  real_T UnitConversion_f;             /* '<S23>/Unit Conversion' */
  real_T UnitConversion1_g;            /* '<S23>/Unit Conversion1' */
  real_T uDLookupTable1_b;             /* '<S30>/1-D Lookup Table1' */
  real_T ReferenceAccel_b;             /* '<S28>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2_f;        /* '<S30>/Digital Clock' */
  real_T Add1_j;                       /* '<S30>/Add1' */
  real_T uDLookupTable2_p;             /* '<S30>/1-D Lookup Table2' */
  real_T UnitConversion2_j;            /* '<S31>/Unit Conversion2' */
  real_T TraceConvert_n;               /* '<S31>/TraceConvert' */
  real_T UnitConversion_d;             /* '<S31>/Unit Conversion' */
  real_T UnitConversion1_f;            /* '<S31>/Unit Conversion1' */
  real_T uDLookupTable1_h;             /* '<S38>/1-D Lookup Table1' */
  real_T ReferenceAccel_c;             /* '<S36>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2_a;        /* '<S38>/Digital Clock' */
  real_T Add1_e;                       /* '<S38>/Add1' */
  real_T uDLookupTable2_py;            /* '<S38>/1-D Lookup Table2' */
  real_T UnitConversion2_jj;           /* '<S39>/Unit Conversion2' */
  real_T TraceConvert_h;               /* '<S39>/TraceConvert' */
  real_T UnitConversion_p;             /* '<S39>/Unit Conversion' */
  real_T UnitConversion1_l;            /* '<S39>/Unit Conversion1' */
  real_T uDLookupTable1_n;             /* '<S46>/1-D Lookup Table1' */
  real_T ReferenceAccel_bi;            /* '<S44>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2_o;        /* '<S46>/Digital Clock' */
  real_T Add1_j3;                      /* '<S46>/Add1' */
  real_T uDLookupTable2_o;             /* '<S46>/1-D Lookup Table2' */
  real_T UnitConversion2_n;            /* '<S47>/Unit Conversion2' */
  real_T TraceConvert_g;               /* '<S47>/TraceConvert' */
  real_T UnitConversion_i;             /* '<S47>/Unit Conversion' */
  real_T UnitConversion1_n;            /* '<S47>/Unit Conversion1' */
  real_T uDLookupTable1_f;             /* '<S54>/1-D Lookup Table1' */
  real_T ReferenceAccel_l;             /* '<S52>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2_j;        /* '<S54>/Digital Clock' */
  real_T Add1_f;                       /* '<S54>/Add1' */
  real_T uDLookupTable2_m;             /* '<S54>/1-D Lookup Table2' */
  real_T UnitConversion2_k;            /* '<S55>/Unit Conversion2' */
  real_T TraceConvert_i;               /* '<S55>/TraceConvert' */
  real_T UnitConversion_e;             /* '<S55>/Unit Conversion' */
  real_T UnitConversion1_e;            /* '<S55>/Unit Conversion1' */
  real_T uDLookupTable1_l;             /* '<S62>/1-D Lookup Table1' */
  real_T ReferenceAccel_f;             /* '<S60>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2_n;        /* '<S62>/Digital Clock' */
  real_T Add1_d;                       /* '<S62>/Add1' */
  real_T uDLookupTable2_k;             /* '<S62>/1-D Lookup Table2' */
  real_T UnitConversion2_g;            /* '<S63>/Unit Conversion2' */
  real_T TraceConvert_m;               /* '<S63>/TraceConvert' */
  real_T UnitConversion_e4;            /* '<S63>/Unit Conversion' */
  real_T UnitConversion1_o;            /* '<S63>/Unit Conversion1' */
  real_T uDLookupTable1_lx;            /* '<S70>/1-D Lookup Table1' */
  real_T ReferenceAccel_g;             /* '<S68>/UnitConversion1' */
  real_T TmpRTBAtAdd1Inport2_b;        /* '<S70>/Digital Clock' */
  real_T Add1_g;                       /* '<S70>/Add1' */
  real_T uDLookupTable2_b;             /* '<S70>/1-D Lookup Table2' */
  real_T UnitConversion2_i;            /* '<S71>/Unit Conversion2' */
  real_T TraceConvert_b;               /* '<S71>/TraceConvert' */
  real_T UnitConversion_g;             /* '<S71>/Unit Conversion' */
  real_T UnitConversion1_p;            /* '<S71>/Unit Conversion1' */
  real_T StartTrq;                     /* '<S79>/Coupling Dynamics1' */
  real_T Switch_ey;                    /* '<S13>/Switch' */
  real_T MotTrqCmd;                    /* '<S80>/Rate Transition5' */
  real_T MotMapped_o1;                 /* '<S86>/MotMapped' */
  real_T MotMapped_o2;                 /* '<S86>/MotMapped' */
  real_T MotCrnt;                      /* '<S79>/Saturation1' */
  real_T StartCmd;                     /* '<S80>/Rate Transition4' */
  real_T StartTrq_e;                   /* '<S79>/Low Voltage Starting System' */
  real_T BattCrnt;                     /* '<S79>/Low Voltage Starting System' */
  real_T MotPwrMech;                   /* '<S79>/Product4' */
  real_T ElectronicThrottleActuatorDynamics;
                             /* '<S83>/Electronic Throttle Actuator Dynamics' */
  real_T EngTrq;                       /* '<S84>/Saturation1' */
  real_T UnitConversion1_ev;           /* '<S95>/Unit Conversion1' */
  real_T UnitConversion_n;             /* '<S95>/Unit Conversion' */
  real_T Product1;                     /* '<S95>/Product1' */
  real_T Product;                      /* '<S95>/Product' */
  real_T ytT;                          /* '<S95>/Add2' */
  real_T etT;                          /* '<S95>/Add4' */
  real_T Divide_h;                     /* '<S95>/Divide' */
  real_T u_ot;                         /* '<S95>/Add1' */
  real_T Sum;                          /* '<S97>/Sum' */
  real_T Divide_b;                     /* '<S97>/Divide' */
  real_T Decel_d;                      /* '<S98>/Unary Minus1' */
  real_T Sum7;                         /* '<S90>/Sum7' */
  real_T UnitConversion_o;             /* '<S93>/Unit Conversion' */
  real_T Integrator2_e;                /* '<S108>/Integrator2' */
  real_T Product_c;                    /* '<S108>/Product' */
  real_T UnitDelay_p[2];               /* '<S108>/Unit Delay' */
  real_T VectorConcatenate1[2];        /* '<S108>/Vector Concatenate1' */
  real_T Switch_m[2];                  /* '<S108>/Switch' */
  real_T Constant;                     /* '<S109>/Constant' */
  real_T Constant1;                    /* '<S109>/Constant1' */
  real_T Switch_g;                     /* '<S90>/Switch' */
  real_T Derivative;                   /* '<S15>/Derivative' */
  real_T g;                            /* '<S15>/Gain' */
  real_T mto100Km;                     /* '<S114>/m to 100Km' */
  real_T Saturation_c;                 /* '<S114>/Saturation' */
  real_T m3toL;                        /* '<S114>/m^3 to L' */
  real_T L100Km;                       /* '<S114>/L//100 Km Calc' */
  real_T Product_p;                    /* '<S114>/Product' */
  real_T Sqrt;                         /* '<S114>/Sqrt' */
  real_T mstomph[2];                   /* '<S15>/m//s to mph' */
  real_T DigitalClock;                 /* '<S22>/Digital Clock' */
  real_T DigitalClock_o;               /* '<S30>/Digital Clock' */
  real_T DigitalClock_ob;              /* '<S38>/Digital Clock' */
  real_T DigitalClock_m;               /* '<S46>/Digital Clock' */
  real_T DigitalClock_h;               /* '<S54>/Digital Clock' */
  real_T DigitalClock_o1;              /* '<S62>/Digital Clock' */
  real_T DigitalClock_op;              /* '<S70>/Digital Clock' */
  real_T x[2];                         /* '<S95>/Vehicle' */
  real_T F[4];                         /* '<S95>/Setup' */
  real_T G[2];                         /* '<S95>/Setup' */
  real_T a_star;                       /* '<S95>/Setup' */
  real_T b_star[2];                    /* '<S95>/Setup' */
  real_T u;                            /* '<S105>/u' */
  real_T ut;                           /* '<S98>/Switch' */
  real_T u0;                           /* '<S98>/-1~0' */
  real_T Decel_m;                      /* '<S98>/Unary Minus' */
  real_T u_l;                          /* '<S103>/u' */
  real_T ut_n;                         /* '<S96>/Switch' */
  real_T Accel;                        /* '<S96>/0~1' */
  real_T ACC_APP;
  real_T Gain1;                        /* '<S87>/Gain1' */
  real_T Saturation_h;                 /* '<S96>/Saturation' */
  real_T ACC_BPP;
  real_T Gain_i;                       /* '<S87>/Gain' */
  real_T MathFunction;                 /* '<S70>/Math Function' */
  real_T MathFunction_l;               /* '<S62>/Math Function' */
  real_T MathFunction_d;               /* '<S54>/Math Function' */
  real_T MathFunction_c;               /* '<S46>/Math Function' */
  real_T MathFunction_n;               /* '<S38>/Math Function' */
  real_T MathFunction_cy;              /* '<S30>/Math Function' */
  real_T MathFunction_h;               /* '<S22>/Math Function' */
  real_T xdotref;
  real_T Switch_l2;                    /* '<Root>/Switch' */
  real_T MultiportSwitch;              /* '<Root>/Multiport Switch' */
  uint8_T Gain2;                       /* '<S87>/Gain2' */
  uint8_T Gain3;                       /* '<S87>/Gain3' */
  boolean_T CAVPCM_ACCMdAtv;
  boolean_T LogicalOperator1;          /* '<S98>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S98>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S98>/Logical Operator3' */
  boolean_T NOT;                       /* '<S104>/NOT' */
  boolean_T LogicalOperator1_f;        /* '<S96>/Logical Operator1' */
  boolean_T LogicalOperator2_i;        /* '<S96>/Logical Operator2' */
  boolean_T LogicalOperator3_h;        /* '<S96>/Logical Operator3' */
  boolean_T NOT_c;                     /* '<S102>/NOT' */
  boolean_T Cltch1State;               /* '<S76>/DrivetrainHevP4' */
  boolean_T CltchLocked;               /* '<S76>/DrivetrainHevP4' */
  boolean_T LogicalOperator;           /* '<S90>/Logical Operator' */
  boolean_T VectorConcatenate[2];      /* '<S108>/Vector Concatenate' */
} B_Blazer_Plant_Model_c_T;

/* Block states (default storage) for model 'Blazer_Plant_Model' */
typedef struct {
  real_T UnitDelay2_DSTATE;            /* '<S18>/Unit Delay2' */
  real_T UnitDelay4_DSTATE;            /* '<S18>/Unit Delay4' */
  real_T UnitDelay5_DSTATE;            /* '<S18>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S18>/Unit Delay6' */
  real_T UnitDelay7_DSTATE;            /* '<S18>/Unit Delay7' */
  real_T UnitDelay8_DSTATE;            /* '<S18>/Unit Delay8' */
  real_T UnitDelay9_DSTATE;            /* '<S18>/Unit Delay9' */
  real_T UnitDelay10_DSTATE;           /* '<S18>/Unit Delay10' */
  real_T UnitDelay11_DSTATE;           /* '<S18>/Unit Delay11' */
  real_T UnitDelay12_DSTATE;           /* '<S18>/Unit Delay12' */
  real_T UnitDelay_DSTATE;             /* '<S18>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S18>/Unit Delay1' */
  real_T UnitDelay_DSTATE_d[2];        /* '<S108>/Unit Delay' */
  real_T TmpRTBAtAdd1Inport2_Buffer0;  /* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0_c;/* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0_f;/* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0_j;/* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0_i;/* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0_l;/* synthesized block */
  real_T TmpRTBAtAdd1Inport2_Buffer0_h;/* synthesized block */
  real_T TimeStampA;                   /* '<S15>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S15>/Derivative' */
  real_T TimeStampB;                   /* '<S15>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S15>/Derivative' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S1>/FromWs' */

  uint32_T m_bpIndex;                  /* '<S46>/1-D Lookup Table' */
  uint32_T m_bpIndex_o;                /* '<S22>/1-D Lookup Table' */
  uint32_T m_bpIndex_h;                /* '<S30>/1-D Lookup Table' */
  uint32_T m_bpIndex_c;                /* '<S38>/1-D Lookup Table' */
  uint32_T m_bpIndex_hp;               /* '<S54>/1-D Lookup Table' */
  uint32_T m_bpIndex_p;                /* '<S62>/1-D Lookup Table' */
  uint32_T m_bpIndex_b;                /* '<S70>/1-D Lookup Table' */
  uint32_T m_bpIndex_pz;               /* '<S22>/1-D Lookup Table1' */
  uint32_T m_bpIndex_p0;               /* '<S22>/1-D Lookup Table2' */
  uint32_T m_bpIndex_k;                /* '<S30>/1-D Lookup Table1' */
  uint32_T m_bpIndex_g;                /* '<S30>/1-D Lookup Table2' */
  uint32_T m_bpIndex_f;                /* '<S38>/1-D Lookup Table1' */
  uint32_T m_bpIndex_i;                /* '<S38>/1-D Lookup Table2' */
  uint32_T m_bpIndex_cr;               /* '<S46>/1-D Lookup Table1' */
  uint32_T m_bpIndex_l;                /* '<S46>/1-D Lookup Table2' */
  uint32_T m_bpIndex_cp;               /* '<S54>/1-D Lookup Table1' */
  uint32_T m_bpIndex_gm;               /* '<S54>/1-D Lookup Table2' */
  uint32_T m_bpIndex_e;                /* '<S62>/1-D Lookup Table1' */
  uint32_T m_bpIndex_b4;               /* '<S62>/1-D Lookup Table2' */
  uint32_T m_bpIndex_e5;               /* '<S70>/1-D Lookup Table1' */
  uint32_T m_bpIndex_ct;               /* '<S70>/1-D Lookup Table2' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S1>/FromWs' */

  boolean_T PassThrough_MODE;          /* '<S104>/Pass Through' */
  boolean_T PassThrough_MODE_j;        /* '<S102>/Pass Through' */
  MdlrefDW_SiEngineController_T SiEngineController_InstanceData;/* '<S19>/SiEngineController' */
  MdlrefDW_SiMappedEngine_T SiMappedEngine_InstanceData;/* '<S82>/SiMappedEngine' */
  MdlrefDW_TransmissionController_T
    uspeedTransmissionControlModuleTCM_InstanceData;
                         /* '<S18>/9-speed Transmission Control Module (TCM)' */
  MdlrefDW_DrivetrainHevP4_T DrivetrainHevP4_InstanceData;/* '<S76>/DrivetrainHevP4' */
  MdlrefDW_BattHev_T Battery_InstanceData;/* '<S85>/Battery' */
  MdlrefDW_MotMapped_T MotMapped_InstanceData;/* '<S86>/MotMapped' */
  MdlrefDW_StarterSystemP2_T LowVoltageStartingSystem_InstanceData;/* '<S79>/Low Voltage Starting System' */
} DW_Blazer_Plant_Model_f_T;

/* Continuous states for model 'Blazer_Plant_Model' */
typedef struct {
  real_T SensorDynamics_CSTATE;        /* '<S83>/Sensor Dynamics' */
  X_SiMappedEngine_n_T SiMappedEngine_CSTATE;/* '<S82>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S79>/Motor Coupling Dynamics' */
  real_T Integrator1_CSTATE;           /* '<S97>/Integrator1' */
  X_DrivetrainHevP4_n_T DrivetrainHevP4_CSTATE;/* '<S76>/DrivetrainHevP4' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S79>/Battery Discharge Dynamics' */
  X_BattHev_n_T Battery_CSTATE;        /* '<S85>/Battery' */
  real_T Integrator_CSTATE;            /* '<S114>/Integrator' */
  real_T Integrator1_CSTATE_n;         /* '<S114>/Integrator1' */
  real_T Integrator_CSTATE_a;          /* '<S113>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S113>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S113>/Integrator4' */
  real_T Integrator2_CSTATE;           /* '<S113>/Integrator2' */
  real_T Integrator1_CSTATE_m;         /* '<S113>/Integrator1' */
  real_T CouplingDynamics1_CSTATE;     /* '<S79>/Coupling Dynamics1' */
  X_MotMapped_n_T MotMapped_CSTATE;    /* '<S86>/MotMapped' */
  X_StarterSystemP2_n_T LowVoltageStartingSystem_CSTATE;/* '<S79>/Low Voltage Starting System' */
  real_T ElectronicThrottleActuatorDynamics_CSTATE;
                             /* '<S83>/Electronic Throttle Actuator Dynamics' */
  real_T Integrator2_CSTATE_l;         /* '<S108>/Integrator2' */
} X_Blazer_Plant_Model_n_T;

/* Periodic continuous state vector (global) */
typedef int_T PeriodicIndX_Blazer_Plant_Model_T[1];
typedef real_T PeriodicRngX_Blazer_Plant_Model_T[2];

/* State derivatives for model 'Blazer_Plant_Model' */
typedef struct {
  real_T SensorDynamics_CSTATE;        /* '<S83>/Sensor Dynamics' */
  XDot_SiMappedEngine_n_T SiMappedEngine_CSTATE;/* '<S82>/SiMappedEngine' */
  real_T MotorCouplingDynamics_CSTATE; /* '<S79>/Motor Coupling Dynamics' */
  real_T Integrator1_CSTATE;           /* '<S97>/Integrator1' */
  XDot_DrivetrainHevP4_n_T DrivetrainHevP4_CSTATE;/* '<S76>/DrivetrainHevP4' */
  real_T BatteryDischargeDynamics_CSTATE;/* '<S79>/Battery Discharge Dynamics' */
  XDot_BattHev_n_T Battery_CSTATE;     /* '<S85>/Battery' */
  real_T Integrator_CSTATE;            /* '<S114>/Integrator' */
  real_T Integrator1_CSTATE_n;         /* '<S114>/Integrator1' */
  real_T Integrator_CSTATE_a;          /* '<S113>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S113>/Integrator3' */
  real_T Integrator4_CSTATE;           /* '<S113>/Integrator4' */
  real_T Integrator2_CSTATE;           /* '<S113>/Integrator2' */
  real_T Integrator1_CSTATE_m;         /* '<S113>/Integrator1' */
  real_T CouplingDynamics1_CSTATE;     /* '<S79>/Coupling Dynamics1' */
  XDot_MotMapped_n_T MotMapped_CSTATE; /* '<S86>/MotMapped' */
  XDot_StarterSystemP2_n_T LowVoltageStartingSystem_CSTATE;/* '<S79>/Low Voltage Starting System' */
  real_T ElectronicThrottleActuatorDynamics_CSTATE;
                             /* '<S83>/Electronic Throttle Actuator Dynamics' */
  real_T Integrator2_CSTATE_l;         /* '<S108>/Integrator2' */
} XDot_Blazer_Plant_Model_n_T;

/* State Disabled for model 'Blazer_Plant_Model' */
typedef struct {
  boolean_T SensorDynamics_CSTATE;     /* '<S83>/Sensor Dynamics' */
  XDis_SiMappedEngine_n_T SiMappedEngine_CSTATE;/* '<S82>/SiMappedEngine' */
  boolean_T MotorCouplingDynamics_CSTATE;/* '<S79>/Motor Coupling Dynamics' */
  boolean_T Integrator1_CSTATE;        /* '<S97>/Integrator1' */
  XDis_DrivetrainHevP4_n_T DrivetrainHevP4_CSTATE;/* '<S76>/DrivetrainHevP4' */
  boolean_T BatteryDischargeDynamics_CSTATE;/* '<S79>/Battery Discharge Dynamics' */
  XDis_BattHev_n_T Battery_CSTATE;     /* '<S85>/Battery' */
  boolean_T Integrator_CSTATE;         /* '<S114>/Integrator' */
  boolean_T Integrator1_CSTATE_n;      /* '<S114>/Integrator1' */
  boolean_T Integrator_CSTATE_a;       /* '<S113>/Integrator' */
  boolean_T Integrator3_CSTATE;        /* '<S113>/Integrator3' */
  boolean_T Integrator4_CSTATE;        /* '<S113>/Integrator4' */
  boolean_T Integrator2_CSTATE;        /* '<S113>/Integrator2' */
  boolean_T Integrator1_CSTATE_m;      /* '<S113>/Integrator1' */
  boolean_T CouplingDynamics1_CSTATE;  /* '<S79>/Coupling Dynamics1' */
  XDis_MotMapped_n_T MotMapped_CSTATE; /* '<S86>/MotMapped' */
  XDis_StarterSystemP2_n_T LowVoltageStartingSystem_CSTATE;/* '<S79>/Low Voltage Starting System' */
  boolean_T ElectronicThrottleActuatorDynamics_CSTATE;
                             /* '<S83>/Electronic Throttle Actuator Dynamics' */
  boolean_T Integrator2_CSTATE_l;      /* '<S108>/Integrator2' */
} XDis_Blazer_Plant_Model_n_T;

/* Parameters (default storage) */
struct P_Blazer_Plant_Model_T_ {
  real_T A;                            /* Variable: A
                                        * Referenced by: '<S95>/Setup'
                                        */
  real_T B;                            /* Variable: B
                                        * Referenced by: '<S95>/Setup'
                                        */
  real_T BrkPrsMax;                    /* Variable: BrkPrsMax
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T C;                            /* Variable: C
                                        * Referenced by: '<S95>/Setup'
                                        */
  real_T Kpt;                          /* Variable: Kpt
                                        * Referenced by:
                                        *   '<S95>/Setup'
                                        *   '<S95>/Gain'
                                        */
  real_T Mass;                         /* Variable: Mass
                                        * Referenced by:
                                        *   '<S95>/Setup'
                                        *   '<S95>/Gain'
                                        */
  real_T g;                            /* Variable: g
                                        * Referenced by: '<S95>/Gain'
                                        */
  real_T SignalHold_IC;                /* Mask Parameter: SignalHold_IC
                                        * Referenced by: '<S103>/y'
                                        */
  real_T LongitudinalDriverModel_L; /* Mask Parameter: LongitudinalDriverModel_L
                                     * Referenced by: '<S95>/Setup'
                                     */
  real_T LongitudinalDriverModel_tau;
                                  /* Mask Parameter: LongitudinalDriverModel_tau
                                   * Referenced by:
                                   *   '<S95>/Setup'
                                   *   '<S97>/Constant'
                                   */
  real_T Gain_Gain;                    /* Expression: 1/100
                                        * Referenced by: '<S87>/Gain'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S96>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S96>/Saturation'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/100
                                        * Referenced by: '<S87>/Gain1'
                                        */
  real_T u1_UpperSat;                  /* Expression: 1
                                        * Referenced by: '<S96>/0~1'
                                        */
  real_T u1_LowerSat;                  /* Expression: 0
                                        * Referenced by: '<S96>/0~1'
                                        */
  real_T u0_UpperSat;                  /* Expression: 0
                                        * Referenced by: '<S98>/-1~0'
                                        */
  real_T u0_LowerSat;                  /* Expression: -1
                                        * Referenced by: '<S98>/-1~0'
                                        */
  real_T y_Y0;                         /* Computed Parameter: y_Y0
                                        * Referenced by: '<S105>/y'
                                        */
  real_T MILActive_Value;              /* Expression: 1
                                        * Referenced by: '<S13>/MILActive'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S13>/Switch1'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay2'
                                        */
  real_T UnitDelay4_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay4'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay5'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay6'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay7'
                                        */
  real_T UnitDelay8_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay8'
                                        */
  real_T Constant7_Value;              /* Expression: 101325
                                        * Referenced by: '<S10>/Constant7'
                                        */
  real_T UnitDelay9_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay9'
                                        */
  real_T UnitDelay10_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay10'
                                        */
  real_T UnitDelay11_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay11'
                                        */
  real_T UnitDelay12_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay12'
                                        */
  real_T SensorDynamics_A;             /* Computed Parameter: SensorDynamics_A
                                        * Referenced by: '<S83>/Sensor Dynamics'
                                        */
  real_T SensorDynamics_C;             /* Computed Parameter: SensorDynamics_C
                                        * Referenced by: '<S83>/Sensor Dynamics'
                                        */
  real_T radstorpm_Gain;               /* Expression: 30/pi
                                        * Referenced by: '<S83>/rad//s to rpm'
                                        */
  real_T MotorCouplingDynamics_A; /* Computed Parameter: MotorCouplingDynamics_A
                                   * Referenced by: '<S79>/Motor Coupling Dynamics'
                                   */
  real_T MotorCouplingDynamics_C; /* Computed Parameter: MotorCouplingDynamics_C
                                   * Referenced by: '<S79>/Motor Coupling Dynamics'
                                   */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S10>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S10>/Constant3'
                                        */
  real_T Constant2_Value_a;            /* Expression: 1
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S98>/Constant'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S97>/Integrator1'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: 1
                                        * Referenced by: '<S98>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0
                                        * Referenced by: '<S98>/Saturation'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S18>/Switch'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay'
                                        */
  real_T Constant_Value_h;             /* Expression: 0
                                        * Referenced by: '<S96>/Constant'
                                        */
  real_T Constant_Value_hz;            /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 2.23694
                                        * Referenced by: '<S15>/Gain1'
                                        */
  real_T HiLAct_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/HiLAct'
                                        */
  real_T DT_SELECTOR_Value;            /* Expression: 1
                                        * Referenced by: '<Root>/DT_SELECTOR'
                                        */
  real_T tFinal_Value;                 /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S46>/tFinal'
                                        */
  real_T repeat_Value;                 /* Expression: cycleRepeat
                                        * Referenced by: '<S46>/repeat'
                                        */
  real_T Switch_Threshold_o;           /* Expression: 0
                                        * Referenced by: '<S46>/Switch'
                                        */
  real_T uDLookupTable_tableData[601]; /* Expression: DriveCycle.Data
                                        * Referenced by: '<S46>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[601];  /* Expression: DriveCycle.Time
                                        * Referenced by: '<S46>/1-D Lookup Table'
                                        */
  real_T tFinal_Value_h;               /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S22>/tFinal'
                                        */
  real_T repeat_Value_c;               /* Expression: cycleRepeat
                                        * Referenced by: '<S22>/repeat'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S22>/Switch'
                                        */
  real_T uDLookupTable_tableData_l[1370];/* Expression: DriveCycle.Data
                                          * Referenced by: '<S22>/1-D Lookup Table'
                                          */
  real_T uDLookupTable_bp01Data_c[1370];/* Expression: DriveCycle.Time
                                         * Referenced by: '<S22>/1-D Lookup Table'
                                         */
  real_T tFinal_Value_g;               /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S30>/tFinal'
                                        */
  real_T repeat_Value_f;               /* Expression: cycleRepeat
                                        * Referenced by: '<S30>/repeat'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0
                                        * Referenced by: '<S30>/Switch'
                                        */
  real_T uDLookupTable_tableData_n[766];/* Expression: DriveCycle.Data
                                         * Referenced by: '<S30>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_g[766];/* Expression: DriveCycle.Time
                                        * Referenced by: '<S30>/1-D Lookup Table'
                                        */
  real_T tFinal_Value_n;               /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S38>/tFinal'
                                        */
  real_T repeat_Value_p;               /* Expression: cycleRepeat
                                        * Referenced by: '<S38>/repeat'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0
                                        * Referenced by: '<S38>/Switch'
                                        */
  real_T uDLookupTable_tableData_c[241];/* Expression: DriveCycle.Data
                                         * Referenced by: '<S38>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_h[241];/* Expression: DriveCycle.Time
                                        * Referenced by: '<S38>/1-D Lookup Table'
                                        */
  real_T tFinal_Value_f;               /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S54>/tFinal'
                                        */
  real_T repeat_Value_p3;              /* Expression: cycleRepeat
                                        * Referenced by: '<S54>/repeat'
                                        */
  real_T Switch_Threshold_k4;          /* Expression: 0
                                        * Referenced by: '<S54>/Switch'
                                        */
  real_T uDLookupTable_tableData_m[599];/* Expression: DriveCycle.Data
                                         * Referenced by: '<S54>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_n[599];/* Expression: DriveCycle.Time
                                        * Referenced by: '<S54>/1-D Lookup Table'
                                        */
  real_T tFinal_Value_gv;              /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S62>/tFinal'
                                        */
  real_T repeat_Value_o;               /* Expression: cycleRepeat
                                        * Referenced by: '<S62>/repeat'
                                        */
  real_T Switch_Threshold_jc;          /* Expression: 0
                                        * Referenced by: '<S62>/Switch'
                                        */
  real_T uDLookupTable_tableData_d[601];/* Expression: DriveCycle.Data
                                         * Referenced by: '<S62>/1-D Lookup Table'
                                         */
  real_T uDLookupTable_bp01Data_b[601];/* Expression: DriveCycle.Time
                                        * Referenced by: '<S62>/1-D Lookup Table'
                                        */
  real_T tFinal_Value_l;               /* Expression: DriveCycle.Time(end)
                                        * Referenced by: '<S70>/tFinal'
                                        */
  real_T repeat_Value_d;               /* Expression: cycleRepeat
                                        * Referenced by: '<S70>/repeat'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0
                                        * Referenced by: '<S70>/Switch'
                                        */
  real_T uDLookupTable_tableData_k[1061];/* Expression: DriveCycle.Data
                                          * Referenced by: '<S70>/1-D Lookup Table'
                                          */
  real_T uDLookupTable_bp01Data_p[1061];/* Expression: DriveCycle.Time
                                         * Referenced by: '<S70>/1-D Lookup Table'
                                         */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T HiLSwitch_Threshold;          /* Expression: 0
                                        * Referenced by: '<Root>/HiLSwitch'
                                        */
  real_T Gain9_Gain;                   /* Expression: 2.23694
                                        * Referenced by: '<S15>/Gain9'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain2'
                                        */
  real_T radstorpm_Gain_a;             /* Expression: 30/pi
                                        * Referenced by: '<S15>/rad//s to rpm'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain5'
                                        */
  real_T BatteryDischargeDynamics_A;
                               /* Computed Parameter: BatteryDischargeDynamics_A
                                * Referenced by: '<S79>/Battery Discharge Dynamics'
                                */
  real_T BatteryDischargeDynamics_C;
                               /* Computed Parameter: BatteryDischargeDynamics_C
                                * Referenced by: '<S79>/Battery Discharge Dynamics'
                                */
  real_T Gain6_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain6'
                                        */
  real_T Constant6_Value;              /* Expression: 300
                                        * Referenced by: '<S10>/Constant6'
                                        */
  real_T Gain8_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain8'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S114>/Integrator'
                                        */
  real_T mtomile_Gain;                 /* Expression: 0.000621371
                                        * Referenced by: '<S114>/m to mile'
                                        */
  real_T Integrator1_IC_b;             /* Expression: 0
                                        * Referenced by: '<S114>/Integrator1'
                                        */
  real_T Kgtom3CaliforniaPhaseIIGasolineSG_Gain;/* Expression: 1/(1000*0.743)
                                                 * Referenced by: '<S114>/Kg to m^3 California Phase II Gasoline S.G.'
                                                 */
  real_T m3toUSGal_Gain;               /* Expression: 264.172
                                        * Referenced by: '<S114>/m^3 to US Gal'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: Inf
                                        * Referenced by: '<S114>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 1e-3
                                        * Referenced by: '<S114>/Saturation1'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1
                                        * Referenced by: '<S15>/Gain7'
                                        */
  real_T Integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S113>/Integrator'
                                        */
  real_T mtomi_Gain;                   /* Expression: 0.000621371
                                        * Referenced by: '<S113>/m to mi'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: Inf
                                        * Referenced by: '<S113>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0.2
                                        * Referenced by: '<S113>/Saturation'
                                        */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<S113>/Integrator3'
                                        */
  real_T Kgtog_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S113>/Kg to g  '
                                        */
  real_T mtokm_Gain;                   /* Expression: 0.001
                                        * Referenced by: '<S113>/m to km'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: Inf
                                        * Referenced by: '<S113>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: 1
                                        * Referenced by: '<S113>/Saturation1'
                                        */
  real_T Integrator4_IC;               /* Expression: 0
                                        * Referenced by: '<S113>/Integrator4'
                                        */
  real_T Kgtog_Gain_j;                 /* Expression: 1000
                                        * Referenced by: '<S113>/Kg to g   '
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S113>/Integrator2'
                                        */
  real_T Kgtog_Gain_h;                 /* Expression: 1000
                                        * Referenced by: '<S113>/Kg to g '
                                        */
  real_T Integrator1_IC_e;             /* Expression: 0
                                        * Referenced by: '<S113>/Integrator1'
                                        */
  real_T Kgtog_Gain_ji;                /* Expression: 1000
                                        * Referenced by: '<S113>/Kg to g'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: 360
                                        * Referenced by: '<S79>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 200
                                        * Referenced by: '<S79>/Saturation'
                                        */
  real_T wperkw_Value;                 /* Expression: 1000
                                        * Referenced by: '<S114>/w per kw'
                                        */
  real_T USEPAkwhUSgalequivalent_Value;/* Expression: 32.51
                                        * Referenced by: '<S114>/US EPA kwh//USgal equivalent'
                                        */
  real_T sperh_Value;                  /* Expression: 3600
                                        * Referenced by: '<S114>/s per h'
                                        */
  real_T m3pergal_Gain;                /* Expression: 0.00378541
                                        * Referenced by: '<S114>/m^3 per gal'
                                        */
  real_T CaliforniaPhaseIIGasolinedensitykgm3_Gain;/* Expression: 743
                                                    * Referenced by: '<S114>/California Phase II Gasoline density kg//m^3'
                                                    */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S18>/Unit Delay1'
                                        */
  real_T uDLookupTable1_tableData[1370];/* Expression: AccelCycle.Data
                                         * Referenced by: '<S22>/1-D Lookup Table1'
                                         */
  real_T uDLookupTable1_bp01Data[1370];/* Expression: AccelCycle.Time
                                        * Referenced by: '<S22>/1-D Lookup Table1'
                                        */
  real_T TmpRTBAtAdd1Inport2_InitialCondition;/* Expression: 0
                                               * Referenced by: synthesized block
                                               */
  real_T HitCrossing_Offset;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S22>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData[1370];/* Expression: GearCycle.Data
                                         * Referenced by: '<S22>/1-D Lookup Table2'
                                         */
  real_T uDLookupTable2_bp01Data[1370];/* Expression: GearCycle.Time
                                        * Referenced by: '<S22>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable1_tableData_o[766];/* Expression: AccelCycle.Data
                                          * Referenced by: '<S30>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_l[766];/* Expression: AccelCycle.Time
                                         * Referenced by: '<S30>/1-D Lookup Table1'
                                         */
  real_T TmpRTBAtAdd1Inport2_InitialCondition_j;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T HitCrossing_Offset_j;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S30>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData_h[766];/* Expression: GearCycle.Data
                                          * Referenced by: '<S30>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_j[766];/* Expression: GearCycle.Time
                                         * Referenced by: '<S30>/1-D Lookup Table2'
                                         */
  real_T uDLookupTable1_tableData_h[241];/* Expression: AccelCycle.Data
                                          * Referenced by: '<S38>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_e[241];/* Expression: AccelCycle.Time
                                         * Referenced by: '<S38>/1-D Lookup Table1'
                                         */
  real_T TmpRTBAtAdd1Inport2_InitialCondition_p;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T HitCrossing_Offset_g;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S38>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData_j[241];/* Expression: GearCycle.Data
                                          * Referenced by: '<S38>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_l[241];/* Expression: GearCycle.Time
                                         * Referenced by: '<S38>/1-D Lookup Table2'
                                         */
  real_T uDLookupTable1_tableData_k[601];/* Expression: AccelCycle.Data
                                          * Referenced by: '<S46>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_a[601];/* Expression: AccelCycle.Time
                                         * Referenced by: '<S46>/1-D Lookup Table1'
                                         */
  real_T TmpRTBAtAdd1Inport2_InitialCondition_a;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T HitCrossing_Offset_gs;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S46>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData_a[601];/* Expression: GearCycle.Data
                                          * Referenced by: '<S46>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_p[601];/* Expression: GearCycle.Time
                                         * Referenced by: '<S46>/1-D Lookup Table2'
                                         */
  real_T uDLookupTable1_tableData_e[599];/* Expression: AccelCycle.Data
                                          * Referenced by: '<S54>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_j[599];/* Expression: AccelCycle.Time
                                         * Referenced by: '<S54>/1-D Lookup Table1'
                                         */
  real_T TmpRTBAtAdd1Inport2_InitialCondition_l;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T HitCrossing_Offset_k;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S54>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData_f[599];/* Expression: GearCycle.Data
                                          * Referenced by: '<S54>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_a[599];/* Expression: GearCycle.Time
                                         * Referenced by: '<S54>/1-D Lookup Table2'
                                         */
  real_T uDLookupTable1_tableData_p[601];/* Expression: AccelCycle.Data
                                          * Referenced by: '<S62>/1-D Lookup Table1'
                                          */
  real_T uDLookupTable1_bp01Data_h[601];/* Expression: AccelCycle.Time
                                         * Referenced by: '<S62>/1-D Lookup Table1'
                                         */
  real_T TmpRTBAtAdd1Inport2_InitialCondition_k;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T HitCrossing_Offset_f;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S62>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData_o[601];/* Expression: GearCycle.Data
                                          * Referenced by: '<S62>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable2_bp01Data_jw[601];/* Expression: GearCycle.Time
                                          * Referenced by: '<S62>/1-D Lookup Table2'
                                          */
  real_T uDLookupTable1_tableData_d[1061];/* Expression: AccelCycle.Data
                                           * Referenced by: '<S70>/1-D Lookup Table1'
                                           */
  real_T uDLookupTable1_bp01Data_ja[1061];/* Expression: AccelCycle.Time
                                           * Referenced by: '<S70>/1-D Lookup Table1'
                                           */
  real_T TmpRTBAtAdd1Inport2_InitialCondition_f;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T HitCrossing_Offset_l;
              /* Expression: min(0.5,(DriveCycle.Time(2)-DriveCycle.Time(1))./2)
               * Referenced by: '<S70>/Hit  Crossing'
               */
  real_T uDLookupTable2_tableData_l[1061];/* Expression: GearCycle.Data
                                           * Referenced by: '<S70>/1-D Lookup Table2'
                                           */
  real_T uDLookupTable2_bp01Data_n[1061];/* Expression: GearCycle.Time
                                          * Referenced by: '<S70>/1-D Lookup Table2'
                                          */
  real_T CouplingDynamics1_A;         /* Computed Parameter: CouplingDynamics1_A
                                       * Referenced by: '<S79>/Coupling Dynamics1'
                                       */
  real_T CouplingDynamics1_C;         /* Computed Parameter: CouplingDynamics1_C
                                       * Referenced by: '<S79>/Coupling Dynamics1'
                                       */
  real_T Switch_Threshold_i;           /* Expression: 0
                                        * Referenced by: '<S13>/Switch'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: 400
                                        * Referenced by: '<S79>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_m;       /* Expression: -400
                                        * Referenced by: '<S79>/Saturation1'
                                        */
  real_T ElectronicThrottleActuatorDynamics_A;
                     /* Computed Parameter: ElectronicThrottleActuatorDynamics_A
                      * Referenced by: '<S83>/Electronic Throttle Actuator Dynamics'
                      */
  real_T ElectronicThrottleActuatorDynamics_C;
                     /* Computed Parameter: ElectronicThrottleActuatorDynamics_C
                      * Referenced by: '<S83>/Electronic Throttle Actuator Dynamics'
                      */
  real_T Saturation1_UpperSat_i;       /* Expression: inf
                                        * Referenced by: '<S84>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_d;       /* Expression: 0
                                        * Referenced by: '<S84>/Saturation1'
                                        */
  real_T Integrator2_IC_m;             /* Expression: 0
                                        * Referenced by: '<S108>/Integrator2'
                                        */
  real_T UnitDelay_InitialCondition_c[2];/* Expression: [0,0]
                                          * Referenced by: '<S108>/Unit Delay'
                                          */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S109>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S109>/Constant1'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S90>/Zero'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 1/9.81
                                        * Referenced by: '<S15>/Gain'
                                        */
  real_T mto100Km_Gain;                /* Expression: 1/1000/100
                                        * Referenced by: '<S114>/m to 100Km'
                                        */
  real_T Saturation_UpperSat_cj;       /* Expression: Inf
                                        * Referenced by: '<S114>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0.1
                                        * Referenced by: '<S114>/Saturation'
                                        */
  real_T m3toL_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S114>/m^3 to L'
                                        */
  real_T mstomph_Gain;                 /* Expression: 2.23694
                                        * Referenced by: '<S15>/m//s to mph'
                                        */
  uint8_T Gain2_Gain_b;                /* Computed Parameter: Gain2_Gain_b
                                        * Referenced by: '<S87>/Gain2'
                                        */
  uint8_T Gain3_Gain_b;                /* Computed Parameter: Gain3_Gain_b
                                        * Referenced by: '<S87>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Blazer_Plant_Model_T {
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
    void* dataAddress[520];
    int32_T* vardimsAddress[520];
    RTWLoggingFcnPtr loggingPtrs[520];
    rtwCAPI_ModelMappingInfo* childMMI[7];
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
      boolean_T b_TID1_2;
    } RateInteraction;

    SimTimeStep *simTimeStep;
    boolean_T *stopRequestedFlag;
  } Timing;
};

typedef struct {
  B_Blazer_Plant_Model_c_T rtb;
  DW_Blazer_Plant_Model_f_T rtdw;
  RT_MODEL_Blazer_Plant_Model_T rtm;
} MdlrefDW_Blazer_Plant_Model_T;

/* Model reference registration function */
extern void Blazer_Plant_Model_initialize(const char_T **rt_errorStatus,
  boolean_T *rt_stopRequested, RTWSolverInfo *rt_solverInfo, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, int_T
  mdlref_TID2, RT_MODEL_Blazer_Plant_Model_T *const Blazer_Plant_Model_M,
  B_Blazer_Plant_Model_c_T *localB, DW_Blazer_Plant_Model_f_T *localDW,
  X_Blazer_Plant_Model_n_T *localX, rtwCAPI_ModelMappingInfo *rt_ParentMMI,
  const char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Blazer_Plant_Model_GetCAPIStaticMap(void);
extern void Blazer_Plant_Model_Init(real_T *rty_Plantoutway_PCM_to_HSC_Gear,
  B_Blazer_Plant_Model_c_T *localB, DW_Blazer_Plant_Model_f_T *localDW,
  X_Blazer_Plant_Model_n_T *localX);
extern void Blazer_Plant_Model_Reset(real_T *rty_Plantoutway_PCM_to_HSC_Gear,
  DW_Blazer_Plant_Model_f_T *localDW, X_Blazer_Plant_Model_n_T *localX);
extern void Blazer_Plant_Model_Deriv(real_T *rty_Plantoutway_PCM_to_HSC_xdotref,
  B_Blazer_Plant_Model_c_T *localB, DW_Blazer_Plant_Model_f_T *localDW,
  X_Blazer_Plant_Model_n_T *localX, XDot_Blazer_Plant_Model_n_T *localXdot);
extern void Blazer_Plant_Model_Disable(DW_Blazer_Plant_Model_f_T *localDW);
extern void Blazer_Plant_Model_UpdateTID0(RT_MODEL_Blazer_Plant_Model_T * const
  Blazer_Plant_Model_M, real_T *rty_Plantoutway_PCM_to_HSC_VehSpdAvgDrvn,
  B_Blazer_Plant_Model_c_T *localB, DW_Blazer_Plant_Model_f_T *localDW);
extern void Blazer_Plant_Model_UpdateTID1(void);
extern void Blazer_Plant_Model_UpdateTID2(void);
extern void Blazer_Plant_ModelTID0(RT_MODEL_Blazer_Plant_Model_T * const
  Blazer_Plant_Model_M, const CntrlDesk *rtu_CntrlDesk, const HSCOutputs
  *rtu_HSCOutput, const CAN_to_Plant *rtu_CANtoPlant, real_T
  *rty_Plantoutway_PCM_to_HSC_APP, real_T
  *rty_Plantoutway_PCM_to_HSC_VehSpdAvgDrvn, real_T
  *rty_Plantoutway_PCM_to_HSC_Gear, real_T *rty_Plantoutway_PCM_to_HSC_Brake_Pa,
  real_T *rty_Plantoutway_PCM_to_HSC_xdotref, real_T
  *rty_Plantoutway_PCM_to_HSC_BPP, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_BattCurr, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_BattPwr, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_BattV, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_MotTrq, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_BattSoc, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_MotPwrElec, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_MotSpd, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_EngSpd, real_T
  *rty_Plantoutway_ElectricPlant_to_HSC_EngTrqOut, Scope *rty_Scope,
  B_Blazer_Plant_Model_c_T *localB, DW_Blazer_Plant_Model_f_T *localDW,
  X_Blazer_Plant_Model_n_T *localX);
extern void Blazer_Plant_ModelTID1(void);
extern void Blazer_Plant_ModelTID2(RT_MODEL_Blazer_Plant_Model_T * const
  Blazer_Plant_Model_M, B_Blazer_Plant_Model_c_T *localB,
  DW_Blazer_Plant_Model_f_T *localDW);

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
 * '<Root>' : 'Blazer_Plant_Model'
 * '<S1>'   : 'Blazer_Plant_Model/50-70 mph test (units in m//s) set sim time to 60 s'
 * '<S2>'   : 'Blazer_Plant_Model/Controllers'
 * '<S3>'   : 'Blazer_Plant_Model/Drive Cycle Source'
 * '<S4>'   : 'Blazer_Plant_Model/Drive Cycle Source1'
 * '<S5>'   : 'Blazer_Plant_Model/Drive Cycle Source2'
 * '<S6>'   : 'Blazer_Plant_Model/Drive Cycle Source3'
 * '<S7>'   : 'Blazer_Plant_Model/Drive Cycle Source4'
 * '<S8>'   : 'Blazer_Plant_Model/Drive Cycle Source5'
 * '<S9>'   : 'Blazer_Plant_Model/Drive Cycle Source6'
 * '<S10>'  : 'Blazer_Plant_Model/Environment'
 * '<S11>'  : 'Blazer_Plant_Model/GM Blazer'
 * '<S12>'  : 'Blazer_Plant_Model/Longitudinal Driver'
 * '<S13>'  : 'Blazer_Plant_Model/Plant Inputs'
 * '<S14>'  : 'Blazer_Plant_Model/RTI Data'
 * '<S15>'  : 'Blazer_Plant_Model/Visualization'
 * '<S16>'  : 'Blazer_Plant_Model/Controllers/PCM Input'
 * '<S17>'  : 'Blazer_Plant_Model/Controllers/PCM Output'
 * '<S18>'  : 'Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)'
 * '<S19>'  : 'Blazer_Plant_Model/Controllers/Powertrain Control Module (PCM)/Engine Control Module (ECM)'
 * '<S20>'  : 'Blazer_Plant_Model/Drive Cycle Source/Signal Routing'
 * '<S21>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode'
 * '<S22>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous'
 * '<S23>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem'
 * '<S24>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S25>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S26>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S27>'  : 'Blazer_Plant_Model/Drive Cycle Source/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S28>'  : 'Blazer_Plant_Model/Drive Cycle Source1/Signal Routing'
 * '<S29>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode'
 * '<S30>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous'
 * '<S31>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem'
 * '<S32>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S33>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S34>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S35>'  : 'Blazer_Plant_Model/Drive Cycle Source1/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S36>'  : 'Blazer_Plant_Model/Drive Cycle Source2/Signal Routing'
 * '<S37>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode'
 * '<S38>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous'
 * '<S39>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem'
 * '<S40>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S41>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S42>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S43>'  : 'Blazer_Plant_Model/Drive Cycle Source2/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S44>'  : 'Blazer_Plant_Model/Drive Cycle Source3/Signal Routing'
 * '<S45>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode'
 * '<S46>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous'
 * '<S47>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem'
 * '<S48>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S49>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S50>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S51>'  : 'Blazer_Plant_Model/Drive Cycle Source3/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S52>'  : 'Blazer_Plant_Model/Drive Cycle Source4/Signal Routing'
 * '<S53>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode'
 * '<S54>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous'
 * '<S55>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem'
 * '<S56>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S57>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S58>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S59>'  : 'Blazer_Plant_Model/Drive Cycle Source4/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S60>'  : 'Blazer_Plant_Model/Drive Cycle Source5/Signal Routing'
 * '<S61>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode'
 * '<S62>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous'
 * '<S63>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem'
 * '<S64>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S65>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S66>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S67>'  : 'Blazer_Plant_Model/Drive Cycle Source5/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S68>'  : 'Blazer_Plant_Model/Drive Cycle Source6/Signal Routing'
 * '<S69>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode'
 * '<S70>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous'
 * '<S71>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem'
 * '<S72>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/Fault Mode'
 * '<S73>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/TracePlot'
 * '<S74>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/Fault Mode/Fault Off'
 * '<S75>'  : 'Blazer_Plant_Model/Drive Cycle Source6/timing mode/Continuous/FaultSystem/TracePlot/SimPlotOff'
 * '<S76>'  : 'Blazer_Plant_Model/GM Blazer/Drivetrain'
 * '<S77>'  : 'Blazer_Plant_Model/GM Blazer/Drivetrain Output'
 * '<S78>'  : 'Blazer_Plant_Model/GM Blazer/Drivetrain Plant Input'
 * '<S79>'  : 'Blazer_Plant_Model/GM Blazer/Electric Plant'
 * '<S80>'  : 'Blazer_Plant_Model/GM Blazer/Electric Plant Input'
 * '<S81>'  : 'Blazer_Plant_Model/GM Blazer/Electric Plant Output'
 * '<S82>'  : 'Blazer_Plant_Model/GM Blazer/Engine'
 * '<S83>'  : 'Blazer_Plant_Model/GM Blazer/Engine Plant Input'
 * '<S84>'  : 'Blazer_Plant_Model/GM Blazer/Engine Plant Output'
 * '<S85>'  : 'Blazer_Plant_Model/GM Blazer/Electric Plant/Battery'
 * '<S86>'  : 'Blazer_Plant_Model/GM Blazer/Electric Plant/Motor'
 * '<S87>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop'
 * '<S88>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model'
 * '<S89>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/External Action Routing'
 * '<S90>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver'
 * '<S91>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control'
 * '<S92>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/LPF'
 * '<S93>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing'
 * '<S94>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Shift'
 * '<S95>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive'
 * '<S96>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override'
 * '<S97>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF'
 * '<S98>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override'
 * '<S99>'  : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Powertrain Response'
 * '<S100>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup'
 * '<S101>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Vehicle'
 * '<S102>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold'
 * '<S103>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through'
 * '<S104>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold'
 * '<S105>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through'
 * '<S106>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Powertrain Response/Unfiltered'
 * '<S107>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/LPF/pass'
 * '<S108>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics'
 * '<S109>' : 'Blazer_Plant_Model/Longitudinal Driver/Closed Loop/Longitudinal Driver Model/Longitudinal Driver/Shift/None'
 * '<S110>' : 'Blazer_Plant_Model/RTI Data/RTI Data Store'
 * '<S111>' : 'Blazer_Plant_Model/RTI Data/RTI Data Store/RTI Data Store'
 * '<S112>' : 'Blazer_Plant_Model/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S113>' : 'Blazer_Plant_Model/Visualization/Emission Calculations'
 * '<S114>' : 'Blazer_Plant_Model/Visualization/Performance Calculations'
 */
#endif                                 /* RTW_HEADER_Blazer_Plant_Model_h_ */

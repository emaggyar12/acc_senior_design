/*
 * Code generation for system model 'DrivetrainHevP4'
 * For more details, see corresponding source file DrivetrainHevP4.c
 *
 */

#ifndef RTW_HEADER_DrivetrainHevP4_h_
#define RTW_HEADER_DrivetrainHevP4_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DrivetrainHevP4_COMMON_INCLUDES_
# define DrivetrainHevP4_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* DrivetrainHevP4_COMMON_INCLUDES_ */

#include "DrivetrainHevP4_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "rtGetInf.h"

/* Block signals for system '<S19>/Open Differential' */
typedef struct {
  real_T TmpSignalConversionAtSFunctionInport1[3];/* '<S19>/Open Differential' */
  real_T xdot[2];                      /* '<S19>/Open Differential' */
} B_OpenDifferential_DrivetrainHevP4_T;

/* Block signals for system '<S207>/Simple Magic Tire' */
typedef struct {
  real_T TmpSignalConversionAtSFunctionInport5[5];/* '<S207>/Simple Magic Tire' */
  real_T TmpSignalConversionAtSFunctionInport10[16];/* '<S207>/Simple Magic Tire' */
  real_T TmpSignalConversionAtSFunctionInport15[24];/* '<S207>/Simple Magic Tire' */
  real_T Fx;                           /* '<S207>/Simple Magic Tire' */
  real_T My;                           /* '<S207>/Simple Magic Tire' */
  real_T Kappa;                        /* '<S207>/Simple Magic Tire' */
  real_T Re;                           /* '<S207>/Simple Magic Tire' */
  real_T FzTire;                       /* '<S207>/Simple Magic Tire' */
} B_SimpleMagicTire_DrivetrainHevP4_T;

/* Block signals for system '<S222>/Clutch' */
typedef struct {
  real_T Tout;                         /* '<S222>/Clutch' */
  real_T Tfmaxs;                       /* '<S222>/Clutch' */
  real_T Tout_o;                       /* '<S222>/Clutch' */
  real_T Tfmaxs_d;                     /* '<S222>/Clutch' */
  real_T Omega;                        /* '<S222>/Clutch' */
  real_T Omegadot;                     /* '<S222>/Clutch' */
  real_T ReactionTorque;               /* '<S222>/Clutch' */
  real_T Myb;                          /* '<S222>/Clutch' */
  real_T omegawheel;                   /* '<S229>/omega wheel' */
  real_T u;                            /* '<S229>/-4' */
  real_T TrigonometricFunction;        /* '<S229>/Trigonometric Function' */
  real_T MaxDynamicFrictionTorque1;  /* '<S229>/Max Dynamic Friction Torque1' */
  real_T OutputDamping;                /* '<S229>/Output Damping' */
  real_T OutputSum;                    /* '<S229>/Output Sum' */
  real_T OutputInertia;                /* '<S229>/Output Inertia' */
  real_T OutputDamping_f;              /* '<S236>/Output Damping' */
  real_T Sum2;                         /* '<S236>/Sum2' */
  real_T Sum1;                         /* '<S236>/Sum1' */
  real_T Abs;                          /* '<S233>/Abs' */
  real_T UnaryMinus;                   /* '<S237>/Unary Minus' */
  real_T Abs_b;                        /* '<S238>/Abs' */
  real_T Abs_n;                        /* '<S239>/Abs' */
  boolean_T RelationalOperator;        /* '<S233>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S238>/Relational Operator' */
  boolean_T UnitDelay;                 /* '<S235>/Unit Delay' */
  boolean_T CombinatorialLogic;        /* '<S235>/Combinatorial  Logic' */
  boolean_T RelationalOperator_e;      /* '<S239>/Relational Operator' */
} B_Clutch_DrivetrainHevP4_p_T;

/* Block states (default storage) for system '<S222>/Clutch' */
typedef struct {
  real_T lastMajorTime;                /* '<S222>/Clutch' */
  boolean_T UnitDelay_DSTATE;          /* '<S235>/Unit Delay' */
  int8_T TmpIfAtSlippingInport3_ActiveSubsystem;/* synthesized block */
  int8_T TmpIfAtLockedInport2_ActiveSubsystem;/* synthesized block */
  uint8_T is_active_c8_autolibshared;  /* '<S222>/Clutch' */
  uint8_T is_c8_autolibshared;         /* '<S222>/Clutch' */
} DW_Clutch_DrivetrainHevP4_b_T;

/* Continuous states for system '<S222>/Clutch' */
typedef struct {
  real_T omegaWheel;                   /* '<S229>/omega wheel' */
} X_Clutch_DrivetrainHevP4_o_T;

/* State derivatives for system '<S222>/Clutch' */
typedef struct {
  real_T omegaWheel;                   /* '<S229>/omega wheel' */
} XDot_Clutch_DrivetrainHevP4_f_T;

/* State Disabled for system '<S222>/Clutch' */
typedef struct {
  boolean_T omegaWheel;                /* '<S229>/omega wheel' */
} XDis_Clutch_DrivetrainHevP4_e_T;

/* Block signals for system '<S211>/Clutch' */
typedef struct {
  B_Clutch_DrivetrainHevP4_p_T sf_Clutch;/* '<S222>/Clutch' */
} B_CoreSubsys_DrivetrainHevP4_T;

/* Block states (default storage) for system '<S211>/Clutch' */
typedef struct {
  DW_Clutch_DrivetrainHevP4_b_T sf_Clutch;/* '<S222>/Clutch' */
} DW_CoreSubsys_DrivetrainHevP4_T;

/* Continuous states for system '<S211>/Clutch' */
typedef struct {
  X_Clutch_DrivetrainHevP4_o_T sf_Clutch;/* '<S222>/Clutch' */
} X_CoreSubsys_DrivetrainHevP4_T;

/* State derivatives for system '<S211>/Clutch' */
typedef struct {
  XDot_Clutch_DrivetrainHevP4_f_T sf_Clutch;/* '<S222>/Clutch' */
} XDot_CoreSubsys_DrivetrainHevP4_T;

/* State Disabled for system '<S211>/Clutch' */
typedef struct {
  XDis_Clutch_DrivetrainHevP4_e_T sf_Clutch;/* '<S222>/Clutch' */
} XDis_CoreSubsys_DrivetrainHevP4_T;

/* Block signals for system '<S211>/Clutch' */
typedef struct {
  B_CoreSubsys_DrivetrainHevP4_T CoreSubsys;/* '<S211>/Clutch' */
} B_Clutch_DrivetrainHevP4_T;

/* Block states (default storage) for system '<S211>/Clutch' */
typedef struct {
  DW_CoreSubsys_DrivetrainHevP4_T CoreSubsys;/* '<S211>/Clutch' */
} DW_Clutch_DrivetrainHevP4_T;

/* Continuous states for system '<S211>/Clutch' */
typedef struct {
  X_CoreSubsys_DrivetrainHevP4_T CoreSubsys;/* '<S222>/CoreSubsys' */
} X_Clutch_DrivetrainHevP4_T;

/* State derivatives for system '<S211>/Clutch' */
typedef struct {
  XDot_CoreSubsys_DrivetrainHevP4_T CoreSubsys;/* '<S222>/CoreSubsys' */
} XDot_Clutch_DrivetrainHevP4_T;

/* State Disabled for system '<S211>/Clutch' */
typedef struct {
  XDis_CoreSubsys_DrivetrainHevP4_T CoreSubsys;/* '<S222>/CoreSubsys' */
} XDis_Clutch_DrivetrainHevP4_T;

/* Block signals for model 'DrivetrainHevP4' */
typedef struct {
  real_T Integrator;                   /* '<S164>/Integrator' */
  real_T VectorConcatenate2[3];        /* '<S161>/Vector Concatenate2' */
  real_T Add2;                         /* '<S211>/Add2' */
  real_T Integrator1;                  /* '<S159>/Integrator1' */
  real_T SignalCopy1;                  /* '<S220>/Signal Copy1' */
  real_T Memory;                       /* '<S12>/Memory' */
  real_T domega_o;                     /* '<S11>/domega_o' */
  real_T Integrator_c;                 /* '<S12>/Integrator' */
  real_T Gain2;                        /* '<S11>/Gain2' */
  real_T Integrator_j;                 /* '<S11>/Integrator' */
  real_T Gain1;                        /* '<S11>/Gain1' */
  real_T Subtract1;                    /* '<S11>/Subtract1' */
  real_T uNF;                          /* '<S203>/2//NF' */
  real_T Integrator_a;                 /* '<S240>/Integrator' */
  real_T Product1;                     /* '<S224>/Product1' */
  real_T Add1;                         /* '<S211>/Add1' */
  real_T Signconvention;               /* '<S211>/Sign convention' */
  real_T FrontBias;                    /* '<S203>/Front Bias' */
  real_T TorqueConversion1;            /* '<S226>/Torque Conversion1' */
  real_T product;                      /* '<S226>/product' */
  real_T DisallowNegativeBrakeTorque;
                                   /* '<S226>/Disallow Negative Brake Torque' */
  real_T TorqueConversion;             /* '<S226>/Torque Conversion' */
  real_T Ratioofstatictokinetic;       /* '<S223>/Ratio of static to kinetic' */
  real_T NF;                           /* '<S203>/NF' */
  real_T Add2_h;                       /* '<S249>/Add2' */
  real_T Integrator1_i;                /* '<S158>/Integrator1' */
  real_T SignalCopy1_l;                /* '<S258>/Signal Copy1' */
  real_T Memory_e;                     /* '<S40>/Memory' */
  real_T domega_o_k;                   /* '<S39>/domega_o' */
  real_T Integrator_jf;                /* '<S40>/Integrator' */
  real_T Gain2_i;                      /* '<S39>/Gain2' */
  real_T Integrator_je;                /* '<S39>/Integrator' */
  real_T Gain1_f;                      /* '<S39>/Gain1' */
  real_T Subtract1_b;                  /* '<S39>/Subtract1' */
  real_T uNR;                          /* '<S203>/2//NR' */
  real_T Integrator_i;                 /* '<S278>/Integrator' */
  real_T Product1_f;                   /* '<S262>/Product1' */
  real_T Add1_m;                       /* '<S249>/Add1' */
  real_T Signconvention_p;             /* '<S249>/Sign convention' */
  real_T RearBias;                     /* '<S203>/Rear Bias' */
  real_T TorqueConversion1_g;          /* '<S264>/Torque Conversion1' */
  real_T product_m;                    /* '<S264>/product' */
  real_T DisallowNegativeBrakeTorque_m;
                                   /* '<S264>/Disallow Negative Brake Torque' */
  real_T TorqueConversion_o;           /* '<S264>/Torque Conversion' */
  real_T Ratioofstatictokinetic_o;     /* '<S261>/Ratio of static to kinetic' */
  real_T NR;                           /* '<S203>/NR' */
  real_T VectorConcatenate5[3];        /* '<S164>/Vector Concatenate5' */
  real_T VectorConcatenate5_m[3];      /* '<S202>/Vector Concatenate5' */
  real_T UnaryMinus[3];                /* '<S164>/Unary Minus' */
  real_T Add1_o[3];                    /* '<S201>/Add1' */
  real_T Product[3];                   /* '<S201>/Product' */
  real_T SumofElements;                /* '<S201>/Sum of Elements' */
  real_T Sqrt;                         /* '<S201>/Sqrt' */
  real_T Product2;                     /* '<S201>/Product2' */
  real_T TrigonometricFunction;        /* '<S201>/Trigonometric Function' */
  real_T UnaryMinus_n[3];              /* '<S201>/Unary Minus' */
  real_T Switch[3];                    /* '<S201>/Switch' */
  real_T VectorConcatenate[6];         /* '<S201>/Vector Concatenate' */
  real_T Product1_p[6];                /* '<S201>/Product1' */
  real_T uAPabsRT[6];                  /* '<S201>/.5.*A.*Pabs.//R.//T' */
  real_T Product4[3];                  /* '<S201>/Product4' */
  real_T Add6;                         /* '<S164>/Add6' */
  real_T UnitConversion;               /* '<S161>/Unit Conversion' */
  real_T TrigonometricFunction2_o1;    /* '<S164>/Trigonometric Function2' */
  real_T TrigonometricFunction2_o2;    /* '<S164>/Trigonometric Function2' */
  real_T Fz;                           /* '<S164>/m' */
  real_T Product2_n;                   /* '<S164>/Product2' */
  real_T Product3[3];                  /* '<S201>/Product3' */
  real_T Add1_l;                       /* '<S164>/Add1' */
  real_T b;                            /* '<S164>/b' */
  real_T Product1_m;                   /* '<S164>/Product1' */
  real_T Add;                          /* '<S164>/Add' */
  real_T Add3;                         /* '<S164>/Add3' */
  real_T h;                            /* '<S164>/h' */
  real_T Add2_i;                       /* '<S164>/Add2' */
  real_T a;                            /* '<S164>/a' */
  real_T Add4;                         /* '<S164>/Add4' */
  real_T VectorConcatenate4[4];        /* '<S164>/Vector Concatenate4' */
  real_T Selector1[2];                 /* '<S173>/Selector1' */
  real_T Fz_d;                         /* '<S173>/1//NR' */
  real_T Sum;                          /* '<S158>/Sum' */
  real_T Divide;                       /* '<S158>/Divide' */
  real_T Fz_i;                         /* '<S173>/1//NF' */
  real_T Sum_h;                        /* '<S159>/Sum' */
  real_T Divide_i;                     /* '<S159>/Divide' */
  real_T Constant1;                    /* '<S172>/Constant1' */
  real_T Constant11;                   /* '<S172>/Constant11' */
  real_T Constant8;                    /* '<S172>/Constant8' */
  real_T x;                            /* '<S172>/Integrator3' */
  real_T xddot;                        /* '<S164>/1//m' */
  real_T UnitConversion_i;             /* '<S172>/Unit Conversion' */
  real_T Constant10;                   /* '<S173>/Constant10' */
  real_T Constant14;                   /* '<S173>/Constant14' */
  real_T Constant3;                    /* '<S173>/Constant3' */
  real_T Constant4;                    /* '<S173>/Constant4' */
  real_T Constant6;                    /* '<S173>/Constant6' */
  real_T Constant8_e;                  /* '<S173>/Constant8' */
  real_T Constant9;                    /* '<S173>/Constant9' */
  real_T Selector[2];                  /* '<S173>/Selector' */
  real_T UnaryMinus_g;                 /* '<S173>/Unary Minus' */
  real_T UnaryMinus1;                  /* '<S173>/Unary Minus1' */
  real_T TmpSignalConversionAtsincosInport1[3];
  real_T sincos_o1[3];                 /* '<S199>/sincos' */
  real_T sincos_o2[3];                 /* '<S199>/sincos' */
  real_T VectorConcatenate_e[9];       /* '<S200>/Vector Concatenate' */
  real_T Reshape9to3x3columnmajor[9];
                                /* '<S200>/Reshape (9) to [3x3] column-major' */
  real_T Transpose[9];                 /* '<S163>/Transpose' */
  real_T VectorConcatenate5_h[2];      /* '<S161>/Vector Concatenate5' */
  real_T TmpSignalConversionAtProductInport2[3];
  real_T Product_p[3];                 /* '<S163>/Product' */
  real_T VectorConcatenate6[3];        /* '<S161>/Vector Concatenate6' */
  real_T TmpSignalConversionAtsincosInport1_b[3];
  real_T sincos_o1_a[3];               /* '<S177>/sincos' */
  real_T sincos_o2_i[3];               /* '<S177>/sincos' */
  real_T VectorConcatenate_g[9];       /* '<S181>/Vector Concatenate' */
  real_T Reshape9to3x3columnmajor_a[9];
                                /* '<S181>/Reshape (9) to [3x3] column-major' */
  real_T Transpose1[9];                /* '<S175>/Transpose1' */
  real_T VectorConcatenate_j[3];       /* '<S175>/Vector Concatenate' */
  real_T Reshape1[3];                  /* '<S179>/Reshape1' */
  real_T Product_j[3];                 /* '<S179>/Product' */
  real_T Reshape2[3];                  /* '<S179>/Reshape2' */
  real_T Add_k[3];                     /* '<S175>/Add' */
  real_T jxk;                          /* '<S182>/j x k' */
  real_T kxi;                          /* '<S182>/k x i' */
  real_T ixj;                          /* '<S182>/i x j' */
  real_T kxj;                          /* '<S183>/k x j' */
  real_T ixk;                          /* '<S183>/i x k' */
  real_T jxi;                          /* '<S183>/j x i' */
  real_T Sum_d[3];                     /* '<S180>/Sum' */
  real_T Add1_h[3];                    /* '<S175>/Add1' */
  real_T Add_k1;                       /* '<S169>/Add' */
  real_T TmpSignalConversionAtsincosInport1_c[3];
  real_T sincos_o1_l[3];               /* '<S192>/sincos' */
  real_T sincos_o2_o[3];               /* '<S192>/sincos' */
  real_T VectorConcatenate_m[9];       /* '<S193>/Vector Concatenate' */
  real_T Reshape9to3x3columnmajor_e[9];
                                /* '<S193>/Reshape (9) to [3x3] column-major' */
  real_T Transpose_p[9];               /* '<S191>/Transpose' */
  real_T TmpSignalConversionAtProductInport2_b[3];
  real_T Product_m[3];                 /* '<S191>/Product' */
  real_T Reshape1_p[3];                /* '<S178>/Reshape1' */
  real_T Product_c[3];                 /* '<S178>/Product' */
  real_T Reshape2_n[3];                /* '<S178>/Reshape2' */
  real_T V_wb[3];                      /* '<S175>/Add4' */
  real_T sincos_o1_au[3];              /* '<S184>/sincos' */
  real_T sincos_o2_m[3];               /* '<S184>/sincos' */
  real_T VectorConcatenate_gi[9];      /* '<S188>/Vector Concatenate' */
  real_T Reshape9to3x3columnmajor_f[9];
                                /* '<S188>/Reshape (9) to [3x3] column-major' */
  real_T Transpose1_d[9];              /* '<S176>/Transpose1' */
  real_T VectorConcatenate_d[3];       /* '<S176>/Vector Concatenate' */
  real_T Reshape1_f[3];                /* '<S186>/Reshape1' */
  real_T Product_pc[3];                /* '<S186>/Product' */
  real_T Reshape2_h[3];                /* '<S186>/Reshape2' */
  real_T Add_f[3];                     /* '<S176>/Add' */
  real_T jxk_k;                        /* '<S189>/j x k' */
  real_T kxi_i;                        /* '<S189>/k x i' */
  real_T ixj_e;                        /* '<S189>/i x j' */
  real_T kxj_g;                        /* '<S190>/k x j' */
  real_T ixk_h;                        /* '<S190>/i x k' */
  real_T jxi_a;                        /* '<S190>/j x i' */
  real_T Sum_n[3];                     /* '<S187>/Sum' */
  real_T Add1_f[3];                    /* '<S176>/Add1' */
  real_T Reshape1_o[3];                /* '<S185>/Reshape1' */
  real_T Product_i[3];                 /* '<S185>/Product' */
  real_T Reshape2_i[3];                /* '<S185>/Reshape2' */
  real_T V_wb_g[3];                    /* '<S176>/Add4' */
  real_T Product_iv;                   /* '<S194>/Product' */
  real_T UnitConversion_p;             /* '<S194>/Unit Conversion' */
  real_T Product1_d;                   /* '<S194>/Product1' */
  real_T Product8[4];                  /* '<S194>/Product8' */
  real_T UnaryMinus_o;                 /* '<S194>/Unary Minus' */
  real_T UnaryMinus1_l;                /* '<S194>/Unary Minus1' */
  real_T VectorConcatenate1[3];        /* '<S161>/Vector Concatenate1' */
  real_T VectorConcatenate1_b[2];      /* '<S164>/Vector Concatenate1' */
  real_T Sum_f;                        /* '<S139>/Sum' */
  real_T Memory_d;                     /* '<S82>/Memory' */
  real_T domega_o_c;                   /* '<S81>/domega_o' */
  real_T Integrator_ao;                /* '<S82>/Integrator' */
  real_T Gain2_n;                      /* '<S81>/Gain2' */
  real_T Integrator_iq;                /* '<S81>/Integrator' */
  real_T Gain1_k;                      /* '<S81>/Gain1' */
  real_T Subtract1_m;                  /* '<S81>/Subtract1' */
  real_T UnaryMinus_k;                 /* '<S81>/Unary Minus' */
  real_T InputDamping;                 /* '<S142>/Input Damping' */
  real_T OutputDamping;                /* '<S142>/Output Damping' */
  real_T Sum_c;                        /* '<S142>/Sum' */
  real_T InertiaRatio;                 /* '<S142>/Inertia Ratio' */
  real_T Sum1;                         /* '<S142>/Sum1' */
  real_T Abs;                          /* '<S143>/Abs' */
  real_T Memory_a;                     /* '<S145>/Memory' */
  real_T Constant2;                    /* '<S144>/Constant2' */
  real_T Integrator_e;                 /* '<S145>/Integrator' */
  real_T ClutchGain;                   /* '<S144>/ClutchGain' */
  real_T Saturation;                   /* '<S146>/Saturation' */
  real_T TorqueConversion_h;           /* '<S146>/Torque Conversion' */
  real_T Ratioofstatictokinetic_i;     /* '<S146>/Ratio of static to kinetic' */
  real_T ImpellerDamping;              /* '<S141>/Impeller Damping' */
  real_T TurbineDamping;               /* '<S141>/Turbine Damping' */
  real_T Sum_k;                        /* '<S141>/Sum' */
  real_T InertiaRatio_p;               /* '<S141>/Inertia Ratio' */
  real_T Sum1_l;                       /* '<S141>/Sum1' */
  real_T Abs_k;                        /* '<S138>/Abs' */
  real_T IC;                           /* '<S124>/IC' */
  real_T Switch_a;                     /* '<S124>/Switch' */
  real_T IC_e;                         /* '<S129>/IC' */
  real_T Switch_j;                     /* '<S129>/Switch' */
  real_T IC_k;                         /* '<S123>/IC' */
  real_T Switch_b;                     /* '<S123>/Switch' */
  real_T Product_o;                    /* '<S122>/Product' */
  real_T TurbineSpd;                   /* '<S121>/Merge' */
  real_T Product1_h;                   /* '<S122>/Product1' */
  real_T PwrStoredImp;                 /* '<S121>/Merge4' */
  real_T PwrStoredTurb;                /* '<S121>/Merge4' */
  real_T UnaryMinus_od[2];             /* '<S130>/Unary Minus' */
  real_T Saturation1[4];               /* '<S130>/Saturation1' */
  real_T SumofElements1;               /* '<S130>/Sum of Elements1' */
  real_T Abs_c;                        /* '<S130>/Abs' */
  real_T PwrDampLoss;                  /* '<S121>/Merge4' */
  real_T PwrFluidHeatLoss;             /* '<S121>/Merge4' */
  real_T PwrCltchLoss;                 /* '<S121>/Merge4' */
  real_T Saturation_h[7];              /* '<S130>/Saturation' */
  real_T SumofElements_o;              /* '<S130>/Sum of Elements' */
  real_T Switch_c;                     /* '<S132>/Switch' */
  real_T Divide_a;                     /* '<S130>/Divide' */
  real_T ClutchForce;                  /* '<S121>/Clutch Force' */
  real_T s2hz;                         /* '<S144>/s2hz' */
  real_T Hz2rad;                       /* '<S144>/Hz2rad' */
  real_T SpdRatio;                     /* '<S121>/Merge2' */
  real_T DataTypeConversion;           /* '<S144>/Data Type Conversion' */
  real_T Switch_o;                     /* '<S145>/Switch' */
  real_T Sum_a;                        /* '<S145>/Sum' */
  real_T Product_a;                    /* '<S145>/Product' */
  real_T Merge3;                       /* '<S121>/Merge3' */
  real_T Product_oq;                   /* '<S89>/Product' */
  real_T upi;                          /* '<S89>/2*pi' */
  real_T Memory_n;                     /* '<S91>/Memory' */
  real_T Constant1_d;                  /* '<S89>/Constant1' */
  real_T Integrator_jd;                /* '<S91>/Integrator' */
  real_T Memory_d0;                    /* '<S73>/Memory' */
  real_T domega_o_d;                   /* '<S72>/domega_o' */
  real_T Integrator_o;                 /* '<S73>/Integrator' */
  real_T Gain2_k;                      /* '<S72>/Gain2' */
  real_T Integrator_n;                 /* '<S72>/Integrator' */
  real_T Gain1_a;                      /* '<S72>/Gain1' */
  real_T Subtract1_a;                  /* '<S72>/Subtract1' */
  real_T UnaryMinus_d;                 /* '<S72>/Unary Minus' */
  real_T IC_b;                         /* '<S96>/IC' */
  real_T Switch_k;                     /* '<S96>/Switch' */
  real_T IC_a;                         /* '<S94>/IC' */
  real_T Switch_e;                     /* '<S94>/Switch' */
  real_T IC_g;                         /* '<S92>/IC' */
  real_T Switch_l;                     /* '<S92>/Switch' */
  real_T Merge1;                       /* '<S89>/Merge1' */
  real_T Product_jv;                   /* '<S90>/Product' */
  real_T Merge;                        /* '<S89>/Merge' */
  real_T Product2_g;                   /* '<S90>/Product2' */
  real_T Switch_at;                    /* '<S98>/Switch' */
  real_T TransSpdRatio;                /* '<S90>/Product3' */
  real_T Switch_p;                     /* '<S91>/Switch' */
  real_T Sum_j;                        /* '<S91>/Sum' */
  real_T Product_a3;                   /* '<S91>/Product' */
  real_T PwrStoredTrans;               /* '<S89>/Merge2' */
  real_T PwrDampLoss_h;                /* '<S89>/Merge2' */
  real_T PwrEffLoss;                   /* '<S89>/Merge2' */
  real_T Merge3_o;                     /* '<S89>/Merge3' */
  real_T diffDir;                      /* '<S23>/Switch' */
  real_T VectorConcatenate_l[2];       /* '<S19>/Vector Concatenate' */
  real_T Integrator_aj[2];             /* '<S19>/Integrator' */
  real_T Product_f[2];                 /* '<S23>/Product' */
  real_T Gain[2];                      /* '<S23>/Gain' */
  real_T SumofElements_e;              /* '<S23>/Sum of Elements' */
  real_T Subtract;                     /* '<S72>/Subtract' */
  real_T Switch_ct;                    /* '<S73>/Switch' */
  real_T Sum_h3;                       /* '<S73>/Sum' */
  real_T Product_b;                    /* '<S73>/Product' */
  real_T Product1_k;                   /* '<S75>/Product1' */
  real_T UnaryMinus_b;                 /* '<S75>/Unary Minus' */
  real_T PwrDampLoss_h5;               /* '<S75>/Product4' */
  real_T Product_l;                    /* '<S74>/Product' */
  real_T UnaryMinus1_o;                /* '<S72>/Unary Minus1' */
  real_T SignalCopy1_g;                /* '<S72>/Signal Copy1' */
  real_T R;                            /* '<S72>/Signal Copy' */
  real_T TransferredPower[2];          /* '<S74>/Transferred Power' */
  real_T UnaryMinus1_n[2];             /* '<S74>/Unary Minus1' */
  real_T Subtract_p;                   /* '<S81>/Subtract' */
  real_T Switch_g;                     /* '<S82>/Switch' */
  real_T Sum_o;                        /* '<S82>/Sum' */
  real_T Product_jh;                   /* '<S82>/Product' */
  real_T Product1_o;                   /* '<S84>/Product1' */
  real_T UnaryMinus_a;                 /* '<S84>/Unary Minus' */
  real_T PwrDampLoss_n;                /* '<S84>/Product4' */
  real_T Product_j0;                   /* '<S83>/Product' */
  real_T UnaryMinus1_n3;               /* '<S81>/Unary Minus1' */
  real_T SignalCopy1_f;                /* '<S81>/Signal Copy1' */
  real_T R_i;                          /* '<S81>/Signal Copy' */
  real_T TransferredPower_a[2];        /* '<S83>/Transferred Power' */
  real_T UnaryMinus1_nv[2];            /* '<S83>/Unary Minus1' */
  real_T diffDir_k;                    /* '<S51>/Switch' */
  real_T VectorConcatenate_jy[2];      /* '<S47>/Vector Concatenate' */
  real_T Integrator_d[2];              /* '<S47>/Integrator' */
  real_T Product_lu[2];                /* '<S51>/Product' */
  real_T Gain_e[2];                    /* '<S51>/Gain' */
  real_T UnaryMinus1_p[2];             /* '<S51>/Unary Minus1' */
  real_T Gain1_m[2];                   /* '<S51>/Gain1' */
  real_T VectorConcatenate_i[4];       /* '<S51>/Vector Concatenate' */
  real_T Abs_d[3];                     /* '<S53>/Abs' */
  real_T Product1_hd[3];               /* '<S53>/Product1' */
  real_T UnaryMinus_c[3];              /* '<S53>/Unary Minus' */
  real_T Product4_d[3];                /* '<S53>/Product4' */
  real_T SumofElements2;               /* '<S53>/Sum of Elements2' */
  real_T Product1_l;                   /* '<S61>/Product1' */
  real_T Switch_i;                     /* '<S61>/Switch' */
  real_T Product4_m;                   /* '<S61>/Product4' */
  real_T UnaryMinus_dd;                /* '<S39>/Unary Minus' */
  real_T Product1_fe;                  /* '<S59>/Product1' */
  real_T Switch_lc;                    /* '<S59>/Switch' */
  real_T Product4_n;                   /* '<S59>/Product4' */
  real_T Product1_l0;                  /* '<S60>/Product1' */
  real_T Switch_eh;                    /* '<S60>/Switch' */
  real_T Product4_h;                   /* '<S60>/Product4' */
  real_T UnaryMinus2[2];               /* '<S54>/Unary Minus2' */
  real_T diffDir_kr;                   /* '<S54>/Switch1' */
  real_T Product1_db[2];               /* '<S54>/Product1' */
  real_T Gain1_o[2];                   /* '<S54>/Gain1' */
  real_T omegadot[3];                  /* '<S54>/Vector Concatenate' */
  real_T Product5[3];                  /* '<S54>/Product5' */
  real_T KineticPower;                 /* '<S54>/Sum of Elements1' */
  real_T TransferredPower_j[3];        /* '<S52>/Transferred Power' */
  real_T UnaryMinus_b4;                /* '<S52>/Unary Minus' */
  real_T SumofElements3;               /* '<S52>/Sum of Elements3' */
  real_T Subtract_h;                   /* '<S59>/Subtract' */
  real_T Product2_i;                   /* '<S59>/Product2' */
  real_T Subtract_hs;                  /* '<S60>/Subtract' */
  real_T Product2_f;                   /* '<S60>/Product2' */
  real_T Subtract_m;                   /* '<S61>/Subtract' */
  real_T Product2_p;                   /* '<S61>/Product2' */
  real_T Subtract_l;                   /* '<S39>/Subtract' */
  real_T Switch_go;                    /* '<S40>/Switch' */
  real_T Sum_g;                        /* '<S40>/Sum' */
  real_T Product_g;                    /* '<S40>/Product' */
  real_T Product1_o5;                  /* '<S42>/Product1' */
  real_T UnaryMinus_l;                 /* '<S42>/Unary Minus' */
  real_T PwrDampLoss_g;                /* '<S42>/Product4' */
  real_T Product_e;                    /* '<S41>/Product' */
  real_T UnaryMinus1_i;                /* '<S39>/Unary Minus1' */
  real_T SignalCopy1_m;                /* '<S39>/Signal Copy1' */
  real_T R_j;                          /* '<S39>/Signal Copy' */
  real_T TransferredPower_jv[2];       /* '<S41>/Transferred Power' */
  real_T UnaryMinus1_d[2];             /* '<S41>/Unary Minus1' */
  real_T u;                            /* '<S212>/4' */
  real_T Product11;                    /* '<S212>/Product11' */
  real_T Product13;                    /* '<S212>/Product13' */
  real_T Product7;                     /* '<S212>/Product7' */
  real_T Product6;                     /* '<S212>/Product6' */
  real_T Add_g;                        /* '<S212>/Add' */
  real_T Product_po;                   /* '<S212>/Product' */
  real_T SignalCopy;                   /* '<S220>/Signal Copy' */
  real_T Product10;                    /* '<S212>/Product10' */
  real_T Product12;                    /* '<S212>/Product12' */
  real_T Product2_fp;                  /* '<S212>/Product2' */
  real_T Product3_c;                   /* '<S212>/Product3' */
  real_T Product4_f;                   /* '<S212>/Product4' */
  real_T Product5_j;                   /* '<S212>/Product5' */
  real_T TrigonometricFunction_k;      /* '<S212>/Trigonometric Function' */
  real_T Product8_l;                   /* '<S212>/Product8' */
  real_T Product9;                     /* '<S212>/Product9' */
  real_T UnaryMinus1_dr;               /* '<S212>/Unary Minus1' */
  real_T UnaryMinus3;                  /* '<S212>/Unary Minus3' */
  real_T UnaryMinus4;                  /* '<S212>/Unary Minus4' */
  real_T UnaryMinus5;                  /* '<S212>/Unary Minus5' */
  real_T UnaryMinus8;                  /* '<S212>/Unary Minus8' */
  real_T SignalCopy_b;                 /* '<S206>/Signal Copy' */
  real_T GndConstant;                  /* '<S204>/GndConstant' */
  real_T TambConstant;                 /* '<S204>/TambConstant' */
  real_T Product_ls;                   /* '<S224>/Product' */
  real_T Add_ku;                       /* '<S224>/Add' */
  real_T Product3_a;                   /* '<S224>/Product3' */
  real_T Switch_j5;                    /* '<S241>/Switch' */
  real_T Product2_k;                   /* '<S224>/Product2' */
  real_T Sum_dw;                       /* '<S240>/Sum' */
  real_T Product_h;                    /* '<S240>/Product' */
  real_T u_l;                          /* '<S250>/4' */
  real_T Product11_g;                  /* '<S250>/Product11' */
  real_T Product13_n;                  /* '<S250>/Product13' */
  real_T Product7_c;                   /* '<S250>/Product7' */
  real_T Product6_j;                   /* '<S250>/Product6' */
  real_T Add_kj;                       /* '<S250>/Add' */
  real_T Product_p5;                   /* '<S250>/Product' */
  real_T SignalCopy_c;                 /* '<S258>/Signal Copy' */
  real_T Product10_k;                  /* '<S250>/Product10' */
  real_T Product12_p;                  /* '<S250>/Product12' */
  real_T Product2_d;                   /* '<S250>/Product2' */
  real_T Product3_l;                   /* '<S250>/Product3' */
  real_T Product4_dy;                  /* '<S250>/Product4' */
  real_T Product5_f;                   /* '<S250>/Product5' */
  real_T TrigonometricFunction_e;      /* '<S250>/Trigonometric Function' */
  real_T Product8_j;                   /* '<S250>/Product8' */
  real_T Product9_f;                   /* '<S250>/Product9' */
  real_T UnaryMinus1_k;                /* '<S250>/Unary Minus1' */
  real_T UnaryMinus3_d;                /* '<S250>/Unary Minus3' */
  real_T UnaryMinus4_e;                /* '<S250>/Unary Minus4' */
  real_T UnaryMinus5_a;                /* '<S250>/Unary Minus5' */
  real_T UnaryMinus8_m;                /* '<S250>/Unary Minus8' */
  real_T SignalCopy_j;                 /* '<S244>/Signal Copy' */
  real_T GndConstant_l;                /* '<S205>/GndConstant' */
  real_T TambConstant_j;               /* '<S205>/TambConstant' */
  real_T Product_c0;                   /* '<S262>/Product' */
  real_T Add_ke;                       /* '<S262>/Add' */
  real_T Product3_cs;                  /* '<S262>/Product3' */
  real_T Switch_n;                     /* '<S279>/Switch' */
  real_T Product2_ks;                  /* '<S262>/Product2' */
  real_T Sum_e;                        /* '<S278>/Sum' */
  real_T Product_d;                    /* '<S278>/Product' */
  real_T UnaryMinus1_dv[2];            /* '<S23>/Unary Minus1' */
  real_T Gain1_fa[2];                  /* '<S23>/Gain1' */
  real_T VectorConcatenate_k[4];       /* '<S23>/Vector Concatenate' */
  real_T Abs_n[3];                     /* '<S25>/Abs' */
  real_T Product1_e[3];                /* '<S25>/Product1' */
  real_T UnaryMinus_dr[3];             /* '<S25>/Unary Minus' */
  real_T Product4_a[3];                /* '<S25>/Product4' */
  real_T SumofElements2_m;             /* '<S25>/Sum of Elements2' */
  real_T Product1_pt;                  /* '<S33>/Product1' */
  real_T Switch_lk;                    /* '<S33>/Switch' */
  real_T Product4_f3;                  /* '<S33>/Product4' */
  real_T UnaryMinus_cy;                /* '<S11>/Unary Minus' */
  real_T Product1_lk;                  /* '<S31>/Product1' */
  real_T Switch_bl;                    /* '<S31>/Switch' */
  real_T Product4_fd;                  /* '<S31>/Product4' */
  real_T Product1_d2;                  /* '<S32>/Product1' */
  real_T Switch_iu;                    /* '<S32>/Switch' */
  real_T Product4_g;                   /* '<S32>/Product4' */
  real_T UnaryMinus2_g[2];             /* '<S26>/Unary Minus2' */
  real_T diffDir_i;                    /* '<S26>/Switch1' */
  real_T Product1_i[2];                /* '<S26>/Product1' */
  real_T Gain1_c[2];                   /* '<S26>/Gain1' */
  real_T omegadot_k[3];                /* '<S26>/Vector Concatenate' */
  real_T Product5_n[3];                /* '<S26>/Product5' */
  real_T KineticPower_b;               /* '<S26>/Sum of Elements1' */
  real_T TransferredPower_l[3];        /* '<S24>/Transferred Power' */
  real_T UnaryMinus_ao;                /* '<S24>/Unary Minus' */
  real_T SumofElements3_i;             /* '<S24>/Sum of Elements3' */
  real_T Subtract_c;                   /* '<S31>/Subtract' */
  real_T Product2_a;                   /* '<S31>/Product2' */
  real_T Subtract_g;                   /* '<S32>/Subtract' */
  real_T Product2_gh;                  /* '<S32>/Product2' */
  real_T Subtract_k;                   /* '<S33>/Subtract' */
  real_T Product2_j;                   /* '<S33>/Product2' */
  real_T Subtract_cp;                  /* '<S11>/Subtract' */
  real_T Switch_lb;                    /* '<S12>/Switch' */
  real_T Sum_b;                        /* '<S12>/Sum' */
  real_T Product_il;                   /* '<S12>/Product' */
  real_T Product1_es;                  /* '<S14>/Product1' */
  real_T UnaryMinus_bv;                /* '<S14>/Unary Minus' */
  real_T PwrDampLoss_l;                /* '<S14>/Product4' */
  real_T Product_o3;                   /* '<S13>/Product' */
  real_T UnaryMinus1_pg;               /* '<S11>/Unary Minus1' */
  real_T SignalCopy1_f3;               /* '<S11>/Signal Copy1' */
  real_T R_d;                          /* '<S11>/Signal Copy' */
  real_T TransferredPower_n[2];        /* '<S13>/Transferred Power' */
  real_T UnaryMinus1_a[2];             /* '<S13>/Unary Minus1' */
  real_T Fcn;                          /* '<S279>/Fcn' */
  real_T Abs_p;                        /* '<S279>/Abs' */
  real_T ImpAsg_InsertedFor_Omegadot_at_inport_0;/* '<S260>/Clutch' */
  real_T ImpAsg_InsertedFor_Omega_at_inport_0;/* '<S260>/Clutch' */
  real_T ImpAsg_InsertedFor_Myb_at_inport_0;/* '<S260>/Clutch' */
  real_T Fcn_m;                        /* '<S241>/Fcn' */
  real_T Abs_dw;                       /* '<S241>/Abs' */
  real_T ImpAsg_InsertedFor_Omegadot_at_inport_0_m;/* '<S222>/Clutch' */
  real_T ImpAsg_InsertedFor_Omega_at_inport_0_a;/* '<S222>/Clutch' */
  real_T ImpAsg_InsertedFor_Myb_at_inport_0_p;/* '<S222>/Clutch' */
  real_T PumpIntegrator;               /* '<S128>/Pump Integrator' */
  real_T omega;                        /* '<S128>/Turbine Integrator' */
  real_T W_Slip;                       /* '<S128>/W_Slip' */
  real_T u_i;                          /* '<S128>/4' */
  real_T TurbineDamping_f;             /* '<S128>/Turbine Damping' */
  real_T Product1_b;                   /* '<S128>/Product1' */
  real_T ImpellerDamping_o;            /* '<S128>/Impeller Damping' */
  real_T Product_af;                   /* '<S128>/Product' */
  real_T PwrDampLoss_hd;               /* '<S128>/Add' */
  real_T VectorConcatenate_if[48];     /* '<S149>/Vector Concatenate' */
  real_T MinMax;                       /* '<S149>/MinMax' */
  real_T UnaryMinus_i;                 /* '<S155>/Unary Minus' */
  real_T Abs_ce;                       /* '<S149>/Abs' */
  real_T phi;                          /* '<S149>/Switch' */
  real_T Gain_k;                       /* '<S149>/Gain' */
  real_T Switch_pe;                    /* '<S154>/Switch' */
  real_T Switch2;                      /* '<S154>/Switch2' */
  real_T speedratioPrelookup_o2;       /* '<S147>/speed ratio Prelookup' */
  real_T TorqueRatiozetaInterpolation;
                                  /* '<S147>/Torque Ratio zeta Interpolation' */
  real_T Switch_cs;                    /* '<S148>/Switch' */
  real_T Switch1[47];                  /* '<S147>/Switch1' */
  real_T CapacityKfactorInterpolation;
                                 /* '<S147>/Capacity, K-factor Interpolation' */
  real_T Add_a;                        /* '<S149>/Add' */
  real_T TrigonometricFunction_ey;     /* '<S147>/Trigonometric Function' */
  real_T T1;                           /* '<S147>/Divide1' */
  real_T uniclutch;                    /* '<S147>/uniclutch' */
  real_T T2;                           /* '<S147>/Divide2' */
  real_T TrigonometricFunction_g;      /* '<S128>/Trigonometric Function' */
  real_T MaxDynamicFrictionTorque;    /* '<S128>/Max Dynamic Friction Torque' */
  real_T OutputSum;                    /* '<S128>/Output Sum' */
  real_T Add1_a;                       /* '<S128>/Add1' */
  real_T InputSum;                     /* '<S128>/Input Sum' */
  real_T ImpellerInertia;              /* '<S128>/Impeller Inertia' */
  real_T PwrStoredImp_b;               /* '<S128>/Product2' */
  real_T PwrStoredTurb_l;              /* '<S128>/Product3' */
  real_T Product5_k;                   /* '<S128>/Product5' */
  real_T Product_gx;                   /* '<S147>/Product' */
  real_T Product1_c;                   /* '<S147>/Product1' */
  real_T Subtract_j;                   /* '<S147>/Subtract' */
  real_T PwrCltchLoss_g;               /* '<S128>/Unary Minus' */
  real_T TurbineInertia;               /* '<S128>/Turbine Inertia' */
  real_T Switch_f;                     /* '<S155>/Switch' */
  real_T phi_b;                        /* '<S149>/Divide' */
  real_T Fcn_h;                        /* '<S155>/Fcn' */
  real_T Switch1_i;                    /* '<S155>/Switch1' */
  real_T Product_mm;                   /* '<S155>/Product' */
  real_T Integrator_dg;                /* '<S152>/Integrator' */
  real_T Gain_l;                       /* '<S151>/Gain' */
  real_T Saturation_c;                 /* '<S151>/Saturation' */
  real_T Product_b0;                   /* '<S151>/Product' */
  real_T Sum_ag;                       /* '<S152>/Sum' */
  real_T Product_fu;                   /* '<S152>/Product' */
  real_T Product3_a0[47];              /* '<S147>/Product3' */
  real_T omega_h;                      /* '<S127>/Locked Shaft Integrator' */
  real_T ImpellerDamping_i;            /* '<S127>/Impeller Damping' */
  real_T TurbineDamping_e;             /* '<S127>/Turbine Damping' */
  real_T Add1_o4;                      /* '<S127>/Add1' */
  real_T Sum_l;                        /* '<S127>/Sum' */
  real_T Inertia;                      /* '<S127>/Inertia' */
  real_T Product1_j;                   /* '<S127>/Product1' */
  real_T PwrStoredImp_g;               /* '<S127>/Inertia1' */
  real_T PwrStoredTurb_i;              /* '<S127>/Inertia2' */
  real_T UnaryMinus_f;                 /* '<S127>/Unary Minus' */
  real_T PwrDampLoss_j;                /* '<S127>/Product' */
  real_T Fcn_h2;                       /* '<S132>/Fcn' */
  real_T Abs_o;                        /* '<S132>/Abs' */
  real_T N;                            /* '<S115>/Gear2Ratios' */
  real_T Abs_g;                        /* '<S95>/Abs' */
  real_T xe;                           /* '<S95>/xe' */
  real_T b_g;                          /* '<S95>/Gear2damping' */
  real_T Product7_a;                   /* '<S95>/Product7' */
  real_T Sum1_n;                       /* '<S95>/Sum1' */
  real_T Product12_i;                  /* '<S95>/Product12' */
  real_T b_o;                          /* '<S115>/Gear2damping' */
  real_T Product1_k3;                  /* '<S95>/Product1' */
  real_T omega_m;                      /* '<S95>/xv' */
  real_T Product6_b;                   /* '<S95>/Product6' */
  real_T Product5_g;                   /* '<S95>/Product5' */
  real_T Product1_lu;                  /* '<S113>/Product1' */
  real_T Switch_ae;                    /* '<S113>/Switch' */
  real_T Product4_c;                   /* '<S113>/Product4' */
  real_T Sum_ol;                       /* '<S95>/Sum' */
  real_T Product_d3;                   /* '<S95>/Product' */
  real_T Add_e;                        /* '<S95>/Add' */
  real_T Product10_p;                  /* '<S95>/Product10' */
  real_T Product9_h;                   /* '<S95>/Product9' */
  real_T Add1_e;                       /* '<S95>/Add1' */
  real_T Subtract_mr;                  /* '<S113>/Subtract' */
  real_T JN;                           /* '<S95>/Gear2inertias' */
  real_T J1;                           /* '<S95>/Gear2inertias1' */
  real_T Product_i3;                   /* '<S114>/Product' */
  real_T Product2_e;                   /* '<S95>/Product2' */
  real_T Product1_n;                   /* '<S114>/Product1' */
  real_T Gain_h;                       /* '<S114>/Gain' */
  real_T Saturation1_c[3];             /* '<S114>/Saturation1' */
  real_T SumofElements1_o;             /* '<S114>/Sum of Elements1' */
  real_T Abs1;                         /* '<S114>/Abs1' */
  real_T Saturation2[3];               /* '<S114>/Saturation2' */
  real_T SumofElements_b;              /* '<S114>/Sum of Elements' */
  real_T Switch_ez;                    /* '<S116>/Switch' */
  real_T Product2_dv;                  /* '<S114>/Product2' */
  real_T J;                            /* '<S115>/Gear2inertias' */
  real_T Product3_i;                   /* '<S95>/Product3' */
  real_T JFlywheel;                    /* '<S95>/Subtract' */
  real_T Product4_gf;                  /* '<S95>/Product4' */
  real_T Product8_b;                   /* '<S95>/Product8' */
  real_T Fcn_i;                        /* '<S116>/Fcn' */
  real_T Abs_cx;                       /* '<S116>/Abs' */
  real_T Eta4D;                        /* '<S120>/Eta 4D' */
  real_T N_b;                          /* '<S107>/Gear2Ratios' */
  real_T Abs_f;                        /* '<S93>/Abs' */
  real_T Omega;                        /* '<S93>/x' */
  real_T Eta4D_g;                      /* '<S112>/Eta 4D' */
  real_T Product1_fi;                  /* '<S104>/Product1' */
  real_T Switch_pn;                    /* '<S104>/Switch' */
  real_T Product4_ma;                  /* '<S104>/Product4' */
  real_T Subtract_cz;                  /* '<S104>/Subtract' */
  real_T Product2_h;                   /* '<S104>/Product2' */
  real_T Product5_b;                   /* '<S93>/Product5' */
  real_T Product1_o2;                  /* '<S105>/Product1' */
  real_T Switch_p2;                    /* '<S105>/Switch' */
  real_T Product4_k;                   /* '<S105>/Product4' */
  real_T Subtract_f;                   /* '<S105>/Subtract' */
  real_T Product2_o;                   /* '<S105>/Product2' */
  real_T Product_g5;                   /* '<S106>/Product' */
  real_T Product2_o3;                  /* '<S93>/Product2' */
  real_T Product1_a;                   /* '<S106>/Product1' */
  real_T Sum1_e;                       /* '<S93>/Sum1' */
  real_T b_j;                          /* '<S107>/Gear2damping' */
  real_T Product1_ja;                  /* '<S93>/Product1' */
  real_T Product6_a;                   /* '<S93>/Product6' */
  real_T Sum_le;                       /* '<S93>/Sum' */
  real_T Product_dc;                   /* '<S93>/Product' */
  real_T Gain_g;                       /* '<S106>/Gain' */
  real_T Saturation1_m[3];             /* '<S106>/Saturation1' */
  real_T SumofElements1_l;             /* '<S106>/Sum of Elements1' */
  real_T Abs1_b;                       /* '<S106>/Abs1' */
  real_T Saturation2_h[3];             /* '<S106>/Saturation2' */
  real_T SumofElements_j;              /* '<S106>/Sum of Elements' */
  real_T Switch_fc;                    /* '<S108>/Switch' */
  real_T Product2_h4;                  /* '<S106>/Product2' */
  real_T J_i;                          /* '<S107>/Gear2inertias' */
  real_T Product3_a2;                  /* '<S93>/Product3' */
  real_T UnaryMinus_ne;                /* '<S93>/Unary Minus' */
  real_T Product8_h;                   /* '<S93>/Product8' */
  real_T Fcn_k;                        /* '<S108>/Fcn' */
  real_T Abs_cw;                       /* '<S108>/Abs' */
  real_T Fcn_j;                        /* '<S98>/Fcn' */
  real_T Abs_h;                        /* '<S98>/Abs' */
  real_T UnaryMinus_cm;                /* '<S51>/Unary Minus' */
  real_T UnaryMinus_o2;                /* '<S54>/Unary Minus' */
  real_T UnaryMinus_a3;                /* '<S23>/Unary Minus' */
  real_T UnaryMinus_fz;                /* '<S26>/Unary Minus' */
  uint32_T speedratioPrelookup_o1;     /* '<S147>/speed ratio Prelookup' */
  boolean_T VelocitiesMatch;           /* '<S139>/Velocities Match' */
  boolean_T RelationalOperator;        /* '<S143>/Relational Operator' */
  boolean_T Logic;                     /* '<S139>/Logic' */
  boolean_T RelationalOperator_a;      /* '<S138>/Relational Operator' */
  boolean_T Memory_dr;                 /* '<S140>/Memory' */
  boolean_T Compare;                   /* '<S133>/Compare' */
  boolean_T Compare_i;                 /* '<S134>/Compare' */
  boolean_T LogicalOperator;           /* '<S132>/Logical Operator' */
  boolean_T Relay1;                    /* '<S144>/Relay1' */
  boolean_T RelationalOperator_p;      /* '<S144>/Relational Operator' */
  boolean_T Logic_n;                   /* '<S144>/Logic' */
  boolean_T Compare_a;                 /* '<S102>/Compare' */
  boolean_T Compare_h;                 /* '<S103>/Compare' */
  boolean_T LogicalOperator_p;         /* '<S98>/Logical Operator' */
  boolean_T Compare_j;                 /* '<S242>/Compare' */
  boolean_T Compare_b;                 /* '<S243>/Compare' */
  boolean_T LogicalOperator_d;         /* '<S241>/Logical Operator' */
  boolean_T Compare_d;                 /* '<S280>/Compare' */
  boolean_T Compare_id;                /* '<S281>/Compare' */
  boolean_T LogicalOperator_i;         /* '<S279>/Logical Operator' */
  boolean_T Compare_l;                 /* '<S153>/Compare' */
  boolean_T LowerRelop1;               /* '<S154>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S154>/UpperRelop' */
  boolean_T Compare_aj;                /* '<S150>/Compare' */
  boolean_T Compare_c;                 /* '<S157>/Compare' */
  boolean_T Compare_cn;                /* '<S156>/Compare' */
  boolean_T LogicalOperator_ie;        /* '<S155>/Logical Operator' */
  boolean_T Compare_hp;                /* '<S117>/Compare' */
  boolean_T Compare_ca;                /* '<S118>/Compare' */
  boolean_T LogicalOperator_m;         /* '<S116>/Logical Operator' */
  boolean_T Compare_bu;                /* '<S109>/Compare' */
  boolean_T Compare_jb;                /* '<S110>/Compare' */
  boolean_T LogicalOperator_n;         /* '<S108>/Logical Operator' */
  B_Clutch_DrivetrainHevP4_T Clutch_e[1];/* '<S249>/Clutch' */
  B_SimpleMagicTire_DrivetrainHevP4_T sf_SimpleMagicTire_h;/* '<S245>/Simple Magic Tire' */
  B_Clutch_DrivetrainHevP4_T Clutch[1];/* '<S211>/Clutch' */
  B_SimpleMagicTire_DrivetrainHevP4_T sf_SimpleMagicTire;/* '<S207>/Simple Magic Tire' */
  B_OpenDifferential_DrivetrainHevP4_T sf_OpenDifferential_j;/* '<S47>/Open Differential' */
  B_OpenDifferential_DrivetrainHevP4_T sf_OpenDifferential;/* '<S19>/Open Differential' */
} B_DrivetrainHevP4_c_T;

/* Block states (default storage) for model 'DrivetrainHevP4' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S12>/Memory' */
  real_T Memory_PreviousInput_c;       /* '<S40>/Memory' */
  real_T Memory_PreviousInput_h;       /* '<S82>/Memory' */
  real_T Memory_PreviousInput_i;       /* '<S145>/Memory' */
  real_T Memory_PreviousInput_m;       /* '<S91>/Memory' */
  real_T Memory_PreviousInput_a;       /* '<S73>/Memory' */
  real_T m_bpLambda[4];                /* '<S120>/Eta 4D' */
  real_T m_bpLambda_g[4];              /* '<S112>/Eta 4D' */
  uint32_T speedratioPrelookup_DWORK1; /* '<S147>/speed ratio Prelookup' */
  uint32_T m_bpIndex[4];               /* '<S120>/Eta 4D' */
  uint32_T m_bpIndex_f[4];             /* '<S112>/Eta 4D' */
  int_T Integrator_IWORK;              /* '<S12>/Integrator' */
  int_T Integrator_IWORK_d;            /* '<S40>/Integrator' */
  int_T Integrator_IWORK_k;            /* '<S82>/Integrator' */
  int_T Integrator_IWORK_i;            /* '<S145>/Integrator' */
  int_T Integrator_IWORK_a;            /* '<S91>/Integrator' */
  int_T Integrator_IWORK_k3;           /* '<S73>/Integrator' */
  int_T Integrator_IWORK_l;            /* '<S19>/Integrator' */
  int_T Integrator_IWORK_g;            /* '<S47>/Integrator' */
  int_T PumpIntegrator_IWORK;          /* '<S128>/Pump Integrator' */
  int_T TurbineIntegrator_IWORK;       /* '<S128>/Turbine Integrator' */
  int_T LockedShaftIntegrator_IWORK;   /* '<S127>/Locked Shaft Integrator' */
  int_T xe_IWORK;                      /* '<S95>/xe' */
  int_T xv_IWORK;                      /* '<S95>/xv' */
  int_T x_IWORK;                       /* '<S93>/x' */
  int_T VelocitiesMatch_MODE;          /* '<S139>/Velocities Match' */
  int8_T If_ActiveSubsystem;           /* '<S121>/If' */
  int8_T If_ActiveSubsystem_c;         /* '<S89>/If' */
  boolean_T Memory_PreviousInput_o;    /* '<S140>/Memory' */
  boolean_T IC_FirstOutputTime;        /* '<S124>/IC' */
  boolean_T IC_FirstOutputTime_f;      /* '<S129>/IC' */
  boolean_T IC_FirstOutputTime_e;      /* '<S123>/IC' */
  boolean_T Relay1_Mode;               /* '<S144>/Relay1' */
  boolean_T IC_FirstOutputTime_eo;     /* '<S96>/IC' */
  boolean_T IC_FirstOutputTime_k;      /* '<S94>/IC' */
  boolean_T IC_FirstOutputTime_h;      /* '<S92>/IC' */
  boolean_T LPF_MODE;                  /* '<S148>/LPF' */
  DW_Clutch_DrivetrainHevP4_T Clutch_e[1];/* '<S249>/Clutch' */
  DW_Clutch_DrivetrainHevP4_T Clutch[1];/* '<S211>/Clutch' */
} DW_DrivetrainHevP4_f_T;

/* Continuous states for model 'DrivetrainHevP4' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S164>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S159>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S12>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S11>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S240>/Integrator' */
  real_T Integrator1_CSTATE_n;         /* '<S158>/Integrator1' */
  real_T Integrator_CSTATE_a;          /* '<S40>/Integrator' */
  real_T Integrator_CSTATE_p;          /* '<S39>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S278>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S172>/Integrator3' */
  real_T Integrator1_CSTATE_h;         /* '<S161>/Integrator1' */
  real_T Integrator_CSTATE_b;          /* '<S82>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S81>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S145>/Integrator' */
  real_T Integrator_CSTATE_ho;         /* '<S91>/Integrator' */
  real_T Integrator_CSTATE_mi;         /* '<S73>/Integrator' */
  real_T Integrator_CSTATE_bd;         /* '<S72>/Integrator' */
  real_T Integrator_CSTATE_f[2];       /* '<S19>/Integrator' */
  real_T Integrator_CSTATE_m0[2];      /* '<S47>/Integrator' */
  X_Clutch_DrivetrainHevP4_T Clutch_e[1];/* '<S211>/Clutch' */
  X_Clutch_DrivetrainHevP4_T Clutch[1];/* '<S211>/Clutch' */
  real_T PumpIntegrator_CSTATE;        /* '<S128>/Pump Integrator' */
  real_T TurbineIntegrator_CSTATE;     /* '<S128>/Turbine Integrator' */
  real_T Integrator_CSTATE_d;          /* '<S152>/Integrator' */
  real_T LockedShaftIntegrator_CSTATE; /* '<S127>/Locked Shaft Integrator' */
  real_T we;                           /* '<S95>/xe' */
  real_T wv;                           /* '<S95>/xv' */
  real_T w;                            /* '<S93>/x' */
} X_DrivetrainHevP4_n_T;

/* State derivatives for model 'DrivetrainHevP4' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S164>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S159>/Integrator1' */
  real_T Integrator_CSTATE_m;          /* '<S12>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S11>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S240>/Integrator' */
  real_T Integrator1_CSTATE_n;         /* '<S158>/Integrator1' */
  real_T Integrator_CSTATE_a;          /* '<S40>/Integrator' */
  real_T Integrator_CSTATE_p;          /* '<S39>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S278>/Integrator' */
  real_T Integrator3_CSTATE;           /* '<S172>/Integrator3' */
  real_T Integrator1_CSTATE_h;         /* '<S161>/Integrator1' */
  real_T Integrator_CSTATE_b;          /* '<S82>/Integrator' */
  real_T Integrator_CSTATE_e;          /* '<S81>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S145>/Integrator' */
  real_T Integrator_CSTATE_ho;         /* '<S91>/Integrator' */
  real_T Integrator_CSTATE_mi;         /* '<S73>/Integrator' */
  real_T Integrator_CSTATE_bd;         /* '<S72>/Integrator' */
  real_T Integrator_CSTATE_f[2];       /* '<S19>/Integrator' */
  real_T Integrator_CSTATE_m0[2];      /* '<S47>/Integrator' */
  XDot_Clutch_DrivetrainHevP4_T Clutch_e[1];/* '<S211>/Clutch' */
  XDot_Clutch_DrivetrainHevP4_T Clutch[1];/* '<S211>/Clutch' */
  real_T PumpIntegrator_CSTATE;        /* '<S128>/Pump Integrator' */
  real_T TurbineIntegrator_CSTATE;     /* '<S128>/Turbine Integrator' */
  real_T Integrator_CSTATE_d;          /* '<S152>/Integrator' */
  real_T LockedShaftIntegrator_CSTATE; /* '<S127>/Locked Shaft Integrator' */
  real_T we;                           /* '<S95>/xe' */
  real_T wv;                           /* '<S95>/xv' */
  real_T w;                            /* '<S93>/x' */
} XDot_DrivetrainHevP4_n_T;

/* State Disabled for model 'DrivetrainHevP4' */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S164>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S159>/Integrator1' */
  boolean_T Integrator_CSTATE_m;       /* '<S12>/Integrator' */
  boolean_T Integrator_CSTATE_g;       /* '<S11>/Integrator' */
  boolean_T Integrator_CSTATE_o;       /* '<S240>/Integrator' */
  boolean_T Integrator1_CSTATE_n;      /* '<S158>/Integrator1' */
  boolean_T Integrator_CSTATE_a;       /* '<S40>/Integrator' */
  boolean_T Integrator_CSTATE_p;       /* '<S39>/Integrator' */
  boolean_T Integrator_CSTATE_h;       /* '<S278>/Integrator' */
  boolean_T Integrator3_CSTATE;        /* '<S172>/Integrator3' */
  boolean_T Integrator1_CSTATE_h;      /* '<S161>/Integrator1' */
  boolean_T Integrator_CSTATE_b;       /* '<S82>/Integrator' */
  boolean_T Integrator_CSTATE_e;       /* '<S81>/Integrator' */
  boolean_T Integrator_CSTATE_c;       /* '<S145>/Integrator' */
  boolean_T Integrator_CSTATE_ho;      /* '<S91>/Integrator' */
  boolean_T Integrator_CSTATE_mi;      /* '<S73>/Integrator' */
  boolean_T Integrator_CSTATE_bd;      /* '<S72>/Integrator' */
  boolean_T Integrator_CSTATE_f[2];    /* '<S19>/Integrator' */
  boolean_T Integrator_CSTATE_m0[2];   /* '<S47>/Integrator' */
  XDis_Clutch_DrivetrainHevP4_T Clutch_e[1];/* '<S211>/Clutch' */
  XDis_Clutch_DrivetrainHevP4_T Clutch[1];/* '<S211>/Clutch' */
  boolean_T PumpIntegrator_CSTATE;     /* '<S128>/Pump Integrator' */
  boolean_T TurbineIntegrator_CSTATE;  /* '<S128>/Turbine Integrator' */
  boolean_T Integrator_CSTATE_d;       /* '<S152>/Integrator' */
  boolean_T LockedShaftIntegrator_CSTATE;/* '<S127>/Locked Shaft Integrator' */
  boolean_T we;                        /* '<S95>/xe' */
  boolean_T wv;                        /* '<S95>/xv' */
  boolean_T w;                         /* '<S93>/x' */
} XDis_DrivetrainHevP4_n_T;

/* Zero-crossing (trigger) state for model 'DrivetrainHevP4' */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S12>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_m;   /* '<S40>/Integrator' */
  ZCSigState VelocitiesMatch_Input_ZCE;/* '<S139>/Velocities Match' */
  ZCSigState Integrator_Reset_ZCE_l;   /* '<S82>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_f;   /* '<S145>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_k;   /* '<S91>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_p;   /* '<S73>/Integrator' */
} ZCE_DrivetrainHevP4_T;

/* Parameters for system: '<S19>/Open Differential' */
struct P_OpenDifferential_DrivetrainHevP4_T_ {
  real_T OpenDifferential_shaftSwitchMask;/* Expression: shaftSwitchMask
                                           * Referenced by: '<S19>/Open Differential'
                                           */
};

/* Parameters for system: '<S222>/Clutch' */
struct P_Clutch_DrivetrainHevP4_m_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S230>/Constant'
                                        */
  real_T locked_Value;                 /* Expression: 0
                                        * Referenced by: '<S228>/locked'
                                        */
  real_T locked1_Value;                /* Expression: 0
                                        * Referenced by: '<S228>/locked1'
                                        */
  real_T locked2_Value;                /* Expression: 0
                                        * Referenced by: '<S228>/locked2'
                                        */
  real_T u_Gain;                       /* Expression: -4
                                        * Referenced by: '<S229>/-4'
                                        */
  boolean_T yn_Y0;                     /* Computed Parameter: yn_Y0
                                        * Referenced by: '<S231>/yn'
                                        */
  boolean_T yn_Y0_l;                   /* Computed Parameter: yn_Y0_l
                                        * Referenced by: '<S230>/yn'
                                        */
  boolean_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S235>/Unit Delay'
                                */
  boolean_T CombinatorialLogic_table[8];
                                 /* Computed Parameter: CombinatorialLogic_table
                                  * Referenced by: '<S235>/Combinatorial  Logic'
                                  */
};

/* Parameters for system: '<S211>/Clutch' */
struct P_CoreSubsys_DrivetrainHevP4_T_ {
  P_Clutch_DrivetrainHevP4_m_T sf_Clutch;/* '<S222>/Clutch' */
};

/* Parameters for system: '<S211>/Clutch' */
struct P_Clutch_DrivetrainHevP4_T_ {
  P_CoreSubsys_DrivetrainHevP4_T CoreSubsys;/* '<S211>/Clutch' */
};

/* Parameters (default storage) */
struct P_DrivetrainHevP4_T_ {
  real_T Af;                           /* Variable: Af
                                        * Referenced by: '<S201>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T Cd;                           /* Variable: Cd
                                        * Referenced by: '<S201>/Constant'
                                        */
  real_T FZMAX;                        /* Variable: FZMAX
                                        * Referenced by:
                                        *   '<S207>/Simple Magic Tire'
                                        *   '<S245>/Simple Magic Tire'
                                        */
  real_T FZMIN;                        /* Variable: FZMIN
                                        * Referenced by:
                                        *   '<S207>/Simple Magic Tire'
                                        *   '<S245>/Simple Magic Tire'
                                        */
  real_T G[10];                        /* Variable: G
                                        * Referenced by:
                                        *   '<S95>/Gear2damping'
                                        *   '<S95>/Gear2inertias'
                                        *   '<S95>/Gear2inertias1'
                                        *   '<S107>/Gear2Ratios'
                                        *   '<S107>/Gear2damping'
                                        *   '<S107>/Gear2inertias'
                                        *   '<S115>/Gear2Ratios'
                                        *   '<S115>/Gear2damping'
                                        *   '<S115>/Gear2inertias'
                                        *   '<S112>/Eta 4D'
                                        *   '<S120>/Eta 4D'
                                        */
  real_T Iyy_Whl;                      /* Variable: Iyy_Whl
                                        * Referenced by:
                                        *   '<S211>/Clutch'
                                        *   '<S249>/Clutch'
                                        *   '<S212>/Constant2'
                                        *   '<S250>/Constant2'
                                        */
  real_T Jd;                           /* Variable: Jd
                                        * Referenced by:
                                        *   '<S47>/Jd'
                                        *   '<S19>/Jd'
                                        *   '<S54>/Constant5'
                                        *   '<S26>/Constant5'
                                        */
  real_T Ji;                           /* Variable: Ji
                                        * Referenced by:
                                        *   '<S127>/Inertia'
                                        *   '<S127>/Inertia1'
                                        *   '<S128>/Impeller Inertia'
                                        *   '<S141>/Inertia Ratio'
                                        *   '<S142>/Inertia Ratio'
                                        */
  real_T Jout[10];                     /* Variable: Jout
                                        * Referenced by:
                                        *   '<S95>/Gear2inertias'
                                        *   '<S95>/Gear2inertias1'
                                        *   '<S107>/Gear2inertias'
                                        *   '<S115>/Gear2inertias'
                                        */
  real_T Jt;                           /* Variable: Jt
                                        * Referenced by:
                                        *   '<S127>/Inertia'
                                        *   '<S127>/Inertia2'
                                        *   '<S128>/Turbine Inertia'
                                        *   '<S141>/Inertia Ratio'
                                        *   '<S142>/Inertia Ratio'
                                        */
  real_T Jw1;                          /* Variable: Jw1
                                        * Referenced by:
                                        *   '<S47>/Jw1'
                                        *   '<S19>/Jw1'
                                        *   '<S54>/Constant1'
                                        *   '<S26>/Constant1'
                                        */
  real_T Jw2;                          /* Variable: Jw2
                                        * Referenced by:
                                        *   '<S47>/Jw3'
                                        *   '<S19>/Jw3'
                                        *   '<S54>/Constant4'
                                        *   '<S26>/Constant4'
                                        */
  real_T K_c;                          /* Variable: K_c
                                        * Referenced by: '<S144>/ClutchGain'
                                        */
  real_T Lrel;                         /* Variable: Lrel
                                        * Referenced by:
                                        *   '<S224>/Constant2'
                                        *   '<S262>/Constant2'
                                        */
  real_T Mass;                         /* Variable: Mass
                                        * Referenced by:
                                        *   '<S164>/1//m'
                                        *   '<S164>/m'
                                        *   '<S194>/Constant'
                                        *   '<S194>/Constant1'
                                        */
  real_T N[10];                        /* Variable: N
                                        * Referenced by:
                                        *   '<S107>/Gear2Ratios'
                                        *   '<S115>/Gear2Ratios'
                                        */
  real_T NF;                           /* Variable: NF
                                        * Referenced by:
                                        *   '<S203>/2//NF'
                                        *   '<S203>/NF'
                                        *   '<S173>/1//NF'
                                        */
  real_T NR;                           /* Variable: NR
                                        * Referenced by:
                                        *   '<S203>/2//NR'
                                        *   '<S203>/NR'
                                        *   '<S173>/1//NR'
                                        */
  real_T Ndiff;                        /* Variable: Ndiff
                                        * Referenced by:
                                        *   '<S19>/Ndiff2'
                                        *   '<S23>/Gain'
                                        *   '<S26>/Gain1'
                                        */
  real_T Pabs;                         /* Variable: Pabs
                                        * Referenced by: '<S201>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T Re;                           /* Variable: Re
                                        * Referenced by:
                                        *   '<S211>/Clutch'
                                        *   '<S211>/Constant9'
                                        *   '<S249>/Clutch'
                                        *   '<S249>/Constant9'
                                        */
  real_T Reff;                         /* Variable: Reff
                                        * Referenced by: '<S146>/Torque Conversion'
                                        */
  real_T Rm;                           /* Variable: Rm
                                        * Referenced by:
                                        *   '<S226>/Torque Conversion'
                                        *   '<S264>/Torque Conversion'
                                        */
  real_T T;                            /* Variable: T
                                        * Referenced by: '<S160>/AirTempConstant'
                                        */
  real_T Temp_bpts[2];                 /* Variable: Temp_bpts
                                        * Referenced by:
                                        *   '<S112>/Eta 4D'
                                        *   '<S120>/Eta 4D'
                                        */
  real_T Trq_bpts[4];                  /* Variable: Trq_bpts
                                        * Referenced by:
                                        *   '<S112>/Eta 4D'
                                        *   '<S120>/Eta 4D'
                                        */
  real_T UNLOADED_RADIUS;              /* Variable: UNLOADED_RADIUS
                                        * Referenced by:
                                        *   '<S219>/Constant4'
                                        *   '<S257>/Constant4'
                                        */
  real_T VXLOW;                        /* Variable: VXLOW
                                        * Referenced by:
                                        *   '<S207>/Simple Magic Tire'
                                        *   '<S211>/Clutch'
                                        *   '<S245>/Simple Magic Tire'
                                        *   '<S249>/Clutch'
                                        *   '<S242>/Constant'
                                        *   '<S243>/Constant'
                                        *   '<S280>/Constant'
                                        *   '<S281>/Constant'
                                        */
  real_T aMy;                          /* Variable: aMy
                                        * Referenced by:
                                        *   '<S219>/Constant13'
                                        *   '<S257>/Constant13'
                                        */
  real_T a_CG;                         /* Variable: a_CG
                                        * Referenced by:
                                        *   '<S164>/1//(a+b)'
                                        *   '<S164>/1//(a+b) '
                                        *   '<S164>/a'
                                        *   '<S201>/Constant3'
                                        *   '<S175>/R_T1'
                                        */
  real_T alphaMy;                      /* Variable: alphaMy
                                        * Referenced by:
                                        *   '<S219>/Constant18'
                                        *   '<S257>/Constant18'
                                        */
  real_T b;                            /* Variable: b
                                        * Referenced by:
                                        *   '<S39>/Gain2'
                                        *   '<S72>/Gain2'
                                        *   '<S81>/Gain2'
                                        *   '<S11>/Gain2'
                                        *   '<S42>/Constant8'
                                        *   '<S75>/Constant8'
                                        *   '<S84>/Constant8'
                                        *   '<S14>/Constant8'
                                        */
  real_T bMy;                          /* Variable: bMy
                                        * Referenced by:
                                        *   '<S219>/Constant8'
                                        *   '<S257>/Constant8'
                                        */
  real_T b_CG;                         /* Variable: b_CG
                                        * Referenced by:
                                        *   '<S164>/1//(a+b)'
                                        *   '<S164>/1//(a+b) '
                                        *   '<S164>/b'
                                        *   '<S201>/Constant3'
                                        *   '<S176>/R_T1'
                                        */
  real_T bd;                           /* Variable: bd
                                        * Referenced by:
                                        *   '<S47>/bd'
                                        *   '<S19>/bd'
                                        *   '<S53>/Constant8'
                                        *   '<S25>/Constant8'
                                        */
  real_T betaMy;                       /* Variable: betaMy
                                        * Referenced by:
                                        *   '<S219>/Constant17'
                                        *   '<S257>/Constant17'
                                        */
  real_T bi;                           /* Variable: bi
                                        * Referenced by:
                                        *   '<S127>/Impeller Damping'
                                        *   '<S128>/Impeller Damping'
                                        *   '<S141>/Impeller Damping'
                                        *   '<S142>/Input Damping'
                                        */
  real_T bout[10];                     /* Variable: bout
                                        * Referenced by:
                                        *   '<S95>/Gear2damping'
                                        *   '<S107>/Gear2damping'
                                        *   '<S115>/Gear2damping'
                                        */
  real_T br;                           /* Variable: br
                                        * Referenced by:
                                        *   '<S211>/Clutch'
                                        *   '<S249>/Clutch'
                                        */
  real_T bt;                           /* Variable: bt
                                        * Referenced by:
                                        *   '<S127>/Turbine Damping'
                                        *   '<S128>/Turbine Damping'
                                        *   '<S141>/Turbine Damping'
                                        *   '<S142>/Output Damping'
                                        */
  real_T bw1;                          /* Variable: bw1
                                        * Referenced by:
                                        *   '<S47>/bw1'
                                        *   '<S19>/bw1'
                                        *   '<S53>/Constant6'
                                        *   '<S25>/Constant6'
                                        */
  real_T bw2;                          /* Variable: bw2
                                        * Referenced by:
                                        *   '<S47>/bw2'
                                        *   '<S19>/bw2'
                                        *   '<S53>/Constant7'
                                        *   '<S25>/Constant7'
                                        */
  real_T cMy;                          /* Variable: cMy
                                        * Referenced by:
                                        *   '<S219>/Constant15'
                                        *   '<S257>/Constant15'
                                        */
  real_T disk_abore;                   /* Variable: disk_abore
                                        * Referenced by:
                                        *   '<S226>/Disk brake actuator bore'
                                        *   '<S264>/Disk brake actuator bore'
                                        */
  real_T domega_o;                     /* Variable: domega_o
                                        * Referenced by:
                                        *   '<S39>/domega_o'
                                        *   '<S72>/domega_o'
                                        *   '<S81>/domega_o'
                                        *   '<S11>/domega_o'
                                        */
  real_T eta_tbl[720];                 /* Variable: eta_tbl
                                        * Referenced by:
                                        *   '<S112>/Eta 4D'
                                        *   '<S120>/Eta 4D'
                                        */
  real_T g;                            /* Variable: g
                                        * Referenced by:
                                        *   '<S164>/g'
                                        *   '<S194>/Constant'
                                        */
  real_T h;                            /* Variable: h
                                        * Referenced by:
                                        *   '<S164>/h'
                                        *   '<S175>/R_T3'
                                        *   '<S176>/R_T3'
                                        */
  real_T k;                            /* Variable: k
                                        * Referenced by:
                                        *   '<S39>/Gain1'
                                        *   '<S72>/Gain1'
                                        *   '<S81>/Gain1'
                                        *   '<S11>/Gain1'
                                        */
  real_T kappamax;                     /* Variable: kappamax
                                        * Referenced by:
                                        *   '<S207>/Simple Magic Tire'
                                        *   '<S245>/Simple Magic Tire'
                                        */
  real_T lam_x;                        /* Variable: lam_x
                                        * Referenced by:
                                        *   '<S204>/lam_muxConstant'
                                        *   '<S205>/lam_muxConstant'
                                        */
  real_T mu_kinetic;                   /* Variable: mu_kinetic
                                        * Referenced by:
                                        *   '<S223>/Ratio of static to kinetic'
                                        *   '<S261>/Ratio of static to kinetic'
                                        *   '<S226>/Torque Conversion'
                                        *   '<S264>/Torque Conversion'
                                        */
  real_T mu_static;                    /* Variable: mu_static
                                        * Referenced by:
                                        *   '<S223>/Ratio of static to kinetic'
                                        *   '<S261>/Ratio of static to kinetic'
                                        */
  real_T muk;                          /* Variable: muk
                                        * Referenced by:
                                        *   '<S146>/Ratio of static to kinetic'
                                        *   '<S146>/Torque Conversion'
                                        */
  real_T mus;                          /* Variable: mus
                                        * Referenced by: '<S146>/Ratio of static to kinetic'
                                        */
  real_T num_pads;                     /* Variable: num_pads
                                        * Referenced by:
                                        *   '<S226>/Number of brake pads'
                                        *   '<S264>/Number of brake pads'
                                        */
  real_T omega_c;                      /* Variable: omega_c
                                        * Referenced by:
                                        *   '<S39>/omega_c'
                                        *   '<S72>/omega_c'
                                        *   '<S81>/omega_c'
                                        *   '<S11>/omega_c'
                                        */
  real_T omega_o;                      /* Variable: omega_o
                                        * Referenced by:
                                        *   '<S92>/Constant'
                                        *   '<S96>/Constant'
                                        */
  real_T omegai_o;                     /* Variable: omegai_o
                                        * Referenced by:
                                        *   '<S123>/Constant'
                                        *   '<S124>/Constant'
                                        */
  real_T omegal;                       /* Variable: omegal
                                        * Referenced by: '<S144>/Relay1'
                                        */
  real_T omegao;                       /* Variable: omegao
                                        * Referenced by:
                                        *   '<S211>/Clutch'
                                        *   '<S249>/Clutch'
                                        */
  real_T omegat_o;                     /* Variable: omegat_o
                                        * Referenced by: '<S129>/Constant'
                                        */
  real_T omegau;                       /* Variable: omegau
                                        * Referenced by: '<S144>/Relay1'
                                        */
  real_T omegaw1o;                     /* Variable: omegaw1o
                                        * Referenced by:
                                        *   '<S47>/Constant'
                                        *   '<S19>/Constant'
                                        */
  real_T omegaw2o;                     /* Variable: omegaw2o
                                        * Referenced by:
                                        *   '<S47>/Constant1'
                                        *   '<S19>/Constant1'
                                        */
  real_T phi[47];                      /* Variable: phi
                                        * Referenced by:
                                        *   '<S147>/phi'
                                        *   '<S149>/Constant2'
                                        */
  real_T philu;                        /* Variable: philu
                                        * Referenced by: '<S144>/Constant'
                                        */
  real_T press;                        /* Variable: press
                                        * Referenced by:
                                        *   '<S204>/TirePrsConstant'
                                        *   '<S205>/TirePrsConstant'
                                        */
  real_T psi[47];                      /* Variable: psi
                                        * Referenced by: '<S147>/psi'
                                        */
  real_T tauC;                         /* Variable: tauC
                                        * Referenced by: '<S144>/Constant1'
                                        */
  real_T tauTC;                        /* Variable: tauTC
                                        * Referenced by: '<S148>/Constant'
                                        */
  real_T tau_s;                        /* Variable: tau_s
                                        * Referenced by: '<S89>/Constant'
                                        */
  real_T theta_o;                      /* Variable: theta_o
                                        * Referenced by:
                                        *   '<S39>/Integrator'
                                        *   '<S72>/Integrator'
                                        *   '<S81>/Integrator'
                                        *   '<S11>/Integrator'
                                        */
  real_T wc;                           /* Variable: wc
                                        * Referenced by:
                                        *   '<S158>/Constant'
                                        *   '<S159>/Constant'
                                        */
  real_T x_o;                          /* Variable: x_o
                                        * Referenced by: '<S161>/Integrator1'
                                        */
  real_T xdot_o;                       /* Variable: xdot_o
                                        * Referenced by:
                                        *   '<S164>/Integrator'
                                        *   '<S172>/Integrator3'
                                        */
  real_T zeta[47];                     /* Variable: zeta
                                        * Referenced by: '<S147>/zeta'
                                        */
  real_T VehicleBody1DOFLongitudinal_Cl;
                               /* Mask Parameter: VehicleBody1DOFLongitudinal_Cl
                                * Referenced by: '<S201>/Constant1'
                                */
  real_T VehicleBody1DOFLongitudinal_Cpm;
                              /* Mask Parameter: VehicleBody1DOFLongitudinal_Cpm
                               * Referenced by: '<S201>/Constant2'
                               */
  real_T DragForce_Cs[2];              /* Mask Parameter: DragForce_Cs
                                        * Referenced by: '<S201>/Cs'
                                        */
  real_T DragForce_Cym[2];             /* Mask Parameter: DragForce_Cym
                                        * Referenced by: '<S201>/Cym'
                                        */
  real_T IdealFixedGearTransmission_G_o;
                               /* Mask Parameter: IdealFixedGearTransmission_G_o
                                * Referenced by: '<S89>/Constant1'
                                */
  real_T TorqueConverter_KType;        /* Mask Parameter: TorqueConverter_KType
                                        * Referenced by: '<S147>/Constant1'
                                        */
  real_T OpenDifferential_Ndiff;       /* Mask Parameter: OpenDifferential_Ndiff
                                        * Referenced by:
                                        *   '<S47>/Ndiff2'
                                        *   '<S51>/Gain'
                                        *   '<S54>/Gain1'
                                        */
  real_T DragForce_R;                  /* Mask Parameter: DragForce_R
                                        * Referenced by: '<S201>/.5.*A.*Pabs.//R.//T'
                                        */
  real_T HardPointCoordinateTransformFront_R_T2;
                       /* Mask Parameter: HardPointCoordinateTransformFront_R_T2
                        * Referenced by: '<S175>/R_T2'
                        */
  real_T HardPointCoordinateTransformRear_R_T2;
                        /* Mask Parameter: HardPointCoordinateTransformRear_R_T2
                         * Referenced by: '<S176>/R_T2'
                         */
  real_T DragForce_beta_w[2];          /* Mask Parameter: DragForce_beta_w
                                        * Referenced by:
                                        *   '<S201>/Cs'
                                        *   '<S201>/Cym'
                                        */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S153>/Constant'
                                      */
  real_T OpenDifferential_eta;         /* Mask Parameter: OpenDifferential_eta
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T OpenDifferential_eta_l;       /* Mask Parameter: OpenDifferential_eta_l
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T IdealFixedGearTransmission_omegaN_o;
                          /* Mask Parameter: IdealFixedGearTransmission_omegaN_o
                           * Referenced by: '<S94>/Constant'
                           */
  real_T div0protectabspoly_thresh; /* Mask Parameter: div0protectabspoly_thresh
                                     * Referenced by:
                                     *   '<S109>/Constant'
                                     *   '<S110>/Constant'
                                     */
  real_T div0protectabspoly_thresh_c;
                                  /* Mask Parameter: div0protectabspoly_thresh_c
                                   * Referenced by:
                                   *   '<S117>/Constant'
                                   *   '<S118>/Constant'
                                   */
  real_T div0protectpoly_thresh;       /* Mask Parameter: div0protectpoly_thresh
                                        * Referenced by:
                                        *   '<S156>/Constant'
                                        *   '<S157>/Constant'
                                        */
  real_T div0protectabspoly_thresh_e;
                                  /* Mask Parameter: div0protectabspoly_thresh_e
                                   * Referenced by:
                                   *   '<S133>/Constant'
                                   *   '<S134>/Constant'
                                   */
  real_T div0protectabspoly1_thresh;
                                   /* Mask Parameter: div0protectabspoly1_thresh
                                    * Referenced by:
                                    *   '<S102>/Constant'
                                    *   '<S103>/Constant'
                                    */
  real_T Eta4D_bp02Data[9];            /* Expression: omega_bpts
                                        * Referenced by: '<S112>/Eta 4D'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S104>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S104>/Switch'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S105>/Constant'
                                        */
  real_T Switch_Threshold_g;           /* Expression: 0
                                        * Referenced by: '<S105>/Switch'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S106>/Gain'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S106>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -inf
                                        * Referenced by: '<S106>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: inf
                                        * Referenced by: '<S106>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S106>/Saturation2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S106>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S106>/Saturation'
                                        */
  real_T Eta4D_bp02Data_h[9];          /* Expression: omega_bpts
                                        * Referenced by: '<S120>/Eta 4D'
                                        */
  real_T Neutral_Value;                /* Expression: 0
                                        * Referenced by: '<S95>/Neutral'
                                        */
  real_T NoInputTorque_Value;          /* Expression: 0
                                        * Referenced by: '<S95>/No Input Torque'
                                        */
  real_T Constant_Value_a;             /* Expression: 1
                                        * Referenced by: '<S113>/Constant'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0
                                        * Referenced by: '<S113>/Switch'
                                        */
  real_T First_Value;                  /* Expression: 1
                                        * Referenced by: '<S95>/First'
                                        */
  real_T Gain_Gain_e;                  /* Expression: -1
                                        * Referenced by: '<S114>/Gain'
                                        */
  real_T Saturation1_UpperSat_n;       /* Expression: 0
                                        * Referenced by: '<S114>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: -inf
                                        * Referenced by: '<S114>/Saturation1'
                                        */
  real_T Saturation2_UpperSat_b;       /* Expression: inf
                                        * Referenced by: '<S114>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_e;       /* Expression: 0
                                        * Referenced by: '<S114>/Saturation2'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1
                                        * Referenced by: '<S114>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0
                                        * Referenced by: '<S114>/Saturation'
                                        */
  real_T LockedShaftIntegrator_UpperSat;/* Expression: maxAbsSpd
                                         * Referenced by: '<S127>/Locked Shaft Integrator'
                                         */
  real_T LockedShaftIntegrator_LowerSat;/* Expression: -maxAbsSpd
                                         * Referenced by: '<S127>/Locked Shaft Integrator'
                                         */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S127>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S127>/Constant2'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S127>/Constant'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S151>/Out1'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S152>/Integrator'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 1/2/pi
                                        * Referenced by: '<S151>/Gain'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: inf
                                        * Referenced by: '<S151>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: eps
                                        * Referenced by: '<S151>/Saturation'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S155>/Switch1'
                                        */
  real_T Constant_Value_mk;            /* Expression: 0
                                        * Referenced by: '<S150>/Constant'
                                        */
  real_T PumpIntegrator_UpperSat;      /* Expression: maxAbsSpd
                                        * Referenced by: '<S128>/Pump Integrator'
                                        */
  real_T PumpIntegrator_LowerSat;      /* Expression: -maxAbsSpd
                                        * Referenced by: '<S128>/Pump Integrator'
                                        */
  real_T TurbineIntegrator_UpperSat;   /* Expression: maxAbsSpd
                                        * Referenced by: '<S128>/Turbine Integrator'
                                        */
  real_T TurbineIntegrator_LowerSat;   /* Expression: -maxAbsSpd
                                        * Referenced by: '<S128>/Turbine Integrator'
                                        */
  real_T u_Gain;                       /* Expression: 4
                                        * Referenced by: '<S128>/4'
                                        */
  real_T Constant1_Value_k;            /* Expression: 1
                                        * Referenced by: '<S149>/Constant1'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S155>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S149>/Constant'
                                        */
  real_T Gain_Gain_h;                  /* Expression: -1
                                        * Referenced by: '<S149>/Gain'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S148>/Switch'
                                        */
  real_T Switch1_Threshold_j;          /* Expression: 1
                                        * Referenced by: '<S147>/Switch1'
                                        */
  real_T uniclutch_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S147>/uniclutch'
                                        */
  real_T uniclutch_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S147>/uniclutch'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S159>/Integrator1'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S12>/Memory'
                                        */
  real_T Integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S240>/Integrator'
                                        */
  real_T Signconvention_Gain;          /* Expression: -1
                                        * Referenced by: '<S211>/Sign convention'
                                        */
  real_T FrontBias_Gain;               /* Expression: 0.6
                                        * Referenced by: '<S203>/Front Bias'
                                        */
  real_T TorqueConversion1_Gain;       /* Expression: pi/4
                                        * Referenced by: '<S226>/Torque Conversion1'
                                        */
  real_T DisallowNegativeBrakeTorque_UpperSat;/* Expression: inf
                                               * Referenced by: '<S226>/Disallow Negative Brake Torque'
                                               */
  real_T DisallowNegativeBrakeTorque_LowerSat;/* Expression: eps
                                               * Referenced by: '<S226>/Disallow Negative Brake Torque'
                                               */
  real_T Constant_Value_e;             /* Expression: D
                                        * Referenced by: '<S218>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: C
                                        * Referenced by: '<S218>/Constant1'
                                        */
  real_T Constant7_Value;              /* Expression: B
                                        * Referenced by: '<S218>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: E
                                        * Referenced by: '<S218>/Constant6'
                                        */
  real_T Constant2_Value_b[34];        /* Expression: zeros(34,1)
                                        * Referenced by: '<S218>/Constant2'
                                        */
  real_T Constant19_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S218>/Constant19'
                                        */
  real_T Constant12_Value[3];          /* Expression: zeros(1,3)
                                        * Referenced by: '<S218>/Constant12'
                                        */
  real_T Constant14_Value[9];          /* Expression: zeros(3,3)
                                        * Referenced by: '<S218>/Constant14'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S219>/Constant5'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0
                                        * Referenced by: '<S219>/Constant2'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S219>/Constant16'
                                        */
  real_T Constant7_Value_n;            /* Expression: 0
                                        * Referenced by: '<S219>/Constant7'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S219>/Constant9'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S219>/Constant11'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S219>/Constant10'
                                        */
  real_T Constant1_Value_n;            /* Expression: PRESMIN
                                        * Referenced by: '<S219>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: PRESMAX
                                        * Referenced by: '<S219>/Constant3'
                                        */
  real_T Constant19_Value_o[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S219>/Constant19'
                                        */
  real_T Constant12_Value_o[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S219>/Constant12'
                                        */
  real_T Constant14_Value_k[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S219>/Constant14'
                                        */
  real_T Constant14_Value_m;           /* Expression: 0
                                        * Referenced by: '<S220>/Constant14'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant1'
                                        */
  real_T Constant19_Value_m;           /* Expression: 0
                                        * Referenced by: '<S220>/Constant19'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant2'
                                        */
  real_T Constant3_Value_b;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S220>/Constant4'
                                        */
  real_T Constant5_Value_d;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant5'
                                        */
  real_T Constant6_Value_o;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant6'
                                        */
  real_T Constant7_Value_o;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S220>/Constant8'
                                        */
  real_T Constant9_Value_d;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant9'
                                        */
  real_T Constant10_Value_n;           /* Expression: 0
                                        * Referenced by: '<S220>/Constant10'
                                        */
  real_T Constant11_Value_o;           /* Expression: 0
                                        * Referenced by: '<S220>/Constant11'
                                        */
  real_T Constant16_Value_i;           /* Expression: 0
                                        * Referenced by: '<S220>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant17'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant13'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant15'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant22'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant18'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant20'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant24'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S220>/Constant23'
                                        */
  real_T FxType_Value;                 /* Expression: 0
                                        * Referenced by: '<S204>/FxType'
                                        */
  real_T rollType_Value;               /* Expression: 1
                                        * Referenced by: '<S204>/rollType'
                                        */
  real_T vertType_Value;               /* Expression: 0
                                        * Referenced by: '<S204>/vertType'
                                        */
  real_T Integrator1_IC_b;             /* Expression: 0
                                        * Referenced by: '<S158>/Integrator1'
                                        */
  real_T Memory_InitialCondition_m;    /* Expression: 0
                                        * Referenced by: '<S40>/Memory'
                                        */
  real_T Integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S278>/Integrator'
                                        */
  real_T Signconvention_Gain_m;        /* Expression: -1
                                        * Referenced by: '<S249>/Sign convention'
                                        */
  real_T RearBias_Gain;                /* Expression: 0.4
                                        * Referenced by: '<S203>/Rear Bias'
                                        */
  real_T TorqueConversion1_Gain_m;     /* Expression: pi/4
                                        * Referenced by: '<S264>/Torque Conversion1'
                                        */
  real_T DisallowNegativeBrakeTorque_UpperSat_k;/* Expression: inf
                                                 * Referenced by: '<S264>/Disallow Negative Brake Torque'
                                                 */
  real_T DisallowNegativeBrakeTorque_LowerSat_j;/* Expression: eps
                                                 * Referenced by: '<S264>/Disallow Negative Brake Torque'
                                                 */
  real_T Constant_Value_l;             /* Expression: D
                                        * Referenced by: '<S256>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: C
                                        * Referenced by: '<S256>/Constant1'
                                        */
  real_T Constant7_Value_m;            /* Expression: B
                                        * Referenced by: '<S256>/Constant7'
                                        */
  real_T Constant6_Value_j;            /* Expression: E
                                        * Referenced by: '<S256>/Constant6'
                                        */
  real_T Constant2_Value_dc[34];       /* Expression: zeros(34,1)
                                        * Referenced by: '<S256>/Constant2'
                                        */
  real_T Constant19_Value_i[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S256>/Constant19'
                                        */
  real_T Constant12_Value_k[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S256>/Constant12'
                                        */
  real_T Constant14_Value_c[9];        /* Expression: zeros(3,3)
                                        * Referenced by: '<S256>/Constant14'
                                        */
  real_T Constant5_Value_i;            /* Expression: 0
                                        * Referenced by: '<S257>/Constant5'
                                        */
  real_T Constant2_Value_p;            /* Expression: 0
                                        * Referenced by: '<S257>/Constant2'
                                        */
  real_T Constant16_Value_n;           /* Expression: 0
                                        * Referenced by: '<S257>/Constant16'
                                        */
  real_T Constant7_Value_l;            /* Expression: 0
                                        * Referenced by: '<S257>/Constant7'
                                        */
  real_T Constant9_Value_h;            /* Expression: 0
                                        * Referenced by: '<S257>/Constant9'
                                        */
  real_T Constant11_Value_k;           /* Expression: 0
                                        * Referenced by: '<S257>/Constant11'
                                        */
  real_T Constant10_Value_d;           /* Expression: 0
                                        * Referenced by: '<S257>/Constant10'
                                        */
  real_T Constant1_Value_e;            /* Expression: PRESMIN
                                        * Referenced by: '<S257>/Constant1'
                                        */
  real_T Constant3_Value_e;            /* Expression: PRESMAX
                                        * Referenced by: '<S257>/Constant3'
                                        */
  real_T Constant19_Value_h[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S257>/Constant19'
                                        */
  real_T Constant12_Value_b[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S257>/Constant12'
                                        */
  real_T Constant14_Value_kc[9];       /* Expression: zeros(3,3)
                                        * Referenced by: '<S257>/Constant14'
                                        */
  real_T Constant14_Value_f;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant14'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant1'
                                        */
  real_T Constant19_Value_e;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant19'
                                        */
  real_T Constant2_Value_i;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant2'
                                        */
  real_T Constant3_Value_p;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant3'
                                        */
  real_T Constant4_Value_n;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant4'
                                        */
  real_T Constant5_Value_c;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant5'
                                        */
  real_T Constant6_Value_g;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant6'
                                        */
  real_T Constant7_Value_h;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant7'
                                        */
  real_T Constant8_Value_o;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant8'
                                        */
  real_T Constant9_Value_p;            /* Expression: 0
                                        * Referenced by: '<S258>/Constant9'
                                        */
  real_T Constant10_Value_c;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant10'
                                        */
  real_T Constant11_Value_f;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant11'
                                        */
  real_T Constant16_Value_l;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant16'
                                        */
  real_T Constant17_Value_k;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant17'
                                        */
  real_T Constant13_Value_l;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant13'
                                        */
  real_T Constant15_Value_f;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant15'
                                        */
  real_T Constant21_Value_m;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant21'
                                        */
  real_T Constant22_Value_m;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant22'
                                        */
  real_T Constant18_Value_f;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant18'
                                        */
  real_T Constant20_Value_o;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant20'
                                        */
  real_T Constant24_Value_i;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant24'
                                        */
  real_T Constant23_Value_j;           /* Expression: 0
                                        * Referenced by: '<S258>/Constant23'
                                        */
  real_T FxType_Value_l;               /* Expression: 0
                                        * Referenced by: '<S205>/FxType'
                                        */
  real_T rollType_Value_d;             /* Expression: 1
                                        * Referenced by: '<S205>/rollType'
                                        */
  real_T vertType_Value_g;             /* Expression: 0
                                        * Referenced by: '<S205>/vertType'
                                        */
  real_T Crm_tableData[2];             /* Expression: [0 0]
                                        * Referenced by: '<S201>/Crm'
                                        */
  real_T Crm_bp01Data[2];              /* Expression: [-1 1]
                                        * Referenced by: '<S201>/Crm'
                                        */
  real_T Constant4_Value_k[3];         /* Expression: ones(1,3)
                                        * Referenced by: '<S201>/Constant4'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0
                                        * Referenced by: '<S201>/Switch'
                                        */
  real_T MExtConstant_Value[3];        /* Expression: [0,0,0]
                                        * Referenced by: '<S160>/MExtConstant'
                                        */
  real_T FExtConstant_Value[3];        /* Expression: [0,0,0]
                                        * Referenced by: '<S160>/FExtConstant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S172>/Constant1'
                                        */
  real_T Constant11_Value_p;           /* Expression: 0
                                        * Referenced by: '<S172>/Constant11'
                                        */
  real_T Constant8_Value_m;            /* Expression: 0
                                        * Referenced by: '<S172>/Constant8'
                                        */
  real_T Constant10_Value_dk;          /* Expression: 0
                                        * Referenced by: '<S173>/Constant10'
                                        */
  real_T Constant14_Value_c4;          /* Expression: 0
                                        * Referenced by: '<S173>/Constant14'
                                        */
  real_T Constant3_Value_bp;           /* Expression: 0
                                        * Referenced by: '<S173>/Constant3'
                                        */
  real_T Constant4_Value_o;            /* Expression: 0
                                        * Referenced by: '<S173>/Constant4'
                                        */
  real_T Constant6_Value_jd;           /* Expression: 0
                                        * Referenced by: '<S173>/Constant6'
                                        */
  real_T Constant8_Value_g;            /* Expression: 0
                                        * Referenced by: '<S173>/Constant8'
                                        */
  real_T Constant9_Value_k;            /* Expression: 0
                                        * Referenced by: '<S173>/Constant9'
                                        */
  real_T Constant_Value_e1;            /* Expression: 0
                                        * Referenced by: '<S163>/Constant'
                                        */
  real_T Constant12_Value_bz;          /* Expression: 0
                                        * Referenced by: '<S169>/Constant12'
                                        */
  real_T Constant2_Value_d3;           /* Expression: 0
                                        * Referenced by: '<S169>/Constant2'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S169>/Constant1'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S191>/Constant'
                                        */
  real_T Constant10_Value_co;          /* Expression: 0
                                        * Referenced by: '<S169>/Constant10'
                                        */
  real_T VelocitiesMatch_Offset;       /* Expression: 0
                                        * Referenced by: '<S139>/Velocities Match'
                                        */
  real_T Memory_InitialCondition_e;    /* Expression: 0
                                        * Referenced by: '<S82>/Memory'
                                        */
  real_T Memory_InitialCondition_b;    /* Expression: 0
                                        * Referenced by: '<S145>/Memory'
                                        */
  real_T Constant2_Value_m;            /* Expression: ClutchLocked
                                        * Referenced by: '<S144>/Constant2'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: inf
                                        * Referenced by: '<S146>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: eps
                                        * Referenced by: '<S146>/Saturation'
                                        */
  real_T Constant1_Value_nq;           /* Expression: 1
                                        * Referenced by: '<S124>/Constant1'
                                        */
  real_T IC_Value;                     /* Expression: 0
                                        * Referenced by: '<S124>/IC'
                                        */
  real_T Switch_Threshold_gc;          /* Expression: 0
                                        * Referenced by: '<S124>/Switch'
                                        */
  real_T Constant1_Value_fd;           /* Expression: 1
                                        * Referenced by: '<S129>/Constant1'
                                        */
  real_T IC_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S129>/IC'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S129>/Switch'
                                        */
  real_T Constant1_Value_ci;           /* Expression: 1
                                        * Referenced by: '<S123>/Constant1'
                                        */
  real_T IC_Value_j;                   /* Expression: 0
                                        * Referenced by: '<S123>/IC'
                                        */
  real_T Switch_Threshold_o;           /* Expression: 0
                                        * Referenced by: '<S123>/Switch'
                                        */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S121>/Merge1'
                                      */
  real_T Merge4_4_InitialOutput;   /* Computed Parameter: Merge4_4_InitialOutput
                                    * Referenced by: '<S121>/Merge4'
                                    */
  real_T Merge4_5_InitialOutput;   /* Computed Parameter: Merge4_5_InitialOutput
                                    * Referenced by: '<S121>/Merge4'
                                    */
  real_T Saturation1_UpperSat_b;       /* Expression: 0
                                        * Referenced by: '<S130>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_k;       /* Expression: -inf
                                        * Referenced by: '<S130>/Saturation1'
                                        */
  real_T Merge4_1_InitialOutput;   /* Computed Parameter: Merge4_1_InitialOutput
                                    * Referenced by: '<S121>/Merge4'
                                    */
  real_T Merge4_2_InitialOutput;   /* Computed Parameter: Merge4_2_InitialOutput
                                    * Referenced by: '<S121>/Merge4'
                                    */
  real_T Merge4_3_InitialOutput;   /* Computed Parameter: Merge4_3_InitialOutput
                                    * Referenced by: '<S121>/Merge4'
                                    */
  real_T Saturation_UpperSat_n;        /* Expression: inf
                                        * Referenced by: '<S130>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0
                                        * Referenced by: '<S130>/Saturation'
                                        */
  real_T ClutchForce_Value;            /* Expression: eps
                                        * Referenced by: '<S121>/Clutch Force'
                                        */
  real_T Hz2rad_Gain;                  /* Expression: 2*pi
                                        * Referenced by: '<S144>/Hz2rad'
                                        */
  real_T Reset_Value;                  /* Expression: 1
                                        * Referenced by: '<S145>/Reset'
                                        */
  real_T Constant_Value_jc;            /* Expression: 366.15
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T upi_Gain;                     /* Expression: 2*pi
                                        * Referenced by: '<S89>/2*pi'
                                        */
  real_T Memory_InitialCondition_c;    /* Expression: 0
                                        * Referenced by: '<S91>/Memory'
                                        */
  real_T Memory_InitialCondition_o;    /* Expression: 0
                                        * Referenced by: '<S73>/Memory'
                                        */
  real_T Constant1_Value_cd;           /* Expression: 1
                                        * Referenced by: '<S96>/Constant1'
                                        */
  real_T IC_Value_oc;                  /* Expression: 0
                                        * Referenced by: '<S96>/IC'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0
                                        * Referenced by: '<S96>/Switch'
                                        */
  real_T Constant1_Value_fg;           /* Expression: 1
                                        * Referenced by: '<S94>/Constant1'
                                        */
  real_T IC_Value_g;                   /* Expression: 0
                                        * Referenced by: '<S94>/IC'
                                        */
  real_T Switch_Threshold_ov;          /* Expression: 0
                                        * Referenced by: '<S94>/Switch'
                                        */
  real_T Constant1_Value_ep;           /* Expression: 1
                                        * Referenced by: '<S92>/Constant1'
                                        */
  real_T IC_Value_g0;                  /* Expression: 0
                                        * Referenced by: '<S92>/IC'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0
                                        * Referenced by: '<S92>/Switch'
                                        */
  real_T Reset_Value_b;                /* Expression: 1
                                        * Referenced by: '<S91>/Reset'
                                        */
  real_T Merge2_1_InitialOutput;   /* Computed Parameter: Merge2_1_InitialOutput
                                    * Referenced by: '<S89>/Merge2'
                                    */
  real_T Merge2_2_InitialOutput;   /* Computed Parameter: Merge2_2_InitialOutput
                                    * Referenced by: '<S89>/Merge2'
                                    */
  real_T Merge2_3_InitialOutput;   /* Computed Parameter: Merge2_3_InitialOutput
                                    * Referenced by: '<S89>/Merge2'
                                    */
  real_T Constant1_Value_nv;           /* Expression: 1
                                        * Referenced by: '<S23>/Constant1'
                                        */
  real_T Constant_Value_d;             /* Expression: shaftSwitchMask
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Switch_Threshold_mr;          /* Expression: 1
                                        * Referenced by: '<S23>/Switch'
                                        */
  real_T Integrator_UpperSat;          /* Expression: maxAbsSpd
                                        * Referenced by: '<S19>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: -maxAbsSpd
                                        * Referenced by: '<S19>/Integrator'
                                        */
  real_T Reset_Value_d;                /* Expression: 1
                                        * Referenced by: '<S73>/Reset'
                                        */
  real_T Reset_Value_f;                /* Expression: 1
                                        * Referenced by: '<S82>/Reset'
                                        */
  real_T Constant1_Value_m;            /* Expression: 1
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T Constant_Value_n;             /* Expression: shaftSwitchMask
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T Switch_Threshold_cs;          /* Expression: 1
                                        * Referenced by: '<S51>/Switch'
                                        */
  real_T Integrator_UpperSat_o;        /* Expression: maxAbsSpd
                                        * Referenced by: '<S47>/Integrator'
                                        */
  real_T Integrator_LowerSat_m;        /* Expression: -maxAbsSpd
                                        * Referenced by: '<S47>/Integrator'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S51>/Gain1'
                                        */
  real_T Constant_Value_m0;            /* Expression: 1
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0
                                        * Referenced by: '<S61>/Switch'
                                        */
  real_T Constant_Value_k;             /* Expression: 1
                                        * Referenced by: '<S59>/Constant'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0
                                        * Referenced by: '<S59>/Switch'
                                        */
  real_T Constant_Value_ln;            /* Expression: 1
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0
                                        * Referenced by: '<S60>/Switch'
                                        */
  real_T Constant_Value_lu;            /* Expression: shaftSwitchMask
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T Constant6_Value_l;            /* Expression: 1
                                        * Referenced by: '<S54>/Constant6'
                                        */
  real_T Switch1_Threshold_h;          /* Expression: 1
                                        * Referenced by: '<S54>/Switch1'
                                        */
  real_T Reset_Value_da;               /* Expression: 1
                                        * Referenced by: '<S40>/Reset'
                                        */
  real_T u_Gain_a;                     /* Expression: 4
                                        * Referenced by: '<S212>/4'
                                        */
  real_T Constant_Value_mkm;           /* Expression: -m*g
                                        * Referenced by: '<S212>/Constant'
                                        */
  real_T Constant1_Value_p4;           /* Expression: -m
                                        * Referenced by: '<S212>/Constant1'
                                        */
  real_T GndConstant_Value;            /* Expression: Gndz
                                        * Referenced by: '<S204>/GndConstant'
                                        */
  real_T TambConstant_Value;           /* Expression: 0
                                        * Referenced by: '<S204>/TambConstant'
                                        */
  real_T u_Gain_m;                     /* Expression: 4
                                        * Referenced by: '<S250>/4'
                                        */
  real_T Constant_Value_et;            /* Expression: -m*g
                                        * Referenced by: '<S250>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: -m
                                        * Referenced by: '<S250>/Constant1'
                                        */
  real_T GndConstant_Value_c;          /* Expression: Gndz
                                        * Referenced by: '<S205>/GndConstant'
                                        */
  real_T TambConstant_Value_p;         /* Expression: 0
                                        * Referenced by: '<S205>/TambConstant'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 1/2
                                        * Referenced by: '<S23>/Gain1'
                                        */
  real_T Constant_Value_ch;            /* Expression: 1
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S33>/Switch'
                                        */
  real_T Constant_Value_f;             /* Expression: 1
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Switch_Threshold_mv;          /* Expression: 0
                                        * Referenced by: '<S31>/Switch'
                                        */
  real_T Constant_Value_m2;            /* Expression: 1
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 0
                                        * Referenced by: '<S32>/Switch'
                                        */
  real_T Constant_Value_ab;            /* Expression: shaftSwitchMask
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Constant6_Value_b;            /* Expression: 1
                                        * Referenced by: '<S26>/Constant6'
                                        */
  real_T Switch1_Threshold_a;          /* Expression: 1
                                        * Referenced by: '<S26>/Switch1'
                                        */
  real_T Reset_Value_n;                /* Expression: 1
                                        * Referenced by: '<S12>/Reset'
                                        */
  uint32_T Eta4D_maxIndex[4];          /* Computed Parameter: Eta4D_maxIndex
                                        * Referenced by: '<S112>/Eta 4D'
                                        */
  uint32_T Eta4D_dimSizes[4];          /* Computed Parameter: Eta4D_dimSizes
                                        * Referenced by: '<S112>/Eta 4D'
                                        */
  uint32_T Eta4D_maxIndex_f[4];        /* Computed Parameter: Eta4D_maxIndex_f
                                        * Referenced by: '<S120>/Eta 4D'
                                        */
  uint32_T Eta4D_dimSizes_b[4];        /* Computed Parameter: Eta4D_dimSizes_b
                                        * Referenced by: '<S120>/Eta 4D'
                                        */
  uint32_T TorqueRatiozetaInterpolation_maxIndex;
                    /* Computed Parameter: TorqueRatiozetaInterpolation_maxIndex
                     * Referenced by: '<S147>/Torque Ratio zeta Interpolation'
                     */
  uint32_T CapacityKfactorInterpolation_maxIndex;
                    /* Computed Parameter: CapacityKfactorInterpolation_maxIndex
                     * Referenced by: '<S147>/Capacity, K-factor Interpolation'
                     */
  boolean_T Memory_InitialCondition_n; /* Expression: ClutchLocked
                                        * Referenced by: '<S140>/Memory'
                                        */
  boolean_T CombinatorialLogic_table[8];
                                 /* Computed Parameter: CombinatorialLogic_table
                                  * Referenced by: '<S140>/Combinatorial  Logic'
                                  */
  boolean_T Relay1_YOn;                /* Computed Parameter: Relay1_YOn
                                        * Referenced by: '<S144>/Relay1'
                                        */
  boolean_T Relay1_YOff;               /* Computed Parameter: Relay1_YOff
                                        * Referenced by: '<S144>/Relay1'
                                        */
  P_Clutch_DrivetrainHevP4_T Clutch_e; /* '<S249>/Clutch' */
  P_Clutch_DrivetrainHevP4_T Clutch;   /* '<S211>/Clutch' */
  P_OpenDifferential_DrivetrainHevP4_T sf_OpenDifferential_j;/* '<S47>/Open Differential' */
  P_OpenDifferential_DrivetrainHevP4_T sf_OpenDifferential;/* '<S19>/Open Differential' */
};

/* Real-time Model Data Structure */
struct tag_RTM_DrivetrainHevP4_T {
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
    void* dataAddress[1264];
    int32_T* vardimsAddress[1264];
    RTWLoggingFcnPtr loggingPtrs[1264];
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize0;
    int_T mdlref_GlobalTID[2];
    SimTimeStep *simTimeStep;
    boolean_T *stopRequestedFlag;
  } Timing;
};

typedef struct {
  B_DrivetrainHevP4_c_T rtb;
  DW_DrivetrainHevP4_f_T rtdw;
  RT_MODEL_DrivetrainHevP4_T rtm;
  ZCE_DrivetrainHevP4_T rtzce;
} MdlrefDW_DrivetrainHevP4_T;

/* Model reference registration function */
extern void DrivetrainHevP4_initialize(const char_T **rt_errorStatus, boolean_T *
  rt_stopRequested, RTWSolverInfo *rt_solverInfo, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1,
  RT_MODEL_DrivetrainHevP4_T *const DrivetrainHevP4_M, B_DrivetrainHevP4_c_T
  *localB, DW_DrivetrainHevP4_f_T *localDW, X_DrivetrainHevP4_n_T *localX,
  ZCE_DrivetrainHevP4_T *localZCE, rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  DrivetrainHevP4_GetCAPIStaticMap(void);
extern void DrivetrainHevP4_OpenDifferential(real_T rtu_u, real_T rtu_u_d,
  real_T rtu_u_i, real_T rtu_bw1, real_T rtu_bd, real_T rtu_bw2, real_T
  rtu_Ndiff, real_T rtu_Jd, real_T rtu_Jw1, real_T rtu_Jw2, const real_T rtu_x[2],
  B_OpenDifferential_DrivetrainHevP4_T *localB,
  P_OpenDifferential_DrivetrainHevP4_T *localP);
extern void DrivetrainHevP4_SimpleMagicTire(real_T rtu_ReNom, real_T rtu_Fz,
  real_T rtu_Omega, real_T rtu_Vx, real_T rtu_MagicPeak, real_T rtu_MagicPeak_d,
  real_T rtu_MagicPeak_e, real_T rtu_MagicPeak_l, real_T rtu_MagicPeak_et, const
  real_T rtu_MagicFxo[34], const real_T rtu_kappaFx[3], const real_T rtu_FzFx[3],
  const real_T rtu_FxMap[9], real_T rtu_RollRes, real_T rtu_RollRes_f, real_T
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
  rtu_vertType, B_SimpleMagicTire_DrivetrainHevP4_T *localB, real_T rtp_FZMAX,
  real_T rtp_FZMIN, real_T rtp_VXLOW, real_T rtp_kappamax);
extern void DrivetrainHevP4_Clutch_Init(B_Clutch_DrivetrainHevP4_p_T *localB,
  DW_Clutch_DrivetrainHevP4_b_T *localDW, P_Clutch_DrivetrainHevP4_m_T *localP,
  X_Clutch_DrivetrainHevP4_o_T *localX, real_T rtp_omegao);
extern void DrivetrainHevP4_Clutch_Reset(B_Clutch_DrivetrainHevP4_p_T *localB,
  DW_Clutch_DrivetrainHevP4_b_T *localDW, X_Clutch_DrivetrainHevP4_o_T *localX);
extern void DrivetrainHevP4_Clutch_Deriv(B_Clutch_DrivetrainHevP4_p_T *localB,
  DW_Clutch_DrivetrainHevP4_b_T *localDW, XDot_Clutch_DrivetrainHevP4_f_T
  *localXdot);
extern void DrivetrainHevP4_Clutch(RT_MODEL_DrivetrainHevP4_T * const
  DrivetrainHevP4_M, real_T rtu_Tout, real_T rtu_Tfmaxs, real_T rtu_Tfmaxk,
  B_Clutch_DrivetrainHevP4_p_T *localB, DW_Clutch_DrivetrainHevP4_b_T *localDW,
  P_Clutch_DrivetrainHevP4_m_T *localP, X_Clutch_DrivetrainHevP4_o_T *localX,
  real_T rtp_omegao, real_T rtp_br, real_T rtp_Iyy, real_T rtp_OmegaTol);
extern void DrivetrainHevP4_Clutch_b_Init(int32_T NumIters,
  B_Clutch_DrivetrainHevP4_T localB[1], DW_Clutch_DrivetrainHevP4_T localDW[1],
  P_Clutch_DrivetrainHevP4_T *localP, X_Clutch_DrivetrainHevP4_T localX[1],
  real_T rtp_omegao);
extern void DrivetrainHevP4_Clutch_o_Reset(int32_T NumIters,
  B_Clutch_DrivetrainHevP4_T localB[1], DW_Clutch_DrivetrainHevP4_T localDW[1],
  X_Clutch_DrivetrainHevP4_T localX[1]);
extern void DrivetrainHevP4_Clutch_k_Deriv(int32_T NumIters, const real_T
  *rtu_Tout, const real_T *rtu_Tfmaxs, const real_T *rtu_Tfmaxk,
  B_Clutch_DrivetrainHevP4_T localB[1], DW_Clutch_DrivetrainHevP4_T localDW[1],
  XDot_Clutch_DrivetrainHevP4_T localXdot[1]);
extern void DrivetrainHevP4_Clutch_j(int32_T NumIters,
  RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M, const real_T *rtu_Tout,
  const real_T *rtu_Tfmaxs, const real_T *rtu_Tfmaxk, real_T *rty_Omega, real_T *
  rty_Omegadot, real_T *rty_Myb, B_Clutch_DrivetrainHevP4_T localB[1],
  DW_Clutch_DrivetrainHevP4_T localDW[1], P_Clutch_DrivetrainHevP4_T *localP,
  X_Clutch_DrivetrainHevP4_T localX[1], real_T rtp_omegao, real_T rtp_br, real_T
  rtp_Iyy, real_T rtp_VXLOW, real_T rtp_Re);
extern void DrivetrainHevP4_Init(RT_MODEL_DrivetrainHevP4_T * const
  DrivetrainHevP4_M, real_T *rty_EngSpd, B_DrivetrainHevP4_c_T *localB,
  DW_DrivetrainHevP4_f_T *localDW, X_DrivetrainHevP4_n_T *localX);
extern void DrivetrainHevP4_Reset(RT_MODEL_DrivetrainHevP4_T * const
  DrivetrainHevP4_M, B_DrivetrainHevP4_c_T *localB, DW_DrivetrainHevP4_f_T
  *localDW, X_DrivetrainHevP4_n_T *localX);
extern void DrivetrainHevP4_Deriv(B_DrivetrainHevP4_c_T *localB,
  DW_DrivetrainHevP4_f_T *localDW, X_DrivetrainHevP4_n_T *localX,
  XDot_DrivetrainHevP4_n_T *localXdot);
extern void DrivetrainHevP4_Disable(DW_DrivetrainHevP4_f_T *localDW);
extern void DrivetrainHevP4_Update(RT_MODEL_DrivetrainHevP4_T * const
  DrivetrainHevP4_M, boolean_T *rty_Cltch2State, DW_DrivetrainHevP4_f_T *localDW);
extern void DrivetrainHevP4(RT_MODEL_DrivetrainHevP4_T * const DrivetrainHevP4_M,
  const real_T *rtu_EngTrq, const real_T *rtu_MotTrq, const real_T *rtu_Grade,
  const real_T *rtu_WindVel, const real_T *rtu_BrkCmd, const real_T *rtu_GearCmd,
  real_T *rty_VehSpd, real_T *rty_EngSpd, boolean_T *rty_Cltch1State, boolean_T *
  rty_Cltch2State, real_T *rty_MotSpd, real_T *rty_TransGear,
  B_DrivetrainHevP4_c_T *localB, DW_DrivetrainHevP4_f_T *localDW,
  X_DrivetrainHevP4_n_T *localX, ZCE_DrivetrainHevP4_T *localZCE);

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
 * '<Root>' : 'DrivetrainHevP4'
 * '<S1>'   : 'DrivetrainHevP4/Differential and Compliance'
 * '<S2>'   : 'DrivetrainHevP4/P4 Diff'
 * '<S3>'   : 'DrivetrainHevP4/RTI Data'
 * '<S4>'   : 'DrivetrainHevP4/Torque Converter Automatic Transmission'
 * '<S5>'   : 'DrivetrainHevP4/Vehicle'
 * '<S6>'   : 'DrivetrainHevP4/Wheels and Brakes'
 * '<S7>'   : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive'
 * '<S8>'   : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance'
 * '<S9>'   : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential'
 * '<S10>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way'
 * '<S11>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear'
 * '<S12>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S13>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
 * '<S14>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
 * '<S15>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S16>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S17>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S18>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S19>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential'
 * '<S20>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation'
 * '<S21>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency'
 * '<S22>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Open Differential'
 * '<S23>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/y'
 * '<S24>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power'
 * '<S25>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Damping Power'
 * '<S26>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power'
 * '<S27>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator'
 * '<S28>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S29>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S30>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S31>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency'
 * '<S32>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency'
 * '<S33>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Drive Efficiency'
 * '<S34>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Eta'
 * '<S35>'  : 'DrivetrainHevP4/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Efficiency/Eta/Constant Eta'
 * '<S36>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance'
 * '<S37>'  : 'DrivetrainHevP4/P4 Diff/Open Differential'
 * '<S38>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way'
 * '<S39>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear'
 * '<S40>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S41>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
 * '<S42>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
 * '<S43>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S44>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S45>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S46>'  : 'DrivetrainHevP4/P4 Diff/Axle Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S47>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential'
 * '<S48>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation'
 * '<S49>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Efficiency'
 * '<S50>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Open Differential'
 * '<S51>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/y'
 * '<S52>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power'
 * '<S53>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power/Damping Power'
 * '<S54>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power/Kinetic Power'
 * '<S55>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator'
 * '<S56>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S57>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S58>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Bus Creation/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S59>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Efficiency/Axle 1 Efficiency'
 * '<S60>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Efficiency/Axle 2 Efficiency'
 * '<S61>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Efficiency/Drive Efficiency'
 * '<S62>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Efficiency/Eta'
 * '<S63>'  : 'DrivetrainHevP4/P4 Diff/Open Differential/Open Differential/Efficiency/Eta/Constant Eta'
 * '<S64>'  : 'DrivetrainHevP4/RTI Data/RTI Data Store'
 * '<S65>'  : 'DrivetrainHevP4/RTI Data/RTI Data Store/RTI Data Store'
 * '<S66>'  : 'DrivetrainHevP4/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S67>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance'
 * '<S68>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1'
 * '<S69>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission'
 * '<S70>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter'
 * '<S71>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way'
 * '<S72>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear'
 * '<S73>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S74>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
 * '<S75>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
 * '<S76>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S77>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S78>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S79>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S80>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way'
 * '<S81>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear'
 * '<S82>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn'
 * '<S83>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power'
 * '<S84>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Damping Power'
 * '<S85>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator'
 * '<S86>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S87>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S88>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Driveshaft Compliance1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S89>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission'
 * '<S90>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation'
 * '<S91>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Cont LPF IC Dyn'
 * '<S92>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/IC tunable'
 * '<S93>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked'
 * '<S94>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Neutral IC'
 * '<S95>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked'
 * '<S96>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/input IC'
 * '<S97>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/Power Accounting Bus Creator'
 * '<S98>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/div0protect - abs poly1'
 * '<S99>'  : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S100>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/Power Accounting Bus Creator/PwrStored Input'
 * '<S101>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S102>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/div0protect - abs poly1/Compare To Constant'
 * '<S103>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Bus Creation/div0protect - abs poly1/Compare To Constant1'
 * '<S104>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/Apply Efficiency'
 * '<S105>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/Apply Efficiency '
 * '<S106>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/Mechanical Efficiency'
 * '<S107>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/gear2props'
 * '<S108>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/Mechanical Efficiency/div0protect - abs poly'
 * '<S109>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/Mechanical Efficiency/div0protect - abs poly/Compare To Constant'
 * '<S110>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/Mechanical Efficiency/div0protect - abs poly/Compare To Constant1'
 * '<S111>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/gear2props/Eta Lookup'
 * '<S112>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Locked/gear2props/Eta Lookup/Eta 4D'
 * '<S113>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/Apply Efficiency'
 * '<S114>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/Mechanical Efficiency'
 * '<S115>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/gear2props'
 * '<S116>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/Mechanical Efficiency/div0protect - abs poly'
 * '<S117>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/Mechanical Efficiency/div0protect - abs poly/Compare To Constant'
 * '<S118>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/Mechanical Efficiency/div0protect - abs poly/Compare To Constant1'
 * '<S119>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/gear2props/Eta Lookup'
 * '<S120>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Ideal Fixed Gear Transmission/Ideal Fixed Gear Transmission/Unlocked/gear2props/Eta Lookup/Eta 4D'
 * '<S121>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up'
 * '<S122>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation'
 * '<S123>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/IC tunable'
 * '<S124>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/IC tunable1'
 * '<S125>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic'
 * '<S126>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Type'
 * '<S127>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Locked'
 * '<S128>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked'
 * '<S129>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/output IC'
 * '<S130>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Efficiency Calculation'
 * '<S131>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Power Accounting Bus Creator'
 * '<S132>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Efficiency Calculation/div0protect - abs poly'
 * '<S133>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant'
 * '<S134>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Efficiency Calculation/div0protect - abs poly/Compare To Constant1'
 * '<S135>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S136>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Power Accounting Bus Creator/PwrStored Input'
 * '<S137>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Bus Creation/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S138>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic/Break Apart Detection'
 * '<S139>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic/Lockup Detection'
 * '<S140>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic/Lockup FSM'
 * '<S141>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic/Requisite Friction'
 * '<S142>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S143>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S144>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Type/Internal'
 * '<S145>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Type/Internal/Cont LPF IC Dyn'
 * '<S146>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Lock-up Type/Internal/Friction Model'
 * '<S147>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter'
 * '<S148>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/Torque Response'
 * '<S149>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio'
 * '<S150>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/Torque Response/Compare To Zero'
 * '<S151>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/Torque Response/LPF'
 * '<S152>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/Torque Response/LPF/Cont LPF Dyn'
 * '<S153>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio/Compare To Constant2'
 * '<S154>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio/Saturation Dynamic'
 * '<S155>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio/div0protect - poly'
 * '<S156>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio/div0protect - poly/Compare To Constant'
 * '<S157>' : 'DrivetrainHevP4/Torque Converter Automatic Transmission/Torque Converter/Torque Converter With Lock-up/Unlocked/Torque Converter/speed ratio/div0protect - poly/Compare To Constant1'
 * '<S158>' : 'DrivetrainHevP4/Vehicle/Cont LPF'
 * '<S159>' : 'DrivetrainHevP4/Vehicle/Cont LPF1'
 * '<S160>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal'
 * '<S161>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF'
 * '<S162>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation'
 * '<S163>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes'
 * '<S164>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle'
 * '<S165>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/WindDim'
 * '<S166>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame'
 * '<S167>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Forces'
 * '<S168>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing'
 * '<S169>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame'
 * '<S170>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Moments'
 * '<S171>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power'
 * '<S172>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Body Frame/Longitudinal 1DOF'
 * '<S173>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Forces/Forces 1DOF'
 * '<S174>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF'
 * '<S175>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front'
 * '<S176>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear'
 * '<S177>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix'
 * '<S178>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/transform to Inertial axes'
 * '<S179>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1'
 * '<S180>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR'
 * '<S181>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S182>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR/Subsystem'
 * '<S183>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1'
 * '<S184>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix'
 * '<S185>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes'
 * '<S186>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1'
 * '<S187>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR'
 * '<S188>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S189>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem'
 * '<S190>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Frame Routing/Longitudinal 1DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1'
 * '<S191>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes'
 * '<S192>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S193>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Inertial Frame/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S194>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF'
 * '<S195>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator'
 * '<S196>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S197>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrStored Input'
 * '<S198>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Bus Creation/Power/Longitudinal 1DOF/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S199>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes/Rotation Angles to Direction Cosine Matrix'
 * '<S200>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Inertial Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S201>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/Vehicle/Drag Force'
 * '<S202>' : 'DrivetrainHevP4/Vehicle/Vehicle Body 1DOF Longitudinal/Vehicle Body 1 DOF/WindDim/WindX'
 * '<S203>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive'
 * '<S204>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front'
 * '<S205>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear'
 * '<S206>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Bus Routing'
 * '<S207>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Longitudinal Basic Magic Tire'
 * '<S208>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Longitudinal Parameters'
 * '<S209>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Rolling Parameters'
 * '<S210>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Vertical DOF'
 * '<S211>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module'
 * '<S212>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Bus Routing/Power'
 * '<S213>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S214>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S215>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S216>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S217>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S218>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S219>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Rolling Parameters/Simple'
 * '<S220>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Vertical DOF/None'
 * '<S221>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Brakes'
 * '<S222>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch'
 * '<S223>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Friction Model'
 * '<S224>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/relaxation'
 * '<S225>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Brakes/Disk Brake'
 * '<S226>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S227>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch'
 * '<S228>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/Locked'
 * '<S229>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/Slipping'
 * '<S230>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S231>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S232>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S233>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S234>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S235>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S236>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S237>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S238>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S239>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S240>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S241>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/relaxation/div0protect - abs poly'
 * '<S242>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S243>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Front/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 * '<S244>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Bus Routing'
 * '<S245>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Longitudinal Basic Magic Tire'
 * '<S246>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Longitudinal Parameters'
 * '<S247>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Rolling Parameters'
 * '<S248>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Vertical DOF'
 * '<S249>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module'
 * '<S250>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Bus Routing/Power'
 * '<S251>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Bus Routing/Power/Power Accounting Bus Creator'
 * '<S252>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Bus Routing/Power/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S253>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Bus Routing/Power/Power Accounting Bus Creator/PwrStored Input'
 * '<S254>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Bus Routing/Power/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S255>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Longitudinal Basic Magic Tire/Simple Magic Tire'
 * '<S256>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Longitudinal Parameters/Magic Formula Peak Value'
 * '<S257>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Rolling Parameters/Simple'
 * '<S258>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Vertical DOF/None'
 * '<S259>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Brakes'
 * '<S260>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch'
 * '<S261>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Friction Model'
 * '<S262>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/relaxation'
 * '<S263>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Brakes/Disk Brake'
 * '<S264>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Brakes/Disk Brake/Disk Brake'
 * '<S265>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch'
 * '<S266>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/Locked'
 * '<S267>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/Slipping'
 * '<S268>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup'
 * '<S269>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectSlip'
 * '<S270>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic'
 * '<S271>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Break Apart Detection'
 * '<S272>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection'
 * '<S273>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM'
 * '<S274>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction'
 * '<S275>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Friction Calc'
 * '<S276>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup Detection/Required Friction for Lockup'
 * '<S277>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection'
 * '<S278>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/relaxation/Cont LPF Dyn'
 * '<S279>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/relaxation/div0protect - abs poly'
 * '<S280>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant'
 * '<S281>' : 'DrivetrainHevP4/Wheels and Brakes/All Wheel Drive/Longitudinal Wheel - Rear/Wheel Module/relaxation/div0protect - abs poly/Compare To Constant1'
 */
#endif                                 /* RTW_HEADER_DrivetrainHevP4_h_ */

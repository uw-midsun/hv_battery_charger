/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller.h
 *
 * Code generated for Simulink model 'Controller'.
 *
 * Model version                  : 1.523
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Nov  2 00:58:04 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Controller_h_
#define RTW_HEADER_Controller_h_
#ifndef Controller_COMMON_INCLUDES_
#define Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Controller_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define Controller_M                   (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Sum;                          /* '<S53>/Sum' */
  real_T Sum_a;                        /* '<S149>/Sum' */
  real_T Sum_h;                        /* '<S101>/Sum' */
  real_T UnitDelay3_DSTATE;            /* '<S1>/Unit Delay3' */
  real_T UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  real_T Integrator_DSTATE;            /* '<S44>/Integrator' */
  real_T UnitDelay5_DSTATE;            /* '<S1>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S1>/Unit Delay6' */
  real_T Integrator_DSTATE_e;          /* '<S140>/Integrator' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Integrator_DSTATE_g;          /* '<S190>/Integrator' */
  real_T Filter_DSTATE;                /* '<S185>/Filter' */
  real_T Integrator_DSTATE_o;          /* '<S240>/Integrator' */
  real_T Filter_DSTATE_m;              /* '<S235>/Filter' */
  real_T Integrator_DSTATE_f;          /* '<S92>/Integrator' */
  real_T Integrator_DSTATE_o2;         /* '<S290>/Integrator' */
  real_T Filter_DSTATE_a;              /* '<S285>/Filter' */
  real_T Integrator_DSTATE_l;          /* '<S340>/Integrator' */
  real_T Filter_DSTATE_d;              /* '<S335>/Filter' */
  real_T Integrator_DSTATE_ou;         /* '<S489>/Integrator' */
  real_T Integrator_DSTATE_i;          /* '<S438>/Integrator' */
  real_T Integrator_DSTATE_n;          /* '<S389>/Integrator' */
  real_T Gain;                         /* '<S1>/Gain' */
  real_T Sum1_m;                       /* '<S9>/Sum1' */
  real_T DeadZone;                     /* '<S482>/DeadZone' */
  real_T FilterCoefficient;            /* '<S193>/Filter Coefficient' */
  real_T DeadZone_h;                   /* '<S183>/DeadZone' */
  real_T FilterCoefficient_i;          /* '<S243>/Filter Coefficient' */
  real_T DeadZone_l;                   /* '<S233>/DeadZone' */
  real_T FilterCoefficient_m;          /* '<S293>/Filter Coefficient' */
  real_T DeadZone_n;                   /* '<S283>/DeadZone' */
  real_T IntegralGain;                 /* '<S41>/Integral Gain' */
  real_T FilterCoefficient_l;          /* '<S343>/Filter Coefficient' */
  real_T DeadZone_p;                   /* '<S333>/DeadZone' */
  real_T IntegralGain_j;               /* '<S137>/Integral Gain' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T I_PhaseA;                     /* '<Root>/I_PhaseA' */
  real_T I_PhaseB;                     /* '<Root>/I_PhaseB' */
  real_T I_PhaseC;                     /* '<Root>/I_PhaseC' */
  real_T I_PhaseD;                     /* '<Root>/I_PhaseD' */
  real_T I_Out;                        /* '<Root>/I_Out' */
  real_T V_Out;                        /* '<Root>/V_Out' */
  real_T I_In;                         /* '<Root>/I_In' */
  real_T User_ModeSelect;              /* '<Root>/User_ModeSelect' */
  real_T User_TargetVoltage;           /* '<Root>/User_TargetVoltage' */
  real_T User_TargetCurrent;           /* '<Root>/User_TargetCurrent' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Phase_A_DutyCycle;            /* '<Root>/Phase_A_DutyCycle' */
  real_T Phase_B_DutyCycle;            /* '<Root>/Phase_B_DutyCycle' */
  real_T Phase_C_DutyCycle;            /* '<Root>/Phase_C_DutyCycle' */
  real_T Phase_D_DutyCycle;            /* '<Root>/Phase_D_DutyCycle' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Controller_initialize(void);
extern void Controller_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/(I_PhaseA + I_PhaseB) - (I_PhaseC + I_PhaseD) // 2' : Unused code path elimination
 * Block '<S1>/I_PhaseA - I_PhaseB' : Unused code path elimination
 * Block '<S1>/I_PhaseC - I_PhaseD' : Unused code path elimination
 * Block '<S1>/I_RefTotal' : Unused code path elimination
 * Block '<S10>/Phase_D_DutyCycle' : Unused code path elimination
 * Block '<S10>/Phase_D_DutyCycle1' : Unused code path elimination
 * Block '<S10>/Phase_D_DutyCycle2' : Unused code path elimination
 * Block '<S486>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S494>/Proportional Gain' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('BoostConverterModel_ControlSystem/Controller')    - opens subsystem BoostConverterModel_ControlSystem/Controller
 * hilite_system('BoostConverterModel_ControlSystem/Controller/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BoostConverterModel_ControlSystem'
 * '<S1>'   : 'BoostConverterModel_ControlSystem/Controller'
 * '<S2>'   : 'BoostConverterModel_ControlSystem/Controller/PI1'
 * '<S3>'   : 'BoostConverterModel_ControlSystem/Controller/PI2'
 * '<S4>'   : 'BoostConverterModel_ControlSystem/Controller/PI3'
 * '<S5>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI'
 * '<S6>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI'
 * '<S7>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI'
 * '<S8>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI'
 * '<S9>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem'
 * '<S10>'  : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1'
 * '<S11>'  : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2'
 * '<S12>'  : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem3'
 * '<S13>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Anti-windup'
 * '<S14>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/D Gain'
 * '<S15>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Filter'
 * '<S16>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Filter ICs'
 * '<S17>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/I Gain'
 * '<S18>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Ideal P Gain'
 * '<S19>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Ideal P Gain Fdbk'
 * '<S20>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Integrator'
 * '<S21>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Integrator ICs'
 * '<S22>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/N Copy'
 * '<S23>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/N Gain'
 * '<S24>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/P Copy'
 * '<S25>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Parallel P Gain'
 * '<S26>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Reset Signal'
 * '<S27>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Saturation'
 * '<S28>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Saturation Fdbk'
 * '<S29>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Sum'
 * '<S30>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Sum Fdbk'
 * '<S31>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tracking Mode'
 * '<S32>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tracking Mode Sum'
 * '<S33>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tsamp - Integral'
 * '<S34>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tsamp - Ngain'
 * '<S35>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/postSat Signal'
 * '<S36>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/preSat Signal'
 * '<S37>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Anti-windup/Passthrough'
 * '<S38>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/D Gain/Disabled'
 * '<S39>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Filter/Disabled'
 * '<S40>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Filter ICs/Disabled'
 * '<S41>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/I Gain/Internal Parameters'
 * '<S42>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Ideal P Gain/Passthrough'
 * '<S43>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Ideal P Gain Fdbk/Disabled'
 * '<S44>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Integrator/Discrete'
 * '<S45>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Integrator ICs/Internal IC'
 * '<S46>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/N Copy/Disabled wSignal Specification'
 * '<S47>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/N Gain/Disabled'
 * '<S48>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/P Copy/Disabled'
 * '<S49>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Parallel P Gain/Internal Parameters'
 * '<S50>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Reset Signal/Disabled'
 * '<S51>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Saturation/Passthrough'
 * '<S52>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Saturation Fdbk/Disabled'
 * '<S53>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Sum/Sum_PI'
 * '<S54>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Sum Fdbk/Disabled'
 * '<S55>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tracking Mode/Disabled'
 * '<S56>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tracking Mode Sum/Passthrough'
 * '<S57>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tsamp - Integral/TsSignalSpecification'
 * '<S58>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/Tsamp - Ngain/Passthrough'
 * '<S59>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/postSat Signal/Forward_Path'
 * '<S60>'  : 'BoostConverterModel_ControlSystem/Controller/PI1/preSat Signal/Forward_Path'
 * '<S61>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Anti-windup'
 * '<S62>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/D Gain'
 * '<S63>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Filter'
 * '<S64>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Filter ICs'
 * '<S65>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/I Gain'
 * '<S66>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Ideal P Gain'
 * '<S67>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Ideal P Gain Fdbk'
 * '<S68>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Integrator'
 * '<S69>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Integrator ICs'
 * '<S70>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/N Copy'
 * '<S71>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/N Gain'
 * '<S72>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/P Copy'
 * '<S73>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Parallel P Gain'
 * '<S74>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Reset Signal'
 * '<S75>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Saturation'
 * '<S76>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Saturation Fdbk'
 * '<S77>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Sum'
 * '<S78>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Sum Fdbk'
 * '<S79>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Tracking Mode'
 * '<S80>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Tracking Mode Sum'
 * '<S81>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Tsamp - Integral'
 * '<S82>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Tsamp - Ngain'
 * '<S83>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/postSat Signal'
 * '<S84>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/preSat Signal'
 * '<S85>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Anti-windup/Passthrough'
 * '<S86>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/D Gain/Disabled'
 * '<S87>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Filter/Disabled'
 * '<S88>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Filter ICs/Disabled'
 * '<S89>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/I Gain/Internal Parameters'
 * '<S90>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Ideal P Gain/Passthrough'
 * '<S91>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Ideal P Gain Fdbk/Disabled'
 * '<S92>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Integrator/Discrete'
 * '<S93>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Integrator ICs/Internal IC'
 * '<S94>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/N Copy/Disabled wSignal Specification'
 * '<S95>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/N Gain/Disabled'
 * '<S96>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/P Copy/Disabled'
 * '<S97>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Parallel P Gain/Internal Parameters'
 * '<S98>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Reset Signal/Disabled'
 * '<S99>'  : 'BoostConverterModel_ControlSystem/Controller/PI2/Saturation/Passthrough'
 * '<S100>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Saturation Fdbk/Disabled'
 * '<S101>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Sum/Sum_PI'
 * '<S102>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Sum Fdbk/Disabled'
 * '<S103>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Tracking Mode/Disabled'
 * '<S104>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Tracking Mode Sum/Passthrough'
 * '<S105>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Tsamp - Integral/TsSignalSpecification'
 * '<S106>' : 'BoostConverterModel_ControlSystem/Controller/PI2/Tsamp - Ngain/Passthrough'
 * '<S107>' : 'BoostConverterModel_ControlSystem/Controller/PI2/postSat Signal/Forward_Path'
 * '<S108>' : 'BoostConverterModel_ControlSystem/Controller/PI2/preSat Signal/Forward_Path'
 * '<S109>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Anti-windup'
 * '<S110>' : 'BoostConverterModel_ControlSystem/Controller/PI3/D Gain'
 * '<S111>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Filter'
 * '<S112>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Filter ICs'
 * '<S113>' : 'BoostConverterModel_ControlSystem/Controller/PI3/I Gain'
 * '<S114>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Ideal P Gain'
 * '<S115>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Ideal P Gain Fdbk'
 * '<S116>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Integrator'
 * '<S117>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Integrator ICs'
 * '<S118>' : 'BoostConverterModel_ControlSystem/Controller/PI3/N Copy'
 * '<S119>' : 'BoostConverterModel_ControlSystem/Controller/PI3/N Gain'
 * '<S120>' : 'BoostConverterModel_ControlSystem/Controller/PI3/P Copy'
 * '<S121>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Parallel P Gain'
 * '<S122>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Reset Signal'
 * '<S123>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Saturation'
 * '<S124>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Saturation Fdbk'
 * '<S125>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Sum'
 * '<S126>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Sum Fdbk'
 * '<S127>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tracking Mode'
 * '<S128>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tracking Mode Sum'
 * '<S129>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tsamp - Integral'
 * '<S130>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tsamp - Ngain'
 * '<S131>' : 'BoostConverterModel_ControlSystem/Controller/PI3/postSat Signal'
 * '<S132>' : 'BoostConverterModel_ControlSystem/Controller/PI3/preSat Signal'
 * '<S133>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Anti-windup/Passthrough'
 * '<S134>' : 'BoostConverterModel_ControlSystem/Controller/PI3/D Gain/Disabled'
 * '<S135>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Filter/Disabled'
 * '<S136>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Filter ICs/Disabled'
 * '<S137>' : 'BoostConverterModel_ControlSystem/Controller/PI3/I Gain/Internal Parameters'
 * '<S138>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Ideal P Gain/Passthrough'
 * '<S139>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Ideal P Gain Fdbk/Disabled'
 * '<S140>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Integrator/Discrete'
 * '<S141>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Integrator ICs/Internal IC'
 * '<S142>' : 'BoostConverterModel_ControlSystem/Controller/PI3/N Copy/Disabled wSignal Specification'
 * '<S143>' : 'BoostConverterModel_ControlSystem/Controller/PI3/N Gain/Disabled'
 * '<S144>' : 'BoostConverterModel_ControlSystem/Controller/PI3/P Copy/Disabled'
 * '<S145>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Parallel P Gain/Internal Parameters'
 * '<S146>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Reset Signal/Disabled'
 * '<S147>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Saturation/Passthrough'
 * '<S148>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Saturation Fdbk/Disabled'
 * '<S149>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Sum/Sum_PI'
 * '<S150>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Sum Fdbk/Disabled'
 * '<S151>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tracking Mode/Disabled'
 * '<S152>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tracking Mode Sum/Passthrough'
 * '<S153>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tsamp - Integral/TsSignalSpecification'
 * '<S154>' : 'BoostConverterModel_ControlSystem/Controller/PI3/Tsamp - Ngain/Passthrough'
 * '<S155>' : 'BoostConverterModel_ControlSystem/Controller/PI3/postSat Signal/Forward_Path'
 * '<S156>' : 'BoostConverterModel_ControlSystem/Controller/PI3/preSat Signal/Forward_Path'
 * '<S157>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup'
 * '<S158>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/D Gain'
 * '<S159>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter'
 * '<S160>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter ICs'
 * '<S161>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/I Gain'
 * '<S162>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain'
 * '<S163>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S164>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator'
 * '<S165>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator ICs'
 * '<S166>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Copy'
 * '<S167>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Gain'
 * '<S168>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/P Copy'
 * '<S169>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Parallel P Gain'
 * '<S170>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Reset Signal'
 * '<S171>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation'
 * '<S172>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation Fdbk'
 * '<S173>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum'
 * '<S174>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum Fdbk'
 * '<S175>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode'
 * '<S176>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode Sum'
 * '<S177>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Integral'
 * '<S178>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Ngain'
 * '<S179>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/postSat Signal'
 * '<S180>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/preSat Signal'
 * '<S181>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S182>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S183>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S184>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/D Gain/Internal Parameters'
 * '<S185>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S186>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S187>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/I Gain/Internal Parameters'
 * '<S188>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S189>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S190>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator/Discrete'
 * '<S191>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S192>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Copy/Disabled'
 * '<S193>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Gain/Internal Parameters'
 * '<S194>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/P Copy/Disabled'
 * '<S195>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S196>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Reset Signal/Disabled'
 * '<S197>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation/Enabled'
 * '<S198>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S199>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum/Sum_PID'
 * '<S200>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S201>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode/Disabled'
 * '<S202>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S203>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S204>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S205>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S206>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S207>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup'
 * '<S208>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/D Gain'
 * '<S209>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter'
 * '<S210>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter ICs'
 * '<S211>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/I Gain'
 * '<S212>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain'
 * '<S213>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S214>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator'
 * '<S215>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator ICs'
 * '<S216>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Copy'
 * '<S217>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Gain'
 * '<S218>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/P Copy'
 * '<S219>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Parallel P Gain'
 * '<S220>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Reset Signal'
 * '<S221>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation'
 * '<S222>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation Fdbk'
 * '<S223>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum'
 * '<S224>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum Fdbk'
 * '<S225>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode'
 * '<S226>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode Sum'
 * '<S227>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Integral'
 * '<S228>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Ngain'
 * '<S229>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/postSat Signal'
 * '<S230>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/preSat Signal'
 * '<S231>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S232>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S233>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S234>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/D Gain/Internal Parameters'
 * '<S235>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S236>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S237>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/I Gain/Internal Parameters'
 * '<S238>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S239>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S240>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator/Discrete'
 * '<S241>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S242>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Copy/Disabled'
 * '<S243>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Gain/Internal Parameters'
 * '<S244>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/P Copy/Disabled'
 * '<S245>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S246>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Reset Signal/Disabled'
 * '<S247>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation/Enabled'
 * '<S248>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S249>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum/Sum_PID'
 * '<S250>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S251>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode/Disabled'
 * '<S252>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S253>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S254>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S255>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S256>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S257>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Anti-windup'
 * '<S258>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/D Gain'
 * '<S259>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Filter'
 * '<S260>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Filter ICs'
 * '<S261>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/I Gain'
 * '<S262>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Ideal P Gain'
 * '<S263>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S264>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Integrator'
 * '<S265>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Integrator ICs'
 * '<S266>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/N Copy'
 * '<S267>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/N Gain'
 * '<S268>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/P Copy'
 * '<S269>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Parallel P Gain'
 * '<S270>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Reset Signal'
 * '<S271>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Saturation'
 * '<S272>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Saturation Fdbk'
 * '<S273>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Sum'
 * '<S274>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Sum Fdbk'
 * '<S275>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tracking Mode'
 * '<S276>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tracking Mode Sum'
 * '<S277>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tsamp - Integral'
 * '<S278>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tsamp - Ngain'
 * '<S279>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/postSat Signal'
 * '<S280>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/preSat Signal'
 * '<S281>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S282>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S283>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S284>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/D Gain/Internal Parameters'
 * '<S285>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S286>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S287>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/I Gain/Internal Parameters'
 * '<S288>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S289>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S290>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Integrator/Discrete'
 * '<S291>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S292>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/N Copy/Disabled'
 * '<S293>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/N Gain/Internal Parameters'
 * '<S294>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/P Copy/Disabled'
 * '<S295>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S296>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Reset Signal/Disabled'
 * '<S297>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Saturation/Enabled'
 * '<S298>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S299>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Sum/Sum_PID'
 * '<S300>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S301>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tracking Mode/Disabled'
 * '<S302>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S303>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S304>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S305>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S306>' : 'BoostConverterModel_ControlSystem/Controller/Phase_C_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S307>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Anti-windup'
 * '<S308>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/D Gain'
 * '<S309>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Filter'
 * '<S310>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Filter ICs'
 * '<S311>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/I Gain'
 * '<S312>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Ideal P Gain'
 * '<S313>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S314>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Integrator'
 * '<S315>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Integrator ICs'
 * '<S316>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/N Copy'
 * '<S317>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/N Gain'
 * '<S318>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/P Copy'
 * '<S319>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Parallel P Gain'
 * '<S320>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Reset Signal'
 * '<S321>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Saturation'
 * '<S322>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Saturation Fdbk'
 * '<S323>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Sum'
 * '<S324>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Sum Fdbk'
 * '<S325>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tracking Mode'
 * '<S326>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tracking Mode Sum'
 * '<S327>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tsamp - Integral'
 * '<S328>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tsamp - Ngain'
 * '<S329>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/postSat Signal'
 * '<S330>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/preSat Signal'
 * '<S331>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S332>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S333>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S334>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/D Gain/Internal Parameters'
 * '<S335>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S336>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S337>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/I Gain/Internal Parameters'
 * '<S338>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S339>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S340>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Integrator/Discrete'
 * '<S341>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S342>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/N Copy/Disabled'
 * '<S343>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/N Gain/Internal Parameters'
 * '<S344>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/P Copy/Disabled'
 * '<S345>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S346>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Reset Signal/Disabled'
 * '<S347>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Saturation/Enabled'
 * '<S348>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S349>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Sum/Sum_PID'
 * '<S350>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S351>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tracking Mode/Disabled'
 * '<S352>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S353>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S354>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S355>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S356>' : 'BoostConverterModel_ControlSystem/Controller/Phase_D_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S357>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller'
 * '<S358>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Anti-windup'
 * '<S359>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/D Gain'
 * '<S360>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter'
 * '<S361>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter ICs'
 * '<S362>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/I Gain'
 * '<S363>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S364>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S365>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator'
 * '<S366>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S367>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Copy'
 * '<S368>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Gain'
 * '<S369>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/P Copy'
 * '<S370>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S371>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Reset Signal'
 * '<S372>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation'
 * '<S373>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S374>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum'
 * '<S375>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S376>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S377>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S378>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S379>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S380>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/postSat Signal'
 * '<S381>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/preSat Signal'
 * '<S382>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S383>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/D Gain/Disabled'
 * '<S384>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter/Disabled'
 * '<S385>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter ICs/Disabled'
 * '<S386>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S387>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S388>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S389>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S390>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S391>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S392>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Gain/Disabled'
 * '<S393>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S394>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S395>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S396>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation/Passthrough'
 * '<S397>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S398>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum/Sum_PI'
 * '<S399>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S400>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S401>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S402>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S403>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S404>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S405>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S406>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller'
 * '<S407>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Anti-windup'
 * '<S408>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/D Gain'
 * '<S409>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter'
 * '<S410>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter ICs'
 * '<S411>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/I Gain'
 * '<S412>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain'
 * '<S413>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S414>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator'
 * '<S415>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator ICs'
 * '<S416>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Copy'
 * '<S417>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Gain'
 * '<S418>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/P Copy'
 * '<S419>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Parallel P Gain'
 * '<S420>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Reset Signal'
 * '<S421>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation'
 * '<S422>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation Fdbk'
 * '<S423>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum'
 * '<S424>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum Fdbk'
 * '<S425>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode'
 * '<S426>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode Sum'
 * '<S427>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Integral'
 * '<S428>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Ngain'
 * '<S429>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/postSat Signal'
 * '<S430>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/preSat Signal'
 * '<S431>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S432>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/D Gain/Disabled'
 * '<S433>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter/Disabled'
 * '<S434>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter ICs/Disabled'
 * '<S435>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S436>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S437>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S438>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator/Discrete'
 * '<S439>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S440>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S441>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Gain/Disabled'
 * '<S442>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/P Copy/Disabled'
 * '<S443>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S444>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Reset Signal/Disabled'
 * '<S445>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation/Passthrough'
 * '<S446>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S447>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum/Sum_PI'
 * '<S448>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S449>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S450>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S451>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S452>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S453>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S454>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S455>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller'
 * '<S456>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup'
 * '<S457>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/D Gain'
 * '<S458>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter'
 * '<S459>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter ICs'
 * '<S460>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/I Gain'
 * '<S461>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain'
 * '<S462>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S463>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator'
 * '<S464>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator ICs'
 * '<S465>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Copy'
 * '<S466>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Gain'
 * '<S467>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/P Copy'
 * '<S468>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Parallel P Gain'
 * '<S469>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Reset Signal'
 * '<S470>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation'
 * '<S471>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation Fdbk'
 * '<S472>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum'
 * '<S473>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum Fdbk'
 * '<S474>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode'
 * '<S475>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode Sum'
 * '<S476>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Integral'
 * '<S477>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Ngain'
 * '<S478>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/postSat Signal'
 * '<S479>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/preSat Signal'
 * '<S480>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S481>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S482>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S483>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/D Gain/Disabled'
 * '<S484>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter/Disabled'
 * '<S485>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter ICs/Disabled'
 * '<S486>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S487>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S488>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S489>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator/Discrete'
 * '<S490>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S491>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S492>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Gain/Disabled'
 * '<S493>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/P Copy/Disabled'
 * '<S494>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S495>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Reset Signal/Disabled'
 * '<S496>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation/Enabled'
 * '<S497>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S498>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum/Sum_PI'
 * '<S499>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S500>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S501>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S502>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S503>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S504>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S505>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

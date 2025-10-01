/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller.h
 *
 * Code generated for Simulink model 'Controller'.
 *
 * Model version                  : 1.446
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Oct  1 12:01:05 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Custom Processor->Custom Processor
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
  real_T Sum;                          /* '<S49>/Sum' */
  real_T UnitDelay3_DSTATE;            /* '<S1>/Unit Delay3' */
  real_T UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  real_T Integrator_DSTATE;            /* '<S40>/Integrator' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Integrator_DSTATE_g;          /* '<S90>/Integrator' */
  real_T Filter_DSTATE;                /* '<S85>/Filter' */
  real_T Integrator_DSTATE_o;          /* '<S140>/Integrator' */
  real_T Filter_DSTATE_m;              /* '<S135>/Filter' */
  real_T Integrator_DSTATE_ou;         /* '<S289>/Integrator' */
  real_T Integrator_DSTATE_i;          /* '<S238>/Integrator' */
  real_T Integrator_DSTATE_n;          /* '<S189>/Integrator' */
  real_T Gain;                         /* '<S1>/Gain' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T I_Out;                        /* '<Root>/I_Out' */
  real_T V_Out;                        /* '<Root>/V_Out' */
  real_T I_PhaseA;                     /* '<Root>/I_PhaseA' */
  real_T I_PhaseB;                     /* '<Root>/I_PhaseB' */
  real_T I_In;                         /* '<Root>/I_In' */
  real_T User_ModeSelect;              /* '<Root>/User_ModeSelect' */
  real_T User_TargetVoltage;           /* '<Root>/User_TargetVoltage' */
  real_T User_TargetCurrent;           /* '<Root>/User_TargetCurrent' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Phase_A_DutyCycle;            /* '<Root>/Phase_A_DutyCycle' */
  real_T Phase_B_DutyCycle;            /* '<Root>/Phase_B_DutyCycle' */
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
 * Block '<S1>/I_RefTotal' : Unused code path elimination
 * Block '<S1>/Phase Current Difference' : Unused code path elimination
 * Block '<S286>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S294>/Proportional Gain' : Eliminated nontunable gain of 1
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
 * '<S2>'   : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller'
 * '<S3>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI'
 * '<S4>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI'
 * '<S5>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem'
 * '<S6>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1'
 * '<S7>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2'
 * '<S8>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem3'
 * '<S9>'   : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Anti-windup'
 * '<S10>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/D Gain'
 * '<S11>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter'
 * '<S12>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter ICs'
 * '<S13>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/I Gain'
 * '<S14>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain'
 * '<S15>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S16>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator'
 * '<S17>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator ICs'
 * '<S18>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Copy'
 * '<S19>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Gain'
 * '<S20>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/P Copy'
 * '<S21>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Parallel P Gain'
 * '<S22>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Reset Signal'
 * '<S23>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation'
 * '<S24>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation Fdbk'
 * '<S25>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum'
 * '<S26>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum Fdbk'
 * '<S27>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode'
 * '<S28>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode Sum'
 * '<S29>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Integral'
 * '<S30>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Ngain'
 * '<S31>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/postSat Signal'
 * '<S32>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/preSat Signal'
 * '<S33>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S34>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/D Gain/Disabled'
 * '<S35>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter/Disabled'
 * '<S36>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter ICs/Disabled'
 * '<S37>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S38>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S39>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S40>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator/Discrete'
 * '<S41>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S42>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S43>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Gain/Disabled'
 * '<S44>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/P Copy/Disabled'
 * '<S45>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S46>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Reset Signal/Disabled'
 * '<S47>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation/Passthrough'
 * '<S48>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S49>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum/Sum_PI'
 * '<S50>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S51>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S52>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S53>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S54>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S55>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S56>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S57>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup'
 * '<S58>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/D Gain'
 * '<S59>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter'
 * '<S60>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter ICs'
 * '<S61>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/I Gain'
 * '<S62>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain'
 * '<S63>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S64>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator'
 * '<S65>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator ICs'
 * '<S66>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Copy'
 * '<S67>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Gain'
 * '<S68>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/P Copy'
 * '<S69>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Parallel P Gain'
 * '<S70>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Reset Signal'
 * '<S71>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation'
 * '<S72>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation Fdbk'
 * '<S73>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum'
 * '<S74>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum Fdbk'
 * '<S75>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode'
 * '<S76>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode Sum'
 * '<S77>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Integral'
 * '<S78>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Ngain'
 * '<S79>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/postSat Signal'
 * '<S80>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/preSat Signal'
 * '<S81>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S82>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S83>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S84>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/D Gain/Internal Parameters'
 * '<S85>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S86>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S87>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/I Gain/Internal Parameters'
 * '<S88>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S89>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S90>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator/Discrete'
 * '<S91>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S92>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Copy/Disabled'
 * '<S93>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Gain/Internal Parameters'
 * '<S94>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/P Copy/Disabled'
 * '<S95>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S96>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Reset Signal/Disabled'
 * '<S97>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation/Enabled'
 * '<S98>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S99>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum/Sum_PID'
 * '<S100>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S101>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode/Disabled'
 * '<S102>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S103>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S104>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S105>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S106>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S107>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup'
 * '<S108>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/D Gain'
 * '<S109>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter'
 * '<S110>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter ICs'
 * '<S111>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/I Gain'
 * '<S112>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain'
 * '<S113>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S114>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator'
 * '<S115>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator ICs'
 * '<S116>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Copy'
 * '<S117>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Gain'
 * '<S118>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/P Copy'
 * '<S119>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Parallel P Gain'
 * '<S120>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Reset Signal'
 * '<S121>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation'
 * '<S122>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation Fdbk'
 * '<S123>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum'
 * '<S124>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum Fdbk'
 * '<S125>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode'
 * '<S126>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode Sum'
 * '<S127>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Integral'
 * '<S128>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Ngain'
 * '<S129>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/postSat Signal'
 * '<S130>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/preSat Signal'
 * '<S131>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S132>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S133>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S134>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/D Gain/Internal Parameters'
 * '<S135>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S136>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S137>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/I Gain/Internal Parameters'
 * '<S138>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S139>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S140>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator/Discrete'
 * '<S141>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S142>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Copy/Disabled'
 * '<S143>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Gain/Internal Parameters'
 * '<S144>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/P Copy/Disabled'
 * '<S145>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S146>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Reset Signal/Disabled'
 * '<S147>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation/Enabled'
 * '<S148>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S149>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum/Sum_PID'
 * '<S150>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S151>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode/Disabled'
 * '<S152>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S153>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S154>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S155>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S156>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S157>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller'
 * '<S158>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Anti-windup'
 * '<S159>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/D Gain'
 * '<S160>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter'
 * '<S161>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter ICs'
 * '<S162>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/I Gain'
 * '<S163>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S164>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S165>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator'
 * '<S166>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S167>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Copy'
 * '<S168>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Gain'
 * '<S169>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/P Copy'
 * '<S170>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S171>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Reset Signal'
 * '<S172>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation'
 * '<S173>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S174>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum'
 * '<S175>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S176>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S177>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S178>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S179>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S180>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/postSat Signal'
 * '<S181>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/preSat Signal'
 * '<S182>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S183>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/D Gain/Disabled'
 * '<S184>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter/Disabled'
 * '<S185>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter ICs/Disabled'
 * '<S186>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S187>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S188>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S189>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S190>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S191>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S192>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Gain/Disabled'
 * '<S193>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S194>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S195>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S196>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation/Passthrough'
 * '<S197>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S198>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum/Sum_PI'
 * '<S199>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S200>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S201>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S202>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S203>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S204>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S205>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S206>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller'
 * '<S207>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Anti-windup'
 * '<S208>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/D Gain'
 * '<S209>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter'
 * '<S210>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter ICs'
 * '<S211>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/I Gain'
 * '<S212>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain'
 * '<S213>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S214>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator'
 * '<S215>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator ICs'
 * '<S216>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Copy'
 * '<S217>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Gain'
 * '<S218>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/P Copy'
 * '<S219>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Parallel P Gain'
 * '<S220>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Reset Signal'
 * '<S221>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation'
 * '<S222>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation Fdbk'
 * '<S223>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum'
 * '<S224>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum Fdbk'
 * '<S225>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode'
 * '<S226>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode Sum'
 * '<S227>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Integral'
 * '<S228>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Ngain'
 * '<S229>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/postSat Signal'
 * '<S230>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/preSat Signal'
 * '<S231>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S232>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/D Gain/Disabled'
 * '<S233>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter/Disabled'
 * '<S234>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter ICs/Disabled'
 * '<S235>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S236>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S237>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S238>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator/Discrete'
 * '<S239>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S240>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S241>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Gain/Disabled'
 * '<S242>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/P Copy/Disabled'
 * '<S243>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S244>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Reset Signal/Disabled'
 * '<S245>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation/Passthrough'
 * '<S246>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S247>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum/Sum_PI'
 * '<S248>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S249>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S250>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S251>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S252>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S253>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S254>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S255>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller'
 * '<S256>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup'
 * '<S257>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/D Gain'
 * '<S258>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter'
 * '<S259>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter ICs'
 * '<S260>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/I Gain'
 * '<S261>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain'
 * '<S262>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S263>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator'
 * '<S264>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator ICs'
 * '<S265>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Copy'
 * '<S266>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Gain'
 * '<S267>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/P Copy'
 * '<S268>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Parallel P Gain'
 * '<S269>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Reset Signal'
 * '<S270>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation'
 * '<S271>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation Fdbk'
 * '<S272>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum'
 * '<S273>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum Fdbk'
 * '<S274>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode'
 * '<S275>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode Sum'
 * '<S276>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Integral'
 * '<S277>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Ngain'
 * '<S278>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/postSat Signal'
 * '<S279>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/preSat Signal'
 * '<S280>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S281>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S282>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S283>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/D Gain/Disabled'
 * '<S284>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter/Disabled'
 * '<S285>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter ICs/Disabled'
 * '<S286>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S287>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S288>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S289>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator/Discrete'
 * '<S290>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S291>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S292>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Gain/Disabled'
 * '<S293>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/P Copy/Disabled'
 * '<S294>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S295>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Reset Signal/Disabled'
 * '<S296>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation/Enabled'
 * '<S297>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S298>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum/Sum_PI'
 * '<S299>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S300>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S301>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S302>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S303>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S304>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S305>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_Controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

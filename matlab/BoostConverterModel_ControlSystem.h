/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BoostConverterModel_ControlSystem.h
 *
 * Code generated for Simulink model 'BoostConverterModel_ControlSystem'.
 *
 * Model version                  : 1.418
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Sep 30 18:06:06 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BoostConverterModel_ControlSystem_h_
#define RTW_HEADER_BoostConverterModel_ControlSystem_h_
#ifndef BoostConverterModel_ControlSystem_COMMON_INCLUDES_
#define BoostConverterModel_ControlSystem_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#include "complex_types.h"
#endif                  /* BoostConverterModel_ControlSystem_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define BoostConverterModel_ControlSystem_M (BoostConverterModel_ControlS_M)

/* Forward declaration for rtModel */
typedef struct tag_RTM_BoostConverterModel_C_T RT_MODEL_BoostConverterModel__T;

/* Block signals (default storage) */
typedef struct {
  double Sum;                          /* '<S50>/Sum' */
  double Product1;                     /* '<S317>/Product1' */
  double Product1_g;                   /* '<S331>/Product1' */
  double UnitDelay1;                   /* '<S317>/Unit Delay1' */
  double UnitDelay1_b;                 /* '<S331>/Unit Delay1' */
  double StateSpace_o1[12];            /* '<S352>/State-Space' */
  double StateSpace_o2[2];             /* '<S352>/State-Space' */
  double V;                            /* '<S331>/MATLAB Function2' */
  double V_l;                          /* '<S317>/MATLAB Function2' */
  double UnitDelay3;                   /* '<S1>/Unit Delay3' */
  double Idc;                          /* '<S317>/MATLAB Function1' */
  double IntegralGain;                 /* '<S38>/Integral Gain' */
} B_BoostConverterModel_Control_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  double UnitDelay3_DSTATE;            /* '<S1>/Unit Delay3' */
  double UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  double Integrator_DSTATE;            /* '<S41>/Integrator' */
  double UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  double UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  double UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  double Integrator_DSTATE_g;          /* '<S91>/Integrator' */
  double Filter_DSTATE;                /* '<S86>/Filter' */
  double Integrator_DSTATE_o;          /* '<S141>/Integrator' */
  double Filter_DSTATE_m;              /* '<S136>/Filter' */
  double UnitDelay2_DSTATE_c;          /* '<S317>/Unit Delay2' */
  double UnitDelay2_DSTATE_d;          /* '<S331>/Unit Delay2' */
  double UnitDelay1_DSTATE_f;          /* '<S317>/Unit Delay1' */
  double UnitDelay1_DSTATE_h;          /* '<S331>/Unit Delay1' */
  double StateSpace_DSTATE;            /* '<S352>/State-Space' */
  double Integrator_DSTATE_n;          /* '<S190>/Integrator' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S352>/State-Space' */

  int StateSpace_IWORK[11];            /* '<S352>/State-Space' */
} DW_BoostConverterModel_Contro_T;

/* Invariant block signals (default storage) */
typedef struct {
  const double DataTypeConversion1;    /* '<S317>/Data Type Conversion1' */
  const double DataTypeConversion1_f;  /* '<S331>/Data Type Conversion1' */
  const bool Compare;                  /* '<S319>/Compare' */
  const bool Compare_k;                /* '<S333>/Compare' */
} ConstB_BoostConverterModel_Co_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: S.B
   * Referenced by: '<S352>/State-Space'
   */
  double StateSpace_BS_param[9];

  /* Expression: S.C
   * Referenced by: '<S352>/State-Space'
   */
  double StateSpace_CS_param[12];

  /* Expression: S.D
   * Referenced by: '<S352>/State-Space'
   */
  double StateSpace_DS_param[108];
} ConstP_BoostConverterModel_Co_T;

/* Real-time Model Data Structure */
struct tag_RTM_BoostConverterModel_C_T {
  const char * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_t TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_BoostConverterModel_Control_T BoostConverterModel_ControlSy_B;

/* Block states (default storage) */
extern DW_BoostConverterModel_Contro_T BoostConverterModel_ControlS_DW;
extern const ConstB_BoostConverterModel_Co_T BoostConverterModel_Cont_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_BoostConverterModel_Co_T BoostConverterModel_Cont_ConstP;

/* Model entry point functions */
extern void BoostConverterModel_ControlSystem_initialize(void);
extern void BoostConverterModel_ControlSystem_step(void);
extern void BoostConverterModel_ControlSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BoostConverterModel__T *const BoostConverterModel_ControlS_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/I_RefTotal' : Unused code path elimination
 * Block '<S1>/Phase Current Difference' : Unused code path elimination
 * Block '<Root>/I_In' : Unused code path elimination
 * Block '<Root>/I_Out' : Unused code path elimination
 * Block '<Root>/I_PhaseA' : Unused code path elimination
 * Block '<Root>/I_PhaseB' : Unused code path elimination
 * Block '<Root>/Phase_A_DutyCycle' : Unused code path elimination
 * Block '<Root>/Phase_B_DutyCycle' : Unused code path elimination
 * Block '<S328>/0 1' : Unused code path elimination
 * Block '<S328>/Gain' : Unused code path elimination
 * Block '<S328>/Saturation' : Unused code path elimination
 * Block '<S328>/Sum' : Unused code path elimination
 * Block '<S328>/Switch' : Unused code path elimination
 * Block '<S342>/0 1' : Unused code path elimination
 * Block '<S342>/Gain' : Unused code path elimination
 * Block '<S342>/Saturation' : Unused code path elimination
 * Block '<S342>/Sum' : Unused code path elimination
 * Block '<S342>/Switch' : Unused code path elimination
 * Block '<S315>/do not delete this gain' : Unused code path elimination
 * Block '<Root>/V_In' : Unused code path elimination
 * Block '<Root>/V_Out' : Unused code path elimination
 * Block '<S287>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S295>/Proportional Gain' : Eliminated nontunable gain of 1
 * Block '<S322>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S325>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S317>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S336>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S339>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S331>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S309>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S310>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S311>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S312>/do not delete this gain' : Eliminated nontunable gain of 1
 * Block '<S314>/do not delete this gain' : Eliminated nontunable gain of 1
 */

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
 * '<Root>' : 'BoostConverterModel_ControlSystem'
 * '<S1>'   : 'BoostConverterModel_ControlSystem/Controller'
 * '<S2>'   : 'BoostConverterModel_ControlSystem/Plant'
 * '<S3>'   : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller'
 * '<S4>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI'
 * '<S5>'   : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI'
 * '<S6>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem'
 * '<S7>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1'
 * '<S8>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2'
 * '<S9>'   : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem3'
 * '<S10>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Anti-windup'
 * '<S11>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/D Gain'
 * '<S12>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter'
 * '<S13>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter ICs'
 * '<S14>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/I Gain'
 * '<S15>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain'
 * '<S16>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S17>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator'
 * '<S18>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator ICs'
 * '<S19>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Copy'
 * '<S20>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Gain'
 * '<S21>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/P Copy'
 * '<S22>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Parallel P Gain'
 * '<S23>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Reset Signal'
 * '<S24>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation'
 * '<S25>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation Fdbk'
 * '<S26>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum'
 * '<S27>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum Fdbk'
 * '<S28>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode'
 * '<S29>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode Sum'
 * '<S30>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Integral'
 * '<S31>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Ngain'
 * '<S32>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/postSat Signal'
 * '<S33>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/preSat Signal'
 * '<S34>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S35>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/D Gain/Disabled'
 * '<S36>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter/Disabled'
 * '<S37>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Filter ICs/Disabled'
 * '<S38>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S39>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S40>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S41>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator/Discrete'
 * '<S42>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S43>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S44>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/N Gain/Disabled'
 * '<S45>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/P Copy/Disabled'
 * '<S46>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S47>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Reset Signal/Disabled'
 * '<S48>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation/Passthrough'
 * '<S49>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S50>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum/Sum_PI'
 * '<S51>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S52>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S53>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S54>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S55>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S56>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S57>'  : 'BoostConverterModel_ControlSystem/Controller/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S58>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup'
 * '<S59>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/D Gain'
 * '<S60>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter'
 * '<S61>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter ICs'
 * '<S62>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/I Gain'
 * '<S63>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain'
 * '<S64>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S65>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator'
 * '<S66>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator ICs'
 * '<S67>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Copy'
 * '<S68>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Gain'
 * '<S69>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/P Copy'
 * '<S70>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Parallel P Gain'
 * '<S71>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Reset Signal'
 * '<S72>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation'
 * '<S73>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation Fdbk'
 * '<S74>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum'
 * '<S75>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum Fdbk'
 * '<S76>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode'
 * '<S77>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode Sum'
 * '<S78>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Integral'
 * '<S79>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Ngain'
 * '<S80>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/postSat Signal'
 * '<S81>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/preSat Signal'
 * '<S82>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S83>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S84>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S85>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/D Gain/Internal Parameters'
 * '<S86>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S87>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S88>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/I Gain/Internal Parameters'
 * '<S89>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S90>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S91>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator/Discrete'
 * '<S92>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S93>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Copy/Disabled'
 * '<S94>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/N Gain/Internal Parameters'
 * '<S95>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/P Copy/Disabled'
 * '<S96>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S97>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Reset Signal/Disabled'
 * '<S98>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation/Enabled'
 * '<S99>'  : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S100>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum/Sum_PID'
 * '<S101>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S102>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode/Disabled'
 * '<S103>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S104>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S105>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S106>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S107>' : 'BoostConverterModel_ControlSystem/Controller/Phase_A_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S108>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup'
 * '<S109>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/D Gain'
 * '<S110>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter'
 * '<S111>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter ICs'
 * '<S112>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/I Gain'
 * '<S113>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain'
 * '<S114>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain Fdbk'
 * '<S115>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator'
 * '<S116>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator ICs'
 * '<S117>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Copy'
 * '<S118>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Gain'
 * '<S119>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/P Copy'
 * '<S120>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Parallel P Gain'
 * '<S121>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Reset Signal'
 * '<S122>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation'
 * '<S123>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation Fdbk'
 * '<S124>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum'
 * '<S125>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum Fdbk'
 * '<S126>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode'
 * '<S127>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode Sum'
 * '<S128>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Integral'
 * '<S129>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Ngain'
 * '<S130>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/postSat Signal'
 * '<S131>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/preSat Signal'
 * '<S132>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel'
 * '<S133>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S134>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S135>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/D Gain/Internal Parameters'
 * '<S136>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter/Disc. Forward Euler Filter'
 * '<S137>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Filter ICs/Internal IC - Filter'
 * '<S138>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/I Gain/Internal Parameters'
 * '<S139>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain/Passthrough'
 * '<S140>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Ideal P Gain Fdbk/Disabled'
 * '<S141>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator/Discrete'
 * '<S142>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Integrator ICs/Internal IC'
 * '<S143>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Copy/Disabled'
 * '<S144>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/N Gain/Internal Parameters'
 * '<S145>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/P Copy/Disabled'
 * '<S146>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Parallel P Gain/Internal Parameters'
 * '<S147>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Reset Signal/Disabled'
 * '<S148>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation/Enabled'
 * '<S149>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Saturation Fdbk/Disabled'
 * '<S150>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum/Sum_PID'
 * '<S151>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Sum Fdbk/Disabled'
 * '<S152>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode/Disabled'
 * '<S153>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tracking Mode Sum/Passthrough'
 * '<S154>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Integral/TsSignalSpecification'
 * '<S155>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/Tsamp - Ngain/Passthrough'
 * '<S156>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/postSat Signal/Forward_Path'
 * '<S157>' : 'BoostConverterModel_ControlSystem/Controller/Phase_B_DutyCycle PI/preSat Signal/Forward_Path'
 * '<S158>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller'
 * '<S159>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Anti-windup'
 * '<S160>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/D Gain'
 * '<S161>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter'
 * '<S162>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter ICs'
 * '<S163>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/I Gain'
 * '<S164>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S165>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S166>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator'
 * '<S167>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S168>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Copy'
 * '<S169>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Gain'
 * '<S170>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/P Copy'
 * '<S171>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S172>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Reset Signal'
 * '<S173>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation'
 * '<S174>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S175>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum'
 * '<S176>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S177>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S178>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S179>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S180>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S181>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/postSat Signal'
 * '<S182>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/preSat Signal'
 * '<S183>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S184>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/D Gain/Disabled'
 * '<S185>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter/Disabled'
 * '<S186>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Filter ICs/Disabled'
 * '<S187>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S188>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S189>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S190>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S191>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S192>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S193>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/N Gain/Disabled'
 * '<S194>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S195>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S196>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S197>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation/Passthrough'
 * '<S198>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S199>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum/Sum_PI'
 * '<S200>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S201>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S202>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S203>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S204>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S205>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S206>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S207>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller'
 * '<S208>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Anti-windup'
 * '<S209>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/D Gain'
 * '<S210>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter'
 * '<S211>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter ICs'
 * '<S212>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/I Gain'
 * '<S213>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain'
 * '<S214>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S215>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator'
 * '<S216>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator ICs'
 * '<S217>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Copy'
 * '<S218>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Gain'
 * '<S219>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/P Copy'
 * '<S220>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Parallel P Gain'
 * '<S221>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Reset Signal'
 * '<S222>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation'
 * '<S223>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation Fdbk'
 * '<S224>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum'
 * '<S225>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum Fdbk'
 * '<S226>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode'
 * '<S227>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode Sum'
 * '<S228>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Integral'
 * '<S229>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Ngain'
 * '<S230>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/postSat Signal'
 * '<S231>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/preSat Signal'
 * '<S232>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S233>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/D Gain/Disabled'
 * '<S234>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter/Disabled'
 * '<S235>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Filter ICs/Disabled'
 * '<S236>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S237>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S238>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S239>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator/Discrete'
 * '<S240>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S241>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S242>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/N Gain/Disabled'
 * '<S243>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/P Copy/Disabled'
 * '<S244>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S245>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Reset Signal/Disabled'
 * '<S246>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation/Passthrough'
 * '<S247>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S248>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum/Sum_PI'
 * '<S249>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S250>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S251>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S252>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S253>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S254>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S255>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem1/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S256>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller'
 * '<S257>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup'
 * '<S258>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/D Gain'
 * '<S259>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter'
 * '<S260>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter ICs'
 * '<S261>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/I Gain'
 * '<S262>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain'
 * '<S263>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S264>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator'
 * '<S265>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator ICs'
 * '<S266>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Copy'
 * '<S267>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Gain'
 * '<S268>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/P Copy'
 * '<S269>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Parallel P Gain'
 * '<S270>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Reset Signal'
 * '<S271>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation'
 * '<S272>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation Fdbk'
 * '<S273>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum'
 * '<S274>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum Fdbk'
 * '<S275>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode'
 * '<S276>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode Sum'
 * '<S277>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Integral'
 * '<S278>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Ngain'
 * '<S279>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/postSat Signal'
 * '<S280>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/preSat Signal'
 * '<S281>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S282>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S283>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S284>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/D Gain/Disabled'
 * '<S285>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter/Disabled'
 * '<S286>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Filter ICs/Disabled'
 * '<S287>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S288>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S289>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S290>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator/Discrete'
 * '<S291>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S292>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S293>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/N Gain/Disabled'
 * '<S294>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/P Copy/Disabled'
 * '<S295>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S296>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Reset Signal/Disabled'
 * '<S297>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation/Enabled'
 * '<S298>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S299>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum/Sum_PI'
 * '<S300>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S301>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S302>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S303>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S304>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S305>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S306>' : 'BoostConverterModel_ControlSystem/Controller/Switch Case Action Subsystem2/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S307>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A'
 * '<S308>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B'
 * '<S309>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement'
 * '<S310>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement1'
 * '<S311>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement2'
 * '<S312>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement3'
 * '<S313>' : 'BoostConverterModel_ControlSystem/Plant/DC Voltage Source'
 * '<S314>' : 'BoostConverterModel_ControlSystem/Plant/Voltage Measurement'
 * '<S315>' : 'BoostConverterModel_ControlSystem/Plant/Voltage Measurement1'
 * '<S316>' : 'BoostConverterModel_ControlSystem/Plant/powergui'
 * '<S317>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model'
 * '<S318>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power'
 * '<S319>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Compare To Constant'
 * '<S320>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/MATLAB Function1'
 * '<S321>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/MATLAB Function2'
 * '<S322>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/Current Measurement'
 * '<S323>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/D'
 * '<S324>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/Ip'
 * '<S325>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/Vdc1'
 * '<S326>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/Vp'
 * '<S327>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/Current Measurement/Model'
 * '<S328>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/D/Model'
 * '<S329>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/D/Model/Measurement list'
 * '<S330>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter A/Model/Boost_Power/Vdc1/Model'
 * '<S331>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model'
 * '<S332>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power'
 * '<S333>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Compare To Constant'
 * '<S334>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/MATLAB Function1'
 * '<S335>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/MATLAB Function2'
 * '<S336>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/Current Measurement'
 * '<S337>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/D'
 * '<S338>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/Ip'
 * '<S339>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/Vdc1'
 * '<S340>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/Vp'
 * '<S341>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/Current Measurement/Model'
 * '<S342>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/D/Model'
 * '<S343>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/D/Model/Measurement list'
 * '<S344>' : 'BoostConverterModel_ControlSystem/Plant/Boost Converter B/Model/Boost_Power/Vdc1/Model'
 * '<S345>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement/Model'
 * '<S346>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement1/Model'
 * '<S347>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement2/Model'
 * '<S348>' : 'BoostConverterModel_ControlSystem/Plant/Current Measurement3/Model'
 * '<S349>' : 'BoostConverterModel_ControlSystem/Plant/DC Voltage Source/Model'
 * '<S350>' : 'BoostConverterModel_ControlSystem/Plant/Voltage Measurement/Model'
 * '<S351>' : 'BoostConverterModel_ControlSystem/Plant/Voltage Measurement1/Model'
 * '<S352>' : 'BoostConverterModel_ControlSystem/Plant/powergui/EquivalentModel1'
 * '<S353>' : 'BoostConverterModel_ControlSystem/Plant/powergui/EquivalentModel1/Gates'
 * '<S354>' : 'BoostConverterModel_ControlSystem/Plant/powergui/EquivalentModel1/Sources'
 * '<S355>' : 'BoostConverterModel_ControlSystem/Plant/powergui/EquivalentModel1/Status'
 * '<S356>' : 'BoostConverterModel_ControlSystem/Plant/powergui/EquivalentModel1/Yout'
 */
#endif                     /* RTW_HEADER_BoostConverterModel_ControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

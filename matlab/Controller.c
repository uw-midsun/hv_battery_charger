/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller.c
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

#include "Controller.h"

#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void) {
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) >
      9) { /* Sample time: [0.0001s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void Controller_step(void) {
  real_T Sum3;
  real_T rtb_DeadZone;
  real_T rtb_DeadZone_e;
  real_T rtb_DeadZone_m;
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_e;
  real_T rtb_Sum1_m;
  int8_T tmp;
  int8_T tmp_0;

  /* Sum: '<S1>/Sum3' incorporates:
   *  UnitDelay: '<S1>/Unit Delay3'
   *  UnitDelay: '<S1>/Unit Delay4'
   */
  Sum3 = rtDW.UnitDelay3_DSTATE - rtDW.UnitDelay4_DSTATE;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Sum: '<S49>/Sum' incorporates:
     *  DiscreteIntegrator: '<S40>/Integrator'
     *  Gain: '<S45>/Proportional Gain'
     */
    rtDW.Sum = 0.5 * Sum3 + rtDW.Integrator_DSTATE;
  }

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/User_ModeSelect'
   */
  switch ((int32_T)rtU.User_ModeSelect) {
    case 1:
      /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem'
       * incorporates: ActionPort: '<S5>/Action Port'
       */
      /* Sum: '<S5>/Sum1' incorporates:
       *  Inport: '<Root>/User_TargetVoltage'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      rtb_Sum1_m = rtU.User_TargetVoltage - rtDW.UnitDelay_DSTATE;

      /* Sum: '<S198>/Sum' incorporates:
       *  DiscreteIntegrator: '<S189>/Integrator'
       *  Gain: '<S194>/Proportional Gain'
       */
      rtDW.Gain = 2.5 * rtb_Sum1_m + rtDW.Integrator_DSTATE_n;

      /* Update for DiscreteIntegrator: '<S189>/Integrator' incorporates:
       *  Gain: '<S186>/Integral Gain'
       */
      rtDW.Integrator_DSTATE_n += 5.0E-5 * rtb_Sum1_m;

      /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem' */
      break;

    case 2:
      /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem1'
       * incorporates: ActionPort: '<S6>/Action Port'
       */
      /* Sum: '<S6>/Sum1' incorporates:
       *  Inport: '<Root>/User_TargetCurrent'
       *  UnitDelay: '<S1>/Unit Delay1'
       */
      rtb_Sum1_m = rtU.User_TargetCurrent - rtDW.UnitDelay1_DSTATE;

      /* Sum: '<S247>/Sum' incorporates:
       *  DiscreteIntegrator: '<S238>/Integrator'
       *  Gain: '<S243>/Proportional Gain'
       */
      rtDW.Gain = 10.0 * rtb_Sum1_m + rtDW.Integrator_DSTATE_i;

      /* Update for DiscreteIntegrator: '<S238>/Integrator' incorporates:
       *  Gain: '<S235>/Integral Gain'
       */
      rtDW.Integrator_DSTATE_i += 0.0005 * rtb_Sum1_m;

      /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem1' */
      break;

    case 3:
      /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem2'
       * incorporates: ActionPort: '<S7>/Action Port'
       */
      /* Sum: '<S7>/Sum1' incorporates:
       *  Inport: '<Root>/User_TargetCurrent'
       *  UnitDelay: '<S1>/Unit Delay2'
       */
      rtb_Sum1_m = rtU.User_TargetCurrent - rtDW.UnitDelay2_DSTATE;

      /* Sum: '<S298>/Sum' incorporates:
       *  DiscreteIntegrator: '<S289>/Integrator'
       */
      rtDW.Gain = rtb_Sum1_m + rtDW.Integrator_DSTATE_ou;

      /* DeadZone: '<S282>/DeadZone' incorporates:
       *  Saturate: '<S296>/Saturation'
       */
      if (rtDW.Gain > 160.0) {
        rtb_DeadZone = rtDW.Gain - 160.0;
        rtDW.Gain = 160.0;

        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S280>/Constant'
         */
        tmp = 1;
      } else {
        if (rtDW.Gain >= 0.0) {
          rtb_DeadZone = 0.0;
        } else {
          rtb_DeadZone = rtDW.Gain;
        }

        if (rtDW.Gain < 0.0) {
          rtDW.Gain = 0.0;
        }

        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S280>/Constant2'
         */
        tmp = -1;
      }

      /* End of DeadZone: '<S282>/DeadZone' */

      /* Switch: '<S280>/Switch2' incorporates:
       *  Constant: '<S280>/Clamping_zero'
       *  Constant: '<S280>/Constant3'
       *  Constant: '<S280>/Constant4'
       *  RelationalOperator: '<S280>/fix for DT propagation issue1'
       */
      if (rtb_Sum1_m > 0.0) {
        tmp_0 = 1;
      } else {
        tmp_0 = -1;
      }

      /* Switch: '<S280>/Switch' incorporates:
       *  Constant: '<S280>/Clamping_zero'
       *  Constant: '<S280>/Constant1'
       *  Logic: '<S280>/AND3'
       *  RelationalOperator: '<S280>/Equal1'
       *  RelationalOperator: '<S280>/Relational Operator'
       *  Switch: '<S280>/Switch1'
       *  Switch: '<S280>/Switch2'
       */
      if ((rtb_DeadZone != 0.0) && (tmp == tmp_0)) {
        rtb_Sum1_m = 0.0;
      }

      /* Update for DiscreteIntegrator: '<S289>/Integrator' incorporates:
       *  Switch: '<S280>/Switch'
       */
      rtDW.Integrator_DSTATE_ou += rtb_Sum1_m;

      /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem2' */
      break;

    default:
      /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem3'
       * incorporates: ActionPort: '<S8>/Action Port'
       */
      /* SignalConversion generated from: '<S8>/I_RefTotal' incorporates:
       *  Constant: '<S8>/Constant'
       */
      rtDW.Gain = 0.0;

      /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem3' */
      break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Gain: '<S1>/Gain' */
  rtDW.Gain *= 0.5;

  /* Sum: '<S1>/Sum4' incorporates:
   *  Sum: '<S1>/Sum1'
   *  UnitDelay: '<S1>/Unit Delay3'
   */
  rtb_Sum1_m = (rtDW.Gain - rtDW.Sum) - rtDW.UnitDelay3_DSTATE;

  /* Sum: '<S1>/Sum5' incorporates:
   *  Sum: '<S1>/Sum2'
   *  UnitDelay: '<S1>/Unit Delay4'
   */
  rtDW.Gain = (rtDW.Sum + rtDW.Gain) - rtDW.UnitDelay4_DSTATE;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S93>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S85>/Filter'
     *  Gain: '<S84>/Derivative Gain'
     *  Sum: '<S85>/SumD'
     */
    rtb_FilterCoefficient = (0.0003 * rtb_Sum1_m - rtDW.Filter_DSTATE) * 10.0;

    /* Sum: '<S99>/Sum' incorporates:
     *  DiscreteIntegrator: '<S90>/Integrator'
     *  Gain: '<S95>/Proportional Gain'
     */
    rtb_DeadZone_m = (0.0001 * rtb_Sum1_m + rtDW.Integrator_DSTATE_g) +
                     rtb_FilterCoefficient;

    /* Saturate: '<S97>/Saturation' */
    if (rtb_DeadZone_m > 1.0) {
      /* Outport: '<Root>/Phase_A_DutyCycle' */
      rtY.Phase_A_DutyCycle = 1.0;
    } else if (rtb_DeadZone_m < 0.0) {
      /* Outport: '<Root>/Phase_A_DutyCycle' */
      rtY.Phase_A_DutyCycle = 0.0;
    } else {
      /* Outport: '<Root>/Phase_A_DutyCycle' */
      rtY.Phase_A_DutyCycle = rtb_DeadZone_m;
    }

    /* End of Saturate: '<S97>/Saturation' */

    /* Gain: '<S143>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S135>/Filter'
     *  Gain: '<S134>/Derivative Gain'
     *  Sum: '<S135>/SumD'
     */
    rtb_FilterCoefficient_e =
        (0.0003 * rtDW.Gain - rtDW.Filter_DSTATE_m) * 10.0;

    /* Sum: '<S149>/Sum' incorporates:
     *  DiscreteIntegrator: '<S140>/Integrator'
     *  Gain: '<S145>/Proportional Gain'
     */
    rtb_DeadZone_e = (0.0001 * rtDW.Gain + rtDW.Integrator_DSTATE_o) +
                     rtb_FilterCoefficient_e;

    /* Saturate: '<S147>/Saturation' */
    if (rtb_DeadZone_e > 1.0) {
      /* Outport: '<Root>/Phase_B_DutyCycle' */
      rtY.Phase_B_DutyCycle = 1.0;
    } else if (rtb_DeadZone_e < 0.0) {
      /* Outport: '<Root>/Phase_B_DutyCycle' */
      rtY.Phase_B_DutyCycle = 0.0;
    } else {
      /* Outport: '<Root>/Phase_B_DutyCycle' */
      rtY.Phase_B_DutyCycle = rtb_DeadZone_e;
    }

    /* End of Saturate: '<S147>/Saturation' */

    /* Gain: '<S37>/Integral Gain' */
    rtb_DeadZone = 0.005 * Sum3;

    /* DeadZone: '<S83>/DeadZone' */
    if (rtb_DeadZone_m > 1.0) {
      rtb_DeadZone_m--;
    } else if (rtb_DeadZone_m >= 0.0) {
      rtb_DeadZone_m = 0.0;
    } else {
      /* no actions */
    }

    /* End of DeadZone: '<S83>/DeadZone' */

    /* Gain: '<S87>/Integral Gain' */
    Sum3 = 0.0005 * rtb_Sum1_m;

    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S81>/Clamping_zero'
     *  Constant: '<S81>/Constant'
     *  Constant: '<S81>/Constant2'
     *  RelationalOperator: '<S81>/fix for DT propagation issue'
     */
    if (rtb_DeadZone_m > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S81>/Switch2' incorporates:
     *  Constant: '<S81>/Clamping_zero'
     *  Constant: '<S81>/Constant3'
     *  Constant: '<S81>/Constant4'
     *  RelationalOperator: '<S81>/fix for DT propagation issue1'
     */
    if (Sum3 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S81>/Switch' incorporates:
     *  Constant: '<S81>/Clamping_zero'
     *  Constant: '<S81>/Constant1'
     *  Logic: '<S81>/AND3'
     *  RelationalOperator: '<S81>/Equal1'
     *  RelationalOperator: '<S81>/Relational Operator'
     *  Switch: '<S81>/Switch1'
     *  Switch: '<S81>/Switch2'
     */
    if ((rtb_DeadZone_m != 0.0) && (tmp == tmp_0)) {
      rtb_DeadZone_m = 0.0;
    } else {
      rtb_DeadZone_m = Sum3;
    }

    /* End of Switch: '<S81>/Switch' */

    /* DeadZone: '<S133>/DeadZone' */
    if (rtb_DeadZone_e > 1.0) {
      rtb_DeadZone_e--;
    } else if (rtb_DeadZone_e >= 0.0) {
      rtb_DeadZone_e = 0.0;
    } else {
      /* no actions */
    }

    /* End of DeadZone: '<S133>/DeadZone' */

    /* Gain: '<S137>/Integral Gain' */
    Sum3 = 0.0005 * rtDW.Gain;

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S131>/Clamping_zero'
     *  Constant: '<S131>/Constant'
     *  Constant: '<S131>/Constant2'
     *  RelationalOperator: '<S131>/fix for DT propagation issue'
     */
    if (rtb_DeadZone_e > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S131>/Switch2' incorporates:
     *  Constant: '<S131>/Clamping_zero'
     *  Constant: '<S131>/Constant3'
     *  Constant: '<S131>/Constant4'
     *  RelationalOperator: '<S131>/fix for DT propagation issue1'
     */
    if (Sum3 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S131>/Clamping_zero'
     *  Constant: '<S131>/Constant1'
     *  Logic: '<S131>/AND3'
     *  RelationalOperator: '<S131>/Equal1'
     *  RelationalOperator: '<S131>/Relational Operator'
     *  Switch: '<S131>/Switch1'
     *  Switch: '<S131>/Switch2'
     */
    if ((rtb_DeadZone_e != 0.0) && (tmp == tmp_0)) {
      rtb_DeadZone_e = 0.0;
    } else {
      rtb_DeadZone_e = Sum3;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Update for DiscreteIntegrator: '<S40>/Integrator' */
    rtDW.Integrator_DSTATE += rtb_DeadZone;
  }

  /* Update for UnitDelay: '<S1>/Unit Delay3' incorporates:
   *  Inport: '<Root>/I_PhaseA'
   */
  rtDW.UnitDelay3_DSTATE = rtU.I_PhaseA;

  /* Update for UnitDelay: '<S1>/Unit Delay4' incorporates:
   *  Inport: '<Root>/I_PhaseB'
   */
  rtDW.UnitDelay4_DSTATE = rtU.I_PhaseB;

  /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
   *  Inport: '<Root>/I_In'
   */
  rtDW.UnitDelay2_DSTATE = rtU.I_In;

  /* Update for UnitDelay: '<S1>/Unit Delay1' incorporates:
   *  Inport: '<Root>/I_Out'
   */
  rtDW.UnitDelay1_DSTATE = rtU.I_Out;

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Inport: '<Root>/V_Out'
   */
  rtDW.UnitDelay_DSTATE = rtU.V_Out;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for DiscreteIntegrator: '<S90>/Integrator' */
    rtDW.Integrator_DSTATE_g += rtb_DeadZone_m;
    if (rtDW.Integrator_DSTATE_g > 1.0) {
      rtDW.Integrator_DSTATE_g = 1.0;
    } else if (rtDW.Integrator_DSTATE_g < 0.0) {
      rtDW.Integrator_DSTATE_g = 0.0;
    } else {
      /* no actions */
    }

    /* End of Update for DiscreteIntegrator: '<S90>/Integrator' */

    /* Update for DiscreteIntegrator: '<S85>/Filter' */
    rtDW.Filter_DSTATE += 0.0001 * rtb_FilterCoefficient;

    /* Update for DiscreteIntegrator: '<S140>/Integrator' */
    rtDW.Integrator_DSTATE_o += rtb_DeadZone_e;

    /* Update for DiscreteIntegrator: '<S135>/Filter' */
    rtDW.Filter_DSTATE_m += 0.0001 * rtb_FilterCoefficient_e;
  }

  rate_scheduler();
}

/* Model initialize function */
void Controller_initialize(void) { /* (no initialization code required) */ }

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

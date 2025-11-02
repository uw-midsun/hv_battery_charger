/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Controller.c
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
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.0001s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void Controller_step(void)
{
  real_T IREF_AIPHASE_A;
  real_T Sum3;
  real_T Sum6;
  real_T Sum7;
  real_T rtb_IntegralGain_p;
  real_T rtb_Switch;
  real_T rtb_Switch_g;
  int8_T tmp;
  int8_T tmp_0;

  /* Sum: '<S1>/Sum3' incorporates:
   *  UnitDelay: '<S1>/Unit Delay3'
   *  UnitDelay: '<S1>/Unit Delay4'
   */
  Sum3 = rtDW.UnitDelay3_DSTATE - rtDW.UnitDelay4_DSTATE;

  /* Sum: '<S1>/Sum7' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Gain: '<S1>/Gain2'
   *  Sum: '<S1>/Sum1'
   *  Sum: '<S1>/Sum2'
   *  UnitDelay: '<S1>/Unit Delay3'
   *  UnitDelay: '<S1>/Unit Delay4'
   *  UnitDelay: '<S1>/Unit Delay5'
   *  UnitDelay: '<S1>/Unit Delay6'
   */
  Sum7 = (rtDW.UnitDelay3_DSTATE + rtDW.UnitDelay4_DSTATE) * 0.5 -
    (rtDW.UnitDelay5_DSTATE + rtDW.UnitDelay6_DSTATE) * 0.5;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Sum: '<S53>/Sum' incorporates:
     *  DiscreteIntegrator: '<S44>/Integrator'
     *  Gain: '<S49>/Proportional Gain'
     */
    rtDW.Sum = 0.5 * Sum3 + rtDW.Integrator_DSTATE;

    /* Sum: '<S149>/Sum' incorporates:
     *  DiscreteIntegrator: '<S140>/Integrator'
     *  Gain: '<S145>/Proportional Gain'
     */
    rtDW.Sum_a = 0.5 * Sum7 + rtDW.Integrator_DSTATE_e;
  }

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/User_ModeSelect'
   */
  switch ((int32_T)rtU.User_ModeSelect) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Sum: '<S9>/Sum1' incorporates:
     *  Inport: '<Root>/User_TargetVoltage'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    rtDW.Sum1_m = rtU.User_TargetVoltage - rtDW.UnitDelay_DSTATE;

    /* Sum: '<S398>/Sum' incorporates:
     *  DiscreteIntegrator: '<S389>/Integrator'
     *  Gain: '<S394>/Proportional Gain'
     */
    rtDW.Gain = 2.5 * rtDW.Sum1_m + rtDW.Integrator_DSTATE_n;

    /* Update for DiscreteIntegrator: '<S389>/Integrator' incorporates:
     *  Gain: '<S386>/Integral Gain'
     */
    rtDW.Integrator_DSTATE_n += 1.0E-5 * rtDW.Sum1_m;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Sum: '<S10>/Sum1' incorporates:
     *  Inport: '<Root>/User_TargetCurrent'
     *  UnitDelay: '<S1>/Unit Delay1'
     */
    rtDW.Sum1_m = rtU.User_TargetCurrent - rtDW.UnitDelay1_DSTATE;

    /* Sum: '<S447>/Sum' incorporates:
     *  DiscreteIntegrator: '<S438>/Integrator'
     *  Gain: '<S443>/Proportional Gain'
     */
    rtDW.Gain = 2000.0 * rtDW.Sum1_m + rtDW.Integrator_DSTATE_i;

    /* Update for DiscreteIntegrator: '<S438>/Integrator' incorporates:
     *  Gain: '<S435>/Integral Gain'
     */
    rtDW.Integrator_DSTATE_i += 0.1 * rtDW.Sum1_m;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* Sum: '<S11>/Sum1' incorporates:
     *  Inport: '<Root>/User_TargetCurrent'
     *  UnitDelay: '<S1>/Unit Delay2'
     */
    rtDW.Sum1_m = rtU.User_TargetCurrent - rtDW.UnitDelay2_DSTATE;

    /* Sum: '<S498>/Sum' incorporates:
     *  DiscreteIntegrator: '<S489>/Integrator'
     */
    rtDW.Gain = rtDW.Sum1_m + rtDW.Integrator_DSTATE_ou;

    /* DeadZone: '<S482>/DeadZone' incorporates:
     *  Saturate: '<S496>/Saturation'
     */
    if (rtDW.Gain > 160.0) {
      rtDW.DeadZone = rtDW.Gain - 160.0;
      rtDW.Gain = 160.0;

      /* Switch: '<S480>/Switch1' incorporates:
       *  Constant: '<S480>/Constant'
       */
      tmp = 1;
    } else {
      if (rtDW.Gain >= 0.0) {
        rtDW.DeadZone = 0.0;
      } else {
        rtDW.DeadZone = rtDW.Gain;
      }

      if (rtDW.Gain < 0.0) {
        rtDW.Gain = 0.0;
      }

      /* Switch: '<S480>/Switch1' incorporates:
       *  Constant: '<S480>/Constant2'
       */
      tmp = -1;
    }

    /* End of DeadZone: '<S482>/DeadZone' */

    /* Switch: '<S480>/Switch2' incorporates:
     *  Constant: '<S480>/Clamping_zero'
     *  Constant: '<S480>/Constant3'
     *  Constant: '<S480>/Constant4'
     *  RelationalOperator: '<S480>/fix for DT propagation issue1'
     */
    if (rtDW.Sum1_m > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S480>/Switch' incorporates:
     *  Constant: '<S480>/Clamping_zero'
     *  Constant: '<S480>/Constant1'
     *  Logic: '<S480>/AND3'
     *  RelationalOperator: '<S480>/Equal1'
     *  RelationalOperator: '<S480>/Relational Operator'
     *  Switch: '<S480>/Switch1'
     *  Switch: '<S480>/Switch2'
     */
    if ((rtDW.DeadZone != 0.0) && (tmp == tmp_0)) {
      rtDW.Sum1_m = 0.0;
    }

    /* Update for DiscreteIntegrator: '<S489>/Integrator' incorporates:
     *  Switch: '<S480>/Switch'
     */
    rtDW.Integrator_DSTATE_ou += rtDW.Sum1_m;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* SignalConversion generated from: '<S12>/I_RefTotal' incorporates:
     *  Constant: '<S12>/Constant'
     */
    rtDW.Gain = 0.0;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Gain: '<S1>/Gain' */
  rtDW.Gain *= 0.25;

  /* Sum: '<S1>/IREF_A - IPHASE_A' incorporates:
   *  Sum: '<S1>/IREF_A = 0.25IREF_TOTAL - PI1 - PI3'
   *  UnitDelay: '<S1>/Unit Delay3'
   */
  IREF_AIPHASE_A = ((rtDW.Gain - rtDW.Sum) - rtDW.Sum_a) -
    rtDW.UnitDelay3_DSTATE;

  /* Sum: '<S1>/IREF_B - IPHASE_B' incorporates:
   *  Sum: '<S1>/IREF_B = 0.25IREF_TOTAL + PI1 - PI3'
   *  UnitDelay: '<S1>/Unit Delay4'
   */
  rtDW.Sum1_m = ((rtDW.Sum - rtDW.Sum_a) + rtDW.Gain) - rtDW.UnitDelay4_DSTATE;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S193>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S185>/Filter'
     *  Gain: '<S184>/Derivative Gain'
     *  Sum: '<S185>/SumD'
     */
    rtDW.FilterCoefficient = (0.0003 * IREF_AIPHASE_A - rtDW.Filter_DSTATE) *
      10.0;

    /* Sum: '<S199>/Sum' incorporates:
     *  DiscreteIntegrator: '<S190>/Integrator'
     *  Gain: '<S195>/Proportional Gain'
     */
    rtDW.DeadZone_h = (0.0001 * IREF_AIPHASE_A + rtDW.Integrator_DSTATE_g) +
      rtDW.FilterCoefficient;

    /* Saturate: '<S197>/Saturation' */
    if (rtDW.DeadZone_h > 1.0) {
      /* Outport: '<Root>/Phase_A_DutyCycle' */
      rtY.Phase_A_DutyCycle = 1.0;
    } else if (rtDW.DeadZone_h < 0.0) {
      /* Outport: '<Root>/Phase_A_DutyCycle' */
      rtY.Phase_A_DutyCycle = 0.0;
    } else {
      /* Outport: '<Root>/Phase_A_DutyCycle' */
      rtY.Phase_A_DutyCycle = rtDW.DeadZone_h;
    }

    /* End of Saturate: '<S197>/Saturation' */
  }

  /* Sum: '<S1>/Sum6' incorporates:
   *  UnitDelay: '<S1>/Unit Delay5'
   *  UnitDelay: '<S1>/Unit Delay6'
   */
  Sum6 = rtDW.UnitDelay5_DSTATE - rtDW.UnitDelay6_DSTATE;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S243>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S235>/Filter'
     *  Gain: '<S234>/Derivative Gain'
     *  Sum: '<S235>/SumD'
     */
    rtDW.FilterCoefficient_i = (0.0003 * rtDW.Sum1_m - rtDW.Filter_DSTATE_m) *
      10.0;

    /* Sum: '<S249>/Sum' incorporates:
     *  DiscreteIntegrator: '<S240>/Integrator'
     *  Gain: '<S245>/Proportional Gain'
     */
    rtDW.DeadZone_l = (0.0001 * rtDW.Sum1_m + rtDW.Integrator_DSTATE_o) +
      rtDW.FilterCoefficient_i;

    /* Saturate: '<S247>/Saturation' */
    if (rtDW.DeadZone_l > 1.0) {
      /* Outport: '<Root>/Phase_B_DutyCycle' */
      rtY.Phase_B_DutyCycle = 1.0;
    } else if (rtDW.DeadZone_l < 0.0) {
      /* Outport: '<Root>/Phase_B_DutyCycle' */
      rtY.Phase_B_DutyCycle = 0.0;
    } else {
      /* Outport: '<Root>/Phase_B_DutyCycle' */
      rtY.Phase_B_DutyCycle = rtDW.DeadZone_l;
    }

    /* End of Saturate: '<S247>/Saturation' */

    /* Sum: '<S101>/Sum' incorporates:
     *  DiscreteIntegrator: '<S92>/Integrator'
     *  Gain: '<S97>/Proportional Gain'
     */
    rtDW.Sum_h = 0.5 * Sum6 + rtDW.Integrator_DSTATE_f;
  }

  /* Sum: '<S1>/IREF_C - IPHASE_C' incorporates:
   *  Sum: '<S1>/IREF_C = 0.25IREF_TOTAL - PI2 + PI3'
   *  UnitDelay: '<S1>/Unit Delay5'
   */
  rtDW.DeadZone = ((rtDW.Sum_a - rtDW.Sum_h) + rtDW.Gain) -
    rtDW.UnitDelay5_DSTATE;

  /* Sum: '<S1>/IREF_D - IPHASE_D' incorporates:
   *  Sum: '<S1>/IREF_D = 0.25IREF_TOTAL + PI2+ PI3'
   *  UnitDelay: '<S1>/Unit Delay6'
   */
  rtDW.Gain = ((rtDW.Sum_h + rtDW.Sum_a) + rtDW.Gain) - rtDW.UnitDelay6_DSTATE;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S293>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S285>/Filter'
     *  Gain: '<S284>/Derivative Gain'
     *  Sum: '<S285>/SumD'
     */
    rtDW.FilterCoefficient_m = (0.0003 * rtDW.DeadZone - rtDW.Filter_DSTATE_a) *
      10.0;

    /* Sum: '<S299>/Sum' incorporates:
     *  DiscreteIntegrator: '<S290>/Integrator'
     *  Gain: '<S295>/Proportional Gain'
     */
    rtDW.DeadZone_n = (0.0001 * rtDW.DeadZone + rtDW.Integrator_DSTATE_o2) +
      rtDW.FilterCoefficient_m;

    /* Saturate: '<S297>/Saturation' */
    if (rtDW.DeadZone_n > 1.0) {
      /* Outport: '<Root>/Phase_C_DutyCycle' */
      rtY.Phase_C_DutyCycle = 1.0;
    } else if (rtDW.DeadZone_n < 0.0) {
      /* Outport: '<Root>/Phase_C_DutyCycle' */
      rtY.Phase_C_DutyCycle = 0.0;
    } else {
      /* Outport: '<Root>/Phase_C_DutyCycle' */
      rtY.Phase_C_DutyCycle = rtDW.DeadZone_n;
    }

    /* End of Saturate: '<S297>/Saturation' */

    /* Gain: '<S343>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S335>/Filter'
     *  Gain: '<S334>/Derivative Gain'
     *  Sum: '<S335>/SumD'
     */
    rtDW.FilterCoefficient_l = (0.0003 * rtDW.Gain - rtDW.Filter_DSTATE_d) *
      10.0;

    /* Sum: '<S349>/Sum' incorporates:
     *  DiscreteIntegrator: '<S340>/Integrator'
     *  Gain: '<S345>/Proportional Gain'
     */
    rtDW.DeadZone_p = (0.0001 * rtDW.Gain + rtDW.Integrator_DSTATE_l) +
      rtDW.FilterCoefficient_l;

    /* Saturate: '<S347>/Saturation' */
    if (rtDW.DeadZone_p > 1.0) {
      /* Outport: '<Root>/Phase_D_DutyCycle' */
      rtY.Phase_D_DutyCycle = 1.0;
    } else if (rtDW.DeadZone_p < 0.0) {
      /* Outport: '<Root>/Phase_D_DutyCycle' */
      rtY.Phase_D_DutyCycle = 0.0;
    } else {
      /* Outport: '<Root>/Phase_D_DutyCycle' */
      rtY.Phase_D_DutyCycle = rtDW.DeadZone_p;
    }

    /* End of Saturate: '<S347>/Saturation' */

    /* Gain: '<S41>/Integral Gain' */
    rtDW.IntegralGain = 0.005 * Sum3;

    /* Gain: '<S89>/Integral Gain' */
    rtb_IntegralGain_p = 0.005 * Sum6;

    /* Gain: '<S137>/Integral Gain' */
    rtDW.IntegralGain_j = 0.005 * Sum7;

    /* DeadZone: '<S183>/DeadZone' */
    if (rtDW.DeadZone_h > 1.0) {
      rtDW.DeadZone_h--;
    } else if (rtDW.DeadZone_h >= 0.0) {
      rtDW.DeadZone_h = 0.0;
    } else {
      /* no actions */
    }

    /* End of DeadZone: '<S183>/DeadZone' */

    /* Gain: '<S187>/Integral Gain' */
    Sum3 = 0.0005 * IREF_AIPHASE_A;

    /* Switch: '<S181>/Switch1' incorporates:
     *  Constant: '<S181>/Clamping_zero'
     *  Constant: '<S181>/Constant'
     *  Constant: '<S181>/Constant2'
     *  RelationalOperator: '<S181>/fix for DT propagation issue'
     */
    if (rtDW.DeadZone_h > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S181>/Switch2' incorporates:
     *  Constant: '<S181>/Clamping_zero'
     *  Constant: '<S181>/Constant3'
     *  Constant: '<S181>/Constant4'
     *  RelationalOperator: '<S181>/fix for DT propagation issue1'
     */
    if (Sum3 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S181>/Switch' incorporates:
     *  Constant: '<S181>/Clamping_zero'
     *  Constant: '<S181>/Constant1'
     *  Logic: '<S181>/AND3'
     *  RelationalOperator: '<S181>/Equal1'
     *  RelationalOperator: '<S181>/Relational Operator'
     *  Switch: '<S181>/Switch1'
     *  Switch: '<S181>/Switch2'
     */
    if ((rtDW.DeadZone_h != 0.0) && (tmp == tmp_0)) {
      rtb_Switch = 0.0;
    } else {
      rtb_Switch = Sum3;
    }

    /* End of Switch: '<S181>/Switch' */

    /* DeadZone: '<S233>/DeadZone' */
    if (rtDW.DeadZone_l > 1.0) {
      rtDW.DeadZone_l--;
    } else if (rtDW.DeadZone_l >= 0.0) {
      rtDW.DeadZone_l = 0.0;
    } else {
      /* no actions */
    }

    /* End of DeadZone: '<S233>/DeadZone' */

    /* Gain: '<S237>/Integral Gain' */
    Sum3 = 0.0005 * rtDW.Sum1_m;

    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S231>/Clamping_zero'
     *  Constant: '<S231>/Constant'
     *  Constant: '<S231>/Constant2'
     *  RelationalOperator: '<S231>/fix for DT propagation issue'
     */
    if (rtDW.DeadZone_l > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S231>/Switch2' incorporates:
     *  Constant: '<S231>/Clamping_zero'
     *  Constant: '<S231>/Constant3'
     *  Constant: '<S231>/Constant4'
     *  RelationalOperator: '<S231>/fix for DT propagation issue1'
     */
    if (Sum3 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S231>/Switch' incorporates:
     *  Constant: '<S231>/Clamping_zero'
     *  Constant: '<S231>/Constant1'
     *  Logic: '<S231>/AND3'
     *  RelationalOperator: '<S231>/Equal1'
     *  RelationalOperator: '<S231>/Relational Operator'
     *  Switch: '<S231>/Switch1'
     *  Switch: '<S231>/Switch2'
     */
    if ((rtDW.DeadZone_l != 0.0) && (tmp == tmp_0)) {
      rtb_Switch_g = 0.0;
    } else {
      rtb_Switch_g = Sum3;
    }

    /* End of Switch: '<S231>/Switch' */

    /* DeadZone: '<S283>/DeadZone' */
    if (rtDW.DeadZone_n > 1.0) {
      rtDW.DeadZone_n--;
    } else if (rtDW.DeadZone_n >= 0.0) {
      rtDW.DeadZone_n = 0.0;
    } else {
      /* no actions */
    }

    /* End of DeadZone: '<S283>/DeadZone' */

    /* Gain: '<S287>/Integral Gain' */
    Sum3 = 0.0005 * rtDW.DeadZone;

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Clamping_zero'
     *  Constant: '<S281>/Constant'
     *  Constant: '<S281>/Constant2'
     *  RelationalOperator: '<S281>/fix for DT propagation issue'
     */
    if (rtDW.DeadZone_n > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S281>/Switch2' incorporates:
     *  Constant: '<S281>/Clamping_zero'
     *  Constant: '<S281>/Constant3'
     *  Constant: '<S281>/Constant4'
     *  RelationalOperator: '<S281>/fix for DT propagation issue1'
     */
    if (Sum3 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S281>/Clamping_zero'
     *  Constant: '<S281>/Constant1'
     *  Logic: '<S281>/AND3'
     *  RelationalOperator: '<S281>/Equal1'
     *  RelationalOperator: '<S281>/Relational Operator'
     *  Switch: '<S281>/Switch1'
     *  Switch: '<S281>/Switch2'
     */
    if ((rtDW.DeadZone_n != 0.0) && (tmp == tmp_0)) {
      rtDW.DeadZone_n = 0.0;
    } else {
      rtDW.DeadZone_n = Sum3;
    }

    /* End of Switch: '<S281>/Switch' */

    /* DeadZone: '<S333>/DeadZone' */
    if (rtDW.DeadZone_p > 1.0) {
      rtDW.DeadZone_p--;
    } else if (rtDW.DeadZone_p >= 0.0) {
      rtDW.DeadZone_p = 0.0;
    } else {
      /* no actions */
    }

    /* End of DeadZone: '<S333>/DeadZone' */

    /* Gain: '<S337>/Integral Gain' */
    Sum3 = 0.0005 * rtDW.Gain;

    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S331>/Clamping_zero'
     *  Constant: '<S331>/Constant'
     *  Constant: '<S331>/Constant2'
     *  RelationalOperator: '<S331>/fix for DT propagation issue'
     */
    if (rtDW.DeadZone_p > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S331>/Switch2' incorporates:
     *  Constant: '<S331>/Clamping_zero'
     *  Constant: '<S331>/Constant3'
     *  Constant: '<S331>/Constant4'
     *  RelationalOperator: '<S331>/fix for DT propagation issue1'
     */
    if (Sum3 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S331>/Switch' incorporates:
     *  Constant: '<S331>/Clamping_zero'
     *  Constant: '<S331>/Constant1'
     *  Logic: '<S331>/AND3'
     *  RelationalOperator: '<S331>/Equal1'
     *  RelationalOperator: '<S331>/Relational Operator'
     *  Switch: '<S331>/Switch1'
     *  Switch: '<S331>/Switch2'
     */
    if ((rtDW.DeadZone_p != 0.0) && (tmp == tmp_0)) {
      rtDW.DeadZone_p = 0.0;
    } else {
      rtDW.DeadZone_p = Sum3;
    }

    /* End of Switch: '<S331>/Switch' */

    /* Update for DiscreteIntegrator: '<S44>/Integrator' */
    rtDW.Integrator_DSTATE += rtDW.IntegralGain;
  }

  /* Update for UnitDelay: '<S1>/Unit Delay3' incorporates:
   *  Inport: '<Root>/I_PhaseA'
   */
  rtDW.UnitDelay3_DSTATE = rtU.I_PhaseA;

  /* Update for UnitDelay: '<S1>/Unit Delay4' incorporates:
   *  Inport: '<Root>/I_PhaseB'
   */
  rtDW.UnitDelay4_DSTATE = rtU.I_PhaseB;

  /* Update for UnitDelay: '<S1>/Unit Delay5' incorporates:
   *  Inport: '<Root>/I_PhaseC'
   */
  rtDW.UnitDelay5_DSTATE = rtU.I_PhaseC;

  /* Update for UnitDelay: '<S1>/Unit Delay6' incorporates:
   *  Inport: '<Root>/I_PhaseD'
   */
  rtDW.UnitDelay6_DSTATE = rtU.I_PhaseD;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for DiscreteIntegrator: '<S140>/Integrator' */
    rtDW.Integrator_DSTATE_e += rtDW.IntegralGain_j;

    /* Update for DiscreteIntegrator: '<S190>/Integrator' */
    rtDW.Integrator_DSTATE_g += rtb_Switch;
    if (rtDW.Integrator_DSTATE_g > 1.0) {
      rtDW.Integrator_DSTATE_g = 1.0;
    } else if (rtDW.Integrator_DSTATE_g < 0.0) {
      rtDW.Integrator_DSTATE_g = 0.0;
    } else {
      /* no actions */
    }

    /* End of Update for DiscreteIntegrator: '<S190>/Integrator' */

    /* Update for DiscreteIntegrator: '<S185>/Filter' */
    rtDW.Filter_DSTATE += 0.0001 * rtDW.FilterCoefficient;

    /* Update for DiscreteIntegrator: '<S240>/Integrator' */
    rtDW.Integrator_DSTATE_o += rtb_Switch_g;

    /* Update for DiscreteIntegrator: '<S235>/Filter' */
    rtDW.Filter_DSTATE_m += 0.0001 * rtDW.FilterCoefficient_i;

    /* Update for DiscreteIntegrator: '<S92>/Integrator' */
    rtDW.Integrator_DSTATE_f += rtb_IntegralGain_p;

    /* Update for DiscreteIntegrator: '<S290>/Integrator' */
    rtDW.Integrator_DSTATE_o2 += rtDW.DeadZone_n;
    if (rtDW.Integrator_DSTATE_o2 > 1.0) {
      rtDW.Integrator_DSTATE_o2 = 1.0;
    } else if (rtDW.Integrator_DSTATE_o2 < 0.0) {
      rtDW.Integrator_DSTATE_o2 = 0.0;
    } else {
      /* no actions */
    }

    /* End of Update for DiscreteIntegrator: '<S290>/Integrator' */

    /* Update for DiscreteIntegrator: '<S285>/Filter' */
    rtDW.Filter_DSTATE_a += 0.0001 * rtDW.FilterCoefficient_m;

    /* Update for DiscreteIntegrator: '<S340>/Integrator' */
    rtDW.Integrator_DSTATE_l += rtDW.DeadZone_p;

    /* Update for DiscreteIntegrator: '<S335>/Filter' */
    rtDW.Filter_DSTATE_d += 0.0001 * rtDW.FilterCoefficient_l;
  }

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
  rate_scheduler();
}

/* Model initialize function */
void Controller_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

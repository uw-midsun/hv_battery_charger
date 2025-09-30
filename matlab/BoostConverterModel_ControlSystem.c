/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BoostConverterModel_ControlSystem.c
 *
 * Code generated for Simulink model 'BoostConverterModel_ControlSystem'.
 *
 * Model version                  : 1.418
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Sep 30 18:00:25 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BoostConverterModel_ControlSystem.h"
#include "rtwtypes.h"
#include <math.h>
#include <stdlib.h>
#ifndef CodeFormat
#define CodeFormat                     S-Function
#else
#undef CodeFormat
#define CodeFormat                     S-Function
#endif

#ifndef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#endif

#ifndef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#else
#undef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#endif

#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        NULL
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES
#ifndef _RTW_COMMON_DEFINES_
#define _RTW_COMMON_DEFINES_
#endif
#endif

/* Invariant block signals (default storage) */
const ConstB_BoostConverterModel_Co_T BoostConverterModel_Cont_ConstB = {
  1.0,                                 /* '<S317>/Data Type Conversion1' */
  1.0,                                 /* '<S331>/Data Type Conversion1' */
  1,                                   /* '<S319>/Compare' */
  1                                    /* '<S333>/Compare' */
};

/* Constant parameters (default storage) */
const ConstP_BoostConverterModel_Co_T BoostConverterModel_Cont_ConstP = {
  /* Expression: S.B
   * Referenced by: '<S352>/State-Space'
   */
  { 6665.8889129779236, 6662.8907620425516, 0.013328779675020476,
    -0.0066658889129779242, -0.0066628907620425518, -6665.8889129779236,
    -6662.8907620425516, 0.0, 0.0 },

  /* Expression: S.C
   * Referenced by: '<S352>/State-Space'
   */
  { -9.9988333694668855E-7, -9.994336143063827E-7, 9.9988333694668855E-7,
    9.994336143063827E-7, 9.99933331113536E-7, 0.0, -9.9988333694668855E-13,
    -9.994336143063827E-13, 1.9998666622270712E-8, -9.994336143063827E-13,
    -9.9988333694668855E-13, -1.9993169512530711E-12 },

  /* Expression: S.D
   * Referenced by: '<S352>/State-Space'
   */
  { -50.000832902811339, -0.0033312788170804216, 50.000832902811339,
    0.0033312788170804216, 0.0033329444564889617, 0.0, 0.99994999916709715,
    -3.3312788170804216E-9, 6.66588891296682E-5, -3.3312788170804216E-9,
    0.99994999916709715, 0.99994999583581834, -0.003331278817080422,
    -499.75345471802194, 0.003331278817080422, 499.75345471802194,
    0.0033314453810212754, 0.0, -3.331278817080422E-9, 0.999500246545282,
    6.6628907620314476E-5, 0.999500246545282, -3.331278817080422E-9,
    0.99950024321400321, 0.99994999583581834, 0.99950024321400321,
    5.0004164181628421E-5, 0.000499756785996839, 6.6643898375102373E-9, 1.0,
    9.9994999583581838E-7, 9.9950024321400314E-7, 1.332877967497812E-10,
    9.9950024321400314E-7, 9.9994999583581838E-7, 1.9994502390498217E-6,
    -0.99994999916709715, 3.331278817080422E-9, -5.0000832902811339E-5,
    -3.331278817080422E-9, -3.3329444564889619E-9, 0.0, -9.9994999916709731E-7,
    3.331278817080422E-15, -6.6658889129567468E-11, 3.331278817080422E-15,
    -9.9994999916709731E-7, -9.9994999583581838E-7, 3.3312788170804216E-9,
    -0.999500246545282, -3.3312788170804216E-9, -0.00049975345471802183,
    -3.3314453810212759E-9, 0.0, 3.3312788170804212E-15, -9.9950024654528187E-7,
    -6.6628907620213732E-11, -9.9950024654528187E-7, 3.3312788170804212E-15,
    -9.9950024321400314E-7, 50.000832902811339, 0.0033312788170804216,
    -50.000832902811339, -0.0033312788170804216, -0.0033329444564889617, 0.0,
    5.0000832902811353E-5, 3.3312788170804216E-9, -6.66588891296682E-5,
    3.3312788170804216E-9, -0.99994999916709715, 5.0004164181628434E-5,
    0.003331278817080422, 499.75345471802194, -0.003331278817080422,
    -499.75345471802194, -0.0033314453810212754, 0.0, 3.331278817080422E-9,
    0.00049975345471802194, -6.6628907620314476E-5, -0.999500246545282,
    3.331278817080422E-9, 0.00049975678599683908, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 }
};

/* Block signals (default storage) */
B_BoostConverterModel_Control_T BoostConverterModel_ControlSy_B;

/* Block states (default storage) */
DW_BoostConverterModel_Contro_T BoostConverterModel_ControlS_DW;

/* Real-time model */
static RT_MODEL_BoostConverterModel__T BoostConverterModel_ControlS_M_;
RT_MODEL_BoostConverterModel__T *const BoostConverterModel_ControlS_M =
  &BoostConverterModel_ControlS_M_;
static void BoostConverterM_MATLABFunction1(real_T rtu_g, real_T rtu_I, real_T
  *rty_Idc);
static void BoostConverterM_MATLABFunction2(real_T rtu_g, real_T rtu_Vdc, real_T
  *rty_V);
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
  (BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1])++;
  if ((BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [1.0E-5s, 0.0s] */
    BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S317>/MATLAB Function1'
 *    '<S331>/MATLAB Function1'
 */
static void BoostConverterM_MATLABFunction1(real_T rtu_g, real_T rtu_I, real_T
  *rty_Idc)
{
  *rty_Idc = rtu_g * rtu_I;
}

/*
 * Output and update for atomic system:
 *    '<S317>/MATLAB Function2'
 *    '<S331>/MATLAB Function2'
 */
static void BoostConverterM_MATLABFunction2(real_T rtu_g, real_T rtu_Vdc, real_T
  *rty_V)
{
  *rty_V = -rtu_g * rtu_Vdc;
}

/* Model step function */
void BoostConverterModel_ControlSystem_step(void)
{
  real_T Sum3;
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_e;
  real_T rtb_IntegralGain_b;
  real_T rtb_Integrator_e;
  real_T rtb_Saturation_f;
  real_T rtb_Sum1_m;
  int8_T tmp;
  int8_T tmp_0;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_fixforDTpropagationissue;

  /* UnitDelay: '<S1>/Unit Delay3' */
  BoostConverterModel_ControlSy_B.UnitDelay3 =
    BoostConverterModel_ControlS_DW.UnitDelay3_DSTATE;

  /* UnitDelay: '<S1>/Unit Delay4' */
  BoostConverterModel_ControlSy_B.Idc =
    BoostConverterModel_ControlS_DW.UnitDelay4_DSTATE;

  /* Sum: '<S1>/Sum3' */
  Sum3 = BoostConverterModel_ControlSy_B.UnitDelay3 -
    BoostConverterModel_ControlSy_B.Idc;
  if (BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S38>/Integral Gain' */
    BoostConverterModel_ControlSy_B.IntegralGain = 0.0005 * Sum3;

    /* Sum: '<S50>/Sum' incorporates:
     *  DiscreteIntegrator: '<S41>/Integrator'
     *  Gain: '<S46>/Proportional Gain'
     */
    BoostConverterModel_ControlSy_B.Sum = 0.5 * Sum3 +
      BoostConverterModel_ControlS_DW.Integrator_DSTATE;
  }

  /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem' incorporates:
   *  ActionPort: '<S6>/Action Port'
   */
  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Constant: '<Root>/User_TargetVoltage'
   *  DiscreteIntegrator: '<S190>/Integrator'
   *  Gain: '<S187>/Integral Gain'
   *  Gain: '<S195>/Proportional Gain'
   *  Sum: '<S199>/Sum'
   *  Sum: '<S6>/Sum1'
   *  UnitDelay: '<S1>/Unit Delay'
   * */
  rtb_Sum1_m = 150.0 - BoostConverterModel_ControlS_DW.UnitDelay_DSTATE;
  Sum3 = 2.5 * rtb_Sum1_m + BoostConverterModel_ControlS_DW.Integrator_DSTATE_n;
  BoostConverterModel_ControlS_DW.Integrator_DSTATE_n += 5.0E-5 * rtb_Sum1_m;

  /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem' */

  /* Gain: '<S1>/Gain' */
  Sum3 *= 0.5;

  /* Sum: '<S1>/Sum4' incorporates:
   *  Sum: '<S1>/Sum1'
   */
  BoostConverterModel_ControlSy_B.UnitDelay3 = (Sum3 -
    BoostConverterModel_ControlSy_B.Sum) -
    BoostConverterModel_ControlSy_B.UnitDelay3;

  /* Sum: '<S1>/Sum5' incorporates:
   *  Sum: '<S1>/Sum2'
   */
  BoostConverterModel_ControlSy_B.Idc = (BoostConverterModel_ControlSy_B.Sum +
    Sum3) - BoostConverterModel_ControlSy_B.Idc;
  if (BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S94>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S86>/Filter'
     *  Gain: '<S85>/Derivative Gain'
     *  Sum: '<S86>/SumD'
     */
    rtb_FilterCoefficient = (0.0003 * BoostConverterModel_ControlSy_B.UnitDelay3
      - BoostConverterModel_ControlS_DW.Filter_DSTATE) * 10.0;

    /* Sum: '<S100>/Sum' incorporates:
     *  DiscreteIntegrator: '<S91>/Integrator'
     *  Gain: '<S96>/Proportional Gain'
     */
    Sum3 = (0.0001 * BoostConverterModel_ControlSy_B.UnitDelay3 +
            BoostConverterModel_ControlS_DW.Integrator_DSTATE_g) +
      rtb_FilterCoefficient;

    /* DeadZone: '<S84>/DeadZone' */
    if (Sum3 > 1.0) {
      rtb_Integrator_e = Sum3 - 1.0;
    } else if (Sum3 >= 0.0) {
      rtb_Integrator_e = 0.0;
    } else {
      rtb_Integrator_e = Sum3;
    }

    /* End of DeadZone: '<S84>/DeadZone' */

    /* RelationalOperator: '<S82>/Relational Operator' incorporates:
     *  Constant: '<S82>/Clamping_zero'
     */
    rtb_RelationalOperator = (rtb_Integrator_e != 0.0);

    /* RelationalOperator: '<S82>/fix for DT propagation issue' incorporates:
     *  Constant: '<S82>/Clamping_zero'
     */
    rtb_fixforDTpropagationissue = (rtb_Integrator_e > 0.0);

    /* Gain: '<S88>/Integral Gain' */
    rtb_Integrator_e = 5.0E-5 * BoostConverterModel_ControlSy_B.UnitDelay3;

    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S82>/Constant'
     *  Constant: '<S82>/Constant2'
     */
    if (rtb_fixforDTpropagationissue) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S82>/Switch2' incorporates:
     *  Constant: '<S82>/Clamping_zero'
     *  Constant: '<S82>/Constant3'
     *  Constant: '<S82>/Constant4'
     *  RelationalOperator: '<S82>/fix for DT propagation issue1'
     */
    if (rtb_Integrator_e > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S82>/Constant1'
     *  Logic: '<S82>/AND3'
     *  RelationalOperator: '<S82>/Equal1'
     *  Switch: '<S82>/Switch1'
     *  Switch: '<S82>/Switch2'
     */
    if (rtb_RelationalOperator && (tmp == tmp_0)) {
      rtb_Integrator_e = 0.0;
    }

    /* End of Switch: '<S82>/Switch' */

    /* Saturate: '<S98>/Saturation' */
    if (Sum3 > 1.0) {
      Sum3 = 1.0;
    } else if (Sum3 < 0.0) {
      Sum3 = 0.0;
    }

    /* End of Saturate: '<S98>/Saturation' */

    /* Gain: '<S144>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S136>/Filter'
     *  Gain: '<S135>/Derivative Gain'
     *  Sum: '<S136>/SumD'
     */
    rtb_FilterCoefficient_e = (0.0003 * BoostConverterModel_ControlSy_B.Idc -
      BoostConverterModel_ControlS_DW.Filter_DSTATE_m) * 10.0;

    /* Sum: '<S150>/Sum' incorporates:
     *  DiscreteIntegrator: '<S141>/Integrator'
     *  Gain: '<S146>/Proportional Gain'
     */
    rtb_Saturation_f = (0.0001 * BoostConverterModel_ControlSy_B.Idc +
                        BoostConverterModel_ControlS_DW.Integrator_DSTATE_o) +
      rtb_FilterCoefficient_e;

    /* DeadZone: '<S134>/DeadZone' */
    if (rtb_Saturation_f > 1.0) {
      rtb_IntegralGain_b = rtb_Saturation_f - 1.0;
    } else if (rtb_Saturation_f >= 0.0) {
      rtb_IntegralGain_b = 0.0;
    } else {
      rtb_IntegralGain_b = rtb_Saturation_f;
    }

    /* End of DeadZone: '<S134>/DeadZone' */

    /* RelationalOperator: '<S132>/Relational Operator' incorporates:
     *  Constant: '<S132>/Clamping_zero'
     */
    rtb_RelationalOperator = (rtb_IntegralGain_b != 0.0);

    /* RelationalOperator: '<S132>/fix for DT propagation issue' incorporates:
     *  Constant: '<S132>/Clamping_zero'
     */
    rtb_fixforDTpropagationissue = (rtb_IntegralGain_b > 0.0);

    /* Gain: '<S138>/Integral Gain' */
    rtb_IntegralGain_b = 5.0E-5 * BoostConverterModel_ControlSy_B.Idc;

    /* Switch: '<S132>/Switch1' incorporates:
     *  Constant: '<S132>/Constant'
     *  Constant: '<S132>/Constant2'
     */
    if (rtb_fixforDTpropagationissue) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    /* Switch: '<S132>/Switch2' incorporates:
     *  Constant: '<S132>/Clamping_zero'
     *  Constant: '<S132>/Constant3'
     *  Constant: '<S132>/Constant4'
     *  RelationalOperator: '<S132>/fix for DT propagation issue1'
     */
    if (rtb_IntegralGain_b > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    /* Switch: '<S132>/Switch' incorporates:
     *  Constant: '<S132>/Constant1'
     *  Logic: '<S132>/AND3'
     *  RelationalOperator: '<S132>/Equal1'
     *  Switch: '<S132>/Switch1'
     *  Switch: '<S132>/Switch2'
     */
    if (rtb_RelationalOperator && (tmp == tmp_0)) {
      rtb_IntegralGain_b = 0.0;
    }

    /* End of Switch: '<S132>/Switch' */

    /* Saturate: '<S148>/Saturation' */
    if (rtb_Saturation_f > 1.0) {
      rtb_Saturation_f = 1.0;
    } else if (rtb_Saturation_f < 0.0) {
      rtb_Saturation_f = 0.0;
    }

    /* End of Saturate: '<S148>/Saturation' */

    /* Product: '<S317>/Product1' incorporates:
     *  Saturate: '<S2>/Saturation'
     */
    BoostConverterModel_ControlSy_B.Product1 = Sum3 *
      BoostConverterModel_Cont_ConstB.DataTypeConversion1;
  }

  /* MATLAB Function: '<S317>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S317>/Unit Delay2'
   */
  BoostConverterM_MATLABFunction2(BoostConverterModel_ControlSy_B.Product1,
    BoostConverterModel_ControlS_DW.UnitDelay2_DSTATE_c,
    &BoostConverterModel_ControlSy_B.V_l);
  if (BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1] == 0) {
    /* Product: '<S331>/Product1' incorporates:
     *  Saturate: '<S2>/Saturation1'
     */
    BoostConverterModel_ControlSy_B.Product1_g = rtb_Saturation_f *
      BoostConverterModel_Cont_ConstB.DataTypeConversion1_f;
  }

  /* MATLAB Function: '<S331>/MATLAB Function2' incorporates:
   *  UnitDelay: '<S331>/Unit Delay2'
   */
  BoostConverterM_MATLABFunction2(BoostConverterModel_ControlSy_B.Product1_g,
    BoostConverterModel_ControlS_DW.UnitDelay2_DSTATE_d,
    &BoostConverterModel_ControlSy_B.V);

  /* UnitDelay: '<S317>/Unit Delay1' */
  BoostConverterModel_ControlSy_B.UnitDelay1 =
    BoostConverterModel_ControlS_DW.UnitDelay1_DSTATE_f;

  /* UnitDelay: '<S331>/Unit Delay1' */
  BoostConverterModel_ControlSy_B.UnitDelay1_b =
    BoostConverterModel_ControlS_DW.UnitDelay1_DSTATE_h;

  /* S-Function (sfun_spssw_discc): '<S352>/State-Space' incorporates:
   *  Constant: '<S328>/eee'
   *  Constant: '<S342>/eee'
   *  Constant: '<S349>/DC'
   *  Constant: '<S354>/SwitchCurrents'
   */

  /* S-Function block: <S352>/State-Space */
  {
    real_T accum;

    /* Circuit has switches */
    int_T *switch_status = (int_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS;
    int_T *switch_status_init = (int_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;
    int_T *SwitchChange = (int_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.SW_CHG;
    int_T *gState = (int_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.G_STATE;
    real_T *yswitch = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.Y_SWITCH;
    int_T *switchTypes = (int_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_TYPES;
    int_T *idxOutSw = (int_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.IDX_OUT_SW;
    real_T *DxCol = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.DX_COL;
    real_T *tmp2 = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.TMP2;
    real_T *BDcol = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.BD_COL;
    real_T *tmp1 = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.TMP1;
    real_T *uswlast = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.USWLAST;
    int_T newState;
    int_T swChanged = 0;
    int loopsToDo = 20;
    real_T temp;

    /* keep an initial copy of switch_status*/
    memcpy(switch_status_init, switch_status, 2 * sizeof(int_T));
    memcpy(uswlast, &BoostConverterModel_ControlSy_B.StateSpace_o1[0], 2*sizeof
           (real_T));
    do {
      if (loopsToDo == 1) {            /* Need to reset some variables: */
        swChanged = 0;

        /* return to the original switch status*/
        {
          int_T i1;
          for (i1=0; i1 < 2; i1++) {
            swChanged = ((SwitchChange[i1] = switch_status_init[i1] -
                          switch_status[i1]) != 0) ? 1 : swChanged;
            switch_status[i1] = switch_status_init[i1];
          }
        }
      } else {
        /*
         * Compute outputs:
         * ---------------
         */
        real_T *Cs = (real_T*)
          BoostConverterModel_ControlS_DW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)
          BoostConverterModel_ControlS_DW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &BoostConverterModel_ControlSy_B.StateSpace_o1[0];
          for (i1=0; i1 < 12; i1++) {
            accum = 0.0;
            accum += *(Cs++) * BoostConverterModel_ControlS_DW.StateSpace_DSTATE;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 0.0;
            accum += *(Ds++) * 12.0;
            accum += *(Ds++) * BoostConverterModel_ControlSy_B.V_l;
            accum += *(Ds++) * BoostConverterModel_ControlSy_B.V;
            accum += *(Ds++) * BoostConverterModel_ControlSy_B.UnitDelay1;
            accum += *(Ds++) * BoostConverterModel_ControlSy_B.UnitDelay1_b;
            accum += *(Ds++) * 0.001;
            accum += *(Ds++) * 0.001;
            y0[i1] = accum;
          }
        }

        swChanged = 0;

        /* Diodes */
        newState = BoostConverterModel_ControlSy_B.StateSpace_o1[0] > 0.0 ? 1 :
          ((BoostConverterModel_ControlSy_B.StateSpace_o1[0] < 0.0) ? 0 :
           switch_status[0]);
        swChanged = ((SwitchChange[0] = newState - switch_status[0]) != 0) ? 1 :
          swChanged;
        switch_status[0] = newState;   /* Keep new state */

        /* Diodes */
        newState = BoostConverterModel_ControlSy_B.StateSpace_o1[1] > 0.0 ? 1 :
          ((BoostConverterModel_ControlSy_B.StateSpace_o1[1] < 0.0) ? 0 :
           switch_status[1]);
        swChanged = ((SwitchChange[1] = newState - switch_status[1]) != 0) ? 1 :
          swChanged;
        switch_status[1] = newState;   /* Keep new state */
      }

      /*
       * Compute new As, Bs, Cs and Ds matrixes:
       * --------------------------------------
       */
      if (swChanged) {
        real_T *As = (real_T*)
          BoostConverterModel_ControlS_DW.StateSpace_PWORK.AS;
        real_T *Cs = (real_T*)
          BoostConverterModel_ControlS_DW.StateSpace_PWORK.CS;
        real_T *Bs = (real_T*)
          BoostConverterModel_ControlS_DW.StateSpace_PWORK.BS;
        real_T *Ds = (real_T*)
          BoostConverterModel_ControlS_DW.StateSpace_PWORK.DS;
        real_T a1;

        {
          int_T i1;
          for (i1=0; i1 < 2; i1++) {
            if (SwitchChange[i1] != 0) {
              a1 = 1000.0*SwitchChange[i1];
              temp = 1/(1-Ds[i1*10]*a1);

              {
                int_T i2;
                for (i2=0; i2 < 12; i2++) {
                  DxCol[i2]= Ds[i2 * 9 + i1]*temp*a1;
                }
              }

              DxCol[i1] = temp;
              BDcol[0]= Bs[0 + i1]*a1;

              /* Copy row nSw of Cs into tmp1 and zero it out in Cs */
              memcpy(tmp1, &Cs[i1 * 1], 1 * sizeof(real_T));
              memset(&Cs[i1 * 1], '\0', 1 * sizeof(real_T));

              /* Copy row nSw of Ds into tmp2 and zero it out in Ds */
              memcpy(tmp2, &Ds[i1 * 9], 9 * sizeof(real_T));
              memset(&Ds[i1 * 9], '\0', 9 * sizeof(real_T));

              /* Cs = Cs + DxCol * tmp1, Ds = Ds + DxCol * tmp2 *******************/
              {
                int_T i2;
                for (i2=0; i2 < 12; i2++) {
                  a1 = DxCol[i2];
                  Cs[i2 * 1 + 0] += a1 * tmp1[0];

                  {
                    int_T i3;
                    for (i3=0; i3 < 9; i3++) {
                      Ds[i2 * 9 + i3] += a1 * tmp2[i3];
                    }
                  }
                }
              }

              /* As = As + BdCol*Cs(nSw,:), Bs = Bs + BdCol*Ds(nSw,:) *************/
              a1 = BDcol[0];
              As[0 + 0] += a1 * Cs[i1 * 1 + 0];

              {
                int_T i2;
                for (i2=0; i2 < 9; i2++) {
                  Bs[0 + i2] += a1 * Ds[i1 * 9 + i2];
                }
              }
            }
          }
        }
      }                                /* if (swChanged) */
    } while (swChanged > 0 && --loopsToDo > 0);

    if (loopsToDo == 0) {
      real_T *Cs = (real_T*)BoostConverterModel_ControlS_DW.StateSpace_PWORK.CS;
      real_T *Ds = (real_T*)BoostConverterModel_ControlS_DW.StateSpace_PWORK.DS;

      {
        int_T i1;
        real_T *y0 = &BoostConverterModel_ControlSy_B.StateSpace_o1[0];
        for (i1=0; i1 < 12; i1++) {
          accum = 0.0;
          accum += *(Cs++) * BoostConverterModel_ControlS_DW.StateSpace_DSTATE;
          accum += *(Ds++) * 0.0;
          accum += *(Ds++) * 0.0;
          accum += *(Ds++) * 12.0;
          accum += *(Ds++) * BoostConverterModel_ControlSy_B.V_l;
          accum += *(Ds++) * BoostConverterModel_ControlSy_B.V;
          accum += *(Ds++) * BoostConverterModel_ControlSy_B.UnitDelay1;
          accum += *(Ds++) * BoostConverterModel_ControlSy_B.UnitDelay1_b;
          accum += *(Ds++) * 0.001;
          accum += *(Ds++) * 0.001;
          y0[i1] = accum;
        }
      }
    }

    /* Output new switches states */
    BoostConverterModel_ControlSy_B.StateSpace_o2[0] = (real_T)switch_status[0];
    BoostConverterModel_ControlSy_B.StateSpace_o2[1] = (real_T)switch_status[1];
  }

  /* MATLAB Function: '<S317>/MATLAB Function1' */
  BoostConverterM_MATLABFunction1(BoostConverterModel_ControlSy_B.Product1,
    BoostConverterModel_ControlSy_B.StateSpace_o1[6],
    &BoostConverterModel_ControlSy_B.Idc);

  /* MATLAB Function: '<S331>/MATLAB Function1' */
  BoostConverterM_MATLABFunction1(BoostConverterModel_ControlSy_B.Product1_g,
    BoostConverterModel_ControlSy_B.StateSpace_o1[7], &Sum3);

  /* Update for UnitDelay: '<S1>/Unit Delay3' */
  BoostConverterModel_ControlS_DW.UnitDelay3_DSTATE =
    BoostConverterModel_ControlSy_B.StateSpace_o1[10];

  /* Update for UnitDelay: '<S1>/Unit Delay4' */
  BoostConverterModel_ControlS_DW.UnitDelay4_DSTATE =
    BoostConverterModel_ControlSy_B.StateSpace_o1[9];
  if (BoostConverterModel_ControlS_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for DiscreteIntegrator: '<S41>/Integrator' */
    BoostConverterModel_ControlS_DW.Integrator_DSTATE +=
      BoostConverterModel_ControlSy_B.IntegralGain;

    /* Update for DiscreteIntegrator: '<S91>/Integrator' */
    BoostConverterModel_ControlS_DW.Integrator_DSTATE_g += rtb_Integrator_e;
    if (BoostConverterModel_ControlS_DW.Integrator_DSTATE_g > 1.0) {
      BoostConverterModel_ControlS_DW.Integrator_DSTATE_g = 1.0;
    } else if (BoostConverterModel_ControlS_DW.Integrator_DSTATE_g < 0.0) {
      BoostConverterModel_ControlS_DW.Integrator_DSTATE_g = 0.0;
    }

    /* End of Update for DiscreteIntegrator: '<S91>/Integrator' */

    /* Update for DiscreteIntegrator: '<S86>/Filter' */
    BoostConverterModel_ControlS_DW.Filter_DSTATE += 1.0E-5 *
      rtb_FilterCoefficient;

    /* Update for DiscreteIntegrator: '<S141>/Integrator' */
    BoostConverterModel_ControlS_DW.Integrator_DSTATE_o += rtb_IntegralGain_b;

    /* Update for DiscreteIntegrator: '<S136>/Filter' */
    BoostConverterModel_ControlS_DW.Filter_DSTATE_m += 1.0E-5 *
      rtb_FilterCoefficient_e;
  }

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  BoostConverterModel_ControlS_DW.UnitDelay2_DSTATE =
    BoostConverterModel_ControlSy_B.StateSpace_o1[11];

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  BoostConverterModel_ControlS_DW.UnitDelay1_DSTATE =
    BoostConverterModel_ControlSy_B.StateSpace_o1[8];

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  BoostConverterModel_ControlS_DW.UnitDelay_DSTATE =
    BoostConverterModel_ControlSy_B.StateSpace_o1[4];

  /* Update for UnitDelay: '<S317>/Unit Delay2' */
  BoostConverterModel_ControlS_DW.UnitDelay2_DSTATE_c =
    BoostConverterModel_ControlSy_B.StateSpace_o1[2];

  /* Update for UnitDelay: '<S331>/Unit Delay2' */
  BoostConverterModel_ControlS_DW.UnitDelay2_DSTATE_d =
    BoostConverterModel_ControlSy_B.StateSpace_o1[3];

  /* Update for UnitDelay: '<S317>/Unit Delay1' */
  BoostConverterModel_ControlS_DW.UnitDelay1_DSTATE_f =
    BoostConverterModel_ControlSy_B.Idc;

  /* Update for UnitDelay: '<S331>/Unit Delay1' */
  BoostConverterModel_ControlS_DW.UnitDelay1_DSTATE_h = Sum3;

  /* Update for S-Function (sfun_spssw_discc): '<S352>/State-Space' incorporates:
   *  Constant: '<S328>/eee'
   *  Constant: '<S342>/eee'
   *  Constant: '<S349>/DC'
   *  Constant: '<S354>/SwitchCurrents'
   */

  /* S-Function block: <S352>/State-Space */
  {
    const real_T *As = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.AS;
    const real_T *Bs = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.BS;
    real_T *xtmp = (real_T*)
      BoostConverterModel_ControlS_DW.StateSpace_PWORK.XTMP;
    real_T accum;

    /* Calculate new states... */
    accum = 0.0;
    accum += *(As++) * BoostConverterModel_ControlS_DW.StateSpace_DSTATE;
    accum += *(Bs++) * 0.0;
    accum += *(Bs++) * 0.0;
    accum += *(Bs++) * 12.0;
    accum += *(Bs++) * BoostConverterModel_ControlSy_B.V_l;
    accum += *(Bs++) * BoostConverterModel_ControlSy_B.V;
    accum += *(Bs++) * BoostConverterModel_ControlSy_B.UnitDelay1;
    accum += *(Bs++) * BoostConverterModel_ControlSy_B.UnitDelay1_b;
    accum += *(Bs++) * 0.001;
    accum += *(Bs++) * 0.001;
    xtmp[0] = accum;
    BoostConverterModel_ControlS_DW.StateSpace_DSTATE = xtmp[0];

    {
      int_T *gState = (int_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.G_STATE;

      /* Store switch gates values for next step */
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
    }
  }

  rate_scheduler();
}

/* Model initialize function */
void BoostConverterModel_ControlSystem_initialize(void)
{
  /* Start for S-Function (sfun_spssw_discc): '<S352>/State-Space' incorporates:
   *  Constant: '<S328>/eee'
   *  Constant: '<S342>/eee'
   *  Constant: '<S349>/DC'
   *  Constant: '<S354>/SwitchCurrents'
   */

  /* S-Function block: <S352>/State-Space */
  {
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.AS = (real_T*)calloc(1 * 1,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.BS = (real_T*)calloc(1 * 9,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.CS = (real_T*)calloc(12 * 1,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.DS = (real_T*)calloc(12 * 9,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(12,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(9,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.BD_COL = (real_T*)calloc(1,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.TMP1 = (real_T*)calloc(1,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.XTMP = (real_T*)calloc(1,
      sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS = (int_T*)
      calloc(2, sizeof(int_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.SW_CHG = (int_T*)calloc(2,
      sizeof(int_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.G_STATE = (int_T*)calloc(2,
      sizeof(int_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.Y_SWITCH = (real_T*)calloc
      (2, sizeof(real_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_TYPES = (int_T*)
      calloc(2, sizeof(int_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.IDX_OUT_SW = (int_T*)calloc
      (2, sizeof(int_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS_INIT = (int_T*)
      calloc(2, sizeof(int_T));
    BoostConverterModel_ControlS_DW.StateSpace_PWORK.USWLAST = (real_T*)calloc(2,
      sizeof(real_T));
  }

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S352>/State-Space' incorporates:
   *  Constant: '<S328>/eee'
   *  Constant: '<S342>/eee'
   *  Constant: '<S349>/DC'
   *  Constant: '<S354>/SwitchCurrents'
   */
  {
    int32_T i, j;
    real_T *As = (real_T*)BoostConverterModel_ControlS_DW.StateSpace_PWORK.AS;
    real_T *Bs = (real_T*)BoostConverterModel_ControlS_DW.StateSpace_PWORK.BS;
    real_T *Cs = (real_T*)BoostConverterModel_ControlS_DW.StateSpace_PWORK.CS;
    real_T *Ds = (real_T*)BoostConverterModel_ControlS_DW.StateSpace_PWORK.DS;
    real_T *X0 = (real_T*)&BoostConverterModel_ControlS_DW.StateSpace_DSTATE;
    for (i = 0; i < 1; i++) {
      X0[i] = 1199.5502293745199;
    }

    /* Copy and transpose A and B */
    for (i=0; i<1; i++) {
      for (j=0; j<1; j++)
        As[i*1 + j] = 0.99986666222707188;
      for (j=0; j<9; j++)
        Bs[i*9 + j] = (BoostConverterModel_Cont_ConstP.StateSpace_BS_param[i + j*
                       1]);
    }

    /* Copy and transpose C */
    for (i=0; i<12; i++) {
      for (j=0; j<1; j++)
        Cs[i*1 + j] = (BoostConverterModel_Cont_ConstP.StateSpace_CS_param[i + j*
                       12]);
    }

    /* Copy and transpose D */
    for (i=0; i<12; i++) {
      for (j=0; j<9; j++)
        Ds[i*9 + j] = (BoostConverterModel_Cont_ConstP.StateSpace_DS_param[i + j*
                       12]);
    }

    {
      /* Switches work vectors */
      int_T *switch_status = (int_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *gState = (int_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.IDX_OUT_SW;
      int_T *switch_status_init = (int_T*)
        BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;

      /* Initialize work vectors */
      switch_status[0] = 0;
      switch_status_init[0] = 0;
      gState[0] = (int_T) 0.0;
      yswitch[0] = 1/0.001;
      switchTypes[0] = (int_T)3.0;
      idxOutSw[0] = ((int_T)0.0) - 1;
      switch_status[1] = 0;
      switch_status_init[1] = 0;
      gState[1] = (int_T) 0.0;
      yswitch[1] = 1/0.001;
      switchTypes[1] = (int_T)3.0;
      idxOutSw[1] = ((int_T)0.0) - 1;
    }
  }
}

/* Model terminate function */
void BoostConverterModel_ControlSystem_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S352>/State-Space' incorporates:
   *  Constant: '<S328>/eee'
   *  Constant: '<S342>/eee'
   *  Constant: '<S349>/DC'
   *  Constant: '<S354>/SwitchCurrents'
   */

  /* S-Function block: <S352>/State-Space */
  {
    /* Free memory */
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.AS);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.BS);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.CS);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.DS);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.DX_COL);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.TMP2);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.BD_COL);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.TMP1);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.XTMP);

    /*
     * Circuit has switches*/
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.G_STATE);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.SW_CHG);
    free(BoostConverterModel_ControlS_DW.StateSpace_PWORK.SWITCH_STATUS_INIT);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

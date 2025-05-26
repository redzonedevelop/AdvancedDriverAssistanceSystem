/*
 * Course Support License -- for instructional use for courses.  Not for
 * government, research, commercial, or other organizational use.
 *
 * File: ACC.c
 *
 * Code generated for Simulink model 'ACC'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat May 24 20:15:19 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ACC.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void ACC_step(void)
{
  real_T rtb_controlled_speed;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/distance'
   *  Sum: '<Root>/Subtract'
   *  UnitDelay: '<Root>/before_distance'
   */
  rtb_controlled_speed = (rtDW.before_distance_DSTATE - rtU.distance) * 10.0/*나누기 0.1초*/;//상대속도

  /* Saturate: '<Root>/v_rel' */
  if (rtb_controlled_speed > 1.0) {//상대속도 제한
    rtb_controlled_speed = 1.0;
  } else if (rtb_controlled_speed < -1.0) {
    rtb_controlled_speed = -1.0;
  }

  /* Sum: '<Root>/controlled_speed' incorporates:
   *  Constant: '<Root>/Target_distance'
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain2'
   *  Inport: '<Root>/current_speed'
   *  Inport: '<Root>/distance'
   *  Saturate: '<Root>/v_rel'
   *  Sum: '<Root>/Difference'
   *  Sum: '<Root>/acceleration'
   */
  rtb_controlled_speed = ((rtU.distance - 1.0/*target distance*/) * 0.1 - 0.1 * rtb_controlled_speed/*상대속도*/) + rtU.current_speed;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/target_speed'
   *  Sum: '<Root>/con-tar'
   */
  if (rtb_controlled_speed - 1.0/*target speed*/ > 0.0) {//target speed 값 이상으로 올라가지않음
    /* Outport: '<Root>/control_speed' */
    rtY.control_speed = 1.0;
  } else {
    /* Outport: '<Root>/control_speed' */
    rtY.control_speed = rtb_controlled_speed;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Update for UnitDelay: '<Root>/before_distance' incorporates:
   *  Inport: '<Root>/distance'
   */
  rtDW.before_distance_DSTATE = rtU.distance;
}

/* Model initialize function */
void ACC_initialize(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/before_distance' */
  rtDW.before_distance_DSTATE = 2;
  rtU.current_speed = 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

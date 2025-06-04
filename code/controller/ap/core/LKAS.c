/*
 * Course Support License -- for instructional use for courses.  Not for
 * government, research, commercial, or other organizational use.
 *
 * File: LKAS.c
 *
 * Code generated for Simulink model 'LKAS'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Tue May 27 13:11:42 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "LKAS.h"
#include <math.h>
#include "rtwtypes.h"
#include "math.h"

/* Block signals and states (default storage) */
DW1 rtDW1;

/* External inputs (root inport signals with default storage) */
ExtU1 rtU1;

/* External outputs (root outports fed by signals with default storage) */
ExtY1 rtY1;
extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
static boolean_T rtIsInf(real_T value);
static boolean_T rtIsInfF(real32_T value);
static boolean_T rtIsNaN(real_T value);
static boolean_T rtIsNaNF(real32_T value);
real_T rtNaN = -(real_T)NAN;
real_T rtInf = (real_T)INFINITY;
real_T rtMinusInf = -(real_T)INFINITY;
real32_T rtNaNF = -(real32_T)NAN;
real32_T rtInfF = (real32_T)INFINITY;
real32_T rtMinusInfF = -(real32_T)INFINITY;

/* Model step function */
void LKAS_step(void)
{
  real_T rtb_Saturation2;
  boolean_T rtb_LogicalOperator;

  /* Logic: '<S2>/Logical Operator' incorporates:
   *  Constant: '<S2>/Time constant'
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S6>/Compare'
   *  Sum: '<S2>/Sum1'
   */
  rtb_LogicalOperator = (0.2 - rtDW1.Probe[0] <= 0.0);

  /* Saturate: '<Root>/Saturation2' incorporates:
   *  Inport: '<Root>/heading_error'
   */
  if (rtU1.heading_error > 0.5) {
    rtb_Saturation2 = 0.5;
  } else if (rtU1.heading_error < -0.5) {
    rtb_Saturation2 = -0.5;
  } else {
    rtb_Saturation2 = rtU1.heading_error;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* DiscreteIntegrator: '<S8>/Integrator' */
  if (rtDW1.Integrator_IC_LOADING != 0) {
    rtDW1.Integrator_DSTATE = rtb_Saturation2;
  }

  if (rtb_LogicalOperator || (rtDW1.Integrator_PrevResetState != 0)) {
    rtDW1.Integrator_DSTATE = rtb_Saturation2;
  }

  /* Outport: '<Root>/yaw_rate' incorporates:
   *  DiscreteIntegrator: '<S8>/Integrator'
   */
  rtY1.yaw_rate = rtDW1.Integrator_DSTATE;

  /* Update for DiscreteIntegrator: '<S8>/Integrator' incorporates:
   *  Constant: '<S2>/Time constant'
   *  MinMax: '<S2>/Max'
   *  Product: '<S1>/1//T'
   *  Sum: '<S1>/Sum1'
   */
  rtDW1.Integrator_IC_LOADING = 0U;
  rtDW1.Integrator_DSTATE += 1.0 / fmax(rtDW1.Probe[0], 0.2) * (rtb_Saturation2 -
    rtDW1.Integrator_DSTATE) * 0.1;
  rtDW1.Integrator_PrevResetState = (int8_T)rtb_LogicalOperator;
}

/* Model initialize function */
void LKAS_initialize(void)
{
  /* Start for Probe: '<S2>/Probe' */
  rtDW1.Probe[0] = 0.1;
  rtDW1.Probe[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Integrator' */
  rtDW1.Integrator_IC_LOADING = 1U;
}

/* Test if value is infinite */
static boolean_T rtIsInf(real_T value)
{
  return (boolean_T)isinf(value);
}

/* Test if single-precision value is infinite */
static boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)isinf(value);
}

/* Test if value is not a number */
static boolean_T rtIsNaN(real_T value)
{
  return (boolean_T)(isnan(value) != 0);
}

/* Test if single-precision value is not a number */
static boolean_T rtIsNaNF(real32_T value)
{
  return (boolean_T)(isnan(value) != 0);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


















///*
// * Course Support License -- for instructional use for courses.  Not for
// * government, research, commercial, or other organizational use.
// *
// * File: LKAS.c
// *
// * Code generated for Simulink model 'LKAS'.
// *
// * Model version                  : 1.8
// * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// * C/C++ source code generated on : Mon May 26 11:39:36 2025
// *
// * Target selection: ert.tlc
// * Embedded hardware selection: Infineon->TriCore
// * Code generation objectives:
// *    1. Execution efficiency
// *    2. RAM efficiency
// * Validation result: Not run
// */
//
//#include "LKAS.h"
//#include "rtwtypes.h"
//
///* Block signals and states (default storage) */
//DW1 rtDW1;
//
///* External inputs (root inport signals with default storage) */
//ExtU1 rtU1;
//
///* External outputs (root outports fed by signals with default storage) */
//ExtY1 rtY1;
//
///* Model step function */
//void LKAS_step(void)
//{
//  real_T rtb_FilterCoefficient;
//  real_T u0;
//
//  /* Gain: '<S39>/Filter Coefficient' incorporates:
//   *  DiscreteIntegrator: '<S31>/Filter'
//   *  Gain: '<S29>/Derivative Gain'
//   *  Inport: '<Root>/heading_error'
//   *  Sum: '<S31>/SumD'
//   */
//  rtb_FilterCoefficient = (-73.0401902211796 * rtU1.heading_error -
//    rtDW1.Filter_DSTATE) * 0.214128110748318;
//
//  /* Sum: '<S45>/Sum' incorporates:
//   *  DiscreteIntegrator: '<S36>/Integrator'
//   *  Gain: '<S41>/Proportional Gain'
//   *  Inport: '<Root>/heading_error'
//   */
//  u0 = (15.6399579407589 * rtU1.heading_error + rtDW1.Integrator_DSTATE) +
//    rtb_FilterCoefficient;
//
//  /* Saturate: '<Root>/Saturation2' */
//  if (u0 > 0.5) {
//    /* Outport: '<Root>/yaw_rate' */
//    rtY1.yaw_rate = 0.5;
//  } else if (u0 < -0.5) {
//    /* Outport: '<Root>/yaw_rate' */
//    rtY1.yaw_rate = -0.5;
//  } else {
//    /* Outport: '<Root>/yaw_rate' */
//    rtY1.yaw_rate = u0;
//  }
//
//  /* End of Saturate: '<Root>/Saturation2' */
//
//  /* Update for DiscreteIntegrator: '<S36>/Integrator' incorporates:
//   *  Gain: '<S33>/Integral Gain'
//   *  Inport: '<Root>/heading_error'
//   */
//  rtDW1.Integrator_DSTATE += 0.751903235740671 * rtU1.heading_error;
//
//  /* Update for DiscreteIntegrator: '<S31>/Filter' */
//  rtDW1.Filter_DSTATE += 0.1 * rtb_FilterCoefficient;
//}
//
///* Model initialize function */
//void LKAS_initialize(void)
//{
//  /* (no initialization code required) */
//}
//
///*
// * File trailer for generated code.
// *
// * [EOF]
// */
//
//
//
//
//
//
//
/////*
//// * Course Support License -- for instructional use for courses.  Not for
//// * government, research, commercial, or other organizational use.
//// *
//// * File: LKAS.c
//// *
//// * Code generated for Simulink model 'LKAS'.
//// *
//// * Model version                  : 1.4
//// * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
//// * C/C++ source code generated on : Sun May 25 14:36:02 2025
//// *
//// * Target selection: ert.tlc
//// * Embedded hardware selection: Infineon->TriCore
//// * Code generation objectives:
//// *    1. Execution efficiency
//// *    2. RAM efficiency
//// * Validation result: Not run
//// */
////
////#include "LKAS.h"
////#include <math.h>
////#include "rtwtypes.h"
////#include "math.h"
////
/////* Block signals and states (default storage) */
////DW1 rtDW1;
////
/////* External inputs (root inport signals with default storage) */
////ExtU1 rtU1;
////
/////* External outputs (root outports fed by signals with default storage) */
////ExtY1 rtY1;
////
/////* Real-time model */
////static RT_MODEL rtM_;
////RT_MODEL *const rtM = &rtM_;
////extern real_T rtInf;
////extern real_T rtMinusInf;
////extern real_T rtNaN;
////extern real32_T rtInfF;
////extern real32_T rtMinusInfF;
////extern real32_T rtNaNF;
////static boolean_T rtIsInf(real_T value);
////static boolean_T rtIsInfF(real32_T value);
////static boolean_T rtIsNaN(real_T value);
////static boolean_T rtIsNaNF(real32_T value);
////real_T rtNaN = -(real_T)NAN;
////real_T rtInf = (real_T)INFINITY;
////real_T rtMinusInf = -(real_T)INFINITY;
////real32_T rtNaNF = -(real32_T)NAN;
////real32_T rtInfF = (real32_T)INFINITY;
////real32_T rtMinusInfF = -(real32_T)INFINITY;
////
/////* Model step function */
////void LKAS_step(void)
////{
////  real_T rtb_FilterCoefficient;
////  real_T rtb_Saturation2;
////  boolean_T rtb_LogicalOperator;
////
////  /* Logic: '<S3>/Logical Operator' incorporates:
////   *  Constant: '<S3>/Time constant'
////   *  Constant: '<S7>/Constant'
////   *  RelationalOperator: '<S7>/Compare'
////   *  Sum: '<S3>/Sum1'
////   */
////  rtb_LogicalOperator = (0.2 - rtDW1.Probe[0] <= 0.0);
////
////  /* Gain: '<S47>/Filter Coefficient' incorporates:
////   *  DiscreteIntegrator: '<S39>/Filter'
////   *  Gain: '<S37>/Derivative Gain'
////   *  Inport: '<Root>/heading_error'
////   *  Sum: '<S39>/SumD'
////   */
////  rtb_FilterCoefficient = (0.0 * rtU1.heading_error - rtDW1.Filter_DSTATE) * 100.0;
////
////  /* Sum: '<S53>/Sum' incorporates:
////   *  DiscreteIntegrator: '<S44>/Integrator'
////   *  Gain: '<S49>/Proportional Gain'
////   *  Inport: '<Root>/heading_error'
////   */
////  rtb_Saturation2 = (1.4 * rtU1.heading_error + rtDW1.Integrator_DSTATE) +
////    rtb_FilterCoefficient;
////
////  /* Saturate: '<Root>/Saturation2' */
////  if (rtb_Saturation2 > 0.5) {
////    rtb_Saturation2 = 0.5;
////  } else if (rtb_Saturation2 < -0.5) {
////    rtb_Saturation2 = -0.5;
////  }
////
////  /* End of Saturate: '<Root>/Saturation2' */
////
////  /* DiscreteIntegrator: '<S9>/Integrator' */
////  if (rtDW1.Integrator_IC_LOADING != 0) {
////    rtDW1.Integrator_DSTATE_f = rtb_Saturation2;
////  }
////
////  if (rtb_LogicalOperator || (rtDW1.Integrator_PrevResetState != 0)) {
////    rtDW1.Integrator_DSTATE_f = rtb_Saturation2;
////  }
////
////  /* Outport: '<Root>/yaw_rate' incorporates:
////   *  DiscreteIntegrator: '<S9>/Integrator'
////   */
////  rtY1.yaw_rate = rtDW1.Integrator_DSTATE_f;
////
////  /* Update for DiscreteIntegrator: '<S44>/Integrator' incorporates:
////   *  Gain: '<S41>/Integral Gain'
////   *  Inport: '<Root>/heading_error'
////   */
////  rtDW1.Integrator_DSTATE += 0.0 * rtU1.heading_error;
////
////  /* Update for DiscreteIntegrator: '<S39>/Filter' */
////  rtDW1.Filter_DSTATE += 0.1 * rtb_FilterCoefficient;
////
////  /* Update for DiscreteIntegrator: '<S9>/Integrator' incorporates:
////   *  Constant: '<S3>/Time constant'
////   *  MinMax: '<S3>/Max'
////   *  Product: '<S1>/1//T'
////   *  Sum: '<S1>/Sum1'
////   */
////  rtDW1.Integrator_IC_LOADING = 0U;
////  rtDW1.Integrator_DSTATE_f += 1.0 / fmax(rtDW1.Probe[0], 0.2) * (rtb_Saturation2
////    - rtDW1.Integrator_DSTATE_f) * 0.1;
////  rtDW1.Integrator_PrevResetState = (int8_T)rtb_LogicalOperator;
////}
////
/////* Model initialize function */
////void LKAS_initialize(void)
////{
////  /* Start for Probe: '<S3>/Probe' */
////  rtDW1.Probe[0] = 0.1;
////  rtDW1.Probe[1] = 0.0;
////
////  /* InitializeConditions for DiscreteIntegrator: '<S9>/Integrator' */
////  rtDW1.Integrator_IC_LOADING = 1U;
////}
////
/////* Test if value is infinite */
////static boolean_T rtIsInf(real_T value)
////{
////  return (boolean_T)isinf(value);
////}
////
/////* Test if single-precision value is infinite */
////static boolean_T rtIsInfF(real32_T value)
////{
////  return (boolean_T)isinf(value);
////}
////
/////* Test if value is not a number */
////static boolean_T rtIsNaN(real_T value)
////{
////  return (boolean_T)(isnan(value) != 0);
////}
////
/////* Test if single-precision value is not a number */
////static boolean_T rtIsNaNF(real32_T value)
////{
////  return (boolean_T)(isnan(value) != 0);
////}
////
/////*
//// * File trailer for generated code.
//// *
//// * [EOF]
//// */
//
//

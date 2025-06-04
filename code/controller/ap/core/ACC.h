/*
 * Course Support License -- for instructional use for courses.  Not for
 * government, research, commercial, or other organizational use.
 *
 * File: ACC.h
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

#ifndef ACC_h_
#define ACC_h_
#ifndef ACC_COMMON_INCLUDES_
#define ACC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* ACC_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T before_distance_DSTATE;       /* '<Root>/before_distance' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T current_speed;                /* '<Root>/current_speed' */
  real_T distance;                     /* '<Root>/distance' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T control_speed;                /* '<Root>/control_speed' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void ACC_initialize(void);
extern void ACC_step(void);

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
 * '<Root>' : 'ACC'
 */
#endif                                 /* ACC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

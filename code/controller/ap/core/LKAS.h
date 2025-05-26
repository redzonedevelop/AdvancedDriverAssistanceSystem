/*
 * Course Support License -- for instructional use for courses.  Not for
 * government, research, commercial, or other organizational use.
 *
 * File: LKAS.h
 *
 * Code generated for Simulink model 'LKAS'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon May 26 11:39:36 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef LKAS_h_
#define LKAS_h_
#ifndef LKAS_COMMON_INCLUDES_
#define LKAS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* LKAS_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S36>/Integrator' */
  real_T Filter_DSTATE;                /* '<S31>/Filter' */
} DW1;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T heading_error;                /* '<Root>/heading_error' */
} ExtU1;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T yaw_rate;                     /* '<Root>/yaw_rate' */
} ExtY1;

/* Block signals and states (default storage) */
extern DW1 rtDW1;

/* External inputs (root inport signals with default storage) */
extern ExtU1 rtU1;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY1 rtY1;

/* Model entry point functions */
extern void LKAS_initialize(void);
extern void LKAS_step(void);

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
 * '<Root>' : 'LKAS'
 * '<S1>'   : 'LKAS/PID Controller1'
 * '<S2>'   : 'LKAS/PID Controller1/Anti-windup'
 * '<S3>'   : 'LKAS/PID Controller1/D Gain'
 * '<S4>'   : 'LKAS/PID Controller1/External Derivative'
 * '<S5>'   : 'LKAS/PID Controller1/Filter'
 * '<S6>'   : 'LKAS/PID Controller1/Filter ICs'
 * '<S7>'   : 'LKAS/PID Controller1/I Gain'
 * '<S8>'   : 'LKAS/PID Controller1/Ideal P Gain'
 * '<S9>'   : 'LKAS/PID Controller1/Ideal P Gain Fdbk'
 * '<S10>'  : 'LKAS/PID Controller1/Integrator'
 * '<S11>'  : 'LKAS/PID Controller1/Integrator ICs'
 * '<S12>'  : 'LKAS/PID Controller1/N Copy'
 * '<S13>'  : 'LKAS/PID Controller1/N Gain'
 * '<S14>'  : 'LKAS/PID Controller1/P Copy'
 * '<S15>'  : 'LKAS/PID Controller1/Parallel P Gain'
 * '<S16>'  : 'LKAS/PID Controller1/Reset Signal'
 * '<S17>'  : 'LKAS/PID Controller1/Saturation'
 * '<S18>'  : 'LKAS/PID Controller1/Saturation Fdbk'
 * '<S19>'  : 'LKAS/PID Controller1/Sum'
 * '<S20>'  : 'LKAS/PID Controller1/Sum Fdbk'
 * '<S21>'  : 'LKAS/PID Controller1/Tracking Mode'
 * '<S22>'  : 'LKAS/PID Controller1/Tracking Mode Sum'
 * '<S23>'  : 'LKAS/PID Controller1/Tsamp - Integral'
 * '<S24>'  : 'LKAS/PID Controller1/Tsamp - Ngain'
 * '<S25>'  : 'LKAS/PID Controller1/postSat Signal'
 * '<S26>'  : 'LKAS/PID Controller1/preInt Signal'
 * '<S27>'  : 'LKAS/PID Controller1/preSat Signal'
 * '<S28>'  : 'LKAS/PID Controller1/Anti-windup/Passthrough'
 * '<S29>'  : 'LKAS/PID Controller1/D Gain/Internal Parameters'
 * '<S30>'  : 'LKAS/PID Controller1/External Derivative/Error'
 * '<S31>'  : 'LKAS/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S32>'  : 'LKAS/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S33>'  : 'LKAS/PID Controller1/I Gain/Internal Parameters'
 * '<S34>'  : 'LKAS/PID Controller1/Ideal P Gain/Passthrough'
 * '<S35>'  : 'LKAS/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S36>'  : 'LKAS/PID Controller1/Integrator/Discrete'
 * '<S37>'  : 'LKAS/PID Controller1/Integrator ICs/Internal IC'
 * '<S38>'  : 'LKAS/PID Controller1/N Copy/Disabled'
 * '<S39>'  : 'LKAS/PID Controller1/N Gain/Internal Parameters'
 * '<S40>'  : 'LKAS/PID Controller1/P Copy/Disabled'
 * '<S41>'  : 'LKAS/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S42>'  : 'LKAS/PID Controller1/Reset Signal/Disabled'
 * '<S43>'  : 'LKAS/PID Controller1/Saturation/Passthrough'
 * '<S44>'  : 'LKAS/PID Controller1/Saturation Fdbk/Disabled'
 * '<S45>'  : 'LKAS/PID Controller1/Sum/Sum_PID'
 * '<S46>'  : 'LKAS/PID Controller1/Sum Fdbk/Disabled'
 * '<S47>'  : 'LKAS/PID Controller1/Tracking Mode/Disabled'
 * '<S48>'  : 'LKAS/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S49>'  : 'LKAS/PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S50>'  : 'LKAS/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S51>'  : 'LKAS/PID Controller1/postSat Signal/Forward_Path'
 * '<S52>'  : 'LKAS/PID Controller1/preInt Signal/Internal PreInt'
 * '<S53>'  : 'LKAS/PID Controller1/preSat Signal/Forward_Path'
 */
#endif                                 /* LKAS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */












///*
// * Course Support License -- for instructional use for courses.  Not for
// * government, research, commercial, or other organizational use.
// *
// * File: LKAS.h
// *
// * Code generated for Simulink model 'LKAS'.
// *
// * Model version                  : 1.4
// * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// * C/C++ source code generated on : Sun May 25 14:36:02 2025
// *
// * Target selection: ert.tlc
// * Embedded hardware selection: Infineon->TriCore
// * Code generation objectives:
// *    1. Execution efficiency
// *    2. RAM efficiency
// * Validation result: Not run
// */
//
//#ifndef LKAS_h_
//#define LKAS_h_
//#ifndef LKAS_COMMON_INCLUDES_
//#define LKAS_COMMON_INCLUDES_
//#include "rtwtypes.h"
//
//#include "math.h"
//#endif                                 /* LKAS_COMMON_INCLUDES_ */
//
///* Macros for accessing real-time model data structure */
//#ifndef rtmGetErrorStatus
//#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
//#endif
//
//#ifndef rtmSetErrorStatus
//#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
//#endif
//
///* Forward declaration for rtModel */
//typedef struct tag_RTM RT_MODEL;
//
///* Block signals and states (default storage) for system '<Root>' */
//typedef struct {
//  real_T Probe[2];                     /* '<S3>/Probe' */
//  real_T Integrator_DSTATE;            /* '<S44>/Integrator' */
//  real_T Filter_DSTATE;                /* '<S39>/Filter' */
//  real_T Integrator_DSTATE_f;          /* '<S9>/Integrator' */
//  int8_T Integrator_PrevResetState;    /* '<S9>/Integrator' */
//  uint8_T Integrator_IC_LOADING;       /* '<S9>/Integrator' */
//} DW1;
//
///* External inputs (root inport signals with default storage) */
//typedef struct {
//  real_T heading_error;                /* '<Root>/heading_error' */
//} ExtU1;
//
///* External outputs (root outports fed by signals with default storage) */
//typedef struct {
//  real_T yaw_rate;                     /* '<Root>/yaw_rate' */
//} ExtY1;
//
///* Real-time Model Data Structure */
//struct tag_RTM {
//  const char_T * volatile errorStatus;
//};
//
///* Block signals and states (default storage) */
//extern DW1 rtDW1;
//
///* External inputs (root inport signals with default storage) */
//extern ExtU1 rtU1;
//
///* External outputs (root outports fed by signals with default storage) */
//extern ExtY1 rtY1;
//
///* Model entry point functions */
//extern void LKAS_initialize(void);
//extern void LKAS_step(void);
//
///* Real-time Model object */
//extern RT_MODEL *const rtM;
//
///*-
// * These blocks were eliminated from the model due to optimizations:
// *
// * Block '<S9>/Saturation' : Eliminated Saturate block
// * Block '<S1>/K' : Eliminated nontunable gain of 1
// */
//
///*-
// * The generated code includes comments that allow you to trace directly
// * back to the appropriate location in the model.  The basic format
// * is <system>/block_name, where system is the system number (uniquely
// * assigned by Simulink) and block_name is the name of the block.
// *
// * Use the MATLAB hilite_system command to trace the generated code back
// * to the model.  For example,
// *
// * hilite_system('<S3>')    - opens system 3
// * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
// *
// * Here is the system hierarchy for this model
// *
// * '<Root>' : 'LKAS'
// * '<S1>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)'
// * '<S2>'   : 'LKAS/PID Controller1'
// * '<S3>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
// * '<S4>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Initialization'
// * '<S5>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
// * '<S6>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Constant'
// * '<S7>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
// * '<S8>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Initialization/Init_u'
// * '<S9>'   : 'LKAS/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
// * '<S10>'  : 'LKAS/PID Controller1/Anti-windup'
// * '<S11>'  : 'LKAS/PID Controller1/D Gain'
// * '<S12>'  : 'LKAS/PID Controller1/External Derivative'
// * '<S13>'  : 'LKAS/PID Controller1/Filter'
// * '<S14>'  : 'LKAS/PID Controller1/Filter ICs'
// * '<S15>'  : 'LKAS/PID Controller1/I Gain'
// * '<S16>'  : 'LKAS/PID Controller1/Ideal P Gain'
// * '<S17>'  : 'LKAS/PID Controller1/Ideal P Gain Fdbk'
// * '<S18>'  : 'LKAS/PID Controller1/Integrator'
// * '<S19>'  : 'LKAS/PID Controller1/Integrator ICs'
// * '<S20>'  : 'LKAS/PID Controller1/N Copy'
// * '<S21>'  : 'LKAS/PID Controller1/N Gain'
// * '<S22>'  : 'LKAS/PID Controller1/P Copy'
// * '<S23>'  : 'LKAS/PID Controller1/Parallel P Gain'
// * '<S24>'  : 'LKAS/PID Controller1/Reset Signal'
// * '<S25>'  : 'LKAS/PID Controller1/Saturation'
// * '<S26>'  : 'LKAS/PID Controller1/Saturation Fdbk'
// * '<S27>'  : 'LKAS/PID Controller1/Sum'
// * '<S28>'  : 'LKAS/PID Controller1/Sum Fdbk'
// * '<S29>'  : 'LKAS/PID Controller1/Tracking Mode'
// * '<S30>'  : 'LKAS/PID Controller1/Tracking Mode Sum'
// * '<S31>'  : 'LKAS/PID Controller1/Tsamp - Integral'
// * '<S32>'  : 'LKAS/PID Controller1/Tsamp - Ngain'
// * '<S33>'  : 'LKAS/PID Controller1/postSat Signal'
// * '<S34>'  : 'LKAS/PID Controller1/preInt Signal'
// * '<S35>'  : 'LKAS/PID Controller1/preSat Signal'
// * '<S36>'  : 'LKAS/PID Controller1/Anti-windup/Passthrough'
// * '<S37>'  : 'LKAS/PID Controller1/D Gain/Internal Parameters'
// * '<S38>'  : 'LKAS/PID Controller1/External Derivative/Error'
// * '<S39>'  : 'LKAS/PID Controller1/Filter/Disc. Forward Euler Filter'
// * '<S40>'  : 'LKAS/PID Controller1/Filter ICs/Internal IC - Filter'
// * '<S41>'  : 'LKAS/PID Controller1/I Gain/Internal Parameters'
// * '<S42>'  : 'LKAS/PID Controller1/Ideal P Gain/Passthrough'
// * '<S43>'  : 'LKAS/PID Controller1/Ideal P Gain Fdbk/Disabled'
// * '<S44>'  : 'LKAS/PID Controller1/Integrator/Discrete'
// * '<S45>'  : 'LKAS/PID Controller1/Integrator ICs/Internal IC'
// * '<S46>'  : 'LKAS/PID Controller1/N Copy/Disabled'
// * '<S47>'  : 'LKAS/PID Controller1/N Gain/Internal Parameters'
// * '<S48>'  : 'LKAS/PID Controller1/P Copy/Disabled'
// * '<S49>'  : 'LKAS/PID Controller1/Parallel P Gain/Internal Parameters'
// * '<S50>'  : 'LKAS/PID Controller1/Reset Signal/Disabled'
// * '<S51>'  : 'LKAS/PID Controller1/Saturation/Passthrough'
// * '<S52>'  : 'LKAS/PID Controller1/Saturation Fdbk/Disabled'
// * '<S53>'  : 'LKAS/PID Controller1/Sum/Sum_PID'
// * '<S54>'  : 'LKAS/PID Controller1/Sum Fdbk/Disabled'
// * '<S55>'  : 'LKAS/PID Controller1/Tracking Mode/Disabled'
// * '<S56>'  : 'LKAS/PID Controller1/Tracking Mode Sum/Passthrough'
// * '<S57>'  : 'LKAS/PID Controller1/Tsamp - Integral/TsSignalSpecification'
// * '<S58>'  : 'LKAS/PID Controller1/Tsamp - Ngain/Passthrough'
// * '<S59>'  : 'LKAS/PID Controller1/postSat Signal/Forward_Path'
// * '<S60>'  : 'LKAS/PID Controller1/preInt Signal/Internal PreInt'
// * '<S61>'  : 'LKAS/PID Controller1/preSat Signal/Forward_Path'
// */
//#endif                                 /* LKAS_h_ */
//
///*
// * File trailer for generated code.
// *
// * [EOF]
// */

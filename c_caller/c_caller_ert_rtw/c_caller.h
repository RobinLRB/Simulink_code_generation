//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: c_caller.h
//
// Code generated for Simulink model 'c_caller'.
//
// Model version                  : 3.0
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Fri Oct 30 14:03:32 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_c_caller_h_
#define RTW_HEADER_c_caller_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "c_caller_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// user code (top of header file)
#include "my_func.h"

// Block signals (default storage)
typedef struct {
  int32_T CCaller3[4];                 // '<Root>/C Caller3'
} B_c_caller_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slroscpp_internal_block_P_T obj; // '<S3>/SinkBlock'
  real_T lastSin;                      // '<Root>/Sine Wave'
  real_T lastCos;                      // '<Root>/Sine Wave'
  real_T lastSin_o;                    // '<Root>/Sine Wave1'
  real_T lastCos_d;                    // '<Root>/Sine Wave1'
  int32_T Delay_DSTATE[2];             // '<Root>/Delay'
  TrafficLightColor Delay1_DSTATE;     // '<Root>/Delay1'
  int32_T systemEnable;                // '<Root>/Sine Wave'
  int32_T systemEnable_i;              // '<Root>/Sine Wave1'
  int32_T clockTickCounter;            // '<Root>/Pulse Generator1'
  uint8_T icLoad;                      // '<Root>/Delay1'
} DW_c_caller_T;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T Out1;                         // '<Root>/Out1'
  real_T Out2;                         // '<Root>/Out2'
  int32_T Out3[4];                     // '<Root>/Out3'
  TrafficLightColor Out4;              // '<Root>/Out4'
  int32_T Out5;                        // '<Root>/Out5'
  int32_T Out6;                        // '<Root>/Out6'
  int32_T Out7;                        // '<Root>/Out7'
} ExtY_c_caller_T;

// Parameters (default storage)
struct P_c_caller_T_ {
  TrafficLightColor EnumeratedConstant_Value;
                                     // Mask Parameter: EnumeratedConstant_Value
                                        //  Referenced by: '<S2>/Constant'

  SL_Bus_c_caller_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                     //  Referenced by: '<S1>/Constant'

  real_T SineWave_Amp;                 // Expression: 1
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Freq;                // Expression: 1
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Hsin;                // Computed Parameter: SineWave_Hsin
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_HCos;                // Computed Parameter: SineWave_HCos
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_PSin;                // Computed Parameter: SineWave_PSin
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_PCos;                // Computed Parameter: SineWave_PCos
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T Constant_Value_c;             // Expression: 1
                                          //  Referenced by: '<Root>/Constant'

  real_T SineWave1_Amp;                // Expression: 1
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T SineWave1_Bias;               // Expression: 0
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T SineWave1_Freq;               // Expression: 1
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T SineWave1_Hsin;               // Computed Parameter: SineWave1_Hsin
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T SineWave1_HCos;               // Computed Parameter: SineWave1_HCos
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T SineWave1_PSin;               // Computed Parameter: SineWave1_PSin
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T SineWave1_PCos;               // Computed Parameter: SineWave1_PCos
                                          //  Referenced by: '<Root>/Sine Wave1'

  real_T CCaller1_K;                   // Expression: 2
                                          //  Referenced by: '<Root>/C Caller1'

  real_T PulseGenerator1_Period;       // Expression: 2
                                          //  Referenced by: '<Root>/Pulse Generator1'

  real_T PulseGenerator1_Duty;         // Expression: 1
                                          //  Referenced by: '<Root>/Pulse Generator1'

  real_T PulseGenerator1_PhaseDelay;   // Expression: 0
                                          //  Referenced by: '<Root>/Pulse Generator1'

  int32_T Constant1_Value[4];          // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<Root>/Constant1'

  int32_T PulseGenerator1_Amp;         // Expression: int32(1)
                                          //  Referenced by: '<Root>/Pulse Generator1'

  int32_T upper_saturation_limit_Value;
                             // Computed Parameter: upper_saturation_limit_Value
                                //  Referenced by: '<Root>/upper_saturation_limit'

  int32_T lower_saturation_limit_Value;
                             // Computed Parameter: lower_saturation_limit_Value
                                //  Referenced by: '<Root>/lower_ saturation_ limit'

  int32_T Delay_InitialCondition;  // Computed Parameter: Delay_InitialCondition
                                      //  Referenced by: '<Root>/Delay'

  uint32_T CCaller3_size;              // Computed Parameter: CCaller3_size
                                          //  Referenced by: '<Root>/C Caller3'

  uint32_T CCaller3_increment_idx;     // Expression: uint32(1)
                                          //  Referenced by: '<Root>/C Caller3'

};

// Real-time Model Data Structure
struct tag_RTM_c_caller_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_c_caller_T c_caller_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_c_caller_T c_caller_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_c_caller_T c_caller_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // External outputs (root outports fed by signals with default storage)
  extern ExtY_c_caller_T c_caller_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void c_caller_initialize(void);
  extern void c_caller_step(void);
  extern void c_caller_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_c_caller_T *const c_caller_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Display' : Unused code path elimination
//  Block '<Root>/Display1' : Unused code path elimination
//  Block '<Root>/Display2' : Unused code path elimination
//  Block '<Root>/Display3' : Unused code path elimination
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/Scope2' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'c_caller'
//  '<S1>'   : 'c_caller/Blank Message'
//  '<S2>'   : 'c_caller/Enumerated Constant'
//  '<S3>'   : 'c_caller/Publish'

#endif                                 // RTW_HEADER_c_caller_h_

//
// File trailer for generated code.
//
// [EOF]
//

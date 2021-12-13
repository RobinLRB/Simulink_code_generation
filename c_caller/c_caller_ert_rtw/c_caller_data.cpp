//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: c_caller_data.cpp
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
#include "c_caller.h"
#include "c_caller_private.h"

// Block parameters (default storage)
P_c_caller_T c_caller_P = {
  // Mask Parameter: EnumeratedConstant_Value
  //  Referenced by: '<S2>/Constant'

  GREEN,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S1>/Constant'

  {
    0.0                                // Data
  },

  // Expression: 1
  //  Referenced by: '<Root>/Sine Wave'

  1.0,

  // Expression: 0
  //  Referenced by: '<Root>/Sine Wave'

  0.0,

  // Expression: 1
  //  Referenced by: '<Root>/Sine Wave'

  1.0,

  // Computed Parameter: SineWave_Hsin
  //  Referenced by: '<Root>/Sine Wave'

  0.099833416646828155,

  // Computed Parameter: SineWave_HCos
  //  Referenced by: '<Root>/Sine Wave'

  0.99500416527802571,

  // Computed Parameter: SineWave_PSin
  //  Referenced by: '<Root>/Sine Wave'

  -0.099833416646828155,

  // Computed Parameter: SineWave_PCos
  //  Referenced by: '<Root>/Sine Wave'

  0.99500416527802571,

  // Expression: 1
  //  Referenced by: '<Root>/Constant'

  1.0,

  // Expression: 1
  //  Referenced by: '<Root>/Sine Wave1'

  1.0,

  // Expression: 0
  //  Referenced by: '<Root>/Sine Wave1'

  0.0,

  // Expression: 1
  //  Referenced by: '<Root>/Sine Wave1'

  1.0,

  // Computed Parameter: SineWave1_Hsin
  //  Referenced by: '<Root>/Sine Wave1'

  0.099833416646828155,

  // Computed Parameter: SineWave1_HCos
  //  Referenced by: '<Root>/Sine Wave1'

  0.99500416527802571,

  // Computed Parameter: SineWave1_PSin
  //  Referenced by: '<Root>/Sine Wave1'

  -0.099833416646828155,

  // Computed Parameter: SineWave1_PCos
  //  Referenced by: '<Root>/Sine Wave1'

  0.99500416527802571,

  // Expression: 2
  //  Referenced by: '<Root>/C Caller1'

  2.0,

  // Expression: 2
  //  Referenced by: '<Root>/Pulse Generator1'

  2.0,

  // Expression: 1
  //  Referenced by: '<Root>/Pulse Generator1'

  1.0,

  // Expression: 0
  //  Referenced by: '<Root>/Pulse Generator1'

  0.0,

  // Computed Parameter: Constant1_Value
  //  Referenced by: '<Root>/Constant1'

  { 1, 2, 3, 4 },

  // Expression: int32(1)
  //  Referenced by: '<Root>/Pulse Generator1'

  1,

  // Computed Parameter: upper_saturation_limit_Value
  //  Referenced by: '<Root>/upper_saturation_limit'

  40,

  // Computed Parameter: lower_saturation_limit_Value
  //  Referenced by: '<Root>/lower_ saturation_ limit'

  0,

  // Computed Parameter: Delay_InitialCondition
  //  Referenced by: '<Root>/Delay'

  0,

  // Computed Parameter: CCaller3_size
  //  Referenced by: '<Root>/C Caller3'

  4U,

  // Expression: uint32(1)
  //  Referenced by: '<Root>/C Caller3'

  1U
};

//
// File trailer for generated code.
//
// [EOF]
//

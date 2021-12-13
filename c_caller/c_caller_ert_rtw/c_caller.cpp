//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: c_caller.cpp
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

// Block signals (default storage)
B_c_caller_T c_caller_B;

// Block states (default storage)
DW_c_caller_T c_caller_DW;

// External outputs (root outports fed by signals with default storage)
ExtY_c_caller_T c_caller_Y;

// Real-time model
RT_MODEL_c_caller_T c_caller_M_ = RT_MODEL_c_caller_T();
RT_MODEL_c_caller_T *const c_caller_M = &c_caller_M_;

// Model step function
void c_caller_step(void)
{
  COUNTERBUS rtb_CCaller4_o1;
  COUNTERBUS rtb_COUNTERBUS;
  SL_Bus_c_caller_std_msgs_Float64 rtb_BusAssignment;
  real_T rtb_SineWave1;
  int32_T rtb_CCaller4_o2;
  int32_T rtb_Delay;
  TrafficLightColor rtb_CCaller2;

  // CCaller: '<Root>/C Caller3' incorporates:
  //   Constant: '<Root>/Constant1'

  c_caller_B.CCaller3[0] = c_caller_P.Constant1_Value[0];
  c_caller_B.CCaller3[1] = c_caller_P.Constant1_Value[1];
  c_caller_B.CCaller3[2] = c_caller_P.Constant1_Value[2];
  c_caller_B.CCaller3[3] = c_caller_P.Constant1_Value[3];
  incrementElement(c_caller_B.CCaller3, c_caller_P.CCaller3_size,
                   c_caller_P.CCaller3_increment_idx);

  // Outport: '<Root>/Out3'
  c_caller_Y.Out3[0] = c_caller_B.CCaller3[0];
  c_caller_Y.Out3[1] = c_caller_B.CCaller3[1];
  c_caller_Y.Out3[2] = c_caller_B.CCaller3[2];
  c_caller_Y.Out3[3] = c_caller_B.CCaller3[3];

  // Sin: '<Root>/Sine Wave'
  if (c_caller_DW.systemEnable != 0) {
    rtb_SineWave1 = c_caller_P.SineWave_Freq * ((c_caller_M->Timing.clockTick0) *
      0.1);
    c_caller_DW.lastSin = sin(rtb_SineWave1);
    c_caller_DW.lastCos = cos(rtb_SineWave1);
    c_caller_DW.systemEnable = 0;
  }

  // CCaller: '<Root>/C Caller' incorporates:
  //   Constant: '<Root>/Constant'
  //   Sin: '<Root>/Sine Wave'

  rtb_SineWave1 = add(((c_caller_DW.lastSin * c_caller_P.SineWave_PCos +
                        c_caller_DW.lastCos * c_caller_P.SineWave_PSin) *
                       c_caller_P.SineWave_HCos + (c_caller_DW.lastCos *
    c_caller_P.SineWave_PCos - c_caller_DW.lastSin * c_caller_P.SineWave_PSin) *
                       c_caller_P.SineWave_Hsin) * c_caller_P.SineWave_Amp +
                      c_caller_P.SineWave_Bias, c_caller_P.Constant_Value_c);

  // Outport: '<Root>/Out1'
  c_caller_Y.Out1 = rtb_SineWave1;

  // BusAssignment: '<Root>/Bus Assignment'
  rtb_BusAssignment.Data = rtb_SineWave1;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_c_caller_113.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Sin: '<Root>/Sine Wave1'
  if (c_caller_DW.systemEnable_i != 0) {
    rtb_SineWave1 = c_caller_P.SineWave1_Freq * ((c_caller_M->Timing.clockTick0)
      * 0.1);
    c_caller_DW.lastSin_o = sin(rtb_SineWave1);
    c_caller_DW.lastCos_d = cos(rtb_SineWave1);
    c_caller_DW.systemEnable_i = 0;
  }

  // Outport: '<Root>/Out2' incorporates:
  //   CCaller: '<Root>/C Caller1'
  //   Sin: '<Root>/Sine Wave1'

  c_caller_Y.Out2 = timesK(((c_caller_DW.lastSin_o * c_caller_P.SineWave1_PCos +
    c_caller_DW.lastCos_d * c_caller_P.SineWave1_PSin) *
    c_caller_P.SineWave1_HCos + (c_caller_DW.lastCos_d *
    c_caller_P.SineWave1_PCos - c_caller_DW.lastSin_o *
    c_caller_P.SineWave1_PSin) * c_caller_P.SineWave1_Hsin) *
    c_caller_P.SineWave1_Amp + c_caller_P.SineWave1_Bias, c_caller_P.CCaller1_K);

  // Delay: '<Root>/Delay1' incorporates:
  //   Constant: '<S2>/Constant'

  if (c_caller_DW.icLoad != 0) {
    c_caller_DW.Delay1_DSTATE = c_caller_P.EnumeratedConstant_Value;
  }

  // CCaller: '<Root>/C Caller2' incorporates:
  //   Delay: '<Root>/Delay1'

  rtb_CCaller2 = getNextTrafficLight(c_caller_DW.Delay1_DSTATE);

  // Outport: '<Root>/Out4'
  c_caller_Y.Out4 = rtb_CCaller2;

  // DiscretePulseGenerator: '<Root>/Pulse Generator1'
  rtb_Delay = (c_caller_DW.clockTickCounter < c_caller_P.PulseGenerator1_Duty) &&
    (c_caller_DW.clockTickCounter >= 0) ? c_caller_P.PulseGenerator1_Amp : 0;
  if (c_caller_DW.clockTickCounter >= c_caller_P.PulseGenerator1_Period - 1.0) {
    c_caller_DW.clockTickCounter = 0;
  } else {
    c_caller_DW.clockTickCounter++;
  }

  // End of DiscretePulseGenerator: '<Root>/Pulse Generator1'

  // BusCreator: '<Root>/COUNTERBUSCreator' incorporates:
  //   BusCreator: '<Root>/SIGNALBUSCreator'
  //   Constant: '<Root>/lower_ saturation_ limit'
  //   Constant: '<Root>/upper_saturation_limit'

  rtb_COUNTERBUS.inputsignal.input = rtb_Delay;
  rtb_COUNTERBUS.limits.upper_saturation_limit =
    c_caller_P.upper_saturation_limit_Value;
  rtb_COUNTERBUS.limits.lower_saturation_limit =
    c_caller_P.lower_saturation_limit_Value;

  // CCaller: '<Root>/C Caller4' incorporates:
  //   Delay: '<Root>/Delay'

  counterbusFcn(&rtb_COUNTERBUS, c_caller_DW.Delay_DSTATE[0], &rtb_CCaller4_o1,
                &rtb_CCaller4_o2);

  // Outport: '<Root>/Out5' incorporates:
  //   SignalConversion generated from: '<Root>/Bus Selector1'

  c_caller_Y.Out5 = rtb_CCaller4_o1.inputsignal.input;

  // Outport: '<Root>/Out6' incorporates:
  //   SignalConversion generated from: '<Root>/Bus Selector1'

  c_caller_Y.Out6 = rtb_CCaller4_o1.limits.upper_saturation_limit;

  // Outport: '<Root>/Out7' incorporates:
  //   SignalConversion generated from: '<Root>/Bus Selector1'

  c_caller_Y.Out7 = rtb_CCaller4_o1.limits.lower_saturation_limit;

  // Update for Sin: '<Root>/Sine Wave'
  rtb_SineWave1 = c_caller_DW.lastSin;
  c_caller_DW.lastSin = c_caller_DW.lastSin * c_caller_P.SineWave_HCos +
    c_caller_DW.lastCos * c_caller_P.SineWave_Hsin;
  c_caller_DW.lastCos = c_caller_DW.lastCos * c_caller_P.SineWave_HCos -
    rtb_SineWave1 * c_caller_P.SineWave_Hsin;

  // Update for Sin: '<Root>/Sine Wave1'
  rtb_SineWave1 = c_caller_DW.lastSin_o;
  c_caller_DW.lastSin_o = c_caller_DW.lastSin_o * c_caller_P.SineWave1_HCos +
    c_caller_DW.lastCos_d * c_caller_P.SineWave1_Hsin;
  c_caller_DW.lastCos_d = c_caller_DW.lastCos_d * c_caller_P.SineWave1_HCos -
    rtb_SineWave1 * c_caller_P.SineWave1_Hsin;

  // Update for Delay: '<Root>/Delay1'
  c_caller_DW.icLoad = 0U;
  c_caller_DW.Delay1_DSTATE = rtb_CCaller2;

  // Update for Delay: '<Root>/Delay'
  c_caller_DW.Delay_DSTATE[0] = c_caller_DW.Delay_DSTATE[1];
  c_caller_DW.Delay_DSTATE[1] = rtb_CCaller4_o2;

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.1, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.

  c_caller_M->Timing.clockTick0++;
}

// Model initialize function
void c_caller_initialize(void)
{
  {
    static const char_T tmp[5] = { '/', 's', 'i', 'n', 'e' };

    int32_T i;
    char_T b_zeroDelimTopic[6];

    // InitializeConditions for Delay: '<Root>/Delay1'
    c_caller_DW.icLoad = 1U;

    // InitializeConditions for Delay: '<Root>/Delay'
    c_caller_DW.Delay_DSTATE[0] = c_caller_P.Delay_InitialCondition;
    c_caller_DW.Delay_DSTATE[1] = c_caller_P.Delay_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    c_caller_DW.obj.matlabCodegenIsDeleted = false;
    c_caller_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[5] = '\x00';
    Pub_c_caller_113.createPublisher(&b_zeroDelimTopic[0], 1);
    c_caller_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // Enable for Sin: '<Root>/Sine Wave'
    c_caller_DW.systemEnable = 1;

    // Enable for Sin: '<Root>/Sine Wave1'
    c_caller_DW.systemEnable_i = 1;
  }
}

// Model terminate function
void c_caller_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!c_caller_DW.obj.matlabCodegenIsDeleted) {
    c_caller_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//

/* Include files */

#include "modelInterface.h"
#include "m_2ZkNcPL0V4JMTCGGD8lwNH.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);
static void c_slcc_cov_call_counterbusFcn_chpEfWVJEHOHjhsQohy3w_Special_by_s
  (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance, const COUNTERBUS *b_u1,
   int32_T u2, COUNTERBUS *c_y1, int32_T *y2);
static void init_simulink_io_address(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance)
{
  init_simulink_io_address(moduleInstance);
  cgxertSetSimStateCompliance(moduleInstance->S, 2);
}

static void cgxe_mdl_initialize(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_outputs(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  COUNTERBUS b_local;
  COUNTERBUS local;
  local.inputsignal.input = *(int32_T *)&((char_T *)(SIGNALBUS *)&((char_T *)
    moduleInstance->u0)[0])[0];
  local.limits.upper_saturation_limit = *(int32_T *)&((char_T *)(LIMITBUS *)
    &((char_T *)moduleInstance->u0)[8])[0];
  local.limits.lower_saturation_limit = *(int32_T *)&((char_T *)(LIMITBUS *)
    &((char_T *)moduleInstance->u0)[8])[4];
  c_slcc_cov_call_counterbusFcn_chpEfWVJEHOHjhsQohy3w_Special_by_s
    (moduleInstance, &local, *moduleInstance->u1, &b_local, moduleInstance->b_y1);
  *(int32_T *)&((char_T *)(SIGNALBUS *)&((char_T *)moduleInstance->b_y0)[0])[0] =
    b_local.inputsignal.input;
  *(int32_T *)&((char_T *)(LIMITBUS *)&((char_T *)moduleInstance->b_y0)[8])[0] =
    b_local.limits.upper_saturation_limit;
  *(int32_T *)&((char_T *)(LIMITBUS *)&((char_T *)moduleInstance->b_y0)[8])[4] =
    b_local.limits.lower_saturation_limit;
}

static void cgxe_mdl_update(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void c_slcc_cov_call_counterbusFcn_chpEfWVJEHOHjhsQohy3w_Special_by_s
  (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance, const COUNTERBUS *b_u1,
   int32_T u2, COUNTERBUS *c_y1, int32_T *y2)
{
  counterbusFcn_chpEfWVJEHOHjhsQohy3w(b_u1, u2, c_y1, y2);
  slcovUploadCoverageSynthesisBySimstruct(moduleInstance->S);
}

static void init_simulink_io_address(InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (COUNTERBUS *)cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->u1 = (int32_T *)cgxertGetInputPortSignal(moduleInstance->S, 1);
  moduleInstance->b_y0 = (COUNTERBUS *)cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (int32_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
}

/* CGXE Glue Code */
static void mdlOutputs_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S, int_T tid)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S, int_T tid)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S)
{
  InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *moduleInstance =
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH *)calloc(1, sizeof
    (InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_2ZkNcPL0V4JMTCGGD8lwNH);
  ssSetmdlInitializeConditions(S, mdlInitialize_2ZkNcPL0V4JMTCGGD8lwNH);
  ssSetmdlUpdate(S, mdlUpdate_2ZkNcPL0V4JMTCGGD8lwNH);
  ssSetmdlTerminate(S, mdlTerminate_2ZkNcPL0V4JMTCGGD8lwNH);
  ssSetmdlEnable(S, mdlEnable_2ZkNcPL0V4JMTCGGD8lwNH);
  ssSetmdlDisable(S, mdlDisable_2ZkNcPL0V4JMTCGGD8lwNH);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S)
{
}

void method_dispatcher_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_2ZkNcPL0V4JMTCGGD8lwNH(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_2ZkNcPL0V4JMTCGGD8lwNH(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: 2ZkNcPL0V4JMTCGGD8lwNH.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_2ZkNcPL0V4JMTCGGD8lwNH_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_1);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_2 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_2);
  mxSetCell(mxBIArgs,1,elem_2);
  elem_3 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_3);
  return mxBIArgs;
}

mxArray *cgxe_2ZkNcPL0V4JMTCGGD8lwNH_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleFunction");
  mxArray* incompatibleSymbol = mxCreateString("counterbusFcn");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}

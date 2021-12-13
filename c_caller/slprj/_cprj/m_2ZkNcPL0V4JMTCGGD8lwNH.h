#ifndef __2ZkNcPL0V4JMTCGGD8lwNH_h__
#define __2ZkNcPL0V4JMTCGGD8lwNH_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH
#define typedef_InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH

typedef struct {
  SimStruct *S;
  void *emlrtRootTLSGlobal;
  COUNTERBUS *u0;
  int32_T *u1;
  COUNTERBUS *b_y0;
  int32_T *b_y1;
} InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH;

#endif                                 /*typedef_InstanceStruct_2ZkNcPL0V4JMTCGGD8lwNH*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_2ZkNcPL0V4JMTCGGD8lwNH(SimStruct *S, int_T method,
  void* data);

#endif

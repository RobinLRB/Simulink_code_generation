/* Include files */

#include "c_caller_cgxe.h"
#include "m_2ZkNcPL0V4JMTCGGD8lwNH.h"

unsigned int cgxe_c_caller_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 1302887268 &&
      ssGetChecksum1(S) == 1113650210 &&
      ssGetChecksum2(S) == 1259519024 &&
      ssGetChecksum3(S) == 1428502754) {
    method_dispatcher_2ZkNcPL0V4JMTCGGD8lwNH(S, method, data);
    return 1;
  }

  return 0;
}

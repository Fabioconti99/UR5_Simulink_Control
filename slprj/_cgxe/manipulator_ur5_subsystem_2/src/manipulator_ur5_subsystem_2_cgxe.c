/* Include files */

#include "manipulator_ur5_subsystem_2_cgxe.h"
#include "m_qEImTD3VfNXfF3LhJQJopB.h"

unsigned int cgxe_manipulator_ur5_subsystem_2_method_dispatcher(SimStruct* S,
  int_T method, void* data)
{
  if (ssGetChecksum0(S) == 2542787233 &&
      ssGetChecksum1(S) == 4015142388 &&
      ssGetChecksum2(S) == 736391328 &&
      ssGetChecksum3(S) == 1606345319) {
    method_dispatcher_qEImTD3VfNXfF3LhJQJopB(S, method, data);
    return 1;
  }

  return 0;
}

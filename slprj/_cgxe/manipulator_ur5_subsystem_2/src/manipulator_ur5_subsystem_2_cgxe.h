#ifndef __manipulator_ur5_subsystem_2_cgxe_h__
#define __manipulator_ur5_subsystem_2_cgxe_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "emlrt.h"
#include "covrt.h"
#include "cgxert.h"
#include "cgxeooprt.h"
#include "slccrt.h"
#include "blas.h"
#include "collisioncodegen_api.hpp"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtInfF                         ((real32_T)mxGetInf())
#define rtMinusInfF                    (-(real32_T)mxGetInf())
#define rtNaNF                         ((real32_T)mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

extern unsigned int cgxe_manipulator_ur5_subsystem_2_method_dispatcher(SimStruct*
  S, int_T method, void* data);

#endif

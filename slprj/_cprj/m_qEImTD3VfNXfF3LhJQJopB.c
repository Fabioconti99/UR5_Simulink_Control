/* Include files */

#include "modelInterface.h"
#include "m_qEImTD3VfNXfF3LhJQJopB.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 20,    /* lineNo */
  "GravityTorqueBlock",                /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GravityTorqueBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 7,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 21,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 33,  /* lineNo */
  "GravityTorqueBlock",                /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GravityTorqueBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 187, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 194, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 203, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 184, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 1234,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 96,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 106, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 140, /* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 27,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 45,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 52,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 35,  /* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 145, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 163, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 23, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 28, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 41, /* lineNo */
  "GravityTorqueBlock",                /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GravityTorqueBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 146,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 152,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 159,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 188,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 189,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 191,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 422,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 511,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 395,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 398,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 23, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 39, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/axang2rotm.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/+robotics/+internal/normalizeRows.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 22, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/axang2rotm.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/+robotics/+internal/+validation/validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 92, /* lineNo */
  "validateattributes",                /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/eml/+coder/+internal/matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 173,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionGeometry.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 275, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 51,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 33,    /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 130, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 130, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 131, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 136, /* lineNo */
  26,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 139,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 145,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 156, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  156,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 156, /* lineNo */
  33,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  156,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 157, /* lineNo */
  34,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  157,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 157, /* lineNo */
  39,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  157,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 158, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  158,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 158, /* lineNo */
  41,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  158,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 171, /* lineNo */
  51,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  83,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 187,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  193,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 198, /* lineNo */
  45,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 198, /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 194, /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  194,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 194, /* lineNo */
  30,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  194,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  194,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 132, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 133, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 135, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 0,  /* iFirst */
  9,                                   /* iLast */
  146,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 0,  /* iFirst */
  9,                                   /* iLast */
  188,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 188, /* lineNo */
  41,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 0,  /* iFirst */
  9,                                   /* iLast */
  196,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 196, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 0,  /* iFirst */
  9,                                   /* iLast */
  189,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 189, /* lineNo */
  46,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 0,  /* iFirst */
  9,                                   /* iLast */
  191,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 191, /* lineNo */
  48,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  166,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  178,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  162,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "/Applications/MATLAB_R2022a.app/toolbox/shared/robotics/robotutils/axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo bc_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 275,/* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2022a.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj);
static void GravityTorqueBlock_setupImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj);
static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0);
static boolean_T b_strcmp(emxArray_char_T *a);
static boolean_T c_strcmp(emxArray_char_T *a);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *m_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *n_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *o_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void RigidBodyTree_set_Gravity(robotics_manip_internal_RigidBodyTree *obj);
static robotics_manip_internal_RigidBody *p_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void mw__internal__call__reset(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance, const emlrtStack *sp, real_T b_u0[6], real_T c_y0[6]);
static void GravityTorqueBlock_stepImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj, real_T q[6], real_T
  jointTorq[6]);
static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static boolean_T d_strcmp(emxArray_char_T *a);
static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3]);
static real_T sumColumnB(real_T x[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b[9]);
static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void tforminv(real_T T[16], real_T Tinv[16]);
static void tformToSpatialXform(real_T T[16], real_T X[36]);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void b_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[2],
                     real_T C[6]);
static void dynamic_size_checks(const emlrtStack *sp, int32_T b_size[1], int32_T
  innerDimA, int32_T innerDimB);
static void c_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[1],
                     real_T C[6]);
static void crossMotion(real_T v[6], real_T motionVec[6], real_T motionVecDot[6]);
static void crossForce(real_T v[6], real_T forceVec[6], real_T forceVecDot[6]);
static void d_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_unnamed_struct(emxArray_unnamed_struct **pEmxArray, int32_T
  numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[20]);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxFree_unnamed_struct(emxArray_unnamed_struct **pEmxArray);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[20]);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_unnamed_struc(emxArray_unnamed_struct *emxArray,
  int32_T oldNumel);
static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel);
static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T numDimensions);
static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void init_simulink_io_address(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, (const char_T *)
    "EMLRT:runTime:MexFunctionNeedsLicense", (const char_T *)
    "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->b_y0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance)
{
  int32_T i;
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
  for (i = 0; i < 20; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].
      CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal._pobj0.matlabCodegenIsDeleted
    = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance)
{
  void* geometryInternal;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry *obj;
  int32_T i;
  st.site = NULL;
  obj = &moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal._pobj0;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &yb_emlrtRSI;
    c_st.site = &ac_emlrtRSI;
    geometryInternal = obj->CollisionPrimitive;
    collisioncodegen_destructGeometry(&geometryInternal);
  }

  for (i = 0; i < 20; i++) {
    st.site = NULL;
    obj = &moduleInstance->sysobj.TreeInternal._pobj0[i].
      CollisionsInternal._pobj0;
    if (!obj->matlabCodegenIsDeleted) {
      obj->matlabCodegenIsDeleted = true;
      b_st.site = &yb_emlrtRSI;
      c_st.site = &ac_emlrtRSI;
      geometryInternal = obj->CollisionPrimitive;
      collisioncodegen_destructGeometry(&geometryInternal);
    }
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__call__setup(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static void SystemCore_setup(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((void *)sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((void *)sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((void *)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  GravityTorqueBlock_setupImpl(&st, obj);
}

static void GravityTorqueBlock_setupImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj)
{
  static int8_T iv[20] = { 0, 0, 1, 2, 3, 4, 5, 6, 0, 0, -1, -1, 1, 2, 3, 4, 5,
    6, -1, -1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &i_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  obj->TreeInternal.NumBodies = 10.0;
  b_st.site = &m_emlrtRSI;
  RigidBodyTree_defaultInitializeBodiesCellArray(&b_st, &obj->TreeInternal,
    &obj->TreeInternal._pobj0[0]);
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[0] = f_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[10]);
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[1] = g_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[11]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[2] = h_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[12]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[3] = i_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[13]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[4] = j_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[14]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[5] = k_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[15]);
  obj->TreeInternal.Bodies[5]->Index = 6.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[6] = l_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[16]);
  obj->TreeInternal.Bodies[6]->Index = 7.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[7] = m_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[17]);
  obj->TreeInternal.Bodies[7]->Index = 8.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[8] = n_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[18]);
  obj->TreeInternal.Bodies[8]->Index = 9.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[9] = o_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[19]);
  obj->TreeInternal.Bodies[9]->Index = 10.0;
  b_st.site = &k_emlrtRSI;
  RigidBodyTree_set_Gravity(&obj->TreeInternal);
  for (i = 0; i < 20; i++) {
    obj->TreeInternal.PositionDoFMap[i] = (real_T)iv[i];
  }

  for (i = 0; i < 20; i++) {
    obj->TreeInternal.VelocityDoFMap[i] = (real_T)iv[i];
  }

  b_st.site = &l_emlrtRSI;
  p_RigidBody_RigidBody(&b_st, &obj->TreeInternal.Base);
  obj->TreeInternal.Base.Index = 0.0;
}

static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0)
{
  static char_T b_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2'
  };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T c_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3'
  };

  static char_T d_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4'
  };

  static char_T e_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5'
  };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[0].NameInternal->size[0] * iobj_0[0].NameInternal->size[1];
  iobj_0[0].NameInternal->size[0] = 1;
  iobj_0[0].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[0].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[0].NameInternal->data[i] = bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  i = iobj_0[0].JointInternal.Type->size[0] * iobj_0[0].JointInternal.Type->
    size[1];
  iobj_0[0].JointInternal.Type->size[0] = 1;
  iobj_0[0].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[0].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[0].JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[0].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[0].JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = iobj_0[0].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[0].JointInternal.MotionSubspace->size[0] * iobj_0[0].
    JointInternal.MotionSubspace->size[1];
  iobj_0[0].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[0].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[0].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[0].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[0].Index = -1.0;
  iobj_0[0].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[0].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[0].CollisionsInternal);
  obj->Bodies[0] = &iobj_0[0];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[1].NameInternal->size[0] * iobj_0[1].NameInternal->size[1];
  iobj_0[1].NameInternal->size[0] = 1;
  iobj_0[1].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[1].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[1].NameInternal->data[i] = b_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  i = iobj_0[1].JointInternal.Type->size[0] * iobj_0[1].JointInternal.Type->
    size[1];
  iobj_0[1].JointInternal.Type->size[0] = 1;
  iobj_0[1].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[1].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[1].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[1].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[1].JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = iobj_0[1].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[1].JointInternal.MotionSubspace->size[0] * iobj_0[1].
    JointInternal.MotionSubspace->size[1];
  iobj_0[1].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[1].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[1].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[1].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[1].Index = -1.0;
  iobj_0[1].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[1].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[1].CollisionsInternal);
  obj->Bodies[1] = &iobj_0[1];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[2].NameInternal->size[0] * iobj_0[2].NameInternal->size[1];
  iobj_0[2].NameInternal->size[0] = 1;
  iobj_0[2].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[2].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[2].NameInternal->data[i] = c_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  i = iobj_0[2].JointInternal.Type->size[0] * iobj_0[2].JointInternal.Type->
    size[1];
  iobj_0[2].JointInternal.Type->size[0] = 1;
  iobj_0[2].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[2].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[2].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[2].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[2].JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = iobj_0[2].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[2].JointInternal.MotionSubspace->size[0] * iobj_0[2].
    JointInternal.MotionSubspace->size[1];
  iobj_0[2].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[2].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[2].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[2].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[2].Index = -1.0;
  iobj_0[2].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[2].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[2].CollisionsInternal);
  obj->Bodies[2] = &iobj_0[2];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[3].NameInternal->size[0] * iobj_0[3].NameInternal->size[1];
  iobj_0[3].NameInternal->size[0] = 1;
  iobj_0[3].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[3].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[3].NameInternal->data[i] = d_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  i = iobj_0[3].JointInternal.Type->size[0] * iobj_0[3].JointInternal.Type->
    size[1];
  iobj_0[3].JointInternal.Type->size[0] = 1;
  iobj_0[3].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[3].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[3].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[3].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[3].JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = iobj_0[3].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[3].JointInternal.MotionSubspace->size[0] * iobj_0[3].
    JointInternal.MotionSubspace->size[1];
  iobj_0[3].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[3].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[3].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[3].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[3].Index = -1.0;
  iobj_0[3].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[3].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[3].CollisionsInternal);
  obj->Bodies[3] = &iobj_0[3];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[4].NameInternal->size[0] * iobj_0[4].NameInternal->size[1];
  iobj_0[4].NameInternal->size[0] = 1;
  iobj_0[4].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[4].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[4].NameInternal->data[i] = e_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  i = iobj_0[4].JointInternal.Type->size[0] * iobj_0[4].JointInternal.Type->
    size[1];
  iobj_0[4].JointInternal.Type->size[0] = 1;
  iobj_0[4].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[4].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[4].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[4].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[4].JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = iobj_0[4].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[4].JointInternal.MotionSubspace->size[0] * iobj_0[4].
    JointInternal.MotionSubspace->size[1];
  iobj_0[4].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[4].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[4].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[4].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[4].Index = -1.0;
  iobj_0[4].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[4].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[4].CollisionsInternal);
  obj->Bodies[4] = &iobj_0[4];
  st.site = &n_emlrtRSI;
  obj->Bodies[5] = RigidBody_RigidBody(&st, &iobj_0[5]);
  st.site = &n_emlrtRSI;
  obj->Bodies[6] = b_RigidBody_RigidBody(&st, &iobj_0[6]);
  st.site = &n_emlrtRSI;
  obj->Bodies[7] = c_RigidBody_RigidBody(&st, &iobj_0[7]);
  st.site = &n_emlrtRSI;
  obj->Bodies[8] = d_RigidBody_RigidBody(&st, &iobj_0[8]);
  st.site = &n_emlrtRSI;
  obj->Bodies[9] = e_RigidBody_RigidBody(&st, &iobj_0[9]);
}

static boolean_T b_strcmp(emxArray_char_T *a)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *a)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj)
{
  void* defaultCollisionObj_GeometryInternal;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_unnamed_struct *r;
  robotics_manip_internal_CollisionGeometry *c_obj;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  emxInit_unnamed_struct(&r, 2);
  b_obj = obj;
  st.site = &t_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  b_obj->MaxElements = 0.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &b_emlrtDCI, (void *)sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &emlrtDCI, (void *)sp);
  emxEnsureCapacity_unnamed_struc(r, i);
  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = r->size[0];
  b_obj->CollisionGeometries->size[1] = r->size[1];
  emxEnsureCapacity_unnamed_struc(b_obj->CollisionGeometries, i);
  defaultCollisionObj_GeometryInternal = 0;
  st.site = &u_emlrtRSI;
  c_obj = &b_obj->_pobj0;
  b_st.site = &w_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  b_obj->_pobj0.CollisionPrimitive = defaultCollisionObj_GeometryInternal;
  b_obj->_pobj0.matlabCodegenIsDeleted = false;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (void *)sp);
  emxFree_unnamed_struct(&r);
  for (b_i = 0; b_i <= i; b_i++) {
    st.site = &v_emlrtRSI;
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &emlrtBCI, (void *)sp)] = c_obj;
  }

  return b_obj;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '7' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '8' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '9' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[11] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1',
    '0' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 11;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 11; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.00443333156, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.00443333156, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0072, -0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 4.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 4.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.0, 4.0 };

  static char_T cv[9] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 9;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 9; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 0.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { -1.0, 2.0682310711021444E-13, -0.0, 0.0,
    -2.0682310711021444E-13, -1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T cv[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 4; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.010267495893, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.010267495893, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.00666, -0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 3.7, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 3.7, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.0, 3.7 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.089159, 1.0 };

  static char_T cv[13] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', '_', 'l', 'i',
    'n', 'k' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 13;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 13; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.88490187591000014, 0.0, 0.0, 0.0,
    -2.3500400000000004, 0.0, 0.0, 0.88490187591000014, 0.0, 2.3500400000000004,
    0.0, -0.0, 0.0, 0.0, 0.0151074, -0.0, 0.0, 0.0, 0.0, 2.3500400000000004,
    -0.0, 8.393, 0.0, 0.0, -2.3500400000000004, 0.0, 0.0, 0.0, 8.393, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 8.393 };

  static real_T dv1[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.13585, 0.0, 1.0 };

  static char_T cv[14] = { 'u', 'p', 'p', 'e', 'r', '_', 'a', 'r', 'm', '_', 'l',
    'i', 'n', 'k' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 1, 0, 0, 0, 0 };

  static int8_T iv2[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 14; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv5[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.19163081355599998, 0.0, 0.0, 0.0, -0.56875, 0.0,
    0.0, 0.19163081355599998, 0.0, 0.56875, 0.0, -0.0, 0.0, 0.0, 0.004095, -0.0,
    0.0, 0.0, 0.0, 0.56875, -0.0, 2.275, 0.0, 0.0, -0.56875, 0.0, 0.0, 0.0,
    2.275, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 2.275 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, -0.1197, 0.425, 1.0 };

  static char_T cv[12] = { 'f', 'o', 'r', 'e', 'a', 'r', 'm', '_', 'l', 'i', 'n',
    'k' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 1, 0, 0, 0, 0 };

  static int8_T iv2[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 12;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 12; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 4.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv5[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.111172755531, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.111172755531, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.21942, -0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 1.219, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.219, 0.0, 0.0, -0.0, 0.0,
    0.0, 0.0, 1.219 };

  static real_T dv1[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.39225, 1.0 };

  static char_T cv[12] = { 'w', 'r', 'i', 's', 't', '_', '1', '_', 'l', 'i', 'n',
    'k' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 1, 0, 0, 0, 0 };

  static int8_T iv2[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 12;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 12; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv5[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.111172755531, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.111172755531, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.21942, -0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 1.219, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.219, 0.0, 0.0, -0.0, 0.0,
    0.0, 0.0, 1.219 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.093, 0.0, 1.0 };

  static char_T cv[12] = { 'w', 'r', 'i', 's', 't', '_', '2', '_', 'l', 'i', 'n',
    'k' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 12;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 12; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 6.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *m_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.0171364731454, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.0171364731454, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.033822, -0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, 0.1879, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.1879, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 0.1879 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.09465, 1.0 };

  static char_T cv[12] = { 'w', 'r', 'i', 's', 't', '_', '3', '_', 'l', 'i', 'n',
    'k' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 1, 0, 0, 0, 0 };

  static int8_T iv2[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 12;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 12; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 7.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv5[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *n_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 4.8965888601467475E-12, 1.0, -0.0, 0.0, -1.0,
    4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0823, 0.0, 1.0
  };

  static char_T cv[7] = { 'e', 'e', '_', 'l', 'i', 'n', 'k' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 7;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 7; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 8.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static robotics_manip_internal_RigidBody *o_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, -0.0, 4.8965888601467475E-12,
    -1.0, 0.0, 0.0, 1.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0823, 0.0, 1.0 };

  static char_T cv[5] = { 't', 'o', 'o', 'l', '0' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 8.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static void RigidBodyTree_set_Gravity(robotics_manip_internal_RigidBodyTree *obj)
{
  static real_T dv[3] = { 0.0, 0.0, -9.81 };

  int32_T i;
  for (i = 0; i < 3; i++) {
    obj->Gravity[i] = dv[i];
  }
}

static robotics_manip_internal_RigidBody *p_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T cv[5] = { 'w', 'o', 'r', 'l', 'd' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &ab_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  st.site = &y_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  return b_obj;
}

static void mw__internal__call__reset(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &bb_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance, const emlrtStack *sp, real_T b_u0[6], real_T c_y0[6])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  robotics_slmanip_internal_block_GravityTorqueBlock *obj;
  real_T varargout_1[6];
  int32_T i;
  char_T u[45];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &cb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  GravityTorqueBlock_stepImpl(&b_st, obj, b_u0, varargout_1);
  for (i = 0; i < 6; i++) {
    c_y0[i] = varargout_1[i];
  }
}

static void GravityTorqueBlock_stepImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj, real_T q[6], real_T
  jointTorq[6])
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T d_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emlrtStack *b_sp;
  emxArray_cell_wrap *X;
  emxArray_cell_wrap *Xtree;
  emxArray_real_T *aB;
  emxArray_real_T *b_S;
  emxArray_real_T *f;
  emxArray_real_T *taui;
  emxArray_real_T *vB;
  emxArray_real_T *vJ;
  emxArray_real_T *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  rigidBodyJoint *r;
  robotics_manip_internal_RigidBodyTree *robot;
  real_T XDHOffset[36];
  real_T b_Xtree[36];
  real_T T[16];
  real_T TDHOffset[16];
  real_T dv[16];
  real_T a0[6];
  real_T b_data[6];
  real_T q_data[6];
  real_T qddoti_data[6];
  real_T a[2];
  real_T b[2];
  real_T c_i;
  real_T d;
  real_T nb;
  real_T pid;
  int32_T b_size[2];
  int32_T q_size[1];
  int32_T qddoti_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T k;
  int32_T loop_ub;
  char_T b_u[45];
  char_T u[15];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &db_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  robot = &obj->TreeInternal;
  for (i = 0; i < 3; i++) {
    a0[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    a0[i + 3] = -obj->TreeInternal.Gravity[i];
  }

  emxInit_real_T(&vJ, 2);
  nb = obj->TreeInternal.NumBodies;
  d = emlrtNonNegativeCheckR2012b(nb, &c_emlrtDCI, &st);
  emlrtIntegerCheckR2012b(d, &d_emlrtDCI, &st);
  emlrtIntegerCheckR2012b(nb, &e_emlrtDCI, &st);
  i = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  vJ->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &r_emlrtDCI, &st);
  emxEnsureCapacity_real_T(vJ, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &r_emlrtDCI, &st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    vJ->data[i] = 0.0;
  }

  emxInit_real_T(&vB, 2);
  i = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &s_emlrtDCI, &st);
  emxEnsureCapacity_real_T(vB, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &s_emlrtDCI, &st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    vB->data[i] = 0.0;
  }

  emxInit_real_T(&aB, 2);
  i = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &t_emlrtDCI, &st);
  emxEnsureCapacity_real_T(aB, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &t_emlrtDCI, &st) - 1;
  for (i = 0; i <= loop_ub; i++) {
    aB->data[i] = 0.0;
  }

  emlrtIntegerCheckR2012b(nb, &f_emlrtDCI, &st);
  for (b_i = 0; b_i < 6; b_i++) {
    jointTorq[b_i] = 0.0;
  }

  emxInit_cell_wrap(&X, 2);
  emxInit_cell_wrap(&Xtree, 2);
  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &b_emlrtRTEI, &st);
  i1 = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap(Xtree, i1);
  i1 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap(X, i1);
  for (k = 0; k <= i; k++) {
    loop_ub = Xtree->size[1] - 1;
    for (i1 = 0; i1 < 36; i1++) {
      Xtree->data[emlrtDynamicBoundsCheckR2012b(k, 0, loop_ub, &mb_emlrtBCI, &st)]
        .f1[i1] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      i1 = Xtree->size[1] - 1;
      i1 = emlrtDynamicBoundsCheckR2012b(k, 0, i1, &kb_emlrtBCI, &st);
      Xtree->data[i1].f1[loop_ub + 6 * loop_ub] = 1.0;
    }

    loop_ub = X->size[1] - 1;
    for (i1 = 0; i1 < 36; i1++) {
      X->data[emlrtDynamicBoundsCheckR2012b(k, 0, loop_ub, &nb_emlrtBCI, &st)].
        f1[i1] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      i1 = X->size[1] - 1;
      i1 = emlrtDynamicBoundsCheckR2012b(k, 0, i1, &lb_emlrtBCI, &st);
      X->data[i1].f1[loop_ub + 6 * loop_ub] = 1.0;
    }
  }

  emxInit_real_T(&f, 2);
  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &c_emlrtRTEI, &st);
  i1 = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = (int32_T)nb;
  emxEnsureCapacity_real_T(f, i1);
  emxInit_real_T(&b_S, 2);
  emxInit_real_T(&y, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    b_st.site = &eb_emlrtRSI;
    RigidBody_get_Joint(&b_st, robot->Bodies[emlrtDynamicBoundsCheckR2012b(b_i,
      0, 9, &ob_emlrtBCI, &st)]);
    b_st.site = &eb_emlrtRSI;
    b_sp = &b_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
    i1 = 6 * r->MotionSubspace->size[1];
    i2 = b_S->size[0] * b_S->size[1];
    b_S->size[0] = 6;
    c_st.site = &eb_emlrtRSI;
    b_sp = &c_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
    b_S->size[1] = r->MotionSubspace->size[1];
    emxEnsureCapacity_real_T(b_S, i2);
    loop_ub = i1 - 1;
    d_st.site = &eb_emlrtRSI;
    b_sp = &d_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_S->data[i1] = r->MotionSubspace->data[i1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      a[i1] = robot->PositionDoFMap[b_i + 10 * i1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      b[i1] = robot->VelocityDoFMap[b_i + 10 * i1];
    }

    for (i1 = 0; i1 < 36; i1++) {
      XDHOffset[i1] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      XDHOffset[k + 6 * k] = 1.0;
    }

    if (a[1] < a[0]) {
      e_st.site = &fb_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&e_st, RigidBody_get_Joint(&e_st,
        robot->Bodies[b_i]), T);
      qddoti_size[0] = 1;
      qddoti_data[0] = 0.0;
      loop_ub = vJ->size[1];
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &h_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        vJ->data[i1 + 6 * b_i] = 0.0;
      }
    } else {
      if (a[0] > a[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(a[0], &g_emlrtDCI, &d_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &b_emlrtBCI, &d_st) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(a[1], &h_emlrtDCI, &d_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 6, &c_emlrtBCI, &d_st) - 1;
      }

      if (b[0] > b[1]) {
        k = 0;
        loop_ub = -1;
      } else {
        k = (int32_T)emlrtIntegerCheckR2012b(b[0], &i_emlrtDCI, &d_st);
        k = emlrtDynamicBoundsCheckR2012b(k, 1, 6, &d_emlrtBCI, &d_st) - 1;
        loop_ub = (int32_T)emlrtIntegerCheckR2012b(b[1], &j_emlrtDCI, &d_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 6, &e_emlrtBCI,
          &d_st) - 1;
      }

      b_size[0] = 1;
      b_size[1] = (loop_ub - k) + 1;
      loop_ub -= k;
      for (k = 0; k <= loop_ub; k++) {
        b_data[k] = 0.0;
      }

      if (b[0] > b[1]) {
        k = 0;
        loop_ub = -1;
      } else {
        k = (int32_T)emlrtIntegerCheckR2012b(b[0], &k_emlrtDCI, &d_st);
        k = emlrtDynamicBoundsCheckR2012b(k, 1, 6, &f_emlrtBCI, &d_st) - 1;
        loop_ub = (int32_T)emlrtIntegerCheckR2012b(b[1], &l_emlrtDCI, &d_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 6, &g_emlrtBCI,
          &d_st) - 1;
      }

      qddoti_size[0] = (loop_ub - k) + 1;
      loop_ub -= k;
      for (k = 0; k <= loop_ub; k++) {
        qddoti_data[k] = 0.0;
      }

      q_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        q_data[i2] = q[i1 + i2];
      }

      e_st.site = &gb_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&e_st, RigidBody_get_Joint(&e_st,
        robot->Bodies[b_i]), q_data, q_size, T);
      e_st.site = &hb_emlrtRSI;
      b_sp = &e_st;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
      for (i1 = 0; i1 < 16; i1++) {
        TDHOffset[i1] = r->ChildToJointTransform[i1];
      }

      tforminv(TDHOffset, dv);
      tformToSpatialXform(dv, XDHOffset);
      f_st.site = &lb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      f_st.site = &mb_emlrtRSI;
      if (y->size[1] != b_size[1]) {
        if (b_size[1] == 1) {
          for (i1 = 0; i1 < 45; i1++) {
            b_u[i1] = d_u[i1];
          }

          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&f_st, 45, m, &b_u[0]);
          emlrtAssign(&c_y, m);
          for (i1 = 0; i1 < 45; i1++) {
            b_u[i1] = d_u[i1];
          }

          e_y = NULL;
          m = emlrtCreateCharArray(2, &iv3[0]);
          emlrtInitCharArrayR2013a(&f_st, 45, m, &b_u[0]);
          emlrtAssign(&e_y, m);
          g_st.site = &dc_emlrtRSI;
          error(&g_st, c_y, getString(&g_st, b_message(&g_st, e_y, &g_emlrtMCI),
                 &g_emlrtMCI), &g_emlrtMCI);
        } else {
          for (i1 = 0; i1 < 15; i1++) {
            u[i1] = c_u[i1];
          }

          b_y = NULL;
          m = emlrtCreateCharArray(2, &iv[0]);
          emlrtInitCharArrayR2013a(&f_st, 15, m, &u[0]);
          emlrtAssign(&b_y, m);
          for (i1 = 0; i1 < 15; i1++) {
            u[i1] = c_u[i1];
          }

          d_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&f_st, 15, m, &u[0]);
          emlrtAssign(&d_y, m);
          g_st.site = &ec_emlrtRSI;
          error(&g_st, b_y, getString(&g_st, b_message(&g_st, d_y, &f_emlrtMCI),
                 &f_emlrtMCI), &f_emlrtMCI);
        }
      }

      loop_ub = vJ->size[1];
      f_st.site = &lb_emlrtRSI;
      b_mtimes(y, b_data, b_size, *(real_T (*)[6])&vJ->data[6 *
               (emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &vb_emlrtBCI,
                 &e_st) - 1)]);
    }

    loop_ub = X->size[1] - 1;
    tforminv(T, dv);
    tformToSpatialXform(dv, X->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
      loop_ub, &tb_emlrtBCI, &d_st)].f1);
    pid = robot->Bodies[b_i]->ParentIndex;
    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &fb_emlrtBCI, &d_st);
      i1 = vB->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(pid, &m_emlrtDCI, &d_st);
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, &d_st);
      i1 = vJ->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &i_emlrtBCI, &d_st);
      loop_ub = vB->size[1];
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &k_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * vB->data[i2 + 6 * ((int32_T)pid -
            1)];
        }

        b_data[i1] = vJ->data[i1 + 6 * (k - 1)] + d;
      }

      for (i1 = 0; i1 < 6; i1++) {
        vB->data[i1 + 6 * b_i] = b_data[i1];
      }

      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &hb_emlrtBCI, &d_st);
      i1 = aB->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, i1, &l_emlrtBCI, &d_st);
      e_st.site = &lb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      e_st.site = &mb_emlrtRSI;
      dynamic_size_checks(&e_st, qddoti_size, y->size[1], qddoti_size[0]);
      e_st.site = &lb_emlrtRSI;
      c_mtimes(y, qddoti_data, qddoti_size, q_data);
      i1 = vB->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &m_emlrtBCI, &d_st);
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &n_emlrtBCI, &d_st);
      crossMotion(*(real_T (*)[6])&vB->data[6 * (k - 1)], *(real_T (*)[6])&
                  vJ->data[6 * (loop_ub - 1)], qddoti_data);
      loop_ub = aB->size[1];
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &o_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * aB->data[i2 + 6 * ((int32_T)pid -
            1)];
        }

        b_data[i1] = (d + q_data[i1]) + qddoti_data[i1];
      }

      for (i1 = 0; i1 < 6; i1++) {
        aB->data[i1 + 6 * b_i] = b_data[i1];
      }

      i1 = Xtree->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, i1, &ib_emlrtBCI, &d_st);
      tformToSpatialXform(T, XDHOffset);
      loop_ub = Xtree->size[1] - 1;
      for (i1 = 0; i1 < 6; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          b_Xtree[i1 + 6 * i2] = 0.0;
          for (k = 0; k < 6; k++) {
            b_Xtree[i1 + 6 * i2] += Xtree->data[(int32_T)pid - 1].f1[i1 + 6 * k]
              * XDHOffset[k + 6 * i2];
          }
        }
      }

      memcpy(&Xtree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub,
              &wb_emlrtBCI, &d_st)].f1[0], &b_Xtree[0], 36U * sizeof(real_T));
    } else {
      i1 = vJ->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &p_emlrtBCI, &d_st);
      loop_ub = vB->size[1];
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &q_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        vB->data[i1 + 6 * b_i] = vJ->data[i1 + 6 * (k - 1)];
      }

      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &gb_emlrtBCI, &d_st);
      e_st.site = &lb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      e_st.site = &mb_emlrtRSI;
      dynamic_size_checks(&e_st, qddoti_size, y->size[1], qddoti_size[0]);
      e_st.site = &lb_emlrtRSI;
      c_mtimes(y, qddoti_data, qddoti_size, q_data);
      loop_ub = aB->size[1];
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &r_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * a0[i2];
        }

        aB->data[i1 + 6 * b_i] = d + q_data[i1];
      }

      loop_ub = Xtree->size[1] - 1;
      tformToSpatialXform(T, Xtree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        loop_ub, &ub_emlrtBCI, &d_st)].f1);
    }

    for (i1 = 0; i1 < 36; i1++) {
      XDHOffset[i1] = robot->Bodies[b_i]->SpatialInertia[i1];
    }

    i1 = vB->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &s_emlrtBCI, &d_st);
    i1 = Xtree->size[1] - 1;
    emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &jb_emlrtBCI, &d_st);
    i1 = aB->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &t_emlrtBCI, &d_st);
    i1 = vB->size[1];
    k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &u_emlrtBCI, &d_st);
    for (i1 = 0; i1 < 6; i1++) {
      b_data[i1] = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        pid = b_data[i1] + XDHOffset[i1 + 6 * i2] * vB->data[i2 + 6 * b_i];
        b_data[i1] = pid;
      }
    }

    crossForce(*(real_T (*)[6])&vB->data[6 * (k - 1)], b_data, qddoti_data);
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      q_data[i1] = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        d += XDHOffset[i1 + 6 * i2] * aB->data[i2 + 6 * b_i];
        pid = q_data[i1] + Xtree->data[b_i].f1[i2 + 6 * i1] * 0.0;
        q_data[i1] = pid;
      }

      b_data[i1] = d + qddoti_data[i1];
    }

    loop_ub = f->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub, &v_emlrtBCI, &d_st);
    for (i1 = 0; i1 < 6; i1++) {
      f->data[i1 + 6 * b_i] = b_data[i1] - q_data[i1];
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&aB);
  emxFree_real_T(&vB);
  emxFree_cell_wrap(&Xtree);
  i = (int32_T)-((-1.0 - nb) + 1.0) - 1;
  emlrtForLoopVectorCheckR2021a(nb, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-((-1.0
    - nb) + 1.0), &d_emlrtRTEI, &st);
  emxInit_real_T1(&taui, 1);
  for (b_i = 0; b_i <= i; b_i++) {
    c_i = nb + -(real_T)b_i;
    b_st.site = &ib_emlrtRSI;
    b_sp = &b_st;
    i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &u_emlrtDCI, &b_st) - 1;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1,
      0, 9, &pb_emlrtBCI, &b_st)]);
    if (!d_strcmp(r->Type)) {
      c_st.site = &jb_emlrtRSI;
      b_sp = &c_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &w_emlrtDCI, &c_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 9, &rb_emlrtBCI, &c_st)]);
      for (i1 = 0; i1 < 16; i1++) {
        TDHOffset[i1] = r->ChildToJointTransform[i1];
      }

      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &x_emlrtDCI, &c_st) - 1;
      d_st.site = &kb_emlrtRSI;
      RigidBody_get_Joint(&d_st, robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1,
        0, 9, &sb_emlrtBCI, &c_st)]);
      d_st.site = &kb_emlrtRSI;
      b_sp = &d_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &x_emlrtDCI, &d_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 9, &sb_emlrtBCI, &d_st)]);
      i1 = 6 * r->MotionSubspace->size[1];
      i2 = vJ->size[0] * vJ->size[1];
      vJ->size[0] = 6;
      e_st.site = &kb_emlrtRSI;
      b_sp = &e_st;
      k = (int32_T)emlrtIntegerCheckR2012b(c_i, &x_emlrtDCI, &e_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (k, 0, 9, &sb_emlrtBCI, &e_st)]);
      vJ->size[1] = r->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(vJ, i2);
      loop_ub = i1 - 1;
      f_st.site = &kb_emlrtRSI;
      b_sp = &f_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &x_emlrtDCI, &f_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 9, &sb_emlrtBCI, &f_st)]);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        vJ->data[i1] = r->MotionSubspace->data[i1];
      }

      tforminv(TDHOffset, dv);
      tformToSpatialXform(dv, XDHOffset);
      g_st.site = &lb_emlrtRSI;
      mtimes(XDHOffset, vJ, b_S);
      i1 = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &w_emlrtBCI, &f_st);
      g_st.site = &lb_emlrtRSI;
      d_mtimes(b_S, *(real_T (*)[6])&f->data[6 * ((int32_T)c_i - 1)], taui);
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, 10, &x_emlrtBCI, &f_st);
      for (i1 = 0; i1 < 2; i1++) {
        b[i1] = robot->VelocityDoFMap[((int32_T)c_i + 10 * i1) - 1];
      }

      if (b[0] > b[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(b[0], &p_emlrtDCI, &f_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &cb_emlrtBCI, &f_st) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(b[1], &q_emlrtDCI, &f_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 6, &db_emlrtBCI, &f_st) - 1;
      }

      k = taui->size[0];
      emlrtSubAssignSizeCheck1dR2017a((i2 - i1) + 1, k, &emlrtECI, &f_st);
      loop_ub = (i2 - i1) + 1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        jointTorq[i1 + i2] = taui->data[i2];
      }
    }

    i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &v_emlrtDCI, &b_st) - 1;
    pid = robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 9, &qb_emlrtBCI,
      &b_st)]->ParentIndex;
    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      i2 = (int32_T)emlrtIntegerCheckR2012b(c_i, &n_emlrtDCI, &b_st) - 1;
      emlrtDynamicBoundsCheckR2012b(i2, 0, i1, &eb_emlrtBCI, &b_st);
      i1 = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &ab_emlrtBCI, &b_st);
      loop_ub = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, loop_ub, &y_emlrtBCI, &b_st);
      loop_ub = f->size[1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(pid, &o_emlrtDCI, &b_st);
      emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &bb_emlrtBCI, &b_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[(int32_T)c_i - 1].f1[i2 + 6 * i1] * f->data[i2 + 6 *
            ((int32_T)c_i - 1)];
        }

        b_data[i1] = f->data[i1 + 6 * ((int32_T)pid - 1)] + d;
      }

      for (i1 = 0; i1 < 6; i1++) {
        f->data[i1 + 6 * ((int32_T)pid - 1)] = b_data[i1];
      }
    }
  }

  emxFree_real_T(&taui);
  emxFree_real_T(&b_S);
  emxFree_real_T(&f);
  emxFree_real_T(&vJ);
  emxFree_cell_wrap(&X);
}

static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T d_u[5] = { 'J', 'o', 'i', 'n', 't' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->Index == 0.0) {
    st.site = &nb_emlrtRSI;
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &cc_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  return &obj->JointInternal;
}

static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  real_T a[16];
  real_T b[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T b_v[3];
  real_T v[3];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  emxInit_char_T(&switch_expression, 2);
  st.site = &ob_emlrtRSI;
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (d_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &pb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &qb_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    d_st.site = &tb_emlrtRSI;
    normalizeRows(&d_st, v, b_v);
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    cat(b_v[0] * b_v[0] * 0.0 + 1.0, b_v[0] * b_v[1] * 0.0 - b_v[2] * 0.0, b_v[0]
        * b_v[2] * 0.0 + b_v[1] * 0.0, b_v[0] * b_v[1] * 0.0 + b_v[2] * 0.0,
        b_v[1] * b_v[1] * 0.0 + 1.0, b_v[1] * b_v[2] * 0.0 - b_v[0] * 0.0, b_v[0]
        * b_v[2] * 0.0 - b_v[1] * 0.0, b_v[1] * b_v[2] * 0.0 + b_v[0] * 0.0,
        b_v[2] * b_v[2] * 0.0 + 1.0, dv);
    permute(dv, dv1);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = dv1[loop_ub + 3 * i];
      }
    }

    b[15] = 1.0;
    break;

   default:
    b_st.site = &rb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b[i + 12] = v[i] * 0.0;
    }

    for (i = 0; i < 4; i++) {
      b[(i << 2) + 3] = (real_T)iv[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static boolean_T d_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T d_u[4] = { 's', 'q', 'r', 't' };

  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  real_T y[3];
  real_T b_y;
  int32_T k;
  char_T u[30];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    r1 = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&y[0], _mm_mul_pd(r, r1));
  }

  for (k = 2; k < 3; k++) {
    y[2] = matrix[2] * matrix[2];
  }

  b_y = sumColumnB(y);
  st.site = &ub_emlrtRSI;
  if (b_y < 0.0) {
    for (k = 0; k < 30; k++) {
      u[k] = b_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 30; k++) {
      u[k] = b_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&d_y, m);
    for (k = 0; k < 4; k++) {
      c_u[k] = d_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &bc_emlrtRSI;
    error(&b_st, c_y, getString(&b_st, message(&b_st, d_y, e_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  b_y = 1.0 / muDoubleScalarSqrt(b_y);
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&normRowMatrix[0], _mm_mul_pd(r, _mm_set1_pd(b_y)));
  }

  for (k = 2; k < 3; k++) {
    normRowMatrix[2] = matrix[2] * b_y;
  }
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void permute(real_T a[9], real_T b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 34 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T j_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T h_u[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 'r', 'o', 't', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T e_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T l_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T a[16];
  real_T b[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T result_data[4];
  real_T v[3];
  real_T cth;
  real_T sth;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T i_u[48];
  char_T c_u[45];
  char_T u[39];
  char_T g_u[34];
  char_T b_u[15];
  char_T k_u[5];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  emxInit_char_T(&switch_expression, 2);
  st.site = &ob_emlrtRSI;
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (d_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &pb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &gc_emlrtRSI;
      error(&b_st, y, getString(&b_st, b_message(&b_st, d_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    if (loop_ub - 1 >= 0) {
      memcpy(&result_data[3], &q_data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    b_st.site = &qb_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    d_st.site = &vb_emlrtRSI;
    e_st.site = &wb_emlrtRSI;
    f_st.site = &xb_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 34; i++) {
        g_u[i] = h_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&f_st, 34, m, &g_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 48; i++) {
        i_u[i] = j_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&f_st, 48, m, &i_u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        k_u[i] = l_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(&f_st, 5, m, &k_u[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&j_y, m);
      g_st.site = &fc_emlrtRSI;
      error(&g_st, g_y, getString(&g_st, c_message(&g_st, h_y, i_y, j_y,
              &e_emlrtMCI), &e_emlrtMCI), &e_emlrtMCI);
    }

    d_st.site = &tb_emlrtRSI;
    normalizeRows(&d_st, *(real_T (*)[3])&result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &xb_emlrtBCI, &c_st);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[0] * v[1] * (1.0 - cth) - v[2] * sth,
        v[0] * v[2] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[1] * v[2] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, dv);
    permute(dv, dv1);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = dv1[loop_ub + 3 * i];
      }
    }

    b[15] = 1.0;
    break;

   default:
    b_st.site = &rb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &mb_emlrtRSI;
    if (q_size[0] != 1) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          c_u[i] = f_u[i];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &c_u[0]);
        emlrtAssign(&c_y, m);
        for (i = 0; i < 45; i++) {
          c_u[i] = f_u[i];
        }

        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &c_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &dc_emlrtRSI;
        error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &g_emlrtMCI),
               &g_emlrtMCI), &g_emlrtMCI);
      } else {
        for (i = 0; i < 15; i++) {
          b_u[i] = e_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        for (i = 0; i < 15; i++) {
          b_u[i] = e_u[i];
        }

        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &b_u[0]);
        emlrtAssign(&e_y, m);
        c_st.site = &ec_emlrtRSI;
        error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &f_emlrtMCI),
               &f_emlrtMCI), &f_emlrtMCI);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b[i + 12] = v[i] * cth;
    }

    for (i = 0; i < 4; i++) {
      b[(i << 2) + 3] = (real_T)iv4[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void tforminv(real_T T[16], real_T Tinv[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  __m128d r;
  real_T R[9];
  real_T b_R[9];
  real_T c_R[3];
  int32_T i;
  int32_T i1;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 3 * i] = T[i + (i1 << 2)];
    }
  }

  for (i = 0; i <= 6; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&b_R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }

  for (i = 8; i < 9; i++) {
    b_R[8] = -R[8];
  }

  for (i = 0; i < 3; i++) {
    c_R[i] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      Tinv[i1 + (i << 2)] = R[i1 + 3 * i];
      c_R[i] += b_R[i + 3 * i1] * T[i1 + 12];
    }

    Tinv[i + 12] = c_R[i];
  }

  for (i = 0; i < 4; i++) {
    Tinv[(i << 2) + 3] = (real_T)iv[i];
  }
}

static void tformToSpatialXform(real_T T[16], real_T X[36])
{
  real_T R[9];
  real_T dv[9];
  real_T dv1[9];
  int32_T i;
  int32_T i1;
  int32_T i2;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 3 * i] = T[i1 + (i << 2)];
    }
  }

  dv[0] = 0.0;
  dv[3] = -T[14];
  dv[6] = T[13];
  dv[1] = T[14];
  dv[4] = 0.0;
  dv[7] = -T[12];
  dv[2] = -T[13];
  dv[5] = T[12];
  dv[8] = 0.0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      dv1[i + 3 * i1] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        dv1[i + 3 * i1] += dv[i + 3 * i2] * R[i2 + 3 * i1];
      }

      X[i1 + 6 * i] = R[i1 + 3 * i];
      X[i1 + 6 * (i + 3)] = 0.0;
    }
  }

  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      X[(i1 + 6 * i) + 3] = dv1[i1 + 3 * i];
      X[(i1 + 6 * (i + 3)) + 3] = R[i1 + 3 * i];
    }
  }
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[2],
                     real_T C[6])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[1] == 0) || (B_size[1] == 0)) {
    for (i = 0; i < 6; i++) {
      C[i] = 0.0;
    }
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)1;
    ldc_t = (ptrdiff_t)6;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

static void dynamic_size_checks(const emlrtStack *sp, int32_T b_size[1], int32_T
  innerDimA, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T d_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (b_size[0] == 1) {
      for (i = 0; i < 45; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((void *)sp, 45, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        b_u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((void *)sp, 45, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &dc_emlrtRSI;
      error(&st, b_y, getString(&st, b_message(&st, d_y, &g_emlrtMCI),
             &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        u[i] = c_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((void *)sp, 15, m, &u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        u[i] = c_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((void *)sp, 15, m, &u[0]);
      emlrtAssign(&c_y, m);
      st.site = &ec_emlrtRSI;
      error(&st, y, getString(&st, b_message(&st, c_y, &f_emlrtMCI), &f_emlrtMCI),
            &f_emlrtMCI);
    }
  }
}

static void c_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[1],
                     real_T C[6])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[1] == 0) || (B_size[0] == 0)) {
    for (i = 0; i < 6; i++) {
      C[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)6;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

static void crossMotion(real_T v[6], real_T motionVec[6], real_T motionVecDot[6])
{
  real_T b_sc1[36];
  real_T sc1[9];
  int32_T i;
  int32_T i1;
  sc1[0] = 0.0;
  sc1[3] = -v[2];
  sc1[6] = v[1];
  sc1[1] = v[2];
  sc1[4] = 0.0;
  sc1[7] = -v[0];
  sc1[2] = -v[1];
  sc1[5] = v[0];
  sc1[8] = 0.0;
  b_sc1[3] = 0.0;
  b_sc1[9] = -v[5];
  b_sc1[15] = v[4];
  b_sc1[4] = v[5];
  b_sc1[10] = 0.0;
  b_sc1[16] = -v[3];
  b_sc1[5] = -v[4];
  b_sc1[11] = v[3];
  b_sc1[17] = 0.0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_sc1[i1 + 6 * i] = sc1[i1 + 3 * i];
      b_sc1[i1 + 6 * (i + 3)] = 0.0;
      b_sc1[(i1 + 6 * (i + 3)) + 3] = sc1[i1 + 3 * i];
    }
  }

  for (i = 0; i < 6; i++) {
    motionVecDot[i] = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      motionVecDot[i] += b_sc1[i + 6 * i1] * motionVec[i1];
    }
  }
}

static void crossForce(real_T v[6], real_T forceVec[6], real_T forceVecDot[6])
{
  real_T b_sc1[36];
  real_T sc1[9];
  int32_T i;
  int32_T i1;
  sc1[0] = 0.0;
  sc1[3] = -v[2];
  sc1[6] = v[1];
  sc1[1] = v[2];
  sc1[4] = 0.0;
  sc1[7] = -v[0];
  sc1[2] = -v[1];
  sc1[5] = v[0];
  sc1[8] = 0.0;
  b_sc1[18] = 0.0;
  b_sc1[24] = -v[5];
  b_sc1[30] = v[4];
  b_sc1[19] = v[5];
  b_sc1[25] = 0.0;
  b_sc1[31] = -v[3];
  b_sc1[20] = -v[4];
  b_sc1[26] = v[3];
  b_sc1[32] = 0.0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_sc1[i1 + 6 * i] = sc1[i1 + 3 * i];
      b_sc1[(i1 + 6 * i) + 3] = 0.0;
      b_sc1[(i1 + 6 * (i + 3)) + 3] = sc1[i1 + 3 * i];
    }
  }

  for (i = 0; i < 6; i++) {
    forceVecDot[i] = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      forceVecDot[i] += b_sc1[i + 6 * i1] * forceVec[i1];
    }
  }
}

static void d_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (A->size[1] == 0) {
    C->size[0] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 2, &pArrays[0], (const char_T *)
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 1, &pArray, (const char_T *)
    "getString", true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((void *)sp, 0, NULL, 2, &pArrays[0], (const char_T *)
                        "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 1, &pArray, (const char_T *)
    "message", true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 3, &pArrays[0], (const char_T *)
    "message", true, location);
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
  c_emxInitStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_unnamed_struct(&pStruct->CollisionGeometries, 2);
}

static void emxInit_unnamed_struct(emxArray_unnamed_struct **pEmxArray, int32_T
  numDimensions)
{
  emxArray_unnamed_struct *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_unnamed_struct *)emlrtMallocMex(sizeof
    (emxArray_unnamed_struct));
  emxArray = *pEmxArray;
  emxArray->data = (robotics_manip_internal_CollisionGeometry **)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[20])
{
  int32_T i;
  for (i = 0; i < 20; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxFree_unnamed_struct(emxArray_unnamed_struct **pEmxArray)
{
  if (*pEmxArray != (emxArray_unnamed_struct *)NULL) {
    if (((*pEmxArray)->data != (robotics_manip_internal_CollisionGeometry **)
         NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_unnamed_struct *)NULL;
  }
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_unnamed_struct(&pStruct->CollisionGeometries);
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[20])
{
  int32_T i;
  for (i = 0; i < 20; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct)
{
  c_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_unnamed_struc(emxArray_unnamed_struct *emxArray,
  int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof
      (robotics_manip_internal_CollisionGeometry *));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof
             (robotics_manip_internal_CollisionGeometry *) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
      }
    }

    emxArray->data = (robotics_manip_internal_CollisionGeometry **)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(cell_wrap));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (cell_wrap *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions)
{
  emxArray_cell_wrap *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap *)emlrtMallocMex(sizeof(emxArray_cell_wrap));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray)
{
  if (*pEmxArray != (emxArray_cell_wrap *)NULL) {
    if (((*pEmxArray)->data != (cell_wrap *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap *)NULL;
  }
}

static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void init_simulink_io_address(InstanceStruct_qEImTD3VfNXfF3LhJQJopB
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y0 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_qEImTD3VfNXfF3LhJQJopB(SimStruct *S, int_T tid)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_qEImTD3VfNXfF3LhJQJopB(SimStruct *S)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_qEImTD3VfNXfF3LhJQJopB(SimStruct *S, int_T tid)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_qEImTD3VfNXfF3LhJQJopB(SimStruct *S)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_qEImTD3VfNXfF3LhJQJopB(SimStruct *S)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_qEImTD3VfNXfF3LhJQJopB(SimStruct *S)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_qEImTD3VfNXfF3LhJQJopB(SimStruct *S)
{
  InstanceStruct_qEImTD3VfNXfF3LhJQJopB *moduleInstance =
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB *)calloc(1, sizeof
    (InstanceStruct_qEImTD3VfNXfF3LhJQJopB));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_qEImTD3VfNXfF3LhJQJopB);
  ssSetmdlInitializeConditions(S, mdlInitialize_qEImTD3VfNXfF3LhJQJopB);
  ssSetmdlUpdate(S, mdlUpdate_qEImTD3VfNXfF3LhJQJopB);
  ssSetmdlTerminate(S, mdlTerminate_qEImTD3VfNXfF3LhJQJopB);
  ssSetmdlEnable(S, mdlEnable_qEImTD3VfNXfF3LhJQJopB);
  ssSetmdlDisable(S, mdlDisable_qEImTD3VfNXfF3LhJQJopB);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_qEImTD3VfNXfF3LhJQJopB(SimStruct *S)
{
}

void method_dispatcher_qEImTD3VfNXfF3LhJQJopB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_qEImTD3VfNXfF3LhJQJopB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_qEImTD3VfNXfF3LhJQJopB(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: qEImTD3VfNXfF3LhJQJopB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_qEImTD3VfNXfF3LhJQJopB_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,2);
  elem_6 = mxCreateString("blas.h");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,1,elem_7);
  mxSetCell(elem_3,1,elem_5);
  elem_8 = mxCreateCellMatrix(1,2);
  elem_9 = mxCreateString("");
  mxSetCell(elem_8,0,elem_9);
  elem_10 = mxCreateString("");
  mxSetCell(elem_8,1,elem_10);
  mxSetCell(elem_3,2,elem_8);
  elem_11 = mxCreateCellMatrix(1,2);
  elem_12 = mxCreateString("");
  mxSetCell(elem_11,0,elem_12);
  elem_13 = mxCreateString("");
  mxSetCell(elem_11,1,elem_13);
  mxSetCell(elem_3,3,elem_11);
  mxSetCell(elem_1,1,elem_3);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_14);
  elem_15 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_15);
  elem_16 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_16);
  elem_17 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_17);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_18 = mxCreateCellMatrix(1,2);
  elem_19 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_18,0,elem_19);
  elem_20 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_18,1,elem_20);
  mxSetCell(mxBIArgs,1,elem_18);
  elem_21 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_21);
  return mxBIArgs;
}

mxArray *cgxe_qEImTD3VfNXfF3LhJQJopB_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}

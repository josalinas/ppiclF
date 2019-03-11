c Maximum number of real particles on a processor
#ifndef LPM_LPART
#define LPM_LPART 100000
#endif

c Number of secondary real properties for a particle
#define LPM_LRP2 4

c Number of integer properties for a particle
#ifndef LPM_LIP
#define LPM_LIP 11
#endif

c Maximum number of ghost particles
#define LPM_LPART_GP 26*LPM_LPART

#ifndef LPM_LRP_PRO
#define LPM_LRP_PRO 1
#endif
#if LPM_LRP_PRO == 0
#undef LPM_LRP_PRO
#define LPM_LRP_PRO 1
#endif

#ifndef LPM_LRP_GP
#define LPM_LRP_GP 3+LPM_LRP_PRO
#endif

#ifndef LPM_LELT
#define LPM_LELT 1
#endif

#ifndef LPM_LX1
#define LPM_LX1 1
#endif

#ifndef LPM_LY1
#define LPM_LY1 1
#endif

#ifndef LPM_LZ1
#define LPM_LZ1 1
#endif

c max bins per processor
#ifndef LPM_BMAX
#define LPM_BMAX 1
#endif

c max gridpts per processor
#ifndef LPM_BX1
#define LPM_BX1 1
#endif
#ifndef LPM_BY1
#define LPM_BY1 1
#endif
#ifndef LPM_BZ1
#define LPM_BZ1 1
#endif

c#include "lpm_solve.f"
c#include "lpm_comm.f"
c#include "lpm_comm_mpi.f"
c#include "lpm_io.f"
/* ------------------------------------------------------------------------- *
 * CGNS - CFD General Notation System (http://www.cgns.org)                  *
 * CGNS/MLL - Mid-Level Library header file                                  *
 * ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- *

  This software is provided 'as-is', without any express or implied warranty.
  In no event will the authors be held liable for any damages arising from
  the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.

  2. Altered source versions must be plainly marked as such, and must not
     be misrepresented as being the original software.

  3. This notice may not be removed or altered from any source distribution.

 * ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- *
   This file has been generated during the CGNS/MLL installation.
   This is a snapshot of the parameters used for CGNS/MLL production and
   some PATHS parameters (headers or shared libs) may change or
   disappear (for example in case of cross-compilation).
 * ------------------------------------------------------------------------- */

#ifndef CGNSCONFIG_H
#define CGNSCONFIG_H

#define CG_BUILD_HDF5      1
#define CG_BUILD_DEBUG     0
#define CG_BUILD_FORTRAN   1
#define CG_BUILD_PARALLEL  1
#define CG_BUILD_BASESCOPE 0

#define HDF5_INCLUDE_PATH ""
#define HDF5_LIBRARY      "hdf5;:hdf5-static"

#define HDF5_NEED_MPI     1
#define HDF5_NEED_SZIP    0
#define HDF5_NEED_ZLIB    0

#define MPI_INCLUDE_PATH ""
#define MPI_LIBRARY      ""
#define SZIP_LIBRARY     ""
#define ZLIB_LIBRARY     ""

#define MPI_INC          ""
#define MPI_LIBS         ""

#include "cgnstypes.h"

#endif

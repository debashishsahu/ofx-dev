/**
 * File:          $RCSfile: 4x4matrix_norm.h,v $
 * Module:        Projective normalisation of 4x4 matrices (double precision)
 * Part of:       Gandalf Library
 *
 * Revision:      $Revision: 1.9 $
 * Last edited:   $Date: 2002/04/18 14:56:23 $
 * Author:        $Author: pm $
 * Copyright:     (c) 2000 Imagineer Software Limited
 */

/* This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _GAN_4X4MATRIX_NORM_H
#define _GAN_4X4MATRIX_NORM_H

#include <gandalf/linalg/4x4matrix.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GAN_MAT_NORMALISE  gan_mat44_normalize
#define GAN_MATT_NORMALISE gan_mat44T_normalize
#define GAN_MATTYPE        Gan_Matrix44
#define GAN_SQUMATTYPE     Gan_SquMatrix44

#include <gandalf/linalg/mat_norm_noc.h>

#undef GAN_MAT_NORMALISE
#undef GAN_MATT_NORMALISE
#undef GAN_MATTYPE
#undef GAN_SQUMATTYPE

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _GAN_4X4MATRIX_NORM_H */

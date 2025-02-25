//===-- AMDGPU specific declarations for math support ---------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_MATH_GPU_AMDGPU_DECLARATIONS_H
#define LLVM_LIBC_SRC_MATH_GPU_AMDGPU_DECLARATIONS_H

namespace __llvm_libc {

extern "C" {
float __ocml_acos_f32(float);
float __ocml_acosh_f32(float);
float __ocml_asin_f32(float);
float __ocml_asinh_f32(float);
float __ocml_atan_f32(float);
float __ocml_atanh_f32(float);
float __ocml_cos_f32(float);
double __ocml_cos_f64(double);
float __ocml_cosh_f32(float);
double __ocml_cosh_f64(double);
float __ocml_exp_f32(float);
float __ocml_exp2_f32(float);
float __ocml_exp10_f32(float);
float __ocml_expm1_f32(float);
float __ocml_fdim_f32(float, float);
double __ocml_fdim_f64(double, double);
double __ocml_hypot_f64(double, double);
float __ocml_hypot_f32(float, float);
int __ocml_ilogb_f64(double);
int __ocml_ilogb_f32(float);
float __ocml_ldexp_f32(float, int);
double __ocml_ldexp_f64(double, int);
float __ocml_pow_f32(float, float);
double __ocml_pow_f64(double, double);
double __ocml_rint_f64(double);
float __ocml_rint_f32(float);
double __ocml_round_f64(double);
float __ocml_round_f32(float);
double __ocml_sin_f64(double);
}

} // namespace __llvm_libc

#endif // LLVM_LIBC_SRC_MATH_GPU_AMDGPU_DECLARATIONS_H

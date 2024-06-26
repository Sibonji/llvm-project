// RUN: %clang_cc1 -triple x86_64-apple-macos %s -emit-llvm -o- | FileCheck %s

typedef __attribute__((__ext_vector_type__(4),__aligned__(16))) double simd_double4;
typedef struct { simd_double4 columns[4]; } simd_double4x4;
typedef simd_double4x4 matrix_double4x4;

// CHECK: define{{.*}} void @ident(ptr dead_on_unwind noalias writable sret(%struct.simd_double4x4) align 16 %agg.result
matrix_double4x4 ident(matrix_double4x4 x) {
  return x;
}

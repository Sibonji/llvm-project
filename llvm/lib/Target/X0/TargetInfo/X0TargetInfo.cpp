#include "TargetInfo/X0TargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheX0Target() {
  static Target TheX0Target;
  return TheX0Target;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeX0TargetInfo() {
  RegisterTarget<Triple::x0> X(getTheX0Target(), "x0", "X0 32",
                                   "X0");
}
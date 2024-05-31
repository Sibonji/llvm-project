
#ifndef LLVM_LIB_TARGET_X0_X0TARGETMACHINE_H
#define LLVM_LIB_TARGET_X0_X0TARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include "llvm/CodeGen/SelectionDAGTargetInfo.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/Target/TargetLoweringObjectFile.h"
#include <optional>

namespace llvm {
extern Target TheX0Target;

class X0TargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
public:
  X0TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                        StringRef FS, const TargetOptions &Options,
                        std::optional<Reloc::Model> RM,
                        std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                        bool JIT, bool isLittle);

  X0TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                        StringRef FS, const TargetOptions &Options,
                        std::optional<Reloc::Model> RM,
                        std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                        bool JIT);

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_X0_X0TARGETMACHINE_H

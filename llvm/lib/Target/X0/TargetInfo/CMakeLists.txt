add_llvm_component_library(LLVMX0Info
  X0TargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  X0
)

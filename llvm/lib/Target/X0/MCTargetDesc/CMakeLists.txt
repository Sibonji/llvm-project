add_llvm_component_library(LLVMX0Desc
  X0MCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  X0Info

  ADD_TO_COMPONENT
  X0
)

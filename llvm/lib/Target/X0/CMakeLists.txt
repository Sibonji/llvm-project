add_llvm_component_group(X0)

add_llvm_target(X0CodeGen
  X0TargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  X0Info

  ADD_TO_COMPONENT
  X0
 )
 
 add_subdirectory(MCTargetDesc)
 add_subdirectory(TargetInfo)

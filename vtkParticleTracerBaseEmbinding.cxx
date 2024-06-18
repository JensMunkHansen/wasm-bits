// JavaScript wrapper for vtkParticleTracerBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkParticleTracerBaseEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkParticleTracerBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkAbstractParticleWriter.h"
#include "vtkAlgorithmOutput.h"
#include "vtkParticleTracerBase.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkParticleTracerBase_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkParticleTracerBase>(vtkParticleTracerBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParticleTracerBase_class) {
  using Solvers=vtkParticleTracerBase::Solvers;
  using MeshOverTimeTypes=vtkParticleTracerBase::MeshOverTimeTypes;
  emscripten::class_<vtkParticleTracerBase, emscripten::base<vtkPolyDataAlgorithm>>("vtkParticleTracerBase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticleTracerBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParticleTracerBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParticleTracerBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParticleTracerBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticleTracerBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParticleTracerBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PrintParticleHistories", &vtkParticleTracerBase::PrintParticleHistories)
    .class_function("TimeStepsArrayName", emscripten::optional_override([]() -> std::string {  return vtkParticleTracerBase::TimeStepsArrayName();}))
    .function("SetController", &vtkParticleTracerBase::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkParticleTracerBase::GetController, emscripten::allow_raw_pointers())
    .function("GetComputeVorticity", &vtkParticleTracerBase::GetComputeVorticity)
    .function("SetComputeVorticity", &vtkParticleTracerBase::SetComputeVorticity)
    .function("GetTerminalSpeed", &vtkParticleTracerBase::GetTerminalSpeed)
    .function("SetTerminalSpeed", &vtkParticleTracerBase::SetTerminalSpeed)
    .function("GetRotationScale", &vtkParticleTracerBase::GetRotationScale)
    .function("SetRotationScale", &vtkParticleTracerBase::SetRotationScale)
    .function("SetIgnorePipelineTime", &vtkParticleTracerBase::SetIgnorePipelineTime)
    .function("GetIgnorePipelineTime", &vtkParticleTracerBase::GetIgnorePipelineTime)
    .function("IgnorePipelineTimeOn", &vtkParticleTracerBase::IgnorePipelineTimeOn)
    .function("IgnorePipelineTimeOff", &vtkParticleTracerBase::IgnorePipelineTimeOff)
    .function("GetForceReinjectionEveryNSteps", &vtkParticleTracerBase::GetForceReinjectionEveryNSteps)
    .function("SetForceReinjectionEveryNSteps", &vtkParticleTracerBase::SetForceReinjectionEveryNSteps)
    .function("SetTerminationTime", &vtkParticleTracerBase::SetTerminationTime)
    .function("GetTerminationTime", &vtkParticleTracerBase::GetTerminationTime)
    .function("SetStartTime", &vtkParticleTracerBase::SetStartTime)
    .function("GetStartTime", &vtkParticleTracerBase::GetStartTime)
    .function("SetDisableResetCache", &vtkParticleTracerBase::SetDisableResetCache)
    .function("GetDisableResetCache", &vtkParticleTracerBase::GetDisableResetCache)
    .function("DisableResetCacheOn", &vtkParticleTracerBase::DisableResetCacheOn)
    .function("DisableResetCacheOff", &vtkParticleTracerBase::DisableResetCacheOff)
    .function("SetIntegrator", &vtkParticleTracerBase::SetIntegrator, emscripten::allow_raw_pointers())
    .function("GetIntegrator", &vtkParticleTracerBase::GetIntegrator, emscripten::allow_raw_pointers())
    .function("SetIntegratorType", &vtkParticleTracerBase::SetIntegratorType)
    .function("GetIntegratorType", &vtkParticleTracerBase::GetIntegratorType)
    .function("SetStaticSeeds", &vtkParticleTracerBase::SetStaticSeeds)
    .function("GetStaticSeeds", &vtkParticleTracerBase::GetStaticSeeds)
    .function("SetMeshOverTime", &vtkParticleTracerBase::SetMeshOverTime)
    .function("GetMeshOverTimeMinValue", &vtkParticleTracerBase::GetMeshOverTimeMinValue)
    .function("GetMeshOverTimeMaxValue", &vtkParticleTracerBase::GetMeshOverTimeMaxValue)
    .function("SetMeshOverTimeToDifferent", &vtkParticleTracerBase::SetMeshOverTimeToDifferent)
    .function("SetMeshOverTimeToStatic", &vtkParticleTracerBase::SetMeshOverTimeToStatic)
    .function("SetMeshOverTimeToLinearTransformation", &vtkParticleTracerBase::SetMeshOverTimeToLinearTransformation)
    .function("SetMeshOverTimeToSameTopology", &vtkParticleTracerBase::SetMeshOverTimeToSameTopology)
    .function("GetMeshOverTime", &vtkParticleTracerBase::GetMeshOverTime)
    .function("SetInterpolatorType", &vtkParticleTracerBase::SetInterpolatorType)
    .function("SetInterpolatorTypeToDataSetPointLocator", &vtkParticleTracerBase::SetInterpolatorTypeToDataSetPointLocator)
    .function("SetInterpolatorTypeToCellLocator", &vtkParticleTracerBase::SetInterpolatorTypeToCellLocator)
    .function("SetParticleWriter", &vtkParticleTracerBase::SetParticleWriter, emscripten::allow_raw_pointers())
    .function("GetParticleWriter", &vtkParticleTracerBase::GetParticleWriter, emscripten::allow_raw_pointers())
    .function("SetParticleFileName", emscripten::optional_override([](vtkParticleTracerBase& self, const std::string & arg_0) -> void {  return self.SetParticleFileName( arg_0.c_str());}))
    .function("GetParticleFileName", emscripten::optional_override([](vtkParticleTracerBase& self) -> std::string {  return self.GetParticleFileName();}))
    .function("SetEnableParticleWriting", &vtkParticleTracerBase::SetEnableParticleWriting)
    .function("GetEnableParticleWriting", &vtkParticleTracerBase::GetEnableParticleWriting)
    .function("EnableParticleWritingOn", &vtkParticleTracerBase::EnableParticleWritingOn)
    .function("EnableParticleWritingOff", &vtkParticleTracerBase::EnableParticleWritingOff)
    .function("AddSourceConnection", &vtkParticleTracerBase::AddSourceConnection, emscripten::allow_raw_pointers())
    .function("RemoveAllSources", &vtkParticleTracerBase::RemoveAllSources)
    .function("GetForceSerialExecution", &vtkParticleTracerBase::GetForceSerialExecution)
    .function("SetForceSerialExecution", &vtkParticleTracerBase::SetForceSerialExecution)
    .function("ForceSerialExecutionOn", &vtkParticleTracerBase::ForceSerialExecutionOn)
    .function("ForceSerialExecutionOff", &vtkParticleTracerBase::ForceSerialExecutionOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkParticleTracerBase_0_2_constants) {
    typedef vtkParticleTracerBase::Solvers cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkParticleTracerBase_Solvers_RUNGE_KUTTA2", vtkParticleTracerBase::RUNGE_KUTTA2 },
      { "vtkParticleTracerBase_Solvers_RUNGE_KUTTA4", vtkParticleTracerBase::RUNGE_KUTTA4 },
      { "vtkParticleTracerBase_Solvers_RUNGE_KUTTA45", vtkParticleTracerBase::RUNGE_KUTTA45 },
      { "vtkParticleTracerBase_Solvers_NONE", vtkParticleTracerBase::NONE },
      { "vtkParticleTracerBase_Solvers_UNKNOWN", vtkParticleTracerBase::UNKNOWN },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkParticleTracerBase_1_2_constants) {
    typedef vtkParticleTracerBase::MeshOverTimeTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkParticleTracerBase_MeshOverTimeTypes_DIFFERENT", vtkParticleTracerBase::DIFFERENT },
      { "vtkParticleTracerBase_MeshOverTimeTypes_STATIC", vtkParticleTracerBase::STATIC },
      { "vtkParticleTracerBase_MeshOverTimeTypes_LINEAR_TRANSFORMATION", vtkParticleTracerBase::LINEAR_TRANSFORMATION },
      { "vtkParticleTracerBase_MeshOverTimeTypes_SAME_TOPOLOGY", vtkParticleTracerBase::SAME_TOPOLOGY },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkParticleTracerBase_2_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkParticleTracerBase_INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", vtkParticleTracerBase::INTERPOLATOR_WITH_DATASET_POINT_LOCATOR },
      { "vtkParticleTracerBase_INTERPOLATOR_WITH_CELL_LOCATOR", vtkParticleTracerBase::INTERPOLATOR_WITH_CELL_LOCATOR },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

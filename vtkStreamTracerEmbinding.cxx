// JavaScript wrapper for vtkStreamTracer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkStreamTracerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkStreamTracer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkAbstractInterpolatedVelocityField.h"
#include "vtkPolyData.h"
#include "vtkGenericCell.h"
#include "vtkDoubleArray.h"
#include "vtkStreamTracer.h"


EMSCRIPTEN_BINDINGS(vtkIntervalInformation_class) {
  emscripten::class_<vtkIntervalInformation>("vtkIntervalInformation")
    .class_function("ConvertToLength", emscripten::select_overload<double( double, int, double)>([]( double arg_0, int arg_1, double arg_2) -> double { return vtkIntervalInformation::ConvertToLength( arg_0, arg_1, arg_2); }));
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkStreamTracer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkStreamTracer>(vtkStreamTracer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStreamTracer_class) {
  using Units=vtkStreamTracer::Units;
  using Solvers=vtkStreamTracer::Solvers;
  using ReasonForTermination=vtkStreamTracer::ReasonForTermination;
  emscripten::class_<vtkStreamTracer, emscripten::base<vtkPolyDataAlgorithm>>("vtkStreamTracer")
    .smart_ptr<vtkSmartPointer<vtkStreamTracer>>("vtkSmartPointer<vtkStreamTracer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStreamTracer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamTracer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStreamTracer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStreamTracer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStreamTracer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamTracer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStreamTracer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStartPosition", emscripten::select_overload<void(vtkStreamTracer&, double, double, double)>([](vtkStreamTracer& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStartPosition( arg_0, arg_1, arg_2); }))
    .function("SetSourceData", &vtkStreamTracer::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkStreamTracer::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkStreamTracer::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetIntegrator", &vtkStreamTracer::SetIntegrator, emscripten::allow_raw_pointers())
    .function("GetIntegrator", &vtkStreamTracer::GetIntegrator, emscripten::allow_raw_pointers())
    .function("SetIntegratorType", &vtkStreamTracer::SetIntegratorType)
    .function("GetIntegratorType", &vtkStreamTracer::GetIntegratorType)
    .function("SetIntegratorTypeToRungeKutta2", &vtkStreamTracer::SetIntegratorTypeToRungeKutta2)
    .function("SetIntegratorTypeToRungeKutta4", &vtkStreamTracer::SetIntegratorTypeToRungeKutta4)
    .function("SetIntegratorTypeToRungeKutta45", &vtkStreamTracer::SetIntegratorTypeToRungeKutta45)
    .function("SetInterpolatorTypeToDataSetPointLocator", &vtkStreamTracer::SetInterpolatorTypeToDataSetPointLocator)
    .function("SetInterpolatorTypeToCellLocator", &vtkStreamTracer::SetInterpolatorTypeToCellLocator)
    .function("SetMaximumPropagation", &vtkStreamTracer::SetMaximumPropagation)
    .function("GetMaximumPropagation", &vtkStreamTracer::GetMaximumPropagation)
    .function("SetIntegrationStepUnit", &vtkStreamTracer::SetIntegrationStepUnit)
    .function("GetIntegrationStepUnit", &vtkStreamTracer::GetIntegrationStepUnit)
    .function("SetInitialIntegrationStep", &vtkStreamTracer::SetInitialIntegrationStep)
    .function("GetInitialIntegrationStep", &vtkStreamTracer::GetInitialIntegrationStep)
    .function("SetMinimumIntegrationStep", &vtkStreamTracer::SetMinimumIntegrationStep)
    .function("GetMinimumIntegrationStep", &vtkStreamTracer::GetMinimumIntegrationStep)
    .function("SetMaximumIntegrationStep", &vtkStreamTracer::SetMaximumIntegrationStep)
    .function("GetMaximumIntegrationStep", &vtkStreamTracer::GetMaximumIntegrationStep)
    .function("SetMaximumError", &vtkStreamTracer::SetMaximumError)
    .function("GetMaximumError", &vtkStreamTracer::GetMaximumError)
    .function("SetMaximumNumberOfSteps", &vtkStreamTracer::SetMaximumNumberOfSteps)
    .function("GetMaximumNumberOfSteps", &vtkStreamTracer::GetMaximumNumberOfSteps)
    .function("SetTerminalSpeed", &vtkStreamTracer::SetTerminalSpeed)
    .function("GetTerminalSpeed", &vtkStreamTracer::GetTerminalSpeed)
    .function("GetSurfaceStreamlines", &vtkStreamTracer::GetSurfaceStreamlines)
    .function("SetSurfaceStreamlines", &vtkStreamTracer::SetSurfaceStreamlines)
    .function("SurfaceStreamlinesOn", &vtkStreamTracer::SurfaceStreamlinesOn)
    .function("SurfaceStreamlinesOff", &vtkStreamTracer::SurfaceStreamlinesOff)
    .function("SetIntegrationDirection", &vtkStreamTracer::SetIntegrationDirection)
    .function("GetIntegrationDirectionMinValue", &vtkStreamTracer::GetIntegrationDirectionMinValue)
    .function("GetIntegrationDirectionMaxValue", &vtkStreamTracer::GetIntegrationDirectionMaxValue)
    .function("GetIntegrationDirection", &vtkStreamTracer::GetIntegrationDirection)
    .function("SetIntegrationDirectionToForward", &vtkStreamTracer::SetIntegrationDirectionToForward)
    .function("SetIntegrationDirectionToBackward", &vtkStreamTracer::SetIntegrationDirectionToBackward)
    .function("SetIntegrationDirectionToBoth", &vtkStreamTracer::SetIntegrationDirectionToBoth)
    .function("SetComputeVorticity", &vtkStreamTracer::SetComputeVorticity)
    .function("GetComputeVorticity", &vtkStreamTracer::GetComputeVorticity)
    .function("SetRotationScale", &vtkStreamTracer::SetRotationScale)
    .function("GetRotationScale", &vtkStreamTracer::GetRotationScale)
    .function("SetInterpolatorPrototype", &vtkStreamTracer::SetInterpolatorPrototype, emscripten::allow_raw_pointers())
    .function("SetInterpolatorType", &vtkStreamTracer::SetInterpolatorType)
    .function("GetForceSerialExecution", &vtkStreamTracer::GetForceSerialExecution)
    .function("SetForceSerialExecution", &vtkStreamTracer::SetForceSerialExecution)
    .function("ForceSerialExecutionOn", &vtkStreamTracer::ForceSerialExecutionOn)
    .function("ForceSerialExecutionOff", &vtkStreamTracer::ForceSerialExecutionOff)
    .function("GenerateNormals", emscripten::optional_override([](vtkStreamTracer& self, vtkPolyData* arg_0, std::uintptr_t arg_1, const std::string & arg_2) -> void {  return self.GenerateNormals( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)), arg_2.c_str());}), emscripten::allow_raw_pointers())
    .function("SetUseLocalSeedSource", &vtkStreamTracer::SetUseLocalSeedSource)
    .function("GetUseLocalSeedSource", &vtkStreamTracer::GetUseLocalSeedSource)
    .function("UseLocalSeedSourceOn", &vtkStreamTracer::UseLocalSeedSourceOn)
    .function("UseLocalSeedSourceOff", &vtkStreamTracer::UseLocalSeedSourceOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkStreamTracer_0_2_constants) {
    typedef vtkStreamTracer::Units cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkStreamTracer_Units_LENGTH_UNIT", vtkStreamTracer::LENGTH_UNIT },
      { "vtkStreamTracer_Units_CELL_LENGTH_UNIT", vtkStreamTracer::CELL_LENGTH_UNIT },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkStreamTracer_1_2_constants) {
    typedef vtkStreamTracer::Solvers cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkStreamTracer_Solvers_RUNGE_KUTTA2", vtkStreamTracer::RUNGE_KUTTA2 },
      { "vtkStreamTracer_Solvers_RUNGE_KUTTA4", vtkStreamTracer::RUNGE_KUTTA4 },
      { "vtkStreamTracer_Solvers_RUNGE_KUTTA45", vtkStreamTracer::RUNGE_KUTTA45 },
      { "vtkStreamTracer_Solvers_NONE", vtkStreamTracer::NONE },
      { "vtkStreamTracer_Solvers_UNKNOWN", vtkStreamTracer::UNKNOWN },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkStreamTracer_2_2_constants) {
    typedef vtkStreamTracer::ReasonForTermination cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkStreamTracer_ReasonForTermination_OUT_OF_DOMAIN", vtkStreamTracer::OUT_OF_DOMAIN },
      { "vtkStreamTracer_ReasonForTermination_NOT_INITIALIZED", vtkStreamTracer::NOT_INITIALIZED },
      { "vtkStreamTracer_ReasonForTermination_UNEXPECTED_VALUE", vtkStreamTracer::UNEXPECTED_VALUE },
      { "vtkStreamTracer_ReasonForTermination_OUT_OF_LENGTH", vtkStreamTracer::OUT_OF_LENGTH },
      { "vtkStreamTracer_ReasonForTermination_OUT_OF_STEPS", vtkStreamTracer::OUT_OF_STEPS },
      { "vtkStreamTracer_ReasonForTermination_STAGNATION", vtkStreamTracer::STAGNATION },
      { "vtkStreamTracer_ReasonForTermination_FIXED_REASONS_FOR_TERMINATION_COUNT", vtkStreamTracer::FIXED_REASONS_FOR_TERMINATION_COUNT },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkStreamTracer_3_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkStreamTracer_FORWARD", vtkStreamTracer::FORWARD },
      { "vtkStreamTracer_BACKWARD", vtkStreamTracer::BACKWARD },
      { "vtkStreamTracer_BOTH", vtkStreamTracer::BOTH },
      { "vtkStreamTracer_INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_DATASET_POINT_LOCATOR },
      { "vtkStreamTracer_INTERPOLATOR_WITH_CELL_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_CELL_LOCATOR },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

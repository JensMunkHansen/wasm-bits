// JavaScript wrapper for vtkGenericStreamTracer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericStreamTracerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericStreamTracer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkGenericDataSet.h"
#include "vtkGenericInterpolatedVelocityField.h"
#include "vtkGenericStreamTracer.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneric_vtkGenericStreamTracer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGenericStreamTracer>(vtkGenericStreamTracer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericStreamTracer_class) {
  using Units=vtkGenericStreamTracer::Units;
  using Solvers=vtkGenericStreamTracer::Solvers;
  using ReasonForTermination=vtkGenericStreamTracer::ReasonForTermination;
  emscripten::class_<vtkGenericStreamTracer, emscripten::base<vtkPolyDataAlgorithm>>("vtkGenericStreamTracer")
    .smart_ptr<vtkSmartPointer<vtkGenericStreamTracer>>("vtkSmartPointer<vtkGenericStreamTracer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericStreamTracer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericStreamTracer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericStreamTracer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericStreamTracer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericStreamTracer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericStreamTracer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericStreamTracer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStartPosition", emscripten::select_overload<void(vtkGenericStreamTracer&, double, double, double)>([](vtkGenericStreamTracer& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStartPosition( arg_0, arg_1, arg_2); }))
    .function("SetSourceData", &vtkGenericStreamTracer::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkGenericStreamTracer::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkGenericStreamTracer::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkGenericStreamTracer::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("SetIntegrator", &vtkGenericStreamTracer::SetIntegrator, emscripten::allow_raw_pointers())
    .function("GetIntegrator", &vtkGenericStreamTracer::GetIntegrator, emscripten::allow_raw_pointers())
    .function("SetIntegratorType", &vtkGenericStreamTracer::SetIntegratorType)
    .function("GetIntegratorType", &vtkGenericStreamTracer::GetIntegratorType)
    .function("SetIntegratorTypeToRungeKutta2", &vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta2)
    .function("SetIntegratorTypeToRungeKutta4", &vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta4)
    .function("SetIntegratorTypeToRungeKutta45", &vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta45)
    .function("SetMaximumPropagation", emscripten::select_overload<void(vtkGenericStreamTracer&, int, double)>([](vtkGenericStreamTracer& self, int arg_0, double arg_1) -> void { return self.SetMaximumPropagation( arg_0, arg_1); }))
    .function("SetMaximumPropagation", emscripten::select_overload<void(vtkGenericStreamTracer&, double)>([](vtkGenericStreamTracer& self, double arg_0) -> void { return self.SetMaximumPropagation( arg_0); }))
    .function("SetMaximumPropagationUnit", &vtkGenericStreamTracer::SetMaximumPropagationUnit)
    .function("GetMaximumPropagationUnit", &vtkGenericStreamTracer::GetMaximumPropagationUnit)
    .function("GetMaximumPropagation", &vtkGenericStreamTracer::GetMaximumPropagation)
    .function("SetMaximumPropagationUnitToTimeUnit", &vtkGenericStreamTracer::SetMaximumPropagationUnitToTimeUnit)
    .function("SetMaximumPropagationUnitToLengthUnit", &vtkGenericStreamTracer::SetMaximumPropagationUnitToLengthUnit)
    .function("SetMaximumPropagationUnitToCellLengthUnit", &vtkGenericStreamTracer::SetMaximumPropagationUnitToCellLengthUnit)
    .function("SetMinimumIntegrationStep", emscripten::select_overload<void(vtkGenericStreamTracer&, int, double)>([](vtkGenericStreamTracer& self, int arg_0, double arg_1) -> void { return self.SetMinimumIntegrationStep( arg_0, arg_1); }))
    .function("SetMinimumIntegrationStep", emscripten::select_overload<void(vtkGenericStreamTracer&, double)>([](vtkGenericStreamTracer& self, double arg_0) -> void { return self.SetMinimumIntegrationStep( arg_0); }))
    .function("SetMinimumIntegrationStepUnit", &vtkGenericStreamTracer::SetMinimumIntegrationStepUnit)
    .function("GetMinimumIntegrationStepUnit", &vtkGenericStreamTracer::GetMinimumIntegrationStepUnit)
    .function("GetMinimumIntegrationStep", &vtkGenericStreamTracer::GetMinimumIntegrationStep)
    .function("SetMinimumIntegrationStepUnitToTimeUnit", &vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToTimeUnit)
    .function("SetMinimumIntegrationStepUnitToLengthUnit", &vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToLengthUnit)
    .function("SetMinimumIntegrationStepUnitToCellLengthUnit", &vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToCellLengthUnit)
    .function("SetMaximumIntegrationStep", emscripten::select_overload<void(vtkGenericStreamTracer&, int, double)>([](vtkGenericStreamTracer& self, int arg_0, double arg_1) -> void { return self.SetMaximumIntegrationStep( arg_0, arg_1); }))
    .function("SetMaximumIntegrationStep", emscripten::select_overload<void(vtkGenericStreamTracer&, double)>([](vtkGenericStreamTracer& self, double arg_0) -> void { return self.SetMaximumIntegrationStep( arg_0); }))
    .function("SetMaximumIntegrationStepUnit", &vtkGenericStreamTracer::SetMaximumIntegrationStepUnit)
    .function("GetMaximumIntegrationStepUnit", &vtkGenericStreamTracer::GetMaximumIntegrationStepUnit)
    .function("GetMaximumIntegrationStep", &vtkGenericStreamTracer::GetMaximumIntegrationStep)
    .function("SetMaximumIntegrationStepUnitToTimeUnit", &vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToTimeUnit)
    .function("SetMaximumIntegrationStepUnitToLengthUnit", &vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToLengthUnit)
    .function("SetMaximumIntegrationStepUnitToCellLengthUnit", &vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToCellLengthUnit)
    .function("SetInitialIntegrationStep", emscripten::select_overload<void(vtkGenericStreamTracer&, int, double)>([](vtkGenericStreamTracer& self, int arg_0, double arg_1) -> void { return self.SetInitialIntegrationStep( arg_0, arg_1); }))
    .function("SetInitialIntegrationStep", emscripten::select_overload<void(vtkGenericStreamTracer&, double)>([](vtkGenericStreamTracer& self, double arg_0) -> void { return self.SetInitialIntegrationStep( arg_0); }))
    .function("SetInitialIntegrationStepUnit", &vtkGenericStreamTracer::SetInitialIntegrationStepUnit)
    .function("GetInitialIntegrationStepUnit", &vtkGenericStreamTracer::GetInitialIntegrationStepUnit)
    .function("GetInitialIntegrationStep", &vtkGenericStreamTracer::GetInitialIntegrationStep)
    .function("SetInitialIntegrationStepUnitToTimeUnit", &vtkGenericStreamTracer::SetInitialIntegrationStepUnitToTimeUnit)
    .function("SetInitialIntegrationStepUnitToLengthUnit", &vtkGenericStreamTracer::SetInitialIntegrationStepUnitToLengthUnit)
    .function("SetInitialIntegrationStepUnitToCellLengthUnit", &vtkGenericStreamTracer::SetInitialIntegrationStepUnitToCellLengthUnit)
    .function("SetMaximumError", &vtkGenericStreamTracer::SetMaximumError)
    .function("GetMaximumError", &vtkGenericStreamTracer::GetMaximumError)
    .function("SetMaximumNumberOfSteps", &vtkGenericStreamTracer::SetMaximumNumberOfSteps)
    .function("GetMaximumNumberOfSteps", &vtkGenericStreamTracer::GetMaximumNumberOfSteps)
    .function("SetTerminalSpeed", &vtkGenericStreamTracer::SetTerminalSpeed)
    .function("GetTerminalSpeed", &vtkGenericStreamTracer::GetTerminalSpeed)
    .function("SetIntegrationStepUnit", &vtkGenericStreamTracer::SetIntegrationStepUnit)
    .function("SetIntegrationDirection", &vtkGenericStreamTracer::SetIntegrationDirection)
    .function("GetIntegrationDirectionMinValue", &vtkGenericStreamTracer::GetIntegrationDirectionMinValue)
    .function("GetIntegrationDirectionMaxValue", &vtkGenericStreamTracer::GetIntegrationDirectionMaxValue)
    .function("GetIntegrationDirection", &vtkGenericStreamTracer::GetIntegrationDirection)
    .function("SetIntegrationDirectionToForward", &vtkGenericStreamTracer::SetIntegrationDirectionToForward)
    .function("SetIntegrationDirectionToBackward", &vtkGenericStreamTracer::SetIntegrationDirectionToBackward)
    .function("SetIntegrationDirectionToBoth", &vtkGenericStreamTracer::SetIntegrationDirectionToBoth)
    .function("SetComputeVorticity", &vtkGenericStreamTracer::SetComputeVorticity)
    .function("GetComputeVorticity", &vtkGenericStreamTracer::GetComputeVorticity)
    .function("ComputeVorticityOn", &vtkGenericStreamTracer::ComputeVorticityOn)
    .function("ComputeVorticityOff", &vtkGenericStreamTracer::ComputeVorticityOff)
    .function("SetRotationScale", &vtkGenericStreamTracer::SetRotationScale)
    .function("GetRotationScale", &vtkGenericStreamTracer::GetRotationScale)
    .function("GetInputVectorsSelection", emscripten::optional_override([](vtkGenericStreamTracer& self) -> std::string {  return self.GetInputVectorsSelection();}))
    .function("SelectInputVectors", emscripten::optional_override([](vtkGenericStreamTracer& self, const std::string & arg_0) -> void {  return self.SelectInputVectors( arg_0.c_str());}))
    .function("AddInputData", &vtkGenericStreamTracer::AddInputData, emscripten::allow_raw_pointers())
    .function("SetInterpolatorPrototype", &vtkGenericStreamTracer::SetInterpolatorPrototype, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneric_vtkGenericStreamTracer_0_2_constants) {
    typedef vtkGenericStreamTracer::Units cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkGenericStreamTracer_Units_TIME_UNIT", vtkGenericStreamTracer::TIME_UNIT },
      { "vtkGenericStreamTracer_Units_LENGTH_UNIT", vtkGenericStreamTracer::LENGTH_UNIT },
      { "vtkGenericStreamTracer_Units_CELL_LENGTH_UNIT", vtkGenericStreamTracer::CELL_LENGTH_UNIT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneric_vtkGenericStreamTracer_1_2_constants) {
    typedef vtkGenericStreamTracer::Solvers cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkGenericStreamTracer_Solvers_RUNGE_KUTTA2", vtkGenericStreamTracer::RUNGE_KUTTA2 },
      { "vtkGenericStreamTracer_Solvers_RUNGE_KUTTA4", vtkGenericStreamTracer::RUNGE_KUTTA4 },
      { "vtkGenericStreamTracer_Solvers_RUNGE_KUTTA45", vtkGenericStreamTracer::RUNGE_KUTTA45 },
      { "vtkGenericStreamTracer_Solvers_NONE", vtkGenericStreamTracer::NONE },
      { "vtkGenericStreamTracer_Solvers_UNKNOWN", vtkGenericStreamTracer::UNKNOWN },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneric_vtkGenericStreamTracer_2_2_constants) {
    typedef vtkGenericStreamTracer::ReasonForTermination cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkGenericStreamTracer_ReasonForTermination_OUT_OF_DOMAIN", vtkGenericStreamTracer::OUT_OF_DOMAIN },
      { "vtkGenericStreamTracer_ReasonForTermination_NOT_INITIALIZED", vtkGenericStreamTracer::NOT_INITIALIZED },
      { "vtkGenericStreamTracer_ReasonForTermination_UNEXPECTED_VALUE", vtkGenericStreamTracer::UNEXPECTED_VALUE },
      { "vtkGenericStreamTracer_ReasonForTermination_OUT_OF_TIME", vtkGenericStreamTracer::OUT_OF_TIME },
      { "vtkGenericStreamTracer_ReasonForTermination_OUT_OF_STEPS", vtkGenericStreamTracer::OUT_OF_STEPS },
      { "vtkGenericStreamTracer_ReasonForTermination_STAGNATION", vtkGenericStreamTracer::STAGNATION },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeneric_vtkGenericStreamTracer_3_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkGenericStreamTracer_FORWARD", vtkGenericStreamTracer::FORWARD },
      { "vtkGenericStreamTracer_BACKWARD", vtkGenericStreamTracer::BACKWARD },
      { "vtkGenericStreamTracer_BOTH", vtkGenericStreamTracer::BOTH },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

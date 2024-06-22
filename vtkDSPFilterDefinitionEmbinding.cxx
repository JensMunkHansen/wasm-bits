// JavaScript wrapper for vtkDSPFilterDefinition with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkDSPFilterDefinitionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkDSPFilterDefinition.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDSPFilterDefinition.h"

template<> void emscripten::internal::raw_destructor<vtkDSPFilterDefinition>(vtkDSPFilterDefinition * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDSPFilterDefinition_class) {
  emscripten::class_<vtkDSPFilterDefinition, emscripten::base<vtkObject>>("vtkDSPFilterDefinition")
    .smart_ptr<vtkSmartPointer<vtkDSPFilterDefinition>>("vtkSmartPointer<vtkDSPFilterDefinition>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDSPFilterDefinition>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDSPFilterDefinition::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDSPFilterDefinition& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDSPFilterDefinition::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDSPFilterDefinition::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDSPFilterDefinition::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDSPFilterDefinition& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Copy", &vtkDSPFilterDefinition::Copy, emscripten::allow_raw_pointers())
    .function("Clear", &vtkDSPFilterDefinition::Clear)
    .function("IsThisInputVariableInstanceNeeded", &vtkDSPFilterDefinition::IsThisInputVariableInstanceNeeded)
    .function("PushBackNumeratorWeight", &vtkDSPFilterDefinition::PushBackNumeratorWeight)
    .function("PushBackDenominatorWeight", &vtkDSPFilterDefinition::PushBackDenominatorWeight)
    .function("PushBackForwardNumeratorWeight", &vtkDSPFilterDefinition::PushBackForwardNumeratorWeight)
    .function("SetInputVariableName", emscripten::optional_override([](vtkDSPFilterDefinition& self, const std::string & arg_0) -> void {  return self.SetInputVariableName( arg_0.c_str());}))
    .function("SetOutputVariableName", emscripten::optional_override([](vtkDSPFilterDefinition& self, const std::string & arg_0) -> void {  return self.SetOutputVariableName( arg_0.c_str());}))
    .function("GetInputVariableName", emscripten::optional_override([](vtkDSPFilterDefinition& self) -> std::string {  return self.GetInputVariableName();}))
    .function("GetOutputVariableName", emscripten::optional_override([](vtkDSPFilterDefinition& self) -> std::string {  return self.GetOutputVariableName();}))
    .function("GetNumNumeratorWeights", &vtkDSPFilterDefinition::GetNumNumeratorWeights)
    .function("GetNumDenominatorWeights", &vtkDSPFilterDefinition::GetNumDenominatorWeights)
    .function("GetNumForwardNumeratorWeights", &vtkDSPFilterDefinition::GetNumForwardNumeratorWeights)
    .function("GetNumeratorWeight", &vtkDSPFilterDefinition::GetNumeratorWeight)
    .function("GetDenominatorWeight", &vtkDSPFilterDefinition::GetDenominatorWeight)
    .function("GetForwardNumeratorWeight", &vtkDSPFilterDefinition::GetForwardNumeratorWeight);
}

// JavaScript wrapper for vtkDSPFilterGroup with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkDSPFilterGroupEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkDSPFilterGroup.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDSPFilterDefinition.h"
#include "vtkFloatArray.h"
#include "vtkDSPFilterGroup.h"

template<> void emscripten::internal::raw_destructor<vtkDSPFilterGroup>(vtkDSPFilterGroup * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDSPFilterGroup_class) {
  emscripten::class_<vtkDSPFilterGroup, emscripten::base<vtkObject>>("vtkDSPFilterGroup")
    .smart_ptr<vtkSmartPointer<vtkDSPFilterGroup>>("vtkSmartPointer<vtkDSPFilterGroup>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDSPFilterGroup>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDSPFilterGroup::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDSPFilterGroup& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDSPFilterGroup::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDSPFilterGroup::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDSPFilterGroup::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDSPFilterGroup& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddFilter", &vtkDSPFilterGroup::AddFilter, emscripten::allow_raw_pointers())
    .function("RemoveFilter", emscripten::optional_override([](vtkDSPFilterGroup& self, const std::string & arg_0) -> void {  return self.RemoveFilter( arg_0.c_str());}))
    .function("IsThisInputVariableInstanceNeeded", emscripten::optional_override([](vtkDSPFilterGroup& self, const std::string & arg_0, int arg_1, int arg_2) -> bool {  return self.IsThisInputVariableInstanceNeeded( arg_0.c_str(), arg_1, arg_2);}))
    .function("IsThisInputVariableInstanceCached", emscripten::optional_override([](vtkDSPFilterGroup& self, const std::string & arg_0, int arg_1) -> bool {  return self.IsThisInputVariableInstanceCached( arg_0.c_str(), arg_1);}))
    .function("AddInputVariableInstance", emscripten::optional_override([](vtkDSPFilterGroup& self, const std::string & arg_0, int arg_1, vtkFloatArray* arg_2) -> void {  return self.AddInputVariableInstance( arg_0.c_str(), arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("GetCachedInput", &vtkDSPFilterGroup::GetCachedInput, emscripten::allow_raw_pointers())
    .function("GetCachedOutput", &vtkDSPFilterGroup::GetCachedOutput, emscripten::allow_raw_pointers())
    .function("GetInputVariableName", emscripten::optional_override([](vtkDSPFilterGroup& self, int arg_0) -> std::string {  return self.GetInputVariableName( arg_0);}))
    .function("GetNumFilters", &vtkDSPFilterGroup::GetNumFilters)
    .function("Copy", &vtkDSPFilterGroup::Copy, emscripten::allow_raw_pointers())
    .function("GetFilter", &vtkDSPFilterGroup::GetFilter, emscripten::allow_raw_pointers());
}

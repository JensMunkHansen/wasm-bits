// JavaScript wrapper for vtkFieldDataToDataSetAttribute with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFieldDataToDataSetAttributeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkFieldDataToDataSetAttribute.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFieldDataToDataSetAttribute.h"

template<> void emscripten::internal::raw_destructor<vtkFieldDataToDataSetAttribute>(vtkFieldDataToDataSetAttribute * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFieldDataToDataSetAttribute_class) {
  emscripten::class_<vtkFieldDataToDataSetAttribute, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkFieldDataToDataSetAttribute")
    .smart_ptr<vtkSmartPointer<vtkFieldDataToDataSetAttribute>>("vtkSmartPointer<vtkFieldDataToDataSetAttribute>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFieldDataToDataSetAttribute>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFieldDataToDataSetAttribute::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFieldDataToDataSetAttribute& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFieldDataToDataSetAttribute::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFieldDataToDataSetAttribute::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFieldDataToDataSetAttribute::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFieldDataToDataSetAttribute& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProcessAllArrays", &vtkFieldDataToDataSetAttribute::SetProcessAllArrays)
    .function("GetProcessAllArrays", &vtkFieldDataToDataSetAttribute::GetProcessAllArrays)
    .function("ProcessAllArraysOn", &vtkFieldDataToDataSetAttribute::ProcessAllArraysOn)
    .function("ProcessAllArraysOff", &vtkFieldDataToDataSetAttribute::ProcessAllArraysOff)
    .function("SetOutputFieldType", &vtkFieldDataToDataSetAttribute::SetOutputFieldType)
    .function("GetOutputFieldType", &vtkFieldDataToDataSetAttribute::GetOutputFieldType)
    .function("AddFieldDataArray", emscripten::optional_override([](vtkFieldDataToDataSetAttribute& self, const std::string & arg_0) -> void {  return self.AddFieldDataArray( arg_0.c_str());}))
    .function("RemoveFieldDataArray", emscripten::optional_override([](vtkFieldDataToDataSetAttribute& self, const std::string & arg_0) -> void {  return self.RemoveFieldDataArray( arg_0.c_str());}))
    .function("ClearFieldDataArrays", &vtkFieldDataToDataSetAttribute::ClearFieldDataArrays);
}

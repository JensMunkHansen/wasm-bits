// JavaScript wrapper for vtkPassSelectedArrays with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkPassSelectedArraysEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkPassSelectedArrays.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkPassSelectedArrays.h"

template<> void emscripten::internal::raw_destructor<vtkPassSelectedArrays>(vtkPassSelectedArrays * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPassSelectedArrays_class) {
  emscripten::class_<vtkPassSelectedArrays, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkPassSelectedArrays")
    .smart_ptr<vtkSmartPointer<vtkPassSelectedArrays>>("vtkSmartPointer<vtkPassSelectedArrays>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPassSelectedArrays>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassSelectedArrays::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPassSelectedArrays& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPassSelectedArrays::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPassSelectedArrays::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassSelectedArrays::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPassSelectedArrays& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkPassSelectedArrays::SetEnabled)
    .function("GetEnabled", &vtkPassSelectedArrays::GetEnabled)
    .function("EnabledOn", &vtkPassSelectedArrays::EnabledOn)
    .function("EnabledOff", &vtkPassSelectedArrays::EnabledOff)
    .function("GetArraySelection", &vtkPassSelectedArrays::GetArraySelection, emscripten::allow_raw_pointers())
    .function("GetPointDataArraySelection", &vtkPassSelectedArrays::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkPassSelectedArrays::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetFieldDataArraySelection", &vtkPassSelectedArrays::GetFieldDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetVertexDataArraySelection", &vtkPassSelectedArrays::GetVertexDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetEdgeDataArraySelection", &vtkPassSelectedArrays::GetEdgeDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetRowDataArraySelection", &vtkPassSelectedArrays::GetRowDataArraySelection, emscripten::allow_raw_pointers());
}

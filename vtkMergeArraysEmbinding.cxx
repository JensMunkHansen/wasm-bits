// JavaScript wrapper for vtkMergeArrays with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMergeArraysEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMergeArrays.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMergeArrays.h"

template<> void emscripten::internal::raw_destructor<vtkMergeArrays>(vtkMergeArrays * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeArrays_class) {
  emscripten::class_<vtkMergeArrays, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkMergeArrays")
    .smart_ptr<vtkSmartPointer<vtkMergeArrays>>("vtkSmartPointer<vtkMergeArrays>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeArrays>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeArrays::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeArrays& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeArrays::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeArrays::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeArrays::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeArrays& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

// JavaScript wrapper for vtkPMergeArrays with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPMergeArraysEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPMergeArrays.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPMergeArrays.h"

template<> void emscripten::internal::raw_destructor<vtkPMergeArrays>(vtkPMergeArrays * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPMergeArrays_class) {
  emscripten::class_<vtkPMergeArrays, emscripten::base<vtkMergeArrays>>("vtkPMergeArrays")
    .smart_ptr<vtkSmartPointer<vtkPMergeArrays>>("vtkSmartPointer<vtkPMergeArrays>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPMergeArrays>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPMergeArrays::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPMergeArrays& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPMergeArrays::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPMergeArrays::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPMergeArrays::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPMergeArrays& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

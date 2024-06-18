// JavaScript wrapper for vtkImageInPlaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkImageInPlaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkImageInPlaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageInPlaceFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImageInPlaceFilter>(vtkImageInPlaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageInPlaceFilter_class) {
  emscripten::class_<vtkImageInPlaceFilter, emscripten::base<vtkImageAlgorithm>>("vtkImageInPlaceFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageInPlaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageInPlaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageInPlaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageInPlaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageInPlaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageInPlaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

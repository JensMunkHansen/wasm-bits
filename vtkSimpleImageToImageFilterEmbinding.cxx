// JavaScript wrapper for vtkSimpleImageToImageFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSimpleImageToImageFilterEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSimpleImageToImageFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSimpleImageToImageFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSimpleImageToImageFilter>(vtkSimpleImageToImageFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimpleImageToImageFilter_class) {
  emscripten::class_<vtkSimpleImageToImageFilter, emscripten::base<vtkImageAlgorithm>>("vtkSimpleImageToImageFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleImageToImageFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimpleImageToImageFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimpleImageToImageFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimpleImageToImageFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleImageToImageFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimpleImageToImageFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

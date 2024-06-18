// JavaScript wrapper for vtkImageIterateFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageIterateFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageIterateFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageIterateFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImageIterateFilter>(vtkImageIterateFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageIterateFilter_class) {
  emscripten::class_<vtkImageIterateFilter, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageIterateFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIterateFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageIterateFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageIterateFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageIterateFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIterateFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageIterateFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetIteration", &vtkImageIterateFilter::GetIteration)
    .function("GetNumberOfIterations", &vtkImageIterateFilter::GetNumberOfIterations);
}

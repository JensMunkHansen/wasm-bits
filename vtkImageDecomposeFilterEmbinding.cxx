// JavaScript wrapper for vtkImageDecomposeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageDecomposeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageDecomposeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDecomposeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImageDecomposeFilter>(vtkImageDecomposeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDecomposeFilter_class) {
  emscripten::class_<vtkImageDecomposeFilter, emscripten::base<vtkImageIterateFilter>>("vtkImageDecomposeFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDecomposeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDecomposeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDecomposeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDecomposeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDecomposeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDecomposeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimensionality", &vtkImageDecomposeFilter::SetDimensionality)
    .function("GetDimensionality", &vtkImageDecomposeFilter::GetDimensionality);
}

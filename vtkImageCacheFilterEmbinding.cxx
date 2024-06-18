// JavaScript wrapper for vtkImageCacheFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageCacheFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageCacheFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageCacheFilter.h"

template<> void emscripten::internal::raw_destructor<vtkImageCacheFilter>(vtkImageCacheFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCacheFilter_class) {
  emscripten::class_<vtkImageCacheFilter, emscripten::base<vtkImageAlgorithm>>("vtkImageCacheFilter")
    .smart_ptr<vtkSmartPointer<vtkImageCacheFilter>>("vtkSmartPointer<vtkImageCacheFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageCacheFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCacheFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCacheFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCacheFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCacheFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCacheFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCacheFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCacheSize", &vtkImageCacheFilter::SetCacheSize)
    .function("GetCacheSize", &vtkImageCacheFilter::GetCacheSize);
}

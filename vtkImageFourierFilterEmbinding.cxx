// JavaScript wrapper for vtkImageFourierFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageFourierFilterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageFourierFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageFourierFilter.h"


EMSCRIPTEN_BINDINGS(vtkImageComplex_t_class) {
  emscripten::class_<vtkImageComplex_t>("vtkImageComplex_t");
}
template<> void emscripten::internal::raw_destructor<vtkImageFourierFilter>(vtkImageFourierFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageFourierFilter_class) {
  emscripten::class_<vtkImageFourierFilter, emscripten::base<vtkImageDecomposeFilter>>("vtkImageFourierFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFourierFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageFourierFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageFourierFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageFourierFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageFourierFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageFourierFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

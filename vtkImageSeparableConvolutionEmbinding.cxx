// JavaScript wrapper for vtkImageSeparableConvolution with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageSeparableConvolutionEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageSeparableConvolution.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkFloatArray.h"
#include "vtkIndent.h"
#include "vtkImageSeparableConvolution.h"

template<> void emscripten::internal::raw_destructor<vtkImageSeparableConvolution>(vtkImageSeparableConvolution * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSeparableConvolution_class) {
  emscripten::class_<vtkImageSeparableConvolution, emscripten::base<vtkImageDecomposeFilter>>("vtkImageSeparableConvolution")
    .smart_ptr<vtkSmartPointer<vtkImageSeparableConvolution>>("vtkSmartPointer<vtkImageSeparableConvolution>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSeparableConvolution>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSeparableConvolution::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSeparableConvolution& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSeparableConvolution::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSeparableConvolution::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSeparableConvolution::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSeparableConvolution& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXKernel", &vtkImageSeparableConvolution::SetXKernel, emscripten::allow_raw_pointers())
    .function("GetXKernel", &vtkImageSeparableConvolution::GetXKernel, emscripten::allow_raw_pointers())
    .function("SetYKernel", &vtkImageSeparableConvolution::SetYKernel, emscripten::allow_raw_pointers())
    .function("GetYKernel", &vtkImageSeparableConvolution::GetYKernel, emscripten::allow_raw_pointers())
    .function("SetZKernel", &vtkImageSeparableConvolution::SetZKernel, emscripten::allow_raw_pointers())
    .function("GetZKernel", &vtkImageSeparableConvolution::GetZKernel, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkImageSeparableConvolution::GetMTime);
}

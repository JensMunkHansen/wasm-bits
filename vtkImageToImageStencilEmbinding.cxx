// JavaScript wrapper for vtkImageToImageStencil with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImageToImageStencilEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkImageToImageStencil.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageToImageStencil.h"

template<> void emscripten::internal::raw_destructor<vtkImageToImageStencil>(vtkImageToImageStencil * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageToImageStencil_class) {
  emscripten::class_<vtkImageToImageStencil, emscripten::base<vtkImageStencilAlgorithm>>("vtkImageToImageStencil")
    .smart_ptr<vtkSmartPointer<vtkImageToImageStencil>>("vtkSmartPointer<vtkImageToImageStencil>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageToImageStencil>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToImageStencil::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageToImageStencil& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageToImageStencil::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageToImageStencil::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToImageStencil::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageToImageStencil& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkImageToImageStencil::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImageToImageStencil::GetInput, emscripten::allow_raw_pointers())
    .function("ThresholdByUpper", &vtkImageToImageStencil::ThresholdByUpper)
    .function("ThresholdByLower", &vtkImageToImageStencil::ThresholdByLower)
    .function("ThresholdBetween", &vtkImageToImageStencil::ThresholdBetween)
    .function("SetUpperThreshold", &vtkImageToImageStencil::SetUpperThreshold)
    .function("GetUpperThreshold", &vtkImageToImageStencil::GetUpperThreshold)
    .function("SetLowerThreshold", &vtkImageToImageStencil::SetLowerThreshold)
    .function("GetLowerThreshold", &vtkImageToImageStencil::GetLowerThreshold);
}

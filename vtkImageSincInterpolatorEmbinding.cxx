// JavaScript wrapper for vtkImageSincInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageSincInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageSincInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSincInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkImageSincInterpolator_0_1_constants) {
  const struct { const char *name; int value; }
    constants[12] = {
      { "VTK_LANCZOS_WINDOW", 0 },
      { "VTK_KAISER_WINDOW", 1 },
      { "VTK_COSINE_WINDOW", 2 },
      { "VTK_HANN_WINDOW", 3 },
      { "VTK_HAMMING_WINDOW", 4 },
      { "VTK_BLACKMAN_WINDOW", 5 },
      { "VTK_BLACKMAN_HARRIS3", 6 },
      { "VTK_BLACKMAN_HARRIS4", 7 },
      { "VTK_NUTTALL_WINDOW", 8 },
      { "VTK_BLACKMAN_NUTTALL3", 9 },
      { "VTK_BLACKMAN_NUTTALL4", 10 },
      { "VTK_SINC_KERNEL_SIZE_MAX", 32 },
  };
  for (int c = 0; c < 12; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageSincInterpolator>(vtkImageSincInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSincInterpolator_class) {
  emscripten::class_<vtkImageSincInterpolator, emscripten::base<vtkAbstractImageInterpolator>>("vtkImageSincInterpolator")
    .smart_ptr<vtkSmartPointer<vtkImageSincInterpolator>>("vtkSmartPointer<vtkImageSincInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageSincInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSincInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSincInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSincInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSincInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSincInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSincInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWindowFunction", &vtkImageSincInterpolator::SetWindowFunction)
    .function("SetWindowFunctionToLanczos", &vtkImageSincInterpolator::SetWindowFunctionToLanczos)
    .function("SetWindowFunctionToKaiser", &vtkImageSincInterpolator::SetWindowFunctionToKaiser)
    .function("SetWindowFunctionToCosine", &vtkImageSincInterpolator::SetWindowFunctionToCosine)
    .function("SetWindowFunctionToHann", &vtkImageSincInterpolator::SetWindowFunctionToHann)
    .function("SetWindowFunctionToHamming", &vtkImageSincInterpolator::SetWindowFunctionToHamming)
    .function("SetWindowFunctionToBlackman", &vtkImageSincInterpolator::SetWindowFunctionToBlackman)
    .function("SetWindowFunctionToBlackmanHarris3", &vtkImageSincInterpolator::SetWindowFunctionToBlackmanHarris3)
    .function("SetWindowFunctionToBlackmanHarris4", &vtkImageSincInterpolator::SetWindowFunctionToBlackmanHarris4)
    .function("SetWindowFunctionToNuttall", &vtkImageSincInterpolator::SetWindowFunctionToNuttall)
    .function("SetWindowFunctionToBlackmanNuttall3", &vtkImageSincInterpolator::SetWindowFunctionToBlackmanNuttall3)
    .function("SetWindowFunctionToBlackmanNuttall4", &vtkImageSincInterpolator::SetWindowFunctionToBlackmanNuttall4)
    .function("GetWindowFunction", &vtkImageSincInterpolator::GetWindowFunction)
    .function("GetWindowFunctionAsString", emscripten::optional_override([](vtkImageSincInterpolator& self) -> std::string {  return self.GetWindowFunctionAsString();}))
    .function("SetWindowHalfWidth", &vtkImageSincInterpolator::SetWindowHalfWidth)
    .function("GetWindowHalfWidth", &vtkImageSincInterpolator::GetWindowHalfWidth)
    .function("SetUseWindowParameter", &vtkImageSincInterpolator::SetUseWindowParameter)
    .function("UseWindowParameterOn", &vtkImageSincInterpolator::UseWindowParameterOn)
    .function("UseWindowParameterOff", &vtkImageSincInterpolator::UseWindowParameterOff)
    .function("GetUseWindowParameter", &vtkImageSincInterpolator::GetUseWindowParameter)
    .function("SetWindowParameter", &vtkImageSincInterpolator::SetWindowParameter)
    .function("GetWindowParameter", &vtkImageSincInterpolator::GetWindowParameter)
    .function("SetBlurFactors", emscripten::select_overload<void(vtkImageSincInterpolator&, double, double, double)>([](vtkImageSincInterpolator& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBlurFactors( arg_0, arg_1, arg_2); }))
    .function("SetAntialiasing", &vtkImageSincInterpolator::SetAntialiasing)
    .function("AntialiasingOn", &vtkImageSincInterpolator::AntialiasingOn)
    .function("AntialiasingOff", &vtkImageSincInterpolator::AntialiasingOff)
    .function("GetAntialiasing", &vtkImageSincInterpolator::GetAntialiasing)
    .function("SetRenormalization", &vtkImageSincInterpolator::SetRenormalization)
    .function("RenormalizationOn", &vtkImageSincInterpolator::RenormalizationOn)
    .function("RenormalizationOff", &vtkImageSincInterpolator::RenormalizationOff)
    .function("GetRenormalization", &vtkImageSincInterpolator::GetRenormalization)
    .function("IsSeparable", &vtkImageSincInterpolator::IsSeparable);
}

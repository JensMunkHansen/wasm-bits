// JavaScript wrapper for vtkImageIdealLowPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageIdealLowPassEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageIdealLowPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageIdealLowPass.h"

template<> void emscripten::internal::raw_destructor<vtkImageIdealLowPass>(vtkImageIdealLowPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageIdealLowPass_class) {
  emscripten::class_<vtkImageIdealLowPass, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageIdealLowPass")
    .smart_ptr<vtkSmartPointer<vtkImageIdealLowPass>>("vtkSmartPointer<vtkImageIdealLowPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageIdealLowPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIdealLowPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageIdealLowPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageIdealLowPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageIdealLowPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIdealLowPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageIdealLowPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageIdealLowPass&, double, double, double)>([](vtkImageIdealLowPass& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCutOff( arg_0, arg_1, arg_2); }))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageIdealLowPass&, double)>([](vtkImageIdealLowPass& self, double arg_0) -> void { return self.SetCutOff( arg_0); }))
    .function("SetXCutOff", &vtkImageIdealLowPass::SetXCutOff)
    .function("SetYCutOff", &vtkImageIdealLowPass::SetYCutOff)
    .function("SetZCutOff", &vtkImageIdealLowPass::SetZCutOff)
    .function("GetXCutOff", &vtkImageIdealLowPass::GetXCutOff)
    .function("GetYCutOff", &vtkImageIdealLowPass::GetYCutOff)
    .function("GetZCutOff", &vtkImageIdealLowPass::GetZCutOff);
}

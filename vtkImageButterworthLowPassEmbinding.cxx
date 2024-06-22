// JavaScript wrapper for vtkImageButterworthLowPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageButterworthLowPassEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageButterworthLowPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageButterworthLowPass.h"

template<> void emscripten::internal::raw_destructor<vtkImageButterworthLowPass>(vtkImageButterworthLowPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageButterworthLowPass_class) {
  emscripten::class_<vtkImageButterworthLowPass, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageButterworthLowPass")
    .smart_ptr<vtkSmartPointer<vtkImageButterworthLowPass>>("vtkSmartPointer<vtkImageButterworthLowPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageButterworthLowPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageButterworthLowPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageButterworthLowPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageButterworthLowPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageButterworthLowPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageButterworthLowPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageButterworthLowPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageButterworthLowPass&, double, double, double)>([](vtkImageButterworthLowPass& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCutOff( arg_0, arg_1, arg_2); }))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageButterworthLowPass&, double)>([](vtkImageButterworthLowPass& self, double arg_0) -> void { return self.SetCutOff( arg_0); }))
    .function("SetXCutOff", &vtkImageButterworthLowPass::SetXCutOff)
    .function("SetYCutOff", &vtkImageButterworthLowPass::SetYCutOff)
    .function("SetZCutOff", &vtkImageButterworthLowPass::SetZCutOff)
    .function("GetXCutOff", &vtkImageButterworthLowPass::GetXCutOff)
    .function("GetYCutOff", &vtkImageButterworthLowPass::GetYCutOff)
    .function("GetZCutOff", &vtkImageButterworthLowPass::GetZCutOff)
    .function("SetOrder", &vtkImageButterworthLowPass::SetOrder)
    .function("GetOrder", &vtkImageButterworthLowPass::GetOrder);
}

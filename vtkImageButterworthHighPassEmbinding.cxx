// JavaScript wrapper for vtkImageButterworthHighPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageButterworthHighPassEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageButterworthHighPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageButterworthHighPass.h"

template<> void emscripten::internal::raw_destructor<vtkImageButterworthHighPass>(vtkImageButterworthHighPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageButterworthHighPass_class) {
  emscripten::class_<vtkImageButterworthHighPass, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageButterworthHighPass")
    .smart_ptr<vtkSmartPointer<vtkImageButterworthHighPass>>("vtkSmartPointer<vtkImageButterworthHighPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageButterworthHighPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageButterworthHighPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageButterworthHighPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageButterworthHighPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageButterworthHighPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageButterworthHighPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageButterworthHighPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageButterworthHighPass&, double, double, double)>([](vtkImageButterworthHighPass& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCutOff( arg_0, arg_1, arg_2); }))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageButterworthHighPass&, double)>([](vtkImageButterworthHighPass& self, double arg_0) -> void { return self.SetCutOff( arg_0); }))
    .function("SetXCutOff", &vtkImageButterworthHighPass::SetXCutOff)
    .function("SetYCutOff", &vtkImageButterworthHighPass::SetYCutOff)
    .function("SetZCutOff", &vtkImageButterworthHighPass::SetZCutOff)
    .function("GetXCutOff", &vtkImageButterworthHighPass::GetXCutOff)
    .function("GetYCutOff", &vtkImageButterworthHighPass::GetYCutOff)
    .function("GetZCutOff", &vtkImageButterworthHighPass::GetZCutOff)
    .function("SetOrder", &vtkImageButterworthHighPass::SetOrder)
    .function("GetOrder", &vtkImageButterworthHighPass::GetOrder);
}

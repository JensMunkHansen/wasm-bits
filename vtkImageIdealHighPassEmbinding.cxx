// JavaScript wrapper for vtkImageIdealHighPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImagingFourier.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingFourier.js/vtkImageIdealHighPassEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Fourier/vtkImageIdealHighPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageIdealHighPass.h"

template<> void emscripten::internal::raw_destructor<vtkImageIdealHighPass>(vtkImageIdealHighPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageIdealHighPass_class) {
  emscripten::class_<vtkImageIdealHighPass, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageIdealHighPass")
    .smart_ptr<vtkSmartPointer<vtkImageIdealHighPass>>("vtkSmartPointer<vtkImageIdealHighPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageIdealHighPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIdealHighPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageIdealHighPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageIdealHighPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageIdealHighPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageIdealHighPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageIdealHighPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageIdealHighPass&, double, double, double)>([](vtkImageIdealHighPass& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCutOff( arg_0, arg_1, arg_2); }))
    .function("SetCutOff", emscripten::select_overload<void(vtkImageIdealHighPass&, double)>([](vtkImageIdealHighPass& self, double arg_0) -> void { return self.SetCutOff( arg_0); }))
    .function("SetXCutOff", &vtkImageIdealHighPass::SetXCutOff)
    .function("SetYCutOff", &vtkImageIdealHighPass::SetYCutOff)
    .function("SetZCutOff", &vtkImageIdealHighPass::SetZCutOff)
    .function("GetXCutOff", &vtkImageIdealHighPass::GetXCutOff)
    .function("GetYCutOff", &vtkImageIdealHighPass::GetYCutOff)
    .function("GetZCutOff", &vtkImageIdealHighPass::GetZCutOff);
}

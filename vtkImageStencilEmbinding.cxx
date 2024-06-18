// JavaScript wrapper for vtkImageStencil with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImageStencilEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkImageStencil.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageStencilData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageData.h"
#include "vtkImageStencil.h"

template<> void emscripten::internal::raw_destructor<vtkImageStencil>(vtkImageStencil * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageStencil_class) {
  emscripten::class_<vtkImageStencil, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageStencil")
    .smart_ptr<vtkSmartPointer<vtkImageStencil>>("vtkSmartPointer<vtkImageStencil>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageStencil>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencil::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageStencil& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageStencil::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageStencil::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencil::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageStencil& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStencilData", &vtkImageStencil::SetStencilData, emscripten::allow_raw_pointers())
    .function("GetStencil", &vtkImageStencil::GetStencil, emscripten::allow_raw_pointers())
    .function("SetStencilConnection", &vtkImageStencil::SetStencilConnection, emscripten::allow_raw_pointers())
    .function("SetReverseStencil", &vtkImageStencil::SetReverseStencil)
    .function("ReverseStencilOn", &vtkImageStencil::ReverseStencilOn)
    .function("ReverseStencilOff", &vtkImageStencil::ReverseStencilOff)
    .function("GetReverseStencil", &vtkImageStencil::GetReverseStencil)
    .function("SetBackgroundInputData", &vtkImageStencil::SetBackgroundInputData, emscripten::allow_raw_pointers())
    .function("GetBackgroundInput", &vtkImageStencil::GetBackgroundInput, emscripten::allow_raw_pointers())
    .function("SetBackgroundValue", &vtkImageStencil::SetBackgroundValue)
    .function("GetBackgroundValue", &vtkImageStencil::GetBackgroundValue)
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkImageStencil&, double, double, double, double)>([](vtkImageStencil& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2, arg_3); }));
}

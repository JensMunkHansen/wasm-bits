// JavaScript wrapper for vtkImplicitFunctionToImageStencil with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImplicitFunctionToImageStencilEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkImplicitFunctionToImageStencil.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkImplicitFunctionToImageStencil.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitFunctionToImageStencil>(vtkImplicitFunctionToImageStencil * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitFunctionToImageStencil_class) {
  emscripten::class_<vtkImplicitFunctionToImageStencil, emscripten::base<vtkImageStencilSource>>("vtkImplicitFunctionToImageStencil")
    .smart_ptr<vtkSmartPointer<vtkImplicitFunctionToImageStencil>>("vtkSmartPointer<vtkImplicitFunctionToImageStencil>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitFunctionToImageStencil>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitFunctionToImageStencil::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitFunctionToImageStencil& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitFunctionToImageStencil::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitFunctionToImageStencil::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitFunctionToImageStencil::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitFunctionToImageStencil& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkImplicitFunctionToImageStencil::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkImplicitFunctionToImageStencil::GetInput, emscripten::allow_raw_pointers())
    .function("SetThreshold", &vtkImplicitFunctionToImageStencil::SetThreshold)
    .function("GetThreshold", &vtkImplicitFunctionToImageStencil::GetThreshold)
    .function("GetMTime", &vtkImplicitFunctionToImageStencil::GetMTime);
}

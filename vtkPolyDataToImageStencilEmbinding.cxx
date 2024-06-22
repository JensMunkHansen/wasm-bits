// JavaScript wrapper for vtkPolyDataToImageStencil with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkImagingStencil.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingStencil.js/vtkPolyDataToImageStencilEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Stencil/vtkPolyDataToImageStencil.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPolyDataToImageStencil.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataToImageStencil>(vtkPolyDataToImageStencil * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataToImageStencil_class) {
  emscripten::class_<vtkPolyDataToImageStencil, emscripten::base<vtkImageStencilSource>>("vtkPolyDataToImageStencil")
    .smart_ptr<vtkSmartPointer<vtkPolyDataToImageStencil>>("vtkSmartPointer<vtkPolyDataToImageStencil>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataToImageStencil>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataToImageStencil::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataToImageStencil& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataToImageStencil::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataToImageStencil::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataToImageStencil::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataToImageStencil& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkPolyDataToImageStencil::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPolyDataToImageStencil::GetInput, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkPolyDataToImageStencil::SetTolerance)
    .function("GetToleranceMinValue", &vtkPolyDataToImageStencil::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkPolyDataToImageStencil::GetToleranceMaxValue)
    .function("GetTolerance", &vtkPolyDataToImageStencil::GetTolerance)
    .function("GetEnableSMP", &vtkPolyDataToImageStencil::GetEnableSMP)
    .function("SetEnableSMP", &vtkPolyDataToImageStencil::SetEnableSMP);
}

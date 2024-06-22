// JavaScript wrapper for vtkResizingWindowToImageFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkResizingWindowToImageFilterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkResizingWindowToImageFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkResizingWindowToImageFilter.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkResizingWindowToImageFilter_0_1_constants) {
  emscripten::constant("VTK_ZBUFFER", 5);
}
template<> void emscripten::internal::raw_destructor<vtkResizingWindowToImageFilter>(vtkResizingWindowToImageFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResizingWindowToImageFilter_class) {
  emscripten::class_<vtkResizingWindowToImageFilter, emscripten::base<vtkAlgorithm>>("vtkResizingWindowToImageFilter")
    .smart_ptr<vtkSmartPointer<vtkResizingWindowToImageFilter>>("vtkSmartPointer<vtkResizingWindowToImageFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResizingWindowToImageFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResizingWindowToImageFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResizingWindowToImageFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResizingWindowToImageFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResizingWindowToImageFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResizingWindowToImageFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResizingWindowToImageFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkResizingWindowToImageFilter::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkResizingWindowToImageFilter::GetInput, emscripten::allow_raw_pointers())
    .function("SetSize", emscripten::select_overload<void(vtkResizingWindowToImageFilter&, int, int)>([](vtkResizingWindowToImageFilter& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("GetSizeLimit", &vtkResizingWindowToImageFilter::GetSizeLimit)
    .function("SetSizeLimit", &vtkResizingWindowToImageFilter::SetSizeLimit)
    .function("SetInputBufferType", &vtkResizingWindowToImageFilter::SetInputBufferType)
    .function("GetInputBufferType", &vtkResizingWindowToImageFilter::GetInputBufferType)
    .function("SetInputBufferTypeToRGB", &vtkResizingWindowToImageFilter::SetInputBufferTypeToRGB)
    .function("SetInputBufferTypeToRGBA", &vtkResizingWindowToImageFilter::SetInputBufferTypeToRGBA)
    .function("SetInputBufferTypeToZBuffer", &vtkResizingWindowToImageFilter::SetInputBufferTypeToZBuffer)
    .function("GetOutput", &vtkResizingWindowToImageFilter::GetOutput, emscripten::allow_raw_pointers());
}

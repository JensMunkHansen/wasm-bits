// JavaScript wrapper for vtkWindowToImageFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkWindowToImageFilterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkWindowToImageFilter.h
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
#include "vtkWindowToImageFilter.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkWindowToImageFilter_0_1_constants) {
  emscripten::constant("VTK_ZBUFFER", 5);
}
template<> void emscripten::internal::raw_destructor<vtkWindowToImageFilter>(vtkWindowToImageFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWindowToImageFilter_class) {
  emscripten::class_<vtkWindowToImageFilter, emscripten::base<vtkAlgorithm>>("vtkWindowToImageFilter")
    .smart_ptr<vtkSmartPointer<vtkWindowToImageFilter>>("vtkSmartPointer<vtkWindowToImageFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWindowToImageFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowToImageFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWindowToImageFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWindowToImageFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWindowToImageFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowToImageFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWindowToImageFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkWindowToImageFilter::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkWindowToImageFilter::GetInput, emscripten::allow_raw_pointers())
    .function("SetScale", emscripten::select_overload<void(vtkWindowToImageFilter&, int, int)>([](vtkWindowToImageFilter& self, int arg_0, int arg_1) -> void { return self.SetScale( arg_0, arg_1); }))
    .function("SetScale", emscripten::select_overload<void(vtkWindowToImageFilter&, int)>([](vtkWindowToImageFilter& self, int arg_0) -> void { return self.SetScale( arg_0); }))
    .function("SetFixBoundary", &vtkWindowToImageFilter::SetFixBoundary)
    .function("GetFixBoundary", &vtkWindowToImageFilter::GetFixBoundary)
    .function("FixBoundaryOn", &vtkWindowToImageFilter::FixBoundaryOn)
    .function("FixBoundaryOff", &vtkWindowToImageFilter::FixBoundaryOff)
    .function("ReadFrontBufferOn", &vtkWindowToImageFilter::ReadFrontBufferOn)
    .function("ReadFrontBufferOff", &vtkWindowToImageFilter::ReadFrontBufferOff)
    .function("GetReadFrontBuffer", &vtkWindowToImageFilter::GetReadFrontBuffer)
    .function("SetReadFrontBuffer", &vtkWindowToImageFilter::SetReadFrontBuffer)
    .function("ShouldRerenderOn", &vtkWindowToImageFilter::ShouldRerenderOn)
    .function("ShouldRerenderOff", &vtkWindowToImageFilter::ShouldRerenderOff)
    .function("SetShouldRerender", &vtkWindowToImageFilter::SetShouldRerender)
    .function("GetShouldRerender", &vtkWindowToImageFilter::GetShouldRerender)
    .function("SetViewport", emscripten::select_overload<void(vtkWindowToImageFilter&, double, double, double, double)>([](vtkWindowToImageFilter& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetViewport( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetViewport", emscripten::select_overload<void(vtkWindowToImageFilter&, std::uintptr_t)>([](vtkWindowToImageFilter& self, std::uintptr_t arg_0) -> void { return self.SetViewport(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetInputBufferType", &vtkWindowToImageFilter::SetInputBufferType)
    .function("GetInputBufferType", &vtkWindowToImageFilter::GetInputBufferType)
    .function("SetInputBufferTypeToRGB", &vtkWindowToImageFilter::SetInputBufferTypeToRGB)
    .function("SetInputBufferTypeToRGBA", &vtkWindowToImageFilter::SetInputBufferTypeToRGBA)
    .function("SetInputBufferTypeToZBuffer", &vtkWindowToImageFilter::SetInputBufferTypeToZBuffer)
    .function("GetOutput", &vtkWindowToImageFilter::GetOutput, emscripten::allow_raw_pointers());
}

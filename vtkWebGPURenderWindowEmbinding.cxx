// JavaScript wrapper for vtkWebGPURenderWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPURenderWindowEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPURenderWindow.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnsignedCharArray.h"
#include "vtkFloatArray.h"
#include "vtkWindow.h"
#include "vtkWebGPURenderWindow.h"

template<> void emscripten::internal::raw_destructor<vtkWebGPURenderWindow>(vtkWebGPURenderWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPURenderWindow_class) {
  emscripten::class_<vtkWebGPURenderWindow, emscripten::base<vtkRenderWindow>>("vtkWebGPURenderWindow")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPURenderWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPURenderWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPURenderWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPURenderWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPURenderWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPURenderWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PreferHighPerformanceAdapter", &vtkWebGPURenderWindow::PreferHighPerformanceAdapter)
    .function("PreferLowPowerAdapter", &vtkWebGPURenderWindow::PreferLowPowerAdapter)
    .function("SetBackendTypeToD3D11", &vtkWebGPURenderWindow::SetBackendTypeToD3D11)
    .function("SetBackendTypeToD3D12", &vtkWebGPURenderWindow::SetBackendTypeToD3D12)
    .function("SetBackendTypeToMetal", &vtkWebGPURenderWindow::SetBackendTypeToMetal)
    .function("SetBackendTypeToVulkan", &vtkWebGPURenderWindow::SetBackendTypeToVulkan)
    .function("SetBackendTypeToOpenGL", &vtkWebGPURenderWindow::SetBackendTypeToOpenGL)
    .function("SetBackendTypeToOpenGLES", &vtkWebGPURenderWindow::SetBackendTypeToOpenGLES)
    .function("GetBackendTypeAsString", &vtkWebGPURenderWindow::GetBackendTypeAsString)
    .function("Start", &vtkWebGPURenderWindow::Start)
    .function("End", &vtkWebGPURenderWindow::End)
    .function("Render", &vtkWebGPURenderWindow::Render)
    .function("StereoMidpoint", &vtkWebGPURenderWindow::StereoMidpoint)
    .function("Frame", &vtkWebGPURenderWindow::Frame)
    .function("GetRenderingBackend", emscripten::optional_override([](vtkWebGPURenderWindow& self) -> std::string {  return self.GetRenderingBackend();}))
    .function("ReadPixels", &vtkWebGPURenderWindow::ReadPixels)
    .function("GetPixelData", emscripten::select_overload<std::uintptr_t(vtkWebGPURenderWindow&, int, int, int, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, int, vtkUnsignedCharArray*, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkUnsignedCharArray* arg_5, int arg_6) -> int { return self.GetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, std::uintptr_t, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6) -> int { return self.SetPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5, arg_6); }))
    .function("SetPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, vtkUnsignedCharArray*, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkUnsignedCharArray* arg_4, int arg_5, int arg_6) -> int { return self.SetPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("GetRGBAPixelData", emscripten::select_overload<std::uintptr_t(vtkWebGPURenderWindow&, int, int, int, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetRGBAPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, int, vtkFloatArray*, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkFloatArray* arg_5, int arg_6) -> int { return self.GetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetRGBAPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, std::uintptr_t, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBAPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float)), arg_5, arg_6, arg_7); }))
    .function("SetRGBAPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, vtkFloatArray*, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBAPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("ReleaseRGBAPixelData", emscripten::optional_override([](vtkWebGPURenderWindow& self, std::uintptr_t arg_0) -> void {  return self.ReleaseRGBAPixelData(reinterpret_cast<float*>(arg_0 * sizeof(float)));}))
    .function("GetRGBACharPixelData", emscripten::select_overload<std::uintptr_t(vtkWebGPURenderWindow&, int, int, int, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5)); }))
    .function("GetRGBACharPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, int, vtkUnsignedCharArray*, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, vtkUnsignedCharArray* arg_5, int arg_6) -> int { return self.GetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("SetRGBACharPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, std::uintptr_t, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5, arg_6, arg_7); }))
    .function("SetRGBACharPixelData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, vtkUnsignedCharArray*, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkUnsignedCharArray* arg_4, int arg_5, int arg_6, int arg_7) -> int { return self.SetRGBACharPixelData( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }), emscripten::allow_raw_pointers())
    .function("GetZbufferData", emscripten::select_overload<std::uintptr_t(vtkWebGPURenderWindow&, int, int, int, int)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetZbufferData( arg_0, arg_1, arg_2, arg_3)); }))
    .function("GetZbufferData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> int { return self.GetZbufferData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float))); }))
    .function("GetZbufferData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, vtkFloatArray*)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4) -> int { return self.GetZbufferData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetZbufferData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, std::uintptr_t)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> int { return self.SetZbufferData( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<float*>(arg_4 * sizeof(float))); }))
    .function("SetZbufferData", emscripten::select_overload<int(vtkWebGPURenderWindow&, int, int, int, int, vtkFloatArray*)>([](vtkWebGPURenderWindow& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkFloatArray* arg_4) -> int { return self.SetZbufferData( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("GetColorBufferSizes", emscripten::optional_override([](vtkWebGPURenderWindow& self, std::uintptr_t arg_0) -> int {  return self.GetColorBufferSizes(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("WaitForCompletion", &vtkWebGPURenderWindow::WaitForCompletion)
    .function("SupportsOpenGL", &vtkWebGPURenderWindow::SupportsOpenGL)
    .function("ReportCapabilities", emscripten::optional_override([](vtkWebGPURenderWindow& self) -> std::string {  return self.ReportCapabilities();}))
    .function("InitializeFromCurrentContext", &vtkWebGPURenderWindow::InitializeFromCurrentContext)
    .function("ReleaseGraphicsResources", &vtkWebGPURenderWindow::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("HasStencil", &vtkWebGPURenderWindow::HasStencil);
}

// JavaScript wrapper for vtkWebAssemblyWebGPURenderWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebAssemblyWebGPURenderWindowEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebAssemblyWebGPURenderWindow.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWebAssemblyWebGPURenderWindow.h"

template<> void emscripten::internal::raw_destructor<vtkWebAssemblyWebGPURenderWindow>(vtkWebAssemblyWebGPURenderWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebAssemblyWebGPURenderWindow_class) {
  emscripten::class_<vtkWebAssemblyWebGPURenderWindow, emscripten::base<vtkWebGPURenderWindow>>("vtkWebAssemblyWebGPURenderWindow")
    .smart_ptr<vtkSmartPointer<vtkWebAssemblyWebGPURenderWindow>>("vtkSmartPointer<vtkWebAssemblyWebGPURenderWindow>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebAssemblyWebGPURenderWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebAssemblyWebGPURenderWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebAssemblyWebGPURenderWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebAssemblyWebGPURenderWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebAssemblyWebGPURenderWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkWebAssemblyWebGPURenderWindow::Initialize)
    .function("Finalize", &vtkWebAssemblyWebGPURenderWindow::Finalize)
    .function("SetFullScreen", &vtkWebAssemblyWebGPURenderWindow::SetFullScreen)
    .function("SetShowWindow", &vtkWebAssemblyWebGPURenderWindow::SetShowWindow)
    .function("SetSize", emscripten::select_overload<void(vtkWebAssemblyWebGPURenderWindow&, int, int)>([](vtkWebAssemblyWebGPURenderWindow& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("SetWindowName", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self, const std::string & arg_0) -> void {  return self.SetWindowName( arg_0.c_str());}))
    .function("GetGenericWindowId", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericWindowId());}))
    .function("GetGenericDrawable", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDrawable());}))
    .function("MakeCurrent", &vtkWebAssemblyWebGPURenderWindow::MakeCurrent)
    .function("ReleaseCurrent", &vtkWebAssemblyWebGPURenderWindow::ReleaseCurrent)
    .function("IsCurrent", &vtkWebAssemblyWebGPURenderWindow::IsCurrent)
    .function("Clean", &vtkWebAssemblyWebGPURenderWindow::Clean)
    .function("Frame", &vtkWebAssemblyWebGPURenderWindow::Frame)
    .function("GetColorBufferSizes", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self, std::uintptr_t arg_0) -> int {  return self.GetColorBufferSizes(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("HideCursor", &vtkWebAssemblyWebGPURenderWindow::HideCursor)
    .function("ShowCursor", &vtkWebAssemblyWebGPURenderWindow::ShowCursor)
    .function("GetCanvasId", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self) -> std::string {  return self.GetCanvasId();}))
    .function("SetCanvasId", emscripten::optional_override([](vtkWebAssemblyWebGPURenderWindow& self, const std::string & arg_0) -> void {  return self.SetCanvasId( arg_0.c_str());}));
}

// JavaScript wrapper for vtkGenericOpenGLRenderWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGenericOpenGLRenderWindowEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGenericOpenGLRenderWindow.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericOpenGLRenderWindow.h"

template<> void emscripten::internal::raw_destructor<vtkGenericOpenGLRenderWindow>(vtkGenericOpenGLRenderWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericOpenGLRenderWindow_class) {
  emscripten::class_<vtkGenericOpenGLRenderWindow, emscripten::base<vtkOpenGLRenderWindow>>("vtkGenericOpenGLRenderWindow")
    .smart_ptr<vtkSmartPointer<vtkGenericOpenGLRenderWindow>>("vtkSmartPointer<vtkGenericOpenGLRenderWindow>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericOpenGLRenderWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericOpenGLRenderWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericOpenGLRenderWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericOpenGLRenderWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericOpenGLRenderWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Finalize", &vtkGenericOpenGLRenderWindow::Finalize)
    .function("Frame", &vtkGenericOpenGLRenderWindow::Frame)
    .function("MakeCurrent", &vtkGenericOpenGLRenderWindow::MakeCurrent)
    .function("IsCurrent", &vtkGenericOpenGLRenderWindow::IsCurrent)
    .function("SupportsOpenGL", &vtkGenericOpenGLRenderWindow::SupportsOpenGL)
    .function("IsDirect", &vtkGenericOpenGLRenderWindow::IsDirect)
    .function("SetFrontLeftBuffer", &vtkGenericOpenGLRenderWindow::SetFrontLeftBuffer)
    .function("SetFrontRightBuffer", &vtkGenericOpenGLRenderWindow::SetFrontRightBuffer)
    .function("SetBackLeftBuffer", &vtkGenericOpenGLRenderWindow::SetBackLeftBuffer)
    .function("SetBackRightBuffer", &vtkGenericOpenGLRenderWindow::SetBackRightBuffer)
    .function("SetOwnContext", &vtkGenericOpenGLRenderWindow::SetOwnContext)
    .function("PushState", &vtkGenericOpenGLRenderWindow::PushState)
    .function("PopState", &vtkGenericOpenGLRenderWindow::PopState)
    .function("SetWindowId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetWindowId(reinterpret_cast<void*>(arg_0));}))
    .function("GetGenericWindowId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericWindowId());}))
    .function("SetDisplayId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetDisplayId(reinterpret_cast<void*>(arg_0));}))
    .function("SetParentId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetParentId(reinterpret_cast<void*>(arg_0));}))
    .function("GetGenericDisplayId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDisplayId());}))
    .function("GetGenericParentId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericParentId());}))
    .function("GetGenericContext", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericContext());}))
    .function("GetGenericDrawable", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDrawable());}))
    .function("SetWindowInfo", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, const std::string & arg_0) -> void {  return self.SetWindowInfo( arg_0.c_str());}))
    .function("SetParentInfo", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, const std::string & arg_0) -> void {  return self.SetParentInfo( arg_0.c_str());}))
    .function("HideCursor", &vtkGenericOpenGLRenderWindow::HideCursor)
    .function("ShowCursor", &vtkGenericOpenGLRenderWindow::ShowCursor)
    .function("SetFullScreen", &vtkGenericOpenGLRenderWindow::SetFullScreen)
    .function("WindowRemap", &vtkGenericOpenGLRenderWindow::WindowRemap)
    .function("GetEventPending", &vtkGenericOpenGLRenderWindow::GetEventPending)
    .function("SetNextWindowId", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, std::uintptr_t arg_0) -> void {  return self.SetNextWindowId(reinterpret_cast<void*>(arg_0));}))
    .function("SetNextWindowInfo", emscripten::optional_override([](vtkGenericOpenGLRenderWindow& self, const std::string & arg_0) -> void {  return self.SetNextWindowInfo( arg_0.c_str());}))
    .function("CreateAWindow", &vtkGenericOpenGLRenderWindow::CreateAWindow)
    .function("DestroyWindow", &vtkGenericOpenGLRenderWindow::DestroyWindow)
    .function("SetIsDirect", &vtkGenericOpenGLRenderWindow::SetIsDirect)
    .function("SetSupportsOpenGL", &vtkGenericOpenGLRenderWindow::SetSupportsOpenGL)
    .function("SetIsCurrent", &vtkGenericOpenGLRenderWindow::SetIsCurrent)
    .function("Render", &vtkGenericOpenGLRenderWindow::Render)
    .function("GetMaximumHardwareLineWidth", &vtkGenericOpenGLRenderWindow::GetMaximumHardwareLineWidth)
    .function("SetForceMaximumHardwareLineWidth", &vtkGenericOpenGLRenderWindow::SetForceMaximumHardwareLineWidth)
    .function("GetForceMaximumHardwareLineWidthMinValue", &vtkGenericOpenGLRenderWindow::GetForceMaximumHardwareLineWidthMinValue)
    .function("GetForceMaximumHardwareLineWidthMaxValue", &vtkGenericOpenGLRenderWindow::GetForceMaximumHardwareLineWidthMaxValue)
    .function("GetForceMaximumHardwareLineWidth", &vtkGenericOpenGLRenderWindow::GetForceMaximumHardwareLineWidth)
    .function("SetReadyForRendering", &vtkGenericOpenGLRenderWindow::SetReadyForRendering)
    .function("GetReadyForRendering", &vtkGenericOpenGLRenderWindow::GetReadyForRendering)
    .function("SetScreenSize", emscripten::select_overload<void(vtkGenericOpenGLRenderWindow&, int, int)>([](vtkGenericOpenGLRenderWindow& self, int arg_0, int arg_1) -> void { return self.SetScreenSize( arg_0, arg_1); }))
    .function("SetCurrentCursor", &vtkGenericOpenGLRenderWindow::SetCurrentCursor)
    .function("SetMapped", &vtkGenericOpenGLRenderWindow::SetMapped)
    .function("OpenGLInit", &vtkGenericOpenGLRenderWindow::OpenGLInit);
}

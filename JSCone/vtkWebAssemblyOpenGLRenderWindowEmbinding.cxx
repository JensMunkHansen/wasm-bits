// JavaScript wrapper for vtkWebAssemblyOpenGLRenderWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkWebAssemblyOpenGLRenderWindowEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkWebAssemblyOpenGLRenderWindow.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWebAssemblyOpenGLRenderWindow.h"

template<> void emscripten::internal::raw_destructor<vtkWebAssemblyOpenGLRenderWindow>(vtkWebAssemblyOpenGLRenderWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebAssemblyOpenGLRenderWindow_class) {
  emscripten::class_<vtkWebAssemblyOpenGLRenderWindow, emscripten::base<vtkOpenGLRenderWindow>>("vtkWebAssemblyOpenGLRenderWindow")
    .smart_ptr<vtkSmartPointer<vtkWebAssemblyOpenGLRenderWindow>>("vtkSmartPointer<vtkWebAssemblyOpenGLRenderWindow>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebAssemblyOpenGLRenderWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebAssemblyOpenGLRenderWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebAssemblyOpenGLRenderWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebAssemblyOpenGLRenderWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebAssemblyOpenGLRenderWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkWebAssemblyOpenGLRenderWindow::Initialize)
    .function("Finalize", &vtkWebAssemblyOpenGLRenderWindow::Finalize)
    .function("SetFullScreen", &vtkWebAssemblyOpenGLRenderWindow::SetFullScreen)
    .function("SetShowWindow", &vtkWebAssemblyOpenGLRenderWindow::SetShowWindow)
    .function("SetSize", emscripten::select_overload<void(vtkWebAssemblyOpenGLRenderWindow&, int, int)>([](vtkWebAssemblyOpenGLRenderWindow& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("SetPosition", emscripten::select_overload<void(vtkWebAssemblyOpenGLRenderWindow&, int, int)>([](vtkWebAssemblyOpenGLRenderWindow& self, int arg_0, int arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetWindowName", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self, const std::string & arg_0) -> void {  return self.SetWindowName( arg_0.c_str());}))
    .function("GetGenericDisplayId", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDisplayId());}))
    .function("GetGenericWindowId", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericWindowId());}))
    .function("GetGenericDrawable", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGenericDrawable());}))
    .function("MakeCurrent", &vtkWebAssemblyOpenGLRenderWindow::MakeCurrent)
    .function("ReleaseCurrent", &vtkWebAssemblyOpenGLRenderWindow::ReleaseCurrent)
    .function("IsCurrent", &vtkWebAssemblyOpenGLRenderWindow::IsCurrent)
    .function("Clean", &vtkWebAssemblyOpenGLRenderWindow::Clean)
    .function("Frame", &vtkWebAssemblyOpenGLRenderWindow::Frame)
    .function("PushContext", &vtkWebAssemblyOpenGLRenderWindow::PushContext)
    .function("PopContext", &vtkWebAssemblyOpenGLRenderWindow::PopContext)
    .function("SetSwapControl", &vtkWebAssemblyOpenGLRenderWindow::SetSwapControl)
    .function("GetColorBufferSizes", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self, std::uintptr_t arg_0) -> int {  return self.GetColorBufferSizes(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("HideCursor", &vtkWebAssemblyOpenGLRenderWindow::HideCursor)
    .function("ShowCursor", &vtkWebAssemblyOpenGLRenderWindow::ShowCursor)
    .function("GetCanvasId", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self) -> std::string {  return self.GetCanvasId();}))
    .function("SetCanvasId", emscripten::optional_override([](vtkWebAssemblyOpenGLRenderWindow& self, const std::string & arg_0) -> void {  return self.SetCanvasId( arg_0.c_str());}));
}

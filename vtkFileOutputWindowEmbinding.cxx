// JavaScript wrapper for vtkFileOutputWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkFileOutputWindowEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkFileOutputWindow.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFileOutputWindow.h"

template<> void emscripten::internal::raw_destructor<vtkFileOutputWindow>(vtkFileOutputWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFileOutputWindow_class) {
  emscripten::class_<vtkFileOutputWindow, emscripten::base<vtkOutputWindow>>("vtkFileOutputWindow")
    .smart_ptr<vtkSmartPointer<vtkFileOutputWindow>>("vtkSmartPointer<vtkFileOutputWindow>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFileOutputWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFileOutputWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFileOutputWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFileOutputWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFileOutputWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFileOutputWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFileOutputWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DisplayText", emscripten::optional_override([](vtkFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayText( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkFileOutputWindow& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkFileOutputWindow& self) -> std::string {  return self.GetFileName();}))
    .function("SetFlush", &vtkFileOutputWindow::SetFlush)
    .function("GetFlush", &vtkFileOutputWindow::GetFlush)
    .function("FlushOn", &vtkFileOutputWindow::FlushOn)
    .function("FlushOff", &vtkFileOutputWindow::FlushOff)
    .function("SetAppend", &vtkFileOutputWindow::SetAppend)
    .function("GetAppend", &vtkFileOutputWindow::GetAppend)
    .function("AppendOn", &vtkFileOutputWindow::AppendOn)
    .function("AppendOff", &vtkFileOutputWindow::AppendOff);
}

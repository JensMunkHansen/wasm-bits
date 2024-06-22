// JavaScript wrapper for vtkStringOutputWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkStringOutputWindowEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkStringOutputWindow.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringOutputWindow.h"

template<> void emscripten::internal::raw_destructor<vtkStringOutputWindow>(vtkStringOutputWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStringOutputWindow_class) {
  emscripten::class_<vtkStringOutputWindow, emscripten::base<vtkOutputWindow>>("vtkStringOutputWindow")
    .smart_ptr<vtkSmartPointer<vtkStringOutputWindow>>("vtkSmartPointer<vtkStringOutputWindow>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStringOutputWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringOutputWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStringOutputWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStringOutputWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStringOutputWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringOutputWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStringOutputWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DisplayText", emscripten::optional_override([](vtkStringOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayText( arg_0.c_str());}))
    .function("GetOutput", &vtkStringOutputWindow::GetOutput);
}

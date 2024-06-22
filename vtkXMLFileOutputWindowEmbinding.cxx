// JavaScript wrapper for vtkXMLFileOutputWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkXMLFileOutputWindowEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkXMLFileOutputWindow.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLFileOutputWindow.h"

template<> void emscripten::internal::raw_destructor<vtkXMLFileOutputWindow>(vtkXMLFileOutputWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLFileOutputWindow_class) {
  emscripten::class_<vtkXMLFileOutputWindow, emscripten::base<vtkFileOutputWindow>>("vtkXMLFileOutputWindow")
    .smart_ptr<vtkSmartPointer<vtkXMLFileOutputWindow>>("vtkSmartPointer<vtkXMLFileOutputWindow>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLFileOutputWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLFileOutputWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLFileOutputWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLFileOutputWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLFileOutputWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DisplayText", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayText( arg_0.c_str());}))
    .function("DisplayErrorText", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayErrorText( arg_0.c_str());}))
    .function("DisplayWarningText", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayWarningText( arg_0.c_str());}))
    .function("DisplayGenericWarningText", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayGenericWarningText( arg_0.c_str());}))
    .function("DisplayDebugText", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayDebugText( arg_0.c_str());}))
    .function("DisplayTag", emscripten::optional_override([](vtkXMLFileOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayTag( arg_0.c_str());}));
}

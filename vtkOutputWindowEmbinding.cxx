// JavaScript wrapper for vtkOutputWindow with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkOutputWindowEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkOutputWindow.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOutputWindow.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkOutputWindow_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOutputWindow>(vtkOutputWindow * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutputWindow_class) {
  using DisplayModes=vtkOutputWindow::DisplayModes;
  emscripten::class_<vtkOutputWindow, emscripten::base<vtkObject>>("vtkOutputWindow")
    .smart_ptr<vtkSmartPointer<vtkOutputWindow>>("vtkSmartPointer<vtkOutputWindow>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOutputWindow>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutputWindow::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutputWindow::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutputWindow::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutputWindow::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetInstance", &vtkOutputWindow::GetInstance, emscripten::allow_raw_pointers())
    .class_function("SetInstance", &vtkOutputWindow::SetInstance, emscripten::allow_raw_pointers())
    .function("DisplayText", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayText( arg_0.c_str());}))
    .function("DisplayErrorText", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayErrorText( arg_0.c_str());}))
    .function("DisplayWarningText", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayWarningText( arg_0.c_str());}))
    .function("DisplayGenericWarningText", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayGenericWarningText( arg_0.c_str());}))
    .function("DisplayDebugText", emscripten::optional_override([](vtkOutputWindow& self, const std::string & arg_0) -> void {  return self.DisplayDebugText( arg_0.c_str());}))
    .function("PromptUserOn", &vtkOutputWindow::PromptUserOn)
    .function("PromptUserOff", &vtkOutputWindow::PromptUserOff)
    .function("SetPromptUser", &vtkOutputWindow::SetPromptUser)
    .function("SetDisplayMode", &vtkOutputWindow::SetDisplayMode)
    .function("GetDisplayModeMinValue", &vtkOutputWindow::GetDisplayModeMinValue)
    .function("GetDisplayModeMaxValue", &vtkOutputWindow::GetDisplayModeMaxValue)
    .function("GetDisplayMode", &vtkOutputWindow::GetDisplayMode)
    .function("SetDisplayModeToDefault", &vtkOutputWindow::SetDisplayModeToDefault)
    .function("SetDisplayModeToNever", &vtkOutputWindow::SetDisplayModeToNever)
    .function("SetDisplayModeToAlways", &vtkOutputWindow::SetDisplayModeToAlways)
    .function("SetDisplayModeToAlwaysStdErr", &vtkOutputWindow::SetDisplayModeToAlwaysStdErr);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkOutputWindow_0_2_constants) {
    typedef vtkOutputWindow::DisplayModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkOutputWindow_DisplayModes_DEFAULT", vtkOutputWindow::DEFAULT },
      { "vtkOutputWindow_DisplayModes_NEVER", vtkOutputWindow::NEVER },
      { "vtkOutputWindow_DisplayModes_ALWAYS", vtkOutputWindow::ALWAYS },
      { "vtkOutputWindow_DisplayModes_ALWAYS_STDERR", vtkOutputWindow::ALWAYS_STDERR },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

// JavaScript wrapper for vtkExecutableRunner with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkExecutableRunnerEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkExecutableRunner.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExecutableRunner.h"

template<> void emscripten::internal::raw_destructor<vtkExecutableRunner>(vtkExecutableRunner * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExecutableRunner_class) {
  emscripten::class_<vtkExecutableRunner, emscripten::base<vtkObject>>("vtkExecutableRunner")
    .smart_ptr<vtkSmartPointer<vtkExecutableRunner>>("vtkSmartPointer<vtkExecutableRunner>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExecutableRunner>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutableRunner::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExecutableRunner& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExecutableRunner::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExecutableRunner::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExecutableRunner::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExecutableRunner& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Execute", &vtkExecutableRunner::Execute)
    .function("SetTimeout", &vtkExecutableRunner::SetTimeout)
    .function("GetTimeout", &vtkExecutableRunner::GetTimeout)
    .function("SetRightTrimResult", &vtkExecutableRunner::SetRightTrimResult)
    .function("GetRightTrimResult", &vtkExecutableRunner::GetRightTrimResult)
    .function("RightTrimResultOn", &vtkExecutableRunner::RightTrimResultOn)
    .function("RightTrimResultOff", &vtkExecutableRunner::RightTrimResultOff)
    .function("GetCommand", emscripten::optional_override([](vtkExecutableRunner& self) -> std::string {  return self.GetCommand();}))
    .function("SetCommand", emscripten::optional_override([](vtkExecutableRunner& self, const std::string & arg_0) -> void {  return self.SetCommand( arg_0.c_str());}))
    .function("SetExecuteInSystemShell", &vtkExecutableRunner::SetExecuteInSystemShell)
    .function("GetExecuteInSystemShell", &vtkExecutableRunner::GetExecuteInSystemShell)
    .function("ExecuteInSystemShellOn", &vtkExecutableRunner::ExecuteInSystemShellOn)
    .function("ExecuteInSystemShellOff", &vtkExecutableRunner::ExecuteInSystemShellOff)
    .function("AddArgument", &vtkExecutableRunner::AddArgument)
    .function("ClearArguments", &vtkExecutableRunner::ClearArguments)
    .function("GetNumberOfArguments", &vtkExecutableRunner::GetNumberOfArguments)
    .function("GetStdOut", emscripten::optional_override([](vtkExecutableRunner& self) -> std::string {  return self.GetStdOut();}))
    .function("GetStdErr", emscripten::optional_override([](vtkExecutableRunner& self) -> std::string {  return self.GetStdErr();}))
    .function("GetReturnValue", &vtkExecutableRunner::GetReturnValue);
}

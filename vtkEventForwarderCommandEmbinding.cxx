// JavaScript wrapper for vtkEventForwarderCommand with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkEventForwarderCommandEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkEventForwarderCommand.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkObject.h"
#include "vtkEventForwarderCommand.h"

template<> void emscripten::internal::raw_destructor<vtkEventForwarderCommand>(vtkEventForwarderCommand * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEventForwarderCommand_class) {
  emscripten::class_<vtkEventForwarderCommand, emscripten::base<vtkCommand>>("vtkEventForwarderCommand")
    .smart_ptr<vtkSmartPointer<vtkEventForwarderCommand>>("vtkSmartPointer<vtkEventForwarderCommand>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEventForwarderCommand>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventForwarderCommand::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEventForwarderCommand& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEventForwarderCommand::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEventForwarderCommand::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEventForwarderCommand::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEventForwarderCommand& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Execute", emscripten::optional_override([](vtkEventForwarderCommand& self, vtkObject* arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {  return self.Execute( arg_0, arg_1,reinterpret_cast<void*>(arg_2));}), emscripten::allow_raw_pointers())
    .function("SetTarget", &vtkEventForwarderCommand::SetTarget, emscripten::allow_raw_pointers())
    .function("GetTarget", emscripten::optional_override([](vtkEventForwarderCommand& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetTarget());}));
}

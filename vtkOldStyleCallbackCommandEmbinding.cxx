// JavaScript wrapper for vtkOldStyleCallbackCommand with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkOldStyleCallbackCommandEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkOldStyleCallbackCommand.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkObject.h"
#include "vtkOldStyleCallbackCommand.h"

template<> void emscripten::internal::raw_destructor<vtkOldStyleCallbackCommand>(vtkOldStyleCallbackCommand * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOldStyleCallbackCommand_class) {
  emscripten::class_<vtkOldStyleCallbackCommand, emscripten::base<vtkCommand>>("vtkOldStyleCallbackCommand")
    .smart_ptr<vtkSmartPointer<vtkOldStyleCallbackCommand>>("vtkSmartPointer<vtkOldStyleCallbackCommand>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOldStyleCallbackCommand>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOldStyleCallbackCommand::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOldStyleCallbackCommand& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOldStyleCallbackCommand::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOldStyleCallbackCommand::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOldStyleCallbackCommand::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOldStyleCallbackCommand& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Execute", emscripten::optional_override([](vtkOldStyleCallbackCommand& self, vtkObject* arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {  return self.Execute( arg_0, arg_1,reinterpret_cast<void*>(arg_2));}), emscripten::allow_raw_pointers())
    .function("SetClientData", emscripten::optional_override([](vtkOldStyleCallbackCommand& self, std::uintptr_t arg_0) -> void {  return self.SetClientData(reinterpret_cast<void*>(arg_0));}))
    .function("SetCallback", emscripten::optional_override([](vtkOldStyleCallbackCommand& self, emscripten::val arg_0) -> void {  return self.SetCallback( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("SetClientDataDeleteCallback", emscripten::optional_override([](vtkOldStyleCallbackCommand& self, emscripten::val arg_0) -> void {  return self.SetClientDataDeleteCallback( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}));
}

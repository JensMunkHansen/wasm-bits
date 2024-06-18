// JavaScript wrapper for vtkSocket with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkSocketEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkSocket.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSocket.h"

template<> void emscripten::internal::raw_destructor<vtkSocket>(vtkSocket * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSocket_class) {
  emscripten::class_<vtkSocket, emscripten::base<vtkObject>>("vtkSocket")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSocket::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSocket& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSocket::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSocket::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSocket::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSocket& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetConnected", &vtkSocket::GetConnected)
    .function("CloseSocket", emscripten::select_overload<void(vtkSocket&)>([](vtkSocket& self) -> void { return self.CloseSocket(); }))
    .function("Send", emscripten::optional_override([](vtkSocket& self, std::uintptr_t arg_0, int arg_1) -> int {  return self.Send(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("Receive", emscripten::optional_override([](vtkSocket& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> int {  return self.Receive(reinterpret_cast<void*>(arg_0), arg_1, arg_2);}))
    .function("GetSocketDescriptor", &vtkSocket::GetSocketDescriptor)
    .class_function("SelectSockets", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> int {  return vtkSocket::SelectSockets(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int)));}));
}

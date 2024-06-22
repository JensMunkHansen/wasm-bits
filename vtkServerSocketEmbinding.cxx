// JavaScript wrapper for vtkServerSocket with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkServerSocketEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkServerSocket.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkClientSocket.h"
#include "vtkServerSocket.h"

template<> void emscripten::internal::raw_destructor<vtkServerSocket>(vtkServerSocket * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkServerSocket_class) {
  emscripten::class_<vtkServerSocket, emscripten::base<vtkSocket>>("vtkServerSocket")
    .smart_ptr<vtkSmartPointer<vtkServerSocket>>("vtkSmartPointer<vtkServerSocket>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkServerSocket>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkServerSocket::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkServerSocket& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkServerSocket::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkServerSocket::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkServerSocket::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkServerSocket& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CreateServer", emscripten::select_overload<int(vtkServerSocket&, int, const std::string&)>([](vtkServerSocket& self, int arg_0, const std::string& arg_1) -> int { return self.CreateServer( arg_0, arg_1); }))
    .function("CreateServer", emscripten::select_overload<int(vtkServerSocket&, int)>([](vtkServerSocket& self, int arg_0) -> int { return self.CreateServer( arg_0); }))
    .function("WaitForConnection", &vtkServerSocket::WaitForConnection, emscripten::allow_raw_pointers())
    .function("GetServerPort", &vtkServerSocket::GetServerPort);
}

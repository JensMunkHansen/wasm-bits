// JavaScript wrapper for vtkClientSocket with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkCommonSystem.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonSystem.js/vtkClientSocketEmbinding.cxx \
 /home/jmh/github/vtk/Common/System/vtkClientSocket.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkClientSocket.h"

template<> void emscripten::internal::raw_destructor<vtkClientSocket>(vtkClientSocket * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClientSocket_class) {
  emscripten::class_<vtkClientSocket, emscripten::base<vtkSocket>>("vtkClientSocket")
    .smart_ptr<vtkSmartPointer<vtkClientSocket>>("vtkSmartPointer<vtkClientSocket>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClientSocket>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClientSocket::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClientSocket& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClientSocket::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClientSocket::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClientSocket::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClientSocket& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ConnectToServer", emscripten::optional_override([](vtkClientSocket& self, const std::string & arg_0, int arg_1) -> int {  return self.ConnectToServer( arg_0.c_str(), arg_1);}))
    .function("GetConnectingSide", &vtkClientSocket::GetConnectingSide);
}

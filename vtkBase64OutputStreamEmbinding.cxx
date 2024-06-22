// JavaScript wrapper for vtkBase64OutputStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkBase64OutputStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkBase64OutputStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBase64OutputStream.h"

template<> void emscripten::internal::raw_destructor<vtkBase64OutputStream>(vtkBase64OutputStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBase64OutputStream_class) {
  emscripten::class_<vtkBase64OutputStream, emscripten::base<vtkOutputStream>>("vtkBase64OutputStream")
    .smart_ptr<vtkSmartPointer<vtkBase64OutputStream>>("vtkSmartPointer<vtkBase64OutputStream>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBase64OutputStream>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBase64OutputStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBase64OutputStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBase64OutputStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBase64OutputStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBase64OutputStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBase64OutputStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("StartWriting", &vtkBase64OutputStream::StartWriting)
    .function("Write", emscripten::optional_override([](vtkBase64OutputStream& self, std::uintptr_t arg_0, size_t arg_1) -> int {  return self.Write(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("EndWriting", &vtkBase64OutputStream::EndWriting);
}

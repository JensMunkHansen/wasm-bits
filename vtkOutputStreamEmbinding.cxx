// JavaScript wrapper for vtkOutputStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkOutputStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkOutputStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOutputStream.h"

template<> void emscripten::internal::raw_destructor<vtkOutputStream>(vtkOutputStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutputStream_class) {
  emscripten::class_<vtkOutputStream, emscripten::base<vtkObject>>("vtkOutputStream")
    .smart_ptr<vtkSmartPointer<vtkOutputStream>>("vtkSmartPointer<vtkOutputStream>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOutputStream>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutputStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutputStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutputStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutputStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutputStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutputStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("StartWriting", &vtkOutputStream::StartWriting)
    .function("Write", emscripten::optional_override([](vtkOutputStream& self, std::uintptr_t arg_0, size_t arg_1) -> int {  return self.Write(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("EndWriting", &vtkOutputStream::EndWriting);
}

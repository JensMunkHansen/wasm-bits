// JavaScript wrapper for vtkInputStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkInputStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkInputStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInputStream.h"

template<> void emscripten::internal::raw_destructor<vtkInputStream>(vtkInputStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInputStream_class) {
  emscripten::class_<vtkInputStream, emscripten::base<vtkObject>>("vtkInputStream")
    .smart_ptr<vtkSmartPointer<vtkInputStream>>("vtkSmartPointer<vtkInputStream>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInputStream>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInputStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInputStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInputStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInputStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInputStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInputStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("StartReading", &vtkInputStream::StartReading)
    .function("Seek", &vtkInputStream::Seek)
    .function("Read", emscripten::optional_override([](vtkInputStream& self, std::uintptr_t arg_0, size_t arg_1) -> size_t {  return self.Read(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("EndReading", &vtkInputStream::EndReading);
}

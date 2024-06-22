// JavaScript wrapper for vtkBase64InputStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkBase64InputStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkBase64InputStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBase64InputStream.h"

template<> void emscripten::internal::raw_destructor<vtkBase64InputStream>(vtkBase64InputStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBase64InputStream_class) {
  emscripten::class_<vtkBase64InputStream, emscripten::base<vtkInputStream>>("vtkBase64InputStream")
    .smart_ptr<vtkSmartPointer<vtkBase64InputStream>>("vtkSmartPointer<vtkBase64InputStream>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBase64InputStream>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBase64InputStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBase64InputStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBase64InputStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBase64InputStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBase64InputStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBase64InputStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("StartReading", &vtkBase64InputStream::StartReading)
    .function("Seek", &vtkBase64InputStream::Seek)
    .function("Read", emscripten::optional_override([](vtkBase64InputStream& self, std::uintptr_t arg_0, size_t arg_1) -> size_t {  return self.Read(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("EndReading", &vtkBase64InputStream::EndReading);
}

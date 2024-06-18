// JavaScript wrapper for vtkFileResourceStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkFileResourceStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkFileResourceStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFileResourceStream.h"

template<> void emscripten::internal::raw_destructor<vtkFileResourceStream>(vtkFileResourceStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFileResourceStream_class) {
  emscripten::class_<vtkFileResourceStream, emscripten::base<vtkResourceStream>>("vtkFileResourceStream")
    .smart_ptr<vtkSmartPointer<vtkFileResourceStream>>("vtkSmartPointer<vtkFileResourceStream>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFileResourceStream>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFileResourceStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFileResourceStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFileResourceStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFileResourceStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFileResourceStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFileResourceStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Open", emscripten::optional_override([](vtkFileResourceStream& self, const std::string & arg_0) -> bool {  return self.Open( arg_0.c_str());}))
    .function("Read", emscripten::optional_override([](vtkFileResourceStream& self, std::uintptr_t arg_0, std::size_t arg_1) -> std::size_t {  return self.Read(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("EndOfStream", &vtkFileResourceStream::EndOfStream)
    .function("Tell", &vtkFileResourceStream::Tell);
}

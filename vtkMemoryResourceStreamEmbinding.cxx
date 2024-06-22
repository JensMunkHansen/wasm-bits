// JavaScript wrapper for vtkMemoryResourceStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkMemoryResourceStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkMemoryResourceStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkMemoryResourceStream.h"

template<> void emscripten::internal::raw_destructor<vtkMemoryResourceStream>(vtkMemoryResourceStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMemoryResourceStream_class) {
  emscripten::class_<vtkMemoryResourceStream, emscripten::base<vtkResourceStream>>("vtkMemoryResourceStream")
    .smart_ptr<vtkSmartPointer<vtkMemoryResourceStream>>("vtkSmartPointer<vtkMemoryResourceStream>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMemoryResourceStream>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMemoryResourceStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMemoryResourceStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMemoryResourceStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMemoryResourceStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMemoryResourceStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMemoryResourceStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Read", emscripten::optional_override([](vtkMemoryResourceStream& self, std::uintptr_t arg_0, std::size_t arg_1) -> std::size_t {  return self.Read(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("EndOfStream", &vtkMemoryResourceStream::EndOfStream)
    .function("Tell", &vtkMemoryResourceStream::Tell)
    .function("SetBuffer", emscripten::select_overload<void(vtkMemoryResourceStream&, std::uintptr_t, std::size_t, bool)>([](vtkMemoryResourceStream& self, std::uintptr_t arg_0, std::size_t arg_1, bool arg_2) -> void { return self.SetBuffer(reinterpret_cast<void*>(arg_0), arg_1, arg_2); }))
    .function("OwnsBuffer", &vtkMemoryResourceStream::OwnsBuffer);
}

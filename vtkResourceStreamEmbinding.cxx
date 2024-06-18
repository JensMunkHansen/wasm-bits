// JavaScript wrapper for vtkResourceStream with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkResourceStreamEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkResourceStream.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResourceStream.h"

EMSCRIPTEN_BINDINGS(vtkIOCore_vtkResourceStream_class_enums) {
  emscripten::enum_<vtkResourceStream::SeekDirection>("vtkResourceStream_SeekDirection")
    .value("Begin", vtkResourceStream::SeekDirection::Begin)
    .value("Current", vtkResourceStream::SeekDirection::Current)
    .value("End", vtkResourceStream::SeekDirection::End);
}
template<> void emscripten::internal::raw_destructor<vtkResourceStream>(vtkResourceStream * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResourceStream_class) {
  using SeekDirection=vtkResourceStream::SeekDirection;
  emscripten::class_<vtkResourceStream, emscripten::base<vtkObject>>("vtkResourceStream")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResourceStream::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResourceStream& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResourceStream::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResourceStream::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResourceStream::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResourceStream& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Seek", &vtkResourceStream::Seek)
    .function("Tell", &vtkResourceStream::Tell)
    .function("SupportSeek", &vtkResourceStream::SupportSeek);
}

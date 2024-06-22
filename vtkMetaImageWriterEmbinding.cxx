// JavaScript wrapper for vtkMetaImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkMetaImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkMetaImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMetaImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkMetaImageWriter>(vtkMetaImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMetaImageWriter_class) {
  emscripten::class_<vtkMetaImageWriter, emscripten::base<vtkImageWriter>>("vtkMetaImageWriter")
    .smart_ptr<vtkSmartPointer<vtkMetaImageWriter>>("vtkSmartPointer<vtkMetaImageWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMetaImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMetaImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMetaImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMetaImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMetaImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMetaImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMetaImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkMetaImageWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkMetaImageWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetRAWFileName", emscripten::optional_override([](vtkMetaImageWriter& self, const std::string & arg_0) -> void {  return self.SetRAWFileName( arg_0.c_str());}))
    .function("GetRAWFileName", emscripten::optional_override([](vtkMetaImageWriter& self) -> std::string {  return self.GetRAWFileName();}))
    .function("SetCompression", &vtkMetaImageWriter::SetCompression)
    .function("GetCompression", &vtkMetaImageWriter::GetCompression)
    .function("Write", &vtkMetaImageWriter::Write);
}

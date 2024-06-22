// JavaScript wrapper for vtkImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkImageWriter>(vtkImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageWriter_class) {
  emscripten::class_<vtkImageWriter, emscripten::base<vtkImageAlgorithm>>("vtkImageWriter")
    .smart_ptr<vtkSmartPointer<vtkImageWriter>>("vtkSmartPointer<vtkImageWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkImageWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkImageWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetFilePrefix", emscripten::optional_override([](vtkImageWriter& self, const std::string & arg_0) -> void {  return self.SetFilePrefix( arg_0.c_str());}))
    .function("GetFilePrefix", emscripten::optional_override([](vtkImageWriter& self) -> std::string {  return self.GetFilePrefix();}))
    .function("SetFilePattern", emscripten::optional_override([](vtkImageWriter& self, const std::string & arg_0) -> void {  return self.SetFilePattern( arg_0.c_str());}))
    .function("GetFilePattern", emscripten::optional_override([](vtkImageWriter& self) -> std::string {  return self.GetFilePattern();}))
    .function("SetFileDimensionality", &vtkImageWriter::SetFileDimensionality)
    .function("GetFileDimensionality", &vtkImageWriter::GetFileDimensionality)
    .function("GetInput", &vtkImageWriter::GetInput, emscripten::allow_raw_pointers())
    .function("Write", &vtkImageWriter::Write)
    .function("DeleteFiles", &vtkImageWriter::DeleteFiles);
}

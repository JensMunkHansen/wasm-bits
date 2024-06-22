// JavaScript wrapper for vtkDataObjectWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkDataObjectWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkDataObjectWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDataObjectWriter.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectWriter>(vtkDataObjectWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectWriter_class) {
  emscripten::class_<vtkDataObjectWriter, emscripten::base<vtkWriter>>("vtkDataObjectWriter")
    .smart_ptr<vtkSmartPointer<vtkDataObjectWriter>>("vtkSmartPointer<vtkDataObjectWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataObjectWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkDataObjectWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkDataObjectWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetHeader", emscripten::optional_override([](vtkDataObjectWriter& self, const std::string & arg_0) -> void {  return self.SetHeader( arg_0.c_str());}))
    .function("GetHeader", emscripten::optional_override([](vtkDataObjectWriter& self) -> std::string {  return self.GetHeader();}))
    .function("SetFileType", &vtkDataObjectWriter::SetFileType)
    .function("GetFileType", &vtkDataObjectWriter::GetFileType)
    .function("SetFileTypeToASCII", &vtkDataObjectWriter::SetFileTypeToASCII)
    .function("SetFileTypeToBinary", &vtkDataObjectWriter::SetFileTypeToBinary)
    .function("SetWriteToOutputString", &vtkDataObjectWriter::SetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkDataObjectWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkDataObjectWriter::WriteToOutputStringOff)
    .function("GetWriteToOutputString", &vtkDataObjectWriter::GetWriteToOutputString)
    .function("GetOutputString", emscripten::optional_override([](vtkDataObjectWriter& self) -> std::string {  return self.GetOutputString();}))
    .function("GetOutputStdString", &vtkDataObjectWriter::GetOutputStdString)
    .function("GetOutputStringLength", &vtkDataObjectWriter::GetOutputStringLength)
    .function("GetBinaryOutputString", emscripten::optional_override([](vtkDataObjectWriter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBinaryOutputString()) / sizeof(unsigned char);}))
    .function("SetFieldDataName", emscripten::optional_override([](vtkDataObjectWriter& self, const std::string & arg_0) -> void {  return self.SetFieldDataName( arg_0.c_str());}))
    .function("GetFieldDataName", emscripten::optional_override([](vtkDataObjectWriter& self) -> std::string {  return self.GetFieldDataName();}));
}

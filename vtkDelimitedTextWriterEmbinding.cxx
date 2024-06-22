// JavaScript wrapper for vtkDelimitedTextWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkDelimitedTextWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkDelimitedTextWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDelimitedTextWriter.h"

template<> void emscripten::internal::raw_destructor<vtkDelimitedTextWriter>(vtkDelimitedTextWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDelimitedTextWriter_class) {
  emscripten::class_<vtkDelimitedTextWriter, emscripten::base<vtkWriter>>("vtkDelimitedTextWriter")
    .smart_ptr<vtkSmartPointer<vtkDelimitedTextWriter>>("vtkSmartPointer<vtkDelimitedTextWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDelimitedTextWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelimitedTextWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDelimitedTextWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDelimitedTextWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDelimitedTextWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDelimitedTextWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDelimitedTextWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFieldDelimiter", emscripten::optional_override([](vtkDelimitedTextWriter& self, const std::string & arg_0) -> void {  return self.SetFieldDelimiter( arg_0.c_str());}))
    .function("GetFieldDelimiter", emscripten::optional_override([](vtkDelimitedTextWriter& self) -> std::string {  return self.GetFieldDelimiter();}))
    .function("SetStringDelimiter", emscripten::optional_override([](vtkDelimitedTextWriter& self, const std::string & arg_0) -> void {  return self.SetStringDelimiter( arg_0.c_str());}))
    .function("GetStringDelimiter", emscripten::optional_override([](vtkDelimitedTextWriter& self) -> std::string {  return self.GetStringDelimiter();}))
    .function("SetFileName", emscripten::optional_override([](vtkDelimitedTextWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkDelimitedTextWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetUseStringDelimiter", &vtkDelimitedTextWriter::SetUseStringDelimiter)
    .function("GetUseStringDelimiter", &vtkDelimitedTextWriter::GetUseStringDelimiter)
    .function("SetWriteToOutputString", &vtkDelimitedTextWriter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkDelimitedTextWriter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkDelimitedTextWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkDelimitedTextWriter::WriteToOutputStringOff)
    .function("RegisterAndGetOutputString", emscripten::optional_override([](vtkDelimitedTextWriter& self) -> std::string {  return self.RegisterAndGetOutputString();}))
    .function("GetString", &vtkDelimitedTextWriter::GetString);
}

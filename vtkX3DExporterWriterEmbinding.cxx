// JavaScript wrapper for vtkX3DExporterWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkX3DExporterWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkX3DExporterWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkX3DExporterWriter.h"

template<> void emscripten::internal::raw_destructor<vtkX3DExporterWriter>(vtkX3DExporterWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkX3DExporterWriter_class) {
  emscripten::class_<vtkX3DExporterWriter, emscripten::base<vtkObject>>("vtkX3DExporterWriter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporterWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkX3DExporterWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkX3DExporterWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkX3DExporterWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkX3DExporterWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkX3DExporterWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWriteToOutputString", &vtkX3DExporterWriter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkX3DExporterWriter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkX3DExporterWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkX3DExporterWriter::WriteToOutputStringOff)
    .function("GetOutputStringLength", &vtkX3DExporterWriter::GetOutputStringLength)
    .function("GetOutputString", emscripten::optional_override([](vtkX3DExporterWriter& self) -> std::string {  return self.GetOutputString();}))
    .function("GetBinaryOutputString", emscripten::optional_override([](vtkX3DExporterWriter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBinaryOutputString()) / sizeof(unsigned char);}))
    .function("RegisterAndGetOutputString", emscripten::optional_override([](vtkX3DExporterWriter& self) -> std::string {  return self.RegisterAndGetOutputString();}))
    .function("Flush", &vtkX3DExporterWriter::Flush);
}

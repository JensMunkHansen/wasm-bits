// JavaScript wrapper for vtkDataWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkDataWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkDataWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkCellArray.h"
#include "vtkDataSet.h"
#include "vtkGraph.h"
#include "vtkTable.h"
#include "vtkFieldData.h"
#include "vtkDataWriter.h"

EMSCRIPTEN_BINDINGS(vtkIOLegacy_vtkDataWriter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDataWriter>(vtkDataWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataWriter_class) {
  using VTKFileVersion=vtkDataWriter::VTKFileVersion;
  emscripten::class_<vtkDataWriter, emscripten::base<vtkWriter>>("vtkDataWriter")
    .smart_ptr<vtkSmartPointer<vtkDataWriter>>("vtkSmartPointer<vtkDataWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetFileVersion", &vtkDataWriter::SetFileVersion)
    .function("GetFileVersion", &vtkDataWriter::GetFileVersion)
    .function("GetFileMajorVersion", &vtkDataWriter::GetFileMajorVersion)
    .function("GetFileMinorVersion", &vtkDataWriter::GetFileMinorVersion)
    .function("SetWriteToOutputString", &vtkDataWriter::SetWriteToOutputString)
    .function("GetWriteToOutputString", &vtkDataWriter::GetWriteToOutputString)
    .function("WriteToOutputStringOn", &vtkDataWriter::WriteToOutputStringOn)
    .function("WriteToOutputStringOff", &vtkDataWriter::WriteToOutputStringOff)
    .function("GetOutputStringLength", &vtkDataWriter::GetOutputStringLength)
    .function("GetOutputString", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetOutputString();}))
    .function("GetBinaryOutputString", emscripten::optional_override([](vtkDataWriter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBinaryOutputString()) / sizeof(unsigned char);}))
    .function("GetOutputStdString", &vtkDataWriter::GetOutputStdString)
    .function("RegisterAndGetOutputString", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.RegisterAndGetOutputString();}))
    .function("SetHeader", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetHeader( arg_0.c_str());}))
    .function("GetHeader", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetHeader();}))
    .function("SetWriteArrayMetaData", &vtkDataWriter::SetWriteArrayMetaData)
    .function("GetWriteArrayMetaData", &vtkDataWriter::GetWriteArrayMetaData)
    .function("WriteArrayMetaDataOn", &vtkDataWriter::WriteArrayMetaDataOn)
    .function("WriteArrayMetaDataOff", &vtkDataWriter::WriteArrayMetaDataOff)
    .function("SetFileType", &vtkDataWriter::SetFileType)
    .function("GetFileTypeMinValue", &vtkDataWriter::GetFileTypeMinValue)
    .function("GetFileTypeMaxValue", &vtkDataWriter::GetFileTypeMaxValue)
    .function("GetFileType", &vtkDataWriter::GetFileType)
    .function("SetFileTypeToASCII", &vtkDataWriter::SetFileTypeToASCII)
    .function("SetFileTypeToBinary", &vtkDataWriter::SetFileTypeToBinary)
    .function("SetScalarsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetScalarsName( arg_0.c_str());}))
    .function("GetScalarsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetScalarsName();}))
    .function("SetVectorsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetVectorsName( arg_0.c_str());}))
    .function("GetVectorsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetVectorsName();}))
    .function("SetTensorsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetTensorsName( arg_0.c_str());}))
    .function("GetTensorsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetTensorsName();}))
    .function("SetNormalsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetNormalsName( arg_0.c_str());}))
    .function("GetNormalsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetNormalsName();}))
    .function("SetTCoordsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetTCoordsName( arg_0.c_str());}))
    .function("GetTCoordsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetTCoordsName();}))
    .function("SetGlobalIdsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetGlobalIdsName( arg_0.c_str());}))
    .function("GetGlobalIdsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetGlobalIdsName();}))
    .function("SetPedigreeIdsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetPedigreeIdsName( arg_0.c_str());}))
    .function("GetPedigreeIdsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetPedigreeIdsName();}))
    .function("SetEdgeFlagsName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetEdgeFlagsName( arg_0.c_str());}))
    .function("GetEdgeFlagsName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetEdgeFlagsName();}))
    .function("SetLookupTableName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetLookupTableName( arg_0.c_str());}))
    .function("GetLookupTableName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetLookupTableName();}))
    .function("SetFieldDataName", emscripten::optional_override([](vtkDataWriter& self, const std::string & arg_0) -> void {  return self.SetFieldDataName( arg_0.c_str());}))
    .function("GetFieldDataName", emscripten::optional_override([](vtkDataWriter& self) -> std::string {  return self.GetFieldDataName();}));
}
EMSCRIPTEN_BINDINGS(vtkIOLegacy_vtkDataWriter_0_2_constants) {
    typedef vtkDataWriter::VTKFileVersion cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkDataWriter_VTKFileVersion_VTK_LEGACY_READER_VERSION_4_2", vtkDataWriter::VTK_LEGACY_READER_VERSION_4_2 },
      { "vtkDataWriter_VTKFileVersion_VTK_LEGACY_READER_VERSION_5_1", vtkDataWriter::VTK_LEGACY_READER_VERSION_5_1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

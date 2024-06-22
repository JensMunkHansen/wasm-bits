// JavaScript wrapper for vtkDataReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkDataReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkDataReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkCharArray.h"
#include "vtkDataSet.h"
#include "vtkPointSet.h"
#include "vtkGraph.h"
#include "vtkTable.h"
#include "vtkSmartPointer.h"
#include "vtkRectilinearGrid.h"
#include "vtkAbstractArray.h"
#include "vtkFieldData.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkDataReader.h"

EMSCRIPTEN_BINDINGS(vtkIOLegacy_vtkDataReader_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_ASCII", 1 },
      { "VTK_BINARY", 2 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkIOLegacy_vtkDataReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDataReader>(vtkDataReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataReader_class) {
  using FieldType=vtkDataReader::FieldType;
  emscripten::class_<vtkDataReader, emscripten::base<vtkSimpleReader>>("vtkDataReader")
    .smart_ptr<vtkSmartPointer<vtkDataReader>>("vtkSmartPointer<vtkDataReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::select_overload<std::string(vtkDataReader&)>([](vtkDataReader& self) -> std::string { return self.GetFileName(); }))
    .function("GetFileName", emscripten::select_overload<std::string(vtkDataReader&, int)>([](vtkDataReader& self, int arg_0) -> std::string { return self.GetFileName( arg_0); }))
    .function("GetFileVersion", &vtkDataReader::GetFileVersion)
    .function("GetFileMajorVersion", &vtkDataReader::GetFileMajorVersion)
    .function("GetFileMinorVersion", &vtkDataReader::GetFileMinorVersion)
    .function("IsFileValid", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> int {  return self.IsFileValid( arg_0.c_str());}))
    .function("IsFileStructuredPoints", &vtkDataReader::IsFileStructuredPoints)
    .function("IsFilePolyData", &vtkDataReader::IsFilePolyData)
    .function("IsFileStructuredGrid", &vtkDataReader::IsFileStructuredGrid)
    .function("IsFileUnstructuredGrid", &vtkDataReader::IsFileUnstructuredGrid)
    .function("IsFileRectilinearGrid", &vtkDataReader::IsFileRectilinearGrid)
    .function("SetInputString", emscripten::select_overload<void(vtkDataReader&, const std::string &)>([](vtkDataReader& self, const std::string & arg_0) -> void { return self.SetInputString( arg_0.c_str()); }))
    .function("SetInputString", emscripten::select_overload<void(vtkDataReader&, const vtkStdString&)>([](vtkDataReader& self, const vtkStdString& arg_0) -> void { return self.SetInputString( arg_0); }))
    .function("SetInputString", emscripten::select_overload<void(vtkDataReader&, const std::string &, int)>([](vtkDataReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetInputString( arg_0.c_str(), arg_1); }))
    .function("GetInputString", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetInputString();}))
    .function("GetInputStringLength", &vtkDataReader::GetInputStringLength)
    .function("SetBinaryInputString", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetBinaryInputString( arg_0.c_str(), arg_1);}))
    .function("SetInputArray", &vtkDataReader::SetInputArray, emscripten::allow_raw_pointers())
    .function("GetInputArray", &vtkDataReader::GetInputArray, emscripten::allow_raw_pointers())
    .function("GetHeader", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetHeader();}))
    .function("SetReadFromInputString", &vtkDataReader::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkDataReader::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkDataReader::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkDataReader::ReadFromInputStringOff)
    .function("GetFileType", &vtkDataReader::GetFileType)
    .function("GetNumberOfScalarsInFile", &vtkDataReader::GetNumberOfScalarsInFile)
    .function("GetNumberOfVectorsInFile", &vtkDataReader::GetNumberOfVectorsInFile)
    .function("GetNumberOfTensorsInFile", &vtkDataReader::GetNumberOfTensorsInFile)
    .function("GetNumberOfNormalsInFile", &vtkDataReader::GetNumberOfNormalsInFile)
    .function("GetNumberOfTCoordsInFile", &vtkDataReader::GetNumberOfTCoordsInFile)
    .function("GetNumberOfFieldDataInFile", &vtkDataReader::GetNumberOfFieldDataInFile)
    .function("GetScalarsNameInFile", emscripten::optional_override([](vtkDataReader& self, int arg_0) -> std::string {  return self.GetScalarsNameInFile( arg_0);}))
    .function("GetVectorsNameInFile", emscripten::optional_override([](vtkDataReader& self, int arg_0) -> std::string {  return self.GetVectorsNameInFile( arg_0);}))
    .function("GetTensorsNameInFile", emscripten::optional_override([](vtkDataReader& self, int arg_0) -> std::string {  return self.GetTensorsNameInFile( arg_0);}))
    .function("GetNormalsNameInFile", emscripten::optional_override([](vtkDataReader& self, int arg_0) -> std::string {  return self.GetNormalsNameInFile( arg_0);}))
    .function("GetTCoordsNameInFile", emscripten::optional_override([](vtkDataReader& self, int arg_0) -> std::string {  return self.GetTCoordsNameInFile( arg_0);}))
    .function("GetFieldDataNameInFile", emscripten::optional_override([](vtkDataReader& self, int arg_0) -> std::string {  return self.GetFieldDataNameInFile( arg_0);}))
    .function("SetScalarsName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetScalarsName( arg_0.c_str());}))
    .function("GetScalarsName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetScalarsName();}))
    .function("SetVectorsName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetVectorsName( arg_0.c_str());}))
    .function("GetVectorsName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetVectorsName();}))
    .function("SetTensorsName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetTensorsName( arg_0.c_str());}))
    .function("GetTensorsName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetTensorsName();}))
    .function("SetNormalsName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetNormalsName( arg_0.c_str());}))
    .function("GetNormalsName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetNormalsName();}))
    .function("SetTCoordsName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetTCoordsName( arg_0.c_str());}))
    .function("GetTCoordsName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetTCoordsName();}))
    .function("SetLookupTableName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetLookupTableName( arg_0.c_str());}))
    .function("GetLookupTableName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetLookupTableName();}))
    .function("SetFieldDataName", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> void {  return self.SetFieldDataName( arg_0.c_str());}))
    .function("GetFieldDataName", emscripten::optional_override([](vtkDataReader& self) -> std::string {  return self.GetFieldDataName();}))
    .function("SetReadAllScalars", &vtkDataReader::SetReadAllScalars)
    .function("GetReadAllScalars", &vtkDataReader::GetReadAllScalars)
    .function("ReadAllScalarsOn", &vtkDataReader::ReadAllScalarsOn)
    .function("ReadAllScalarsOff", &vtkDataReader::ReadAllScalarsOff)
    .function("SetReadAllVectors", &vtkDataReader::SetReadAllVectors)
    .function("GetReadAllVectors", &vtkDataReader::GetReadAllVectors)
    .function("ReadAllVectorsOn", &vtkDataReader::ReadAllVectorsOn)
    .function("ReadAllVectorsOff", &vtkDataReader::ReadAllVectorsOff)
    .function("SetReadAllNormals", &vtkDataReader::SetReadAllNormals)
    .function("GetReadAllNormals", &vtkDataReader::GetReadAllNormals)
    .function("ReadAllNormalsOn", &vtkDataReader::ReadAllNormalsOn)
    .function("ReadAllNormalsOff", &vtkDataReader::ReadAllNormalsOff)
    .function("SetReadAllTensors", &vtkDataReader::SetReadAllTensors)
    .function("GetReadAllTensors", &vtkDataReader::GetReadAllTensors)
    .function("ReadAllTensorsOn", &vtkDataReader::ReadAllTensorsOn)
    .function("ReadAllTensorsOff", &vtkDataReader::ReadAllTensorsOff)
    .function("SetReadAllColorScalars", &vtkDataReader::SetReadAllColorScalars)
    .function("GetReadAllColorScalars", &vtkDataReader::GetReadAllColorScalars)
    .function("ReadAllColorScalarsOn", &vtkDataReader::ReadAllColorScalarsOn)
    .function("ReadAllColorScalarsOff", &vtkDataReader::ReadAllColorScalarsOff)
    .function("SetReadAllTCoords", &vtkDataReader::SetReadAllTCoords)
    .function("GetReadAllTCoords", &vtkDataReader::GetReadAllTCoords)
    .function("ReadAllTCoordsOn", &vtkDataReader::ReadAllTCoordsOn)
    .function("ReadAllTCoordsOff", &vtkDataReader::ReadAllTCoordsOff)
    .function("SetReadAllFields", &vtkDataReader::SetReadAllFields)
    .function("GetReadAllFields", &vtkDataReader::GetReadAllFields)
    .function("ReadAllFieldsOn", &vtkDataReader::ReadAllFieldsOn)
    .function("ReadAllFieldsOff", &vtkDataReader::ReadAllFieldsOff)
    .function("OpenVTKFile", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> int {  return self.OpenVTKFile( arg_0.c_str());}))
    .function("ReadHeader", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0) -> int {  return self.ReadHeader( arg_0.c_str());}))
    .function("ReadCellData", &vtkDataReader::ReadCellData, emscripten::allow_raw_pointers())
    .function("ReadPointData", &vtkDataReader::ReadPointData, emscripten::allow_raw_pointers())
    .function("ReadPointCoordinates", emscripten::select_overload<int(vtkDataReader&, vtkPointSet*, int)>([](vtkDataReader& self, vtkPointSet* arg_0, int arg_1) -> int { return self.ReadPointCoordinates( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReadPointCoordinates", emscripten::select_overload<int(vtkDataReader&, vtkGraph*, int)>([](vtkDataReader& self, vtkGraph* arg_0, int arg_1) -> int { return self.ReadPointCoordinates( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReadVertexData", &vtkDataReader::ReadVertexData, emscripten::allow_raw_pointers())
    .function("ReadEdgeData", &vtkDataReader::ReadEdgeData, emscripten::allow_raw_pointers())
    .function("ReadRowData", &vtkDataReader::ReadRowData, emscripten::allow_raw_pointers())
    .function("ReadCellsLegacy", emscripten::select_overload<int(vtkDataReader&, int, std::uintptr_t)>([](vtkDataReader& self, int arg_0, std::uintptr_t arg_1) -> int { return self.ReadCellsLegacy( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }))
    .function("ReadCellsLegacy", emscripten::select_overload<int(vtkDataReader&, int, std::uintptr_t, int, int, int)>([](vtkDataReader& self, int arg_0, std::uintptr_t arg_1, int arg_2, int arg_3, int arg_4) -> int { return self.ReadCellsLegacy( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2, arg_3, arg_4); }))
    .function("ReadCoordinates", &vtkDataReader::ReadCoordinates, emscripten::allow_raw_pointers())
    .function("ReadArray", emscripten::optional_override([](vtkDataReader& self, const std::string & arg_0, int arg_1, int arg_2) -> vtkAbstractArray* {  return self.ReadArray( arg_0.c_str(), arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("ReadFieldData", &vtkDataReader::ReadFieldData, emscripten::allow_raw_pointers())
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<char*>(arg_0 * sizeof(char))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<short*>(arg_0 * sizeof(short))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<long*>(arg_0 * sizeof(long))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<long long*>(arg_0 * sizeof(long long))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .function("Read", emscripten::select_overload<int(vtkDataReader&, std::uintptr_t)>([](vtkDataReader& self, std::uintptr_t arg_0) -> int { return self.Read(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("Peek", emscripten::optional_override([](vtkDataReader& self, std::uintptr_t arg_0, size_t arg_1) -> size_t {  return self.Peek(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1);}))
    .function("CloseVTKFile", &vtkDataReader::CloseVTKFile)
    .function("LowerCase", emscripten::optional_override([](vtkDataReader& self, std::uintptr_t arg_0, size_t arg_1) -> std::string {  return self.LowerCase(reinterpret_cast<char*>(arg_0 * sizeof(char)), arg_1);}))
    .function("ReadTimeDependentMetaData", &vtkDataReader::ReadTimeDependentMetaData, emscripten::allow_raw_pointers())
    .function("ReadMesh", &vtkDataReader::ReadMesh, emscripten::allow_raw_pointers())
    .function("ReadPoints", &vtkDataReader::ReadPoints, emscripten::allow_raw_pointers())
    .function("ReadArrays", &vtkDataReader::ReadArrays, emscripten::allow_raw_pointers())
    .function("ReadMeshSimple", &vtkDataReader::ReadMeshSimple, emscripten::allow_raw_pointers())
    .function("ReadPointsSimple", &vtkDataReader::ReadPointsSimple, emscripten::allow_raw_pointers())
    .function("ReadArraysSimple", &vtkDataReader::ReadArraysSimple, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOLegacy_vtkDataReader_0_2_constants) {
    typedef vtkDataReader::FieldType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDataReader_FieldType_POINT_DATA", vtkDataReader::POINT_DATA },
      { "vtkDataReader_FieldType_CELL_DATA", vtkDataReader::CELL_DATA },
      { "vtkDataReader_FieldType_FIELD_DATA", vtkDataReader::FIELD_DATA },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

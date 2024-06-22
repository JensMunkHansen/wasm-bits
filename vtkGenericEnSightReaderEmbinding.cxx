// JavaScript wrapper for vtkGenericEnSightReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkGenericEnSightReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkGenericEnSightReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArrayCollection.h"
#include "vtkDataArraySelection.h"
#include "vtkGenericEnSightReader.h"

EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkGenericEnSightReader_enums) {
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkGenericEnSightReader_0_1_constants) {
  const struct { const char *name; EnsightReaderCellIdMode value; }
    constants[4] = {
      { "SINGLE_PROCESS_MODE", SINGLE_PROCESS_MODE },
      { "SPARSE_MODE", SPARSE_MODE },
      { "NON_SPARSE_MODE", NON_SPARSE_MODE },
      { "IMPLICIT_STRUCTURED_MODE", IMPLICIT_STRUCTURED_MODE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkGenericEnSightReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGenericEnSightReader>(vtkGenericEnSightReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericEnSightReader_class) {
  using FileTypes=vtkGenericEnSightReader::FileTypes;
  emscripten::class_<vtkGenericEnSightReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkGenericEnSightReader")
    .smart_ptr<vtkSmartPointer<vtkGenericEnSightReader>>("vtkSmartPointer<vtkGenericEnSightReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericEnSightReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericEnSightReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericEnSightReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericEnSightReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericEnSightReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCaseFileName", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> void {  return self.SetCaseFileName( arg_0.c_str());}))
    .function("GetCaseFileName", emscripten::optional_override([](vtkGenericEnSightReader& self) -> std::string {  return self.GetCaseFileName();}))
    .function("SetFilePath", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> void {  return self.SetFilePath( arg_0.c_str());}))
    .function("GetFilePath", emscripten::optional_override([](vtkGenericEnSightReader& self) -> std::string {  return self.GetFilePath();}))
    .function("GetEnSightVersion", &vtkGenericEnSightReader::GetEnSightVersion)
    .function("GetNumberOfVariables", emscripten::select_overload<int(vtkGenericEnSightReader&)>([](vtkGenericEnSightReader& self) -> int { return self.GetNumberOfVariables(); }))
    .function("GetNumberOfVariables", emscripten::select_overload<int(vtkGenericEnSightReader&, int)>([](vtkGenericEnSightReader& self, int arg_0) -> int { return self.GetNumberOfVariables( arg_0); }))
    .function("GetNumberOfComplexVariables", &vtkGenericEnSightReader::GetNumberOfComplexVariables)
    .function("GetNumberOfScalarsPerNode", &vtkGenericEnSightReader::GetNumberOfScalarsPerNode)
    .function("GetNumberOfVectorsPerNode", &vtkGenericEnSightReader::GetNumberOfVectorsPerNode)
    .function("GetNumberOfTensorsAsymPerNode", &vtkGenericEnSightReader::GetNumberOfTensorsAsymPerNode)
    .function("GetNumberOfTensorsSymmPerNode", &vtkGenericEnSightReader::GetNumberOfTensorsSymmPerNode)
    .function("GetNumberOfScalarsPerElement", &vtkGenericEnSightReader::GetNumberOfScalarsPerElement)
    .function("GetNumberOfVectorsPerElement", &vtkGenericEnSightReader::GetNumberOfVectorsPerElement)
    .function("GetNumberOfTensorsAsymPerElement", &vtkGenericEnSightReader::GetNumberOfTensorsAsymPerElement)
    .function("GetNumberOfTensorsSymmPerElement", &vtkGenericEnSightReader::GetNumberOfTensorsSymmPerElement)
    .function("GetNumberOfScalarsPerMeasuredNode", &vtkGenericEnSightReader::GetNumberOfScalarsPerMeasuredNode)
    .function("GetNumberOfVectorsPerMeasuredNode", &vtkGenericEnSightReader::GetNumberOfVectorsPerMeasuredNode)
    .function("GetNumberOfComplexScalarsPerNode", &vtkGenericEnSightReader::GetNumberOfComplexScalarsPerNode)
    .function("GetNumberOfComplexVectorsPerNode", &vtkGenericEnSightReader::GetNumberOfComplexVectorsPerNode)
    .function("GetNumberOfComplexScalarsPerElement", &vtkGenericEnSightReader::GetNumberOfComplexScalarsPerElement)
    .function("GetNumberOfComplexVectorsPerElement", &vtkGenericEnSightReader::GetNumberOfComplexVectorsPerElement)
    .function("GetDescription", emscripten::select_overload<std::string(vtkGenericEnSightReader&, int)>([](vtkGenericEnSightReader& self, int arg_0) -> std::string { return self.GetDescription( arg_0); }))
    .function("GetDescription", emscripten::select_overload<std::string(vtkGenericEnSightReader&, int, int)>([](vtkGenericEnSightReader& self, int arg_0, int arg_1) -> std::string { return self.GetDescription( arg_0, arg_1); }))
    .function("GetComplexDescription", emscripten::optional_override([](vtkGenericEnSightReader& self, int arg_0) -> std::string {  return self.GetComplexDescription( arg_0);}))
    .function("GetVariableType", &vtkGenericEnSightReader::GetVariableType)
    .function("GetComplexVariableType", &vtkGenericEnSightReader::GetComplexVariableType)
    .function("SetTimeValue", &vtkGenericEnSightReader::SetTimeValue)
    .function("GetTimeValue", &vtkGenericEnSightReader::GetTimeValue)
    .function("GetMinimumTimeValue", &vtkGenericEnSightReader::GetMinimumTimeValue)
    .function("GetMaximumTimeValue", &vtkGenericEnSightReader::GetMaximumTimeValue)
    .function("GetTimeSets", &vtkGenericEnSightReader::GetTimeSets, emscripten::allow_raw_pointers())
    .function("DetermineEnSightVersion", &vtkGenericEnSightReader::DetermineEnSightVersion)
    .function("ReadAllVariablesOn", &vtkGenericEnSightReader::ReadAllVariablesOn)
    .function("ReadAllVariablesOff", &vtkGenericEnSightReader::ReadAllVariablesOff)
    .function("SetReadAllVariables", &vtkGenericEnSightReader::SetReadAllVariables)
    .function("GetReadAllVariables", &vtkGenericEnSightReader::GetReadAllVariables)
    .function("GetPointDataArraySelection", &vtkGenericEnSightReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkGenericEnSightReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfPointArrays", &vtkGenericEnSightReader::GetNumberOfPointArrays)
    .function("GetNumberOfCellArrays", &vtkGenericEnSightReader::GetNumberOfCellArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkGenericEnSightReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkGenericEnSightReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("SetByteOrderToBigEndian", &vtkGenericEnSightReader::SetByteOrderToBigEndian)
    .function("SetByteOrderToLittleEndian", &vtkGenericEnSightReader::SetByteOrderToLittleEndian)
    .function("SetByteOrder", &vtkGenericEnSightReader::SetByteOrder)
    .function("GetByteOrder", &vtkGenericEnSightReader::GetByteOrder)
    .function("GetByteOrderAsString", emscripten::optional_override([](vtkGenericEnSightReader& self) -> std::string {  return self.GetByteOrderAsString();}))
    .function("GetGeometryFileName", emscripten::optional_override([](vtkGenericEnSightReader& self) -> std::string {  return self.GetGeometryFileName();}))
    .function("SetParticleCoordinatesByIndex", &vtkGenericEnSightReader::SetParticleCoordinatesByIndex)
    .function("GetParticleCoordinatesByIndex", &vtkGenericEnSightReader::GetParticleCoordinatesByIndex)
    .function("ParticleCoordinatesByIndexOn", &vtkGenericEnSightReader::ParticleCoordinatesByIndexOn)
    .function("ParticleCoordinatesByIndexOff", &vtkGenericEnSightReader::ParticleCoordinatesByIndexOff)
    .class_function("IsEnSightFile", emscripten::optional_override([]( const std::string & arg_0) -> bool {  return vtkGenericEnSightReader::IsEnSightFile( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkGenericEnSightReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetReader", &vtkGenericEnSightReader::GetReader, emscripten::allow_raw_pointers())
    .function("GetApplyTetrahedralize", &vtkGenericEnSightReader::GetApplyTetrahedralize)
    .function("SetApplyTetrahedralize", &vtkGenericEnSightReader::SetApplyTetrahedralize);
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkGenericEnSightReader_0_2_constants) {
    typedef vtkGenericEnSightReader::FileTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkGenericEnSightReader_FileTypes_ENSIGHT_6", vtkGenericEnSightReader::ENSIGHT_6 },
      { "vtkGenericEnSightReader_FileTypes_ENSIGHT_6_BINARY", vtkGenericEnSightReader::ENSIGHT_6_BINARY },
      { "vtkGenericEnSightReader_FileTypes_ENSIGHT_GOLD", vtkGenericEnSightReader::ENSIGHT_GOLD },
      { "vtkGenericEnSightReader_FileTypes_ENSIGHT_GOLD_BINARY", vtkGenericEnSightReader::ENSIGHT_GOLD_BINARY },
      { "vtkGenericEnSightReader_FileTypes_ENSIGHT_MASTER_SERVER", vtkGenericEnSightReader::ENSIGHT_MASTER_SERVER },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkGenericEnSightReader_1_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkGenericEnSightReader_FILE_BIG_ENDIAN", vtkGenericEnSightReader::FILE_BIG_ENDIAN },
      { "vtkGenericEnSightReader_FILE_LITTLE_ENDIAN", vtkGenericEnSightReader::FILE_LITTLE_ENDIAN },
      { "vtkGenericEnSightReader_FILE_UNKNOWN_ENDIAN", vtkGenericEnSightReader::FILE_UNKNOWN_ENDIAN },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

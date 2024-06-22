// JavaScript wrapper for vtkMultiBlockPLOT3DReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkMultiBlockPLOT3DReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkMultiBlockPLOT3DReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkMultiProcessController.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkMultiBlockPLOT3DReader.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockPLOT3DReader>(vtkMultiBlockPLOT3DReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockPLOT3DReader_class) {
  emscripten::class_<vtkMultiBlockPLOT3DReader, emscripten::base<vtkParallelReader>>("vtkMultiBlockPLOT3DReader")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockPLOT3DReader>>("vtkSmartPointer<vtkMultiBlockPLOT3DReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMultiBlockPLOT3DReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockPLOT3DReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockPLOT3DReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockPLOT3DReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockPLOT3DReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkMultiBlockDataSet*(vtkMultiBlockPLOT3DReader&)>([](vtkMultiBlockPLOT3DReader& self) -> vtkMultiBlockDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkMultiBlockDataSet*(vtkMultiBlockPLOT3DReader&, int)>([](vtkMultiBlockPLOT3DReader& self, int arg_0) -> vtkMultiBlockDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::select_overload<std::string(vtkMultiBlockPLOT3DReader&)>([](vtkMultiBlockPLOT3DReader& self) -> std::string { return self.GetFileName(); }))
    .function("GetFileName", emscripten::select_overload<std::string(vtkMultiBlockPLOT3DReader&, int)>([](vtkMultiBlockPLOT3DReader& self, int arg_0) -> std::string { return self.GetFileName( arg_0); }))
    .function("SetXYZFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> void {  return self.SetXYZFileName( arg_0.c_str());}))
    .function("GetXYZFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self) -> std::string {  return self.GetXYZFileName();}))
    .function("SetQFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> void {  return self.SetQFileName( arg_0.c_str());}))
    .function("GetQFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self) -> std::string {  return self.GetQFileName();}))
    .function("SetFunctionFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> void {  return self.SetFunctionFileName( arg_0.c_str());}))
    .function("GetFunctionFileName", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self) -> std::string {  return self.GetFunctionFileName();}))
    .function("SetAutoDetectFormat", &vtkMultiBlockPLOT3DReader::SetAutoDetectFormat)
    .function("GetAutoDetectFormat", &vtkMultiBlockPLOT3DReader::GetAutoDetectFormat)
    .function("AutoDetectFormatOn", &vtkMultiBlockPLOT3DReader::AutoDetectFormatOn)
    .function("AutoDetectFormatOff", &vtkMultiBlockPLOT3DReader::AutoDetectFormatOff)
    .function("SetBinaryFile", &vtkMultiBlockPLOT3DReader::SetBinaryFile)
    .function("GetBinaryFile", &vtkMultiBlockPLOT3DReader::GetBinaryFile)
    .function("BinaryFileOn", &vtkMultiBlockPLOT3DReader::BinaryFileOn)
    .function("BinaryFileOff", &vtkMultiBlockPLOT3DReader::BinaryFileOff)
    .function("SetMultiGrid", &vtkMultiBlockPLOT3DReader::SetMultiGrid)
    .function("GetMultiGrid", &vtkMultiBlockPLOT3DReader::GetMultiGrid)
    .function("MultiGridOn", &vtkMultiBlockPLOT3DReader::MultiGridOn)
    .function("MultiGridOff", &vtkMultiBlockPLOT3DReader::MultiGridOff)
    .function("SetHasByteCount", &vtkMultiBlockPLOT3DReader::SetHasByteCount)
    .function("GetHasByteCount", &vtkMultiBlockPLOT3DReader::GetHasByteCount)
    .function("HasByteCountOn", &vtkMultiBlockPLOT3DReader::HasByteCountOn)
    .function("HasByteCountOff", &vtkMultiBlockPLOT3DReader::HasByteCountOff)
    .function("SetIBlanking", &vtkMultiBlockPLOT3DReader::SetIBlanking)
    .function("GetIBlanking", &vtkMultiBlockPLOT3DReader::GetIBlanking)
    .function("IBlankingOn", &vtkMultiBlockPLOT3DReader::IBlankingOn)
    .function("IBlankingOff", &vtkMultiBlockPLOT3DReader::IBlankingOff)
    .function("SetTwoDimensionalGeometry", &vtkMultiBlockPLOT3DReader::SetTwoDimensionalGeometry)
    .function("GetTwoDimensionalGeometry", &vtkMultiBlockPLOT3DReader::GetTwoDimensionalGeometry)
    .function("TwoDimensionalGeometryOn", &vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOn)
    .function("TwoDimensionalGeometryOff", &vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOff)
    .function("SetDoublePrecision", &vtkMultiBlockPLOT3DReader::SetDoublePrecision)
    .function("GetDoublePrecision", &vtkMultiBlockPLOT3DReader::GetDoublePrecision)
    .function("DoublePrecisionOn", &vtkMultiBlockPLOT3DReader::DoublePrecisionOn)
    .function("DoublePrecisionOff", &vtkMultiBlockPLOT3DReader::DoublePrecisionOff)
    .function("SetForceRead", &vtkMultiBlockPLOT3DReader::SetForceRead)
    .function("GetForceRead", &vtkMultiBlockPLOT3DReader::GetForceRead)
    .function("ForceReadOn", &vtkMultiBlockPLOT3DReader::ForceReadOn)
    .function("ForceReadOff", &vtkMultiBlockPLOT3DReader::ForceReadOff)
    .function("SetByteOrderToBigEndian", &vtkMultiBlockPLOT3DReader::SetByteOrderToBigEndian)
    .function("SetByteOrderToLittleEndian", &vtkMultiBlockPLOT3DReader::SetByteOrderToLittleEndian)
    .function("SetByteOrder", &vtkMultiBlockPLOT3DReader::SetByteOrder)
    .function("GetByteOrder", &vtkMultiBlockPLOT3DReader::GetByteOrder)
    .function("GetByteOrderAsString", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self) -> std::string {  return self.GetByteOrderAsString();}))
    .function("SetR", &vtkMultiBlockPLOT3DReader::SetR)
    .function("GetR", &vtkMultiBlockPLOT3DReader::GetR)
    .function("SetGamma", &vtkMultiBlockPLOT3DReader::SetGamma)
    .function("GetGamma", emscripten::select_overload<double(vtkMultiBlockPLOT3DReader&)>([](vtkMultiBlockPLOT3DReader& self) -> double { return self.GetGamma(); }))
    .function("SetPreserveIntermediateFunctions", &vtkMultiBlockPLOT3DReader::SetPreserveIntermediateFunctions)
    .function("GetPreserveIntermediateFunctions", &vtkMultiBlockPLOT3DReader::GetPreserveIntermediateFunctions)
    .function("PreserveIntermediateFunctionsOn", &vtkMultiBlockPLOT3DReader::PreserveIntermediateFunctionsOn)
    .function("PreserveIntermediateFunctionsOff", &vtkMultiBlockPLOT3DReader::PreserveIntermediateFunctionsOff)
    .function("SetScalarFunctionNumber", &vtkMultiBlockPLOT3DReader::SetScalarFunctionNumber)
    .function("GetScalarFunctionNumber", &vtkMultiBlockPLOT3DReader::GetScalarFunctionNumber)
    .function("SetVectorFunctionNumber", &vtkMultiBlockPLOT3DReader::SetVectorFunctionNumber)
    .function("GetVectorFunctionNumber", &vtkMultiBlockPLOT3DReader::GetVectorFunctionNumber)
    .function("AddFunction", &vtkMultiBlockPLOT3DReader::AddFunction)
    .function("RemoveFunction", &vtkMultiBlockPLOT3DReader::RemoveFunction)
    .function("RemoveAllFunctions", &vtkMultiBlockPLOT3DReader::RemoveAllFunctions)
    .function("CanReadBinaryFile", emscripten::optional_override([](vtkMultiBlockPLOT3DReader& self, const std::string & arg_0) -> int {  return self.CanReadBinaryFile( arg_0.c_str());}))
    .function("SetController", &vtkMultiBlockPLOT3DReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkMultiBlockPLOT3DReader::GetController, emscripten::allow_raw_pointers())
    .function("AddFunctionName", &vtkMultiBlockPLOT3DReader::AddFunctionName)
    .function("ReadMetaData", &vtkMultiBlockPLOT3DReader::ReadMetaData, emscripten::allow_raw_pointers())
    .function("ReadMesh", emscripten::select_overload<int(vtkMultiBlockPLOT3DReader&, int, int, int, int, vtkDataObject*)>([](vtkMultiBlockPLOT3DReader& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkDataObject* arg_4) -> int { return self.ReadMesh( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("ReadPoints", emscripten::select_overload<int(vtkMultiBlockPLOT3DReader&, int, int, int, int, vtkDataObject*)>([](vtkMultiBlockPLOT3DReader& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkDataObject* arg_4) -> int { return self.ReadPoints( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("ReadArrays", emscripten::select_overload<int(vtkMultiBlockPLOT3DReader&, int, int, int, int, vtkDataObject*)>([](vtkMultiBlockPLOT3DReader& self, int arg_0, int arg_1, int arg_2, int arg_3, vtkDataObject* arg_4) -> int { return self.ReadArrays( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOParallel_vtkMultiBlockPLOT3DReader_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkMultiBlockPLOT3DReader_FILE_BIG_ENDIAN", vtkMultiBlockPLOT3DReader::FILE_BIG_ENDIAN },
      { "vtkMultiBlockPLOT3DReader_FILE_LITTLE_ENDIAN", vtkMultiBlockPLOT3DReader::FILE_LITTLE_ENDIAN },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

// JavaScript wrapper for vtkOpenFOAMReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkOpenFOAMReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkOpenFOAMReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkStdString.h"
#include "vtkStringArray.h"
#include "vtkDoubleArray.h"
#include "vtkOpenFOAMReader.h"

template<> void emscripten::internal::raw_destructor<vtkOpenFOAMReader>(vtkOpenFOAMReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenFOAMReader_class) {
  emscripten::class_<vtkOpenFOAMReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkOpenFOAMReader")
    .smart_ptr<vtkSmartPointer<vtkOpenFOAMReader>>("vtkSmartPointer<vtkOpenFOAMReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenFOAMReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenFOAMReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenFOAMReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenFOAMReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenFOAMReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkOpenFOAMReader& self) -> std::string {  return self.GetFileName();}))
    .function("GetNumberOfCellArrays", &vtkOpenFOAMReader::GetNumberOfCellArrays)
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetCellArrayName", emscripten::optional_override([](vtkOpenFOAMReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("DisableAllCellArrays", &vtkOpenFOAMReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkOpenFOAMReader::EnableAllCellArrays)
    .function("GetNumberOfPointArrays", &vtkOpenFOAMReader::GetNumberOfPointArrays)
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetPointArrayName", emscripten::optional_override([](vtkOpenFOAMReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("DisableAllPointArrays", &vtkOpenFOAMReader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkOpenFOAMReader::EnableAllPointArrays)
    .function("GetNumberOfLagrangianArrays", &vtkOpenFOAMReader::GetNumberOfLagrangianArrays)
    .function("GetLagrangianArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.GetLagrangianArrayStatus( arg_0.c_str());}))
    .function("SetLagrangianArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetLagrangianArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetLagrangianArrayName", emscripten::optional_override([](vtkOpenFOAMReader& self, int arg_0) -> std::string {  return self.GetLagrangianArrayName( arg_0);}))
    .function("DisableAllLagrangianArrays", &vtkOpenFOAMReader::DisableAllLagrangianArrays)
    .function("EnableAllLagrangianArrays", &vtkOpenFOAMReader::EnableAllLagrangianArrays)
    .function("GetNumberOfPatchArrays", &vtkOpenFOAMReader::GetNumberOfPatchArrays)
    .function("GetPatchArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.GetPatchArrayStatus( arg_0.c_str());}))
    .function("SetPatchArrayStatus", emscripten::optional_override([](vtkOpenFOAMReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPatchArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetPatchArrayName", emscripten::optional_override([](vtkOpenFOAMReader& self, int arg_0) -> std::string {  return self.GetPatchArrayName( arg_0);}))
    .function("DisableAllPatchArrays", &vtkOpenFOAMReader::DisableAllPatchArrays)
    .function("EnableAllPatchArrays", &vtkOpenFOAMReader::EnableAllPatchArrays)
    .function("SetCreateCellToPoint", &vtkOpenFOAMReader::SetCreateCellToPoint)
    .function("GetCreateCellToPoint", &vtkOpenFOAMReader::GetCreateCellToPoint)
    .function("CreateCellToPointOn", &vtkOpenFOAMReader::CreateCellToPointOn)
    .function("CreateCellToPointOff", &vtkOpenFOAMReader::CreateCellToPointOff)
    .function("SetSizeAverageCellToPoint", &vtkOpenFOAMReader::SetSizeAverageCellToPoint)
    .function("GetSizeAverageCellToPoint", &vtkOpenFOAMReader::GetSizeAverageCellToPoint)
    .function("SizeAverageCellToPointOn", &vtkOpenFOAMReader::SizeAverageCellToPointOn)
    .function("SizeAverageCellToPointOff", &vtkOpenFOAMReader::SizeAverageCellToPointOff)
    .function("SetCacheMesh", &vtkOpenFOAMReader::SetCacheMesh)
    .function("GetCacheMesh", &vtkOpenFOAMReader::GetCacheMesh)
    .function("CacheMeshOn", &vtkOpenFOAMReader::CacheMeshOn)
    .function("CacheMeshOff", &vtkOpenFOAMReader::CacheMeshOff)
    .function("SetPositionsIsIn13Format", &vtkOpenFOAMReader::SetPositionsIsIn13Format)
    .function("GetPositionsIsIn13Format", &vtkOpenFOAMReader::GetPositionsIsIn13Format)
    .function("PositionsIsIn13FormatOn", &vtkOpenFOAMReader::PositionsIsIn13FormatOn)
    .function("PositionsIsIn13FormatOff", &vtkOpenFOAMReader::PositionsIsIn13FormatOff)
    .function("SetSkipZeroTime", &vtkOpenFOAMReader::SetSkipZeroTime)
    .function("GetSkipZeroTime", &vtkOpenFOAMReader::GetSkipZeroTime)
    .function("SkipZeroTimeOn", &vtkOpenFOAMReader::SkipZeroTimeOn)
    .function("SkipZeroTimeOff", &vtkOpenFOAMReader::SkipZeroTimeOff)
    .function("SetListTimeStepsByControlDict", &vtkOpenFOAMReader::SetListTimeStepsByControlDict)
    .function("GetListTimeStepsByControlDict", &vtkOpenFOAMReader::GetListTimeStepsByControlDict)
    .function("ListTimeStepsByControlDictOn", &vtkOpenFOAMReader::ListTimeStepsByControlDictOn)
    .function("ListTimeStepsByControlDictOff", &vtkOpenFOAMReader::ListTimeStepsByControlDictOff)
    .function("SetAddDimensionsToArrayNames", &vtkOpenFOAMReader::SetAddDimensionsToArrayNames)
    .function("GetAddDimensionsToArrayNames", &vtkOpenFOAMReader::GetAddDimensionsToArrayNames)
    .function("AddDimensionsToArrayNamesOn", &vtkOpenFOAMReader::AddDimensionsToArrayNamesOn)
    .function("AddDimensionsToArrayNamesOff", &vtkOpenFOAMReader::AddDimensionsToArrayNamesOff)
    .function("SetReadZones", &vtkOpenFOAMReader::SetReadZones)
    .function("GetReadZones", &vtkOpenFOAMReader::GetReadZones)
    .function("ReadZonesOn", &vtkOpenFOAMReader::ReadZonesOn)
    .function("ReadZonesOff", &vtkOpenFOAMReader::ReadZonesOff)
    .function("SetUse64BitLabels", &vtkOpenFOAMReader::SetUse64BitLabels)
    .function("GetUse64BitLabels", &vtkOpenFOAMReader::GetUse64BitLabels)
    .function("Use64BitLabelsOn", &vtkOpenFOAMReader::Use64BitLabelsOn)
    .function("Use64BitLabelsOff", &vtkOpenFOAMReader::Use64BitLabelsOff)
    .function("GetCopyDataToCellZones", &vtkOpenFOAMReader::GetCopyDataToCellZones)
    .function("SetCopyDataToCellZones", &vtkOpenFOAMReader::SetCopyDataToCellZones)
    .function("CopyDataToCellZonesOn", &vtkOpenFOAMReader::CopyDataToCellZonesOn)
    .function("CopyDataToCellZonesOff", &vtkOpenFOAMReader::CopyDataToCellZonesOff)
    .function("SetUse64BitFloats", &vtkOpenFOAMReader::SetUse64BitFloats)
    .function("GetUse64BitFloats", &vtkOpenFOAMReader::GetUse64BitFloats)
    .function("Use64BitFloatsOn", &vtkOpenFOAMReader::Use64BitFloatsOn)
    .function("Use64BitFloatsOff", &vtkOpenFOAMReader::Use64BitFloatsOff)
    .function("SetRefresh", &vtkOpenFOAMReader::SetRefresh)
    .function("SetParent", &vtkOpenFOAMReader::SetParent, emscripten::allow_raw_pointers())
    .function("MakeInformationVector", &vtkOpenFOAMReader::MakeInformationVector, emscripten::allow_raw_pointers())
    .function("GetTimeValue", &vtkOpenFOAMReader::GetTimeValue)
    .function("SetTimeValue", &vtkOpenFOAMReader::SetTimeValue)
    .function("GetTimeNames", &vtkOpenFOAMReader::GetTimeNames, emscripten::allow_raw_pointers())
    .function("GetTimeValues", &vtkOpenFOAMReader::GetTimeValues, emscripten::allow_raw_pointers())
    .function("MakeMetaDataAtTimeStep", &vtkOpenFOAMReader::MakeMetaDataAtTimeStep);
}

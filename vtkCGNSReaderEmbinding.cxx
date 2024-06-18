// JavaScript wrapper for vtkCGNSReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCGNSReader.js/vtkIOCGNSReader.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCGNSReader.js/vtkCGNSReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/CGNS/vtkCGNSReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkMultiProcessController.h"
#include "vtkInformationStringKey.h"
#include "vtkCGNSReader.h"

EMSCRIPTEN_BINDINGS(vtkIOCGNSReader_vtkCGNSReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCGNSReader>(vtkCGNSReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCGNSReader_class) {
  using DataArrayLocation=vtkCGNSReader::DataArrayLocation;
  emscripten::class_<vtkCGNSReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkCGNSReader")
    .smart_ptr<vtkSmartPointer<vtkCGNSReader>>("vtkSmartPointer<vtkCGNSReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCGNSReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCGNSReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCGNSReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCGNSReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCGNSReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataLocation", &vtkCGNSReader::SetDataLocation)
    .function("GetDataLocationMinValue", &vtkCGNSReader::GetDataLocationMinValue)
    .function("GetDataLocationMaxValue", &vtkCGNSReader::GetDataLocationMaxValue)
    .function("GetDataLocation", &vtkCGNSReader::GetDataLocation)
    .function("SetFileName", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCGNSReader& self) -> std::string {  return self.GetFileName();}))
    .function("CanReadFile", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetBaseSelection", &vtkCGNSReader::GetBaseSelection, emscripten::allow_raw_pointers())
    .function("GetFamilySelection", &vtkCGNSReader::GetFamilySelection, emscripten::allow_raw_pointers())
    .function("GetCellDataArraySelection", &vtkCGNSReader::GetCellDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetFaceDataArraySelection", &vtkCGNSReader::GetFaceDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetPointDataArraySelection", &vtkCGNSReader::GetPointDataArraySelection, emscripten::allow_raw_pointers())
    .function("GetBaseArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.GetBaseArrayStatus( arg_0.c_str());}))
    .function("SetBaseArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetBaseArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllBases", &vtkCGNSReader::DisableAllBases)
    .function("EnableAllBases", &vtkCGNSReader::EnableAllBases)
    .function("GetNumberOfBaseArrays", &vtkCGNSReader::GetNumberOfBaseArrays)
    .function("GetBaseArrayName", emscripten::optional_override([](vtkCGNSReader& self, int arg_0) -> std::string {  return self.GetBaseArrayName( arg_0);}))
    .function("GetNumberOfFamilyArrays", &vtkCGNSReader::GetNumberOfFamilyArrays)
    .function("GetFamilyArrayName", emscripten::optional_override([](vtkCGNSReader& self, int arg_0) -> std::string {  return self.GetFamilyArrayName( arg_0);}))
    .function("SetFamilyArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFamilyArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetFamilyArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.GetFamilyArrayStatus( arg_0.c_str());}))
    .function("EnableAllFamilies", &vtkCGNSReader::EnableAllFamilies)
    .function("DisableAllFamilies", &vtkCGNSReader::DisableAllFamilies)
    .function("GetNumberOfPointArrays", &vtkCGNSReader::GetNumberOfPointArrays)
    .function("GetPointArrayName", emscripten::optional_override([](vtkCGNSReader& self, int arg_0) -> std::string {  return self.GetPointArrayName( arg_0);}))
    .function("GetPointArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.GetPointArrayStatus( arg_0.c_str());}))
    .function("SetPointArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllPointArrays", &vtkCGNSReader::DisableAllPointArrays)
    .function("EnableAllPointArrays", &vtkCGNSReader::EnableAllPointArrays)
    .function("GetNumberOfCellArrays", &vtkCGNSReader::GetNumberOfCellArrays)
    .function("GetCellArrayName", emscripten::optional_override([](vtkCGNSReader& self, int arg_0) -> std::string {  return self.GetCellArrayName( arg_0);}))
    .function("GetCellArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.GetCellArrayStatus( arg_0.c_str());}))
    .function("SetCellArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCellArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllCellArrays", &vtkCGNSReader::DisableAllCellArrays)
    .function("EnableAllCellArrays", &vtkCGNSReader::EnableAllCellArrays)
    .function("GetNumberOfFaceArrays", &vtkCGNSReader::GetNumberOfFaceArrays)
    .function("GetFaceArrayName", emscripten::optional_override([](vtkCGNSReader& self, int arg_0) -> std::string {  return self.GetFaceArrayName( arg_0);}))
    .function("GetFaceArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0) -> int {  return self.GetFaceArrayStatus( arg_0.c_str());}))
    .function("SetFaceArrayStatus", emscripten::optional_override([](vtkCGNSReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFaceArrayStatus( arg_0.c_str(), arg_1);}))
    .function("DisableAllFaceArrays", &vtkCGNSReader::DisableAllFaceArrays)
    .function("EnableAllFaceArrays", &vtkCGNSReader::EnableAllFaceArrays)
    .function("SetDoublePrecisionMesh", &vtkCGNSReader::SetDoublePrecisionMesh)
    .function("GetDoublePrecisionMesh", &vtkCGNSReader::GetDoublePrecisionMesh)
    .function("DoublePrecisionMeshOn", &vtkCGNSReader::DoublePrecisionMeshOn)
    .function("DoublePrecisionMeshOff", &vtkCGNSReader::DoublePrecisionMeshOff)
    .function("SetLoadBndPatch", &vtkCGNSReader::SetLoadBndPatch)
    .function("GetLoadBndPatch", &vtkCGNSReader::GetLoadBndPatch)
    .function("LoadBndPatchOn", &vtkCGNSReader::LoadBndPatchOn)
    .function("LoadBndPatchOff", &vtkCGNSReader::LoadBndPatchOff)
    .function("SetLoadMesh", &vtkCGNSReader::SetLoadMesh)
    .function("GetLoadMesh", &vtkCGNSReader::GetLoadMesh)
    .function("LoadMeshOn", &vtkCGNSReader::LoadMeshOn)
    .function("LoadMeshOff", &vtkCGNSReader::LoadMeshOff)
    .function("SetUse3DVector", &vtkCGNSReader::SetUse3DVector)
    .function("GetUse3DVector", &vtkCGNSReader::GetUse3DVector)
    .function("Use3DVectorOn", &vtkCGNSReader::Use3DVectorOn)
    .function("Use3DVectorOff", &vtkCGNSReader::Use3DVectorOff)
    .function("SetCreateEachSolutionAsBlock", &vtkCGNSReader::SetCreateEachSolutionAsBlock)
    .function("GetCreateEachSolutionAsBlock", &vtkCGNSReader::GetCreateEachSolutionAsBlock)
    .function("CreateEachSolutionAsBlockOn", &vtkCGNSReader::CreateEachSolutionAsBlockOn)
    .function("CreateEachSolutionAsBlockOff", &vtkCGNSReader::CreateEachSolutionAsBlockOff)
    .function("SetIgnoreFlowSolutionPointers", &vtkCGNSReader::SetIgnoreFlowSolutionPointers)
    .function("GetIgnoreFlowSolutionPointers", &vtkCGNSReader::GetIgnoreFlowSolutionPointers)
    .function("IgnoreFlowSolutionPointersOn", &vtkCGNSReader::IgnoreFlowSolutionPointersOn)
    .function("IgnoreFlowSolutionPointersOff", &vtkCGNSReader::IgnoreFlowSolutionPointersOff)
    .function("SetUseUnsteadyPattern", &vtkCGNSReader::SetUseUnsteadyPattern)
    .function("GetUseUnsteadyPattern", &vtkCGNSReader::GetUseUnsteadyPattern)
    .function("UseUnsteadyPatternOn", &vtkCGNSReader::UseUnsteadyPatternOn)
    .function("UseUnsteadyPatternOff", &vtkCGNSReader::UseUnsteadyPatternOff)
    .function("SetUnsteadySolutionStartTimestep", &vtkCGNSReader::SetUnsteadySolutionStartTimestep)
    .function("GetUnsteadySolutionStartTimestep", &vtkCGNSReader::GetUnsteadySolutionStartTimestep)
    .function("SetDistributeBlocks", &vtkCGNSReader::SetDistributeBlocks)
    .function("GetDistributeBlocks", &vtkCGNSReader::GetDistributeBlocks)
    .function("DistributeBlocksOn", &vtkCGNSReader::DistributeBlocksOn)
    .function("DistributeBlocksOff", &vtkCGNSReader::DistributeBlocksOff)
    .function("SetCacheMesh", &vtkCGNSReader::SetCacheMesh)
    .function("GetCacheMesh", &vtkCGNSReader::GetCacheMesh)
    .function("CacheMeshOn", &vtkCGNSReader::CacheMeshOn)
    .function("CacheMeshOff", &vtkCGNSReader::CacheMeshOff)
    .function("SetCacheConnectivity", &vtkCGNSReader::SetCacheConnectivity)
    .function("GetCacheConnectivity", &vtkCGNSReader::GetCacheConnectivity)
    .function("CacheConnectivityOn", &vtkCGNSReader::CacheConnectivityOn)
    .function("CacheConnectivityOff", &vtkCGNSReader::CacheConnectivityOff)
    .function("SetController", &vtkCGNSReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkCGNSReader::GetController, emscripten::allow_raw_pointers())
    .function("Broadcast", &vtkCGNSReader::Broadcast, emscripten::allow_raw_pointers())
    .class_function("FAMILY", &vtkCGNSReader::FAMILY, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOCGNSReader_vtkCGNSReader_0_2_constants) {
    typedef vtkCGNSReader::DataArrayLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkCGNSReader_DataArrayLocation_CELL_DATA", vtkCGNSReader::CELL_DATA },
      { "vtkCGNSReader_DataArrayLocation_FACE_DATA", vtkCGNSReader::FACE_DATA },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

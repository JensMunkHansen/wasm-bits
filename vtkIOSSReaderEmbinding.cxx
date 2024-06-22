// JavaScript wrapper for vtkIOSSReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOIOSS.js/vtkIOIOSS.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOIOSS.js/vtkIOSSReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/IOSS/vtkIOSSReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkDataArraySelection.h"
#include "vtkStringArray.h"
#include "vtkDataAssembly.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkInformationVector.h"
#include "vtkInformationIntegerKey.h"
#include "vtkIOSSReader.h"

EMSCRIPTEN_BINDINGS(vtkIOIOSS_vtkIOSSReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkIOSSReader>(vtkIOSSReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIOSSReader_class) {
  using EntityType=vtkIOSSReader::EntityType;
  emscripten::class_<vtkIOSSReader, emscripten::base<vtkReaderAlgorithm>>("vtkIOSSReader")
    .smart_ptr<vtkSmartPointer<vtkIOSSReader>>("vtkSmartPointer<vtkIOSSReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIOSSReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOSSReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIOSSReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIOSSReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOSSReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddFileName", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> void {  return self.AddFileName( arg_0.c_str());}))
    .function("ClearFileNames", &vtkIOSSReader::ClearFileNames)
    .function("GetFileName", emscripten::optional_override([](vtkIOSSReader& self, int arg_0) -> std::string {  return self.GetFileName( arg_0);}))
    .function("GetNumberOfFileNames", &vtkIOSSReader::GetNumberOfFileNames)
    .function("SetFileName", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetDatabaseTypeOverride", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> void {  return self.SetDatabaseTypeOverride( arg_0.c_str());}))
    .function("GetDatabaseTypeOverride", emscripten::optional_override([](vtkIOSSReader& self) -> std::string {  return self.GetDatabaseTypeOverride();}))
    .function("SetDisplacementMagnitude", &vtkIOSSReader::SetDisplacementMagnitude)
    .function("GetDisplacementMagnitude", &vtkIOSSReader::GetDisplacementMagnitude)
    .function("SetGroupNumericVectorFieldComponents", &vtkIOSSReader::SetGroupNumericVectorFieldComponents)
    .function("GetGroupNumericVectorFieldComponents", &vtkIOSSReader::GetGroupNumericVectorFieldComponents)
    .function("SetFieldSuffixSeparator", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> void {  return self.SetFieldSuffixSeparator( arg_0.c_str());}))
    .function("GetFieldSuffixSeparator", &vtkIOSSReader::GetFieldSuffixSeparator)
    .function("SetScanForRelatedFiles", &vtkIOSSReader::SetScanForRelatedFiles)
    .function("GetScanForRelatedFiles", &vtkIOSSReader::GetScanForRelatedFiles)
    .function("ScanForRelatedFilesOn", &vtkIOSSReader::ScanForRelatedFilesOn)
    .function("ScanForRelatedFilesOff", &vtkIOSSReader::ScanForRelatedFilesOff)
    .function("SetFileRange", emscripten::select_overload<void(vtkIOSSReader&, int, int)>([](vtkIOSSReader& self, int arg_0, int arg_1) -> void { return self.SetFileRange( arg_0, arg_1); }))
    .function("SetFileStride", &vtkIOSSReader::SetFileStride)
    .function("GetFileStrideMinValue", &vtkIOSSReader::GetFileStrideMinValue)
    .function("GetFileStrideMaxValue", &vtkIOSSReader::GetFileStrideMaxValue)
    .function("GetFileStride", &vtkIOSSReader::GetFileStride)
    .function("SetCaching", &vtkIOSSReader::SetCaching)
    .function("GetCaching", &vtkIOSSReader::GetCaching)
    .function("CachingOn", &vtkIOSSReader::CachingOn)
    .function("CachingOff", &vtkIOSSReader::CachingOff)
    .function("SetMergeExodusEntityBlocks", &vtkIOSSReader::SetMergeExodusEntityBlocks)
    .function("GetMergeExodusEntityBlocks", &vtkIOSSReader::GetMergeExodusEntityBlocks)
    .function("MergeExodusEntityBlocksOn", &vtkIOSSReader::MergeExodusEntityBlocksOn)
    .function("MergeExodusEntityBlocksOff", &vtkIOSSReader::MergeExodusEntityBlocksOff)
    .function("SetElementAndSideIds", &vtkIOSSReader::SetElementAndSideIds)
    .function("GetElementAndSideIds", &vtkIOSSReader::GetElementAndSideIds)
    .function("ElementAndSideIdsOn", &vtkIOSSReader::ElementAndSideIdsOn)
    .function("ElementAndSideIdsOff", &vtkIOSSReader::ElementAndSideIdsOff)
    .function("SetGenerateFileId", &vtkIOSSReader::SetGenerateFileId)
    .function("GetGenerateFileId", &vtkIOSSReader::GetGenerateFileId)
    .function("GenerateFileIdOn", &vtkIOSSReader::GenerateFileIdOn)
    .function("GenerateFileIdOff", &vtkIOSSReader::GenerateFileIdOff)
    .function("SetReadIds", &vtkIOSSReader::SetReadIds)
    .function("GetReadIds", &vtkIOSSReader::GetReadIds)
    .function("ReadIdsOn", &vtkIOSSReader::ReadIdsOn)
    .function("ReadIdsOff", &vtkIOSSReader::ReadIdsOff)
    .function("SetRemoveUnusedPoints", &vtkIOSSReader::SetRemoveUnusedPoints)
    .function("GetRemoveUnusedPoints", &vtkIOSSReader::GetRemoveUnusedPoints)
    .function("RemoveUnusedPointsOn", &vtkIOSSReader::RemoveUnusedPointsOn)
    .function("RemoveUnusedPointsOff", &vtkIOSSReader::RemoveUnusedPointsOff)
    .function("SetApplyDisplacements", &vtkIOSSReader::SetApplyDisplacements)
    .function("GetApplyDisplacements", &vtkIOSSReader::GetApplyDisplacements)
    .function("ApplyDisplacementsOn", &vtkIOSSReader::ApplyDisplacementsOn)
    .function("ApplyDisplacementsOff", &vtkIOSSReader::ApplyDisplacementsOff)
    .function("SetReadGlobalFields", &vtkIOSSReader::SetReadGlobalFields)
    .function("GetReadGlobalFields", &vtkIOSSReader::GetReadGlobalFields)
    .function("ReadGlobalFieldsOn", &vtkIOSSReader::ReadGlobalFieldsOn)
    .function("ReadGlobalFieldsOff", &vtkIOSSReader::ReadGlobalFieldsOff)
    .function("SetReadAllFilesToDetermineStructure", &vtkIOSSReader::SetReadAllFilesToDetermineStructure)
    .function("GetReadAllFilesToDetermineStructure", &vtkIOSSReader::GetReadAllFilesToDetermineStructure)
    .function("ReadAllFilesToDetermineStructureOn", &vtkIOSSReader::ReadAllFilesToDetermineStructureOn)
    .function("ReadAllFilesToDetermineStructureOff", &vtkIOSSReader::ReadAllFilesToDetermineStructureOff)
    .function("SetReadQAAndInformationRecords", &vtkIOSSReader::SetReadQAAndInformationRecords)
    .function("GetReadQAAndInformationRecords", &vtkIOSSReader::GetReadQAAndInformationRecords)
    .function("ReadQAAndInformationRecordsOn", &vtkIOSSReader::ReadQAAndInformationRecordsOn)
    .function("ReadQAAndInformationRecordsOff", &vtkIOSSReader::ReadQAAndInformationRecordsOff)
    .function("SetController", &vtkIOSSReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkIOSSReader::GetController, emscripten::allow_raw_pointers())
    .function("AddProperty", emscripten::select_overload<void(vtkIOSSReader&, const std::string &, int)>([](vtkIOSSReader& self, const std::string & arg_0, int arg_1) -> void { return self.AddProperty( arg_0.c_str(), arg_1); }))
    .function("AddProperty", emscripten::select_overload<void(vtkIOSSReader&, const std::string &, double)>([](vtkIOSSReader& self, const std::string & arg_0, double arg_1) -> void { return self.AddProperty( arg_0.c_str(), arg_1); }))
    .function("AddProperty", emscripten::select_overload<void(vtkIOSSReader&, const std::string &, std::uintptr_t)>([](vtkIOSSReader& self, const std::string & arg_0, std::uintptr_t arg_1) -> void { return self.AddProperty( arg_0.c_str(),reinterpret_cast<void*>(arg_1)); }))
    .function("AddProperty", emscripten::select_overload<void(vtkIOSSReader&, const std::string &, const std::string &)>([](vtkIOSSReader& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.AddProperty( arg_0.c_str(), arg_1.c_str()); }))
    .function("RemoveProperty", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> void {  return self.RemoveProperty( arg_0.c_str());}))
    .function("ClearProperties", &vtkIOSSReader::ClearProperties)
    .class_function("GetEntityTypeIsBlock", &vtkIOSSReader::GetEntityTypeIsBlock)
    .class_function("GetEntityTypeIsSet", &vtkIOSSReader::GetEntityTypeIsSet)
    .class_function("GetDataAssemblyNodeNameForEntityType", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkIOSSReader::GetDataAssemblyNodeNameForEntityType( arg_0);}))
    .class_function("GetMergedEntityNameForEntityType", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkIOSSReader::GetMergedEntityNameForEntityType( arg_0);}))
    .function("GetEntitySelection", &vtkIOSSReader::GetEntitySelection, emscripten::allow_raw_pointers())
    .function("GetNodeBlockSelection", &vtkIOSSReader::GetNodeBlockSelection, emscripten::allow_raw_pointers())
    .function("GetEdgeBlockSelection", &vtkIOSSReader::GetEdgeBlockSelection, emscripten::allow_raw_pointers())
    .function("GetFaceBlockSelection", &vtkIOSSReader::GetFaceBlockSelection, emscripten::allow_raw_pointers())
    .function("GetElementBlockSelection", &vtkIOSSReader::GetElementBlockSelection, emscripten::allow_raw_pointers())
    .function("GetStructuredBlockSelection", &vtkIOSSReader::GetStructuredBlockSelection, emscripten::allow_raw_pointers())
    .function("GetNodeSetSelection", &vtkIOSSReader::GetNodeSetSelection, emscripten::allow_raw_pointers())
    .function("GetEdgeSetSelection", &vtkIOSSReader::GetEdgeSetSelection, emscripten::allow_raw_pointers())
    .function("GetFaceSetSelection", &vtkIOSSReader::GetFaceSetSelection, emscripten::allow_raw_pointers())
    .function("GetElementSetSelection", &vtkIOSSReader::GetElementSetSelection, emscripten::allow_raw_pointers())
    .function("GetSideSetSelection", &vtkIOSSReader::GetSideSetSelection, emscripten::allow_raw_pointers())
    .function("GetFieldSelection", &vtkIOSSReader::GetFieldSelection, emscripten::allow_raw_pointers())
    .function("GetNodeBlockFieldSelection", &vtkIOSSReader::GetNodeBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("GetEdgeBlockFieldSelection", &vtkIOSSReader::GetEdgeBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("GetFaceBlockFieldSelection", &vtkIOSSReader::GetFaceBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("GetElementBlockFieldSelection", &vtkIOSSReader::GetElementBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("GetStructuredBlockFieldSelection", &vtkIOSSReader::GetStructuredBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("GetNodeSetFieldSelection", &vtkIOSSReader::GetNodeSetFieldSelection, emscripten::allow_raw_pointers())
    .function("GetEdgeSetFieldSelection", &vtkIOSSReader::GetEdgeSetFieldSelection, emscripten::allow_raw_pointers())
    .function("GetFaceSetFieldSelection", &vtkIOSSReader::GetFaceSetFieldSelection, emscripten::allow_raw_pointers())
    .function("GetElementSetFieldSelection", &vtkIOSSReader::GetElementSetFieldSelection, emscripten::allow_raw_pointers())
    .function("GetSideSetFieldSelection", &vtkIOSSReader::GetSideSetFieldSelection, emscripten::allow_raw_pointers())
    .function("RemoveAllEntitySelections", &vtkIOSSReader::RemoveAllEntitySelections)
    .function("RemoveAllFieldSelections", &vtkIOSSReader::RemoveAllFieldSelections)
    .function("RemoveAllSelections", &vtkIOSSReader::RemoveAllSelections)
    .function("GetEntityIdMapAsString", &vtkIOSSReader::GetEntityIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetNodeBlockIdMapAsString", &vtkIOSSReader::GetNodeBlockIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetEdgeBlockIdMapAsString", &vtkIOSSReader::GetEdgeBlockIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetFaceBlockIdMapAsString", &vtkIOSSReader::GetFaceBlockIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetElementBlockIdMapAsString", &vtkIOSSReader::GetElementBlockIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetStructuredBlockIdMapAsString", &vtkIOSSReader::GetStructuredBlockIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetNodeSetIdMapAsString", &vtkIOSSReader::GetNodeSetIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetEdgeSetIdMapAsString", &vtkIOSSReader::GetEdgeSetIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetFaceSetIdMapAsString", &vtkIOSSReader::GetFaceSetIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetElementSetIdMapAsString", &vtkIOSSReader::GetElementSetIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetSideSetIdMapAsString", &vtkIOSSReader::GetSideSetIdMapAsString, emscripten::allow_raw_pointers())
    .function("GetAssembly", &vtkIOSSReader::GetAssembly, emscripten::allow_raw_pointers())
    .function("GetAssemblyTag", &vtkIOSSReader::GetAssemblyTag)
    .function("AddSelector", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> bool {  return self.AddSelector( arg_0.c_str());}))
    .function("ClearSelectors", &vtkIOSSReader::ClearSelectors)
    .function("SetSelector", emscripten::optional_override([](vtkIOSSReader& self, const std::string & arg_0) -> void {  return self.SetSelector( arg_0.c_str());}))
    .function("GetNumberOfSelectors", &vtkIOSSReader::GetNumberOfSelectors)
    .function("GetSelector", emscripten::optional_override([](vtkIOSSReader& self, int arg_0) -> std::string {  return self.GetSelector( arg_0);}))
    .function("ReadMetaData", &vtkIOSSReader::ReadMetaData, emscripten::allow_raw_pointers())
    .function("ReadMesh", &vtkIOSSReader::ReadMesh, emscripten::allow_raw_pointers())
    .function("ReadPoints", &vtkIOSSReader::ReadPoints, emscripten::allow_raw_pointers())
    .function("ReadArrays", &vtkIOSSReader::ReadArrays, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkIOSSReader::GetMTime)
    .class_function("DoTestFilePatternMatching", &vtkIOSSReader::DoTestFilePatternMatching)
    .class_function("ENTITY_ID", &vtkIOSSReader::ENTITY_ID, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOIOSS_vtkIOSSReader_0_2_constants) {
    typedef vtkIOSSReader::EntityType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[17] = {
      { "vtkIOSSReader_EntityType_NODEBLOCK", vtkIOSSReader::NODEBLOCK },
      { "vtkIOSSReader_EntityType_EDGEBLOCK", vtkIOSSReader::EDGEBLOCK },
      { "vtkIOSSReader_EntityType_FACEBLOCK", vtkIOSSReader::FACEBLOCK },
      { "vtkIOSSReader_EntityType_ELEMENTBLOCK", vtkIOSSReader::ELEMENTBLOCK },
      { "vtkIOSSReader_EntityType_STRUCTUREDBLOCK", vtkIOSSReader::STRUCTUREDBLOCK },
      { "vtkIOSSReader_EntityType_NODESET", vtkIOSSReader::NODESET },
      { "vtkIOSSReader_EntityType_EDGESET", vtkIOSSReader::EDGESET },
      { "vtkIOSSReader_EntityType_FACESET", vtkIOSSReader::FACESET },
      { "vtkIOSSReader_EntityType_ELEMENTSET", vtkIOSSReader::ELEMENTSET },
      { "vtkIOSSReader_EntityType_SIDESET", vtkIOSSReader::SIDESET },
      { "vtkIOSSReader_EntityType_NUMBER_OF_ENTITY_TYPES", vtkIOSSReader::NUMBER_OF_ENTITY_TYPES },
      { "vtkIOSSReader_EntityType_BLOCK_START", vtkIOSSReader::BLOCK_START },
      { "vtkIOSSReader_EntityType_BLOCK_END", vtkIOSSReader::BLOCK_END },
      { "vtkIOSSReader_EntityType_SET_START", vtkIOSSReader::SET_START },
      { "vtkIOSSReader_EntityType_SET_END", vtkIOSSReader::SET_END },
      { "vtkIOSSReader_EntityType_ENTITY_START", vtkIOSSReader::ENTITY_START },
      { "vtkIOSSReader_EntityType_ENTITY_END", vtkIOSSReader::ENTITY_END },
  };
  for (int c = 0; c < 17; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

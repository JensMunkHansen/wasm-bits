// JavaScript wrapper for vtkExodusIIReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkIOExodus.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkExodusIIReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Exodus/vtkExodusIIReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkFloatArray.h"
#include "vtkGraph.h"
#include "vtkInformationIntegerKey.h"
#include "vtkExodusIIReader.h"

EMSCRIPTEN_BINDINGS(vtkIOExodus_vtkExodusIIReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExodusIIReader>(vtkExodusIIReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExodusIIReader_class) {
  using ObjectType=vtkExodusIIReader::ObjectType;
  emscripten::class_<vtkExodusIIReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkExodusIIReader")
    .smart_ptr<vtkSmartPointer<vtkExodusIIReader>>("vtkSmartPointer<vtkExodusIIReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExodusIIReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIIReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExodusIIReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExodusIIReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIIReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("GetMTime", &vtkExodusIIReader::GetMTime)
    .function("GetMetadataMTime", &vtkExodusIIReader::GetMetadataMTime)
    .function("SetFileName", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkExodusIIReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetXMLFileName", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> void {  return self.SetXMLFileName( arg_0.c_str());}))
    .function("GetXMLFileName", emscripten::optional_override([](vtkExodusIIReader& self) -> std::string {  return self.GetXMLFileName();}))
    .function("SetTimeStep", &vtkExodusIIReader::SetTimeStep)
    .function("GetTimeStep", &vtkExodusIIReader::GetTimeStep)
    .function("SetModeShape", &vtkExodusIIReader::SetModeShape)
    .function("SetGenerateObjectIdCellArray", &vtkExodusIIReader::SetGenerateObjectIdCellArray)
    .function("GetGenerateObjectIdCellArray", &vtkExodusIIReader::GetGenerateObjectIdCellArray)
    .function("GenerateObjectIdCellArrayOn", &vtkExodusIIReader::GenerateObjectIdCellArrayOn)
    .function("GenerateObjectIdCellArrayOff", &vtkExodusIIReader::GenerateObjectIdCellArrayOff)
    .class_function("GetObjectIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetObjectIdArrayName();}))
    .function("SetGenerateGlobalElementIdArray", &vtkExodusIIReader::SetGenerateGlobalElementIdArray)
    .function("GetGenerateGlobalElementIdArray", &vtkExodusIIReader::GetGenerateGlobalElementIdArray)
    .function("GenerateGlobalElementIdArrayOn", &vtkExodusIIReader::GenerateGlobalElementIdArrayOn)
    .function("GenerateGlobalElementIdArrayOff", &vtkExodusIIReader::GenerateGlobalElementIdArrayOff)
    .function("SetGenerateGlobalNodeIdArray", &vtkExodusIIReader::SetGenerateGlobalNodeIdArray)
    .function("GetGenerateGlobalNodeIdArray", &vtkExodusIIReader::GetGenerateGlobalNodeIdArray)
    .function("GenerateGlobalNodeIdArrayOn", &vtkExodusIIReader::GenerateGlobalNodeIdArrayOn)
    .function("GenerateGlobalNodeIdArrayOff", &vtkExodusIIReader::GenerateGlobalNodeIdArrayOff)
    .function("SetGenerateImplicitElementIdArray", &vtkExodusIIReader::SetGenerateImplicitElementIdArray)
    .function("GetGenerateImplicitElementIdArray", &vtkExodusIIReader::GetGenerateImplicitElementIdArray)
    .function("GenerateImplicitElementIdArrayOn", &vtkExodusIIReader::GenerateImplicitElementIdArrayOn)
    .function("GenerateImplicitElementIdArrayOff", &vtkExodusIIReader::GenerateImplicitElementIdArrayOff)
    .function("SetGenerateImplicitNodeIdArray", &vtkExodusIIReader::SetGenerateImplicitNodeIdArray)
    .function("GetGenerateImplicitNodeIdArray", &vtkExodusIIReader::GetGenerateImplicitNodeIdArray)
    .function("GenerateImplicitNodeIdArrayOn", &vtkExodusIIReader::GenerateImplicitNodeIdArrayOn)
    .function("GenerateImplicitNodeIdArrayOff", &vtkExodusIIReader::GenerateImplicitNodeIdArrayOff)
    .function("SetGenerateFileIdArray", &vtkExodusIIReader::SetGenerateFileIdArray)
    .function("GetGenerateFileIdArray", &vtkExodusIIReader::GetGenerateFileIdArray)
    .function("GenerateFileIdArrayOn", &vtkExodusIIReader::GenerateFileIdArrayOn)
    .function("GenerateFileIdArrayOff", &vtkExodusIIReader::GenerateFileIdArrayOff)
    .function("SetFileId", &vtkExodusIIReader::SetFileId)
    .function("GetFileId", &vtkExodusIIReader::GetFileId)
    .class_function("GetGlobalElementIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetGlobalElementIdArrayName();}))
    .class_function("GetPedigreeElementIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetPedigreeElementIdArrayName();}))
    .class_function("GetGlobalElementID", emscripten::select_overload<int( vtkDataSet*, int)>([]( vtkDataSet* arg_0, int arg_1) -> int { return vtkExodusIIReader::GetGlobalElementID( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetGlobalElementID", emscripten::select_overload<int( vtkDataSet*, int, int)>([]( vtkDataSet* arg_0, int arg_1, int arg_2) -> int { return vtkExodusIIReader::GetGlobalElementID( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetImplicitElementIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetImplicitElementIdArrayName();}))
    .class_function("GetGlobalFaceIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetGlobalFaceIdArrayName();}))
    .class_function("GetPedigreeFaceIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetPedigreeFaceIdArrayName();}))
    .class_function("GetGlobalFaceID", emscripten::select_overload<int( vtkDataSet*, int)>([]( vtkDataSet* arg_0, int arg_1) -> int { return vtkExodusIIReader::GetGlobalFaceID( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetGlobalFaceID", emscripten::select_overload<int( vtkDataSet*, int, int)>([]( vtkDataSet* arg_0, int arg_1, int arg_2) -> int { return vtkExodusIIReader::GetGlobalFaceID( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetImplicitFaceIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetImplicitFaceIdArrayName();}))
    .class_function("GetGlobalEdgeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetGlobalEdgeIdArrayName();}))
    .class_function("GetPedigreeEdgeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetPedigreeEdgeIdArrayName();}))
    .class_function("GetGlobalEdgeID", emscripten::select_overload<int( vtkDataSet*, int)>([]( vtkDataSet* arg_0, int arg_1) -> int { return vtkExodusIIReader::GetGlobalEdgeID( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetGlobalEdgeID", emscripten::select_overload<int( vtkDataSet*, int, int)>([]( vtkDataSet* arg_0, int arg_1, int arg_2) -> int { return vtkExodusIIReader::GetGlobalEdgeID( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetImplicitEdgeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetImplicitEdgeIdArrayName();}))
    .class_function("GetGlobalNodeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetGlobalNodeIdArrayName();}))
    .class_function("GetPedigreeNodeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetPedigreeNodeIdArrayName();}))
    .class_function("GetGlobalNodeID", emscripten::select_overload<int( vtkDataSet*, int)>([]( vtkDataSet* arg_0, int arg_1) -> int { return vtkExodusIIReader::GetGlobalNodeID( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetGlobalNodeID", emscripten::select_overload<int( vtkDataSet*, int, int)>([]( vtkDataSet* arg_0, int arg_1, int arg_2) -> int { return vtkExodusIIReader::GetGlobalNodeID( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetImplicitNodeIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetImplicitNodeIdArrayName();}))
    .class_function("GetSideSetSourceElementIdArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetSideSetSourceElementIdArrayName();}))
    .class_function("GetSideSetSourceElementSideArrayName", emscripten::optional_override([]() -> std::string {  return vtkExodusIIReader::GetSideSetSourceElementSideArrayName();}))
    .function("SetApplyDisplacements", &vtkExodusIIReader::SetApplyDisplacements)
    .function("GetApplyDisplacements", &vtkExodusIIReader::GetApplyDisplacements)
    .function("ApplyDisplacementsOn", &vtkExodusIIReader::ApplyDisplacementsOn)
    .function("ApplyDisplacementsOff", &vtkExodusIIReader::ApplyDisplacementsOff)
    .function("SetDisplacementMagnitude", &vtkExodusIIReader::SetDisplacementMagnitude)
    .function("GetDisplacementMagnitude", &vtkExodusIIReader::GetDisplacementMagnitude)
    .function("SetHasModeShapes", &vtkExodusIIReader::SetHasModeShapes)
    .function("GetHasModeShapes", &vtkExodusIIReader::GetHasModeShapes)
    .function("HasModeShapesOn", &vtkExodusIIReader::HasModeShapesOn)
    .function("HasModeShapesOff", &vtkExodusIIReader::HasModeShapesOff)
    .function("SetModeShapeTime", &vtkExodusIIReader::SetModeShapeTime)
    .function("GetModeShapeTime", &vtkExodusIIReader::GetModeShapeTime)
    .function("SetAnimateModeShapes", &vtkExodusIIReader::SetAnimateModeShapes)
    .function("GetAnimateModeShapes", &vtkExodusIIReader::GetAnimateModeShapes)
    .function("AnimateModeShapesOn", &vtkExodusIIReader::AnimateModeShapesOn)
    .function("AnimateModeShapesOff", &vtkExodusIIReader::AnimateModeShapesOff)
    .function("SetIgnoreFileTime", &vtkExodusIIReader::SetIgnoreFileTime)
    .function("GetIgnoreFileTime", &vtkExodusIIReader::GetIgnoreFileTime)
    .function("IgnoreFileTimeOn", &vtkExodusIIReader::IgnoreFileTimeOn)
    .function("IgnoreFileTimeOff", &vtkExodusIIReader::IgnoreFileTimeOff)
    .function("GetTitle", emscripten::optional_override([](vtkExodusIIReader& self) -> std::string {  return self.GetTitle();}))
    .function("GetDimensionality", &vtkExodusIIReader::GetDimensionality)
    .function("GetNumberOfTimeSteps", &vtkExodusIIReader::GetNumberOfTimeSteps)
    .function("GetNumberOfNodesInFile", &vtkExodusIIReader::GetNumberOfNodesInFile)
    .function("GetNumberOfEdgesInFile", &vtkExodusIIReader::GetNumberOfEdgesInFile)
    .function("GetNumberOfFacesInFile", &vtkExodusIIReader::GetNumberOfFacesInFile)
    .function("GetNumberOfElementsInFile", &vtkExodusIIReader::GetNumberOfElementsInFile)
    .function("GetObjectTypeFromName", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetObjectTypeFromName( arg_0.c_str());}))
    .function("GetObjectTypeName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetObjectTypeName( arg_0);}))
    .function("GetNumberOfNodes", &vtkExodusIIReader::GetNumberOfNodes)
    .function("GetNumberOfObjects", &vtkExodusIIReader::GetNumberOfObjects)
    .function("GetNumberOfEntriesInObject", &vtkExodusIIReader::GetNumberOfEntriesInObject)
    .function("GetObjectId", &vtkExodusIIReader::GetObjectId)
    .function("GetObjectName", emscripten::select_overload<std::string(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> std::string { return self.GetObjectName( arg_0, arg_1); }))
    .function("GetObjectName", emscripten::select_overload<std::string(vtkExodusIIReader&)>([](vtkExodusIIReader& self) -> std::string { return self.GetObjectName(); }))
    .function("GetObjectIndex", emscripten::select_overload<int(vtkExodusIIReader&, int, const std::string &)>([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1) -> int { return self.GetObjectIndex( arg_0, arg_1.c_str()); }))
    .function("GetObjectIndex", emscripten::select_overload<int(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> int { return self.GetObjectIndex( arg_0, arg_1); }))
    .function("GetObjectStatus", emscripten::select_overload<int(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> int { return self.GetObjectStatus( arg_0, arg_1); }))
    .function("GetObjectStatus", emscripten::select_overload<int(vtkExodusIIReader&, int, const std::string &)>([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1) -> int { return self.GetObjectStatus( arg_0, arg_1.c_str()); }))
    .function("SetObjectStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetObjectStatus( arg_0, arg_1, arg_2); }))
    .function("SetObjectStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, const std::string &, int)>([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetObjectStatus( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetNumberOfObjectArrays", &vtkExodusIIReader::GetNumberOfObjectArrays)
    .function("GetObjectArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0, int arg_1) -> std::string {  return self.GetObjectArrayName( arg_0, arg_1);}))
    .function("GetObjectArrayIndex", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1) -> int {  return self.GetObjectArrayIndex( arg_0, arg_1.c_str());}))
    .function("GetNumberOfObjectArrayComponents", &vtkExodusIIReader::GetNumberOfObjectArrayComponents)
    .function("GetObjectArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> int { return self.GetObjectArrayStatus( arg_0, arg_1); }))
    .function("GetObjectArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, int, const std::string &)>([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1) -> int { return self.GetObjectArrayStatus( arg_0, arg_1.c_str()); }))
    .function("SetObjectArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetObjectArrayStatus( arg_0, arg_1, arg_2); }))
    .function("SetObjectArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, const std::string &, int)>([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetObjectArrayStatus( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetNumberOfObjectAttributes", &vtkExodusIIReader::GetNumberOfObjectAttributes)
    .function("GetObjectAttributeName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0, int arg_1, int arg_2) -> std::string {  return self.GetObjectAttributeName( arg_0, arg_1, arg_2);}))
    .function("GetObjectAttributeIndex", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0, int arg_1, const std::string & arg_2) -> int {  return self.GetObjectAttributeIndex( arg_0, arg_1, arg_2.c_str());}))
    .function("GetObjectAttributeStatus", emscripten::select_overload<int(vtkExodusIIReader&, int, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1, int arg_2) -> int { return self.GetObjectAttributeStatus( arg_0, arg_1, arg_2); }))
    .function("GetObjectAttributeStatus", emscripten::select_overload<int(vtkExodusIIReader&, int, int, const std::string &)>([](vtkExodusIIReader& self, int arg_0, int arg_1, const std::string & arg_2) -> int { return self.GetObjectAttributeStatus( arg_0, arg_1, arg_2.c_str()); }))
    .function("SetObjectAttributeStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetObjectAttributeStatus( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetObjectAttributeStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int, const std::string &, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1, const std::string & arg_2, int arg_3) -> void { return self.SetObjectAttributeStatus( arg_0, arg_1, arg_2.c_str(), arg_3); }))
    .function("GetTotalNumberOfNodes", &vtkExodusIIReader::GetTotalNumberOfNodes)
    .function("GetTotalNumberOfEdges", &vtkExodusIIReader::GetTotalNumberOfEdges)
    .function("GetTotalNumberOfFaces", &vtkExodusIIReader::GetTotalNumberOfFaces)
    .function("GetTotalNumberOfElements", &vtkExodusIIReader::GetTotalNumberOfElements)
    .function("GetNumberOfPartArrays", &vtkExodusIIReader::GetNumberOfPartArrays)
    .function("GetPartArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetPartArrayName( arg_0);}))
    .function("GetPartArrayID", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetPartArrayID( arg_0.c_str());}))
    .function("GetPartBlockInfo", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetPartBlockInfo( arg_0);}))
    .function("SetPartArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> void { return self.SetPartArrayStatus( arg_0, arg_1); }))
    .function("SetPartArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, const std::string &, int)>([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetPartArrayStatus( arg_0.c_str(), arg_1); }))
    .function("GetPartArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, int)>([](vtkExodusIIReader& self, int arg_0) -> int { return self.GetPartArrayStatus( arg_0); }))
    .function("GetPartArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, const std::string &)>([](vtkExodusIIReader& self, const std::string & arg_0) -> int { return self.GetPartArrayStatus( arg_0.c_str()); }))
    .function("GetNumberOfMaterialArrays", &vtkExodusIIReader::GetNumberOfMaterialArrays)
    .function("GetMaterialArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetMaterialArrayName( arg_0);}))
    .function("GetMaterialArrayID", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetMaterialArrayID( arg_0.c_str());}))
    .function("SetMaterialArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> void { return self.SetMaterialArrayStatus( arg_0, arg_1); }))
    .function("SetMaterialArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, const std::string &, int)>([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetMaterialArrayStatus( arg_0.c_str(), arg_1); }))
    .function("GetMaterialArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, int)>([](vtkExodusIIReader& self, int arg_0) -> int { return self.GetMaterialArrayStatus( arg_0); }))
    .function("GetMaterialArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, const std::string &)>([](vtkExodusIIReader& self, const std::string & arg_0) -> int { return self.GetMaterialArrayStatus( arg_0.c_str()); }))
    .function("GetNumberOfAssemblyArrays", &vtkExodusIIReader::GetNumberOfAssemblyArrays)
    .function("GetAssemblyArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetAssemblyArrayName( arg_0);}))
    .function("GetAssemblyArrayID", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetAssemblyArrayID( arg_0.c_str());}))
    .function("SetAssemblyArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> void { return self.SetAssemblyArrayStatus( arg_0, arg_1); }))
    .function("SetAssemblyArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, const std::string &, int)>([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetAssemblyArrayStatus( arg_0.c_str(), arg_1); }))
    .function("GetAssemblyArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, int)>([](vtkExodusIIReader& self, int arg_0) -> int { return self.GetAssemblyArrayStatus( arg_0); }))
    .function("GetAssemblyArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, const std::string &)>([](vtkExodusIIReader& self, const std::string & arg_0) -> int { return self.GetAssemblyArrayStatus( arg_0.c_str()); }))
    .function("GetNumberOfHierarchyArrays", &vtkExodusIIReader::GetNumberOfHierarchyArrays)
    .function("GetHierarchyArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetHierarchyArrayName( arg_0);}))
    .function("SetHierarchyArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, int, int)>([](vtkExodusIIReader& self, int arg_0, int arg_1) -> void { return self.SetHierarchyArrayStatus( arg_0, arg_1); }))
    .function("SetHierarchyArrayStatus", emscripten::select_overload<void(vtkExodusIIReader&, const std::string &, int)>([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void { return self.SetHierarchyArrayStatus( arg_0.c_str(), arg_1); }))
    .function("GetHierarchyArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, int)>([](vtkExodusIIReader& self, int arg_0) -> int { return self.GetHierarchyArrayStatus( arg_0); }))
    .function("GetHierarchyArrayStatus", emscripten::select_overload<int(vtkExodusIIReader&, const std::string &)>([](vtkExodusIIReader& self, const std::string & arg_0) -> int { return self.GetHierarchyArrayStatus( arg_0.c_str()); }))
    .function("GetDisplayType", &vtkExodusIIReader::GetDisplayType)
    .function("SetDisplayType", &vtkExodusIIReader::SetDisplayType)
    .function("IsValidVariable", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.IsValidVariable( arg_0.c_str(), arg_1.c_str());}))
    .function("GetVariableID", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.GetVariableID( arg_0.c_str(), arg_1.c_str());}))
    .function("SetAllArrayStatus", &vtkExodusIIReader::SetAllArrayStatus)
    .function("GetTimeSeriesData", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0, const std::string & arg_1, const std::string & arg_2, vtkFloatArray* arg_3) -> int {  return self.GetTimeSeriesData( arg_0, arg_1.c_str(), arg_2.c_str(), arg_3);}), emscripten::allow_raw_pointers())
    .function("GetNumberOfEdgeBlockArrays", &vtkExodusIIReader::GetNumberOfEdgeBlockArrays)
    .function("GetEdgeBlockArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetEdgeBlockArrayName( arg_0);}))
    .function("GetEdgeBlockArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetEdgeBlockArrayStatus( arg_0.c_str());}))
    .function("SetEdgeBlockArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetEdgeBlockArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfFaceBlockArrays", &vtkExodusIIReader::GetNumberOfFaceBlockArrays)
    .function("GetFaceBlockArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetFaceBlockArrayName( arg_0);}))
    .function("GetFaceBlockArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetFaceBlockArrayStatus( arg_0.c_str());}))
    .function("SetFaceBlockArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFaceBlockArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfElementBlockArrays", &vtkExodusIIReader::GetNumberOfElementBlockArrays)
    .function("GetElementBlockArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetElementBlockArrayName( arg_0);}))
    .function("GetElementBlockArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetElementBlockArrayStatus( arg_0.c_str());}))
    .function("SetElementBlockArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetElementBlockArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfGlobalResultArrays", &vtkExodusIIReader::GetNumberOfGlobalResultArrays)
    .function("GetGlobalResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetGlobalResultArrayName( arg_0);}))
    .function("GetGlobalResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetGlobalResultArrayStatus( arg_0.c_str());}))
    .function("SetGlobalResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetGlobalResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfPointResultArrays", &vtkExodusIIReader::GetNumberOfPointResultArrays)
    .function("GetPointResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetPointResultArrayName( arg_0);}))
    .function("GetPointResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetPointResultArrayStatus( arg_0.c_str());}))
    .function("SetPointResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetPointResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfEdgeResultArrays", &vtkExodusIIReader::GetNumberOfEdgeResultArrays)
    .function("GetEdgeResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetEdgeResultArrayName( arg_0);}))
    .function("GetEdgeResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetEdgeResultArrayStatus( arg_0.c_str());}))
    .function("SetEdgeResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetEdgeResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfFaceResultArrays", &vtkExodusIIReader::GetNumberOfFaceResultArrays)
    .function("GetFaceResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetFaceResultArrayName( arg_0);}))
    .function("GetFaceResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetFaceResultArrayStatus( arg_0.c_str());}))
    .function("SetFaceResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFaceResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfElementResultArrays", &vtkExodusIIReader::GetNumberOfElementResultArrays)
    .function("GetElementResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetElementResultArrayName( arg_0);}))
    .function("GetElementResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetElementResultArrayStatus( arg_0.c_str());}))
    .function("SetElementResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetElementResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfNodeMapArrays", &vtkExodusIIReader::GetNumberOfNodeMapArrays)
    .function("GetNodeMapArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetNodeMapArrayName( arg_0);}))
    .function("GetNodeMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetNodeMapArrayStatus( arg_0.c_str());}))
    .function("SetNodeMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetNodeMapArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfEdgeMapArrays", &vtkExodusIIReader::GetNumberOfEdgeMapArrays)
    .function("GetEdgeMapArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetEdgeMapArrayName( arg_0);}))
    .function("GetEdgeMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetEdgeMapArrayStatus( arg_0.c_str());}))
    .function("SetEdgeMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetEdgeMapArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfFaceMapArrays", &vtkExodusIIReader::GetNumberOfFaceMapArrays)
    .function("GetFaceMapArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetFaceMapArrayName( arg_0);}))
    .function("GetFaceMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetFaceMapArrayStatus( arg_0.c_str());}))
    .function("SetFaceMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFaceMapArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfElementMapArrays", &vtkExodusIIReader::GetNumberOfElementMapArrays)
    .function("GetElementMapArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetElementMapArrayName( arg_0);}))
    .function("GetElementMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetElementMapArrayStatus( arg_0.c_str());}))
    .function("SetElementMapArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetElementMapArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfNodeSetArrays", &vtkExodusIIReader::GetNumberOfNodeSetArrays)
    .function("GetNodeSetArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetNodeSetArrayName( arg_0);}))
    .function("GetNodeSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetNodeSetArrayStatus( arg_0.c_str());}))
    .function("SetNodeSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetNodeSetArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfSideSetArrays", &vtkExodusIIReader::GetNumberOfSideSetArrays)
    .function("GetSideSetArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetSideSetArrayName( arg_0);}))
    .function("GetSideSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetSideSetArrayStatus( arg_0.c_str());}))
    .function("SetSideSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetSideSetArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfEdgeSetArrays", &vtkExodusIIReader::GetNumberOfEdgeSetArrays)
    .function("GetEdgeSetArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetEdgeSetArrayName( arg_0);}))
    .function("GetEdgeSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetEdgeSetArrayStatus( arg_0.c_str());}))
    .function("SetEdgeSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetEdgeSetArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfFaceSetArrays", &vtkExodusIIReader::GetNumberOfFaceSetArrays)
    .function("GetFaceSetArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetFaceSetArrayName( arg_0);}))
    .function("GetFaceSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetFaceSetArrayStatus( arg_0.c_str());}))
    .function("SetFaceSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFaceSetArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfElementSetArrays", &vtkExodusIIReader::GetNumberOfElementSetArrays)
    .function("GetElementSetArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetElementSetArrayName( arg_0);}))
    .function("GetElementSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetElementSetArrayStatus( arg_0.c_str());}))
    .function("SetElementSetArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetElementSetArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfNodeSetResultArrays", &vtkExodusIIReader::GetNumberOfNodeSetResultArrays)
    .function("GetNodeSetResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetNodeSetResultArrayName( arg_0);}))
    .function("GetNodeSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetNodeSetResultArrayStatus( arg_0.c_str());}))
    .function("SetNodeSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetNodeSetResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfSideSetResultArrays", &vtkExodusIIReader::GetNumberOfSideSetResultArrays)
    .function("GetSideSetResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetSideSetResultArrayName( arg_0);}))
    .function("GetSideSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetSideSetResultArrayStatus( arg_0.c_str());}))
    .function("SetSideSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetSideSetResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfEdgeSetResultArrays", &vtkExodusIIReader::GetNumberOfEdgeSetResultArrays)
    .function("GetEdgeSetResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetEdgeSetResultArrayName( arg_0);}))
    .function("GetEdgeSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetEdgeSetResultArrayStatus( arg_0.c_str());}))
    .function("SetEdgeSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetEdgeSetResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfFaceSetResultArrays", &vtkExodusIIReader::GetNumberOfFaceSetResultArrays)
    .function("GetFaceSetResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetFaceSetResultArrayName( arg_0);}))
    .function("GetFaceSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetFaceSetResultArrayStatus( arg_0.c_str());}))
    .function("SetFaceSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetFaceSetResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("GetNumberOfElementSetResultArrays", &vtkExodusIIReader::GetNumberOfElementSetResultArrays)
    .function("GetElementSetResultArrayName", emscripten::optional_override([](vtkExodusIIReader& self, int arg_0) -> std::string {  return self.GetElementSetResultArrayName( arg_0);}))
    .function("GetElementSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0) -> int {  return self.GetElementSetResultArrayStatus( arg_0.c_str());}))
    .function("SetElementSetResultArrayStatus", emscripten::optional_override([](vtkExodusIIReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetElementSetResultArrayStatus( arg_0.c_str(), arg_1);}))
    .function("Reset", &vtkExodusIIReader::Reset)
    .function("ResetSettings", &vtkExodusIIReader::ResetSettings)
    .function("ResetCache", &vtkExodusIIReader::ResetCache)
    .function("SetCacheSize", &vtkExodusIIReader::SetCacheSize)
    .function("GetCacheSize", &vtkExodusIIReader::GetCacheSize)
    .function("SetSqueezePoints", &vtkExodusIIReader::SetSqueezePoints)
    .function("GetSqueezePoints", &vtkExodusIIReader::GetSqueezePoints)
    .function("Dump", &vtkExodusIIReader::Dump)
    .function("GetSIL", &vtkExodusIIReader::GetSIL, emscripten::allow_raw_pointers())
    .function("GetSILUpdateStamp", &vtkExodusIIReader::GetSILUpdateStamp)
    .function("GetMaxNameLength", &vtkExodusIIReader::GetMaxNameLength)
    .class_function("GLOBAL_VARIABLE", &vtkExodusIIReader::GLOBAL_VARIABLE, emscripten::allow_raw_pointers())
    .class_function("GLOBAL_TEMPORAL_VARIABLE", &vtkExodusIIReader::GLOBAL_TEMPORAL_VARIABLE, emscripten::allow_raw_pointers())
    .function("SetUseLegacyBlockNames", &vtkExodusIIReader::SetUseLegacyBlockNames)
    .function("GetUseLegacyBlockNames", &vtkExodusIIReader::GetUseLegacyBlockNames)
    .function("UseLegacyBlockNamesOn", &vtkExodusIIReader::UseLegacyBlockNamesOn)
    .function("UseLegacyBlockNamesOff", &vtkExodusIIReader::UseLegacyBlockNamesOff);
}
EMSCRIPTEN_BINDINGS(vtkIOExodus_vtkExodusIIReader_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkExodusIIReader_SEARCH_TYPE_ELEMENT", vtkExodusIIReader::SEARCH_TYPE_ELEMENT },
      { "vtkExodusIIReader_SEARCH_TYPE_NODE", vtkExodusIIReader::SEARCH_TYPE_NODE },
      { "vtkExodusIIReader_SEARCH_TYPE_ELEMENT_THEN_NODE", vtkExodusIIReader::SEARCH_TYPE_ELEMENT_THEN_NODE },
      { "vtkExodusIIReader_SEARCH_TYPE_NODE_THEN_ELEMENT", vtkExodusIIReader::SEARCH_TYPE_NODE_THEN_ELEMENT },
      { "vtkExodusIIReader_ID_NOT_FOUND", vtkExodusIIReader::ID_NOT_FOUND },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkIOExodus_vtkExodusIIReader_1_2_constants) {
    typedef vtkExodusIIReader::ObjectType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[49] = {
      { "vtkExodusIIReader_ObjectType_EDGE_BLOCK", vtkExodusIIReader::EDGE_BLOCK },
      { "vtkExodusIIReader_ObjectType_FACE_BLOCK", vtkExodusIIReader::FACE_BLOCK },
      { "vtkExodusIIReader_ObjectType_ELEM_BLOCK", vtkExodusIIReader::ELEM_BLOCK },
      { "vtkExodusIIReader_ObjectType_NODE_SET", vtkExodusIIReader::NODE_SET },
      { "vtkExodusIIReader_ObjectType_EDGE_SET", vtkExodusIIReader::EDGE_SET },
      { "vtkExodusIIReader_ObjectType_FACE_SET", vtkExodusIIReader::FACE_SET },
      { "vtkExodusIIReader_ObjectType_SIDE_SET", vtkExodusIIReader::SIDE_SET },
      { "vtkExodusIIReader_ObjectType_ELEM_SET", vtkExodusIIReader::ELEM_SET },
      { "vtkExodusIIReader_ObjectType_NODE_MAP", vtkExodusIIReader::NODE_MAP },
      { "vtkExodusIIReader_ObjectType_EDGE_MAP", vtkExodusIIReader::EDGE_MAP },
      { "vtkExodusIIReader_ObjectType_FACE_MAP", vtkExodusIIReader::FACE_MAP },
      { "vtkExodusIIReader_ObjectType_ELEM_MAP", vtkExodusIIReader::ELEM_MAP },
      { "vtkExodusIIReader_ObjectType_GLOBAL", vtkExodusIIReader::GLOBAL },
      { "vtkExodusIIReader_ObjectType_NODAL", vtkExodusIIReader::NODAL },
      { "vtkExodusIIReader_ObjectType_ASSEMBLY", vtkExodusIIReader::ASSEMBLY },
      { "vtkExodusIIReader_ObjectType_PART", vtkExodusIIReader::PART },
      { "vtkExodusIIReader_ObjectType_MATERIAL", vtkExodusIIReader::MATERIAL },
      { "vtkExodusIIReader_ObjectType_HIERARCHY", vtkExodusIIReader::HIERARCHY },
      { "vtkExodusIIReader_ObjectType_QA_RECORDS", vtkExodusIIReader::QA_RECORDS },
      { "vtkExodusIIReader_ObjectType_INFO_RECORDS", vtkExodusIIReader::INFO_RECORDS },
      { "vtkExodusIIReader_ObjectType_GLOBAL_TEMPORAL", vtkExodusIIReader::GLOBAL_TEMPORAL },
      { "vtkExodusIIReader_ObjectType_NODAL_TEMPORAL", vtkExodusIIReader::NODAL_TEMPORAL },
      { "vtkExodusIIReader_ObjectType_ELEM_BLOCK_TEMPORAL", vtkExodusIIReader::ELEM_BLOCK_TEMPORAL },
      { "vtkExodusIIReader_ObjectType_GLOBAL_CONN", vtkExodusIIReader::GLOBAL_CONN },
      { "vtkExodusIIReader_ObjectType_ELEM_BLOCK_ELEM_CONN", vtkExodusIIReader::ELEM_BLOCK_ELEM_CONN },
      { "vtkExodusIIReader_ObjectType_ELEM_BLOCK_FACE_CONN", vtkExodusIIReader::ELEM_BLOCK_FACE_CONN },
      { "vtkExodusIIReader_ObjectType_ELEM_BLOCK_EDGE_CONN", vtkExodusIIReader::ELEM_BLOCK_EDGE_CONN },
      { "vtkExodusIIReader_ObjectType_FACE_BLOCK_CONN", vtkExodusIIReader::FACE_BLOCK_CONN },
      { "vtkExodusIIReader_ObjectType_EDGE_BLOCK_CONN", vtkExodusIIReader::EDGE_BLOCK_CONN },
      { "vtkExodusIIReader_ObjectType_ELEM_SET_CONN", vtkExodusIIReader::ELEM_SET_CONN },
      { "vtkExodusIIReader_ObjectType_SIDE_SET_CONN", vtkExodusIIReader::SIDE_SET_CONN },
      { "vtkExodusIIReader_ObjectType_FACE_SET_CONN", vtkExodusIIReader::FACE_SET_CONN },
      { "vtkExodusIIReader_ObjectType_EDGE_SET_CONN", vtkExodusIIReader::EDGE_SET_CONN },
      { "vtkExodusIIReader_ObjectType_NODE_SET_CONN", vtkExodusIIReader::NODE_SET_CONN },
      { "vtkExodusIIReader_ObjectType_NODAL_COORDS", vtkExodusIIReader::NODAL_COORDS },
      { "vtkExodusIIReader_ObjectType_OBJECT_ID", vtkExodusIIReader::OBJECT_ID },
      { "vtkExodusIIReader_ObjectType_IMPLICIT_ELEMENT_ID", vtkExodusIIReader::IMPLICIT_ELEMENT_ID },
      { "vtkExodusIIReader_ObjectType_IMPLICIT_NODE_ID", vtkExodusIIReader::IMPLICIT_NODE_ID },
      { "vtkExodusIIReader_ObjectType_GLOBAL_ELEMENT_ID", vtkExodusIIReader::GLOBAL_ELEMENT_ID },
      { "vtkExodusIIReader_ObjectType_GLOBAL_NODE_ID", vtkExodusIIReader::GLOBAL_NODE_ID },
      { "vtkExodusIIReader_ObjectType_ELEMENT_ID", vtkExodusIIReader::ELEMENT_ID },
      { "vtkExodusIIReader_ObjectType_NODE_ID", vtkExodusIIReader::NODE_ID },
      { "vtkExodusIIReader_ObjectType_NODAL_SQUEEZEMAP", vtkExodusIIReader::NODAL_SQUEEZEMAP },
      { "vtkExodusIIReader_ObjectType_ELEM_BLOCK_ATTRIB", vtkExodusIIReader::ELEM_BLOCK_ATTRIB },
      { "vtkExodusIIReader_ObjectType_FACE_BLOCK_ATTRIB", vtkExodusIIReader::FACE_BLOCK_ATTRIB },
      { "vtkExodusIIReader_ObjectType_EDGE_BLOCK_ATTRIB", vtkExodusIIReader::EDGE_BLOCK_ATTRIB },
      { "vtkExodusIIReader_ObjectType_FACE_ID", vtkExodusIIReader::FACE_ID },
      { "vtkExodusIIReader_ObjectType_EDGE_ID", vtkExodusIIReader::EDGE_ID },
      { "vtkExodusIIReader_ObjectType_ENTITY_COUNTS", vtkExodusIIReader::ENTITY_COUNTS },
  };
  for (int c = 0; c < 49; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

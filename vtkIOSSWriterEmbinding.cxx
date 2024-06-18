// JavaScript wrapper for vtkIOSSWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOIOSS.js/vtkIOIOSS.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOIOSS.js/vtkIOSSWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/IOSS/vtkIOSSWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIOSSReader.h"
#include "vtkDataArraySelection.h"
#include "vtkMultiProcessController.h"
#include "vtkIOSSWriter.h"

template<> void emscripten::internal::raw_destructor<vtkIOSSWriter>(vtkIOSSWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIOSSWriter_class) {
  emscripten::class_<vtkIOSSWriter, emscripten::base<vtkWriter>>("vtkIOSSWriter")
    .smart_ptr<vtkSmartPointer<vtkIOSSWriter>>("vtkSmartPointer<vtkIOSSWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIOSSWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOSSWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIOSSWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIOSSWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIOSSWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkIOSSWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetAssemblyName", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetAssemblyName( arg_0.c_str());}))
    .function("GetAssemblyName", emscripten::optional_override([](vtkIOSSWriter& self) -> std::string {  return self.GetAssemblyName();}))
    .function("SetChooseFieldsToWrite", &vtkIOSSWriter::SetChooseFieldsToWrite)
    .function("GetChooseFieldsToWrite", &vtkIOSSWriter::GetChooseFieldsToWrite)
    .function("ChooseFieldsToWriteOn", &vtkIOSSWriter::ChooseFieldsToWriteOn)
    .function("ChooseFieldsToWriteOff", &vtkIOSSWriter::ChooseFieldsToWriteOff)
    .function("AddSelector", emscripten::optional_override([](vtkIOSSWriter& self, vtkIOSSReader::EntityType arg_0, const std::string & arg_1) -> bool {  return self.AddSelector( arg_0, arg_1.c_str());}))
    .function("ClearSelectors", &vtkIOSSWriter::ClearSelectors)
    .function("SetSelector", emscripten::optional_override([](vtkIOSSWriter& self, vtkIOSSReader::EntityType arg_0, const std::string & arg_1) -> void {  return self.SetSelector( arg_0, arg_1.c_str());}))
    .function("GetNumberOfSelectors", &vtkIOSSWriter::GetNumberOfSelectors)
    .function("GetSelector", emscripten::optional_override([](vtkIOSSWriter& self, vtkIOSSReader::EntityType arg_0, int arg_1) -> std::string {  return self.GetSelector( arg_0, arg_1);}))
    .function("GetFieldSelection", &vtkIOSSWriter::GetFieldSelection, emscripten::allow_raw_pointers())
    .function("GetNodeBlockFieldSelection", &vtkIOSSWriter::GetNodeBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("AddEdgeBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddEdgeBlockSelector( arg_0.c_str());}))
    .function("ClearEdgeBlockSelectors", &vtkIOSSWriter::ClearEdgeBlockSelectors)
    .function("SetEdgeBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetEdgeBlockSelector( arg_0.c_str());}))
    .function("GetNumberOfEdgeBlockSelectors", &vtkIOSSWriter::GetNumberOfEdgeBlockSelectors)
    .function("GetEdgeBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetEdgeBlockSelector( arg_0);}))
    .function("GetEdgeBlockFieldSelection", &vtkIOSSWriter::GetEdgeBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("AddFaceBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddFaceBlockSelector( arg_0.c_str());}))
    .function("ClearFaceBlockSelectors", &vtkIOSSWriter::ClearFaceBlockSelectors)
    .function("SetFaceBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetFaceBlockSelector( arg_0.c_str());}))
    .function("GetNumberOfFaceBlockSelectors", &vtkIOSSWriter::GetNumberOfFaceBlockSelectors)
    .function("GetFaceBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetFaceBlockSelector( arg_0);}))
    .function("GetFaceBlockFieldSelection", &vtkIOSSWriter::GetFaceBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("AddElementBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddElementBlockSelector( arg_0.c_str());}))
    .function("ClearElementBlockSelectors", &vtkIOSSWriter::ClearElementBlockSelectors)
    .function("SetElementBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetElementBlockSelector( arg_0.c_str());}))
    .function("GetNumberOfElementBlockSelectors", &vtkIOSSWriter::GetNumberOfElementBlockSelectors)
    .function("GetElementBlockSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetElementBlockSelector( arg_0);}))
    .function("GetElementBlockFieldSelection", &vtkIOSSWriter::GetElementBlockFieldSelection, emscripten::allow_raw_pointers())
    .function("AddNodeSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddNodeSetSelector( arg_0.c_str());}))
    .function("ClearNodeSetSelectors", &vtkIOSSWriter::ClearNodeSetSelectors)
    .function("SetNodeSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetNodeSetSelector( arg_0.c_str());}))
    .function("GetNumberOfNodeSetSelectors", &vtkIOSSWriter::GetNumberOfNodeSetSelectors)
    .function("GetNodeSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetNodeSetSelector( arg_0);}))
    .function("GetNodeSetFieldSelection", &vtkIOSSWriter::GetNodeSetFieldSelection, emscripten::allow_raw_pointers())
    .function("AddEdgeSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddEdgeSetSelector( arg_0.c_str());}))
    .function("ClearEdgeSetSelectors", &vtkIOSSWriter::ClearEdgeSetSelectors)
    .function("SetEdgeSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetEdgeSetSelector( arg_0.c_str());}))
    .function("GetNumberOfEdgeSetSelectors", &vtkIOSSWriter::GetNumberOfEdgeSetSelectors)
    .function("GetEdgeSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetEdgeSetSelector( arg_0);}))
    .function("GetEdgeSetFieldSelection", &vtkIOSSWriter::GetEdgeSetFieldSelection, emscripten::allow_raw_pointers())
    .function("AddFaceSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddFaceSetSelector( arg_0.c_str());}))
    .function("ClearFaceSetSelectors", &vtkIOSSWriter::ClearFaceSetSelectors)
    .function("SetFaceSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetFaceSetSelector( arg_0.c_str());}))
    .function("GetNumberOfFaceSetSelectors", &vtkIOSSWriter::GetNumberOfFaceSetSelectors)
    .function("GetFaceSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetFaceSetSelector( arg_0);}))
    .function("GetFaceSetFieldSelection", &vtkIOSSWriter::GetFaceSetFieldSelection, emscripten::allow_raw_pointers())
    .function("AddElementSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddElementSetSelector( arg_0.c_str());}))
    .function("ClearElementSetSelectors", &vtkIOSSWriter::ClearElementSetSelectors)
    .function("SetElementSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetElementSetSelector( arg_0.c_str());}))
    .function("GetNumberOfElementSetSelectors", &vtkIOSSWriter::GetNumberOfElementSetSelectors)
    .function("GetElementSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetElementSetSelector( arg_0);}))
    .function("GetElementSetFieldSelection", &vtkIOSSWriter::GetElementSetFieldSelection, emscripten::allow_raw_pointers())
    .function("AddSideSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> bool {  return self.AddSideSetSelector( arg_0.c_str());}))
    .function("ClearSideSetSelectors", &vtkIOSSWriter::ClearSideSetSelectors)
    .function("SetSideSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, const std::string & arg_0) -> void {  return self.SetSideSetSelector( arg_0.c_str());}))
    .function("GetNumberOfSideSetSelectors", &vtkIOSSWriter::GetNumberOfSideSetSelectors)
    .function("GetSideSetSelector", emscripten::optional_override([](vtkIOSSWriter& self, int arg_0) -> std::string {  return self.GetSideSetSelector( arg_0);}))
    .function("GetSideSetFieldSelection", &vtkIOSSWriter::GetSideSetFieldSelection, emscripten::allow_raw_pointers())
    .function("SetRemoveGhosts", &vtkIOSSWriter::SetRemoveGhosts)
    .function("GetRemoveGhosts", &vtkIOSSWriter::GetRemoveGhosts)
    .function("SetOffsetGlobalIds", &vtkIOSSWriter::SetOffsetGlobalIds)
    .function("GetOffsetGlobalIds", &vtkIOSSWriter::GetOffsetGlobalIds)
    .function("OffsetGlobalIdsOn", &vtkIOSSWriter::OffsetGlobalIdsOn)
    .function("OffsetGlobalIdsOff", &vtkIOSSWriter::OffsetGlobalIdsOff)
    .function("SetPreserveOriginalIds", &vtkIOSSWriter::SetPreserveOriginalIds)
    .function("GetPreserveOriginalIds", &vtkIOSSWriter::GetPreserveOriginalIds)
    .function("PreserveOriginalIdsOn", &vtkIOSSWriter::PreserveOriginalIdsOn)
    .function("PreserveOriginalIdsOff", &vtkIOSSWriter::PreserveOriginalIdsOff)
    .function("SetWriteQAAndInformationRecords", &vtkIOSSWriter::SetWriteQAAndInformationRecords)
    .function("GetWriteQAAndInformationRecords", &vtkIOSSWriter::GetWriteQAAndInformationRecords)
    .function("WriteQAAndInformationRecordsOn", &vtkIOSSWriter::WriteQAAndInformationRecordsOn)
    .function("WriteQAAndInformationRecordsOff", &vtkIOSSWriter::WriteQAAndInformationRecordsOff)
    .function("SetDisplacementMagnitude", &vtkIOSSWriter::SetDisplacementMagnitude)
    .function("GetDisplacementMagnitudeMinValue", &vtkIOSSWriter::GetDisplacementMagnitudeMinValue)
    .function("GetDisplacementMagnitudeMaxValue", &vtkIOSSWriter::GetDisplacementMagnitudeMaxValue)
    .function("GetDisplacementMagnitude", &vtkIOSSWriter::GetDisplacementMagnitude)
    .function("SetTimeStepRange", emscripten::select_overload<void(vtkIOSSWriter&, int, int)>([](vtkIOSSWriter& self, int arg_0, int arg_1) -> void { return self.SetTimeStepRange( arg_0, arg_1); }))
    .function("SetTimeStepStride", &vtkIOSSWriter::SetTimeStepStride)
    .function("GetTimeStepStrideMinValue", &vtkIOSSWriter::GetTimeStepStrideMinValue)
    .function("GetTimeStepStrideMaxValue", &vtkIOSSWriter::GetTimeStepStrideMaxValue)
    .function("GetTimeStepStride", &vtkIOSSWriter::GetTimeStepStride)
    .function("SetController", &vtkIOSSWriter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkIOSSWriter::GetController, emscripten::allow_raw_pointers());
}

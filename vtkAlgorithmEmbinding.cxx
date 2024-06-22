// JavaScript wrapper for vtkAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExecutive.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCollection.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationInformationVectorKey.h"
#include "vtkInformationStringVectorKey.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkProgressObserver.h"
#include "vtkAlgorithm.h"

EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkAlgorithm_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAlgorithm>(vtkAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAlgorithm_class) {
  using DesiredOutputPrecision=vtkAlgorithm::DesiredOutputPrecision;
  emscripten::class_<vtkAlgorithm, emscripten::base<vtkObject>>("vtkAlgorithm")
    .smart_ptr<vtkSmartPointer<vtkAlgorithm>>("vtkSmartPointer<vtkAlgorithm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAlgorithm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("HasExecutive", &vtkAlgorithm::HasExecutive)
    .function("GetExecutive", &vtkAlgorithm::GetExecutive, emscripten::allow_raw_pointers())
    .function("SetExecutive", &vtkAlgorithm::SetExecutive, emscripten::allow_raw_pointers())
    .function("ProcessRequest", emscripten::select_overload<int(vtkAlgorithm&, vtkInformation*, vtkCollection*, vtkInformationVector*)>([](vtkAlgorithm& self, vtkInformation* arg_0, vtkCollection* arg_1, vtkInformationVector* arg_2) -> int { return self.ProcessRequest( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("ModifyRequest", &vtkAlgorithm::ModifyRequest, emscripten::allow_raw_pointers())
    .function("GetInputPortInformation", &vtkAlgorithm::GetInputPortInformation, emscripten::allow_raw_pointers())
    .function("GetOutputPortInformation", &vtkAlgorithm::GetOutputPortInformation, emscripten::allow_raw_pointers())
    .function("GetInformation", &vtkAlgorithm::GetInformation, emscripten::allow_raw_pointers())
    .function("SetInformation", &vtkAlgorithm::SetInformation, emscripten::allow_raw_pointers())
    .function("GetNumberOfInputPorts", &vtkAlgorithm::GetNumberOfInputPorts)
    .function("GetNumberOfOutputPorts", &vtkAlgorithm::GetNumberOfOutputPorts)
    .function("UsesGarbageCollector", &vtkAlgorithm::UsesGarbageCollector)
    .function("SetAbortExecuteAndUpdateTime", &vtkAlgorithm::SetAbortExecuteAndUpdateTime)
    .function("SetAbortExecute", &vtkAlgorithm::SetAbortExecute)
    .function("GetAbortExecute", &vtkAlgorithm::GetAbortExecute)
    .function("AbortExecuteOn", &vtkAlgorithm::AbortExecuteOn)
    .function("AbortExecuteOff", &vtkAlgorithm::AbortExecuteOff)
    .function("GetProgress", &vtkAlgorithm::GetProgress)
    .function("UpdateProgress", &vtkAlgorithm::UpdateProgress)
    .function("CheckAbort", &vtkAlgorithm::CheckAbort)
    .function("SetContainerAlgorithm", &vtkAlgorithm::SetContainerAlgorithm, emscripten::allow_raw_pointers())
    .function("GetContainerAlgorithm", &vtkAlgorithm::GetContainerAlgorithm, emscripten::allow_raw_pointers())
    .function("SetAbortOutput", &vtkAlgorithm::SetAbortOutput)
    .function("GetAbortOutput", &vtkAlgorithm::GetAbortOutput)
    .function("SetProgressShiftScale", &vtkAlgorithm::SetProgressShiftScale)
    .function("GetProgressShift", &vtkAlgorithm::GetProgressShift)
    .function("GetProgressScale", &vtkAlgorithm::GetProgressScale)
    .function("SetProgressText", emscripten::optional_override([](vtkAlgorithm& self, const std::string & arg_0) -> void {  return self.SetProgressText( arg_0.c_str());}))
    .function("GetProgressText", emscripten::optional_override([](vtkAlgorithm& self) -> std::string {  return self.GetProgressText();}))
    .function("GetErrorCode", &vtkAlgorithm::GetErrorCode)
    .class_function("INPUT_IS_OPTIONAL", &vtkAlgorithm::INPUT_IS_OPTIONAL, emscripten::allow_raw_pointers())
    .class_function("INPUT_IS_REPEATABLE", &vtkAlgorithm::INPUT_IS_REPEATABLE, emscripten::allow_raw_pointers())
    .class_function("INPUT_REQUIRED_FIELDS", &vtkAlgorithm::INPUT_REQUIRED_FIELDS, emscripten::allow_raw_pointers())
    .class_function("INPUT_REQUIRED_DATA_TYPE", &vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE, emscripten::allow_raw_pointers())
    .class_function("INPUT_ARRAYS_TO_PROCESS", &vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS, emscripten::allow_raw_pointers())
    .class_function("INPUT_PORT", &vtkAlgorithm::INPUT_PORT, emscripten::allow_raw_pointers())
    .class_function("INPUT_CONNECTION", &vtkAlgorithm::INPUT_CONNECTION, emscripten::allow_raw_pointers())
    .class_function("CAN_PRODUCE_SUB_EXTENT", &vtkAlgorithm::CAN_PRODUCE_SUB_EXTENT, emscripten::allow_raw_pointers())
    .class_function("CAN_HANDLE_PIECE_REQUEST", &vtkAlgorithm::CAN_HANDLE_PIECE_REQUEST, emscripten::allow_raw_pointers())
    .class_function("ABORTED", &vtkAlgorithm::ABORTED, emscripten::allow_raw_pointers())
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkAlgorithm&, int, int, int, int, const std::string &)>([](vtkAlgorithm& self, int arg_0, int arg_1, int arg_2, int arg_3, const std::string & arg_4) -> void { return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3, arg_4.c_str()); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkAlgorithm&, int, int, int, int, int)>([](vtkAlgorithm& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) -> void { return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkAlgorithm&, int, int, int, const std::string &, const std::string &)>([](vtkAlgorithm& self, int arg_0, int arg_1, int arg_2, const std::string & arg_3, const std::string & arg_4) -> void { return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3.c_str(), arg_4.c_str()); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkAlgorithm&, int, vtkInformation*)>([](vtkAlgorithm& self, int arg_0, vtkInformation* arg_1) -> void { return self.SetInputArrayToProcess( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInputArrayInformation", &vtkAlgorithm::GetInputArrayInformation, emscripten::allow_raw_pointers())
    .function("RemoveAllInputs", &vtkAlgorithm::RemoveAllInputs)
    .function("GetOutputDataObject", &vtkAlgorithm::GetOutputDataObject, emscripten::allow_raw_pointers())
    .function("GetInputDataObject", &vtkAlgorithm::GetInputDataObject, emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkAlgorithm&, int, vtkAlgorithmOutput*)>([](vtkAlgorithm& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkAlgorithm&, vtkAlgorithmOutput*)>([](vtkAlgorithm& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetInputConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputConnection", emscripten::select_overload<void(vtkAlgorithm&, int, vtkAlgorithmOutput*)>([](vtkAlgorithm& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.AddInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputConnection", emscripten::select_overload<void(vtkAlgorithm&, vtkAlgorithmOutput*)>([](vtkAlgorithm& self, vtkAlgorithmOutput* arg_0) -> void { return self.AddInputConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveInputConnection", emscripten::select_overload<void(vtkAlgorithm&, int, vtkAlgorithmOutput*)>([](vtkAlgorithm& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.RemoveInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveInputConnection", emscripten::select_overload<void(vtkAlgorithm&, int, int)>([](vtkAlgorithm& self, int arg_0, int arg_1) -> void { return self.RemoveInputConnection( arg_0, arg_1); }))
    .function("RemoveAllInputConnections", &vtkAlgorithm::RemoveAllInputConnections)
    .function("SetInputDataObject", emscripten::select_overload<void(vtkAlgorithm&, int, vtkDataObject*)>([](vtkAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputDataObject( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputDataObject", emscripten::select_overload<void(vtkAlgorithm&, vtkDataObject*)>([](vtkAlgorithm& self, vtkDataObject* arg_0) -> void { return self.SetInputDataObject( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputDataObject", emscripten::select_overload<void(vtkAlgorithm&, int, vtkDataObject*)>([](vtkAlgorithm& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputDataObject( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddInputDataObject", emscripten::select_overload<void(vtkAlgorithm&, vtkDataObject*)>([](vtkAlgorithm& self, vtkDataObject* arg_0) -> void { return self.AddInputDataObject( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkAlgorithm&, int)>([](vtkAlgorithm& self, int arg_0) -> vtkAlgorithmOutput* { return self.GetOutputPort( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkAlgorithm&)>([](vtkAlgorithm& self) -> vtkAlgorithmOutput* { return self.GetOutputPort(); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfInputConnections", &vtkAlgorithm::GetNumberOfInputConnections)
    .function("GetTotalNumberOfInputConnections", &vtkAlgorithm::GetTotalNumberOfInputConnections)
    .function("GetInputConnection", &vtkAlgorithm::GetInputConnection, emscripten::allow_raw_pointers())
    .function("GetInputAlgorithm", emscripten::select_overload<vtkAlgorithm*(vtkAlgorithm&, int, int)>([](vtkAlgorithm& self, int arg_0, int arg_1) -> vtkAlgorithm* { return self.GetInputAlgorithm( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInputAlgorithm", emscripten::select_overload<vtkAlgorithm*(vtkAlgorithm&)>([](vtkAlgorithm& self) -> vtkAlgorithm* { return self.GetInputAlgorithm(); }), emscripten::allow_raw_pointers())
    .function("GetInputExecutive", emscripten::select_overload<vtkExecutive*(vtkAlgorithm&, int, int)>([](vtkAlgorithm& self, int arg_0, int arg_1) -> vtkExecutive* { return self.GetInputExecutive( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInputExecutive", emscripten::select_overload<vtkExecutive*(vtkAlgorithm&)>([](vtkAlgorithm& self) -> vtkExecutive* { return self.GetInputExecutive(); }), emscripten::allow_raw_pointers())
    .function("GetInputInformation", emscripten::select_overload<vtkInformation*(vtkAlgorithm&, int, int)>([](vtkAlgorithm& self, int arg_0, int arg_1) -> vtkInformation* { return self.GetInputInformation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInputInformation", emscripten::select_overload<vtkInformation*(vtkAlgorithm&)>([](vtkAlgorithm& self) -> vtkInformation* { return self.GetInputInformation(); }), emscripten::allow_raw_pointers())
    .function("GetOutputInformation", &vtkAlgorithm::GetOutputInformation, emscripten::allow_raw_pointers())
    .function("Update", emscripten::select_overload<void(vtkAlgorithm&, int)>([](vtkAlgorithm& self, int arg_0) -> void { return self.Update( arg_0); }))
    .function("Update", emscripten::select_overload<int(vtkAlgorithm&, vtkInformation*)>([](vtkAlgorithm& self, vtkInformation* arg_0) -> int { return self.Update( arg_0); }), emscripten::allow_raw_pointers())
    .function("Update", emscripten::select_overload<void(vtkAlgorithm&)>([](vtkAlgorithm& self) -> void { return self.Update(); }))
    .function("Update", emscripten::select_overload<int(vtkAlgorithm&, int, vtkInformationVector*)>([](vtkAlgorithm& self, int arg_0, vtkInformationVector* arg_1) -> int { return self.Update( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("UpdateInformation", &vtkAlgorithm::UpdateInformation)
    .function("UpdateDataObject", &vtkAlgorithm::UpdateDataObject)
    .function("PropagateUpdateExtent", &vtkAlgorithm::PropagateUpdateExtent)
    .function("UpdateWholeExtent", &vtkAlgorithm::UpdateWholeExtent)
    .function("SetReleaseDataFlag", &vtkAlgorithm::SetReleaseDataFlag)
    .function("GetReleaseDataFlag", &vtkAlgorithm::GetReleaseDataFlag)
    .function("ReleaseDataFlagOn", &vtkAlgorithm::ReleaseDataFlagOn)
    .function("ReleaseDataFlagOff", &vtkAlgorithm::ReleaseDataFlagOff)
    .function("UpdateExtentIsEmpty", emscripten::select_overload<int(vtkAlgorithm&, vtkInformation*, vtkDataObject*)>([](vtkAlgorithm& self, vtkInformation* arg_0, vtkDataObject* arg_1) -> int { return self.UpdateExtentIsEmpty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("UpdateExtentIsEmpty", emscripten::select_overload<int(vtkAlgorithm&, vtkInformation*, int)>([](vtkAlgorithm& self, vtkInformation* arg_0, int arg_1) -> int { return self.UpdateExtentIsEmpty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("SetDefaultExecutivePrototype", &vtkAlgorithm::SetDefaultExecutivePrototype, emscripten::allow_raw_pointers())
    .function("GetUpdatePiece", emscripten::select_overload<int(vtkAlgorithm&)>([](vtkAlgorithm& self) -> int { return self.GetUpdatePiece(); }))
    .function("GetUpdatePiece", emscripten::select_overload<int(vtkAlgorithm&, int)>([](vtkAlgorithm& self, int arg_0) -> int { return self.GetUpdatePiece( arg_0); }))
    .function("GetUpdateNumberOfPieces", emscripten::select_overload<int(vtkAlgorithm&)>([](vtkAlgorithm& self) -> int { return self.GetUpdateNumberOfPieces(); }))
    .function("GetUpdateNumberOfPieces", emscripten::select_overload<int(vtkAlgorithm&, int)>([](vtkAlgorithm& self, int arg_0) -> int { return self.GetUpdateNumberOfPieces( arg_0); }))
    .function("GetUpdateGhostLevel", emscripten::select_overload<int(vtkAlgorithm&)>([](vtkAlgorithm& self) -> int { return self.GetUpdateGhostLevel(); }))
    .function("GetUpdateGhostLevel", emscripten::select_overload<int(vtkAlgorithm&, int)>([](vtkAlgorithm& self, int arg_0) -> int { return self.GetUpdateGhostLevel( arg_0); }))
    .function("SetProgressObserver", &vtkAlgorithm::SetProgressObserver, emscripten::allow_raw_pointers())
    .function("GetProgressObserver", &vtkAlgorithm::GetProgressObserver, emscripten::allow_raw_pointers())
    .function("SetNoPriorTemporalAccessInformationKey", emscripten::select_overload<void(vtkAlgorithm&, int)>([](vtkAlgorithm& self, int arg_0) -> void { return self.SetNoPriorTemporalAccessInformationKey( arg_0); }))
    .function("SetNoPriorTemporalAccessInformationKey", emscripten::select_overload<void(vtkAlgorithm&)>([](vtkAlgorithm& self) -> void { return self.SetNoPriorTemporalAccessInformationKey(); }))
    .function("RemoveNoPriorTemporalAccessInformationKey", &vtkAlgorithm::RemoveNoPriorTemporalAccessInformationKey);
}
EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkAlgorithm_0_2_constants) {
    typedef vtkAlgorithm::DesiredOutputPrecision cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkAlgorithm_DesiredOutputPrecision_SINGLE_PRECISION", vtkAlgorithm::SINGLE_PRECISION },
      { "vtkAlgorithm_DesiredOutputPrecision_DOUBLE_PRECISION", vtkAlgorithm::DOUBLE_PRECISION },
      { "vtkAlgorithm_DesiredOutputPrecision_DEFAULT_PRECISION", vtkAlgorithm::DEFAULT_PRECISION },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

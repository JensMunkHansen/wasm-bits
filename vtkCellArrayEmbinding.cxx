// JavaScript wrapper for vtkCellArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellArrayIterator.h"
#include "vtkIdTypeArray.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkTypeInt32Array.h"
#include "vtkTypeInt64Array.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkCell.h"
#include "vtkAbstractCellArray.h"
#include "vtkCellArray.h"

template<> void emscripten::internal::raw_destructor<vtkCellArray>(vtkCellArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellArray_class) {
  emscripten::class_<vtkCellArray, emscripten::base<vtkAbstractCellArray>>("vtkCellArray")
    .smart_ptr<vtkSmartPointer<vtkCellArray>>("vtkSmartPointer<vtkCellArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Allocate", &vtkCellArray::Allocate)
    .function("AllocateEstimate", &vtkCellArray::AllocateEstimate)
    .function("AllocateExact", &vtkCellArray::AllocateExact)
    .function("AllocateCopy", &vtkCellArray::AllocateCopy, emscripten::allow_raw_pointers())
    .function("ResizeExact", &vtkCellArray::ResizeExact)
    .function("Initialize", &vtkCellArray::Initialize)
    .function("Reset", &vtkCellArray::Reset)
    .function("Squeeze", &vtkCellArray::Squeeze)
    .function("IsValid", &vtkCellArray::IsValid)
    .function("GetNumberOfCells", &vtkCellArray::GetNumberOfCells)
    .function("GetNumberOfOffsets", &vtkCellArray::GetNumberOfOffsets)
    .function("GetOffset", &vtkCellArray::GetOffset)
    .function("GetNumberOfConnectivityIds", &vtkCellArray::GetNumberOfConnectivityIds)
    .function("NewIterator", &vtkCellArray::NewIterator, emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<void(vtkCellArray&, vtkIdTypeArray*, vtkIdTypeArray*)>([](vtkCellArray& self, vtkIdTypeArray* arg_0, vtkIdTypeArray* arg_1) -> void { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<void(vtkCellArray&, vtkAOSDataArrayTemplate<int>*, vtkAOSDataArrayTemplate<int>*)>([](vtkCellArray& self, vtkAOSDataArrayTemplate<int>* arg_0, vtkAOSDataArrayTemplate<int>* arg_1) -> void { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<void(vtkCellArray&, vtkAOSDataArrayTemplate<long>*, vtkAOSDataArrayTemplate<long>*)>([](vtkCellArray& self, vtkAOSDataArrayTemplate<long>* arg_0, vtkAOSDataArrayTemplate<long>* arg_1) -> void { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<void(vtkCellArray&, vtkAOSDataArrayTemplate<long long>*, vtkAOSDataArrayTemplate<long long>*)>([](vtkCellArray& self, vtkAOSDataArrayTemplate<long long>* arg_0, vtkAOSDataArrayTemplate<long long>* arg_1) -> void { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<void(vtkCellArray&, vtkTypeInt32Array*, vtkTypeInt32Array*)>([](vtkCellArray& self, vtkTypeInt32Array* arg_0, vtkTypeInt32Array* arg_1) -> void { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<void(vtkCellArray&, vtkTypeInt64Array*, vtkTypeInt64Array*)>([](vtkCellArray& self, vtkTypeInt64Array* arg_0, vtkTypeInt64Array* arg_1) -> void { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<bool(vtkCellArray&, vtkDataArray*, vtkDataArray*)>([](vtkCellArray& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> bool { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetData", emscripten::select_overload<bool(vtkCellArray&, int, vtkDataArray*)>([](vtkCellArray& self, int arg_0, vtkDataArray* arg_1) -> bool { return self.SetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("IsStorage64Bit", &vtkCellArray::IsStorage64Bit)
    .function("IsStorageShareable", &vtkCellArray::IsStorageShareable)
    .function("Use32BitStorage", &vtkCellArray::Use32BitStorage)
    .function("Use64BitStorage", &vtkCellArray::Use64BitStorage)
    .function("UseDefaultStorage", &vtkCellArray::UseDefaultStorage)
    .function("CanConvertTo32BitStorage", &vtkCellArray::CanConvertTo32BitStorage)
    .function("CanConvertTo64BitStorage", &vtkCellArray::CanConvertTo64BitStorage)
    .function("CanConvertToDefaultStorage", &vtkCellArray::CanConvertToDefaultStorage)
    .function("ConvertTo32BitStorage", &vtkCellArray::ConvertTo32BitStorage)
    .function("ConvertTo64BitStorage", &vtkCellArray::ConvertTo64BitStorage)
    .function("ConvertToDefaultStorage", &vtkCellArray::ConvertToDefaultStorage)
    .function("ConvertToSmallestStorage", &vtkCellArray::ConvertToSmallestStorage)
    .function("GetOffsetsArray", &vtkCellArray::GetOffsetsArray, emscripten::allow_raw_pointers())
    .function("GetOffsetsArray32", &vtkCellArray::GetOffsetsArray32, emscripten::allow_raw_pointers())
    .function("GetOffsetsArray64", &vtkCellArray::GetOffsetsArray64, emscripten::allow_raw_pointers())
    .function("GetConnectivityArray", &vtkCellArray::GetConnectivityArray, emscripten::allow_raw_pointers())
    .function("GetConnectivityArray32", &vtkCellArray::GetConnectivityArray32, emscripten::allow_raw_pointers())
    .function("GetConnectivityArray64", &vtkCellArray::GetConnectivityArray64, emscripten::allow_raw_pointers())
    .function("IsHomogeneous", &vtkCellArray::IsHomogeneous)
    .function("InitTraversal", &vtkCellArray::InitTraversal)
    .function("GetNextCell", emscripten::select_overload<int(vtkCellArray&, vtkIdList*)>([](vtkCellArray& self, vtkIdList* arg_0) -> int { return self.GetNextCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCellAtId", emscripten::select_overload<void(vtkCellArray&, int, vtkIdList*)>([](vtkCellArray& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellAtId( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellSize", &vtkCellArray::GetCellSize)
    .function("InsertNextCell", emscripten::select_overload<int(vtkCellArray&, vtkCell*)>([](vtkCellArray& self, vtkCell* arg_0) -> int { return self.InsertNextCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("InsertNextCell", emscripten::select_overload<int(vtkCellArray&, vtkIdList*)>([](vtkCellArray& self, vtkIdList* arg_0) -> int { return self.InsertNextCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("InsertNextCell", emscripten::select_overload<int(vtkCellArray&, int)>([](vtkCellArray& self, int arg_0) -> int { return self.InsertNextCell( arg_0); }))
    .function("InsertCellPoint", &vtkCellArray::InsertCellPoint)
    .function("UpdateCellCount", &vtkCellArray::UpdateCellCount)
    .function("GetTraversalCellId", &vtkCellArray::GetTraversalCellId)
    .function("SetTraversalCellId", &vtkCellArray::SetTraversalCellId)
    .function("ReverseCellAtId", &vtkCellArray::ReverseCellAtId)
    .function("ReplaceCellAtId", emscripten::select_overload<void(vtkCellArray&, int, vtkIdList*)>([](vtkCellArray& self, int arg_0, vtkIdList* arg_1) -> void { return self.ReplaceCellAtId( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReplaceCellPointAtId", &vtkCellArray::ReplaceCellPointAtId)
    .function("GetMaxCellSize", &vtkCellArray::GetMaxCellSize)
    .function("DeepCopy", &vtkCellArray::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCellArray::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Append", &vtkCellArray::Append, emscripten::allow_raw_pointers())
    .function("ExportLegacyFormat", &vtkCellArray::ExportLegacyFormat, emscripten::allow_raw_pointers())
    .function("ImportLegacyFormat", emscripten::select_overload<void(vtkCellArray&, vtkIdTypeArray*)>([](vtkCellArray& self, vtkIdTypeArray* arg_0) -> void { return self.ImportLegacyFormat( arg_0); }), emscripten::allow_raw_pointers())
    .function("AppendLegacyFormat", emscripten::select_overload<void(vtkCellArray&, vtkIdTypeArray*, int)>([](vtkCellArray& self, vtkIdTypeArray* arg_0, int arg_1) -> void { return self.AppendLegacyFormat( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkCellArray::GetActualMemorySize)
    .function("SetNumberOfCells", &vtkCellArray::SetNumberOfCells)
    .function("EstimateSize", &vtkCellArray::EstimateSize)
    .function("GetSize", &vtkCellArray::GetSize)
    .function("GetNumberOfConnectivityEntries", &vtkCellArray::GetNumberOfConnectivityEntries)
    .function("GetCell", emscripten::select_overload<void(vtkCellArray&, int, vtkIdList*)>([](vtkCellArray& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetInsertLocation", &vtkCellArray::GetInsertLocation)
    .function("GetTraversalLocation", emscripten::select_overload<int(vtkCellArray&)>([](vtkCellArray& self) -> int { return self.GetTraversalLocation(); }))
    .function("GetTraversalLocation", emscripten::select_overload<int(vtkCellArray&, int)>([](vtkCellArray& self, int arg_0) -> int { return self.GetTraversalLocation( arg_0); }))
    .function("SetTraversalLocation", &vtkCellArray::SetTraversalLocation)
    .function("ReverseCell", &vtkCellArray::ReverseCell)
    .function("SetCells", &vtkCellArray::SetCells, emscripten::allow_raw_pointers())
    .function("GetData", &vtkCellArray::GetData, emscripten::allow_raw_pointers());
}

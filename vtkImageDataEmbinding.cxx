// JavaScript wrapper for vtkImageData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImageDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImageData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkPoints.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkStructuredCellArray.h"
#include "vtkDataArray.h"
#include "vtkInformation.h"
#include "vtkMatrix3x3.h"
#include "vtkMatrix4x4.h"
#include "vtkDataObject.h"
#include "vtkInformationVector.h"
#include "vtkImageData.h"

template<> void emscripten::internal::raw_destructor<vtkImageData>(vtkImageData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageData_class) {
  emscripten::class_<vtkImageData, emscripten::base<vtkDataSet>>("vtkImageData")
    .smart_ptr<vtkSmartPointer<vtkImageData>>("vtkSmartPointer<vtkImageData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageData>)
    .class_function("ExtendedNew", &vtkImageData::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CopyStructure", &vtkImageData::CopyStructure, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkImageData::Initialize)
    .function("GetDataObjectType", &vtkImageData::GetDataObjectType)
    .function("GetNumberOfCells", &vtkImageData::GetNumberOfCells)
    .function("GetNumberOfPoints", &vtkImageData::GetNumberOfPoints)
    .function("GetPoints", &vtkImageData::GetPoints, emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkImageData&, int)>([](vtkImageData& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkImageData&, int, vtkGenericCell*)>([](vtkImageData& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkImageData::GetCellType)
    .function("GetCellSize", &vtkImageData::GetCellSize)
    .function("GetCellPoints", emscripten::select_overload<void(vtkImageData&, int, vtkIdList*)>([](vtkImageData& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkImageData::GetPointCells, emscripten::allow_raw_pointers())
    .function("ComputeBounds", &vtkImageData::ComputeBounds)
    .function("GetMaxCellSize", &vtkImageData::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkImageData::GetMaxSpatialDimension)
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkImageData&, int, vtkIdList*, vtkIdList*)>([](vtkImageData& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkImageData&, int, vtkIdList*, vtkIdList*, std::uintptr_t)>([](vtkImageData& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2, std::uintptr_t arg_3) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("GetCells", &vtkImageData::GetCells, emscripten::allow_raw_pointers())
    .function("GetCellTypesArray", &vtkImageData::GetCellTypesArray, emscripten::allow_raw_pointers())
    .function("BlankPoint", emscripten::select_overload<void(vtkImageData&, int)>([](vtkImageData& self, int arg_0) -> void { return self.BlankPoint( arg_0); }))
    .function("BlankPoint", emscripten::select_overload<void(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> void { return self.BlankPoint( arg_0, arg_1, arg_2); }))
    .function("UnBlankPoint", emscripten::select_overload<void(vtkImageData&, int)>([](vtkImageData& self, int arg_0) -> void { return self.UnBlankPoint( arg_0); }))
    .function("UnBlankPoint", emscripten::select_overload<void(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> void { return self.UnBlankPoint( arg_0, arg_1, arg_2); }))
    .function("BlankCell", emscripten::select_overload<void(vtkImageData&, int)>([](vtkImageData& self, int arg_0) -> void { return self.BlankCell( arg_0); }))
    .function("BlankCell", emscripten::select_overload<void(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> void { return self.BlankCell( arg_0, arg_1, arg_2); }))
    .function("UnBlankCell", emscripten::select_overload<void(vtkImageData&, int)>([](vtkImageData& self, int arg_0) -> void { return self.UnBlankCell( arg_0); }))
    .function("UnBlankCell", emscripten::select_overload<void(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> void { return self.UnBlankCell( arg_0, arg_1, arg_2); }))
    .function("IsPointVisible", &vtkImageData::IsPointVisible)
    .function("IsCellVisible", &vtkImageData::IsCellVisible)
    .function("HasAnyBlankPoints", &vtkImageData::HasAnyBlankPoints)
    .function("HasAnyBlankCells", &vtkImageData::HasAnyBlankCells)
    .function("GetDataDescription", &vtkImageData::GetDataDescription)
    .function("SetDimensions", emscripten::select_overload<void(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("GetVoxelGradient", &vtkImageData::GetVoxelGradient, emscripten::allow_raw_pointers())
    .function("GetDataDimension", &vtkImageData::GetDataDimension)
    .function("SetAxisUpdateExtent", emscripten::optional_override([](vtkImageData& self, int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4) -> void {  return self.SetAxisUpdateExtent( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int)),reinterpret_cast<int*>(arg_4 * sizeof(int)));}))
    .function("SetExtent", emscripten::select_overload<void(vtkImageData&, int, int, int, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetScalarTypeMin", emscripten::select_overload<double(vtkImageData&, vtkInformation*)>([](vtkImageData& self, vtkInformation* arg_0) -> double { return self.GetScalarTypeMin( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarTypeMin", emscripten::select_overload<double(vtkImageData&)>([](vtkImageData& self) -> double { return self.GetScalarTypeMin(); }))
    .function("GetScalarTypeMax", emscripten::select_overload<double(vtkImageData&, vtkInformation*)>([](vtkImageData& self, vtkInformation* arg_0) -> double { return self.GetScalarTypeMax( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarTypeMax", emscripten::select_overload<double(vtkImageData&)>([](vtkImageData& self) -> double { return self.GetScalarTypeMax(); }))
    .function("GetScalarSize", emscripten::select_overload<int(vtkImageData&, vtkInformation*)>([](vtkImageData& self, vtkInformation* arg_0) -> int { return self.GetScalarSize( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarSize", emscripten::select_overload<int(vtkImageData&)>([](vtkImageData& self) -> int { return self.GetScalarSize(); }))
    .function("GetScalarPointer", emscripten::select_overload<std::uintptr_t(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetScalarPointer( arg_0, arg_1, arg_2)); }))
    .function("GetScalarPointer", emscripten::select_overload<std::uintptr_t(vtkImageData&)>([](vtkImageData& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetScalarPointer()); }))
    .function("GetScalarIndex", emscripten::select_overload<int(vtkImageData&, int, int, int)>([](vtkImageData& self, int arg_0, int arg_1, int arg_2) -> int { return self.GetScalarIndex( arg_0, arg_1, arg_2); }))
    .function("GetScalarComponentAsFloat", &vtkImageData::GetScalarComponentAsFloat)
    .function("SetScalarComponentFromFloat", &vtkImageData::SetScalarComponentFromFloat)
    .function("GetScalarComponentAsDouble", &vtkImageData::GetScalarComponentAsDouble)
    .function("SetScalarComponentFromDouble", &vtkImageData::SetScalarComponentFromDouble)
    .function("AllocateScalars", emscripten::select_overload<void(vtkImageData&, int, int)>([](vtkImageData& self, int arg_0, int arg_1) -> void { return self.AllocateScalars( arg_0, arg_1); }))
    .function("AllocateScalars", emscripten::select_overload<void(vtkImageData&, vtkInformation*)>([](vtkImageData& self, vtkInformation* arg_0) -> void { return self.AllocateScalars( arg_0); }), emscripten::allow_raw_pointers())
    .function("CopyAndCastFrom", emscripten::select_overload<void(vtkImageData&, vtkImageData*, int, int, int, int, int, int)>([](vtkImageData& self, vtkImageData* arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) -> void { return self.CopyAndCastFrom( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("Crop", emscripten::optional_override([](vtkImageData& self, std::uintptr_t arg_0) -> void {  return self.Crop(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetActualMemorySize", &vtkImageData::GetActualMemorySize)
    .function("SetSpacing", emscripten::select_overload<void(vtkImageData&, double, double, double)>([](vtkImageData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSpacing( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkImageData&, double, double, double)>([](vtkImageData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("GetDirectionMatrix", &vtkImageData::GetDirectionMatrix, emscripten::allow_raw_pointers())
    .function("SetDirectionMatrix", emscripten::select_overload<void(vtkImageData&, vtkMatrix3x3*)>([](vtkImageData& self, vtkMatrix3x3* arg_0) -> void { return self.SetDirectionMatrix( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetDirectionMatrix", emscripten::select_overload<void(vtkImageData&, double, double, double, double, double, double, double, double, double)>([](vtkImageData& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8) -> void { return self.SetDirectionMatrix( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8); }))
    .function("GetIndexToPhysicalMatrix", &vtkImageData::GetIndexToPhysicalMatrix, emscripten::allow_raw_pointers())
    .function("ApplyIndexToPhysicalMatrix", &vtkImageData::ApplyIndexToPhysicalMatrix, emscripten::allow_raw_pointers())
    .function("GetPhysicalToIndexMatrix", &vtkImageData::GetPhysicalToIndexMatrix, emscripten::allow_raw_pointers())
    .function("ApplyPhysicalToIndexMatrix", &vtkImageData::ApplyPhysicalToIndexMatrix, emscripten::allow_raw_pointers())
    .class_function("SetScalarType", &vtkImageData::SetScalarType, emscripten::allow_raw_pointers())
    .class_function("GetScalarType", emscripten::select_overload<int( vtkInformation*)>([]( vtkInformation* arg_0) -> int { return vtkImageData::GetScalarType( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarType", emscripten::select_overload<int(vtkImageData&)>([](vtkImageData& self) -> int { return self.GetScalarType(); }))
    .class_function("HasScalarType", &vtkImageData::HasScalarType, emscripten::allow_raw_pointers())
    .function("GetScalarTypeAsString", emscripten::optional_override([](vtkImageData& self) -> std::string {  return self.GetScalarTypeAsString();}))
    .class_function("SetNumberOfScalarComponents", &vtkImageData::SetNumberOfScalarComponents, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfScalarComponents", emscripten::select_overload<int( vtkInformation*)>([]( vtkInformation* arg_0) -> int { return vtkImageData::GetNumberOfScalarComponents( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfScalarComponents", emscripten::select_overload<int(vtkImageData&)>([](vtkImageData& self) -> int { return self.GetNumberOfScalarComponents(); }))
    .class_function("HasNumberOfScalarComponents", &vtkImageData::HasNumberOfScalarComponents, emscripten::allow_raw_pointers())
    .function("CopyInformationFromPipeline", &vtkImageData::CopyInformationFromPipeline, emscripten::allow_raw_pointers())
    .function("CopyInformationToPipeline", &vtkImageData::CopyInformationToPipeline, emscripten::allow_raw_pointers())
    .function("PrepareForNewData", &vtkImageData::PrepareForNewData)
    .function("ShallowCopy", &vtkImageData::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkImageData::DeepCopy, emscripten::allow_raw_pointers())
    .function("ComputeInternalExtent", emscripten::optional_override([](vtkImageData& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.ComputeInternalExtent(reinterpret_cast<int*>(arg_0 * sizeof(int)),reinterpret_cast<int*>(arg_1 * sizeof(int)),reinterpret_cast<int*>(arg_2 * sizeof(int)));}))
    .function("GetExtentType", &vtkImageData::GetExtentType)
    .class_function("GetData", emscripten::select_overload<vtkImageData*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkImageData* { return vtkImageData::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkImageData*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkImageData* { return vtkImageData::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}

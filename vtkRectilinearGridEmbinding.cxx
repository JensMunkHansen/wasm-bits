// JavaScript wrapper for vtkRectilinearGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkRectilinearGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkRectilinearGrid.h
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
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkRectilinearGrid.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGrid>(vtkRectilinearGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGrid_class) {
  emscripten::class_<vtkRectilinearGrid, emscripten::base<vtkDataSet>>("vtkRectilinearGrid")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGrid>>("vtkSmartPointer<vtkRectilinearGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRectilinearGrid>)
    .class_function("ExtendedNew", &vtkRectilinearGrid::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkRectilinearGrid::GetDataObjectType)
    .function("CopyStructure", &vtkRectilinearGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkRectilinearGrid::Initialize)
    .function("GetNumberOfCells", &vtkRectilinearGrid::GetNumberOfCells)
    .function("GetNumberOfPoints", &vtkRectilinearGrid::GetNumberOfPoints)
    .function("GetPoints", emscripten::select_overload<vtkPoints*(vtkRectilinearGrid&)>([](vtkRectilinearGrid& self) -> vtkPoints* { return self.GetPoints(); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkRectilinearGrid&, int)>([](vtkRectilinearGrid& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkRectilinearGrid&, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkRectilinearGrid&, int, vtkGenericCell*)>([](vtkRectilinearGrid& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkRectilinearGrid::GetCellType)
    .function("GetCellSize", &vtkRectilinearGrid::GetCellSize)
    .function("GetCellPoints", emscripten::select_overload<void(vtkRectilinearGrid&, int, vtkIdList*)>([](vtkRectilinearGrid& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkRectilinearGrid::GetPointCells, emscripten::allow_raw_pointers())
    .function("ComputeBounds", &vtkRectilinearGrid::ComputeBounds)
    .function("GetMaxCellSize", &vtkRectilinearGrid::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkRectilinearGrid::GetMaxSpatialDimension)
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkRectilinearGrid&, int, vtkIdList*, vtkIdList*)>([](vtkRectilinearGrid& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkRectilinearGrid&, int, vtkIdList*, vtkIdList*, std::uintptr_t)>([](vtkRectilinearGrid& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2, std::uintptr_t arg_3) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("GetCells", &vtkRectilinearGrid::GetCells, emscripten::allow_raw_pointers())
    .function("GetCellTypesArray", &vtkRectilinearGrid::GetCellTypesArray, emscripten::allow_raw_pointers())
    .function("BlankPoint", emscripten::select_overload<void(vtkRectilinearGrid&, int)>([](vtkRectilinearGrid& self, int arg_0) -> void { return self.BlankPoint( arg_0); }))
    .function("BlankPoint", emscripten::select_overload<void(vtkRectilinearGrid&, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.BlankPoint( arg_0, arg_1, arg_2); }))
    .function("UnBlankPoint", emscripten::select_overload<void(vtkRectilinearGrid&, int)>([](vtkRectilinearGrid& self, int arg_0) -> void { return self.UnBlankPoint( arg_0); }))
    .function("UnBlankPoint", emscripten::select_overload<void(vtkRectilinearGrid&, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.UnBlankPoint( arg_0, arg_1, arg_2); }))
    .function("BlankCell", emscripten::select_overload<void(vtkRectilinearGrid&, int)>([](vtkRectilinearGrid& self, int arg_0) -> void { return self.BlankCell( arg_0); }))
    .function("BlankCell", emscripten::select_overload<void(vtkRectilinearGrid&, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.BlankCell( arg_0, arg_1, arg_2); }))
    .function("UnBlankCell", emscripten::select_overload<void(vtkRectilinearGrid&, int)>([](vtkRectilinearGrid& self, int arg_0) -> void { return self.UnBlankCell( arg_0); }))
    .function("UnBlankCell", emscripten::select_overload<void(vtkRectilinearGrid&, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.UnBlankCell( arg_0, arg_1, arg_2); }))
    .function("IsPointVisible", &vtkRectilinearGrid::IsPointVisible)
    .function("IsCellVisible", &vtkRectilinearGrid::IsCellVisible)
    .function("HasAnyBlankPoints", &vtkRectilinearGrid::HasAnyBlankPoints)
    .function("HasAnyBlankCells", &vtkRectilinearGrid::HasAnyBlankCells)
    .function("GetDataDescription", &vtkRectilinearGrid::GetDataDescription)
    .function("SetDimensions", emscripten::select_overload<void(vtkRectilinearGrid&, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("GetDataDimension", &vtkRectilinearGrid::GetDataDimension)
    .function("SetXCoordinates", &vtkRectilinearGrid::SetXCoordinates, emscripten::allow_raw_pointers())
    .function("GetXCoordinates", &vtkRectilinearGrid::GetXCoordinates, emscripten::allow_raw_pointers())
    .function("SetYCoordinates", &vtkRectilinearGrid::SetYCoordinates, emscripten::allow_raw_pointers())
    .function("GetYCoordinates", &vtkRectilinearGrid::GetYCoordinates, emscripten::allow_raw_pointers())
    .function("SetZCoordinates", &vtkRectilinearGrid::SetZCoordinates, emscripten::allow_raw_pointers())
    .function("GetZCoordinates", &vtkRectilinearGrid::GetZCoordinates, emscripten::allow_raw_pointers())
    .function("SetExtent", emscripten::select_overload<void(vtkRectilinearGrid&, int, int, int, int, int, int)>([](vtkRectilinearGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetActualMemorySize", &vtkRectilinearGrid::GetActualMemorySize)
    .function("ShallowCopy", &vtkRectilinearGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkRectilinearGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetExtentType", &vtkRectilinearGrid::GetExtentType)
    .function("Crop", emscripten::optional_override([](vtkRectilinearGrid& self, std::uintptr_t arg_0) -> void {  return self.Crop(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .class_function("GetData", emscripten::select_overload<vtkRectilinearGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkRectilinearGrid* { return vtkRectilinearGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkRectilinearGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkRectilinearGrid* { return vtkRectilinearGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("SetScalarType", &vtkRectilinearGrid::SetScalarType, emscripten::allow_raw_pointers())
    .class_function("GetScalarType", emscripten::select_overload<int( vtkInformation*)>([]( vtkInformation* arg_0) -> int { return vtkRectilinearGrid::GetScalarType( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarType", emscripten::select_overload<int(vtkRectilinearGrid&)>([](vtkRectilinearGrid& self) -> int { return self.GetScalarType(); }))
    .class_function("HasScalarType", &vtkRectilinearGrid::HasScalarType, emscripten::allow_raw_pointers())
    .function("GetScalarTypeAsString", emscripten::optional_override([](vtkRectilinearGrid& self) -> std::string {  return self.GetScalarTypeAsString();}))
    .class_function("SetNumberOfScalarComponents", &vtkRectilinearGrid::SetNumberOfScalarComponents, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfScalarComponents", emscripten::select_overload<int( vtkInformation*)>([]( vtkInformation* arg_0) -> int { return vtkRectilinearGrid::GetNumberOfScalarComponents( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfScalarComponents", emscripten::select_overload<int(vtkRectilinearGrid&)>([](vtkRectilinearGrid& self) -> int { return self.GetNumberOfScalarComponents(); }))
    .class_function("HasNumberOfScalarComponents", &vtkRectilinearGrid::HasNumberOfScalarComponents, emscripten::allow_raw_pointers());
}

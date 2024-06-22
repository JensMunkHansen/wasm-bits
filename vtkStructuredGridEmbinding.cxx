// JavaScript wrapper for vtkStructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkStructuredCellArray.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkStructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGrid>(vtkStructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGrid_class) {
  emscripten::class_<vtkStructuredGrid, emscripten::base<vtkPointSet>>("vtkStructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkStructuredGrid>>("vtkSmartPointer<vtkStructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStructuredGrid>)
    .class_function("ExtendedNew", &vtkStructuredGrid::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkStructuredGrid::GetDataObjectType)
    .function("CopyStructure", &vtkStructuredGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkStructuredGrid::Initialize)
    .function("GetNumberOfCells", &vtkStructuredGrid::GetNumberOfCells)
    .function("GetNumberOfPoints", &vtkStructuredGrid::GetNumberOfPoints)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkStructuredGrid&, int)>([](vtkStructuredGrid& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkStructuredGrid&, int, int, int)>([](vtkStructuredGrid& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkStructuredGrid&, int, vtkGenericCell*)>([](vtkStructuredGrid& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkStructuredGrid::GetCellType)
    .function("GetCellSize", &vtkStructuredGrid::GetCellSize)
    .function("GetCellPoints", emscripten::select_overload<void(vtkStructuredGrid&, int, vtkIdList*)>([](vtkStructuredGrid& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkStructuredGrid::GetPointCells, emscripten::allow_raw_pointers())
    .function("GetMaxCellSize", &vtkStructuredGrid::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkStructuredGrid::GetMaxSpatialDimension)
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkStructuredGrid&, int, vtkIdList*, vtkIdList*)>([](vtkStructuredGrid& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkStructuredGrid&, int, vtkIdList*, vtkIdList*, std::uintptr_t)>([](vtkStructuredGrid& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2, std::uintptr_t arg_3) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .function("GetCells", &vtkStructuredGrid::GetCells, emscripten::allow_raw_pointers())
    .function("GetCellTypesArray", &vtkStructuredGrid::GetCellTypesArray, emscripten::allow_raw_pointers())
    .function("BlankPoint", &vtkStructuredGrid::BlankPoint)
    .function("UnBlankPoint", &vtkStructuredGrid::UnBlankPoint)
    .function("BlankCell", &vtkStructuredGrid::BlankCell)
    .function("UnBlankCell", &vtkStructuredGrid::UnBlankCell)
    .function("IsPointVisible", &vtkStructuredGrid::IsPointVisible)
    .function("IsCellVisible", &vtkStructuredGrid::IsCellVisible)
    .function("HasAnyBlankPoints", &vtkStructuredGrid::HasAnyBlankPoints)
    .function("HasAnyBlankCells", &vtkStructuredGrid::HasAnyBlankCells)
    .function("GetDataDescription", &vtkStructuredGrid::GetDataDescription)
    .function("SetDimensions", emscripten::select_overload<void(vtkStructuredGrid&, int, int, int)>([](vtkStructuredGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("GetDataDimension", &vtkStructuredGrid::GetDataDimension)
    .function("SetExtent", emscripten::select_overload<void(vtkStructuredGrid&, int, int, int, int, int, int)>([](vtkStructuredGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetActualMemorySize", &vtkStructuredGrid::GetActualMemorySize)
    .function("ShallowCopy", &vtkStructuredGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkStructuredGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetExtentType", &vtkStructuredGrid::GetExtentType)
    .function("Crop", emscripten::optional_override([](vtkStructuredGrid& self, std::uintptr_t arg_0) -> void {  return self.Crop(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .class_function("GetData", emscripten::select_overload<vtkStructuredGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkStructuredGrid* { return vtkStructuredGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkStructuredGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkStructuredGrid* { return vtkStructuredGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}

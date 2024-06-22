// JavaScript wrapper for vtkExplicitStructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkExplicitStructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkExplicitStructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCell.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkDataSet.h"
#include "vtkDataObject.h"
#include "vtkCellArray.h"
#include "vtkAbstractCellLinks.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkExplicitStructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkExplicitStructuredGrid>(vtkExplicitStructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExplicitStructuredGrid_class) {
  emscripten::class_<vtkExplicitStructuredGrid, emscripten::base<vtkPointSet>>("vtkExplicitStructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkExplicitStructuredGrid>>("vtkSmartPointer<vtkExplicitStructuredGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExplicitStructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExplicitStructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExplicitStructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExplicitStructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExplicitStructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExplicitStructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkExplicitStructuredGrid::GetDataObjectType)
    .function("Initialize", &vtkExplicitStructuredGrid::Initialize)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkExplicitStructuredGrid&, int)>([](vtkExplicitStructuredGrid& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkExplicitStructuredGrid&, int, vtkGenericCell*)>([](vtkExplicitStructuredGrid& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkExplicitStructuredGrid&, int, int, int)>([](vtkExplicitStructuredGrid& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkExplicitStructuredGrid::GetCellType)
    .function("GetCellSize", &vtkExplicitStructuredGrid::GetCellSize)
    .function("GetNumberOfCells", &vtkExplicitStructuredGrid::GetNumberOfCells)
    .function("GetCellPoints", emscripten::select_overload<void(vtkExplicitStructuredGrid&, int, vtkIdList*)>([](vtkExplicitStructuredGrid& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellPoints", emscripten::select_overload<std::uintptr_t(vtkExplicitStructuredGrid&, int)>([](vtkExplicitStructuredGrid& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCellPoints( arg_0)); }))
    .function("GetPointCells", &vtkExplicitStructuredGrid::GetPointCells, emscripten::allow_raw_pointers())
    .function("GetMaxCellSize", &vtkExplicitStructuredGrid::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkExplicitStructuredGrid::GetMaxSpatialDimension)
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkExplicitStructuredGrid&, int, vtkIdList*, vtkIdList*)>([](vtkExplicitStructuredGrid& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("CopyStructure", &vtkExplicitStructuredGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkExplicitStructuredGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkExplicitStructuredGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetDataDimension", &vtkExplicitStructuredGrid::GetDataDimension)
    .function("SetDimensions", emscripten::select_overload<void(vtkExplicitStructuredGrid&, int, int, int)>([](vtkExplicitStructuredGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("GetExtentType", &vtkExplicitStructuredGrid::GetExtentType)
    .function("SetExtent", emscripten::select_overload<void(vtkExplicitStructuredGrid&, int, int, int, int, int, int)>([](vtkExplicitStructuredGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCells", &vtkExplicitStructuredGrid::SetCells, emscripten::allow_raw_pointers())
    .function("GetCells", &vtkExplicitStructuredGrid::GetCells, emscripten::allow_raw_pointers())
    .function("BuildLinks", &vtkExplicitStructuredGrid::BuildLinks)
    .function("SetLinks", &vtkExplicitStructuredGrid::SetLinks, emscripten::allow_raw_pointers())
    .function("GetLinks", &vtkExplicitStructuredGrid::GetLinks, emscripten::allow_raw_pointers())
    .function("ComputeCellId", &vtkExplicitStructuredGrid::ComputeCellId)
    .function("ComputeFacesConnectivityFlagsArray", &vtkExplicitStructuredGrid::ComputeFacesConnectivityFlagsArray)
    .function("SetFacesConnectivityFlagsArrayName", emscripten::optional_override([](vtkExplicitStructuredGrid& self, const std::string & arg_0) -> void {  return self.SetFacesConnectivityFlagsArrayName( arg_0.c_str());}))
    .function("GetFacesConnectivityFlagsArrayName", emscripten::optional_override([](vtkExplicitStructuredGrid& self) -> std::string {  return self.GetFacesConnectivityFlagsArrayName();}))
    .function("BlankCell", &vtkExplicitStructuredGrid::BlankCell)
    .function("UnBlankCell", &vtkExplicitStructuredGrid::UnBlankCell)
    .function("HasAnyBlankCells", &vtkExplicitStructuredGrid::HasAnyBlankCells)
    .function("IsCellVisible", &vtkExplicitStructuredGrid::IsCellVisible)
    .function("IsCellGhost", &vtkExplicitStructuredGrid::IsCellGhost)
    .function("HasAnyGhostCells", &vtkExplicitStructuredGrid::HasAnyGhostCells)
    .function("Crop", emscripten::select_overload<void(vtkExplicitStructuredGrid&, std::uintptr_t)>([](vtkExplicitStructuredGrid& self, std::uintptr_t arg_0) -> void { return self.Crop(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("Crop", emscripten::select_overload<void(vtkExplicitStructuredGrid&, vtkExplicitStructuredGrid*, std::uintptr_t, bool)>([](vtkExplicitStructuredGrid& self, vtkExplicitStructuredGrid* arg_0, std::uintptr_t arg_1, bool arg_2) -> void { return self.Crop( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkExplicitStructuredGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkExplicitStructuredGrid* { return vtkExplicitStructuredGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkExplicitStructuredGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkExplicitStructuredGrid* { return vtkExplicitStructuredGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkExplicitStructuredGrid::GetActualMemorySize)
    .function("CheckAndReorderFaces", &vtkExplicitStructuredGrid::CheckAndReorderFaces);
}

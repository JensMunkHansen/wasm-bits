// JavaScript wrapper for vtkUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUnstructuredGrid.h
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
#include "vtkCellIterator.h"
#include "vtkCellTypes.h"
#include "vtkUnsignedCharArray.h"
#include "vtkAbstractCellLinks.h"
#include "vtkCellArray.h"
#include "vtkIdTypeArray.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUnstructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGrid>(vtkUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGrid_class) {
  emscripten::class_<vtkUnstructuredGrid, emscripten::base<vtkUnstructuredGridBase>>("vtkUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGrid>>("vtkSmartPointer<vtkUnstructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGrid>)
    .class_function("ExtendedNew", &vtkUnstructuredGrid::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkUnstructuredGrid::GetDataObjectType)
    .function("AllocateEstimate", &vtkUnstructuredGrid::AllocateEstimate)
    .function("AllocateExact", &vtkUnstructuredGrid::AllocateExact)
    .function("Allocate", &vtkUnstructuredGrid::Allocate)
    .function("Reset", &vtkUnstructuredGrid::Reset)
    .function("CopyStructure", &vtkUnstructuredGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("GetNumberOfCells", &vtkUnstructuredGrid::GetNumberOfCells)
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkUnstructuredGrid&, int)>([](vtkUnstructuredGrid& self, int arg_0) -> vtkCell* { return self.GetCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkGenericCell*)>([](vtkUnstructuredGrid& self, int arg_0, vtkGenericCell* arg_1) -> void { return self.GetCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCell", emscripten::select_overload<vtkCell*(vtkUnstructuredGrid&, int, int, int)>([](vtkUnstructuredGrid& self, int arg_0, int arg_1, int arg_2) -> vtkCell* { return self.GetCell( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellPoints", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkIdList*)>([](vtkUnstructuredGrid& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPointCells", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkIdList*)>([](vtkUnstructuredGrid& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetPointCells( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("NewCellIterator", &vtkUnstructuredGrid::NewCellIterator, emscripten::allow_raw_pointers())
    .function("GetCellType", &vtkUnstructuredGrid::GetCellType)
    .function("GetCellSize", &vtkUnstructuredGrid::GetCellSize)
    .function("GetCellTypes", &vtkUnstructuredGrid::GetCellTypes, emscripten::allow_raw_pointers())
    .function("GetDistinctCellTypesArray", &vtkUnstructuredGrid::GetDistinctCellTypesArray, emscripten::allow_raw_pointers())
    .function("GetCellTypesArray", &vtkUnstructuredGrid::GetCellTypesArray, emscripten::allow_raw_pointers())
    .function("Squeeze", &vtkUnstructuredGrid::Squeeze)
    .function("Initialize", &vtkUnstructuredGrid::Initialize)
    .function("GetMaxCellSize", &vtkUnstructuredGrid::GetMaxCellSize)
    .function("GetMaxSpatialDimension", &vtkUnstructuredGrid::GetMaxSpatialDimension)
    .function("BuildLinks", &vtkUnstructuredGrid::BuildLinks)
    .function("SetLinks", &vtkUnstructuredGrid::SetLinks, emscripten::allow_raw_pointers())
    .function("GetLinks", &vtkUnstructuredGrid::GetLinks, emscripten::allow_raw_pointers())
    .function("GetFaceStream", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkIdList*)>([](vtkUnstructuredGrid& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetFaceStream( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetCells", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkCellArray*)>([](vtkUnstructuredGrid& self, int arg_0, vtkCellArray* arg_1) -> void { return self.SetCells( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetCells", emscripten::select_overload<void(vtkUnstructuredGrid&, std::uintptr_t, vtkCellArray*)>([](vtkUnstructuredGrid& self, std::uintptr_t arg_0, vtkCellArray* arg_1) -> void { return self.SetCells(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1); }), emscripten::allow_raw_pointers())
    .function("SetCells", emscripten::select_overload<void(vtkUnstructuredGrid&, vtkUnsignedCharArray*, vtkCellArray*)>([](vtkUnstructuredGrid& self, vtkUnsignedCharArray* arg_0, vtkCellArray* arg_1) -> void { return self.SetCells( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetCells", emscripten::select_overload<void(vtkUnstructuredGrid&, vtkUnsignedCharArray*, vtkIdTypeArray*, vtkCellArray*)>([](vtkUnstructuredGrid& self, vtkUnsignedCharArray* arg_0, vtkIdTypeArray* arg_1, vtkCellArray* arg_2) -> void { return self.SetCells( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetCells", emscripten::select_overload<void(vtkUnstructuredGrid&, vtkUnsignedCharArray*, vtkIdTypeArray*, vtkCellArray*, vtkIdTypeArray*, vtkIdTypeArray*)>([](vtkUnstructuredGrid& self, vtkUnsignedCharArray* arg_0, vtkIdTypeArray* arg_1, vtkCellArray* arg_2, vtkIdTypeArray* arg_3, vtkIdTypeArray* arg_4) -> void { return self.SetCells( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("SetPolyhedralCells", &vtkUnstructuredGrid::SetPolyhedralCells, emscripten::allow_raw_pointers())
    .function("GetCells", &vtkUnstructuredGrid::GetCells, emscripten::allow_raw_pointers())
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkIdList*, vtkIdList*)>([](vtkUnstructuredGrid& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> void { return self.GetCellNeighbors( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetCellNeighbors", emscripten::select_overload<void(vtkUnstructuredGrid&, int, int, std::uintptr_t, vtkIdList*)>([](vtkUnstructuredGrid& self, int arg_0, int arg_1, std::uintptr_t arg_2, vtkIdList* arg_3) -> void { return self.GetCellNeighbors( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)), arg_3); }), emscripten::allow_raw_pointers())
    .function("IsCellBoundary", emscripten::select_overload<bool(vtkUnstructuredGrid&, int, int, std::uintptr_t)>([](vtkUnstructuredGrid& self, int arg_0, int arg_1, std::uintptr_t arg_2) -> bool { return self.IsCellBoundary( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .function("RemoveReferenceToCell", &vtkUnstructuredGrid::RemoveReferenceToCell)
    .function("AddReferenceToCell", &vtkUnstructuredGrid::AddReferenceToCell)
    .function("ResizeCellList", &vtkUnstructuredGrid::ResizeCellList)
    .function("GetPiece", &vtkUnstructuredGrid::GetPiece)
    .function("GetNumberOfPieces", &vtkUnstructuredGrid::GetNumberOfPieces)
    .function("GetGhostLevel", &vtkUnstructuredGrid::GetGhostLevel)
    .function("GetActualMemorySize", &vtkUnstructuredGrid::GetActualMemorySize)
    .function("ShallowCopy", &vtkUnstructuredGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkUnstructuredGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetIdsOfCellsOfType", &vtkUnstructuredGrid::GetIdsOfCellsOfType, emscripten::allow_raw_pointers())
    .function("IsHomogeneous", &vtkUnstructuredGrid::IsHomogeneous)
    .function("RemoveGhostCells", &vtkUnstructuredGrid::RemoveGhostCells)
    .class_function("GetData", emscripten::select_overload<vtkUnstructuredGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkUnstructuredGrid* { return vtkUnstructuredGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUnstructuredGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkUnstructuredGrid* { return vtkUnstructuredGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPolyhedronFaces", emscripten::select_overload<void(vtkUnstructuredGrid&, int, vtkCellArray*)>([](vtkUnstructuredGrid& self, int arg_0, vtkCellArray* arg_1) -> void { return self.GetPolyhedronFaces( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetPolyhedronFaces", emscripten::select_overload<vtkCellArray*(vtkUnstructuredGrid&)>([](vtkUnstructuredGrid& self) -> vtkCellArray* { return self.GetPolyhedronFaces(); }), emscripten::allow_raw_pointers())
    .function("GetPolyhedronFaceLocations", &vtkUnstructuredGrid::GetPolyhedronFaceLocations, emscripten::allow_raw_pointers())
    .function("InitializeFacesRepresentation", &vtkUnstructuredGrid::InitializeFacesRepresentation)
    .function("GetMeshMTime", &vtkUnstructuredGrid::GetMeshMTime)
    .class_function("ConvertFaceStreamPointIds", emscripten::select_overload<void( vtkIdList*, std::uintptr_t)>([]( vtkIdList* arg_0, std::uintptr_t arg_1) -> void { return vtkUnstructuredGrid::ConvertFaceStreamPointIds( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .class_function("ConvertFaceStreamPointIds", emscripten::select_overload<void( vtkCellArray*, std::uintptr_t)>([]( vtkCellArray* arg_0, std::uintptr_t arg_1) -> void { return vtkUnstructuredGrid::ConvertFaceStreamPointIds( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }), emscripten::allow_raw_pointers())
    .class_function("ConvertFaceStreamPointIds", emscripten::select_overload<void( int, std::uintptr_t, std::uintptr_t)>([]( int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void { return vtkUnstructuredGrid::ConvertFaceStreamPointIds( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)),reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .function("GetCellLocationsArray", &vtkUnstructuredGrid::GetCellLocationsArray, emscripten::allow_raw_pointers());
}

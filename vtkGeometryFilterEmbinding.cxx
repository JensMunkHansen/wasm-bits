// JavaScript wrapper for vtkGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkUnstructuredGridBase.h"
#include "vtkDataSetSurfaceFilter.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkInformation.h"
#include "vtkGeometryFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkGeometryFilterHelper_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkGeometryFilterHelper_class) {
  using CellType=vtkGeometryFilterHelper::CellType;
  emscripten::class_<vtkGeometryFilterHelper>("vtkGeometryFilterHelper")
    .class_function("CopyFilterParams", emscripten::select_overload<void( vtkGeometryFilter*, vtkDataSetSurfaceFilter*)>([]( vtkGeometryFilter* arg_0, vtkDataSetSurfaceFilter* arg_1) -> void { return vtkGeometryFilterHelper::CopyFilterParams( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("CopyFilterParams", emscripten::select_overload<void( vtkDataSetSurfaceFilter*, vtkGeometryFilter*)>([]( vtkDataSetSurfaceFilter* arg_0, vtkGeometryFilter* arg_1) -> void { return vtkGeometryFilterHelper::CopyFilterParams( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("HasOnlyVerts", &vtkGeometryFilterHelper::HasOnlyVerts)
    .function("HasOnlyLines", &vtkGeometryFilterHelper::HasOnlyLines)
    .function("HasOnlyPolys", &vtkGeometryFilterHelper::HasOnlyPolys)
    .function("HasOnlyStrips", &vtkGeometryFilterHelper::HasOnlyStrips);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkGeometryFilterHelper_0_3_constants) {
    typedef vtkGeometryFilterHelper::CellType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkGeometryFilterHelper_CellType_VERTS", vtkGeometryFilterHelper::VERTS },
      { "vtkGeometryFilterHelper_CellType_LINES", vtkGeometryFilterHelper::LINES },
      { "vtkGeometryFilterHelper_CellType_POLYS", vtkGeometryFilterHelper::POLYS },
      { "vtkGeometryFilterHelper_CellType_STRIPS", vtkGeometryFilterHelper::STRIPS },
      { "vtkGeometryFilterHelper_CellType_OTHER_LINEAR_CELLS", vtkGeometryFilterHelper::OTHER_LINEAR_CELLS },
      { "vtkGeometryFilterHelper_CellType_NON_LINEAR_CELLS", vtkGeometryFilterHelper::NON_LINEAR_CELLS },
      { "vtkGeometryFilterHelper_CellType_NUM_CELL_TYPES", vtkGeometryFilterHelper::NUM_CELL_TYPES },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
template<> void emscripten::internal::raw_destructor<vtkGeometryFilter>(vtkGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeometryFilter_class) {
  emscripten::class_<vtkGeometryFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkGeometryFilter>>("vtkSmartPointer<vtkGeometryFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointClipping", &vtkGeometryFilter::SetPointClipping)
    .function("GetPointClipping", &vtkGeometryFilter::GetPointClipping)
    .function("PointClippingOn", &vtkGeometryFilter::PointClippingOn)
    .function("PointClippingOff", &vtkGeometryFilter::PointClippingOff)
    .function("SetCellClipping", &vtkGeometryFilter::SetCellClipping)
    .function("GetCellClipping", &vtkGeometryFilter::GetCellClipping)
    .function("CellClippingOn", &vtkGeometryFilter::CellClippingOn)
    .function("CellClippingOff", &vtkGeometryFilter::CellClippingOff)
    .function("SetExtentClipping", &vtkGeometryFilter::SetExtentClipping)
    .function("GetExtentClipping", &vtkGeometryFilter::GetExtentClipping)
    .function("ExtentClippingOn", &vtkGeometryFilter::ExtentClippingOn)
    .function("ExtentClippingOff", &vtkGeometryFilter::ExtentClippingOff)
    .function("SetPointMinimum", &vtkGeometryFilter::SetPointMinimum)
    .function("GetPointMinimumMinValue", &vtkGeometryFilter::GetPointMinimumMinValue)
    .function("GetPointMinimumMaxValue", &vtkGeometryFilter::GetPointMinimumMaxValue)
    .function("GetPointMinimum", &vtkGeometryFilter::GetPointMinimum)
    .function("SetPointMaximum", &vtkGeometryFilter::SetPointMaximum)
    .function("GetPointMaximumMinValue", &vtkGeometryFilter::GetPointMaximumMinValue)
    .function("GetPointMaximumMaxValue", &vtkGeometryFilter::GetPointMaximumMaxValue)
    .function("GetPointMaximum", &vtkGeometryFilter::GetPointMaximum)
    .function("SetCellMinimum", &vtkGeometryFilter::SetCellMinimum)
    .function("GetCellMinimumMinValue", &vtkGeometryFilter::GetCellMinimumMinValue)
    .function("GetCellMinimumMaxValue", &vtkGeometryFilter::GetCellMinimumMaxValue)
    .function("GetCellMinimum", &vtkGeometryFilter::GetCellMinimum)
    .function("SetCellMaximum", &vtkGeometryFilter::SetCellMaximum)
    .function("GetCellMaximumMinValue", &vtkGeometryFilter::GetCellMaximumMinValue)
    .function("GetCellMaximumMaxValue", &vtkGeometryFilter::GetCellMaximumMaxValue)
    .function("GetCellMaximum", &vtkGeometryFilter::GetCellMaximum)
    .function("SetExtent", emscripten::select_overload<void(vtkGeometryFilter&, double, double, double, double, double, double)>([](vtkGeometryFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetMerging", &vtkGeometryFilter::SetMerging)
    .function("GetMerging", &vtkGeometryFilter::GetMerging)
    .function("MergingOn", &vtkGeometryFilter::MergingOn)
    .function("MergingOff", &vtkGeometryFilter::MergingOff)
    .function("SetOutputPointsPrecision", &vtkGeometryFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkGeometryFilter::GetOutputPointsPrecision)
    .function("SetFastMode", &vtkGeometryFilter::SetFastMode)
    .function("GetFastMode", &vtkGeometryFilter::GetFastMode)
    .function("FastModeOn", &vtkGeometryFilter::FastModeOn)
    .function("FastModeOff", &vtkGeometryFilter::FastModeOff)
    .function("SetPieceInvariant", &vtkGeometryFilter::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkGeometryFilter::GetPieceInvariant)
    .function("SetPassThroughCellIds", &vtkGeometryFilter::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkGeometryFilter::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkGeometryFilter::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkGeometryFilter::PassThroughCellIdsOff)
    .function("SetPassThroughPointIds", &vtkGeometryFilter::SetPassThroughPointIds)
    .function("GetPassThroughPointIds", &vtkGeometryFilter::GetPassThroughPointIds)
    .function("PassThroughPointIdsOn", &vtkGeometryFilter::PassThroughPointIdsOn)
    .function("PassThroughPointIdsOff", &vtkGeometryFilter::PassThroughPointIdsOff)
    .function("SetOriginalCellIdsName", emscripten::optional_override([](vtkGeometryFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalCellIdsName( arg_0.c_str());}))
    .function("GetOriginalCellIdsName", emscripten::optional_override([](vtkGeometryFilter& self) -> std::string {  return self.GetOriginalCellIdsName();}))
    .function("SetOriginalPointIdsName", emscripten::optional_override([](vtkGeometryFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalPointIdsName( arg_0.c_str());}))
    .function("GetOriginalPointIdsName", emscripten::optional_override([](vtkGeometryFilter& self) -> std::string {  return self.GetOriginalPointIdsName();}))
    .function("SetExcludedFacesData", &vtkGeometryFilter::SetExcludedFacesData, emscripten::allow_raw_pointers())
    .function("SetExcludedFacesConnection", &vtkGeometryFilter::SetExcludedFacesConnection, emscripten::allow_raw_pointers())
    .function("GetExcludedFaces", &vtkGeometryFilter::GetExcludedFaces, emscripten::allow_raw_pointers())
    .function("SetNonlinearSubdivisionLevel", &vtkGeometryFilter::SetNonlinearSubdivisionLevel)
    .function("GetNonlinearSubdivisionLevel", &vtkGeometryFilter::GetNonlinearSubdivisionLevel)
    .function("SetMatchBoundariesIgnoringCellOrder", &vtkGeometryFilter::SetMatchBoundariesIgnoringCellOrder)
    .function("GetMatchBoundariesIgnoringCellOrder", &vtkGeometryFilter::GetMatchBoundariesIgnoringCellOrder)
    .function("SetDelegation", &vtkGeometryFilter::SetDelegation)
    .function("GetDelegation", &vtkGeometryFilter::GetDelegation)
    .function("DelegationOn", &vtkGeometryFilter::DelegationOn)
    .function("DelegationOff", &vtkGeometryFilter::DelegationOff)
    .function("SetRemoveGhostInterfaces", &vtkGeometryFilter::SetRemoveGhostInterfaces)
    .function("RemoveGhostInterfacesOn", &vtkGeometryFilter::RemoveGhostInterfacesOn)
    .function("RemoveGhostInterfacesOff", &vtkGeometryFilter::RemoveGhostInterfacesOff)
    .function("GetRemoveGhostInterfaces", &vtkGeometryFilter::GetRemoveGhostInterfaces)
    .function("PolyDataExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*, vtkPolyData*)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1, vtkPolyData* arg_2) -> int { return self.PolyDataExecute( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("PolyDataExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1) -> int { return self.PolyDataExecute( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("UnstructuredGridExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1) -> int { return self.UnstructuredGridExecute( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("StructuredExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*, std::uintptr_t, vtkPolyData*, std::uintptr_t)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1, std::uintptr_t arg_2, vtkPolyData* arg_3, std::uintptr_t arg_4) -> int { return self.StructuredExecute( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)), arg_3,reinterpret_cast<bool*>(arg_4 * sizeof(bool))); }), emscripten::allow_raw_pointers())
    .function("StructuredExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*, std::uintptr_t, std::uintptr_t)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> int { return self.StructuredExecute( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<bool*>(arg_3 * sizeof(bool))); }), emscripten::allow_raw_pointers())
    .function("DataSetExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*, vtkPolyData*)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1, vtkPolyData* arg_2) -> int { return self.DataSetExecute( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("DataSetExecute", emscripten::select_overload<int(vtkGeometryFilter&, vtkDataSet*, vtkPolyData*)>([](vtkGeometryFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1) -> int { return self.DataSetExecute( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}

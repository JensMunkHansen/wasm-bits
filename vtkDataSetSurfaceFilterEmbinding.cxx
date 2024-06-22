// JavaScript wrapper for vtkDataSetSurfaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkDataSetSurfaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkDataSetSurfaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkGeometryFilter.h"
#include "vtkDataSetSurfaceFilter.h"


EMSCRIPTEN_BINDINGS(vtkFastGeomQuadStruct_class) {
  emscripten::class_<vtkFastGeomQuadStruct>("vtkFastGeomQuadStruct");
}
template<> void emscripten::internal::raw_destructor<vtkDataSetSurfaceFilter>(vtkDataSetSurfaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetSurfaceFilter_class) {
  emscripten::class_<vtkDataSetSurfaceFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkDataSetSurfaceFilter")
    .smart_ptr<vtkSmartPointer<vtkDataSetSurfaceFilter>>("vtkSmartPointer<vtkDataSetSurfaceFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataSetSurfaceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetSurfaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetSurfaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetSurfaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetSurfaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetSurfaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetSurfaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPieceInvariant", &vtkDataSetSurfaceFilter::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkDataSetSurfaceFilter::GetPieceInvariant)
    .function("SetPassThroughCellIds", &vtkDataSetSurfaceFilter::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkDataSetSurfaceFilter::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkDataSetSurfaceFilter::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkDataSetSurfaceFilter::PassThroughCellIdsOff)
    .function("SetPassThroughPointIds", &vtkDataSetSurfaceFilter::SetPassThroughPointIds)
    .function("GetPassThroughPointIds", &vtkDataSetSurfaceFilter::GetPassThroughPointIds)
    .function("PassThroughPointIdsOn", &vtkDataSetSurfaceFilter::PassThroughPointIdsOn)
    .function("PassThroughPointIdsOff", &vtkDataSetSurfaceFilter::PassThroughPointIdsOff)
    .function("SetFastMode", &vtkDataSetSurfaceFilter::SetFastMode)
    .function("GetFastMode", &vtkDataSetSurfaceFilter::GetFastMode)
    .function("FastModeOn", &vtkDataSetSurfaceFilter::FastModeOn)
    .function("FastModeOff", &vtkDataSetSurfaceFilter::FastModeOff)
    .function("SetOriginalCellIdsName", emscripten::optional_override([](vtkDataSetSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalCellIdsName( arg_0.c_str());}))
    .function("GetOriginalCellIdsName", emscripten::optional_override([](vtkDataSetSurfaceFilter& self) -> std::string {  return self.GetOriginalCellIdsName();}))
    .function("SetOriginalPointIdsName", emscripten::optional_override([](vtkDataSetSurfaceFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalPointIdsName( arg_0.c_str());}))
    .function("GetOriginalPointIdsName", emscripten::optional_override([](vtkDataSetSurfaceFilter& self) -> std::string {  return self.GetOriginalPointIdsName();}))
    .function("SetNonlinearSubdivisionLevel", &vtkDataSetSurfaceFilter::SetNonlinearSubdivisionLevel)
    .function("GetNonlinearSubdivisionLevel", &vtkDataSetSurfaceFilter::GetNonlinearSubdivisionLevel)
    .function("SetMatchBoundariesIgnoringCellOrder", &vtkDataSetSurfaceFilter::SetMatchBoundariesIgnoringCellOrder)
    .function("GetMatchBoundariesIgnoringCellOrder", &vtkDataSetSurfaceFilter::GetMatchBoundariesIgnoringCellOrder)
    .function("SetAllowInterpolation", &vtkDataSetSurfaceFilter::SetAllowInterpolation)
    .function("GetAllowInterpolation", &vtkDataSetSurfaceFilter::GetAllowInterpolation)
    .function("AllowInterpolationOn", &vtkDataSetSurfaceFilter::AllowInterpolationOn)
    .function("AllowInterpolationOff", &vtkDataSetSurfaceFilter::AllowInterpolationOff)
    .function("SetDelegation", &vtkDataSetSurfaceFilter::SetDelegation)
    .function("GetDelegation", &vtkDataSetSurfaceFilter::GetDelegation)
    .function("DelegationOn", &vtkDataSetSurfaceFilter::DelegationOn)
    .function("DelegationOff", &vtkDataSetSurfaceFilter::DelegationOff)
    .function("StructuredExecute", emscripten::optional_override([](vtkDataSetSurfaceFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> int {  return self.StructuredExecute( arg_0, arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<int*>(arg_3 * sizeof(int)));}), emscripten::allow_raw_pointers())
    .function("UnstructuredGridExecute", emscripten::select_overload<int(vtkDataSetSurfaceFilter&, vtkDataSet*, vtkPolyData*)>([](vtkDataSetSurfaceFilter& self, vtkDataSet* arg_0, vtkPolyData* arg_1) -> int { return self.UnstructuredGridExecute( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DataSetExecute", &vtkDataSetSurfaceFilter::DataSetExecute, emscripten::allow_raw_pointers());
}

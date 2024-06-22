// JavaScript wrapper for vtkUnstructuredGridGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkUnstructuredGridGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkUnstructuredGridGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkUnstructuredGridGeometryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridGeometryFilter>(vtkUnstructuredGridGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridGeometryFilter_class) {
  emscripten::class_<vtkUnstructuredGridGeometryFilter, emscripten::base<vtkUnstructuredGridBaseAlgorithm>>("vtkUnstructuredGridGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridGeometryFilter>>("vtkSmartPointer<vtkUnstructuredGridGeometryFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnstructuredGridGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointClipping", &vtkUnstructuredGridGeometryFilter::SetPointClipping)
    .function("GetPointClipping", &vtkUnstructuredGridGeometryFilter::GetPointClipping)
    .function("PointClippingOn", &vtkUnstructuredGridGeometryFilter::PointClippingOn)
    .function("PointClippingOff", &vtkUnstructuredGridGeometryFilter::PointClippingOff)
    .function("SetCellClipping", &vtkUnstructuredGridGeometryFilter::SetCellClipping)
    .function("GetCellClipping", &vtkUnstructuredGridGeometryFilter::GetCellClipping)
    .function("CellClippingOn", &vtkUnstructuredGridGeometryFilter::CellClippingOn)
    .function("CellClippingOff", &vtkUnstructuredGridGeometryFilter::CellClippingOff)
    .function("SetExtentClipping", &vtkUnstructuredGridGeometryFilter::SetExtentClipping)
    .function("GetExtentClipping", &vtkUnstructuredGridGeometryFilter::GetExtentClipping)
    .function("ExtentClippingOn", &vtkUnstructuredGridGeometryFilter::ExtentClippingOn)
    .function("ExtentClippingOff", &vtkUnstructuredGridGeometryFilter::ExtentClippingOff)
    .function("SetDuplicateGhostCellClipping", &vtkUnstructuredGridGeometryFilter::SetDuplicateGhostCellClipping)
    .function("GetDuplicateGhostCellClipping", &vtkUnstructuredGridGeometryFilter::GetDuplicateGhostCellClipping)
    .function("DuplicateGhostCellClippingOn", &vtkUnstructuredGridGeometryFilter::DuplicateGhostCellClippingOn)
    .function("DuplicateGhostCellClippingOff", &vtkUnstructuredGridGeometryFilter::DuplicateGhostCellClippingOff)
    .function("SetPointMinimum", &vtkUnstructuredGridGeometryFilter::SetPointMinimum)
    .function("GetPointMinimumMinValue", &vtkUnstructuredGridGeometryFilter::GetPointMinimumMinValue)
    .function("GetPointMinimumMaxValue", &vtkUnstructuredGridGeometryFilter::GetPointMinimumMaxValue)
    .function("GetPointMinimum", &vtkUnstructuredGridGeometryFilter::GetPointMinimum)
    .function("SetPointMaximum", &vtkUnstructuredGridGeometryFilter::SetPointMaximum)
    .function("GetPointMaximumMinValue", &vtkUnstructuredGridGeometryFilter::GetPointMaximumMinValue)
    .function("GetPointMaximumMaxValue", &vtkUnstructuredGridGeometryFilter::GetPointMaximumMaxValue)
    .function("GetPointMaximum", &vtkUnstructuredGridGeometryFilter::GetPointMaximum)
    .function("SetCellMinimum", &vtkUnstructuredGridGeometryFilter::SetCellMinimum)
    .function("GetCellMinimumMinValue", &vtkUnstructuredGridGeometryFilter::GetCellMinimumMinValue)
    .function("GetCellMinimumMaxValue", &vtkUnstructuredGridGeometryFilter::GetCellMinimumMaxValue)
    .function("GetCellMinimum", &vtkUnstructuredGridGeometryFilter::GetCellMinimum)
    .function("SetCellMaximum", &vtkUnstructuredGridGeometryFilter::SetCellMaximum)
    .function("GetCellMaximumMinValue", &vtkUnstructuredGridGeometryFilter::GetCellMaximumMinValue)
    .function("GetCellMaximumMaxValue", &vtkUnstructuredGridGeometryFilter::GetCellMaximumMaxValue)
    .function("GetCellMaximum", &vtkUnstructuredGridGeometryFilter::GetCellMaximum)
    .function("SetExtent", emscripten::select_overload<void(vtkUnstructuredGridGeometryFilter&, double, double, double, double, double, double)>([](vtkUnstructuredGridGeometryFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetExtent", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetExtent()) / sizeof(double);}))
    .function("SetMerging", &vtkUnstructuredGridGeometryFilter::SetMerging)
    .function("GetMerging", &vtkUnstructuredGridGeometryFilter::GetMerging)
    .function("MergingOn", &vtkUnstructuredGridGeometryFilter::MergingOn)
    .function("MergingOff", &vtkUnstructuredGridGeometryFilter::MergingOff)
    .function("SetPassThroughCellIds", &vtkUnstructuredGridGeometryFilter::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkUnstructuredGridGeometryFilter::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkUnstructuredGridGeometryFilter::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkUnstructuredGridGeometryFilter::PassThroughCellIdsOff)
    .function("SetPassThroughPointIds", &vtkUnstructuredGridGeometryFilter::SetPassThroughPointIds)
    .function("GetPassThroughPointIds", &vtkUnstructuredGridGeometryFilter::GetPassThroughPointIds)
    .function("PassThroughPointIdsOn", &vtkUnstructuredGridGeometryFilter::PassThroughPointIdsOn)
    .function("PassThroughPointIdsOff", &vtkUnstructuredGridGeometryFilter::PassThroughPointIdsOff)
    .function("SetMatchBoundariesIgnoringCellOrder", &vtkUnstructuredGridGeometryFilter::SetMatchBoundariesIgnoringCellOrder)
    .function("GetMatchBoundariesIgnoringCellOrder", &vtkUnstructuredGridGeometryFilter::GetMatchBoundariesIgnoringCellOrder)
    .function("SetOriginalCellIdsName", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalCellIdsName( arg_0.c_str());}))
    .function("GetOriginalCellIdsName", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self) -> std::string {  return self.GetOriginalCellIdsName();}))
    .function("SetOriginalPointIdsName", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self, const std::string & arg_0) -> void {  return self.SetOriginalPointIdsName( arg_0.c_str());}))
    .function("GetOriginalPointIdsName", emscripten::optional_override([](vtkUnstructuredGridGeometryFilter& self) -> std::string {  return self.GetOriginalPointIdsName();}))
    .function("SetLocator", &vtkUnstructuredGridGeometryFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkUnstructuredGridGeometryFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkUnstructuredGridGeometryFilter::CreateDefaultLocator)
    .function("GetMTime", &vtkUnstructuredGridGeometryFilter::GetMTime);
}

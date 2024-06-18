// JavaScript wrapper for vtkGenericGeometryFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkFiltersGeneric.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneric.js/vtkGenericGeometryFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Generic/vtkGenericGeometryFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkGenericGeometryFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGenericGeometryFilter>(vtkGenericGeometryFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericGeometryFilter_class) {
  emscripten::class_<vtkGenericGeometryFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkGenericGeometryFilter")
    .smart_ptr<vtkSmartPointer<vtkGenericGeometryFilter>>("vtkSmartPointer<vtkGenericGeometryFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGenericGeometryFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericGeometryFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericGeometryFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericGeometryFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericGeometryFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericGeometryFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericGeometryFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointClipping", &vtkGenericGeometryFilter::SetPointClipping)
    .function("GetPointClipping", &vtkGenericGeometryFilter::GetPointClipping)
    .function("PointClippingOn", &vtkGenericGeometryFilter::PointClippingOn)
    .function("PointClippingOff", &vtkGenericGeometryFilter::PointClippingOff)
    .function("SetCellClipping", &vtkGenericGeometryFilter::SetCellClipping)
    .function("GetCellClipping", &vtkGenericGeometryFilter::GetCellClipping)
    .function("CellClippingOn", &vtkGenericGeometryFilter::CellClippingOn)
    .function("CellClippingOff", &vtkGenericGeometryFilter::CellClippingOff)
    .function("SetExtentClipping", &vtkGenericGeometryFilter::SetExtentClipping)
    .function("GetExtentClipping", &vtkGenericGeometryFilter::GetExtentClipping)
    .function("ExtentClippingOn", &vtkGenericGeometryFilter::ExtentClippingOn)
    .function("ExtentClippingOff", &vtkGenericGeometryFilter::ExtentClippingOff)
    .function("SetPointMinimum", &vtkGenericGeometryFilter::SetPointMinimum)
    .function("GetPointMinimumMinValue", &vtkGenericGeometryFilter::GetPointMinimumMinValue)
    .function("GetPointMinimumMaxValue", &vtkGenericGeometryFilter::GetPointMinimumMaxValue)
    .function("GetPointMinimum", &vtkGenericGeometryFilter::GetPointMinimum)
    .function("SetPointMaximum", &vtkGenericGeometryFilter::SetPointMaximum)
    .function("GetPointMaximumMinValue", &vtkGenericGeometryFilter::GetPointMaximumMinValue)
    .function("GetPointMaximumMaxValue", &vtkGenericGeometryFilter::GetPointMaximumMaxValue)
    .function("GetPointMaximum", &vtkGenericGeometryFilter::GetPointMaximum)
    .function("SetCellMinimum", &vtkGenericGeometryFilter::SetCellMinimum)
    .function("GetCellMinimumMinValue", &vtkGenericGeometryFilter::GetCellMinimumMinValue)
    .function("GetCellMinimumMaxValue", &vtkGenericGeometryFilter::GetCellMinimumMaxValue)
    .function("GetCellMinimum", &vtkGenericGeometryFilter::GetCellMinimum)
    .function("SetCellMaximum", &vtkGenericGeometryFilter::SetCellMaximum)
    .function("GetCellMaximumMinValue", &vtkGenericGeometryFilter::GetCellMaximumMinValue)
    .function("GetCellMaximumMaxValue", &vtkGenericGeometryFilter::GetCellMaximumMaxValue)
    .function("GetCellMaximum", &vtkGenericGeometryFilter::GetCellMaximum)
    .function("SetExtent", emscripten::select_overload<void(vtkGenericGeometryFilter&, double, double, double, double, double, double)>([](vtkGenericGeometryFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetExtent", emscripten::optional_override([](vtkGenericGeometryFilter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetExtent()) / sizeof(double);}))
    .function("SetMerging", &vtkGenericGeometryFilter::SetMerging)
    .function("GetMerging", &vtkGenericGeometryFilter::GetMerging)
    .function("MergingOn", &vtkGenericGeometryFilter::MergingOn)
    .function("MergingOff", &vtkGenericGeometryFilter::MergingOff)
    .function("SetLocator", &vtkGenericGeometryFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkGenericGeometryFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkGenericGeometryFilter::CreateDefaultLocator)
    .function("GetMTime", &vtkGenericGeometryFilter::GetMTime)
    .function("SetPassThroughCellIds", &vtkGenericGeometryFilter::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkGenericGeometryFilter::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkGenericGeometryFilter::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkGenericGeometryFilter::PassThroughCellIdsOff);
}

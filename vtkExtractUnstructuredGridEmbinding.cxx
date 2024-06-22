// JavaScript wrapper for vtkExtractUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractUnstructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkExtractUnstructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkExtractUnstructuredGrid>(vtkExtractUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractUnstructuredGrid_class) {
  emscripten::class_<vtkExtractUnstructuredGrid, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkExtractUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkExtractUnstructuredGrid>>("vtkSmartPointer<vtkExtractUnstructuredGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractUnstructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointClipping", &vtkExtractUnstructuredGrid::SetPointClipping)
    .function("GetPointClipping", &vtkExtractUnstructuredGrid::GetPointClipping)
    .function("PointClippingOn", &vtkExtractUnstructuredGrid::PointClippingOn)
    .function("PointClippingOff", &vtkExtractUnstructuredGrid::PointClippingOff)
    .function("SetCellClipping", &vtkExtractUnstructuredGrid::SetCellClipping)
    .function("GetCellClipping", &vtkExtractUnstructuredGrid::GetCellClipping)
    .function("CellClippingOn", &vtkExtractUnstructuredGrid::CellClippingOn)
    .function("CellClippingOff", &vtkExtractUnstructuredGrid::CellClippingOff)
    .function("SetExtentClipping", &vtkExtractUnstructuredGrid::SetExtentClipping)
    .function("GetExtentClipping", &vtkExtractUnstructuredGrid::GetExtentClipping)
    .function("ExtentClippingOn", &vtkExtractUnstructuredGrid::ExtentClippingOn)
    .function("ExtentClippingOff", &vtkExtractUnstructuredGrid::ExtentClippingOff)
    .function("SetPointMinimum", &vtkExtractUnstructuredGrid::SetPointMinimum)
    .function("GetPointMinimumMinValue", &vtkExtractUnstructuredGrid::GetPointMinimumMinValue)
    .function("GetPointMinimumMaxValue", &vtkExtractUnstructuredGrid::GetPointMinimumMaxValue)
    .function("GetPointMinimum", &vtkExtractUnstructuredGrid::GetPointMinimum)
    .function("SetPointMaximum", &vtkExtractUnstructuredGrid::SetPointMaximum)
    .function("GetPointMaximumMinValue", &vtkExtractUnstructuredGrid::GetPointMaximumMinValue)
    .function("GetPointMaximumMaxValue", &vtkExtractUnstructuredGrid::GetPointMaximumMaxValue)
    .function("GetPointMaximum", &vtkExtractUnstructuredGrid::GetPointMaximum)
    .function("SetCellMinimum", &vtkExtractUnstructuredGrid::SetCellMinimum)
    .function("GetCellMinimumMinValue", &vtkExtractUnstructuredGrid::GetCellMinimumMinValue)
    .function("GetCellMinimumMaxValue", &vtkExtractUnstructuredGrid::GetCellMinimumMaxValue)
    .function("GetCellMinimum", &vtkExtractUnstructuredGrid::GetCellMinimum)
    .function("SetCellMaximum", &vtkExtractUnstructuredGrid::SetCellMaximum)
    .function("GetCellMaximumMinValue", &vtkExtractUnstructuredGrid::GetCellMaximumMinValue)
    .function("GetCellMaximumMaxValue", &vtkExtractUnstructuredGrid::GetCellMaximumMaxValue)
    .function("GetCellMaximum", &vtkExtractUnstructuredGrid::GetCellMaximum)
    .function("SetExtent", emscripten::select_overload<void(vtkExtractUnstructuredGrid&, double, double, double, double, double, double)>([](vtkExtractUnstructuredGrid& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetMerging", &vtkExtractUnstructuredGrid::SetMerging)
    .function("GetMerging", &vtkExtractUnstructuredGrid::GetMerging)
    .function("MergingOn", &vtkExtractUnstructuredGrid::MergingOn)
    .function("MergingOff", &vtkExtractUnstructuredGrid::MergingOff)
    .function("SetLocator", &vtkExtractUnstructuredGrid::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkExtractUnstructuredGrid::GetLocator, emscripten::allow_raw_pointers())
    .function("CreateDefaultLocator", &vtkExtractUnstructuredGrid::CreateDefaultLocator)
    .function("GetMTime", &vtkExtractUnstructuredGrid::GetMTime);
}

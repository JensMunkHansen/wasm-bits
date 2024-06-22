// JavaScript wrapper for vtkPointSetToOctreeImageFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometryPreview.js/vtkFiltersGeometryPreview.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometryPreview.js/vtkPointSetToOctreeImageFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/GeometryPreview/vtkPointSetToOctreeImageFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointSetToOctreeImageFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeometryPreview_vtkPointSetToOctreeImageFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPointSetToOctreeImageFilter>(vtkPointSetToOctreeImageFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSetToOctreeImageFilter_class) {
  emscripten::class_<vtkPointSetToOctreeImageFilter, emscripten::base<vtkPartitionedDataSetAlgorithm>>("vtkPointSetToOctreeImageFilter")
    .smart_ptr<vtkSmartPointer<vtkPointSetToOctreeImageFilter>>("vtkSmartPointer<vtkPointSetToOctreeImageFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSetToOctreeImageFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetToOctreeImageFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSetToOctreeImageFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSetToOctreeImageFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSetToOctreeImageFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetToOctreeImageFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSetToOctreeImageFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPointsPerCell", &vtkPointSetToOctreeImageFilter::SetNumberOfPointsPerCell)
    .function("GetNumberOfPointsPerCellMinValue", &vtkPointSetToOctreeImageFilter::GetNumberOfPointsPerCellMinValue)
    .function("GetNumberOfPointsPerCellMaxValue", &vtkPointSetToOctreeImageFilter::GetNumberOfPointsPerCellMaxValue)
    .function("GetNumberOfPointsPerCell", &vtkPointSetToOctreeImageFilter::GetNumberOfPointsPerCell)
    .function("SetProcessInputPointArray", &vtkPointSetToOctreeImageFilter::SetProcessInputPointArray)
    .function("GetProcessInputPointArray", &vtkPointSetToOctreeImageFilter::GetProcessInputPointArray)
    .function("ProcessInputPointArrayOn", &vtkPointSetToOctreeImageFilter::ProcessInputPointArrayOn)
    .function("ProcessInputPointArrayOff", &vtkPointSetToOctreeImageFilter::ProcessInputPointArrayOff)
    .function("SetComputeLastValue", &vtkPointSetToOctreeImageFilter::SetComputeLastValue)
    .function("GetComputeLastValue", &vtkPointSetToOctreeImageFilter::GetComputeLastValue)
    .function("ComputeLastValueOn", &vtkPointSetToOctreeImageFilter::ComputeLastValueOn)
    .function("ComputeLastValueOff", &vtkPointSetToOctreeImageFilter::ComputeLastValueOff)
    .function("SetComputeMin", &vtkPointSetToOctreeImageFilter::SetComputeMin)
    .function("GetComputeMin", &vtkPointSetToOctreeImageFilter::GetComputeMin)
    .function("ComputeMinOn", &vtkPointSetToOctreeImageFilter::ComputeMinOn)
    .function("ComputeMinOff", &vtkPointSetToOctreeImageFilter::ComputeMinOff)
    .function("SetComputeMax", &vtkPointSetToOctreeImageFilter::SetComputeMax)
    .function("GetComputeMax", &vtkPointSetToOctreeImageFilter::GetComputeMax)
    .function("ComputeMaxOn", &vtkPointSetToOctreeImageFilter::ComputeMaxOn)
    .function("ComputeMaxOff", &vtkPointSetToOctreeImageFilter::ComputeMaxOff)
    .function("SetComputeCount", &vtkPointSetToOctreeImageFilter::SetComputeCount)
    .function("GetComputeCount", &vtkPointSetToOctreeImageFilter::GetComputeCount)
    .function("ComputeCountOn", &vtkPointSetToOctreeImageFilter::ComputeCountOn)
    .function("ComputeCountOff", &vtkPointSetToOctreeImageFilter::ComputeCountOff)
    .function("SetComputeSum", &vtkPointSetToOctreeImageFilter::SetComputeSum)
    .function("GetComputeSum", &vtkPointSetToOctreeImageFilter::GetComputeSum)
    .function("ComputeSumOn", &vtkPointSetToOctreeImageFilter::ComputeSumOn)
    .function("ComputeSumOff", &vtkPointSetToOctreeImageFilter::ComputeSumOff)
    .function("SetComputeMean", &vtkPointSetToOctreeImageFilter::SetComputeMean)
    .function("GetComputeMean", &vtkPointSetToOctreeImageFilter::GetComputeMean)
    .function("ComputeMeanOn", &vtkPointSetToOctreeImageFilter::ComputeMeanOn)
    .function("ComputeMeanOff", &vtkPointSetToOctreeImageFilter::ComputeMeanOff);
}

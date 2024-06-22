// JavaScript wrapper for vtkContour3DLinearGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkContour3DLinearGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkContour3DLinearGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarTree.h"
#include "vtkDataObject.h"
#include "vtkContour3DLinearGrid.h"

template<> void emscripten::internal::raw_destructor<vtkContour3DLinearGrid>(vtkContour3DLinearGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContour3DLinearGrid_class) {
  emscripten::class_<vtkContour3DLinearGrid, emscripten::base<vtkDataObjectAlgorithm>>("vtkContour3DLinearGrid")
    .smart_ptr<vtkSmartPointer<vtkContour3DLinearGrid>>("vtkSmartPointer<vtkContour3DLinearGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContour3DLinearGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContour3DLinearGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContour3DLinearGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContour3DLinearGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContour3DLinearGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContour3DLinearGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContour3DLinearGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkContour3DLinearGrid::SetValue)
    .function("GetValue", &vtkContour3DLinearGrid::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkContour3DLinearGrid&)>([](vtkContour3DLinearGrid& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkContour3DLinearGrid&, std::uintptr_t)>([](vtkContour3DLinearGrid& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkContour3DLinearGrid::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkContour3DLinearGrid::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkContour3DLinearGrid&, int, double, double)>([](vtkContour3DLinearGrid& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetMergePoints", &vtkContour3DLinearGrid::SetMergePoints)
    .function("GetMergePoints", &vtkContour3DLinearGrid::GetMergePoints)
    .function("MergePointsOn", &vtkContour3DLinearGrid::MergePointsOn)
    .function("MergePointsOff", &vtkContour3DLinearGrid::MergePointsOff)
    .function("SetInterpolateAttributes", &vtkContour3DLinearGrid::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkContour3DLinearGrid::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkContour3DLinearGrid::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkContour3DLinearGrid::InterpolateAttributesOff)
    .function("SetComputeNormals", &vtkContour3DLinearGrid::SetComputeNormals)
    .function("GetComputeNormals", &vtkContour3DLinearGrid::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkContour3DLinearGrid::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkContour3DLinearGrid::ComputeNormalsOff)
    .function("SetComputeScalars", &vtkContour3DLinearGrid::SetComputeScalars)
    .function("GetComputeScalars", &vtkContour3DLinearGrid::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkContour3DLinearGrid::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkContour3DLinearGrid::ComputeScalarsOff)
    .function("SetOutputPointsPrecision", &vtkContour3DLinearGrid::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkContour3DLinearGrid::GetOutputPointsPrecision)
    .function("GetMTime", &vtkContour3DLinearGrid::GetMTime)
    .function("SetUseScalarTree", &vtkContour3DLinearGrid::SetUseScalarTree)
    .function("GetUseScalarTree", &vtkContour3DLinearGrid::GetUseScalarTree)
    .function("UseScalarTreeOn", &vtkContour3DLinearGrid::UseScalarTreeOn)
    .function("UseScalarTreeOff", &vtkContour3DLinearGrid::UseScalarTreeOff)
    .function("SetScalarTree", &vtkContour3DLinearGrid::SetScalarTree, emscripten::allow_raw_pointers())
    .function("GetScalarTree", &vtkContour3DLinearGrid::GetScalarTree, emscripten::allow_raw_pointers())
    .function("SetSequentialProcessing", &vtkContour3DLinearGrid::SetSequentialProcessing)
    .function("GetSequentialProcessing", &vtkContour3DLinearGrid::GetSequentialProcessing)
    .function("SequentialProcessingOn", &vtkContour3DLinearGrid::SequentialProcessingOn)
    .function("SequentialProcessingOff", &vtkContour3DLinearGrid::SequentialProcessingOff)
    .function("GetNumberOfThreadsUsed", &vtkContour3DLinearGrid::GetNumberOfThreadsUsed)
    .function("GetLargeIds", &vtkContour3DLinearGrid::GetLargeIds)
    .class_function("CanFullyProcessDataObject", emscripten::optional_override([]( vtkDataObject* arg_0, const std::string & arg_1) -> bool {  return vtkContour3DLinearGrid::CanFullyProcessDataObject( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers());
}

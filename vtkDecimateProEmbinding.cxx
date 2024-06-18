// JavaScript wrapper for vtkDecimatePro with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkDecimateProEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkDecimatePro.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDecimatePro.h"

template<> void emscripten::internal::raw_destructor<vtkDecimatePro>(vtkDecimatePro * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDecimatePro_class) {
  emscripten::class_<vtkDecimatePro, emscripten::base<vtkPolyDataAlgorithm>>("vtkDecimatePro")
    .smart_ptr<vtkSmartPointer<vtkDecimatePro>>("vtkSmartPointer<vtkDecimatePro>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDecimatePro>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePro::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDecimatePro& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDecimatePro::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDecimatePro::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDecimatePro::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDecimatePro& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTargetReduction", &vtkDecimatePro::SetTargetReduction)
    .function("GetTargetReductionMinValue", &vtkDecimatePro::GetTargetReductionMinValue)
    .function("GetTargetReductionMaxValue", &vtkDecimatePro::GetTargetReductionMaxValue)
    .function("GetTargetReduction", &vtkDecimatePro::GetTargetReduction)
    .function("SetPreserveTopology", &vtkDecimatePro::SetPreserveTopology)
    .function("GetPreserveTopology", &vtkDecimatePro::GetPreserveTopology)
    .function("PreserveTopologyOn", &vtkDecimatePro::PreserveTopologyOn)
    .function("PreserveTopologyOff", &vtkDecimatePro::PreserveTopologyOff)
    .function("SetFeatureAngle", &vtkDecimatePro::SetFeatureAngle)
    .function("GetFeatureAngleMinValue", &vtkDecimatePro::GetFeatureAngleMinValue)
    .function("GetFeatureAngleMaxValue", &vtkDecimatePro::GetFeatureAngleMaxValue)
    .function("GetFeatureAngle", &vtkDecimatePro::GetFeatureAngle)
    .function("SetSplitting", &vtkDecimatePro::SetSplitting)
    .function("GetSplitting", &vtkDecimatePro::GetSplitting)
    .function("SplittingOn", &vtkDecimatePro::SplittingOn)
    .function("SplittingOff", &vtkDecimatePro::SplittingOff)
    .function("SetSplitAngle", &vtkDecimatePro::SetSplitAngle)
    .function("GetSplitAngleMinValue", &vtkDecimatePro::GetSplitAngleMinValue)
    .function("GetSplitAngleMaxValue", &vtkDecimatePro::GetSplitAngleMaxValue)
    .function("GetSplitAngle", &vtkDecimatePro::GetSplitAngle)
    .function("SetPreSplitMesh", &vtkDecimatePro::SetPreSplitMesh)
    .function("GetPreSplitMesh", &vtkDecimatePro::GetPreSplitMesh)
    .function("PreSplitMeshOn", &vtkDecimatePro::PreSplitMeshOn)
    .function("PreSplitMeshOff", &vtkDecimatePro::PreSplitMeshOff)
    .function("SetMaximumError", &vtkDecimatePro::SetMaximumError)
    .function("GetMaximumErrorMinValue", &vtkDecimatePro::GetMaximumErrorMinValue)
    .function("GetMaximumErrorMaxValue", &vtkDecimatePro::GetMaximumErrorMaxValue)
    .function("GetMaximumError", &vtkDecimatePro::GetMaximumError)
    .function("SetAccumulateError", &vtkDecimatePro::SetAccumulateError)
    .function("GetAccumulateError", &vtkDecimatePro::GetAccumulateError)
    .function("AccumulateErrorOn", &vtkDecimatePro::AccumulateErrorOn)
    .function("AccumulateErrorOff", &vtkDecimatePro::AccumulateErrorOff)
    .function("SetErrorIsAbsolute", &vtkDecimatePro::SetErrorIsAbsolute)
    .function("GetErrorIsAbsolute", &vtkDecimatePro::GetErrorIsAbsolute)
    .function("SetAbsoluteError", &vtkDecimatePro::SetAbsoluteError)
    .function("GetAbsoluteErrorMinValue", &vtkDecimatePro::GetAbsoluteErrorMinValue)
    .function("GetAbsoluteErrorMaxValue", &vtkDecimatePro::GetAbsoluteErrorMaxValue)
    .function("GetAbsoluteError", &vtkDecimatePro::GetAbsoluteError)
    .function("SetBoundaryVertexDeletion", &vtkDecimatePro::SetBoundaryVertexDeletion)
    .function("GetBoundaryVertexDeletion", &vtkDecimatePro::GetBoundaryVertexDeletion)
    .function("BoundaryVertexDeletionOn", &vtkDecimatePro::BoundaryVertexDeletionOn)
    .function("BoundaryVertexDeletionOff", &vtkDecimatePro::BoundaryVertexDeletionOff)
    .function("SetDegree", &vtkDecimatePro::SetDegree)
    .function("GetDegreeMinValue", &vtkDecimatePro::GetDegreeMinValue)
    .function("GetDegreeMaxValue", &vtkDecimatePro::GetDegreeMaxValue)
    .function("GetDegree", &vtkDecimatePro::GetDegree)
    .function("SetInflectionPointRatio", &vtkDecimatePro::SetInflectionPointRatio)
    .function("GetInflectionPointRatioMinValue", &vtkDecimatePro::GetInflectionPointRatioMinValue)
    .function("GetInflectionPointRatioMaxValue", &vtkDecimatePro::GetInflectionPointRatioMaxValue)
    .function("GetInflectionPointRatio", &vtkDecimatePro::GetInflectionPointRatio)
    .function("GetNumberOfInflectionPoints", &vtkDecimatePro::GetNumberOfInflectionPoints)
    .function("GetInflectionPoints", emscripten::select_overload<void(vtkDecimatePro&, std::uintptr_t)>([](vtkDecimatePro& self, std::uintptr_t arg_0) -> void { return self.GetInflectionPoints(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetInflectionPoints", emscripten::select_overload<std::uintptr_t(vtkDecimatePro&)>([](vtkDecimatePro& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetInflectionPoints()); }))
    .function("SetOutputPointsPrecision", &vtkDecimatePro::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkDecimatePro::GetOutputPointsPrecision);
}

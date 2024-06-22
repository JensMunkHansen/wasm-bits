// JavaScript wrapper for vtkQuadricDecimation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkQuadricDecimationEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkQuadricDecimation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadricDecimation.h"

template<> void emscripten::internal::raw_destructor<vtkQuadricDecimation>(vtkQuadricDecimation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadricDecimation_class) {
  emscripten::class_<vtkQuadricDecimation, emscripten::base<vtkPolyDataAlgorithm>>("vtkQuadricDecimation")
    .smart_ptr<vtkSmartPointer<vtkQuadricDecimation>>("vtkSmartPointer<vtkQuadricDecimation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadricDecimation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadricDecimation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadricDecimation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadricDecimation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadricDecimation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadricDecimation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadricDecimation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTargetReduction", &vtkQuadricDecimation::SetTargetReduction)
    .function("GetTargetReductionMinValue", &vtkQuadricDecimation::GetTargetReductionMinValue)
    .function("GetTargetReductionMaxValue", &vtkQuadricDecimation::GetTargetReductionMaxValue)
    .function("GetTargetReduction", &vtkQuadricDecimation::GetTargetReduction)
    .function("SetAttributeErrorMetric", &vtkQuadricDecimation::SetAttributeErrorMetric)
    .function("GetAttributeErrorMetric", &vtkQuadricDecimation::GetAttributeErrorMetric)
    .function("AttributeErrorMetricOn", &vtkQuadricDecimation::AttributeErrorMetricOn)
    .function("AttributeErrorMetricOff", &vtkQuadricDecimation::AttributeErrorMetricOff)
    .function("SetVolumePreservation", &vtkQuadricDecimation::SetVolumePreservation)
    .function("GetVolumePreservation", &vtkQuadricDecimation::GetVolumePreservation)
    .function("VolumePreservationOn", &vtkQuadricDecimation::VolumePreservationOn)
    .function("VolumePreservationOff", &vtkQuadricDecimation::VolumePreservationOff)
    .function("SetRegularize", &vtkQuadricDecimation::SetRegularize)
    .function("GetRegularize", &vtkQuadricDecimation::GetRegularize)
    .function("RegularizeOn", &vtkQuadricDecimation::RegularizeOn)
    .function("RegularizeOff", &vtkQuadricDecimation::RegularizeOff)
    .function("SetRegularization", &vtkQuadricDecimation::SetRegularization)
    .function("GetRegularization", &vtkQuadricDecimation::GetRegularization)
    .function("SetWeighBoundaryConstraintsByLength", &vtkQuadricDecimation::SetWeighBoundaryConstraintsByLength)
    .function("GetWeighBoundaryConstraintsByLength", &vtkQuadricDecimation::GetWeighBoundaryConstraintsByLength)
    .function("WeighBoundaryConstraintsByLengthOn", &vtkQuadricDecimation::WeighBoundaryConstraintsByLengthOn)
    .function("WeighBoundaryConstraintsByLengthOff", &vtkQuadricDecimation::WeighBoundaryConstraintsByLengthOff)
    .function("SetBoundaryWeightFactor", &vtkQuadricDecimation::SetBoundaryWeightFactor)
    .function("GetBoundaryWeightFactor", &vtkQuadricDecimation::GetBoundaryWeightFactor)
    .function("GetMapPointData", &vtkQuadricDecimation::GetMapPointData)
    .function("SetMapPointData", &vtkQuadricDecimation::SetMapPointData)
    .function("MapPointDataOn", &vtkQuadricDecimation::MapPointDataOn)
    .function("MapPointDataOff", &vtkQuadricDecimation::MapPointDataOff)
    .function("SetScalarsAttribute", &vtkQuadricDecimation::SetScalarsAttribute)
    .function("GetScalarsAttribute", &vtkQuadricDecimation::GetScalarsAttribute)
    .function("ScalarsAttributeOn", &vtkQuadricDecimation::ScalarsAttributeOn)
    .function("ScalarsAttributeOff", &vtkQuadricDecimation::ScalarsAttributeOff)
    .function("SetVectorsAttribute", &vtkQuadricDecimation::SetVectorsAttribute)
    .function("GetVectorsAttribute", &vtkQuadricDecimation::GetVectorsAttribute)
    .function("VectorsAttributeOn", &vtkQuadricDecimation::VectorsAttributeOn)
    .function("VectorsAttributeOff", &vtkQuadricDecimation::VectorsAttributeOff)
    .function("SetNormalsAttribute", &vtkQuadricDecimation::SetNormalsAttribute)
    .function("GetNormalsAttribute", &vtkQuadricDecimation::GetNormalsAttribute)
    .function("NormalsAttributeOn", &vtkQuadricDecimation::NormalsAttributeOn)
    .function("NormalsAttributeOff", &vtkQuadricDecimation::NormalsAttributeOff)
    .function("SetTCoordsAttribute", &vtkQuadricDecimation::SetTCoordsAttribute)
    .function("GetTCoordsAttribute", &vtkQuadricDecimation::GetTCoordsAttribute)
    .function("TCoordsAttributeOn", &vtkQuadricDecimation::TCoordsAttributeOn)
    .function("TCoordsAttributeOff", &vtkQuadricDecimation::TCoordsAttributeOff)
    .function("SetTensorsAttribute", &vtkQuadricDecimation::SetTensorsAttribute)
    .function("GetTensorsAttribute", &vtkQuadricDecimation::GetTensorsAttribute)
    .function("TensorsAttributeOn", &vtkQuadricDecimation::TensorsAttributeOn)
    .function("TensorsAttributeOff", &vtkQuadricDecimation::TensorsAttributeOff)
    .function("SetScalarsWeight", &vtkQuadricDecimation::SetScalarsWeight)
    .function("SetVectorsWeight", &vtkQuadricDecimation::SetVectorsWeight)
    .function("SetNormalsWeight", &vtkQuadricDecimation::SetNormalsWeight)
    .function("SetTCoordsWeight", &vtkQuadricDecimation::SetTCoordsWeight)
    .function("SetTensorsWeight", &vtkQuadricDecimation::SetTensorsWeight)
    .function("GetScalarsWeight", &vtkQuadricDecimation::GetScalarsWeight)
    .function("GetVectorsWeight", &vtkQuadricDecimation::GetVectorsWeight)
    .function("GetNormalsWeight", &vtkQuadricDecimation::GetNormalsWeight)
    .function("GetTCoordsWeight", &vtkQuadricDecimation::GetTCoordsWeight)
    .function("GetTensorsWeight", &vtkQuadricDecimation::GetTensorsWeight)
    .function("GetActualReduction", &vtkQuadricDecimation::GetActualReduction);
}

// JavaScript wrapper for vtkSmoothPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSmoothPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSmoothPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkSmoothPolyDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSmoothPolyDataFilter>(vtkSmoothPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSmoothPolyDataFilter_class) {
  emscripten::class_<vtkSmoothPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkSmoothPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkSmoothPolyDataFilter>>("vtkSmartPointer<vtkSmoothPolyDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSmoothPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSmoothPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSmoothPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSmoothPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSmoothPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSmoothPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSmoothPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConvergence", &vtkSmoothPolyDataFilter::SetConvergence)
    .function("GetConvergenceMinValue", &vtkSmoothPolyDataFilter::GetConvergenceMinValue)
    .function("GetConvergenceMaxValue", &vtkSmoothPolyDataFilter::GetConvergenceMaxValue)
    .function("GetConvergence", &vtkSmoothPolyDataFilter::GetConvergence)
    .function("SetNumberOfIterations", &vtkSmoothPolyDataFilter::SetNumberOfIterations)
    .function("GetNumberOfIterationsMinValue", &vtkSmoothPolyDataFilter::GetNumberOfIterationsMinValue)
    .function("GetNumberOfIterationsMaxValue", &vtkSmoothPolyDataFilter::GetNumberOfIterationsMaxValue)
    .function("GetNumberOfIterations", &vtkSmoothPolyDataFilter::GetNumberOfIterations)
    .function("SetRelaxationFactor", &vtkSmoothPolyDataFilter::SetRelaxationFactor)
    .function("GetRelaxationFactor", &vtkSmoothPolyDataFilter::GetRelaxationFactor)
    .function("SetFeatureEdgeSmoothing", &vtkSmoothPolyDataFilter::SetFeatureEdgeSmoothing)
    .function("GetFeatureEdgeSmoothing", &vtkSmoothPolyDataFilter::GetFeatureEdgeSmoothing)
    .function("FeatureEdgeSmoothingOn", &vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOn)
    .function("FeatureEdgeSmoothingOff", &vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOff)
    .function("SetFeatureAngle", &vtkSmoothPolyDataFilter::SetFeatureAngle)
    .function("GetFeatureAngleMinValue", &vtkSmoothPolyDataFilter::GetFeatureAngleMinValue)
    .function("GetFeatureAngleMaxValue", &vtkSmoothPolyDataFilter::GetFeatureAngleMaxValue)
    .function("GetFeatureAngle", &vtkSmoothPolyDataFilter::GetFeatureAngle)
    .function("SetEdgeAngle", &vtkSmoothPolyDataFilter::SetEdgeAngle)
    .function("GetEdgeAngleMinValue", &vtkSmoothPolyDataFilter::GetEdgeAngleMinValue)
    .function("GetEdgeAngleMaxValue", &vtkSmoothPolyDataFilter::GetEdgeAngleMaxValue)
    .function("GetEdgeAngle", &vtkSmoothPolyDataFilter::GetEdgeAngle)
    .function("SetBoundarySmoothing", &vtkSmoothPolyDataFilter::SetBoundarySmoothing)
    .function("GetBoundarySmoothing", &vtkSmoothPolyDataFilter::GetBoundarySmoothing)
    .function("BoundarySmoothingOn", &vtkSmoothPolyDataFilter::BoundarySmoothingOn)
    .function("BoundarySmoothingOff", &vtkSmoothPolyDataFilter::BoundarySmoothingOff)
    .function("SetGenerateErrorScalars", &vtkSmoothPolyDataFilter::SetGenerateErrorScalars)
    .function("GetGenerateErrorScalars", &vtkSmoothPolyDataFilter::GetGenerateErrorScalars)
    .function("GenerateErrorScalarsOn", &vtkSmoothPolyDataFilter::GenerateErrorScalarsOn)
    .function("GenerateErrorScalarsOff", &vtkSmoothPolyDataFilter::GenerateErrorScalarsOff)
    .function("SetGenerateErrorVectors", &vtkSmoothPolyDataFilter::SetGenerateErrorVectors)
    .function("GetGenerateErrorVectors", &vtkSmoothPolyDataFilter::GetGenerateErrorVectors)
    .function("GenerateErrorVectorsOn", &vtkSmoothPolyDataFilter::GenerateErrorVectorsOn)
    .function("GenerateErrorVectorsOff", &vtkSmoothPolyDataFilter::GenerateErrorVectorsOff)
    .function("SetSourceData", &vtkSmoothPolyDataFilter::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkSmoothPolyDataFilter::GetSource, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkSmoothPolyDataFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkSmoothPolyDataFilter::GetOutputPointsPrecision);
}

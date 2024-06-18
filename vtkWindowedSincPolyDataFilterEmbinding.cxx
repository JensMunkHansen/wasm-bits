// JavaScript wrapper for vtkWindowedSincPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkWindowedSincPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkWindowedSincPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindowedSincPolyDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkWindowedSincPolyDataFilter>(vtkWindowedSincPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWindowedSincPolyDataFilter_class) {
  emscripten::class_<vtkWindowedSincPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkWindowedSincPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkWindowedSincPolyDataFilter>>("vtkSmartPointer<vtkWindowedSincPolyDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkWindowedSincPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowedSincPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWindowedSincPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWindowedSincPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWindowedSincPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWindowedSincPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWindowedSincPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfIterations", &vtkWindowedSincPolyDataFilter::SetNumberOfIterations)
    .function("GetNumberOfIterationsMinValue", &vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMinValue)
    .function("GetNumberOfIterationsMaxValue", &vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMaxValue)
    .function("GetNumberOfIterations", &vtkWindowedSincPolyDataFilter::GetNumberOfIterations)
    .function("SetPassBand", &vtkWindowedSincPolyDataFilter::SetPassBand)
    .function("GetPassBandMinValue", &vtkWindowedSincPolyDataFilter::GetPassBandMinValue)
    .function("GetPassBandMaxValue", &vtkWindowedSincPolyDataFilter::GetPassBandMaxValue)
    .function("GetPassBand", &vtkWindowedSincPolyDataFilter::GetPassBand)
    .function("SetNormalizeCoordinates", &vtkWindowedSincPolyDataFilter::SetNormalizeCoordinates)
    .function("GetNormalizeCoordinates", &vtkWindowedSincPolyDataFilter::GetNormalizeCoordinates)
    .function("NormalizeCoordinatesOn", &vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOn)
    .function("NormalizeCoordinatesOff", &vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOff)
    .function("SetWindowFunction", &vtkWindowedSincPolyDataFilter::SetWindowFunction)
    .function("GetWindowFunctionMinValue", &vtkWindowedSincPolyDataFilter::GetWindowFunctionMinValue)
    .function("GetWindowFunctionMaxValue", &vtkWindowedSincPolyDataFilter::GetWindowFunctionMaxValue)
    .function("GetWindowFunction", &vtkWindowedSincPolyDataFilter::GetWindowFunction)
    .function("SetWindowFunctionToNuttall", &vtkWindowedSincPolyDataFilter::SetWindowFunctionToNuttall)
    .function("SetWindowFunctionToBlackman", &vtkWindowedSincPolyDataFilter::SetWindowFunctionToBlackman)
    .function("SetWindowFunctionoHanning", &vtkWindowedSincPolyDataFilter::SetWindowFunctionoHanning)
    .function("SetWindowFunctionToHamming", &vtkWindowedSincPolyDataFilter::SetWindowFunctionToHamming)
    .function("SetFeatureEdgeSmoothing", &vtkWindowedSincPolyDataFilter::SetFeatureEdgeSmoothing)
    .function("GetFeatureEdgeSmoothing", &vtkWindowedSincPolyDataFilter::GetFeatureEdgeSmoothing)
    .function("FeatureEdgeSmoothingOn", &vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOn)
    .function("FeatureEdgeSmoothingOff", &vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOff)
    .function("SetFeatureAngle", &vtkWindowedSincPolyDataFilter::SetFeatureAngle)
    .function("GetFeatureAngleMinValue", &vtkWindowedSincPolyDataFilter::GetFeatureAngleMinValue)
    .function("GetFeatureAngleMaxValue", &vtkWindowedSincPolyDataFilter::GetFeatureAngleMaxValue)
    .function("GetFeatureAngle", &vtkWindowedSincPolyDataFilter::GetFeatureAngle)
    .function("SetEdgeAngle", &vtkWindowedSincPolyDataFilter::SetEdgeAngle)
    .function("GetEdgeAngleMinValue", &vtkWindowedSincPolyDataFilter::GetEdgeAngleMinValue)
    .function("GetEdgeAngleMaxValue", &vtkWindowedSincPolyDataFilter::GetEdgeAngleMaxValue)
    .function("GetEdgeAngle", &vtkWindowedSincPolyDataFilter::GetEdgeAngle)
    .function("SetBoundarySmoothing", &vtkWindowedSincPolyDataFilter::SetBoundarySmoothing)
    .function("GetBoundarySmoothing", &vtkWindowedSincPolyDataFilter::GetBoundarySmoothing)
    .function("BoundarySmoothingOn", &vtkWindowedSincPolyDataFilter::BoundarySmoothingOn)
    .function("BoundarySmoothingOff", &vtkWindowedSincPolyDataFilter::BoundarySmoothingOff)
    .function("SetNonManifoldSmoothing", &vtkWindowedSincPolyDataFilter::SetNonManifoldSmoothing)
    .function("GetNonManifoldSmoothing", &vtkWindowedSincPolyDataFilter::GetNonManifoldSmoothing)
    .function("NonManifoldSmoothingOn", &vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOn)
    .function("NonManifoldSmoothingOff", &vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOff)
    .function("SetWeightNonManifoldEdges", &vtkWindowedSincPolyDataFilter::SetWeightNonManifoldEdges)
    .function("GetWeightNonManifoldEdges", &vtkWindowedSincPolyDataFilter::GetWeightNonManifoldEdges)
    .function("WeightNonManifoldEdgesOn", &vtkWindowedSincPolyDataFilter::WeightNonManifoldEdgesOn)
    .function("WeightNonManifoldEdgesOff", &vtkWindowedSincPolyDataFilter::WeightNonManifoldEdgesOff)
    .function("SetGenerateErrorScalars", &vtkWindowedSincPolyDataFilter::SetGenerateErrorScalars)
    .function("GetGenerateErrorScalars", &vtkWindowedSincPolyDataFilter::GetGenerateErrorScalars)
    .function("GenerateErrorScalarsOn", &vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOn)
    .function("GenerateErrorScalarsOff", &vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOff)
    .function("SetGenerateErrorVectors", &vtkWindowedSincPolyDataFilter::SetGenerateErrorVectors)
    .function("GetGenerateErrorVectors", &vtkWindowedSincPolyDataFilter::GetGenerateErrorVectors)
    .function("GenerateErrorVectorsOn", &vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOn)
    .function("GenerateErrorVectorsOff", &vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkWindowedSincPolyDataFilter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkWindowedSincPolyDataFilter_NUTTALL", vtkWindowedSincPolyDataFilter::NUTTALL },
      { "vtkWindowedSincPolyDataFilter_BLACKMAN", vtkWindowedSincPolyDataFilter::BLACKMAN },
      { "vtkWindowedSincPolyDataFilter_HANNING", vtkWindowedSincPolyDataFilter::HANNING },
      { "vtkWindowedSincPolyDataFilter_HAMMING", vtkWindowedSincPolyDataFilter::HAMMING },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

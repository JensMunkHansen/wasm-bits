// JavaScript wrapper for vtkCheckerboardSplatter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkCheckerboardSplatterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkCheckerboardSplatter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkCheckerboardSplatter.h"

EMSCRIPTEN_BINDINGS(vtkImagingHybrid_vtkCheckerboardSplatter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_ACCUMULATION_MODE_MIN", 0 },
      { "VTK_ACCUMULATION_MODE_MAX", 1 },
      { "VTK_ACCUMULATION_MODE_SUM", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkCheckerboardSplatter>(vtkCheckerboardSplatter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCheckerboardSplatter_class) {
  emscripten::class_<vtkCheckerboardSplatter, emscripten::base<vtkImageAlgorithm>>("vtkCheckerboardSplatter")
    .smart_ptr<vtkSmartPointer<vtkCheckerboardSplatter>>("vtkSmartPointer<vtkCheckerboardSplatter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCheckerboardSplatter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCheckerboardSplatter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCheckerboardSplatter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCheckerboardSplatter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCheckerboardSplatter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCheckerboardSplatter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCheckerboardSplatter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkCheckerboardSplatter&, int, int, int)>([](vtkCheckerboardSplatter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetModelBounds", emscripten::select_overload<void(vtkCheckerboardSplatter&, double, double, double, double, double, double)>([](vtkCheckerboardSplatter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetFootprint", &vtkCheckerboardSplatter::SetFootprint)
    .function("GetFootprintMinValue", &vtkCheckerboardSplatter::GetFootprintMinValue)
    .function("GetFootprintMaxValue", &vtkCheckerboardSplatter::GetFootprintMaxValue)
    .function("GetFootprint", &vtkCheckerboardSplatter::GetFootprint)
    .function("SetRadius", &vtkCheckerboardSplatter::SetRadius)
    .function("GetRadiusMinValue", &vtkCheckerboardSplatter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkCheckerboardSplatter::GetRadiusMaxValue)
    .function("GetRadius", &vtkCheckerboardSplatter::GetRadius)
    .function("SetScaleFactor", &vtkCheckerboardSplatter::SetScaleFactor)
    .function("GetScaleFactorMinValue", &vtkCheckerboardSplatter::GetScaleFactorMinValue)
    .function("GetScaleFactorMaxValue", &vtkCheckerboardSplatter::GetScaleFactorMaxValue)
    .function("GetScaleFactor", &vtkCheckerboardSplatter::GetScaleFactor)
    .function("SetExponentFactor", &vtkCheckerboardSplatter::SetExponentFactor)
    .function("GetExponentFactor", &vtkCheckerboardSplatter::GetExponentFactor)
    .function("SetScalarWarping", &vtkCheckerboardSplatter::SetScalarWarping)
    .function("GetScalarWarping", &vtkCheckerboardSplatter::GetScalarWarping)
    .function("ScalarWarpingOn", &vtkCheckerboardSplatter::ScalarWarpingOn)
    .function("ScalarWarpingOff", &vtkCheckerboardSplatter::ScalarWarpingOff)
    .function("SetNormalWarping", &vtkCheckerboardSplatter::SetNormalWarping)
    .function("GetNormalWarping", &vtkCheckerboardSplatter::GetNormalWarping)
    .function("NormalWarpingOn", &vtkCheckerboardSplatter::NormalWarpingOn)
    .function("NormalWarpingOff", &vtkCheckerboardSplatter::NormalWarpingOff)
    .function("SetEccentricity", &vtkCheckerboardSplatter::SetEccentricity)
    .function("GetEccentricityMinValue", &vtkCheckerboardSplatter::GetEccentricityMinValue)
    .function("GetEccentricityMaxValue", &vtkCheckerboardSplatter::GetEccentricityMaxValue)
    .function("GetEccentricity", &vtkCheckerboardSplatter::GetEccentricity)
    .function("SetAccumulationMode", &vtkCheckerboardSplatter::SetAccumulationMode)
    .function("GetAccumulationModeMinValue", &vtkCheckerboardSplatter::GetAccumulationModeMinValue)
    .function("GetAccumulationModeMaxValue", &vtkCheckerboardSplatter::GetAccumulationModeMaxValue)
    .function("GetAccumulationMode", &vtkCheckerboardSplatter::GetAccumulationMode)
    .function("SetAccumulationModeToMin", &vtkCheckerboardSplatter::SetAccumulationModeToMin)
    .function("SetAccumulationModeToMax", &vtkCheckerboardSplatter::SetAccumulationModeToMax)
    .function("SetAccumulationModeToSum", &vtkCheckerboardSplatter::SetAccumulationModeToSum)
    .function("GetAccumulationModeAsString", emscripten::optional_override([](vtkCheckerboardSplatter& self) -> std::string {  return self.GetAccumulationModeAsString();}))
    .function("SetOutputScalarType", &vtkCheckerboardSplatter::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkCheckerboardSplatter::GetOutputScalarType)
    .function("SetOutputScalarTypeToDouble", &vtkCheckerboardSplatter::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToFloat", &vtkCheckerboardSplatter::SetOutputScalarTypeToFloat)
    .function("SetCapping", &vtkCheckerboardSplatter::SetCapping)
    .function("GetCapping", &vtkCheckerboardSplatter::GetCapping)
    .function("CappingOn", &vtkCheckerboardSplatter::CappingOn)
    .function("CappingOff", &vtkCheckerboardSplatter::CappingOff)
    .function("SetCapValue", &vtkCheckerboardSplatter::SetCapValue)
    .function("GetCapValue", &vtkCheckerboardSplatter::GetCapValue)
    .function("SetNullValue", &vtkCheckerboardSplatter::SetNullValue)
    .function("GetNullValue", &vtkCheckerboardSplatter::GetNullValue)
    .function("SetMaximumDimension", &vtkCheckerboardSplatter::SetMaximumDimension)
    .function("GetMaximumDimensionMinValue", &vtkCheckerboardSplatter::GetMaximumDimensionMinValue)
    .function("GetMaximumDimensionMaxValue", &vtkCheckerboardSplatter::GetMaximumDimensionMaxValue)
    .function("GetMaximumDimension", &vtkCheckerboardSplatter::GetMaximumDimension)
    .function("SetParallelSplatCrossover", &vtkCheckerboardSplatter::SetParallelSplatCrossover)
    .function("GetParallelSplatCrossoverMinValue", &vtkCheckerboardSplatter::GetParallelSplatCrossoverMinValue)
    .function("GetParallelSplatCrossoverMaxValue", &vtkCheckerboardSplatter::GetParallelSplatCrossoverMaxValue)
    .function("GetParallelSplatCrossover", &vtkCheckerboardSplatter::GetParallelSplatCrossover)
    .function("ComputeModelBounds", &vtkCheckerboardSplatter::ComputeModelBounds, emscripten::allow_raw_pointers());
}

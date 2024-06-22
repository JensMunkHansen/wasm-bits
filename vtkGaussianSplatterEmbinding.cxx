// JavaScript wrapper for vtkGaussianSplatter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkGaussianSplatterEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkGaussianSplatter.h
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
#include "vtkCompositeDataSet.h"
#include "vtkGaussianSplatter.h"

EMSCRIPTEN_BINDINGS(vtkImagingHybrid_vtkGaussianSplatter_0_1_constants) {
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
template<> void emscripten::internal::raw_destructor<vtkGaussianSplatter>(vtkGaussianSplatter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGaussianSplatter_class) {
  emscripten::class_<vtkGaussianSplatter, emscripten::base<vtkImageAlgorithm>>("vtkGaussianSplatter")
    .smart_ptr<vtkSmartPointer<vtkGaussianSplatter>>("vtkSmartPointer<vtkGaussianSplatter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGaussianSplatter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianSplatter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGaussianSplatter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGaussianSplatter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGaussianSplatter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianSplatter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGaussianSplatter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkGaussianSplatter&, int, int, int)>([](vtkGaussianSplatter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetModelBounds", emscripten::select_overload<void(vtkGaussianSplatter&, double, double, double, double, double, double)>([](vtkGaussianSplatter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetRadius", &vtkGaussianSplatter::SetRadius)
    .function("GetRadiusMinValue", &vtkGaussianSplatter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkGaussianSplatter::GetRadiusMaxValue)
    .function("GetRadius", &vtkGaussianSplatter::GetRadius)
    .function("SetScaleFactor", &vtkGaussianSplatter::SetScaleFactor)
    .function("GetScaleFactorMinValue", &vtkGaussianSplatter::GetScaleFactorMinValue)
    .function("GetScaleFactorMaxValue", &vtkGaussianSplatter::GetScaleFactorMaxValue)
    .function("GetScaleFactor", &vtkGaussianSplatter::GetScaleFactor)
    .function("SetExponentFactor", &vtkGaussianSplatter::SetExponentFactor)
    .function("GetExponentFactor", &vtkGaussianSplatter::GetExponentFactor)
    .function("SetNormalWarping", &vtkGaussianSplatter::SetNormalWarping)
    .function("GetNormalWarping", &vtkGaussianSplatter::GetNormalWarping)
    .function("NormalWarpingOn", &vtkGaussianSplatter::NormalWarpingOn)
    .function("NormalWarpingOff", &vtkGaussianSplatter::NormalWarpingOff)
    .function("SetEccentricity", &vtkGaussianSplatter::SetEccentricity)
    .function("GetEccentricityMinValue", &vtkGaussianSplatter::GetEccentricityMinValue)
    .function("GetEccentricityMaxValue", &vtkGaussianSplatter::GetEccentricityMaxValue)
    .function("GetEccentricity", &vtkGaussianSplatter::GetEccentricity)
    .function("SetScalarWarping", &vtkGaussianSplatter::SetScalarWarping)
    .function("GetScalarWarping", &vtkGaussianSplatter::GetScalarWarping)
    .function("ScalarWarpingOn", &vtkGaussianSplatter::ScalarWarpingOn)
    .function("ScalarWarpingOff", &vtkGaussianSplatter::ScalarWarpingOff)
    .function("SetCapping", &vtkGaussianSplatter::SetCapping)
    .function("GetCapping", &vtkGaussianSplatter::GetCapping)
    .function("CappingOn", &vtkGaussianSplatter::CappingOn)
    .function("CappingOff", &vtkGaussianSplatter::CappingOff)
    .function("SetCapValue", &vtkGaussianSplatter::SetCapValue)
    .function("GetCapValue", &vtkGaussianSplatter::GetCapValue)
    .function("SetAccumulationMode", &vtkGaussianSplatter::SetAccumulationMode)
    .function("GetAccumulationModeMinValue", &vtkGaussianSplatter::GetAccumulationModeMinValue)
    .function("GetAccumulationModeMaxValue", &vtkGaussianSplatter::GetAccumulationModeMaxValue)
    .function("GetAccumulationMode", &vtkGaussianSplatter::GetAccumulationMode)
    .function("SetAccumulationModeToMin", &vtkGaussianSplatter::SetAccumulationModeToMin)
    .function("SetAccumulationModeToMax", &vtkGaussianSplatter::SetAccumulationModeToMax)
    .function("SetAccumulationModeToSum", &vtkGaussianSplatter::SetAccumulationModeToSum)
    .function("GetAccumulationModeAsString", emscripten::optional_override([](vtkGaussianSplatter& self) -> std::string {  return self.GetAccumulationModeAsString();}))
    .function("SetNullValue", &vtkGaussianSplatter::SetNullValue)
    .function("GetNullValue", &vtkGaussianSplatter::GetNullValue)
    .function("ComputeModelBounds", emscripten::select_overload<void(vtkGaussianSplatter&, vtkDataSet*, vtkImageData*, vtkInformation*)>([](vtkGaussianSplatter& self, vtkDataSet* arg_0, vtkImageData* arg_1, vtkInformation* arg_2) -> void { return self.ComputeModelBounds( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("ComputeModelBounds", emscripten::select_overload<void(vtkGaussianSplatter&, vtkCompositeDataSet*, vtkImageData*, vtkInformation*)>([](vtkGaussianSplatter& self, vtkCompositeDataSet* arg_0, vtkImageData* arg_1, vtkInformation* arg_2) -> void { return self.ComputeModelBounds( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetScalar", emscripten::optional_override([](vtkGaussianSplatter& self, int arg_0, double arg_1, std::uintptr_t arg_2) -> void {  return self.SetScalar( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)));}));
}

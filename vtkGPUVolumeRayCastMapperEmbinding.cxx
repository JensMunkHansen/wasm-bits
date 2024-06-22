// JavaScript wrapper for vtkGPUVolumeRayCastMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkGPUVolumeRayCastMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkGPUVolumeRayCastMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContourValues.h"
#include "vtkRenderWindow.h"
#include "vtkVolumeProperty.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkImageData.h"
#include "vtkWindow.h"
#include "vtkDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtkGPUVolumeRayCastMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkGPUVolumeRayCastMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkGPUVolumeRayCastMapper>(vtkGPUVolumeRayCastMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGPUVolumeRayCastMapper_class) {
  using TFRangeType=vtkGPUVolumeRayCastMapper::TFRangeType;
  emscripten::class_<vtkGPUVolumeRayCastMapper, emscripten::base<vtkVolumeMapper>>("vtkGPUVolumeRayCastMapper")
    .smart_ptr<vtkSmartPointer<vtkGPUVolumeRayCastMapper>>("vtkSmartPointer<vtkGPUVolumeRayCastMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGPUVolumeRayCastMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGPUVolumeRayCastMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGPUVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGPUVolumeRayCastMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGPUVolumeRayCastMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGPUVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGPUVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAutoAdjustSampleDistances", &vtkGPUVolumeRayCastMapper::SetAutoAdjustSampleDistances)
    .function("GetAutoAdjustSampleDistancesMinValue", &vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue)
    .function("GetAutoAdjustSampleDistancesMaxValue", &vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue)
    .function("GetAutoAdjustSampleDistances", &vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistances)
    .function("AutoAdjustSampleDistancesOn", &vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOn)
    .function("AutoAdjustSampleDistancesOff", &vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOff)
    .function("SetLockSampleDistanceToInputSpacing", &vtkGPUVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing)
    .function("GetLockSampleDistanceToInputSpacingMinValue", &vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue)
    .function("GetLockSampleDistanceToInputSpacingMaxValue", &vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue)
    .function("GetLockSampleDistanceToInputSpacing", &vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing)
    .function("LockSampleDistanceToInputSpacingOn", &vtkGPUVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn)
    .function("LockSampleDistanceToInputSpacingOff", &vtkGPUVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff)
    .function("SetUseJittering", &vtkGPUVolumeRayCastMapper::SetUseJittering)
    .function("GetUseJitteringMinValue", &vtkGPUVolumeRayCastMapper::GetUseJitteringMinValue)
    .function("GetUseJitteringMaxValue", &vtkGPUVolumeRayCastMapper::GetUseJitteringMaxValue)
    .function("GetUseJittering", &vtkGPUVolumeRayCastMapper::GetUseJittering)
    .function("UseJitteringOn", &vtkGPUVolumeRayCastMapper::UseJitteringOn)
    .function("UseJitteringOff", &vtkGPUVolumeRayCastMapper::UseJitteringOff)
    .function("SetUseDepthPass", &vtkGPUVolumeRayCastMapper::SetUseDepthPass)
    .function("GetUseDepthPassMinValue", &vtkGPUVolumeRayCastMapper::GetUseDepthPassMinValue)
    .function("GetUseDepthPassMaxValue", &vtkGPUVolumeRayCastMapper::GetUseDepthPassMaxValue)
    .function("GetUseDepthPass", &vtkGPUVolumeRayCastMapper::GetUseDepthPass)
    .function("UseDepthPassOn", &vtkGPUVolumeRayCastMapper::UseDepthPassOn)
    .function("UseDepthPassOff", &vtkGPUVolumeRayCastMapper::UseDepthPassOff)
    .function("GetDepthPassContourValues", &vtkGPUVolumeRayCastMapper::GetDepthPassContourValues, emscripten::allow_raw_pointers())
    .function("SetSampleDistance", &vtkGPUVolumeRayCastMapper::SetSampleDistance)
    .function("GetSampleDistance", &vtkGPUVolumeRayCastMapper::GetSampleDistance)
    .function("SetImageSampleDistance", &vtkGPUVolumeRayCastMapper::SetImageSampleDistance)
    .function("GetImageSampleDistanceMinValue", &vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMinValue)
    .function("GetImageSampleDistanceMaxValue", &vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMaxValue)
    .function("GetImageSampleDistance", &vtkGPUVolumeRayCastMapper::GetImageSampleDistance)
    .function("SetMinimumImageSampleDistance", &vtkGPUVolumeRayCastMapper::SetMinimumImageSampleDistance)
    .function("GetMinimumImageSampleDistanceMinValue", &vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue)
    .function("GetMinimumImageSampleDistanceMaxValue", &vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue)
    .function("GetMinimumImageSampleDistance", &vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistance)
    .function("SetMaximumImageSampleDistance", &vtkGPUVolumeRayCastMapper::SetMaximumImageSampleDistance)
    .function("GetMaximumImageSampleDistanceMinValue", &vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue)
    .function("GetMaximumImageSampleDistanceMaxValue", &vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue)
    .function("GetMaximumImageSampleDistance", &vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistance)
    .function("SetFinalColorWindow", &vtkGPUVolumeRayCastMapper::SetFinalColorWindow)
    .function("GetFinalColorWindow", &vtkGPUVolumeRayCastMapper::GetFinalColorWindow)
    .function("SetFinalColorLevel", &vtkGPUVolumeRayCastMapper::SetFinalColorLevel)
    .function("GetFinalColorLevel", &vtkGPUVolumeRayCastMapper::GetFinalColorLevel)
    .function("SetMaxMemoryInBytes", &vtkGPUVolumeRayCastMapper::SetMaxMemoryInBytes)
    .function("GetMaxMemoryInBytes", &vtkGPUVolumeRayCastMapper::GetMaxMemoryInBytes)
    .function("SetMaxMemoryFraction", &vtkGPUVolumeRayCastMapper::SetMaxMemoryFraction)
    .function("GetMaxMemoryFractionMinValue", &vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMinValue)
    .function("GetMaxMemoryFractionMaxValue", &vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMaxValue)
    .function("GetMaxMemoryFraction", &vtkGPUVolumeRayCastMapper::GetMaxMemoryFraction)
    .function("SetReportProgress", &vtkGPUVolumeRayCastMapper::SetReportProgress)
    .function("GetReportProgress", &vtkGPUVolumeRayCastMapper::GetReportProgress)
    .function("IsRenderSupported", &vtkGPUVolumeRayCastMapper::IsRenderSupported, emscripten::allow_raw_pointers())
    .function("SetMaskInput", &vtkGPUVolumeRayCastMapper::SetMaskInput, emscripten::allow_raw_pointers())
    .function("GetMaskInput", &vtkGPUVolumeRayCastMapper::GetMaskInput, emscripten::allow_raw_pointers())
    .function("SetMaskType", &vtkGPUVolumeRayCastMapper::SetMaskType)
    .function("GetMaskType", &vtkGPUVolumeRayCastMapper::GetMaskType)
    .function("SetMaskTypeToBinary", &vtkGPUVolumeRayCastMapper::SetMaskTypeToBinary)
    .function("SetMaskTypeToLabelMap", &vtkGPUVolumeRayCastMapper::SetMaskTypeToLabelMap)
    .function("SetMaskBlendFactor", &vtkGPUVolumeRayCastMapper::SetMaskBlendFactor)
    .function("GetMaskBlendFactorMinValue", &vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMinValue)
    .function("GetMaskBlendFactorMaxValue", &vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMaxValue)
    .function("GetMaskBlendFactor", &vtkGPUVolumeRayCastMapper::GetMaskBlendFactor)
    .function("SetGlobalIlluminationReach", &vtkGPUVolumeRayCastMapper::SetGlobalIlluminationReach)
    .function("GetGlobalIlluminationReachMinValue", &vtkGPUVolumeRayCastMapper::GetGlobalIlluminationReachMinValue)
    .function("GetGlobalIlluminationReachMaxValue", &vtkGPUVolumeRayCastMapper::GetGlobalIlluminationReachMaxValue)
    .function("GetGlobalIlluminationReach", &vtkGPUVolumeRayCastMapper::GetGlobalIlluminationReach)
    .function("SetVolumetricScatteringBlending", &vtkGPUVolumeRayCastMapper::SetVolumetricScatteringBlending)
    .function("GetVolumetricScatteringBlendingMinValue", &vtkGPUVolumeRayCastMapper::GetVolumetricScatteringBlendingMinValue)
    .function("GetVolumetricScatteringBlendingMaxValue", &vtkGPUVolumeRayCastMapper::GetVolumetricScatteringBlendingMaxValue)
    .function("GetVolumetricScatteringBlending", &vtkGPUVolumeRayCastMapper::GetVolumetricScatteringBlending)
    .function("SetRenderToImage", &vtkGPUVolumeRayCastMapper::SetRenderToImage)
    .function("GetRenderToImage", &vtkGPUVolumeRayCastMapper::GetRenderToImage)
    .function("RenderToImageOn", &vtkGPUVolumeRayCastMapper::RenderToImageOn)
    .function("RenderToImageOff", &vtkGPUVolumeRayCastMapper::RenderToImageOff)
    .function("SetDepthImageScalarType", &vtkGPUVolumeRayCastMapper::SetDepthImageScalarType)
    .function("GetDepthImageScalarType", &vtkGPUVolumeRayCastMapper::GetDepthImageScalarType)
    .function("SetDepthImageScalarTypeToUnsignedChar", &vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToUnsignedChar)
    .function("SetDepthImageScalarTypeToUnsignedShort", &vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToUnsignedShort)
    .function("SetDepthImageScalarTypeToFloat", &vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToFloat)
    .function("SetClampDepthToBackface", &vtkGPUVolumeRayCastMapper::SetClampDepthToBackface)
    .function("GetClampDepthToBackface", &vtkGPUVolumeRayCastMapper::GetClampDepthToBackface)
    .function("ClampDepthToBackfaceOn", &vtkGPUVolumeRayCastMapper::ClampDepthToBackfaceOn)
    .function("ClampDepthToBackfaceOff", &vtkGPUVolumeRayCastMapper::ClampDepthToBackfaceOff)
    .function("GetDepthImage", &vtkGPUVolumeRayCastMapper::GetDepthImage, emscripten::allow_raw_pointers())
    .function("GetColorImage", &vtkGPUVolumeRayCastMapper::GetColorImage, emscripten::allow_raw_pointers())
    .function("Render", &vtkGPUVolumeRayCastMapper::Render, emscripten::allow_raw_pointers())
    .function("GPURender", &vtkGPUVolumeRayCastMapper::GPURender, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkGPUVolumeRayCastMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetColorRangeType", &vtkGPUVolumeRayCastMapper::SetColorRangeType)
    .function("GetColorRangeType", &vtkGPUVolumeRayCastMapper::GetColorRangeType)
    .function("SetScalarOpacityRangeType", &vtkGPUVolumeRayCastMapper::SetScalarOpacityRangeType)
    .function("GetScalarOpacityRangeType", &vtkGPUVolumeRayCastMapper::GetScalarOpacityRangeType)
    .function("SetGradientOpacityRangeType", &vtkGPUVolumeRayCastMapper::SetGradientOpacityRangeType)
    .function("GetGradientOpacityRangeType", &vtkGPUVolumeRayCastMapper::GetGradientOpacityRangeType)
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkGPUVolumeRayCastMapper&)>([](vtkGPUVolumeRayCastMapper& self) -> vtkDataSet* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("RemoveInputConnection", emscripten::select_overload<void(vtkGPUVolumeRayCastMapper&, int, vtkAlgorithmOutput*)>([](vtkGPUVolumeRayCastMapper& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.RemoveInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveInputConnection", emscripten::select_overload<void(vtkGPUVolumeRayCastMapper&, int, int)>([](vtkGPUVolumeRayCastMapper& self, int arg_0, int arg_1) -> void { return self.RemoveInputConnection( arg_0, arg_1); }))
    .function("SetInputConnection", emscripten::select_overload<void(vtkGPUVolumeRayCastMapper&, int, vtkAlgorithmOutput*)>([](vtkGPUVolumeRayCastMapper& self, int arg_0, vtkAlgorithmOutput* arg_1) -> void { return self.SetInputConnection( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputConnection", emscripten::select_overload<void(vtkGPUVolumeRayCastMapper&, vtkAlgorithmOutput*)>([](vtkGPUVolumeRayCastMapper& self, vtkAlgorithmOutput* arg_0) -> void { return self.SetInputConnection( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInputCount", &vtkGPUVolumeRayCastMapper::GetInputCount)
    .function("GetTransformedInput", &vtkGPUVolumeRayCastMapper::GetTransformedInput, emscripten::allow_raw_pointers())
    .function("SetTransfer2DYAxisArray", emscripten::optional_override([](vtkGPUVolumeRayCastMapper& self, const std::string & arg_0) -> void {  return self.SetTransfer2DYAxisArray( arg_0.c_str());}))
    .function("GetTransfer2DYAxisArray", emscripten::optional_override([](vtkGPUVolumeRayCastMapper& self) -> std::string {  return self.GetTransfer2DYAxisArray();}));
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkGPUVolumeRayCastMapper_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkGPUVolumeRayCastMapper_BinaryMaskType", vtkGPUVolumeRayCastMapper::BinaryMaskType },
      { "vtkGPUVolumeRayCastMapper_LabelMapMaskType", vtkGPUVolumeRayCastMapper::LabelMapMaskType },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkGPUVolumeRayCastMapper_1_2_constants) {
    typedef vtkGPUVolumeRayCastMapper::TFRangeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkGPUVolumeRayCastMapper_TFRangeType_SCALAR", vtkGPUVolumeRayCastMapper::SCALAR },
      { "vtkGPUVolumeRayCastMapper_TFRangeType_NATIVE", vtkGPUVolumeRayCastMapper::NATIVE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

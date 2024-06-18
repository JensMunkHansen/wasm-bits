// JavaScript wrapper for vtkSmartVolumeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkSmartVolumeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkSmartVolumeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkImageData.h"
#include "vtkWindow.h"
#include "vtkSmartVolumeMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolumeOpenGL2_vtkSmartVolumeMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSmartVolumeMapper>(vtkSmartVolumeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSmartVolumeMapper_class) {
  using VectorModeType=vtkSmartVolumeMapper::VectorModeType;
  using LowResModeType=vtkSmartVolumeMapper::LowResModeType;
  emscripten::class_<vtkSmartVolumeMapper, emscripten::base<vtkVolumeMapper>>("vtkSmartVolumeMapper")
    .smart_ptr<vtkSmartPointer<vtkSmartVolumeMapper>>("vtkSmartPointer<vtkSmartVolumeMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSmartVolumeMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSmartVolumeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSmartVolumeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSmartVolumeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSmartVolumeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSmartVolumeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSmartVolumeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFinalColorWindow", &vtkSmartVolumeMapper::SetFinalColorWindow)
    .function("GetFinalColorWindow", &vtkSmartVolumeMapper::GetFinalColorWindow)
    .function("SetFinalColorLevel", &vtkSmartVolumeMapper::SetFinalColorLevel)
    .function("GetFinalColorLevel", &vtkSmartVolumeMapper::GetFinalColorLevel)
    .function("SetRequestedRenderMode", &vtkSmartVolumeMapper::SetRequestedRenderMode)
    .function("SetRequestedRenderModeToDefault", &vtkSmartVolumeMapper::SetRequestedRenderModeToDefault)
    .function("SetRequestedRenderModeToRayCast", &vtkSmartVolumeMapper::SetRequestedRenderModeToRayCast)
    .function("SetRequestedRenderModeToGPU", &vtkSmartVolumeMapper::SetRequestedRenderModeToGPU)
    .function("SetRequestedRenderModeToOSPRay", &vtkSmartVolumeMapper::SetRequestedRenderModeToOSPRay)
    .function("SetRequestedRenderModeToAnari", &vtkSmartVolumeMapper::SetRequestedRenderModeToAnari)
    .function("GetRequestedRenderMode", &vtkSmartVolumeMapper::GetRequestedRenderMode)
    .function("GetLastUsedRenderMode", &vtkSmartVolumeMapper::GetLastUsedRenderMode)
    .function("SetMaxMemoryInBytes", &vtkSmartVolumeMapper::SetMaxMemoryInBytes)
    .function("GetMaxMemoryInBytes", &vtkSmartVolumeMapper::GetMaxMemoryInBytes)
    .function("SetMaxMemoryFraction", &vtkSmartVolumeMapper::SetMaxMemoryFraction)
    .function("GetMaxMemoryFractionMinValue", &vtkSmartVolumeMapper::GetMaxMemoryFractionMinValue)
    .function("GetMaxMemoryFractionMaxValue", &vtkSmartVolumeMapper::GetMaxMemoryFractionMaxValue)
    .function("GetMaxMemoryFraction", &vtkSmartVolumeMapper::GetMaxMemoryFraction)
    .function("SetInterpolationMode", &vtkSmartVolumeMapper::SetInterpolationMode)
    .function("GetInterpolationModeMinValue", &vtkSmartVolumeMapper::GetInterpolationModeMinValue)
    .function("GetInterpolationModeMaxValue", &vtkSmartVolumeMapper::GetInterpolationModeMaxValue)
    .function("GetInterpolationMode", &vtkSmartVolumeMapper::GetInterpolationMode)
    .function("SetInterpolationModeToNearestNeighbor", &vtkSmartVolumeMapper::SetInterpolationModeToNearestNeighbor)
    .function("SetInterpolationModeToLinear", &vtkSmartVolumeMapper::SetInterpolationModeToLinear)
    .function("SetInterpolationModeToCubic", &vtkSmartVolumeMapper::SetInterpolationModeToCubic)
    .function("SetUseJittering", &vtkSmartVolumeMapper::SetUseJittering)
    .function("GetUseJitteringMinValue", &vtkSmartVolumeMapper::GetUseJitteringMinValue)
    .function("GetUseJitteringMaxValue", &vtkSmartVolumeMapper::GetUseJitteringMaxValue)
    .function("GetUseJittering", &vtkSmartVolumeMapper::GetUseJittering)
    .function("UseJitteringOn", &vtkSmartVolumeMapper::UseJitteringOn)
    .function("UseJitteringOff", &vtkSmartVolumeMapper::UseJitteringOff)
    .function("SetInteractiveUpdateRate", &vtkSmartVolumeMapper::SetInteractiveUpdateRate)
    .function("GetInteractiveUpdateRateMinValue", &vtkSmartVolumeMapper::GetInteractiveUpdateRateMinValue)
    .function("GetInteractiveUpdateRateMaxValue", &vtkSmartVolumeMapper::GetInteractiveUpdateRateMaxValue)
    .function("GetInteractiveUpdateRate", &vtkSmartVolumeMapper::GetInteractiveUpdateRate)
    .function("SetInteractiveAdjustSampleDistances", &vtkSmartVolumeMapper::SetInteractiveAdjustSampleDistances)
    .function("GetInteractiveAdjustSampleDistancesMinValue", &vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistancesMinValue)
    .function("GetInteractiveAdjustSampleDistancesMaxValue", &vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistancesMaxValue)
    .function("GetInteractiveAdjustSampleDistances", &vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistances)
    .function("InteractiveAdjustSampleDistancesOn", &vtkSmartVolumeMapper::InteractiveAdjustSampleDistancesOn)
    .function("InteractiveAdjustSampleDistancesOff", &vtkSmartVolumeMapper::InteractiveAdjustSampleDistancesOff)
    .function("SetAutoAdjustSampleDistances", &vtkSmartVolumeMapper::SetAutoAdjustSampleDistances)
    .function("GetAutoAdjustSampleDistancesMinValue", &vtkSmartVolumeMapper::GetAutoAdjustSampleDistancesMinValue)
    .function("GetAutoAdjustSampleDistancesMaxValue", &vtkSmartVolumeMapper::GetAutoAdjustSampleDistancesMaxValue)
    .function("GetAutoAdjustSampleDistances", &vtkSmartVolumeMapper::GetAutoAdjustSampleDistances)
    .function("AutoAdjustSampleDistancesOn", &vtkSmartVolumeMapper::AutoAdjustSampleDistancesOn)
    .function("AutoAdjustSampleDistancesOff", &vtkSmartVolumeMapper::AutoAdjustSampleDistancesOff)
    .function("SetSampleDistance", &vtkSmartVolumeMapper::SetSampleDistance)
    .function("GetSampleDistance", &vtkSmartVolumeMapper::GetSampleDistance)
    .function("SetGlobalIlluminationReach", &vtkSmartVolumeMapper::SetGlobalIlluminationReach)
    .function("GetGlobalIlluminationReachMinValue", &vtkSmartVolumeMapper::GetGlobalIlluminationReachMinValue)
    .function("GetGlobalIlluminationReachMaxValue", &vtkSmartVolumeMapper::GetGlobalIlluminationReachMaxValue)
    .function("GetGlobalIlluminationReach", &vtkSmartVolumeMapper::GetGlobalIlluminationReach)
    .function("SetVolumetricScatteringBlending", &vtkSmartVolumeMapper::SetVolumetricScatteringBlending)
    .function("GetVolumetricScatteringBlendingMinValue", &vtkSmartVolumeMapper::GetVolumetricScatteringBlendingMinValue)
    .function("GetVolumetricScatteringBlendingMaxValue", &vtkSmartVolumeMapper::GetVolumetricScatteringBlendingMaxValue)
    .function("GetVolumetricScatteringBlending", &vtkSmartVolumeMapper::GetVolumetricScatteringBlending)
    .function("Render", &vtkSmartVolumeMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkSmartVolumeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetVectorMode", &vtkSmartVolumeMapper::SetVectorMode)
    .function("GetVectorMode", &vtkSmartVolumeMapper::GetVectorMode)
    .function("SetVectorComponent", &vtkSmartVolumeMapper::SetVectorComponent)
    .function("GetVectorComponentMinValue", &vtkSmartVolumeMapper::GetVectorComponentMinValue)
    .function("GetVectorComponentMaxValue", &vtkSmartVolumeMapper::GetVectorComponentMaxValue)
    .function("GetVectorComponent", &vtkSmartVolumeMapper::GetVectorComponent)
    .function("SetTransfer2DYAxisArray", emscripten::optional_override([](vtkSmartVolumeMapper& self, const std::string & arg_0) -> void {  return self.SetTransfer2DYAxisArray( arg_0.c_str());}))
    .function("GetTransfer2DYAxisArray", emscripten::optional_override([](vtkSmartVolumeMapper& self) -> std::string {  return self.GetTransfer2DYAxisArray();}))
    .function("SetLowResMode", &vtkSmartVolumeMapper::SetLowResMode)
    .function("GetLowResMode", &vtkSmartVolumeMapper::GetLowResMode);
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolumeOpenGL2_vtkSmartVolumeMapper_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkSmartVolumeMapper_DefaultRenderMode", vtkSmartVolumeMapper::DefaultRenderMode },
      { "vtkSmartVolumeMapper_RayCastRenderMode", vtkSmartVolumeMapper::RayCastRenderMode },
      { "vtkSmartVolumeMapper_GPURenderMode", vtkSmartVolumeMapper::GPURenderMode },
      { "vtkSmartVolumeMapper_OSPRayRenderMode", vtkSmartVolumeMapper::OSPRayRenderMode },
      { "vtkSmartVolumeMapper_AnariRenderMode", vtkSmartVolumeMapper::AnariRenderMode },
      { "vtkSmartVolumeMapper_UndefinedRenderMode", vtkSmartVolumeMapper::UndefinedRenderMode },
      { "vtkSmartVolumeMapper_InvalidRenderMode", vtkSmartVolumeMapper::InvalidRenderMode },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolumeOpenGL2_vtkSmartVolumeMapper_1_2_constants) {
    typedef vtkSmartVolumeMapper::VectorModeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSmartVolumeMapper_VectorModeType_DISABLED", vtkSmartVolumeMapper::DISABLED },
      { "vtkSmartVolumeMapper_VectorModeType_MAGNITUDE", vtkSmartVolumeMapper::MAGNITUDE },
      { "vtkSmartVolumeMapper_VectorModeType_COMPONENT", vtkSmartVolumeMapper::COMPONENT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolumeOpenGL2_vtkSmartVolumeMapper_2_2_constants) {
    typedef vtkSmartVolumeMapper::LowResModeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkSmartVolumeMapper_LowResModeType_LowResModeDisabled", vtkSmartVolumeMapper::LowResModeDisabled },
      { "vtkSmartVolumeMapper_LowResModeType_LowResModeResample", vtkSmartVolumeMapper::LowResModeResample },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

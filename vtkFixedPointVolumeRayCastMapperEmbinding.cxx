// JavaScript wrapper for vtkFixedPointVolumeRayCastMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkFixedPointVolumeRayCastMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkFixedPointVolumeRayCastMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkRenderWindow.h"
#include "vtkFixedPointVolumeRayCastMIPHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeGOHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
#include "vtkDataArray.h"
#include "vtkFixedPointRayCastImage.h"
#include "vtkImageData.h"
#include "vtkWindow.h"
#include "vtkFixedPointVolumeRayCastMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkFixedPointVolumeRayCastMapper_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTKKW_FP_SHIFT", 15 },
      { "VTKKW_FPMM_SHIFT", 17 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkFixedPointVolumeRayCastMapper_1_1_constants) {
  emscripten::constant("VTKKW_FP_MASK", 0x7fff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkFixedPointVolumeRayCastMapper_2_1_constants) {
  emscripten::constant("VTKKW_FP_SCALE", 32767.0);
}
template<> void emscripten::internal::raw_destructor<vtkFixedPointVolumeRayCastMapper>(vtkFixedPointVolumeRayCastMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedPointVolumeRayCastMapper_class) {
  emscripten::class_<vtkFixedPointVolumeRayCastMapper, emscripten::base<vtkVolumeMapper>>("vtkFixedPointVolumeRayCastMapper")
    .smart_ptr<vtkSmartPointer<vtkFixedPointVolumeRayCastMapper>>("vtkSmartPointer<vtkFixedPointVolumeRayCastMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFixedPointVolumeRayCastMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedPointVolumeRayCastMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedPointVolumeRayCastMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedPointVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDistance", &vtkFixedPointVolumeRayCastMapper::SetSampleDistance)
    .function("GetSampleDistance", &vtkFixedPointVolumeRayCastMapper::GetSampleDistance)
    .function("SetInteractiveSampleDistance", &vtkFixedPointVolumeRayCastMapper::SetInteractiveSampleDistance)
    .function("GetInteractiveSampleDistance", &vtkFixedPointVolumeRayCastMapper::GetInteractiveSampleDistance)
    .function("SetImageSampleDistance", &vtkFixedPointVolumeRayCastMapper::SetImageSampleDistance)
    .function("GetImageSampleDistanceMinValue", &vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMinValue)
    .function("GetImageSampleDistanceMaxValue", &vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMaxValue)
    .function("GetImageSampleDistance", &vtkFixedPointVolumeRayCastMapper::GetImageSampleDistance)
    .function("SetMinimumImageSampleDistance", &vtkFixedPointVolumeRayCastMapper::SetMinimumImageSampleDistance)
    .function("GetMinimumImageSampleDistanceMinValue", &vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue)
    .function("GetMinimumImageSampleDistanceMaxValue", &vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue)
    .function("GetMinimumImageSampleDistance", &vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistance)
    .function("SetMaximumImageSampleDistance", &vtkFixedPointVolumeRayCastMapper::SetMaximumImageSampleDistance)
    .function("GetMaximumImageSampleDistanceMinValue", &vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue)
    .function("GetMaximumImageSampleDistanceMaxValue", &vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue)
    .function("GetMaximumImageSampleDistance", &vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistance)
    .function("SetAutoAdjustSampleDistances", &vtkFixedPointVolumeRayCastMapper::SetAutoAdjustSampleDistances)
    .function("GetAutoAdjustSampleDistancesMinValue", &vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue)
    .function("GetAutoAdjustSampleDistancesMaxValue", &vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue)
    .function("GetAutoAdjustSampleDistances", &vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistances)
    .function("AutoAdjustSampleDistancesOn", &vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOn)
    .function("AutoAdjustSampleDistancesOff", &vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOff)
    .function("SetLockSampleDistanceToInputSpacing", &vtkFixedPointVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing)
    .function("GetLockSampleDistanceToInputSpacingMinValue", &vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue)
    .function("GetLockSampleDistanceToInputSpacingMaxValue", &vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue)
    .function("GetLockSampleDistanceToInputSpacing", &vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing)
    .function("LockSampleDistanceToInputSpacingOn", &vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn)
    .function("LockSampleDistanceToInputSpacingOff", &vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff)
    .function("SetNumberOfThreads", &vtkFixedPointVolumeRayCastMapper::SetNumberOfThreads)
    .function("GetNumberOfThreads", &vtkFixedPointVolumeRayCastMapper::GetNumberOfThreads)
    .function("SetIntermixIntersectingGeometry", &vtkFixedPointVolumeRayCastMapper::SetIntermixIntersectingGeometry)
    .function("GetIntermixIntersectingGeometryMinValue", &vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue)
    .function("GetIntermixIntersectingGeometryMaxValue", &vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue)
    .function("GetIntermixIntersectingGeometry", &vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometry)
    .function("IntermixIntersectingGeometryOn", &vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOn)
    .function("IntermixIntersectingGeometryOff", &vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOff)
    .function("ComputeRequiredImageSampleDistance", emscripten::select_overload<float(vtkFixedPointVolumeRayCastMapper&, float, vtkRenderer*)>([](vtkFixedPointVolumeRayCastMapper& self, float arg_0, vtkRenderer* arg_1) -> float { return self.ComputeRequiredImageSampleDistance( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ComputeRequiredImageSampleDistance", emscripten::select_overload<float(vtkFixedPointVolumeRayCastMapper&, float, vtkRenderer*, vtkVolume*)>([](vtkFixedPointVolumeRayCastMapper& self, float arg_0, vtkRenderer* arg_1, vtkVolume* arg_2) -> float { return self.ComputeRequiredImageSampleDistance( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Render", &vtkFixedPointVolumeRayCastMapper::Render, emscripten::allow_raw_pointers())
    .function("ToFixedPointPosition", emscripten::select_overload<unsigned int(vtkFixedPointVolumeRayCastMapper&, float)>([](vtkFixedPointVolumeRayCastMapper& self, float arg_0) -> unsigned int { return self.ToFixedPointPosition( arg_0); }))
    .function("ToFixedPointDirection", emscripten::select_overload<unsigned int(vtkFixedPointVolumeRayCastMapper&, float)>([](vtkFixedPointVolumeRayCastMapper& self, float arg_0) -> unsigned int { return self.ToFixedPointDirection( arg_0); }))
    .function("GetRenderWindow", &vtkFixedPointVolumeRayCastMapper::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetMIPHelper", &vtkFixedPointVolumeRayCastMapper::GetMIPHelper, emscripten::allow_raw_pointers())
    .function("GetCompositeHelper", &vtkFixedPointVolumeRayCastMapper::GetCompositeHelper, emscripten::allow_raw_pointers())
    .function("GetCompositeGOHelper", &vtkFixedPointVolumeRayCastMapper::GetCompositeGOHelper, emscripten::allow_raw_pointers())
    .function("GetCompositeGOShadeHelper", &vtkFixedPointVolumeRayCastMapper::GetCompositeGOShadeHelper, emscripten::allow_raw_pointers())
    .function("GetCompositeShadeHelper", &vtkFixedPointVolumeRayCastMapper::GetCompositeShadeHelper, emscripten::allow_raw_pointers())
    .function("GetShadingRequired", &vtkFixedPointVolumeRayCastMapper::GetShadingRequired)
    .function("GetGradientOpacityRequired", &vtkFixedPointVolumeRayCastMapper::GetGradientOpacityRequired)
    .function("GetCurrentScalars", &vtkFixedPointVolumeRayCastMapper::GetCurrentScalars, emscripten::allow_raw_pointers())
    .function("GetPreviousScalars", &vtkFixedPointVolumeRayCastMapper::GetPreviousScalars, emscripten::allow_raw_pointers())
    .function("GetRowBounds", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetRowBounds()) / sizeof(int);}))
    .function("GetColorTable", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetColorTable( arg_0)) / sizeof(unsigned short);}))
    .function("GetScalarOpacityTable", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetScalarOpacityTable( arg_0)) / sizeof(unsigned short);}))
    .function("GetGradientOpacityTable", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGradientOpacityTable( arg_0)) / sizeof(unsigned short);}))
    .function("GetVolume", &vtkFixedPointVolumeRayCastMapper::GetVolume, emscripten::allow_raw_pointers())
    .function("GetDiffuseShadingTable", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDiffuseShadingTable( arg_0)) / sizeof(unsigned short);}))
    .function("GetSpecularShadingTable", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSpecularShadingTable( arg_0)) / sizeof(unsigned short);}))
    .function("InitializeRayInfo", &vtkFixedPointVolumeRayCastMapper::InitializeRayInfo, emscripten::allow_raw_pointers())
    .function("ShouldUseNearestNeighborInterpolation", &vtkFixedPointVolumeRayCastMapper::ShouldUseNearestNeighborInterpolation, emscripten::allow_raw_pointers())
    .function("SetRayCastImage", &vtkFixedPointVolumeRayCastMapper::SetRayCastImage, emscripten::allow_raw_pointers())
    .function("GetRayCastImage", &vtkFixedPointVolumeRayCastMapper::GetRayCastImage, emscripten::allow_raw_pointers())
    .function("PerImageInitialization", emscripten::optional_override([](vtkFixedPointVolumeRayCastMapper& self, vtkRenderer* arg_0, vtkVolume* arg_1, int arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> int {  return self.PerImageInitialization( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double)),reinterpret_cast<int*>(arg_5 * sizeof(int)));}), emscripten::allow_raw_pointers())
    .function("PerVolumeInitialization", &vtkFixedPointVolumeRayCastMapper::PerVolumeInitialization, emscripten::allow_raw_pointers())
    .function("PerSubVolumeInitialization", &vtkFixedPointVolumeRayCastMapper::PerSubVolumeInitialization, emscripten::allow_raw_pointers())
    .function("RenderSubVolume", &vtkFixedPointVolumeRayCastMapper::RenderSubVolume)
    .function("DisplayRenderedImage", &vtkFixedPointVolumeRayCastMapper::DisplayRenderedImage, emscripten::allow_raw_pointers())
    .function("AbortRender", &vtkFixedPointVolumeRayCastMapper::AbortRender)
    .function("GetEstimatedRenderTime", emscripten::select_overload<float(vtkFixedPointVolumeRayCastMapper&, vtkRenderer*, vtkVolume*)>([](vtkFixedPointVolumeRayCastMapper& self, vtkRenderer* arg_0, vtkVolume* arg_1) -> float { return self.GetEstimatedRenderTime( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetEstimatedRenderTime", emscripten::select_overload<float(vtkFixedPointVolumeRayCastMapper&, vtkRenderer*)>([](vtkFixedPointVolumeRayCastMapper& self, vtkRenderer* arg_0) -> float { return self.GetEstimatedRenderTime( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetFinalColorWindow", &vtkFixedPointVolumeRayCastMapper::SetFinalColorWindow)
    .function("GetFinalColorWindow", &vtkFixedPointVolumeRayCastMapper::GetFinalColorWindow)
    .function("SetFinalColorLevel", &vtkFixedPointVolumeRayCastMapper::SetFinalColorLevel)
    .function("GetFinalColorLevel", &vtkFixedPointVolumeRayCastMapper::GetFinalColorLevel)
    .function("GetFlipMIPComparison", &vtkFixedPointVolumeRayCastMapper::GetFlipMIPComparison)
    .function("ReleaseGraphicsResources", &vtkFixedPointVolumeRayCastMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

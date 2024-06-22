// JavaScript wrapper for vtkVolumeRayCastSpaceLeapingImageFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkVolumeRayCastSpaceLeapingImageFilterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkVolumeRayCastSpaceLeapingImageFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkImageData.h"
#include "vtkVolumeRayCastSpaceLeapingImageFilter.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeRayCastSpaceLeapingImageFilter>(vtkVolumeRayCastSpaceLeapingImageFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeRayCastSpaceLeapingImageFilter_class) {
  emscripten::class_<vtkVolumeRayCastSpaceLeapingImageFilter, emscripten::base<vtkThreadedImageAlgorithm>>("vtkVolumeRayCastSpaceLeapingImageFilter")
    .smart_ptr<vtkSmartPointer<vtkVolumeRayCastSpaceLeapingImageFilter>>("vtkSmartPointer<vtkVolumeRayCastSpaceLeapingImageFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumeRayCastSpaceLeapingImageFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeRayCastSpaceLeapingImageFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeRayCastSpaceLeapingImageFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeRayCastSpaceLeapingImageFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeRayCastSpaceLeapingImageFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeRayCastSpaceLeapingImageFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCurrentScalars", &vtkVolumeRayCastSpaceLeapingImageFilter::SetCurrentScalars, emscripten::allow_raw_pointers())
    .function("GetCurrentScalars", &vtkVolumeRayCastSpaceLeapingImageFilter::GetCurrentScalars, emscripten::allow_raw_pointers())
    .function("SetIndependentComponents", &vtkVolumeRayCastSpaceLeapingImageFilter::SetIndependentComponents)
    .function("GetIndependentComponents", &vtkVolumeRayCastSpaceLeapingImageFilter::GetIndependentComponents)
    .function("SetComputeGradientOpacity", &vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeGradientOpacity)
    .function("GetComputeGradientOpacity", &vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeGradientOpacity)
    .function("ComputeGradientOpacityOn", &vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOn)
    .function("ComputeGradientOpacityOff", &vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOff)
    .function("SetComputeMinMax", &vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeMinMax)
    .function("GetComputeMinMax", &vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeMinMax)
    .function("ComputeMinMaxOn", &vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOn)
    .function("ComputeMinMaxOff", &vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOff)
    .function("SetUpdateGradientOpacityFlags", &vtkVolumeRayCastSpaceLeapingImageFilter::SetUpdateGradientOpacityFlags)
    .function("GetUpdateGradientOpacityFlags", &vtkVolumeRayCastSpaceLeapingImageFilter::GetUpdateGradientOpacityFlags)
    .function("UpdateGradientOpacityFlagsOn", &vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOn)
    .function("UpdateGradientOpacityFlagsOff", &vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOff)
    .function("GetLastMinMaxBuildTime", &vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxBuildTime)
    .function("GetLastMinMaxFlagTime", &vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxFlagTime)
    .function("SetTableShift", emscripten::select_overload<void(vtkVolumeRayCastSpaceLeapingImageFilter&, float, float, float, float)>([](vtkVolumeRayCastSpaceLeapingImageFilter& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.SetTableShift( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetTableScale", emscripten::select_overload<void(vtkVolumeRayCastSpaceLeapingImageFilter&, float, float, float, float)>([](vtkVolumeRayCastSpaceLeapingImageFilter& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.SetTableScale( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetTableSize", emscripten::select_overload<void(vtkVolumeRayCastSpaceLeapingImageFilter&, int, int, int, int)>([](vtkVolumeRayCastSpaceLeapingImageFilter& self, int arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetTableSize( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetNumberOfIndependentComponents", &vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfIndependentComponents)
    .function("SetCache", &vtkVolumeRayCastSpaceLeapingImageFilter::SetCache, emscripten::allow_raw_pointers())
    .function("GetMinNonZeroScalarIndex", emscripten::optional_override([](vtkVolumeRayCastSpaceLeapingImageFilter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMinNonZeroScalarIndex()) / sizeof(unsigned short);}))
    .function("GetMinNonZeroGradientMagnitudeIndex", emscripten::optional_override([](vtkVolumeRayCastSpaceLeapingImageFilter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetMinNonZeroGradientMagnitudeIndex()) / sizeof(unsigned char);}))
    .function("SetScalarOpacityTable", emscripten::optional_override([](vtkVolumeRayCastSpaceLeapingImageFilter& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetScalarOpacityTable( arg_0,reinterpret_cast<unsigned short*>(arg_1 * sizeof(unsigned short)));}))
    .function("SetGradientOpacityTable", emscripten::optional_override([](vtkVolumeRayCastSpaceLeapingImageFilter& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetGradientOpacityTable( arg_0,reinterpret_cast<unsigned short*>(arg_1 * sizeof(unsigned short)));}));
}

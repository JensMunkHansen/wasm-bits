// JavaScript wrapper for vtkVolumeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkVolumeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkVolumeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataSet.h"
#include "vtkRectilinearGrid.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkVolumeMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkVolumeMapper_0_1_constants) {
  const struct { const char *name; unsigned int value; }
    constants[4] = {
      { "VTK_CROP_SUBVOLUME", 0x0002000 },
      { "VTK_CROP_FENCE", 0x2ebfeba },
      { "VTK_CROP_INVERTED_FENCE", 0x5140145 },
      { "VTK_CROP_CROSS", 0x0417410 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkVolumeMapper_1_1_constants) {
  emscripten::constant("VTK_CROP_INVERTED_CROSS", 0x7be8bef);
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkVolumeMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkVolumeMapper>(vtkVolumeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeMapper_class) {
  using BlendModes=vtkVolumeMapper::BlendModes;
  emscripten::class_<vtkVolumeMapper, emscripten::base<vtkAbstractVolumeMapper>>("vtkVolumeMapper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", emscripten::select_overload<void(vtkVolumeMapper&, vtkImageData*)>([](vtkVolumeMapper& self, vtkImageData* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkVolumeMapper&, vtkDataSet*)>([](vtkVolumeMapper& self, vtkDataSet* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkVolumeMapper&, vtkRectilinearGrid*)>([](vtkVolumeMapper& self, vtkRectilinearGrid* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkVolumeMapper&)>([](vtkVolumeMapper& self) -> vtkDataSet* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataSet*(vtkVolumeMapper&, int)>([](vtkVolumeMapper& self, int arg_0) -> vtkDataSet* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetBlendMode", &vtkVolumeMapper::SetBlendMode)
    .function("SetBlendModeToComposite", &vtkVolumeMapper::SetBlendModeToComposite)
    .function("SetBlendModeToMaximumIntensity", &vtkVolumeMapper::SetBlendModeToMaximumIntensity)
    .function("SetBlendModeToMinimumIntensity", &vtkVolumeMapper::SetBlendModeToMinimumIntensity)
    .function("SetBlendModeToAverageIntensity", &vtkVolumeMapper::SetBlendModeToAverageIntensity)
    .function("SetBlendModeToAdditive", &vtkVolumeMapper::SetBlendModeToAdditive)
    .function("SetBlendModeToIsoSurface", &vtkVolumeMapper::SetBlendModeToIsoSurface)
    .function("SetBlendModeToSlice", &vtkVolumeMapper::SetBlendModeToSlice)
    .function("GetBlendMode", &vtkVolumeMapper::GetBlendMode)
    .function("SetAverageIPScalarRange", emscripten::select_overload<void(vtkVolumeMapper&, double, double)>([](vtkVolumeMapper& self, double arg_0, double arg_1) -> void { return self.SetAverageIPScalarRange( arg_0, arg_1); }))
    .function("SetCropping", &vtkVolumeMapper::SetCropping)
    .function("GetCroppingMinValue", &vtkVolumeMapper::GetCroppingMinValue)
    .function("GetCroppingMaxValue", &vtkVolumeMapper::GetCroppingMaxValue)
    .function("GetCropping", &vtkVolumeMapper::GetCropping)
    .function("CroppingOn", &vtkVolumeMapper::CroppingOn)
    .function("CroppingOff", &vtkVolumeMapper::CroppingOff)
    .function("SetCroppingRegionPlanes", emscripten::select_overload<void(vtkVolumeMapper&, double, double, double, double, double, double)>([](vtkVolumeMapper& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetCroppingRegionPlanes( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetComputeNormalFromOpacity", &vtkVolumeMapper::SetComputeNormalFromOpacity)
    .function("GetComputeNormalFromOpacity", &vtkVolumeMapper::GetComputeNormalFromOpacity)
    .function("ComputeNormalFromOpacityOn", &vtkVolumeMapper::ComputeNormalFromOpacityOn)
    .function("ComputeNormalFromOpacityOff", &vtkVolumeMapper::ComputeNormalFromOpacityOff)
    .function("SetCroppingRegionFlags", &vtkVolumeMapper::SetCroppingRegionFlags)
    .function("GetCroppingRegionFlagsMinValue", &vtkVolumeMapper::GetCroppingRegionFlagsMinValue)
    .function("GetCroppingRegionFlagsMaxValue", &vtkVolumeMapper::GetCroppingRegionFlagsMaxValue)
    .function("GetCroppingRegionFlags", &vtkVolumeMapper::GetCroppingRegionFlags)
    .function("SetCroppingRegionFlagsToSubVolume", &vtkVolumeMapper::SetCroppingRegionFlagsToSubVolume)
    .function("SetCroppingRegionFlagsToFence", &vtkVolumeMapper::SetCroppingRegionFlagsToFence)
    .function("SetCroppingRegionFlagsToInvertedFence", &vtkVolumeMapper::SetCroppingRegionFlagsToInvertedFence)
    .function("SetCroppingRegionFlagsToCross", &vtkVolumeMapper::SetCroppingRegionFlagsToCross)
    .function("SetCroppingRegionFlagsToInvertedCross", &vtkVolumeMapper::SetCroppingRegionFlagsToInvertedCross)
    .function("ReleaseGraphicsResources", &vtkVolumeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkVolumeMapper_0_2_constants) {
    typedef vtkVolumeMapper::BlendModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkVolumeMapper_BlendModes_COMPOSITE_BLEND", vtkVolumeMapper::COMPOSITE_BLEND },
      { "vtkVolumeMapper_BlendModes_MAXIMUM_INTENSITY_BLEND", vtkVolumeMapper::MAXIMUM_INTENSITY_BLEND },
      { "vtkVolumeMapper_BlendModes_MINIMUM_INTENSITY_BLEND", vtkVolumeMapper::MINIMUM_INTENSITY_BLEND },
      { "vtkVolumeMapper_BlendModes_AVERAGE_INTENSITY_BLEND", vtkVolumeMapper::AVERAGE_INTENSITY_BLEND },
      { "vtkVolumeMapper_BlendModes_ADDITIVE_BLEND", vtkVolumeMapper::ADDITIVE_BLEND },
      { "vtkVolumeMapper_BlendModes_ISOSURFACE_BLEND", vtkVolumeMapper::ISOSURFACE_BLEND },
      { "vtkVolumeMapper_BlendModes_SLICE_BLEND", vtkVolumeMapper::SLICE_BLEND },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

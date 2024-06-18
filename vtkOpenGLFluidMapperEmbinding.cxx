// JavaScript wrapper for vtkOpenGLFluidMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLFluidMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLFluidMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkOpenGLFluidMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLFluidMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLFluidMapper>(vtkOpenGLFluidMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLFluidMapper_class) {
  using FluidSurfaceFilterMethod=vtkOpenGLFluidMapper::FluidSurfaceFilterMethod;
  using FluidDisplayMode=vtkOpenGLFluidMapper::FluidDisplayMode;
  emscripten::class_<vtkOpenGLFluidMapper, emscripten::base<vtkAbstractVolumeMapper>>("vtkOpenGLFluidMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLFluidMapper>>("vtkSmartPointer<vtkOpenGLFluidMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLFluidMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFluidMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLFluidMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLFluidMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLFluidMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLFluidMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLFluidMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkOpenGLFluidMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkOpenGLFluidMapper::GetInput, emscripten::allow_raw_pointers())
    .function("SetScalarVisibility", &vtkOpenGLFluidMapper::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkOpenGLFluidMapper::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkOpenGLFluidMapper::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkOpenGLFluidMapper::ScalarVisibilityOff)
    .function("SetParticleRadius", &vtkOpenGLFluidMapper::SetParticleRadius)
    .function("GetParticleRadius", &vtkOpenGLFluidMapper::GetParticleRadius)
    .function("SetThicknessAndVolumeColorFilterRadius", &vtkOpenGLFluidMapper::SetThicknessAndVolumeColorFilterRadius)
    .function("GetThicknessAndVolumeColorFilterRadius", &vtkOpenGLFluidMapper::GetThicknessAndVolumeColorFilterRadius)
    .function("SetSurfaceFilterMethod", &vtkOpenGLFluidMapper::SetSurfaceFilterMethod)
    .function("GetSurfaceFilterMethod", &vtkOpenGLFluidMapper::GetSurfaceFilterMethod)
    .function("SetNarrowRangeFilterParameters", &vtkOpenGLFluidMapper::SetNarrowRangeFilterParameters)
    .function("SetBilateralGaussianFilterParameter", &vtkOpenGLFluidMapper::SetBilateralGaussianFilterParameter)
    .function("SetDisplayMode", &vtkOpenGLFluidMapper::SetDisplayMode)
    .function("GetDisplayMode", &vtkOpenGLFluidMapper::GetDisplayMode)
    .function("SetAttenuationColor", emscripten::select_overload<void(vtkOpenGLFluidMapper&, float, float, float)>([](vtkOpenGLFluidMapper& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetAttenuationColor( arg_0, arg_1, arg_2); }))
    .function("SetOpaqueColor", emscripten::select_overload<void(vtkOpenGLFluidMapper&, float, float, float)>([](vtkOpenGLFluidMapper& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetOpaqueColor( arg_0, arg_1, arg_2); }))
    .function("SetParticleColorPower", &vtkOpenGLFluidMapper::SetParticleColorPower)
    .function("GetParticleColorPower", &vtkOpenGLFluidMapper::GetParticleColorPower)
    .function("SetParticleColorScale", &vtkOpenGLFluidMapper::SetParticleColorScale)
    .function("GetParticleColorScale", &vtkOpenGLFluidMapper::GetParticleColorScale)
    .function("SetAttenuationScale", &vtkOpenGLFluidMapper::SetAttenuationScale)
    .function("GetAttenuationScale", &vtkOpenGLFluidMapper::GetAttenuationScale)
    .function("SetAdditionalReflection", &vtkOpenGLFluidMapper::SetAdditionalReflection)
    .function("GetAdditionalReflection", &vtkOpenGLFluidMapper::GetAdditionalReflection)
    .function("SetRefractionScale", &vtkOpenGLFluidMapper::SetRefractionScale)
    .function("GetRefractionScale", &vtkOpenGLFluidMapper::GetRefractionScale)
    .function("SetRefractiveIndex", &vtkOpenGLFluidMapper::SetRefractiveIndex)
    .function("GetRefractiveIndex", &vtkOpenGLFluidMapper::GetRefractiveIndex)
    .function("Render", &vtkOpenGLFluidMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLFluidMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLFluidMapper_0_2_constants) {
    typedef vtkOpenGLFluidMapper::FluidSurfaceFilterMethod cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkOpenGLFluidMapper_FluidSurfaceFilterMethod_BilateralGaussian", vtkOpenGLFluidMapper::BilateralGaussian },
      { "vtkOpenGLFluidMapper_FluidSurfaceFilterMethod_NarrowRange", vtkOpenGLFluidMapper::NarrowRange },
      { "vtkOpenGLFluidMapper_FluidSurfaceFilterMethod_NumFilterMethods", vtkOpenGLFluidMapper::NumFilterMethods },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLFluidMapper_1_2_constants) {
    typedef vtkOpenGLFluidMapper::FluidDisplayMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkOpenGLFluidMapper_FluidDisplayMode_UnfilteredOpaqueSurface", vtkOpenGLFluidMapper::UnfilteredOpaqueSurface },
      { "vtkOpenGLFluidMapper_FluidDisplayMode_FilteredOpaqueSurface", vtkOpenGLFluidMapper::FilteredOpaqueSurface },
      { "vtkOpenGLFluidMapper_FluidDisplayMode_UnfilteredSurfaceNormal", vtkOpenGLFluidMapper::UnfilteredSurfaceNormal },
      { "vtkOpenGLFluidMapper_FluidDisplayMode_FilteredSurfaceNormal", vtkOpenGLFluidMapper::FilteredSurfaceNormal },
      { "vtkOpenGLFluidMapper_FluidDisplayMode_TransparentFluidVolume", vtkOpenGLFluidMapper::TransparentFluidVolume },
      { "vtkOpenGLFluidMapper_FluidDisplayMode_NumDisplayModes", vtkOpenGLFluidMapper::NumDisplayModes },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

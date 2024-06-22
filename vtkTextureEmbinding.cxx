// JavaScript wrapper for vtkTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkImageData.h"
#include "vtkScalarsToColors.h"
#include "vtkUnsignedCharArray.h"
#include "vtkDataArray.h"
#include "vtkTransform.h"
#include "vtkTexture.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTexture_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_TEXTURE_QUALITY_DEFAULT", 0 },
      { "VTK_TEXTURE_QUALITY_16BIT", 16 },
      { "VTK_TEXTURE_QUALITY_32BIT", 32 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTexture_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTexture>(vtkTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTexture_class) {
  using VTKTextureBlendingMode=vtkTexture::VTKTextureBlendingMode;
  emscripten::class_<vtkTexture, emscripten::base<vtkImageAlgorithm>>("vtkTexture")
    .smart_ptr<vtkSmartPointer<vtkTexture>>("vtkSmartPointer<vtkTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkTexture::Render, emscripten::allow_raw_pointers())
    .function("PostRender", &vtkTexture::PostRender, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTexture::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("Load", &vtkTexture::Load, emscripten::allow_raw_pointers())
    .function("GetInterpolate", &vtkTexture::GetInterpolate)
    .function("SetInterpolate", &vtkTexture::SetInterpolate)
    .function("InterpolateOn", &vtkTexture::InterpolateOn)
    .function("InterpolateOff", &vtkTexture::InterpolateOff)
    .function("GetMipmap", &vtkTexture::GetMipmap)
    .function("SetMipmap", &vtkTexture::SetMipmap)
    .function("MipmapOn", &vtkTexture::MipmapOn)
    .function("MipmapOff", &vtkTexture::MipmapOff)
    .function("SetMaximumAnisotropicFiltering", &vtkTexture::SetMaximumAnisotropicFiltering)
    .function("GetMaximumAnisotropicFiltering", &vtkTexture::GetMaximumAnisotropicFiltering)
    .function("SetQuality", &vtkTexture::SetQuality)
    .function("GetQuality", &vtkTexture::GetQuality)
    .function("SetQualityToDefault", &vtkTexture::SetQualityToDefault)
    .function("SetQualityTo16Bit", &vtkTexture::SetQualityTo16Bit)
    .function("SetQualityTo32Bit", &vtkTexture::SetQualityTo32Bit)
    .function("SetColorMode", &vtkTexture::SetColorMode)
    .function("GetColorMode", &vtkTexture::GetColorMode)
    .function("SetColorModeToDefault", &vtkTexture::SetColorModeToDefault)
    .function("SetColorModeToMapScalars", &vtkTexture::SetColorModeToMapScalars)
    .function("SetColorModeToDirectScalars", &vtkTexture::SetColorModeToDirectScalars)
    .function("GetInput", &vtkTexture::GetInput, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkTexture::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkTexture::GetLookupTable, emscripten::allow_raw_pointers())
    .function("GetMappedScalars", &vtkTexture::GetMappedScalars, emscripten::allow_raw_pointers())
    .function("MapScalarsToColors", emscripten::optional_override([](vtkTexture& self, vtkDataArray* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.MapScalarsToColors( arg_0)) / sizeof(unsigned char);}), emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkTexture::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkTexture::GetTransform, emscripten::allow_raw_pointers())
    .function("GetBlendingMode", &vtkTexture::GetBlendingMode)
    .function("SetBlendingMode", &vtkTexture::SetBlendingMode)
    .function("GetPremultipliedAlpha", &vtkTexture::GetPremultipliedAlpha)
    .function("SetPremultipliedAlpha", &vtkTexture::SetPremultipliedAlpha)
    .function("PremultipliedAlphaOn", &vtkTexture::PremultipliedAlphaOn)
    .function("PremultipliedAlphaOff", &vtkTexture::PremultipliedAlphaOff)
    .function("GetRestrictPowerOf2ImageSmaller", &vtkTexture::GetRestrictPowerOf2ImageSmaller)
    .function("SetRestrictPowerOf2ImageSmaller", &vtkTexture::SetRestrictPowerOf2ImageSmaller)
    .function("RestrictPowerOf2ImageSmallerOn", &vtkTexture::RestrictPowerOf2ImageSmallerOn)
    .function("RestrictPowerOf2ImageSmallerOff", &vtkTexture::RestrictPowerOf2ImageSmallerOff)
    .function("IsTranslucent", &vtkTexture::IsTranslucent)
    .function("GetTextureUnit", &vtkTexture::GetTextureUnit)
    .function("GetCubeMap", &vtkTexture::GetCubeMap)
    .function("CubeMapOn", &vtkTexture::CubeMapOn)
    .function("CubeMapOff", &vtkTexture::CubeMapOff)
    .function("SetCubeMap", &vtkTexture::SetCubeMap)
    .function("GetUseSRGBColorSpace", &vtkTexture::GetUseSRGBColorSpace)
    .function("SetUseSRGBColorSpace", &vtkTexture::SetUseSRGBColorSpace)
    .function("UseSRGBColorSpaceOn", &vtkTexture::UseSRGBColorSpaceOn)
    .function("UseSRGBColorSpaceOff", &vtkTexture::UseSRGBColorSpaceOff)
    .function("SetBorderColor", emscripten::select_overload<void(vtkTexture&, float, float, float, float)>([](vtkTexture& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.SetBorderColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetWrap", &vtkTexture::GetWrap)
    .function("SetWrap", &vtkTexture::SetWrap)
    .function("GetWrapMinValue", &vtkTexture::GetWrapMinValue)
    .function("GetWrapMaxValue", &vtkTexture::GetWrapMaxValue)
    .function("SetRepeat", &vtkTexture::SetRepeat)
    .function("GetRepeat", &vtkTexture::GetRepeat)
    .function("RepeatOn", &vtkTexture::RepeatOn)
    .function("RepeatOff", &vtkTexture::RepeatOff)
    .function("SetEdgeClamp", &vtkTexture::SetEdgeClamp)
    .function("GetEdgeClamp", &vtkTexture::GetEdgeClamp)
    .function("EdgeClampOn", &vtkTexture::EdgeClampOn)
    .function("EdgeClampOff", &vtkTexture::EdgeClampOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTexture_0_2_constants) {
    typedef vtkTexture::VTKTextureBlendingMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_NONE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_NONE },
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_REPLACE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_REPLACE },
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_MODULATE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_MODULATE },
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_ADD", vtkTexture::VTK_TEXTURE_BLENDING_MODE_ADD },
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_ADD_SIGNED", vtkTexture::VTK_TEXTURE_BLENDING_MODE_ADD_SIGNED },
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_INTERPOLATE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_INTERPOLATE },
      { "vtkTexture_VTKTextureBlendingMode_VTK_TEXTURE_BLENDING_MODE_SUBTRACT", vtkTexture::VTK_TEXTURE_BLENDING_MODE_SUBTRACT },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTexture_1_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkTexture_ClampToEdge", vtkTexture::ClampToEdge },
      { "vtkTexture_Repeat", vtkTexture::Repeat },
      { "vtkTexture_MirroredRepeat", vtkTexture::MirroredRepeat },
      { "vtkTexture_ClampToBorder", vtkTexture::ClampToBorder },
      { "vtkTexture_NumberOfWrapModes", vtkTexture::NumberOfWrapModes },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

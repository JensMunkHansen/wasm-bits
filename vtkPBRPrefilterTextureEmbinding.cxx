// JavaScript wrapper for vtkPBRPrefilterTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkPBRPrefilterTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkPBRPrefilterTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLTexture.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkPBRPrefilterTexture.h"

template<> void emscripten::internal::raw_destructor<vtkPBRPrefilterTexture>(vtkPBRPrefilterTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPBRPrefilterTexture_class) {
  emscripten::class_<vtkPBRPrefilterTexture, emscripten::base<vtkOpenGLTexture>>("vtkPBRPrefilterTexture")
    .smart_ptr<vtkSmartPointer<vtkPBRPrefilterTexture>>("vtkSmartPointer<vtkPBRPrefilterTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPBRPrefilterTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPBRPrefilterTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPBRPrefilterTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPBRPrefilterTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPBRPrefilterTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPBRPrefilterTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPBRPrefilterTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputTexture", &vtkPBRPrefilterTexture::SetInputTexture, emscripten::allow_raw_pointers())
    .function("GetInputTexture", &vtkPBRPrefilterTexture::GetInputTexture, emscripten::allow_raw_pointers())
    .function("Load", &vtkPBRPrefilterTexture::Load, emscripten::allow_raw_pointers())
    .function("Render", &vtkPBRPrefilterTexture::Render, emscripten::allow_raw_pointers())
    .function("GetPrefilterSize", &vtkPBRPrefilterTexture::GetPrefilterSize)
    .function("GetPrefilterLevels", &vtkPBRPrefilterTexture::GetPrefilterLevels)
    .function("SetPrefilterLevels", &vtkPBRPrefilterTexture::SetPrefilterLevels)
    .function("GetPrefilterMaxSamples", &vtkPBRPrefilterTexture::GetPrefilterMaxSamples)
    .function("SetPrefilterMaxSamples", &vtkPBRPrefilterTexture::SetPrefilterMaxSamples)
    .function("GetConvertToLinear", &vtkPBRPrefilterTexture::GetConvertToLinear)
    .function("SetConvertToLinear", &vtkPBRPrefilterTexture::SetConvertToLinear)
    .function("ConvertToLinearOn", &vtkPBRPrefilterTexture::ConvertToLinearOn)
    .function("ConvertToLinearOff", &vtkPBRPrefilterTexture::ConvertToLinearOff)
    .function("GetHalfPrecision", &vtkPBRPrefilterTexture::GetHalfPrecision)
    .function("SetHalfPrecision", &vtkPBRPrefilterTexture::SetHalfPrecision)
    .function("HalfPrecisionOn", &vtkPBRPrefilterTexture::HalfPrecisionOn)
    .function("HalfPrecisionOff", &vtkPBRPrefilterTexture::HalfPrecisionOff)
    .function("ReleaseGraphicsResources", &vtkPBRPrefilterTexture::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

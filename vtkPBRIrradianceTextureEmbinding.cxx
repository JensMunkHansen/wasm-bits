// JavaScript wrapper for vtkPBRIrradianceTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkPBRIrradianceTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkPBRIrradianceTexture.h
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
#include "vtkPBRIrradianceTexture.h"

template<> void emscripten::internal::raw_destructor<vtkPBRIrradianceTexture>(vtkPBRIrradianceTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPBRIrradianceTexture_class) {
  emscripten::class_<vtkPBRIrradianceTexture, emscripten::base<vtkOpenGLTexture>>("vtkPBRIrradianceTexture")
    .smart_ptr<vtkSmartPointer<vtkPBRIrradianceTexture>>("vtkSmartPointer<vtkPBRIrradianceTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPBRIrradianceTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPBRIrradianceTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPBRIrradianceTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPBRIrradianceTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPBRIrradianceTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPBRIrradianceTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPBRIrradianceTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputTexture", &vtkPBRIrradianceTexture::SetInputTexture, emscripten::allow_raw_pointers())
    .function("GetInputTexture", &vtkPBRIrradianceTexture::GetInputTexture, emscripten::allow_raw_pointers())
    .function("Load", &vtkPBRIrradianceTexture::Load, emscripten::allow_raw_pointers())
    .function("Render", &vtkPBRIrradianceTexture::Render, emscripten::allow_raw_pointers())
    .function("GetIrradianceSize", &vtkPBRIrradianceTexture::GetIrradianceSize)
    .function("SetIrradianceSize", &vtkPBRIrradianceTexture::SetIrradianceSize)
    .function("GetIrradianceStep", &vtkPBRIrradianceTexture::GetIrradianceStep)
    .function("SetIrradianceStep", &vtkPBRIrradianceTexture::SetIrradianceStep)
    .function("GetConvertToLinear", &vtkPBRIrradianceTexture::GetConvertToLinear)
    .function("SetConvertToLinear", &vtkPBRIrradianceTexture::SetConvertToLinear)
    .function("ConvertToLinearOn", &vtkPBRIrradianceTexture::ConvertToLinearOn)
    .function("ConvertToLinearOff", &vtkPBRIrradianceTexture::ConvertToLinearOff)
    .function("ReleaseGraphicsResources", &vtkPBRIrradianceTexture::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

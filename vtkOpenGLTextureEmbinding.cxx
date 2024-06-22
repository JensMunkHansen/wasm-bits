// JavaScript wrapper for vtkOpenGLTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkTextureObject.h"
#include "vtkOpenGLTexture.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLTexture>(vtkOpenGLTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLTexture_class) {
  emscripten::class_<vtkOpenGLTexture, emscripten::base<vtkTexture>>("vtkOpenGLTexture")
    .smart_ptr<vtkSmartPointer<vtkOpenGLTexture>>("vtkSmartPointer<vtkOpenGLTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLTexture::Render, emscripten::allow_raw_pointers())
    .function("Load", &vtkOpenGLTexture::Load, emscripten::allow_raw_pointers())
    .function("PostRender", &vtkOpenGLTexture::PostRender, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLTexture::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("CopyTexImage", &vtkOpenGLTexture::CopyTexImage)
    .function("GetIsDepthTexture", &vtkOpenGLTexture::GetIsDepthTexture)
    .function("SetIsDepthTexture", &vtkOpenGLTexture::SetIsDepthTexture)
    .function("GetTextureType", &vtkOpenGLTexture::GetTextureType)
    .function("SetTextureType", &vtkOpenGLTexture::SetTextureType)
    .function("GetTextureObject", &vtkOpenGLTexture::GetTextureObject, emscripten::allow_raw_pointers())
    .function("SetTextureObject", &vtkOpenGLTexture::SetTextureObject, emscripten::allow_raw_pointers())
    .function("GetTextureUnit", &vtkOpenGLTexture::GetTextureUnit)
    .function("IsTranslucent", &vtkOpenGLTexture::IsTranslucent);
}

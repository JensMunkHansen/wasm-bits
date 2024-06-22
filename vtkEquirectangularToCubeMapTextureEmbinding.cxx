// JavaScript wrapper for vtkEquirectangularToCubeMapTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkEquirectangularToCubeMapTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkEquirectangularToCubeMapTexture.h
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
#include "vtkEquirectangularToCubeMapTexture.h"

template<> void emscripten::internal::raw_destructor<vtkEquirectangularToCubeMapTexture>(vtkEquirectangularToCubeMapTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEquirectangularToCubeMapTexture_class) {
  emscripten::class_<vtkEquirectangularToCubeMapTexture, emscripten::base<vtkOpenGLTexture>>("vtkEquirectangularToCubeMapTexture")
    .smart_ptr<vtkSmartPointer<vtkEquirectangularToCubeMapTexture>>("vtkSmartPointer<vtkEquirectangularToCubeMapTexture>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEquirectangularToCubeMapTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEquirectangularToCubeMapTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEquirectangularToCubeMapTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEquirectangularToCubeMapTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEquirectangularToCubeMapTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEquirectangularToCubeMapTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEquirectangularToCubeMapTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputTexture", &vtkEquirectangularToCubeMapTexture::SetInputTexture, emscripten::allow_raw_pointers())
    .function("GetInputTexture", &vtkEquirectangularToCubeMapTexture::GetInputTexture, emscripten::allow_raw_pointers())
    .function("Load", &vtkEquirectangularToCubeMapTexture::Load, emscripten::allow_raw_pointers())
    .function("Render", &vtkEquirectangularToCubeMapTexture::Render, emscripten::allow_raw_pointers())
    .function("GetCubeMapSize", &vtkEquirectangularToCubeMapTexture::GetCubeMapSize)
    .function("SetCubeMapSize", &vtkEquirectangularToCubeMapTexture::SetCubeMapSize)
    .function("ReleaseGraphicsResources", &vtkEquirectangularToCubeMapTexture::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

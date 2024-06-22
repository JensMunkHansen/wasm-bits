// JavaScript wrapper for vtkGLSLModLight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGLSLModLightEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGLSLModLight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderer.h"
#include "vtkActor.h"
#include "vtkAbstractMapper.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkGLSLModLight.h"

template<> void emscripten::internal::raw_destructor<vtkGLSLModLight>(vtkGLSLModLight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLSLModLight_class) {
  emscripten::class_<vtkGLSLModLight, emscripten::base<vtkGLSLModifierBase>>("vtkGLSLModLight")
    .smart_ptr<vtkSmartPointer<vtkGLSLModLight>>("vtkSmartPointer<vtkGLSLModLight>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGLSLModLight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModLight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLSLModLight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLSLModLight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLSLModLight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModLight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLSLModLight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUsePBRTextures", &vtkGLSLModLight::SetUsePBRTextures)
    .function("GetUsePBRTextures", &vtkGLSLModLight::GetUsePBRTextures)
    .function("SetUseAnisotropy", &vtkGLSLModLight::SetUseAnisotropy)
    .function("GetUseAnisotropy", &vtkGLSLModLight::GetUseAnisotropy)
    .function("SetUseClearCoat", &vtkGLSLModLight::SetUseClearCoat)
    .function("GetUseClearCoat", &vtkGLSLModLight::GetUseClearCoat)
    .function("SetShaderParameters", &vtkGLSLModLight::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("IsUpToDate", &vtkGLSLModLight::IsUpToDate, emscripten::allow_raw_pointers());
}

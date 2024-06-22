// JavaScript wrapper for vtkPBRLUTTexture with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkPBRLUTTextureEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkPBRLUTTexture.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkPBRLUTTexture.h"

template<> void emscripten::internal::raw_destructor<vtkPBRLUTTexture>(vtkPBRLUTTexture * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPBRLUTTexture_class) {
  emscripten::class_<vtkPBRLUTTexture, emscripten::base<vtkOpenGLTexture>>("vtkPBRLUTTexture")
    .smart_ptr<vtkSmartPointer<vtkPBRLUTTexture>>("vtkSmartPointer<vtkPBRLUTTexture>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPBRLUTTexture>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPBRLUTTexture::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPBRLUTTexture& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPBRLUTTexture::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPBRLUTTexture::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPBRLUTTexture::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPBRLUTTexture& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Load", &vtkPBRLUTTexture::Load, emscripten::allow_raw_pointers())
    .function("Render", &vtkPBRLUTTexture::Render, emscripten::allow_raw_pointers())
    .function("GetLUTSize", &vtkPBRLUTTexture::GetLUTSize)
    .function("SetLUTSize", &vtkPBRLUTTexture::SetLUTSize)
    .function("GetLUTSamples", &vtkPBRLUTTexture::GetLUTSamples)
    .function("SetLUTSamples", &vtkPBRLUTTexture::SetLUTSamples);
}

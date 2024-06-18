// JavaScript wrapper for vtkOpenGLSkybox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLSkyboxEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLSkybox.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkMapper.h"
#include "vtkOpenGLSkybox.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLSkybox>(vtkOpenGLSkybox * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLSkybox_class) {
  emscripten::class_<vtkOpenGLSkybox, emscripten::base<vtkSkybox>>("vtkOpenGLSkybox")
    .smart_ptr<vtkSmartPointer<vtkOpenGLSkybox>>("vtkSmartPointer<vtkOpenGLSkybox>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLSkybox>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLSkybox::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLSkybox& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLSkybox::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLSkybox::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLSkybox::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLSkybox& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLSkybox::Render, emscripten::allow_raw_pointers())
    .function("SetMapper", &vtkOpenGLSkybox::SetMapper, emscripten::allow_raw_pointers());
}

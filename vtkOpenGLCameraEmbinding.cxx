// JavaScript wrapper for vtkOpenGLCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLCameraEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkMatrix4x4.h"
#include "vtkMatrix3x3.h"
#include "vtkOpenGLCamera.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLCamera>(vtkOpenGLCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLCamera_class) {
  emscripten::class_<vtkOpenGLCamera, emscripten::base<vtkCamera>>("vtkOpenGLCamera")
    .smart_ptr<vtkSmartPointer<vtkOpenGLCamera>>("vtkSmartPointer<vtkOpenGLCamera>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLCamera::Render, emscripten::allow_raw_pointers())
    .function("UpdateViewport", &vtkOpenGLCamera::UpdateViewport, emscripten::allow_raw_pointers());
}

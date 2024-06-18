// JavaScript wrapper for vtkOpenGLActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkMapper.h"
#include "vtkMatrix4x4.h"
#include "vtkMatrix3x3.h"
#include "vtkInformationIntegerKey.h"
#include "vtkOpenGLActor.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLActor>(vtkOpenGLActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLActor_class) {
  emscripten::class_<vtkOpenGLActor, emscripten::base<vtkActor>>("vtkOpenGLActor")
    .smart_ptr<vtkSmartPointer<vtkOpenGLActor>>("vtkSmartPointer<vtkOpenGLActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLActor::Render, emscripten::allow_raw_pointers())
    .class_function("GLDepthMaskOverride", &vtkOpenGLActor::GLDepthMaskOverride, emscripten::allow_raw_pointers());
}

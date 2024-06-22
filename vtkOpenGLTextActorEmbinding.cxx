// JavaScript wrapper for vtkOpenGLTextActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLTextActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLTextActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkOpenGLTextActor.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLTextActor>(vtkOpenGLTextActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLTextActor_class) {
  emscripten::class_<vtkOpenGLTextActor, emscripten::base<vtkTextActor>>("vtkOpenGLTextActor")
    .smart_ptr<vtkSmartPointer<vtkOpenGLTextActor>>("vtkSmartPointer<vtkOpenGLTextActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLTextActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLTextActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLTextActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLTextActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLTextActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLTextActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLTextActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkOpenGLTextActor::RenderOverlay, emscripten::allow_raw_pointers());
}

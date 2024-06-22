// JavaScript wrapper for vtkOpenGLTextActor3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLTextActor3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLTextActor3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkOpenGLTextActor3D.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLTextActor3D>(vtkOpenGLTextActor3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLTextActor3D_class) {
  emscripten::class_<vtkOpenGLTextActor3D, emscripten::base<vtkTextActor3D>>("vtkOpenGLTextActor3D")
    .smart_ptr<vtkSmartPointer<vtkOpenGLTextActor3D>>("vtkSmartPointer<vtkOpenGLTextActor3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLTextActor3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLTextActor3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLTextActor3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLTextActor3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLTextActor3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLTextActor3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLTextActor3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderTranslucentPolygonalGeometry", &vtkOpenGLTextActor3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers());
}

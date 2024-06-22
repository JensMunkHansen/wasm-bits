// JavaScript wrapper for vtkOpenGLPolyDataMapper2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLPolyDataMapper2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLPolyDataMapper2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkWindow.h"
#include "vtkOpenGLPolyDataMapper2D.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLPolyDataMapper2D>(vtkOpenGLPolyDataMapper2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLPolyDataMapper2D_class) {
  emscripten::class_<vtkOpenGLPolyDataMapper2D, emscripten::base<vtkPolyDataMapper2D>>("vtkOpenGLPolyDataMapper2D")
    .smart_ptr<vtkSmartPointer<vtkOpenGLPolyDataMapper2D>>("vtkSmartPointer<vtkOpenGLPolyDataMapper2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLPolyDataMapper2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLPolyDataMapper2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLPolyDataMapper2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLPolyDataMapper2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLPolyDataMapper2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLPolyDataMapper2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLPolyDataMapper2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkOpenGLPolyDataMapper2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLPolyDataMapper2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

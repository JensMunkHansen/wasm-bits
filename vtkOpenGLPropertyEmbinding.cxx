// JavaScript wrapper for vtkOpenGLProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLPropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkOpenGLProperty.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLProperty>(vtkOpenGLProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLProperty_class) {
  emscripten::class_<vtkOpenGLProperty, emscripten::base<vtkProperty>>("vtkOpenGLProperty")
    .smart_ptr<vtkSmartPointer<vtkOpenGLProperty>>("vtkSmartPointer<vtkOpenGLProperty>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLProperty::Render, emscripten::allow_raw_pointers())
    .function("BackfaceRender", &vtkOpenGLProperty::BackfaceRender, emscripten::allow_raw_pointers())
    .function("PostRender", &vtkOpenGLProperty::PostRender, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLProperty::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

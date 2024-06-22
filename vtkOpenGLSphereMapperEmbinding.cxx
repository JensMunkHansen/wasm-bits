// JavaScript wrapper for vtkOpenGLSphereMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLSphereMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLSphereMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkOpenGLSphereMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLSphereMapper>(vtkOpenGLSphereMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLSphereMapper_class) {
  emscripten::class_<vtkOpenGLSphereMapper, emscripten::base<vtkOpenGLPolyDataMapper>>("vtkOpenGLSphereMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLSphereMapper>>("vtkSmartPointer<vtkOpenGLSphereMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLSphereMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLSphereMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLSphereMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLSphereMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLSphereMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLSphereMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLSphereMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleArray", emscripten::optional_override([](vtkOpenGLSphereMapper& self, const std::string & arg_0) -> void {  return self.SetScaleArray( arg_0.c_str());}))
    .function("SetRadius", &vtkOpenGLSphereMapper::SetRadius)
    .function("GetRadius", &vtkOpenGLSphereMapper::GetRadius)
    .function("Render", &vtkOpenGLSphereMapper::Render, emscripten::allow_raw_pointers());
}

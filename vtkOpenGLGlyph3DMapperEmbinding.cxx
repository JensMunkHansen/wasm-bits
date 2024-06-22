// JavaScript wrapper for vtkOpenGLGlyph3DMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLGlyph3DMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLGlyph3DMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkOpenGLGlyph3DMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLGlyph3DMapper>(vtkOpenGLGlyph3DMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLGlyph3DMapper_class) {
  emscripten::class_<vtkOpenGLGlyph3DMapper, emscripten::base<vtkGlyph3DMapper>>("vtkOpenGLGlyph3DMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLGlyph3DMapper>>("vtkSmartPointer<vtkOpenGLGlyph3DMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLGlyph3DMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGlyph3DMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLGlyph3DMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLGlyph3DMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLGlyph3DMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGlyph3DMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLGlyph3DMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", emscripten::select_overload<void(vtkOpenGLGlyph3DMapper&, vtkRenderer*, vtkActor*)>([](vtkOpenGLGlyph3DMapper& self, vtkRenderer* arg_0, vtkActor* arg_1) -> void { return self.Render( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLGlyph3DMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMaxNumberOfLOD", &vtkOpenGLGlyph3DMapper::GetMaxNumberOfLOD)
    .function("SetNumberOfLOD", &vtkOpenGLGlyph3DMapper::SetNumberOfLOD)
    .function("SetLODDistanceAndTargetReduction", &vtkOpenGLGlyph3DMapper::SetLODDistanceAndTargetReduction);
}

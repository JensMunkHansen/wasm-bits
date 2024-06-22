// JavaScript wrapper for vtkOpenGLGlyph3DHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLGlyph3DHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLGlyph3DHelper.h
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
#include "vtkOpenGLGlyph3DHelper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLGlyph3DHelper>(vtkOpenGLGlyph3DHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLGlyph3DHelper_class) {
  emscripten::class_<vtkOpenGLGlyph3DHelper, emscripten::base<vtkOpenGLPolyDataMapper>>("vtkOpenGLGlyph3DHelper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLGlyph3DHelper>>("vtkSmartPointer<vtkOpenGLGlyph3DHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLGlyph3DHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGlyph3DHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLGlyph3DHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLGlyph3DHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLGlyph3DHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGlyph3DHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLGlyph3DHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GlyphRender", emscripten::optional_override([](vtkOpenGLGlyph3DHelper& self, vtkRenderer* arg_0, vtkActor* arg_1, int arg_2, std::vector<unsigned char>& arg_3, std::vector<float>& arg_4, std::vector<float>& arg_5, std::vector<int>& arg_6, unsigned long arg_7, bool arg_8) -> void {  return self.GlyphRender( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8);}), emscripten::allow_raw_pointers())
    .function("SetLODColoring", &vtkOpenGLGlyph3DHelper::SetLODColoring)
    .function("ReleaseGraphicsResources", &vtkOpenGLGlyph3DHelper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

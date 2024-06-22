// JavaScript wrapper for vtkOpenGLImageMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLImageMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLImageMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkImageData.h"
#include "vtkWindow.h"
#include "vtkOpenGLImageMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLImageMapper>(vtkOpenGLImageMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLImageMapper_class) {
  emscripten::class_<vtkOpenGLImageMapper, emscripten::base<vtkImageMapper>>("vtkOpenGLImageMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLImageMapper>>("vtkSmartPointer<vtkOpenGLImageMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLImageMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLImageMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLImageMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLImageMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLImageMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLImageMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLImageMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkOpenGLImageMapper::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderData", &vtkOpenGLImageMapper::RenderData, emscripten::allow_raw_pointers())
    .function("DrawPixels", emscripten::optional_override([](vtkOpenGLImageMapper& self, vtkViewport* arg_0, int arg_1, int arg_2, int arg_3, std::uintptr_t arg_4) -> void {  return self.DrawPixels( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<void*>(arg_4));}), emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLImageMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

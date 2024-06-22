// JavaScript wrapper for vtkOpenGLImageSliceMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLImageSliceMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLImageSliceMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkImageSlice.h"
#include "vtkWindow.h"
#include "vtkOpenGLImageSliceMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLImageSliceMapper>(vtkOpenGLImageSliceMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLImageSliceMapper_class) {
  emscripten::class_<vtkOpenGLImageSliceMapper, emscripten::base<vtkImageSliceMapper>>("vtkOpenGLImageSliceMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLImageSliceMapper>>("vtkSmartPointer<vtkOpenGLImageSliceMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLImageSliceMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLImageSliceMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLImageSliceMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLImageSliceMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLImageSliceMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLImageSliceMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLImageSliceMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLImageSliceMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLImageSliceMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

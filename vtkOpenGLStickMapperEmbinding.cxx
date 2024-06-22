// JavaScript wrapper for vtkOpenGLStickMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLStickMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLStickMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLStickMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLStickMapper>(vtkOpenGLStickMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLStickMapper_class) {
  emscripten::class_<vtkOpenGLStickMapper, emscripten::base<vtkOpenGLPolyDataMapper>>("vtkOpenGLStickMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLStickMapper>>("vtkSmartPointer<vtkOpenGLStickMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLStickMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLStickMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLStickMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLStickMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLStickMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLStickMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLStickMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleArray", emscripten::optional_override([](vtkOpenGLStickMapper& self, const std::string & arg_0) -> void {  return self.SetScaleArray( arg_0.c_str());}))
    .function("SetOrientationArray", emscripten::optional_override([](vtkOpenGLStickMapper& self, const std::string & arg_0) -> void {  return self.SetOrientationArray( arg_0.c_str());}))
    .function("SetSelectionIdArray", emscripten::optional_override([](vtkOpenGLStickMapper& self, const std::string & arg_0) -> void {  return self.SetSelectionIdArray( arg_0.c_str());}));
}

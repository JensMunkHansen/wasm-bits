// JavaScript wrapper for vtkOpenGLLabeledContourMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLLabeledContourMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLLabeledContourMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkOpenGLLabeledContourMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLLabeledContourMapper>(vtkOpenGLLabeledContourMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLLabeledContourMapper_class) {
  emscripten::class_<vtkOpenGLLabeledContourMapper, emscripten::base<vtkLabeledContourMapper>>("vtkOpenGLLabeledContourMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLLabeledContourMapper>>("vtkSmartPointer<vtkOpenGLLabeledContourMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLLabeledContourMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLLabeledContourMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLLabeledContourMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLLabeledContourMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLLabeledContourMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLLabeledContourMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLLabeledContourMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkOpenGLLabeledContourMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

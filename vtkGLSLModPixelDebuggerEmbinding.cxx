// JavaScript wrapper for vtkGLSLModPixelDebugger with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGLSLModPixelDebuggerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGLSLModPixelDebugger.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderer.h"
#include "vtkAbstractMapper.h"
#include "vtkActor.h"
#include "vtkShaderProgram.h"
#include "vtkOpenGLVertexArrayObject.h"
#include "vtkGLSLModPixelDebugger.h"

template<> void emscripten::internal::raw_destructor<vtkGLSLModPixelDebugger>(vtkGLSLModPixelDebugger * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLSLModPixelDebugger_class) {
  emscripten::class_<vtkGLSLModPixelDebugger, emscripten::base<vtkGLSLModifierBase>>("vtkGLSLModPixelDebugger")
    .smart_ptr<vtkSmartPointer<vtkGLSLModPixelDebugger>>("vtkSmartPointer<vtkGLSLModPixelDebugger>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGLSLModPixelDebugger>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModPixelDebugger::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLSLModPixelDebugger& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLSLModPixelDebugger::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLSLModPixelDebugger::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModPixelDebugger::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLSLModPixelDebugger& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSubstitutionJSONFileName", &vtkGLSLModPixelDebugger::SetSubstitutionJSONFileName)
    .function("SetShaderParameters", &vtkGLSLModPixelDebugger::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("IsUpToDate", &vtkGLSLModPixelDebugger::IsUpToDate, emscripten::allow_raw_pointers());
}

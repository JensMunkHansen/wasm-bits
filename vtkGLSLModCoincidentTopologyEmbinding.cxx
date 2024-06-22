// JavaScript wrapper for vtkGLSLModCoincidentTopology with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGLSLModCoincidentTopologyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGLSLModCoincidentTopology.h
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
#include "vtkGLSLModCoincidentTopology.h"

template<> void emscripten::internal::raw_destructor<vtkGLSLModCoincidentTopology>(vtkGLSLModCoincidentTopology * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLSLModCoincidentTopology_class) {
  emscripten::class_<vtkGLSLModCoincidentTopology, emscripten::base<vtkGLSLModifierBase>>("vtkGLSLModCoincidentTopology")
    .smart_ptr<vtkSmartPointer<vtkGLSLModCoincidentTopology>>("vtkSmartPointer<vtkGLSLModCoincidentTopology>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGLSLModCoincidentTopology>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModCoincidentTopology::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLSLModCoincidentTopology& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLSLModCoincidentTopology::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLSLModCoincidentTopology::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLSLModCoincidentTopology::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLSLModCoincidentTopology& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetShaderParameters", &vtkGLSLModCoincidentTopology::SetShaderParameters, emscripten::allow_raw_pointers())
    .function("IsUpToDate", &vtkGLSLModCoincidentTopology::IsUpToDate, emscripten::allow_raw_pointers());
}

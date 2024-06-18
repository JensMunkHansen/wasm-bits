// JavaScript wrapper for vtkEDLShading with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkEDLShadingEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkEDLShading.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkEDLShading.h"

template<> void emscripten::internal::raw_destructor<vtkEDLShading>(vtkEDLShading * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEDLShading_class) {
  emscripten::class_<vtkEDLShading, emscripten::base<vtkDepthImageProcessingPass>>("vtkEDLShading")
    .smart_ptr<vtkSmartPointer<vtkEDLShading>>("vtkSmartPointer<vtkEDLShading>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEDLShading>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEDLShading::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEDLShading& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEDLShading::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEDLShading::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEDLShading::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEDLShading& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkEDLShading::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

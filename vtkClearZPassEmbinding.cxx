// JavaScript wrapper for vtkClearZPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkClearZPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkClearZPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkClearZPass.h"

template<> void emscripten::internal::raw_destructor<vtkClearZPass>(vtkClearZPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClearZPass_class) {
  emscripten::class_<vtkClearZPass, emscripten::base<vtkRenderPass>>("vtkClearZPass")
    .smart_ptr<vtkSmartPointer<vtkClearZPass>>("vtkSmartPointer<vtkClearZPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkClearZPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClearZPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClearZPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClearZPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClearZPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClearZPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClearZPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDepth", &vtkClearZPass::SetDepth)
    .function("GetDepthMinValue", &vtkClearZPass::GetDepthMinValue)
    .function("GetDepthMaxValue", &vtkClearZPass::GetDepthMaxValue)
    .function("GetDepth", &vtkClearZPass::GetDepth);
}

// JavaScript wrapper for vtkRenderPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkRenderPass.h"

template<> void emscripten::internal::raw_destructor<vtkRenderPass>(vtkRenderPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderPass_class) {
  emscripten::class_<vtkRenderPass, emscripten::base<vtkObject>>("vtkRenderPass")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfRenderedProps", &vtkRenderPass::GetNumberOfRenderedProps)
    .function("ReleaseGraphicsResources", &vtkRenderPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

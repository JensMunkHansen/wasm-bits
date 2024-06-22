// JavaScript wrapper for vtkSequencePass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkSequencePassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkSequencePass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkRenderPassCollection.h"
#include "vtkSequencePass.h"

template<> void emscripten::internal::raw_destructor<vtkSequencePass>(vtkSequencePass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSequencePass_class) {
  emscripten::class_<vtkSequencePass, emscripten::base<vtkRenderPass>>("vtkSequencePass")
    .smart_ptr<vtkSmartPointer<vtkSequencePass>>("vtkSmartPointer<vtkSequencePass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSequencePass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSequencePass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSequencePass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSequencePass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSequencePass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSequencePass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSequencePass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkSequencePass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetPasses", &vtkSequencePass::GetPasses, emscripten::allow_raw_pointers())
    .function("SetPasses", &vtkSequencePass::SetPasses, emscripten::allow_raw_pointers());
}
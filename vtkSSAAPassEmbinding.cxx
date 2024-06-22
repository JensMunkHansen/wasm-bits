// JavaScript wrapper for vtkSSAAPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkSSAAPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkSSAAPass.h
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
#include "vtkSSAAPass.h"

template<> void emscripten::internal::raw_destructor<vtkSSAAPass>(vtkSSAAPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSSAAPass_class) {
  emscripten::class_<vtkSSAAPass, emscripten::base<vtkRenderPass>>("vtkSSAAPass")
    .smart_ptr<vtkSmartPointer<vtkSSAAPass>>("vtkSmartPointer<vtkSSAAPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSSAAPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSSAAPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSSAAPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSSAAPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSSAAPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSSAAPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSSAAPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkSSAAPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetDelegatePass", &vtkSSAAPass::GetDelegatePass, emscripten::allow_raw_pointers())
    .function("SetDelegatePass", &vtkSSAAPass::SetDelegatePass, emscripten::allow_raw_pointers());
}

// JavaScript wrapper for vtkTranslucentPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkTranslucentPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkTranslucentPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkTranslucentPass.h"

template<> void emscripten::internal::raw_destructor<vtkTranslucentPass>(vtkTranslucentPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTranslucentPass_class) {
  emscripten::class_<vtkTranslucentPass, emscripten::base<vtkDefaultPass>>("vtkTranslucentPass")
    .smart_ptr<vtkSmartPointer<vtkTranslucentPass>>("vtkSmartPointer<vtkTranslucentPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTranslucentPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTranslucentPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTranslucentPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTranslucentPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTranslucentPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTranslucentPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTranslucentPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

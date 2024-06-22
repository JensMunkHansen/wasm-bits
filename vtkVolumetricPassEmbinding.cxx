// JavaScript wrapper for vtkVolumetricPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkVolumetricPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkVolumetricPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkVolumetricPass.h"

template<> void emscripten::internal::raw_destructor<vtkVolumetricPass>(vtkVolumetricPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumetricPass_class) {
  emscripten::class_<vtkVolumetricPass, emscripten::base<vtkDefaultPass>>("vtkVolumetricPass")
    .smart_ptr<vtkSmartPointer<vtkVolumetricPass>>("vtkSmartPointer<vtkVolumetricPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumetricPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumetricPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumetricPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumetricPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumetricPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumetricPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumetricPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

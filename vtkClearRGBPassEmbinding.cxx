// JavaScript wrapper for vtkClearRGBPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkClearRGBPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkClearRGBPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkClearRGBPass.h"

template<> void emscripten::internal::raw_destructor<vtkClearRGBPass>(vtkClearRGBPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClearRGBPass_class) {
  emscripten::class_<vtkClearRGBPass, emscripten::base<vtkRenderPass>>("vtkClearRGBPass")
    .smart_ptr<vtkSmartPointer<vtkClearRGBPass>>("vtkSmartPointer<vtkClearRGBPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClearRGBPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClearRGBPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClearRGBPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClearRGBPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClearRGBPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClearRGBPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClearRGBPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBackground", emscripten::select_overload<void(vtkClearRGBPass&, double, double, double)>([](vtkClearRGBPass& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackground( arg_0, arg_1, arg_2); }));
}

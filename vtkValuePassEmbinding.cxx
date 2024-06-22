// JavaScript wrapper for vtkValuePass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkValuePassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkValuePass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkFloatArray.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkValuePass.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkValuePass_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkValuePass>(vtkValuePass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkValuePass_class) {
  using Mode=vtkValuePass::Mode;
  emscripten::class_<vtkValuePass, emscripten::base<vtkOpenGLRenderPass>>("vtkValuePass")
    .smart_ptr<vtkSmartPointer<vtkValuePass>>("vtkSmartPointer<vtkValuePass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkValuePass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkValuePass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkValuePass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkValuePass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkValuePass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkValuePass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkValuePass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkValuePass&, int, const std::string &)>([](vtkValuePass& self, int arg_0, const std::string & arg_1) -> void { return self.SetInputArrayToProcess( arg_0, arg_1.c_str()); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkValuePass&, int, int)>([](vtkValuePass& self, int arg_0, int arg_1) -> void { return self.SetInputArrayToProcess( arg_0, arg_1); }))
    .function("SetInputComponentToProcess", &vtkValuePass::SetInputComponentToProcess)
    .function("GetFloatImageDataArray", &vtkValuePass::GetFloatImageDataArray, emscripten::allow_raw_pointers())
    .function("GetFloatImageData", emscripten::optional_override([](vtkValuePass& self, int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> void {  return self.GetFloatImageData( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}))
    .function("GetFloatImageExtents", emscripten::optional_override([](vtkValuePass& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetFloatImageExtents()) / sizeof(int);}))
    .function("ReleaseGraphicsResources", &vtkValuePass::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkValuePass_0_2_constants) {
    typedef vtkValuePass::Mode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkValuePass_Mode_INVERTIBLE_LUT", vtkValuePass::INVERTIBLE_LUT },
      { "vtkValuePass_Mode_FLOATING_POINT", vtkValuePass::FLOATING_POINT },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

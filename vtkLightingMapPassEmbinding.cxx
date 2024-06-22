// JavaScript wrapper for vtkLightingMapPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkLightingMapPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkLightingMapPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationIntegerKey.h"
#include "vtkRenderState.h"
#include "vtkLightingMapPass.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkLightingMapPass_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLightingMapPass>(vtkLightingMapPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightingMapPass_class) {
  using RenderMode=vtkLightingMapPass::RenderMode;
  emscripten::class_<vtkLightingMapPass, emscripten::base<vtkDefaultPass>>("vtkLightingMapPass")
    .smart_ptr<vtkSmartPointer<vtkLightingMapPass>>("vtkSmartPointer<vtkLightingMapPass>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightingMapPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightingMapPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightingMapPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightingMapPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightingMapPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightingMapPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightingMapPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderType", &vtkLightingMapPass::SetRenderType)
    .function("GetRenderType", &vtkLightingMapPass::GetRenderType)
    .class_function("RENDER_LUMINANCE", &vtkLightingMapPass::RENDER_LUMINANCE, emscripten::allow_raw_pointers())
    .class_function("RENDER_NORMALS", &vtkLightingMapPass::RENDER_NORMALS, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkLightingMapPass_0_2_constants) {
    typedef vtkLightingMapPass::RenderMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkLightingMapPass_RenderMode_LUMINANCE", vtkLightingMapPass::LUMINANCE },
      { "vtkLightingMapPass_RenderMode_NORMALS", vtkLightingMapPass::NORMALS },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

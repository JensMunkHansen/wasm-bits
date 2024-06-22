// JavaScript wrapper for vtkArrayRenderer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkArrayRendererEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkArrayRenderer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkShader.h"
#include "vtkStringToken.h"
#include "vtkDataArray.h"
#include "vtkArrayRenderer.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkArrayRenderer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkArrayRenderer>(vtkArrayRenderer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayRenderer_class) {
  using ElementShape=vtkArrayRenderer::ElementShape;
  emscripten::class_<vtkArrayRenderer, emscripten::base<vtkMapper>>("vtkArrayRenderer")
    .smart_ptr<vtkSmartPointer<vtkArrayRenderer>>("vtkSmartPointer<vtkArrayRenderer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayRenderer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayRenderer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayRenderer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayRenderer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayRenderer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayRenderer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayRenderer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("PrepareColormap", &vtkArrayRenderer::PrepareColormap, emscripten::allow_raw_pointers())
    .function("Render", &vtkArrayRenderer::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkArrayRenderer::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetHasOpaque", &vtkArrayRenderer::GetHasOpaque)
    .function("SetHasOpaque", &vtkArrayRenderer::SetHasOpaque)
    .function("GetHasTranslucent", &vtkArrayRenderer::GetHasTranslucent)
    .function("SetHasTranslucent", &vtkArrayRenderer::SetHasTranslucent)
    .function("HasOpaqueGeometry", &vtkArrayRenderer::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkArrayRenderer::HasTranslucentPolygonalGeometry)
    .function("SetVertexShaderSource", emscripten::optional_override([](vtkArrayRenderer& self, const std::string & arg_0) -> void {  return self.SetVertexShaderSource( arg_0.c_str());}))
    .function("GetVertexShaderSource", emscripten::optional_override([](vtkArrayRenderer& self) -> std::string {  return self.GetVertexShaderSource();}))
    .function("SetFragmentShaderSource", emscripten::optional_override([](vtkArrayRenderer& self, const std::string & arg_0) -> void {  return self.SetFragmentShaderSource( arg_0.c_str());}))
    .function("GetFragmentShaderSource", emscripten::optional_override([](vtkArrayRenderer& self) -> std::string {  return self.GetFragmentShaderSource();}))
    .function("ResetModsToDefault", &vtkArrayRenderer::ResetModsToDefault)
    .function("AddMod", &vtkArrayRenderer::AddMod)
    .function("AddMods", &vtkArrayRenderer::AddMods)
    .function("RemoveMod", &vtkArrayRenderer::RemoveMod)
    .function("RemoveAllMods", &vtkArrayRenderer::RemoveAllMods)
    .function("GetShader", &vtkArrayRenderer::GetShader, emscripten::allow_raw_pointers())
    .function("BindArrayToTexture", &vtkArrayRenderer::BindArrayToTexture, emscripten::allow_raw_pointers())
    .function("SetNumberOfInstances", &vtkArrayRenderer::SetNumberOfInstances)
    .function("SetNumberOfElements", &vtkArrayRenderer::SetNumberOfElements)
    .function("SetElementType", &vtkArrayRenderer::SetElementType);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkArrayRenderer_0_2_constants) {
    typedef vtkArrayRenderer::ElementShape cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkArrayRenderer_ElementShape_Point", vtkArrayRenderer::Point },
      { "vtkArrayRenderer_ElementShape_Line", vtkArrayRenderer::Line },
      { "vtkArrayRenderer_ElementShape_LineStrip", vtkArrayRenderer::LineStrip },
      { "vtkArrayRenderer_ElementShape_Triangle", vtkArrayRenderer::Triangle },
      { "vtkArrayRenderer_ElementShape_TriangleStrip", vtkArrayRenderer::TriangleStrip },
      { "vtkArrayRenderer_ElementShape_TriangleFan", vtkArrayRenderer::TriangleFan },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

// JavaScript wrapper for vtkTextRenderer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextRendererEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTextRenderer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkTextProperty.h"
#include "vtkImageData.h"
#include "vtkPath.h"
#include "vtkTextRenderer.h"


EMSCRIPTEN_BINDINGS(vtkTextRendererCleanup_class) {
  emscripten::class_<vtkTextRendererCleanup>("vtkTextRendererCleanup")
    .smart_ptr<std::shared_ptr<vtkTextRendererCleanup>>("std::shared_ptr<vtkTextRendererCleanup>")
    .constructor(&std::make_shared<vtkTextRendererCleanup>);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTextRenderer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTextRenderer>(vtkTextRenderer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextRenderer_class) {
  using Backend=vtkTextRenderer::Backend;
  emscripten::class_<vtkTextRenderer, emscripten::base<vtkObject>>("vtkTextRenderer")
    .smart_ptr<vtkSmartPointer<vtkTextRenderer>>("vtkSmartPointer<vtkTextRenderer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextRenderer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextRenderer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextRenderer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextRenderer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextRenderer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextRenderer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextRenderer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetInstance", &vtkTextRenderer::GetInstance, emscripten::allow_raw_pointers())
    .function("SetDefaultBackend", &vtkTextRenderer::SetDefaultBackend)
    .function("GetDefaultBackend", &vtkTextRenderer::GetDefaultBackend)
    .function("DetectBackend", &vtkTextRenderer::DetectBackend)
    .function("FreeTypeIsSupported", &vtkTextRenderer::FreeTypeIsSupported)
    .function("MathTextIsSupported", &vtkTextRenderer::MathTextIsSupported)
    .function("GetConstrainedFontSize", &vtkTextRenderer::GetConstrainedFontSize, emscripten::allow_raw_pointers())
    .function("StringToPath", &vtkTextRenderer::StringToPath, emscripten::allow_raw_pointers())
    .function("SetScaleToPowerOfTwo", &vtkTextRenderer::SetScaleToPowerOfTwo);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTextRenderer_0_2_constants) {
    typedef vtkTextRenderer::Backend cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkTextRenderer_Backend_Default", vtkTextRenderer::Default },
      { "vtkTextRenderer_Backend_Detect", vtkTextRenderer::Detect },
      { "vtkTextRenderer_Backend_FreeType", vtkTextRenderer::FreeType },
      { "vtkTextRenderer_Backend_MathText", vtkTextRenderer::MathText },
      { "vtkTextRenderer_Backend_UserBackend", vtkTextRenderer::UserBackend },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

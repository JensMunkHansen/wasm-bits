// JavaScript wrapper for vtkMathTextFreeTypeTextRenderer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkMathTextFreeTypeTextRendererEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkMathTextFreeTypeTextRenderer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMathTextFreeTypeTextRenderer.h"

template<> void emscripten::internal::raw_destructor<vtkMathTextFreeTypeTextRenderer>(vtkMathTextFreeTypeTextRenderer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMathTextFreeTypeTextRenderer_class) {
  emscripten::class_<vtkMathTextFreeTypeTextRenderer, emscripten::base<vtkTextRenderer>>("vtkMathTextFreeTypeTextRenderer")
    .smart_ptr<vtkSmartPointer<vtkMathTextFreeTypeTextRenderer>>("vtkSmartPointer<vtkMathTextFreeTypeTextRenderer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMathTextFreeTypeTextRenderer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMathTextFreeTypeTextRenderer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMathTextFreeTypeTextRenderer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMathTextFreeTypeTextRenderer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMathTextFreeTypeTextRenderer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMathTextFreeTypeTextRenderer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMathTextFreeTypeTextRenderer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FreeTypeIsSupported", &vtkMathTextFreeTypeTextRenderer::FreeTypeIsSupported)
    .function("MathTextIsSupported", &vtkMathTextFreeTypeTextRenderer::MathTextIsSupported);
}

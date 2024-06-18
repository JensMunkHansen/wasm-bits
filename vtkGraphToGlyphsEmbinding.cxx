// JavaScript wrapper for vtkGraphToGlyphs with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGraphToGlyphsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGraphToGlyphs.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkGraphToGlyphs.h"

template<> void emscripten::internal::raw_destructor<vtkGraphToGlyphs>(vtkGraphToGlyphs * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphToGlyphs_class) {
  emscripten::class_<vtkGraphToGlyphs, emscripten::base<vtkPolyDataAlgorithm>>("vtkGraphToGlyphs")
    .smart_ptr<vtkSmartPointer<vtkGraphToGlyphs>>("vtkSmartPointer<vtkGraphToGlyphs>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphToGlyphs>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphToGlyphs::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphToGlyphs& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphToGlyphs::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphToGlyphs::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphToGlyphs::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphToGlyphs& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGlyphType", &vtkGraphToGlyphs::SetGlyphType)
    .function("GetGlyphType", &vtkGraphToGlyphs::GetGlyphType)
    .function("SetFilled", &vtkGraphToGlyphs::SetFilled)
    .function("GetFilled", &vtkGraphToGlyphs::GetFilled)
    .function("FilledOn", &vtkGraphToGlyphs::FilledOn)
    .function("FilledOff", &vtkGraphToGlyphs::FilledOff)
    .function("SetScreenSize", &vtkGraphToGlyphs::SetScreenSize)
    .function("GetScreenSize", &vtkGraphToGlyphs::GetScreenSize)
    .function("SetRenderer", &vtkGraphToGlyphs::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkGraphToGlyphs::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetScaling", &vtkGraphToGlyphs::SetScaling)
    .function("GetScaling", &vtkGraphToGlyphs::GetScaling)
    .function("GetMTime", &vtkGraphToGlyphs::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkGraphToGlyphs_0_2_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "vtkGraphToGlyphs_VERTEX", vtkGraphToGlyphs::VERTEX },
      { "vtkGraphToGlyphs_DASH", vtkGraphToGlyphs::DASH },
      { "vtkGraphToGlyphs_CROSS", vtkGraphToGlyphs::CROSS },
      { "vtkGraphToGlyphs_THICKCROSS", vtkGraphToGlyphs::THICKCROSS },
      { "vtkGraphToGlyphs_TRIANGLE", vtkGraphToGlyphs::TRIANGLE },
      { "vtkGraphToGlyphs_SQUARE", vtkGraphToGlyphs::SQUARE },
      { "vtkGraphToGlyphs_CIRCLE", vtkGraphToGlyphs::CIRCLE },
      { "vtkGraphToGlyphs_DIAMOND", vtkGraphToGlyphs::DIAMOND },
      { "vtkGraphToGlyphs_SPHERE", vtkGraphToGlyphs::SPHERE },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

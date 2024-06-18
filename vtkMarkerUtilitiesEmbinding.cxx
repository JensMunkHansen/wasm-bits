// JavaScript wrapper for vtkMarkerUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkMarkerUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkMarkerUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkMarkerUtilities.h"

template<> void emscripten::internal::raw_destructor<vtkMarkerUtilities>(vtkMarkerUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMarkerUtilities_class) {
  emscripten::class_<vtkMarkerUtilities, emscripten::base<vtkObject>>("vtkMarkerUtilities")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarkerUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMarkerUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMarkerUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMarkerUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMarkerUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMarkerUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GenerateMarker", &vtkMarkerUtilities::GenerateMarker, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkMarkerUtilities_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkMarkerUtilities_NONE", vtkMarkerUtilities::NONE },
      { "vtkMarkerUtilities_CROSS", vtkMarkerUtilities::CROSS },
      { "vtkMarkerUtilities_PLUS", vtkMarkerUtilities::PLUS },
      { "vtkMarkerUtilities_SQUARE", vtkMarkerUtilities::SQUARE },
      { "vtkMarkerUtilities_CIRCLE", vtkMarkerUtilities::CIRCLE },
      { "vtkMarkerUtilities_DIAMOND", vtkMarkerUtilities::DIAMOND },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

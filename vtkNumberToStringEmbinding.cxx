// JavaScript wrapper for vtkNumberToString with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkNumberToStringEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkNumberToString.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkNumberToString.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkNumberToString_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkNumberToString_class) {
  emscripten::class_<vtkNumberToString>("vtkNumberToString")
    .function("SetLowExponent", &vtkNumberToString::SetLowExponent)
    .function("GetLowExponent", &vtkNumberToString::GetLowExponent)
    .function("SetHighExponent", &vtkNumberToString::SetHighExponent)
    .function("GetHighExponent", &vtkNumberToString::GetHighExponent)
    .function("SetNotation", &vtkNumberToString::SetNotation)
    .function("GetNotation", &vtkNumberToString::GetNotation)
    .function("SetPrecision", &vtkNumberToString::SetPrecision)
    .function("GetPrecision", &vtkNumberToString::GetPrecision)
    .function("Convert", emscripten::select_overload<std::string(vtkNumberToString&, double)>([](vtkNumberToString& self, double arg_0) -> std::string { return self.Convert( arg_0); }))
    .function("Convert", emscripten::select_overload<std::string(vtkNumberToString&, float)>([](vtkNumberToString& self, float arg_0) -> std::string { return self.Convert( arg_0); }));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkNumberToString_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkNumberToString_Mixed", vtkNumberToString::Mixed },
      { "vtkNumberToString_Scientific", vtkNumberToString::Scientific },
      { "vtkNumberToString_Fixed", vtkNumberToString::Fixed },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

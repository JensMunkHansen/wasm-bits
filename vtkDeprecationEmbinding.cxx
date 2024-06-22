// JavaScript wrapper for vtkDeprecation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDeprecationEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDeprecation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDeprecation.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkDeprecation_0_1_constants) {
  const struct { const char *name; long long value; }
    constants[2] = {
      { "VTK_DEPRECATION_LEVEL", VTK_VERSION_NUMBER_QUICK },
      { "VTK_MINIMUM_DEPRECATION_LEVEL", VTK_VERSION_CHECK(9, 1, 0) },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

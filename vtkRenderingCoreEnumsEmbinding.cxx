// JavaScript wrapper for vtkRenderingCoreEnums with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCoreEnumsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderingCoreEnums.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkRenderingCoreEnums.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkRenderingCoreEnums_0_1_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "VTK_MARKER_NONE", VTK_MARKER_NONE },
      { "VTK_MARKER_CROSS", VTK_MARKER_CROSS },
      { "VTK_MARKER_PLUS", VTK_MARKER_PLUS },
      { "VTK_MARKER_SQUARE", VTK_MARKER_SQUARE },
      { "VTK_MARKER_CIRCLE", VTK_MARKER_CIRCLE },
      { "VTK_MARKER_DIAMOND", VTK_MARKER_DIAMOND },
      { "VTK_MARKER_UNKNOWN", VTK_MARKER_UNKNOWN },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

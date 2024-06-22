// JavaScript wrapper for vtkTemplateAliasMacro with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTemplateAliasMacroEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkTemplateAliasMacro.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkTemplateAliasMacro.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkTemplateAliasMacro_0_1_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "VTK_USE_INT8", 1 },
      { "VTK_USE_UINT8", 1 },
      { "VTK_USE_INT16", 1 },
      { "VTK_USE_UINT16", 1 },
      { "VTK_USE_INT32", 1 },
      { "VTK_USE_UINT32", 1 },
      { "VTK_USE_INT64", 1 },
      { "VTK_USE_UINT64", 1 },
      { "VTK_USE_FLOAT32", 1 },
      { "VTK_USE_FLOAT64", 1 },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

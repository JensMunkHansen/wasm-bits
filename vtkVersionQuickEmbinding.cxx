// JavaScript wrapper for vtkVersionQuick with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkVersionQuickEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkVersionQuick.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkVersionQuick.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkVersionQuick_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_MAJOR_VERSION", 9 },
      { "VTK_MINOR_VERSION", 3 },
      { "VTK_EPOCH_VERSION", 20230101 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkVersionQuick_1_1_constants) {
  emscripten::constant("VTK_VERSION_NUMBER_QUICK", VTK_VERSION_CHECK(VTK_MAJOR_VERSION, VTK_MINOR_VERSION, VTK_EPOCH_VERSION));
}

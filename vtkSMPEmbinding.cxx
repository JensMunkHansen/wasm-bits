// JavaScript wrapper for vtkSMP with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkSMPEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkSMP.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkSMP.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkSMP_0_1_constants) {
  emscripten::constant("VTK_SMP_BACKEND", std::string("Sequential"));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkSMP_1_1_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "VTK_SMP_ENABLE_OPENMP", 0 },
      { "VTK_SMP_ENABLE_SEQUENTIAL", 1 },
      { "VTK_SMP_ENABLE_STDTHREAD", 1 },
      { "VTK_SMP_ENABLE_TBB", 0 },
      { "VTK_SMP_DEFAULT_IMPLEMENTATION_OPENMP", 0 },
      { "VTK_SMP_DEFAULT_IMPLEMENTATION_SEQUENTIAL", 1 },
      { "VTK_SMP_DEFAULT_IMPLEMENTATION_STDTHREAD", 0 },
      { "VTK_SMP_DEFAULT_IMPLEMENTATION_TBB", 0 },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

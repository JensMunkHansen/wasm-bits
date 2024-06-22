// JavaScript wrapper for vtkPythagoreanQuadruples with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPythagoreanQuadruplesEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPythagoreanQuadruples.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkPythagoreanQuadruples.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkPythagoreanQuadruples_0_1_constants) {
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkPythagoreanQuadruples_1_1_constants) {
  emscripten::constant("vtkMaxPythagoreanQuadrupleId", sizeof(vtkPythagoreanQuadruples) / sizeof(vtkPythagoreanQuadruples[0]) / 4 - 1);
}

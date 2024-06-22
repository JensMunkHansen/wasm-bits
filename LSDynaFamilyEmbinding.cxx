// JavaScript wrapper for LSDynaFamily with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLSDyna.js/vtkIOLSDyna.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLSDyna.js/LSDynaFamilyEmbinding.cxx \
 /home/jmh/github/vtk/IO/LSDyna/LSDynaFamily.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "LSDynaFamily.h"

EMSCRIPTEN_BINDINGS(vtkIOLSDyna_LSDynaFamily_0_1_constants) {
  emscripten::constant("VTK_LSDYNA_BADFILE", -1);
}

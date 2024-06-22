// JavaScript wrapper for vtkTypeTraits with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkTypeTraitsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkTypeTraits.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkTypeTraits.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkTypeTraits_0_1_constants) {
  emscripten::constant("VTK_TYPE_LONG_LONG_FORMAT", std::string("%ll"));
}

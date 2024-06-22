// JavaScript wrapper for vtkVersionMacros with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkVersionMacrosEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkVersionMacros.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkVersionMacros.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkVersionMacros_0_1_constants) {
  emscripten::constant("VTK_BUILD_VERSION", 20240614);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkVersionMacros_1_1_constants) {
  emscripten::constant("VTK_VERSION", std::string("9.3.20240614"));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkVersionMacros_2_1_constants) {
  emscripten::constant("VTK_SOURCE_VERSION", std::string("vtk version " VTK_VERSION));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkVersionMacros_3_1_constants) {
  emscripten::constant("VTK_VERSION_NUMBER", VTK_VERSION_CHECK(VTK_MAJOR_VERSION, VTK_MINOR_VERSION, VTK_BUILD_VERSION));
}

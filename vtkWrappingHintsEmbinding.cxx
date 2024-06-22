// JavaScript wrapper for vtkWrappingHints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkWrappingHintsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkWrappingHints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkWrappingHints.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkWrappingHints_0_1_constants) {
  emscripten::constant("VTK_MARSHAL_EXCLUDE_REASON_IS_REDUNDANT", std::string("is redundant"));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkWrappingHints_1_1_constants) {
  emscripten::constant("VTK_MARSHAL_EXCLUDE_REASON_IS_INTERNAL", std::string("is internal"));
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkWrappingHints_2_1_constants) {
  emscripten::constant("VTK_MARSHAL_EXCLUDE_REASON_NOT_SUPPORTED", std::string("(de)serialization is not supported for this type of property"));
}

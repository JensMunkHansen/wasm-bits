// JavaScript wrapper for vtkColor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkColorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkColor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkColor.h"


EMSCRIPTEN_BINDINGS(vtkColor3ub_class) {
  emscripten::class_<vtkColor3ub, emscripten::base<vtkColor3<unsigned char>>>("vtkColor3ub");
}

EMSCRIPTEN_BINDINGS(vtkColor3f_class) {
  emscripten::class_<vtkColor3f, emscripten::base<vtkColor3<float>>>("vtkColor3f");
}

EMSCRIPTEN_BINDINGS(vtkColor3d_class) {
  emscripten::class_<vtkColor3d, emscripten::base<vtkColor3<double>>>("vtkColor3d");
}

EMSCRIPTEN_BINDINGS(vtkColor4ub_class) {
  emscripten::class_<vtkColor4ub, emscripten::base<vtkColor4<unsigned char>>>("vtkColor4ub");
}

EMSCRIPTEN_BINDINGS(vtkColor4f_class) {
  emscripten::class_<vtkColor4f, emscripten::base<vtkColor4<float>>>("vtkColor4f");
}

EMSCRIPTEN_BINDINGS(vtkColor4d_class) {
  emscripten::class_<vtkColor4d, emscripten::base<vtkColor4<double>>>("vtkColor4d");
}

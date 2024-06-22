// JavaScript wrapper for vtkRect with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkRectEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkRect.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkRect.h"


EMSCRIPTEN_BINDINGS(vtkRecti_class) {
  emscripten::class_<vtkRecti, emscripten::base<vtkRect<int>>>("vtkRecti");
}

EMSCRIPTEN_BINDINGS(vtkRectf_class) {
  emscripten::class_<vtkRectf, emscripten::base<vtkRect<float>>>("vtkRectf");
}

EMSCRIPTEN_BINDINGS(vtkRectd_class) {
  emscripten::class_<vtkRectd, emscripten::base<vtkRect<double>>>("vtkRectd");
}

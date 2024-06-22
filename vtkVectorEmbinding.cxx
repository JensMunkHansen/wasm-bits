// JavaScript wrapper for vtkVector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkVectorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkVector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkTuple.h"
#include "vtkVector.h"


EMSCRIPTEN_BINDINGS(vtkVector2i_class) {
  emscripten::class_<vtkVector2i, emscripten::base<vtkVector2<int>>>("vtkVector2i")
    .function("Normalized", &vtkVector2i::Normalized);
}

EMSCRIPTEN_BINDINGS(vtkVector2f_class) {
  emscripten::class_<vtkVector2f, emscripten::base<vtkVector2<float>>>("vtkVector2f")
    .function("Normalized", &vtkVector2f::Normalized);
}

EMSCRIPTEN_BINDINGS(vtkVector2d_class) {
  emscripten::class_<vtkVector2d, emscripten::base<vtkVector2<double>>>("vtkVector2d")
    .function("Normalized", &vtkVector2d::Normalized);
}

EMSCRIPTEN_BINDINGS(vtkVector3i_class) {
  emscripten::class_<vtkVector3i, emscripten::base<vtkVector3<int>>>("vtkVector3i")
    .function("Normalized", &vtkVector3i::Normalized)
    .function("Cross", &vtkVector3i::Cross);
}

EMSCRIPTEN_BINDINGS(vtkVector3f_class) {
  emscripten::class_<vtkVector3f, emscripten::base<vtkVector3<float>>>("vtkVector3f")
    .function("Normalized", &vtkVector3f::Normalized)
    .function("Cross", &vtkVector3f::Cross);
}

EMSCRIPTEN_BINDINGS(vtkVector3d_class) {
  emscripten::class_<vtkVector3d, emscripten::base<vtkVector3<double>>>("vtkVector3d")
    .function("Normalized", &vtkVector3d::Normalized)
    .function("Cross", &vtkVector3d::Cross);
}

EMSCRIPTEN_BINDINGS(vtkVector4i_class) {
  emscripten::class_<vtkVector4i, emscripten::base<vtkVector4<int>>>("vtkVector4i")
    .function("Normalized", &vtkVector4i::Normalized);
}

EMSCRIPTEN_BINDINGS(vtkVector4d_class) {
  emscripten::class_<vtkVector4d, emscripten::base<vtkVector4<double>>>("vtkVector4d")
    .function("Normalized", &vtkVector4d::Normalized);
}

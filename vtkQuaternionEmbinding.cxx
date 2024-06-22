// JavaScript wrapper for vtkQuaternion with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkQuaternionEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkQuaternion.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkQuaternion.h"


EMSCRIPTEN_BINDINGS(vtkQuaternionf_class) {
  emscripten::class_<vtkQuaternionf, emscripten::base<vtkQuaternion<float>>>("vtkQuaternionf")
    .function("Identity", &vtkQuaternionf::Identity)
    .function("Normalized", &vtkQuaternionf::Normalized)
    .function("Conjugated", &vtkQuaternionf::Conjugated)
    .function("Inverse", &vtkQuaternionf::Inverse)
    .function("UnitLog", &vtkQuaternionf::UnitLog)
    .function("UnitExp", &vtkQuaternionf::UnitExp)
    .function("NormalizedWithAngleInDegrees", &vtkQuaternionf::NormalizedWithAngleInDegrees)
    .function("Slerp", &vtkQuaternionf::Slerp)
    .function("InnerPoint", &vtkQuaternionf::InnerPoint);
}

EMSCRIPTEN_BINDINGS(vtkQuaterniond_class) {
  emscripten::class_<vtkQuaterniond, emscripten::base<vtkQuaternion<double>>>("vtkQuaterniond")
    .function("Identity", &vtkQuaterniond::Identity)
    .function("Normalized", &vtkQuaterniond::Normalized)
    .function("Conjugated", &vtkQuaterniond::Conjugated)
    .function("Inverse", &vtkQuaterniond::Inverse)
    .function("UnitLog", &vtkQuaterniond::UnitLog)
    .function("UnitExp", &vtkQuaterniond::UnitExp)
    .function("NormalizedWithAngleInDegrees", &vtkQuaterniond::NormalizedWithAngleInDegrees)
    .function("Slerp", &vtkQuaterniond::Slerp)
    .function("InnerPoint", &vtkQuaterniond::InnerPoint);
}

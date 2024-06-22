// JavaScript wrapper for vtkArrayCoordinates with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArrayCoordinatesEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArrayCoordinates.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkArrayCoordinates.h"


EMSCRIPTEN_BINDINGS(vtkArrayCoordinates_class) {
  emscripten::class_<vtkArrayCoordinates>("vtkArrayCoordinates")
    .function("GetDimensions", &vtkArrayCoordinates::GetDimensions)
    .function("SetDimensions", &vtkArrayCoordinates::SetDimensions)
    .function("GetCoordinate", &vtkArrayCoordinates::GetCoordinate)
    .function("SetCoordinate", &vtkArrayCoordinates::SetCoordinate);
}

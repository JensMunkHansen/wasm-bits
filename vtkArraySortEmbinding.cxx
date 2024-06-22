// JavaScript wrapper for vtkArraySort with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArraySortEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArraySort.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkArraySort.h"


EMSCRIPTEN_BINDINGS(vtkArraySort_class) {
  emscripten::class_<vtkArraySort>("vtkArraySort")
    .function("GetDimensions", &vtkArraySort::GetDimensions)
    .function("SetDimensions", &vtkArraySort::SetDimensions);
}

// JavaScript wrapper for vtkMarchingCubesPolygonCases with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMarchingCubesPolygonCasesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMarchingCubesPolygonCases.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkMarchingCubesPolygonCases.h"


EMSCRIPTEN_BINDINGS(vtkMarchingCubesPolygonCases_class) {
  emscripten::class_<vtkMarchingCubesPolygonCases>("vtkMarchingCubesPolygonCases");
}

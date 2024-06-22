// JavaScript wrapper for vtkMarchingSquaresLineCases with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMarchingSquaresLineCasesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMarchingSquaresLineCases.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkMarchingSquaresLineCases.h"


EMSCRIPTEN_BINDINGS(vtkMarchingSquaresLineCases_class) {
  emscripten::class_<vtkMarchingSquaresLineCases>("vtkMarchingSquaresLineCases");
}

// JavaScript wrapper for vtkMarchingCubesTriangleCases with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMarchingCubesTriangleCasesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMarchingCubesTriangleCases.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkMarchingCubesTriangleCases.h"


EMSCRIPTEN_BINDINGS(vtkMarchingCubesTriangleCases_class) {
  emscripten::class_<vtkMarchingCubesTriangleCases>("vtkMarchingCubesTriangleCases");
}

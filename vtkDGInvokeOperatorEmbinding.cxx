// JavaScript wrapper for vtkDGInvokeOperator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGInvokeOperatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGInvokeOperator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDGOperatorEntry.h"
#include "vtkCellAttribute.h"
#include "vtkDGInvokeOperator.h"


EMSCRIPTEN_BINDINGS(vtkDGInvokeOperator_class) {
  emscripten::class_<vtkDGInvokeOperator>("vtkDGInvokeOperator");
}

// JavaScript wrapper for vtkDGOperatorEntry with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkFiltersCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCellGrid.js/vtkDGOperatorEntryEmbinding.cxx \
 /home/jmh/github/vtk/Filters/CellGrid/vtkDGOperatorEntry.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDGOperatorEntry.h"


EMSCRIPTEN_BINDINGS(vtkDGOperatorEntry_class) {
  emscripten::class_<vtkDGOperatorEntry>("vtkDGOperatorEntry")
    .function("GetShaderString", &vtkDGOperatorEntry::GetShaderString);
}

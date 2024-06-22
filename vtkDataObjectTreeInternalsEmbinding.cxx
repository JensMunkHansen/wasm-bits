// JavaScript wrapper for vtkDataObjectTreeInternals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataObjectTreeInternalsEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataObjectTreeInternals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkDataObjectTreeInternals.h"


EMSCRIPTEN_BINDINGS(vtkDataObjectTreeItem_class) {
  emscripten::class_<vtkDataObjectTreeItem>("vtkDataObjectTreeItem");
}

EMSCRIPTEN_BINDINGS(vtkDataObjectTreeInternals_class) {
  emscripten::class_<vtkDataObjectTreeInternals>("vtkDataObjectTreeInternals");
}

EMSCRIPTEN_BINDINGS(vtkDataObjectTreeIndex_class) {
  emscripten::class_<vtkDataObjectTreeIndex>("vtkDataObjectTreeIndex");
}

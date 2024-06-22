// JavaScript wrapper for vtkContourHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkContourHelperEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkContourHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkCellArray.h"
#include "vtkPointData.h"
#include "vtkCellData.h"
#include "vtkCell.h"
#include "vtkDataArray.h"
#include "vtkContourHelper.h"


EMSCRIPTEN_BINDINGS(vtkContourHelper_class) {
  emscripten::class_<vtkContourHelper>("vtkContourHelper")
    .function("Contour", &vtkContourHelper::Contour, emscripten::allow_raw_pointers());
}

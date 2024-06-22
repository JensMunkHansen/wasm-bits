// JavaScript wrapper for vtkHDF5Helper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOERF.js/vtkIOERF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOERF.js/vtkHDF5HelperEmbinding.cxx \
 /home/jmh/github/vtk/IO/ERF/vtkHDF5Helper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkAbstractArray.h"
#include "vtkHDF5Helper.h"


EMSCRIPTEN_BINDINGS(vtkHDF5Helper_class) {
  emscripten::class_<vtkHDF5Helper>("vtkHDF5Helper");
}

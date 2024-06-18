// JavaScript wrapper for vtkAngularPeriodicDataArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAngularPeriodicDataArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAngularPeriodicDataArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkAngularPeriodicDataArray.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkAngularPeriodicDataArray_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_PERIODIC_ARRAY_AXIS_X", 0 },
      { "VTK_PERIODIC_ARRAY_AXIS_Y", 1 },
      { "VTK_PERIODIC_ARRAY_AXIS_Z", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

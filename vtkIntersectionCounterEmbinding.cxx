// JavaScript wrapper for vtkIntersectionCounter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkIntersectionCounterEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkIntersectionCounter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIntersectionCounter.h"


EMSCRIPTEN_BINDINGS(vtkIntersectionCounter_class) {
  emscripten::class_<vtkIntersectionCounter>("vtkIntersectionCounter")
    .function("SetTolerance", &vtkIntersectionCounter::SetTolerance)
    .function("GetTolerance", &vtkIntersectionCounter::GetTolerance)
    .function("AddIntersection", &vtkIntersectionCounter::AddIntersection)
    .function("Reset", &vtkIntersectionCounter::Reset)
    .function("CountIntersections", &vtkIntersectionCounter::CountIntersections);
}

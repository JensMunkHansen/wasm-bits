// JavaScript wrapper for vtkBreakPoint with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkBreakPointEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkBreakPoint.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkBreakPoint.h"


EMSCRIPTEN_BINDINGS(vtkBreakPoint_class) {
  emscripten::class_<vtkBreakPoint>("vtkBreakPoint")
    .class_function("Break", &vtkBreakPoint::Break);
}

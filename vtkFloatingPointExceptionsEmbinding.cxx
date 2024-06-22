// JavaScript wrapper for vtkFloatingPointExceptions with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkFloatingPointExceptionsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkFloatingPointExceptions.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkFloatingPointExceptions.h"


EMSCRIPTEN_BINDINGS(vtkFloatingPointExceptions_class) {
  emscripten::class_<vtkFloatingPointExceptions>("vtkFloatingPointExceptions")
    .class_function("Enable", &vtkFloatingPointExceptions::Enable)
    .class_function("Disable", &vtkFloatingPointExceptions::Disable);
}

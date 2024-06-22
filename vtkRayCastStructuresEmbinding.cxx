// JavaScript wrapper for vtkRayCastStructures with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRayCastStructuresEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRayCastStructures.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkRayCastStructures.h"


EMSCRIPTEN_BINDINGS(vtkRayCastRayInfo_t_class) {
  emscripten::class_<vtkRayCastRayInfo_t>("vtkRayCastRayInfo_t");
}

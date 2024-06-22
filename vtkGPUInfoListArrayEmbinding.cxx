// JavaScript wrapper for vtkGPUInfoListArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGPUInfoListArrayEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGPUInfoListArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkGPUInfoListArray.h"


EMSCRIPTEN_BINDINGS(vtkGPUInfoListArray_class) {
  emscripten::class_<vtkGPUInfoListArray>("vtkGPUInfoListArray");
}

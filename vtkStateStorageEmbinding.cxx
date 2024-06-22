// JavaScript wrapper for vtkStateStorage with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkStateStorageEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkStateStorage.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkStateStorage.h"


EMSCRIPTEN_BINDINGS(vtkStateStorage_class) {
  emscripten::class_<vtkStateStorage>("vtkStateStorage")
    .function("Clear", &vtkStateStorage::Clear);
}

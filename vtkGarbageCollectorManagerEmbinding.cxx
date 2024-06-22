// JavaScript wrapper for vtkGarbageCollectorManager with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkGarbageCollectorManagerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkGarbageCollectorManager.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkGarbageCollectorManager.h"


EMSCRIPTEN_BINDINGS(vtkGarbageCollectorManager_class) {
  emscripten::class_<vtkGarbageCollectorManager>("vtkGarbageCollectorManager")
    .smart_ptr<std::shared_ptr<vtkGarbageCollectorManager>>("std::shared_ptr<vtkGarbageCollectorManager>")
    .constructor(&std::make_shared<vtkGarbageCollectorManager>);
}

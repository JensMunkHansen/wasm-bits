// JavaScript wrapper for vtkDebugLeaksManager with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDebugLeaksManagerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDebugLeaksManager.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDebugLeaksManager.h"


EMSCRIPTEN_BINDINGS(vtkDebugLeaksManager_class) {
  emscripten::class_<vtkDebugLeaksManager>("vtkDebugLeaksManager")
    .smart_ptr<std::shared_ptr<vtkDebugLeaksManager>>("std::shared_ptr<vtkDebugLeaksManager>")
    .constructor(&std::make_shared<vtkDebugLeaksManager>);
}

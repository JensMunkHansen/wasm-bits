// JavaScript wrapper for vtkAtomicMutex with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAtomicMutexEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkAtomicMutex.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkAtomicMutex.h"


EMSCRIPTEN_BINDINGS(vtkAtomicMutex_class) {
  emscripten::class_<vtkAtomicMutex>("vtkAtomicMutex")
    .smart_ptr<std::shared_ptr<vtkAtomicMutex>>("std::shared_ptr<vtkAtomicMutex>")
    .constructor(&std::make_shared<vtkAtomicMutex>)
    .function("lock", &vtkAtomicMutex::lock)
    .function("unlock", &vtkAtomicMutex::unlock);
}

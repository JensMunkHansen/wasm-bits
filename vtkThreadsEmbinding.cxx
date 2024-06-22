// JavaScript wrapper for vtkThreads with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkThreadsEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkThreads.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkThreads.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkThreads_0_1_constants) {
  emscripten::constant("VTK_MAX_THREADS", 64);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkThreads_1_1_constants) {
  emscripten::constant("VTK_THREAD_RETURN_VALUE", std::string("null"));
}

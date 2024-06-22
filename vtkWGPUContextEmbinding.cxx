// JavaScript wrapper for vtkWGPUContext with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWGPUContextEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWGPUContext.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkWGPUContext.h"


EMSCRIPTEN_BINDINGS(vtkWGPUContext_class) {
  emscripten::class_<vtkWGPUContext>("vtkWGPUContext")
    .class_function("LogAvailableAdapters", &vtkWGPUContext::LogAvailableAdapters)
    .class_function("Align", &vtkWGPUContext::Align)
    .class_function("WaitABit", &vtkWGPUContext::WaitABit);
}

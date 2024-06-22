// JavaScript wrapper for vtkTDxMotionEventInfo with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTDxMotionEventInfoEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTDxMotionEventInfo.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkTDxMotionEventInfo.h"


EMSCRIPTEN_BINDINGS(vtkTDxMotionEventInfo_class) {
  emscripten::class_<vtkTDxMotionEventInfo>("vtkTDxMotionEventInfo");
}

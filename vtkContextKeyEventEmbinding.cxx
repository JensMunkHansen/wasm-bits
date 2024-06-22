// JavaScript wrapper for vtkContextKeyEvent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextKeyEventEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextKeyEvent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkVector.h"
#include "vtkContextKeyEvent.h"


EMSCRIPTEN_BINDINGS(vtkContextKeyEvent_class) {
  emscripten::class_<vtkContextKeyEvent>("vtkContextKeyEvent")
    .function("SetInteractor", &vtkContextKeyEvent::SetInteractor, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkContextKeyEvent::GetInteractor, emscripten::allow_raw_pointers())
    .function("SetPosition", &vtkContextKeyEvent::SetPosition)
    .function("GetPosition", &vtkContextKeyEvent::GetPosition)
    .function("GetKeyCode", &vtkContextKeyEvent::GetKeyCode);
}

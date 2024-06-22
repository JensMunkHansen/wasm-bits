// JavaScript wrapper for vtkContextMouseEvent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextMouseEventEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextMouseEvent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkVector.h"
#include "vtkContextMouseEvent.h"


EMSCRIPTEN_BINDINGS(vtkContextMouseEvent_class) {
  emscripten::class_<vtkContextMouseEvent>("vtkContextMouseEvent")
    .function("SetInteractor", &vtkContextMouseEvent::SetInteractor, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkContextMouseEvent::GetInteractor, emscripten::allow_raw_pointers())
    .function("SetPos", &vtkContextMouseEvent::SetPos)
    .function("GetPos", &vtkContextMouseEvent::GetPos)
    .function("SetScenePos", &vtkContextMouseEvent::SetScenePos)
    .function("GetScenePos", &vtkContextMouseEvent::GetScenePos)
    .function("SetScreenPos", &vtkContextMouseEvent::SetScreenPos)
    .function("GetScreenPos", &vtkContextMouseEvent::GetScreenPos)
    .function("SetLastPos", &vtkContextMouseEvent::SetLastPos)
    .function("GetLastPos", &vtkContextMouseEvent::GetLastPos)
    .function("SetLastScenePos", &vtkContextMouseEvent::SetLastScenePos)
    .function("GetLastScenePos", &vtkContextMouseEvent::GetLastScenePos)
    .function("SetLastScreenPos", &vtkContextMouseEvent::SetLastScreenPos)
    .function("GetLastScreenPos", &vtkContextMouseEvent::GetLastScreenPos)
    .function("SetButton", &vtkContextMouseEvent::SetButton)
    .function("GetButton", &vtkContextMouseEvent::GetButton)
    .function("GetModifiers", &vtkContextMouseEvent::GetModifiers);
}
EMSCRIPTEN_BINDINGS(vtkRenderingContext2D_vtkContextMouseEvent_0_2_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "vtkContextMouseEvent_NO_BUTTON", vtkContextMouseEvent::NO_BUTTON },
      { "vtkContextMouseEvent_LEFT_BUTTON", vtkContextMouseEvent::LEFT_BUTTON },
      { "vtkContextMouseEvent_MIDDLE_BUTTON", vtkContextMouseEvent::MIDDLE_BUTTON },
      { "vtkContextMouseEvent_RIGHT_BUTTON", vtkContextMouseEvent::RIGHT_BUTTON },
      { "vtkContextMouseEvent_NO_MODIFIER", vtkContextMouseEvent::NO_MODIFIER },
      { "vtkContextMouseEvent_ALT_MODIFIER", vtkContextMouseEvent::ALT_MODIFIER },
      { "vtkContextMouseEvent_SHIFT_MODIFIER", vtkContextMouseEvent::SHIFT_MODIFIER },
      { "vtkContextMouseEvent_CONTROL_MODIFIER", vtkContextMouseEvent::CONTROL_MODIFIER },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

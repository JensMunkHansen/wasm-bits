// JavaScript wrapper for vtkRenderState with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderStateEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkRenderState.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkRenderer.h"
#include "vtkFrameBufferObjectBase.h"
#include "vtkProp.h"
#include "vtkInformation.h"
#include "vtkRenderState.h"


EMSCRIPTEN_BINDINGS(vtkRenderState_class) {
  emscripten::class_<vtkRenderState>("vtkRenderState")
    .function("IsValid", &vtkRenderState::IsValid)
    .function("GetRenderer", &vtkRenderState::GetRenderer, emscripten::allow_raw_pointers())
    .function("GetFrameBuffer", &vtkRenderState::GetFrameBuffer, emscripten::allow_raw_pointers())
    .function("SetFrameBuffer", &vtkRenderState::SetFrameBuffer, emscripten::allow_raw_pointers())
    .function("GetPropArrayCount", &vtkRenderState::GetPropArrayCount)
    .function("GetRequiredKeys", &vtkRenderState::GetRequiredKeys, emscripten::allow_raw_pointers())
    .function("SetRequiredKeys", &vtkRenderState::SetRequiredKeys, emscripten::allow_raw_pointers());
}

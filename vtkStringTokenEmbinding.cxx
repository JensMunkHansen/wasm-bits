// JavaScript wrapper for vtkStringToken with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkStringTokenEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkStringToken.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkStringToken.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkStringToken_0_1_constants) {
  emscripten::constant("VTK_STRING_TOKEN_SPACE_BEFORE_SUFFIX", 0);
}

EMSCRIPTEN_BINDINGS(vtkStringToken_class) {
  emscripten::class_<vtkStringToken>("vtkStringToken")
    .function("GetHash", &vtkStringToken::GetHash)
    .function("Data", &vtkStringToken::Data)
    .function("IsValid", &vtkStringToken::IsValid)
    .function("HasData", &vtkStringToken::HasData)
    .function("AddChild", &vtkStringToken::AddChild)
    .function("RemoveChild", &vtkStringToken::RemoveChild);
}

// JavaScript wrapper for vtk3DS with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkIOImport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtk3DSEmbinding.cxx \
 /home/jmh/github/vtk/IO/Import/vtk3DS.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtk3DS.h"


EMSCRIPTEN_BINDINGS(vtk3DSList_t_class) {
  emscripten::class_<vtk3DSList_t>("vtk3DSList_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSFace_t_class) {
  emscripten::class_<vtk3DSFace_t>("vtk3DSFace_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSColour_t_class) {
  emscripten::class_<vtk3DSColour_t>("vtk3DSColour_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSOmniLight_t_class) {
  emscripten::class_<vtk3DSOmniLight_t>("vtk3DSOmniLight_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSSpotLight_t_class) {
  emscripten::class_<vtk3DSSpotLight_t>("vtk3DSSpotLight_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSCamera_t_class) {
  emscripten::class_<vtk3DSCamera_t>("vtk3DSCamera_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSMaterial_t_class) {
  emscripten::class_<vtk3DSMaterial_t>("vtk3DSMaterial_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSSummary_t_class) {
  emscripten::class_<vtk3DSSummary_t>("vtk3DSSummary_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSMatProp_t_class) {
  emscripten::class_<vtk3DSMatProp_t>("vtk3DSMatProp_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSMesh_t_class) {
  emscripten::class_<vtk3DSMesh_t>("vtk3DSMesh_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSChunk_t_class) {
  emscripten::class_<vtk3DSChunk_t>("vtk3DSChunk_t");
}

EMSCRIPTEN_BINDINGS(vtk3DSColour_t_24_class) {
  emscripten::class_<vtk3DSColour_t_24>("vtk3DSColour_t_24");
}

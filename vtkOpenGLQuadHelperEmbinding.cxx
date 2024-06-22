// JavaScript wrapper for vtkOpenGLQuadHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLQuadHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLQuadHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkOpenGLRenderWindow.h"
#include "vtkWindow.h"
#include "vtkOpenGLQuadHelper.h"


EMSCRIPTEN_BINDINGS(vtkOpenGLQuadHelper_class) {
  emscripten::class_<vtkOpenGLQuadHelper>("vtkOpenGLQuadHelper")
    .function("Render", &vtkOpenGLQuadHelper::Render)
    .function("ReleaseGraphicsResources", &vtkOpenGLQuadHelper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

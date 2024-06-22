// JavaScript wrapper for vtkOpenGLHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkWindow.h"
#include "vtkOpenGLHelper.h"


EMSCRIPTEN_BINDINGS(vtkOpenGLHelper_class) {
  emscripten::class_<vtkOpenGLHelper>("vtkOpenGLHelper")
    .smart_ptr<std::shared_ptr<vtkOpenGLHelper>>("std::shared_ptr<vtkOpenGLHelper>")
    .constructor(&std::make_shared<vtkOpenGLHelper>)
    .function("ReleaseGraphicsResources", &vtkOpenGLHelper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

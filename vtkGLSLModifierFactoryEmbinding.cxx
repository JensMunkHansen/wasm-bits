// JavaScript wrapper for vtkGLSLModifierFactory with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkGLSLModifierFactoryEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkGLSLModifierFactory.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkGLSLModifierBase.h"
#include "vtkGLSLModifierFactory.h"


EMSCRIPTEN_BINDINGS(vtkGLSLModifierFactory_class) {
  emscripten::class_<vtkGLSLModifierFactory>("vtkGLSLModifierFactory")
    .smart_ptr<std::shared_ptr<vtkGLSLModifierFactory>>("std::shared_ptr<vtkGLSLModifierFactory>")
    .constructor(&std::make_shared<vtkGLSLModifierFactory>)
    .class_function("CreateAMod", &vtkGLSLModifierFactory::CreateAMod, emscripten::allow_raw_pointers());
}

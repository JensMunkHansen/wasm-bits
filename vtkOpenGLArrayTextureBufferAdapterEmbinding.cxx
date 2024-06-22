// JavaScript wrapper for vtkOpenGLArrayTextureBufferAdapter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLArrayTextureBufferAdapterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLArrayTextureBufferAdapter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDataArray.h"
#include "vtkOpenGLRenderWindow.h"
#include "vtkOpenGLArrayTextureBufferAdapter.h"


EMSCRIPTEN_BINDINGS(vtkOpenGLArrayTextureBufferAdapter_class) {
  emscripten::class_<vtkOpenGLArrayTextureBufferAdapter>("vtkOpenGLArrayTextureBufferAdapter")
    .function("Upload", &vtkOpenGLArrayTextureBufferAdapter::Upload, emscripten::allow_raw_pointers());
}

// JavaScript wrapper for vtkIndent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIndentEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkIndent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"

template<> void emscripten::internal::raw_destructor<vtkIndent>(vtkIndent * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIndent_class) {
  emscripten::class_<vtkIndent>("vtkIndent")
    .function("GetNextIndent", &vtkIndent::GetNextIndent);
}

// JavaScript wrapper for vtkPixelExtentIO with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkIOLegacy.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLegacy.js/vtkPixelExtentIOEmbinding.cxx \
 /home/jmh/github/vtk/IO/Legacy/vtkPixelExtentIO.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkPixelExtent.h"
#include "vtkPixelExtentIO.h"


EMSCRIPTEN_BINDINGS(vtkPixelExtentIO_class) {
  emscripten::class_<vtkPixelExtentIO>("vtkPixelExtentIO")
    .class_function("Write", emscripten::select_overload<void( int, const std::string &, const vtkPixelExtent&)>([]( int arg_0, const std::string & arg_1, const vtkPixelExtent& arg_2) -> void { return vtkPixelExtentIO::Write( arg_0, arg_1.c_str(), arg_2); }));
}

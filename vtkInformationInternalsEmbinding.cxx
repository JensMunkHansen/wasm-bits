// JavaScript wrapper for vtkInformationInternals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationInternalsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationInternals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkInformationInternals.h"


EMSCRIPTEN_BINDINGS(vtkInformationInternals_class) {
  emscripten::class_<vtkInformationInternals>("vtkInformationInternals")
    .smart_ptr<std::shared_ptr<vtkInformationInternals>>("std::shared_ptr<vtkInformationInternals>")
    .constructor(&std::make_shared<vtkInformationInternals>);
}

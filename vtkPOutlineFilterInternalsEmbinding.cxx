// JavaScript wrapper for vtkPOutlineFilterInternals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPOutlineFilterInternalsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPOutlineFilterInternals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkMultiProcessController.h"
#include "vtkPOutlineFilterInternals.h"


EMSCRIPTEN_BINDINGS(vtkPOutlineFilterInternals_class) {
  emscripten::class_<vtkPOutlineFilterInternals>("vtkPOutlineFilterInternals")
    .smart_ptr<std::shared_ptr<vtkPOutlineFilterInternals>>("std::shared_ptr<vtkPOutlineFilterInternals>")
    .constructor(&std::make_shared<vtkPOutlineFilterInternals>)
    .function("SetController", &vtkPOutlineFilterInternals::SetController, emscripten::allow_raw_pointers())
    .function("SetIsCornerSource", &vtkPOutlineFilterInternals::SetIsCornerSource)
    .function("SetCornerFactor", &vtkPOutlineFilterInternals::SetCornerFactor);
}

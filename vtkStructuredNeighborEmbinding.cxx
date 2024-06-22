// JavaScript wrapper for vtkStructuredNeighbor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkStructuredNeighborEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkStructuredNeighbor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkStructuredNeighbor.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkStructuredNeighbor_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkStructuredNeighbor_class) {
  using NeighborOrientation=vtkStructuredNeighbor::NeighborOrientation;
  emscripten::class_<vtkStructuredNeighbor>("vtkStructuredNeighbor")
    .smart_ptr<std::shared_ptr<vtkStructuredNeighbor>>("std::shared_ptr<vtkStructuredNeighbor>")
    .constructor(&std::make_shared<vtkStructuredNeighbor>);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkStructuredNeighbor_0_2_constants) {
    typedef vtkStructuredNeighbor::NeighborOrientation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkStructuredNeighbor_NeighborOrientation_SUBSET_LO", vtkStructuredNeighbor::SUBSET_LO },
      { "vtkStructuredNeighbor_NeighborOrientation_LO", vtkStructuredNeighbor::LO },
      { "vtkStructuredNeighbor_NeighborOrientation_ONE_TO_ONE", vtkStructuredNeighbor::ONE_TO_ONE },
      { "vtkStructuredNeighbor_NeighborOrientation_HI", vtkStructuredNeighbor::HI },
      { "vtkStructuredNeighbor_NeighborOrientation_SUBSET_HI", vtkStructuredNeighbor::SUBSET_HI },
      { "vtkStructuredNeighbor_NeighborOrientation_SUBSET_BOTH", vtkStructuredNeighbor::SUBSET_BOTH },
      { "vtkStructuredNeighbor_NeighborOrientation_SUPERSET", vtkStructuredNeighbor::SUPERSET },
      { "vtkStructuredNeighbor_NeighborOrientation_UNDEFINED", vtkStructuredNeighbor::UNDEFINED },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

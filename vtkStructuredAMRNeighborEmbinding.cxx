// JavaScript wrapper for vtkStructuredAMRNeighbor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkStructuredAMRNeighborEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkStructuredAMRNeighbor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkStructuredAMRNeighbor.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkStructuredAMRNeighbor_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkStructuredAMRNeighbor_class) {
  using NeighborRelationship=vtkStructuredAMRNeighbor::NeighborRelationship;
  emscripten::class_<vtkStructuredAMRNeighbor, emscripten::base<vtkStructuredNeighbor>>("vtkStructuredAMRNeighbor")
    .smart_ptr<std::shared_ptr<vtkStructuredAMRNeighbor>>("std::shared_ptr<vtkStructuredAMRNeighbor>")
    .constructor(&std::make_shared<vtkStructuredAMRNeighbor>)
    .function("GetRelationShipString", &vtkStructuredAMRNeighbor::GetRelationShipString);
}
EMSCRIPTEN_BINDINGS(vtkFiltersGeometry_vtkStructuredAMRNeighbor_0_2_constants) {
    typedef vtkStructuredAMRNeighbor::NeighborRelationship cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkStructuredAMRNeighbor_NeighborRelationship_PARENT", vtkStructuredAMRNeighbor::PARENT },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_PARTIALLY_OVERLAPPING_PARENT", vtkStructuredAMRNeighbor::PARTIALLY_OVERLAPPING_PARENT },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_CHILD", vtkStructuredAMRNeighbor::CHILD },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_PARTIALLY_OVERLAPPING_CHILD", vtkStructuredAMRNeighbor::PARTIALLY_OVERLAPPING_CHILD },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_SAME_LEVEL_SIBLING", vtkStructuredAMRNeighbor::SAME_LEVEL_SIBLING },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_COARSE_TO_FINE_SIBLING", vtkStructuredAMRNeighbor::COARSE_TO_FINE_SIBLING },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_FINE_TO_COARSE_SIBLING", vtkStructuredAMRNeighbor::FINE_TO_COARSE_SIBLING },
      { "vtkStructuredAMRNeighbor_NeighborRelationship_UNDEFINED", vtkStructuredAMRNeighbor::UNDEFINED },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

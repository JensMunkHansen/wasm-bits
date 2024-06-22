// JavaScript wrapper for vtkTemporalSnapToTimeStep with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTemporalSnapToTimeStepEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTemporalSnapToTimeStep.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalSnapToTimeStep.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalSnapToTimeStep>(vtkTemporalSnapToTimeStep * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalSnapToTimeStep_class) {
  emscripten::class_<vtkTemporalSnapToTimeStep, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkTemporalSnapToTimeStep")
    .smart_ptr<vtkSmartPointer<vtkTemporalSnapToTimeStep>>("vtkSmartPointer<vtkTemporalSnapToTimeStep>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTemporalSnapToTimeStep>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalSnapToTimeStep::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalSnapToTimeStep& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalSnapToTimeStep::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalSnapToTimeStep::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalSnapToTimeStep::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalSnapToTimeStep& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSnapMode", &vtkTemporalSnapToTimeStep::SetSnapMode)
    .function("GetSnapMode", &vtkTemporalSnapToTimeStep::GetSnapMode)
    .function("SetSnapModeToNearest", &vtkTemporalSnapToTimeStep::SetSnapModeToNearest)
    .function("SetSnapModeToNextBelowOrEqual", &vtkTemporalSnapToTimeStep::SetSnapModeToNextBelowOrEqual)
    .function("SetSnapModeToNextAboveOrEqual", &vtkTemporalSnapToTimeStep::SetSnapModeToNextAboveOrEqual);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkTemporalSnapToTimeStep_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkTemporalSnapToTimeStep_VTK_SNAP_NEAREST", vtkTemporalSnapToTimeStep::VTK_SNAP_NEAREST },
      { "vtkTemporalSnapToTimeStep_VTK_SNAP_NEXTBELOW_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTBELOW_OR_EQUAL },
      { "vtkTemporalSnapToTimeStep_VTK_SNAP_NEXTABOVE_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTABOVE_OR_EQUAL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

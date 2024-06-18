// JavaScript wrapper for vtkLagrangianParticleTracker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkLagrangianParticleTrackerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkLagrangianParticleTracker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLagrangianBasicIntegrationModel.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkLagrangianParticleTracker.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianParticleTracker_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLagrangianParticleTracker>(vtkLagrangianParticleTracker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLagrangianParticleTracker_class) {
  using CellLengthComputation=vtkLagrangianParticleTracker::CellLengthComputation;
  emscripten::class_<vtkLagrangianParticleTracker, emscripten::base<vtkDataObjectAlgorithm>>("vtkLagrangianParticleTracker")
    .smart_ptr<vtkSmartPointer<vtkLagrangianParticleTracker>>("vtkSmartPointer<vtkLagrangianParticleTracker>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLagrangianParticleTracker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangianParticleTracker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLagrangianParticleTracker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLagrangianParticleTracker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLagrangianParticleTracker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLagrangianParticleTracker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLagrangianParticleTracker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIntegrationModel", &vtkLagrangianParticleTracker::SetIntegrationModel, emscripten::allow_raw_pointers())
    .function("GetIntegrationModel", &vtkLagrangianParticleTracker::GetIntegrationModel, emscripten::allow_raw_pointers())
    .function("SetIntegrator", &vtkLagrangianParticleTracker::SetIntegrator, emscripten::allow_raw_pointers())
    .function("GetIntegrator", &vtkLagrangianParticleTracker::GetIntegrator, emscripten::allow_raw_pointers())
    .function("SetGeneratePolyVertexInteractionOutput", &vtkLagrangianParticleTracker::SetGeneratePolyVertexInteractionOutput)
    .function("GetGeneratePolyVertexInteractionOutput", &vtkLagrangianParticleTracker::GetGeneratePolyVertexInteractionOutput)
    .function("SetCellLengthComputationMode", &vtkLagrangianParticleTracker::SetCellLengthComputationMode)
    .function("GetCellLengthComputationMode", &vtkLagrangianParticleTracker::GetCellLengthComputationMode)
    .function("SetStepFactor", &vtkLagrangianParticleTracker::SetStepFactor)
    .function("GetStepFactor", &vtkLagrangianParticleTracker::GetStepFactor)
    .function("SetStepFactorMin", &vtkLagrangianParticleTracker::SetStepFactorMin)
    .function("GetStepFactorMin", &vtkLagrangianParticleTracker::GetStepFactorMin)
    .function("SetStepFactorMax", &vtkLagrangianParticleTracker::SetStepFactorMax)
    .function("GetStepFactorMax", &vtkLagrangianParticleTracker::GetStepFactorMax)
    .function("SetMaximumNumberOfSteps", &vtkLagrangianParticleTracker::SetMaximumNumberOfSteps)
    .function("GetMaximumNumberOfSteps", &vtkLagrangianParticleTracker::GetMaximumNumberOfSteps)
    .function("SetMaximumIntegrationTime", &vtkLagrangianParticleTracker::SetMaximumIntegrationTime)
    .function("GetMaximumIntegrationTime", &vtkLagrangianParticleTracker::GetMaximumIntegrationTime)
    .function("SetAdaptiveStepReintegration", &vtkLagrangianParticleTracker::SetAdaptiveStepReintegration)
    .function("GetAdaptiveStepReintegration", &vtkLagrangianParticleTracker::GetAdaptiveStepReintegration)
    .function("AdaptiveStepReintegrationOn", &vtkLagrangianParticleTracker::AdaptiveStepReintegrationOn)
    .function("AdaptiveStepReintegrationOff", &vtkLagrangianParticleTracker::AdaptiveStepReintegrationOff)
    .function("SetGenerateParticlePathsOutput", &vtkLagrangianParticleTracker::SetGenerateParticlePathsOutput)
    .function("GetGenerateParticlePathsOutput", &vtkLagrangianParticleTracker::GetGenerateParticlePathsOutput)
    .function("GenerateParticlePathsOutputOn", &vtkLagrangianParticleTracker::GenerateParticlePathsOutputOn)
    .function("GenerateParticlePathsOutputOff", &vtkLagrangianParticleTracker::GenerateParticlePathsOutputOff)
    .function("SetSourceData", &vtkLagrangianParticleTracker::SetSourceData, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkLagrangianParticleTracker::GetSource, emscripten::allow_raw_pointers())
    .function("SetSourceConnection", &vtkLagrangianParticleTracker::SetSourceConnection, emscripten::allow_raw_pointers())
    .function("SetSurfaceData", &vtkLagrangianParticleTracker::SetSurfaceData, emscripten::allow_raw_pointers())
    .function("GetSurface", &vtkLagrangianParticleTracker::GetSurface, emscripten::allow_raw_pointers())
    .function("SetSurfaceConnection", &vtkLagrangianParticleTracker::SetSurfaceConnection, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkLagrangianParticleTracker::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("FillOutputPortInformation", &vtkLagrangianParticleTracker::FillOutputPortInformation, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkLagrangianParticleTracker::GetMTime)
    .function("GetNewParticleId", &vtkLagrangianParticleTracker::GetNewParticleId);
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianParticleTracker_0_2_constants) {
    typedef vtkLagrangianParticleTracker::CellLengthComputation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkLagrangianParticleTracker_CellLengthComputation_STEP_CUR_CELL_LENGTH", vtkLagrangianParticleTracker::STEP_CUR_CELL_LENGTH },
      { "vtkLagrangianParticleTracker_CellLengthComputation_STEP_CUR_CELL_VEL_DIR", vtkLagrangianParticleTracker::STEP_CUR_CELL_VEL_DIR },
      { "vtkLagrangianParticleTracker_CellLengthComputation_STEP_CUR_CELL_DIV_THEO", vtkLagrangianParticleTracker::STEP_CUR_CELL_DIV_THEO },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

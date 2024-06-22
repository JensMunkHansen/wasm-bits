// JavaScript wrapper for vtkLagrangianParticle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkLagrangianParticleEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkLagrangianParticle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkPointData.h"
#include "vtkDataSet.h"
#include "vtkIndent.h"
#include "vtkLagrangianParticle.h"

EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianParticle_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkLagrangianParticle_class) {
  using ParticleTermination=vtkLagrangianParticle::ParticleTermination;
  using SurfaceInteraction=vtkLagrangianParticle::SurfaceInteraction;
  emscripten::class_<vtkLagrangianParticle>("vtkLagrangianParticle")
    .function("GetPrevEquationVariables", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPrevEquationVariables()) / sizeof(double);}))
    .function("GetEquationVariables", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetEquationVariables()) / sizeof(double);}))
    .function("GetNextEquationVariables", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetNextEquationVariables()) / sizeof(double);}))
    .function("GetPrevPosition", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPrevPosition()) / sizeof(double);}))
    .function("GetPosition", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPosition()) / sizeof(double);}))
    .function("GetNextPosition", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetNextPosition()) / sizeof(double);}))
    .function("GetPrevVelocity", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPrevVelocity()) / sizeof(double);}))
    .function("GetVelocity", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetVelocity()) / sizeof(double);}))
    .function("GetNextVelocity", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetNextVelocity()) / sizeof(double);}))
    .function("GetPrevUserVariables", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPrevUserVariables()) / sizeof(double);}))
    .function("GetUserVariables", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetUserVariables()) / sizeof(double);}))
    .function("GetNextUserVariables", emscripten::optional_override([](vtkLagrangianParticle& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetNextUserVariables()) / sizeof(double);}))
    .function("GetPrevTrackedUserData", &vtkLagrangianParticle::GetPrevTrackedUserData)
    .function("GetTrackedUserData", &vtkLagrangianParticle::GetTrackedUserData)
    .function("GetNextTrackedUserData", &vtkLagrangianParticle::GetNextTrackedUserData)
    .function("GetThreadedData", &vtkLagrangianParticle::GetThreadedData, emscripten::allow_raw_pointers())
    .function("SetThreadedData", &vtkLagrangianParticle::SetThreadedData, emscripten::allow_raw_pointers())
    .function("MoveToNextPosition", &vtkLagrangianParticle::MoveToNextPosition)
    .function("GetId", &vtkLagrangianParticle::GetId)
    .function("SetParentId", &vtkLagrangianParticle::SetParentId)
    .function("GetParentId", &vtkLagrangianParticle::GetParentId)
    .function("GetSeedId", &vtkLagrangianParticle::GetSeedId)
    .function("GetNumberOfVariables", &vtkLagrangianParticle::GetNumberOfVariables)
    .function("GetNumberOfUserVariables", &vtkLagrangianParticle::GetNumberOfUserVariables)
    .function("GetSeedData", &vtkLagrangianParticle::GetSeedData, emscripten::allow_raw_pointers())
    .function("GetSeedArrayTupleIndex", &vtkLagrangianParticle::GetSeedArrayTupleIndex)
    .function("GetLastSurfaceCellId", &vtkLagrangianParticle::GetLastSurfaceCellId)
    .function("GetLastSurfaceDataSet", &vtkLagrangianParticle::GetLastSurfaceDataSet, emscripten::allow_raw_pointers())
    .function("SetLastSurfaceCell", &vtkLagrangianParticle::SetLastSurfaceCell, emscripten::allow_raw_pointers())
    .function("GetNumberOfSteps", &vtkLagrangianParticle::GetNumberOfSteps)
    .function("SetTermination", &vtkLagrangianParticle::SetTermination)
    .function("GetTermination", &vtkLagrangianParticle::GetTermination)
    .function("SetInteraction", &vtkLagrangianParticle::SetInteraction)
    .function("GetInteraction", &vtkLagrangianParticle::GetInteraction)
    .function("SetUserFlag", &vtkLagrangianParticle::SetUserFlag)
    .function("GetUserFlag", &vtkLagrangianParticle::GetUserFlag)
    .function("SetPInsertPreviousPosition", &vtkLagrangianParticle::SetPInsertPreviousPosition)
    .function("GetPInsertPreviousPosition", &vtkLagrangianParticle::GetPInsertPreviousPosition)
    .function("SetPManualShift", &vtkLagrangianParticle::SetPManualShift)
    .function("GetPManualShift", &vtkLagrangianParticle::GetPManualShift)
    .function("GetIntegrationTime", &vtkLagrangianParticle::GetIntegrationTime)
    .function("GetPrevIntegrationTime", &vtkLagrangianParticle::GetPrevIntegrationTime)
    .function("SetIntegrationTime", &vtkLagrangianParticle::SetIntegrationTime)
    .function("GetPositionVectorMagnitude", &vtkLagrangianParticle::GetPositionVectorMagnitude);
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianParticle_0_2_constants) {
    typedef vtkLagrangianParticle::ParticleTermination cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[9] = {
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_NOT_TERMINATED", vtkLagrangianParticle::PARTICLE_TERMINATION_NOT_TERMINATED },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_SURF_TERMINATED", vtkLagrangianParticle::PARTICLE_TERMINATION_SURF_TERMINATED },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_FLIGHT_TERMINATED", vtkLagrangianParticle::PARTICLE_TERMINATION_FLIGHT_TERMINATED },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_SURF_BREAK", vtkLagrangianParticle::PARTICLE_TERMINATION_SURF_BREAK },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_OUT_OF_DOMAIN", vtkLagrangianParticle::PARTICLE_TERMINATION_OUT_OF_DOMAIN },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_OUT_OF_STEPS", vtkLagrangianParticle::PARTICLE_TERMINATION_OUT_OF_STEPS },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_OUT_OF_TIME", vtkLagrangianParticle::PARTICLE_TERMINATION_OUT_OF_TIME },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_TRANSFERRED", vtkLagrangianParticle::PARTICLE_TERMINATION_TRANSFERRED },
      { "vtkLagrangianParticle_ParticleTermination_PARTICLE_TERMINATION_ABORTED", vtkLagrangianParticle::PARTICLE_TERMINATION_ABORTED },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersFlowPaths_vtkLagrangianParticle_1_2_constants) {
    typedef vtkLagrangianParticle::SurfaceInteraction cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkLagrangianParticle_SurfaceInteraction_SURFACE_INTERACTION_NO_INTERACTION", vtkLagrangianParticle::SURFACE_INTERACTION_NO_INTERACTION },
      { "vtkLagrangianParticle_SurfaceInteraction_SURFACE_INTERACTION_TERMINATED", vtkLagrangianParticle::SURFACE_INTERACTION_TERMINATED },
      { "vtkLagrangianParticle_SurfaceInteraction_SURFACE_INTERACTION_BREAK", vtkLagrangianParticle::SURFACE_INTERACTION_BREAK },
      { "vtkLagrangianParticle_SurfaceInteraction_SURFACE_INTERACTION_BOUNCE", vtkLagrangianParticle::SURFACE_INTERACTION_BOUNCE },
      { "vtkLagrangianParticle_SurfaceInteraction_SURFACE_INTERACTION_PASS", vtkLagrangianParticle::SURFACE_INTERACTION_PASS },
      { "vtkLagrangianParticle_SurfaceInteraction_SURFACE_INTERACTION_OTHER", vtkLagrangianParticle::SURFACE_INTERACTION_OTHER },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

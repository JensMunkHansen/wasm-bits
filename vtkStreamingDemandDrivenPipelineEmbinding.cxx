// JavaScript wrapper for vtkStreamingDemandDrivenPipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkStreamingDemandDrivenPipelineEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkStreamingDemandDrivenPipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkInformationRequestKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkStreamingDemandDrivenPipeline.h"

EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkStreamingDemandDrivenPipeline_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_UPDATE_EXTENT_COMBINE", 1 },
      { "VTK_UPDATE_EXTENT_REPLACE", 2 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkStreamingDemandDrivenPipeline_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkStreamingDemandDrivenPipeline>(vtkStreamingDemandDrivenPipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStreamingDemandDrivenPipeline_class) {
  using NO_PRIOR_TEMPORAL_ACCESS_STATES=vtkStreamingDemandDrivenPipeline::NO_PRIOR_TEMPORAL_ACCESS_STATES;
  emscripten::class_<vtkStreamingDemandDrivenPipeline, emscripten::base<vtkDemandDrivenPipeline>>("vtkStreamingDemandDrivenPipeline")
    .smart_ptr<vtkSmartPointer<vtkStreamingDemandDrivenPipeline>>("vtkSmartPointer<vtkStreamingDemandDrivenPipeline>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStreamingDemandDrivenPipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamingDemandDrivenPipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStreamingDemandDrivenPipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStreamingDemandDrivenPipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStreamingDemandDrivenPipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamingDemandDrivenPipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStreamingDemandDrivenPipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", emscripten::select_overload<int(vtkStreamingDemandDrivenPipeline&)>([](vtkStreamingDemandDrivenPipeline& self) -> int { return self.Update(); }))
    .function("Update", emscripten::select_overload<int(vtkStreamingDemandDrivenPipeline&, int)>([](vtkStreamingDemandDrivenPipeline& self, int arg_0) -> int { return self.Update( arg_0); }))
    .function("Update", emscripten::select_overload<int(vtkStreamingDemandDrivenPipeline&, int, vtkInformationVector*)>([](vtkStreamingDemandDrivenPipeline& self, int arg_0, vtkInformationVector* arg_1) -> int { return self.Update( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("UpdateWholeExtent", &vtkStreamingDemandDrivenPipeline::UpdateWholeExtent)
    .function("PropagateUpdateExtent", &vtkStreamingDemandDrivenPipeline::PropagateUpdateExtent)
    .function("PropagateTime", &vtkStreamingDemandDrivenPipeline::PropagateTime)
    .function("UpdateTimeDependentInformation", &vtkStreamingDemandDrivenPipeline::UpdateTimeDependentInformation)
    .function("SetRequestExactExtent", &vtkStreamingDemandDrivenPipeline::SetRequestExactExtent)
    .function("GetRequestExactExtent", &vtkStreamingDemandDrivenPipeline::GetRequestExactExtent)
    .class_function("REQUEST_UPDATE_EXTENT", &vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT, emscripten::allow_raw_pointers())
    .class_function("REQUEST_UPDATE_TIME", &vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_TIME, emscripten::allow_raw_pointers())
    .class_function("REQUEST_TIME_DEPENDENT_INFORMATION", &vtkStreamingDemandDrivenPipeline::REQUEST_TIME_DEPENDENT_INFORMATION, emscripten::allow_raw_pointers())
    .class_function("CONTINUE_EXECUTING", &vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING, emscripten::allow_raw_pointers())
    .class_function("UPDATE_EXTENT_INITIALIZED", &vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_INITIALIZED, emscripten::allow_raw_pointers())
    .class_function("UPDATE_EXTENT", &vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT, emscripten::allow_raw_pointers())
    .class_function("UPDATE_PIECE_NUMBER", &vtkStreamingDemandDrivenPipeline::UPDATE_PIECE_NUMBER, emscripten::allow_raw_pointers())
    .class_function("UPDATE_NUMBER_OF_PIECES", &vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_PIECES, emscripten::allow_raw_pointers())
    .class_function("UPDATE_NUMBER_OF_GHOST_LEVELS", &vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_GHOST_LEVELS, emscripten::allow_raw_pointers())
    .class_function("COMBINED_UPDATE_EXTENT", &vtkStreamingDemandDrivenPipeline::COMBINED_UPDATE_EXTENT, emscripten::allow_raw_pointers())
    .class_function("WHOLE_EXTENT", &vtkStreamingDemandDrivenPipeline::WHOLE_EXTENT, emscripten::allow_raw_pointers())
    .class_function("UNRESTRICTED_UPDATE_EXTENT", &vtkStreamingDemandDrivenPipeline::UNRESTRICTED_UPDATE_EXTENT, emscripten::allow_raw_pointers())
    .class_function("EXACT_EXTENT", &vtkStreamingDemandDrivenPipeline::EXACT_EXTENT, emscripten::allow_raw_pointers())
    .class_function("TIME_STEPS", &vtkStreamingDemandDrivenPipeline::TIME_STEPS, emscripten::allow_raw_pointers())
    .class_function("TIME_RANGE", &vtkStreamingDemandDrivenPipeline::TIME_RANGE, emscripten::allow_raw_pointers())
    .class_function("UPDATE_TIME_STEP", &vtkStreamingDemandDrivenPipeline::UPDATE_TIME_STEP, emscripten::allow_raw_pointers())
    .class_function("TIME_DEPENDENT_INFORMATION", &vtkStreamingDemandDrivenPipeline::TIME_DEPENDENT_INFORMATION, emscripten::allow_raw_pointers())
    .class_function("BOUNDS", &vtkStreamingDemandDrivenPipeline::BOUNDS, emscripten::allow_raw_pointers())
    .class_function("NO_PRIOR_TEMPORAL_ACCESS", &vtkStreamingDemandDrivenPipeline::NO_PRIOR_TEMPORAL_ACCESS, emscripten::allow_raw_pointers())
    .class_function("GetUpdateExtent", emscripten::select_overload<std::uintptr_t( vtkInformation*)>([]( vtkInformation* arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(vtkStreamingDemandDrivenPipeline::GetUpdateExtent( arg_0)); }), emscripten::allow_raw_pointers())
    .class_function("GetUpdatePiece", &vtkStreamingDemandDrivenPipeline::GetUpdatePiece, emscripten::allow_raw_pointers())
    .class_function("GetUpdateNumberOfPieces", &vtkStreamingDemandDrivenPipeline::GetUpdateNumberOfPieces, emscripten::allow_raw_pointers())
    .class_function("GetUpdateGhostLevel", &vtkStreamingDemandDrivenPipeline::GetUpdateGhostLevel, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkStreamingDemandDrivenPipeline_0_2_constants) {
    typedef vtkStreamingDemandDrivenPipeline::NO_PRIOR_TEMPORAL_ACCESS_STATES cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkStreamingDemandDrivenPipeline_NO_PRIOR_TEMPORAL_ACCESS_STATES_NO_PRIOR_TEMPORAL_ACCESS_CONTINUE", vtkStreamingDemandDrivenPipeline::NO_PRIOR_TEMPORAL_ACCESS_CONTINUE },
      { "vtkStreamingDemandDrivenPipeline_NO_PRIOR_TEMPORAL_ACCESS_STATES_NO_PRIOR_TEMPORAL_ACCESS_RESET", vtkStreamingDemandDrivenPipeline::NO_PRIOR_TEMPORAL_ACCESS_RESET },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

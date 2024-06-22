// JavaScript wrapper for vtkExtractTimeSteps with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractTimeStepsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractTimeSteps.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractTimeSteps.h"

template<> void emscripten::internal::raw_destructor<vtkExtractTimeSteps>(vtkExtractTimeSteps * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractTimeSteps_class) {
  emscripten::class_<vtkExtractTimeSteps, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkExtractTimeSteps")
    .smart_ptr<vtkSmartPointer<vtkExtractTimeSteps>>("vtkSmartPointer<vtkExtractTimeSteps>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractTimeSteps>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractTimeSteps::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractTimeSteps& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractTimeSteps::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractTimeSteps::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractTimeSteps::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractTimeSteps& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfTimeSteps", &vtkExtractTimeSteps::GetNumberOfTimeSteps)
    .function("AddTimeStepIndex", &vtkExtractTimeSteps::AddTimeStepIndex)
    .function("SetTimeStepIndices", emscripten::optional_override([](vtkExtractTimeSteps& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetTimeStepIndices( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("GetTimeStepIndices", emscripten::optional_override([](vtkExtractTimeSteps& self, std::uintptr_t arg_0) -> void {  return self.GetTimeStepIndices(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GenerateTimeStepIndices", &vtkExtractTimeSteps::GenerateTimeStepIndices)
    .function("ClearTimeStepIndices", &vtkExtractTimeSteps::ClearTimeStepIndices)
    .function("GetUseRange", &vtkExtractTimeSteps::GetUseRange)
    .function("SetUseRange", &vtkExtractTimeSteps::SetUseRange)
    .function("UseRangeOn", &vtkExtractTimeSteps::UseRangeOn)
    .function("UseRangeOff", &vtkExtractTimeSteps::UseRangeOff)
    .function("SetRange", emscripten::select_overload<void(vtkExtractTimeSteps&, int, int)>([](vtkExtractTimeSteps& self, int arg_0, int arg_1) -> void { return self.SetRange( arg_0, arg_1); }))
    .function("GetTimeStepInterval", &vtkExtractTimeSteps::GetTimeStepInterval)
    .function("SetTimeStepInterval", &vtkExtractTimeSteps::SetTimeStepInterval)
    .function("GetTimeStepIntervalMinValue", &vtkExtractTimeSteps::GetTimeStepIntervalMinValue)
    .function("GetTimeStepIntervalMaxValue", &vtkExtractTimeSteps::GetTimeStepIntervalMaxValue)
    .function("GetTimeEstimationMode", &vtkExtractTimeSteps::GetTimeEstimationMode)
    .function("SetTimeEstimationMode", &vtkExtractTimeSteps::SetTimeEstimationMode)
    .function("SetTimeEstimationModeToPrevious", &vtkExtractTimeSteps::SetTimeEstimationModeToPrevious)
    .function("SetTimeEstimationModeToNext", &vtkExtractTimeSteps::SetTimeEstimationModeToNext)
    .function("SetTimeEstimationModeToNearest", &vtkExtractTimeSteps::SetTimeEstimationModeToNearest);
}
EMSCRIPTEN_BINDINGS(vtkFiltersExtraction_vtkExtractTimeSteps_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkExtractTimeSteps_PREVIOUS_TIMESTEP", vtkExtractTimeSteps::PREVIOUS_TIMESTEP },
      { "vtkExtractTimeSteps_NEXT_TIMESTEP", vtkExtractTimeSteps::NEXT_TIMESTEP },
      { "vtkExtractTimeSteps_NEAREST_TIMESTEP", vtkExtractTimeSteps::NEAREST_TIMESTEP },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

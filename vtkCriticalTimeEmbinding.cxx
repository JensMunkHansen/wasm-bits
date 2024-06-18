// JavaScript wrapper for vtkCriticalTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkFiltersTemporal.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkCriticalTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Temporal/vtkCriticalTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCriticalTime.h"

EMSCRIPTEN_BINDINGS(vtkFiltersTemporal_vtkCriticalTime_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCriticalTime>(vtkCriticalTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCriticalTime_class) {
  using ThresholdType=vtkCriticalTime::ThresholdType;
  using ComponentModeType=vtkCriticalTime::ComponentModeType;
  emscripten::class_<vtkCriticalTime, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkCriticalTime")
    .smart_ptr<vtkSmartPointer<vtkCriticalTime>>("vtkSmartPointer<vtkCriticalTime>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCriticalTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCriticalTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCriticalTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCriticalTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCriticalTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCriticalTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCriticalTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("TimeStepsArrayName", emscripten::optional_override([]() -> std::string {  return vtkCriticalTime::TimeStepsArrayName();}))
    .function("GetLowerThreshold", &vtkCriticalTime::GetLowerThreshold)
    .function("SetLowerThreshold", &vtkCriticalTime::SetLowerThreshold)
    .function("GetUpperThreshold", &vtkCriticalTime::GetUpperThreshold)
    .function("SetUpperThreshold", &vtkCriticalTime::SetUpperThreshold)
    .function("SetThresholdCriterion", &vtkCriticalTime::SetThresholdCriterion)
    .function("GetThresholdCriterionMinValue", &vtkCriticalTime::GetThresholdCriterionMinValue)
    .function("GetThresholdCriterionMaxValue", &vtkCriticalTime::GetThresholdCriterionMaxValue)
    .function("GetThresholdCriterion", &vtkCriticalTime::GetThresholdCriterion)
    .function("SetThresholdCriterionToBetween", &vtkCriticalTime::SetThresholdCriterionToBetween)
    .function("SetThresholdCriterionToLower", &vtkCriticalTime::SetThresholdCriterionToLower)
    .function("SetThresholdCriterionToUpper", &vtkCriticalTime::SetThresholdCriterionToUpper)
    .function("GetThresholdFunctionAsString", &vtkCriticalTime::GetThresholdFunctionAsString)
    .function("SetComponentMode", &vtkCriticalTime::SetComponentMode)
    .function("GetComponentModeMinValue", &vtkCriticalTime::GetComponentModeMinValue)
    .function("GetComponentModeMaxValue", &vtkCriticalTime::GetComponentModeMaxValue)
    .function("GetComponentMode", &vtkCriticalTime::GetComponentMode)
    .function("SetComponentModeToUseSelected", &vtkCriticalTime::SetComponentModeToUseSelected)
    .function("SetComponentModeToUseAll", &vtkCriticalTime::SetComponentModeToUseAll)
    .function("SetComponentModeToUseAny", &vtkCriticalTime::SetComponentModeToUseAny)
    .function("GetComponentModeAsString", &vtkCriticalTime::GetComponentModeAsString)
    .function("SetSelectedComponent", &vtkCriticalTime::SetSelectedComponent)
    .function("GetSelectedComponentMinValue", &vtkCriticalTime::GetSelectedComponentMinValue)
    .function("GetSelectedComponentMaxValue", &vtkCriticalTime::GetSelectedComponentMaxValue)
    .function("GetSelectedComponent", &vtkCriticalTime::GetSelectedComponent);
}
EMSCRIPTEN_BINDINGS(vtkFiltersTemporal_vtkCriticalTime_0_2_constants) {
    typedef vtkCriticalTime::ThresholdType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCriticalTime_ThresholdType_THRESHOLD_BETWEEN", vtkCriticalTime::THRESHOLD_BETWEEN },
      { "vtkCriticalTime_ThresholdType_THRESHOLD_LOWER", vtkCriticalTime::THRESHOLD_LOWER },
      { "vtkCriticalTime_ThresholdType_THRESHOLD_UPPER", vtkCriticalTime::THRESHOLD_UPPER },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersTemporal_vtkCriticalTime_1_2_constants) {
    typedef vtkCriticalTime::ComponentModeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCriticalTime_ComponentModeType_COMPONENT_MODE_USE_SELECTED", vtkCriticalTime::COMPONENT_MODE_USE_SELECTED },
      { "vtkCriticalTime_ComponentModeType_COMPONENT_MODE_USE_ALL", vtkCriticalTime::COMPONENT_MODE_USE_ALL },
      { "vtkCriticalTime_ComponentModeType_COMPONENT_MODE_USE_ANY", vtkCriticalTime::COMPONENT_MODE_USE_ANY },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

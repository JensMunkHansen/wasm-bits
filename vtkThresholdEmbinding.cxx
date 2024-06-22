// JavaScript wrapper for vtkThreshold with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkThresholdEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkThreshold.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkThreshold.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkThreshold_0_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
      { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
      { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
      { "VTK_COMPONENT_MODE_USE_SELECTED", 0 },
      { "VTK_COMPONENT_MODE_USE_ALL", 1 },
      { "VTK_COMPONENT_MODE_USE_ANY", 2 },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkThreshold_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkThreshold>(vtkThreshold * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThreshold_class) {
  using ThresholdType=vtkThreshold::ThresholdType;
  emscripten::class_<vtkThreshold, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkThreshold")
    .smart_ptr<vtkSmartPointer<vtkThreshold>>("vtkSmartPointer<vtkThreshold>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkThreshold>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreshold::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThreshold& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThreshold::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThreshold::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreshold::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThreshold& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetThresholdFunction", &vtkThreshold::SetThresholdFunction)
    .function("GetThresholdFunction", &vtkThreshold::GetThresholdFunction)
    .function("SetUpperThreshold", &vtkThreshold::SetUpperThreshold)
    .function("SetLowerThreshold", &vtkThreshold::SetLowerThreshold)
    .function("GetUpperThreshold", &vtkThreshold::GetUpperThreshold)
    .function("GetLowerThreshold", &vtkThreshold::GetLowerThreshold)
    .function("SetComponentMode", &vtkThreshold::SetComponentMode)
    .function("GetComponentModeMinValue", &vtkThreshold::GetComponentModeMinValue)
    .function("GetComponentModeMaxValue", &vtkThreshold::GetComponentModeMaxValue)
    .function("GetComponentMode", &vtkThreshold::GetComponentMode)
    .function("SetComponentModeToUseSelected", &vtkThreshold::SetComponentModeToUseSelected)
    .function("SetComponentModeToUseAll", &vtkThreshold::SetComponentModeToUseAll)
    .function("SetComponentModeToUseAny", &vtkThreshold::SetComponentModeToUseAny)
    .function("GetComponentModeAsString", emscripten::optional_override([](vtkThreshold& self) -> std::string {  return self.GetComponentModeAsString();}))
    .function("SetSelectedComponent", &vtkThreshold::SetSelectedComponent)
    .function("GetSelectedComponentMinValue", &vtkThreshold::GetSelectedComponentMinValue)
    .function("GetSelectedComponentMaxValue", &vtkThreshold::GetSelectedComponentMaxValue)
    .function("GetSelectedComponent", &vtkThreshold::GetSelectedComponent)
    .function("SetAllScalars", &vtkThreshold::SetAllScalars)
    .function("GetAllScalars", &vtkThreshold::GetAllScalars)
    .function("AllScalarsOn", &vtkThreshold::AllScalarsOn)
    .function("AllScalarsOff", &vtkThreshold::AllScalarsOff)
    .function("SetUseContinuousCellRange", &vtkThreshold::SetUseContinuousCellRange)
    .function("GetUseContinuousCellRange", &vtkThreshold::GetUseContinuousCellRange)
    .function("UseContinuousCellRangeOn", &vtkThreshold::UseContinuousCellRangeOn)
    .function("UseContinuousCellRangeOff", &vtkThreshold::UseContinuousCellRangeOff)
    .function("SetInvert", &vtkThreshold::SetInvert)
    .function("GetInvert", &vtkThreshold::GetInvert)
    .function("InvertOn", &vtkThreshold::InvertOn)
    .function("InvertOff", &vtkThreshold::InvertOff)
    .function("SetOutputPointsPrecision", &vtkThreshold::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkThreshold::GetOutputPointsPrecision)
    .function("Lower", &vtkThreshold::Lower)
    .function("Upper", &vtkThreshold::Upper)
    .function("Between", &vtkThreshold::Between);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkThreshold_0_2_constants) {
    typedef vtkThreshold::ThresholdType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkThreshold_ThresholdType_THRESHOLD_BETWEEN", vtkThreshold::THRESHOLD_BETWEEN },
      { "vtkThreshold_ThresholdType_THRESHOLD_LOWER", vtkThreshold::THRESHOLD_LOWER },
      { "vtkThreshold_ThresholdType_THRESHOLD_UPPER", vtkThreshold::THRESHOLD_UPPER },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

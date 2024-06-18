// JavaScript wrapper for vtkHandleRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkHandleRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkHandleRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkPointPlacer.h"
#include "vtkHandleRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkHandleRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHandleRepresentation>(vtkHandleRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHandleRepresentation_class) {
  using InteractionStateType=vtkHandleRepresentation::InteractionStateType;
  emscripten::class_<vtkHandleRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkHandleRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHandleRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHandleRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHandleRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHandleRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHandleRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHandleRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkHandleRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkHandleRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkHandleRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkHandleRepresentation::GetTolerance)
    .function("SetActiveRepresentation", &vtkHandleRepresentation::SetActiveRepresentation)
    .function("GetActiveRepresentation", &vtkHandleRepresentation::GetActiveRepresentation)
    .function("ActiveRepresentationOn", &vtkHandleRepresentation::ActiveRepresentationOn)
    .function("ActiveRepresentationOff", &vtkHandleRepresentation::ActiveRepresentationOff)
    .function("SetInteractionState", &vtkHandleRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkHandleRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkHandleRepresentation::GetInteractionStateMaxValue)
    .function("SetConstrained", &vtkHandleRepresentation::SetConstrained)
    .function("GetConstrained", &vtkHandleRepresentation::GetConstrained)
    .function("ConstrainedOn", &vtkHandleRepresentation::ConstrainedOn)
    .function("ConstrainedOff", &vtkHandleRepresentation::ConstrainedOff)
    .function("ShallowCopy", &vtkHandleRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkHandleRepresentation::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkHandleRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkHandleRepresentation::GetMTime)
    .function("SetPointPlacer", &vtkHandleRepresentation::SetPointPlacer, emscripten::allow_raw_pointers())
    .function("GetPointPlacer", &vtkHandleRepresentation::GetPointPlacer, emscripten::allow_raw_pointers())
    .function("GetTranslationVector", emscripten::optional_override([](vtkHandleRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.GetTranslationVector(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .function("Translate", emscripten::select_overload<void(vtkHandleRepresentation&, std::uintptr_t, std::uintptr_t)>([](vtkHandleRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("Translate", emscripten::select_overload<void(vtkHandleRepresentation&, std::uintptr_t)>([](vtkHandleRepresentation& self, std::uintptr_t arg_0) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetTranslationAxis", &vtkHandleRepresentation::GetTranslationAxis)
    .function("SetTranslationAxis", &vtkHandleRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkHandleRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkHandleRepresentation::GetTranslationAxisMaxValue)
    .function("SetXTranslationAxisOn", &vtkHandleRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkHandleRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkHandleRepresentation::SetZTranslationAxisOn)
    .function("SetCustomTranslationAxisOn", &vtkHandleRepresentation::SetCustomTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkHandleRepresentation::SetTranslationAxisOff)
    .function("SetCustomTranslationAxis", emscripten::select_overload<void(vtkHandleRepresentation&, double, double, double)>([](vtkHandleRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCustomTranslationAxis( arg_0, arg_1, arg_2); }))
    .function("IsTranslationConstrained", &vtkHandleRepresentation::IsTranslationConstrained);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkHandleRepresentation_0_2_constants) {
    typedef vtkHandleRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkHandleRepresentation_InteractionStateType_Outside", vtkHandleRepresentation::Outside },
      { "vtkHandleRepresentation_InteractionStateType_Nearby", vtkHandleRepresentation::Nearby },
      { "vtkHandleRepresentation_InteractionStateType_Selecting", vtkHandleRepresentation::Selecting },
      { "vtkHandleRepresentation_InteractionStateType_Translating", vtkHandleRepresentation::Translating },
      { "vtkHandleRepresentation_InteractionStateType_Scaling", vtkHandleRepresentation::Scaling },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

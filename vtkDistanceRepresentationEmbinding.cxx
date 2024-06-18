// JavaScript wrapper for vtkDistanceRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDistanceRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDistanceRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkDistanceRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkDistanceRepresentation>(vtkDistanceRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistanceRepresentation_class) {
  emscripten::class_<vtkDistanceRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkDistanceRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistanceRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistanceRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistanceRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistanceRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHandleRepresentation", &vtkDistanceRepresentation::SetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("InstantiateHandleRepresentation", &vtkDistanceRepresentation::InstantiateHandleRepresentation)
    .function("GetPoint1Representation", &vtkDistanceRepresentation::GetPoint1Representation, emscripten::allow_raw_pointers())
    .function("GetPoint2Representation", &vtkDistanceRepresentation::GetPoint2Representation, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkDistanceRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkDistanceRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkDistanceRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkDistanceRepresentation::GetTolerance)
    .function("SetLabelFormat", emscripten::optional_override([](vtkDistanceRepresentation& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkDistanceRepresentation& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetScale", &vtkDistanceRepresentation::SetScale)
    .function("GetScale", &vtkDistanceRepresentation::GetScale)
    .function("SetRulerMode", &vtkDistanceRepresentation::SetRulerMode)
    .function("GetRulerMode", &vtkDistanceRepresentation::GetRulerMode)
    .function("RulerModeOn", &vtkDistanceRepresentation::RulerModeOn)
    .function("RulerModeOff", &vtkDistanceRepresentation::RulerModeOff)
    .function("SetRulerDistance", &vtkDistanceRepresentation::SetRulerDistance)
    .function("GetRulerDistanceMinValue", &vtkDistanceRepresentation::GetRulerDistanceMinValue)
    .function("GetRulerDistanceMaxValue", &vtkDistanceRepresentation::GetRulerDistanceMaxValue)
    .function("GetRulerDistance", &vtkDistanceRepresentation::GetRulerDistance)
    .function("SetNumberOfRulerTicks", &vtkDistanceRepresentation::SetNumberOfRulerTicks)
    .function("GetNumberOfRulerTicksMinValue", &vtkDistanceRepresentation::GetNumberOfRulerTicksMinValue)
    .function("GetNumberOfRulerTicksMaxValue", &vtkDistanceRepresentation::GetNumberOfRulerTicksMaxValue)
    .function("GetNumberOfRulerTicks", &vtkDistanceRepresentation::GetNumberOfRulerTicks)
    .function("BuildRepresentation", &vtkDistanceRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkDistanceRepresentation::ComputeInteractionState)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkDistanceRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkDistanceRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkDistanceRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkDistanceRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkDistanceRepresentation_Outside", vtkDistanceRepresentation::Outside },
      { "vtkDistanceRepresentation_NearP1", vtkDistanceRepresentation::NearP1 },
      { "vtkDistanceRepresentation_NearP2", vtkDistanceRepresentation::NearP2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

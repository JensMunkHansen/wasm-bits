// JavaScript wrapper for vtkEvent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkEventEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkEvent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkEvent.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkEvent_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkEvent>(vtkEvent * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEvent_class) {
  using EventModifiers=vtkEvent::EventModifiers;
  emscripten::class_<vtkEvent, emscripten::base<vtkObject>>("vtkEvent")
    .smart_ptr<vtkSmartPointer<vtkEvent>>("vtkSmartPointer<vtkEvent>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEvent>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEvent::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEvent& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEvent::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEvent::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEvent::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEvent& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEventId", &vtkEvent::SetEventId)
    .function("GetEventId", &vtkEvent::GetEventId)
    .function("SetModifier", &vtkEvent::SetModifier)
    .function("GetModifier", emscripten::select_overload<int(vtkEvent&)>([](vtkEvent& self) -> int { return self.GetModifier(); }))
    .class_function("GetModifier", emscripten::select_overload<int( vtkRenderWindowInteractor*)>([]( vtkRenderWindowInteractor* arg_0) -> int { return vtkEvent::GetModifier( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetKeyCode", &vtkEvent::SetKeyCode)
    .function("GetKeyCode", &vtkEvent::GetKeyCode)
    .function("SetRepeatCount", &vtkEvent::SetRepeatCount)
    .function("GetRepeatCount", &vtkEvent::GetRepeatCount)
    .function("SetKeySym", emscripten::optional_override([](vtkEvent& self, const std::string & arg_0) -> void {  return self.SetKeySym( arg_0.c_str());}))
    .function("GetKeySym", emscripten::optional_override([](vtkEvent& self) -> std::string {  return self.GetKeySym();}));
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkEvent_0_2_constants) {
    typedef vtkEvent::EventModifiers cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkEvent_EventModifiers_AnyModifier", vtkEvent::AnyModifier },
      { "vtkEvent_EventModifiers_NoModifier", vtkEvent::NoModifier },
      { "vtkEvent_EventModifiers_ShiftModifier", vtkEvent::ShiftModifier },
      { "vtkEvent_EventModifiers_ControlModifier", vtkEvent::ControlModifier },
      { "vtkEvent_EventModifiers_AltModifier", vtkEvent::AltModifier },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

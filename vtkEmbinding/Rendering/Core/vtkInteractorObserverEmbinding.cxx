// JavaScript wrapper for vtkInteractorObserver with embind 
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderer.h"
#include "vtkCommand.h"
#include "vtkInteractorObserver.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorObserver>(vtkInteractorObserver * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorObserver_class) {
  emscripten::class_<vtkInteractorObserver, emscripten::base<vtkObject>>("vtkInteractorObserver")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorObserver::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorObserver& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorObserver::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorObserver::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorObserver::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorObserver& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkInteractorObserver::SetEnabled)
    .function("GetEnabled", &vtkInteractorObserver::GetEnabled)
    .function("EnabledOn", &vtkInteractorObserver::EnabledOn)
    .function("EnabledOff", &vtkInteractorObserver::EnabledOff)
    .function("On", &vtkInteractorObserver::On)
    .function("Off", &vtkInteractorObserver::Off)
    .function("SetInteractor", &vtkInteractorObserver::SetInteractor, emscripten::allow_raw_pointers())
    .function("GetInteractor", &vtkInteractorObserver::GetInteractor, emscripten::allow_raw_pointers())
    .function("SetPriority", &vtkInteractorObserver::SetPriority)
    .function("GetPriorityMinValue", &vtkInteractorObserver::GetPriorityMinValue)
    .function("GetPriorityMaxValue", &vtkInteractorObserver::GetPriorityMaxValue)
    .function("GetPriority", &vtkInteractorObserver::GetPriority)
    .function("PickingManagedOn", &vtkInteractorObserver::PickingManagedOn)
    .function("PickingManagedOff", &vtkInteractorObserver::PickingManagedOff)
    .function("SetPickingManaged", &vtkInteractorObserver::SetPickingManaged)
    .function("GetPickingManaged", &vtkInteractorObserver::GetPickingManaged)
    .function("SetKeyPressActivation", &vtkInteractorObserver::SetKeyPressActivation)
    .function("GetKeyPressActivation", &vtkInteractorObserver::GetKeyPressActivation)
    .function("KeyPressActivationOn", &vtkInteractorObserver::KeyPressActivationOn)
    .function("KeyPressActivationOff", &vtkInteractorObserver::KeyPressActivationOff)
    .function("SetKeyPressActivationValue", &vtkInteractorObserver::SetKeyPressActivationValue)
    .function("GetKeyPressActivationValue", &vtkInteractorObserver::GetKeyPressActivationValue)
    .function("GetDefaultRenderer", &vtkInteractorObserver::GetDefaultRenderer, emscripten::allow_raw_pointers())
    .function("SetDefaultRenderer", &vtkInteractorObserver::SetDefaultRenderer, emscripten::allow_raw_pointers())
    .function("GetCurrentRenderer", &vtkInteractorObserver::GetCurrentRenderer, emscripten::allow_raw_pointers())
    .function("SetCurrentRenderer", &vtkInteractorObserver::SetCurrentRenderer, emscripten::allow_raw_pointers())
    .function("OnChar", &vtkInteractorObserver::OnChar)
    .function("GrabFocus", &vtkInteractorObserver::GrabFocus, emscripten::allow_raw_pointers())
    .function("ReleaseFocus", &vtkInteractorObserver::ReleaseFocus);
}

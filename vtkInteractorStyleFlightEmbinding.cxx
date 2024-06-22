// JavaScript wrapper for vtkInteractorStyleFlight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleFlightEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleFlight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleFlight.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleFlight>(vtkInteractorStyleFlight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleFlight_class) {
  emscripten::class_<vtkInteractorStyleFlight, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleFlight")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleFlight>>("vtkSmartPointer<vtkInteractorStyleFlight>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorStyleFlight>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleFlight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleFlight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleFlight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleFlight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleFlight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleFlight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMotionStepSize", &vtkInteractorStyleFlight::SetMotionStepSize)
    .function("GetMotionStepSize", &vtkInteractorStyleFlight::GetMotionStepSize)
    .function("SetMotionAccelerationFactor", &vtkInteractorStyleFlight::SetMotionAccelerationFactor)
    .function("GetMotionAccelerationFactor", &vtkInteractorStyleFlight::GetMotionAccelerationFactor)
    .function("SetAngleStepSize", &vtkInteractorStyleFlight::SetAngleStepSize)
    .function("GetAngleStepSize", &vtkInteractorStyleFlight::GetAngleStepSize)
    .function("SetAngleAccelerationFactor", &vtkInteractorStyleFlight::SetAngleAccelerationFactor)
    .function("GetAngleAccelerationFactor", &vtkInteractorStyleFlight::GetAngleAccelerationFactor)
    .function("SetDisableMotion", &vtkInteractorStyleFlight::SetDisableMotion)
    .function("GetDisableMotion", &vtkInteractorStyleFlight::GetDisableMotion)
    .function("DisableMotionOn", &vtkInteractorStyleFlight::DisableMotionOn)
    .function("DisableMotionOff", &vtkInteractorStyleFlight::DisableMotionOff)
    .function("SetRestoreUpVector", &vtkInteractorStyleFlight::SetRestoreUpVector)
    .function("GetRestoreUpVector", &vtkInteractorStyleFlight::GetRestoreUpVector)
    .function("RestoreUpVectorOn", &vtkInteractorStyleFlight::RestoreUpVectorOn)
    .function("RestoreUpVectorOff", &vtkInteractorStyleFlight::RestoreUpVectorOff)
    .function("SetDefaultUpVector", emscripten::optional_override([](vtkInteractorStyleFlight& self, std::uintptr_t arg_0) -> void {  return self.SetDefaultUpVector(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("OnMouseMove", &vtkInteractorStyleFlight::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleFlight::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleFlight::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleFlight::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleFlight::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleFlight::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleFlight::OnRightButtonUp)
    .function("OnChar", &vtkInteractorStyleFlight::OnChar)
    .function("OnKeyDown", &vtkInteractorStyleFlight::OnKeyDown)
    .function("OnKeyUp", &vtkInteractorStyleFlight::OnKeyUp)
    .function("OnTimer", &vtkInteractorStyleFlight::OnTimer)
    .function("ForwardFly", &vtkInteractorStyleFlight::ForwardFly)
    .function("ReverseFly", &vtkInteractorStyleFlight::ReverseFly)
    .function("StartForwardFly", &vtkInteractorStyleFlight::StartForwardFly)
    .function("EndForwardFly", &vtkInteractorStyleFlight::EndForwardFly)
    .function("StartReverseFly", &vtkInteractorStyleFlight::StartReverseFly)
    .function("EndReverseFly", &vtkInteractorStyleFlight::EndReverseFly);
}

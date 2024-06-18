// JavaScript wrapper for vtkInteractorStyleJoystickCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleJoystickCameraEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleJoystickCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleJoystickCamera.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleJoystickCamera>(vtkInteractorStyleJoystickCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleJoystickCamera_class) {
  emscripten::class_<vtkInteractorStyleJoystickCamera, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleJoystickCamera")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleJoystickCamera>>("vtkSmartPointer<vtkInteractorStyleJoystickCamera>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleJoystickCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleJoystickCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleJoystickCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleJoystickCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleJoystickCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleJoystickCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleJoystickCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleJoystickCamera::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleJoystickCamera::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleJoystickCamera::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleJoystickCamera::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleJoystickCamera::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleJoystickCamera::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleJoystickCamera::OnRightButtonUp)
    .function("OnMouseWheelForward", &vtkInteractorStyleJoystickCamera::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkInteractorStyleJoystickCamera::OnMouseWheelBackward)
    .function("Rotate", &vtkInteractorStyleJoystickCamera::Rotate)
    .function("Spin", &vtkInteractorStyleJoystickCamera::Spin)
    .function("Pan", &vtkInteractorStyleJoystickCamera::Pan)
    .function("Dolly", emscripten::select_overload<void(vtkInteractorStyleJoystickCamera&)>([](vtkInteractorStyleJoystickCamera& self) -> void { return self.Dolly(); }));
}

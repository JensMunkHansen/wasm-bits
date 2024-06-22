// JavaScript wrapper for vtkInteractorStyleUser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleUserEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleUser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleUser.h"

EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkInteractorStyleUser_0_1_constants) {
  emscripten::constant("VTKIS_USERINTERACTION", 8);
}
template<> void emscripten::internal::raw_destructor<vtkInteractorStyleUser>(vtkInteractorStyleUser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleUser_class) {
  emscripten::class_<vtkInteractorStyleUser, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleUser")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleUser>>("vtkSmartPointer<vtkInteractorStyleUser>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleUser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleUser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleUser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleUser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleUser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleUser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleUser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetShiftKey", &vtkInteractorStyleUser::GetShiftKey)
    .function("GetCtrlKey", &vtkInteractorStyleUser::GetCtrlKey)
    .function("GetChar", &vtkInteractorStyleUser::GetChar)
    .function("GetKeySym", emscripten::optional_override([](vtkInteractorStyleUser& self) -> std::string {  return self.GetKeySym();}))
    .function("GetButton", &vtkInteractorStyleUser::GetButton)
    .function("OnMouseMove", &vtkInteractorStyleUser::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleUser::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleUser::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleUser::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleUser::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleUser::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleUser::OnRightButtonUp)
    .function("OnMouseWheelForward", &vtkInteractorStyleUser::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkInteractorStyleUser::OnMouseWheelBackward)
    .function("OnChar", &vtkInteractorStyleUser::OnChar)
    .function("OnKeyPress", &vtkInteractorStyleUser::OnKeyPress)
    .function("OnKeyRelease", &vtkInteractorStyleUser::OnKeyRelease)
    .function("OnExpose", &vtkInteractorStyleUser::OnExpose)
    .function("OnConfigure", &vtkInteractorStyleUser::OnConfigure)
    .function("OnEnter", &vtkInteractorStyleUser::OnEnter)
    .function("OnLeave", &vtkInteractorStyleUser::OnLeave)
    .function("OnTimer", &vtkInteractorStyleUser::OnTimer);
}

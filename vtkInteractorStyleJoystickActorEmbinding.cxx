// JavaScript wrapper for vtkInteractorStyleJoystickActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleJoystickActorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleJoystickActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleJoystickActor.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleJoystickActor>(vtkInteractorStyleJoystickActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleJoystickActor_class) {
  emscripten::class_<vtkInteractorStyleJoystickActor, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleJoystickActor")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleJoystickActor>>("vtkSmartPointer<vtkInteractorStyleJoystickActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleJoystickActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleJoystickActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleJoystickActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleJoystickActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleJoystickActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleJoystickActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleJoystickActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleJoystickActor::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleJoystickActor::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleJoystickActor::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleJoystickActor::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleJoystickActor::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleJoystickActor::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleJoystickActor::OnRightButtonUp)
    .function("Rotate", &vtkInteractorStyleJoystickActor::Rotate)
    .function("Spin", &vtkInteractorStyleJoystickActor::Spin)
    .function("Pan", &vtkInteractorStyleJoystickActor::Pan)
    .function("Dolly", &vtkInteractorStyleJoystickActor::Dolly)
    .function("UniformScale", &vtkInteractorStyleJoystickActor::UniformScale);
}

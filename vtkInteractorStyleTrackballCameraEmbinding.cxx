// JavaScript wrapper for vtkInteractorStyleTrackballCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleTrackballCameraEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleTrackballCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleTrackballCamera.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleTrackballCamera>(vtkInteractorStyleTrackballCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleTrackballCamera_class) {
  emscripten::class_<vtkInteractorStyleTrackballCamera, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleTrackballCamera")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleTrackballCamera>>("vtkSmartPointer<vtkInteractorStyleTrackballCamera>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleTrackballCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTrackballCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleTrackballCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleTrackballCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleTrackballCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleTrackballCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleTrackballCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkInteractorStyleTrackballCamera::OnMouseMove)
    .function("OnLeftButtonDown", &vtkInteractorStyleTrackballCamera::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleTrackballCamera::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleTrackballCamera::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleTrackballCamera::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleTrackballCamera::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleTrackballCamera::OnRightButtonUp)
    .function("OnMouseWheelForward", &vtkInteractorStyleTrackballCamera::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkInteractorStyleTrackballCamera::OnMouseWheelBackward)
    .function("Rotate", &vtkInteractorStyleTrackballCamera::Rotate)
    .function("Spin", &vtkInteractorStyleTrackballCamera::Spin)
    .function("Pan", &vtkInteractorStyleTrackballCamera::Pan)
    .function("Dolly", emscripten::select_overload<void(vtkInteractorStyleTrackballCamera&)>([](vtkInteractorStyleTrackballCamera& self) -> void { return self.Dolly(); }))
    .function("EnvironmentRotate", &vtkInteractorStyleTrackballCamera::EnvironmentRotate)
    .function("SetMotionFactor", &vtkInteractorStyleTrackballCamera::SetMotionFactor)
    .function("GetMotionFactor", &vtkInteractorStyleTrackballCamera::GetMotionFactor);
}

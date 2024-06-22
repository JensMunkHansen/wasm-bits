// JavaScript wrapper for vtkInteractorStyleMultiTouchCamera with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleMultiTouchCameraEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleMultiTouchCamera.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleMultiTouchCamera.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleMultiTouchCamera>(vtkInteractorStyleMultiTouchCamera * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleMultiTouchCamera_class) {
  emscripten::class_<vtkInteractorStyleMultiTouchCamera, emscripten::base<vtkInteractorStyleTrackballCamera>>("vtkInteractorStyleMultiTouchCamera")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleMultiTouchCamera>>("vtkSmartPointer<vtkInteractorStyleMultiTouchCamera>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorStyleMultiTouchCamera>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleMultiTouchCamera::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleMultiTouchCamera& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleMultiTouchCamera::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleMultiTouchCamera::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleMultiTouchCamera::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleMultiTouchCamera& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnStartRotate", &vtkInteractorStyleMultiTouchCamera::OnStartRotate)
    .function("OnRotate", &vtkInteractorStyleMultiTouchCamera::OnRotate)
    .function("OnEndRotate", &vtkInteractorStyleMultiTouchCamera::OnEndRotate)
    .function("OnStartPinch", &vtkInteractorStyleMultiTouchCamera::OnStartPinch)
    .function("OnPinch", &vtkInteractorStyleMultiTouchCamera::OnPinch)
    .function("OnEndPinch", &vtkInteractorStyleMultiTouchCamera::OnEndPinch)
    .function("OnStartPan", &vtkInteractorStyleMultiTouchCamera::OnStartPan)
    .function("OnPan", &vtkInteractorStyleMultiTouchCamera::OnPan)
    .function("OnEndPan", &vtkInteractorStyleMultiTouchCamera::OnEndPan);
}

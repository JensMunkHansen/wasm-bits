// JavaScript wrapper for vtkCameraOrientationWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraOrientationWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraOrientationWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkCameraOrientationWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCameraOrientationWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCameraOrientationWidget>(vtkCameraOrientationWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraOrientationWidget_class) {
  emscripten::class_<vtkCameraOrientationWidget, emscripten::base<vtkAbstractWidget>>("vtkCameraOrientationWidget")
    .smart_ptr<vtkSmartPointer<vtkCameraOrientationWidget>>("vtkSmartPointer<vtkCameraOrientationWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraOrientationWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraOrientationWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraOrientationWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraOrientationWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraOrientationWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraOrientationWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraOrientationWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAnimate", &vtkCameraOrientationWidget::SetAnimate)
    .function("GetAnimate", &vtkCameraOrientationWidget::GetAnimate)
    .function("AnimateOn", &vtkCameraOrientationWidget::AnimateOn)
    .function("AnimateOff", &vtkCameraOrientationWidget::AnimateOff)
    .function("SetAnimatorTotalFrames", &vtkCameraOrientationWidget::SetAnimatorTotalFrames)
    .function("GetAnimatorTotalFramesMinValue", &vtkCameraOrientationWidget::GetAnimatorTotalFramesMinValue)
    .function("GetAnimatorTotalFramesMaxValue", &vtkCameraOrientationWidget::GetAnimatorTotalFramesMaxValue)
    .function("GetAnimatorTotalFrames", &vtkCameraOrientationWidget::GetAnimatorTotalFrames)
    .function("CreateDefaultRepresentation", &vtkCameraOrientationWidget::CreateDefaultRepresentation)
    .function("SquareResize", &vtkCameraOrientationWidget::SquareResize)
    .function("SetParentRenderer", &vtkCameraOrientationWidget::SetParentRenderer, emscripten::allow_raw_pointers())
    .function("GetParentRenderer", &vtkCameraOrientationWidget::GetParentRenderer, emscripten::allow_raw_pointers());
}

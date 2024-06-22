// JavaScript wrapper for vtkContextTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContextTransformEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContextTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkTransform2D.h"
#include "vtkVector.h"
#include "vtkContextMouseEvent.h"
#include "vtkContextTransform.h"

template<> void emscripten::internal::raw_destructor<vtkContextTransform>(vtkContextTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContextTransform_class) {
  emscripten::class_<vtkContextTransform, emscripten::base<vtkAbstractContextItem>>("vtkContextTransform")
    .smart_ptr<vtkSmartPointer<vtkContextTransform>>("vtkSmartPointer<vtkContextTransform>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContextTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContextTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContextTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContextTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContextTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContextTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkContextTransform::Update)
    .function("Paint", &vtkContextTransform::Paint, emscripten::allow_raw_pointers())
    .function("Identity", &vtkContextTransform::Identity)
    .function("Translate", &vtkContextTransform::Translate)
    .function("Scale", &vtkContextTransform::Scale)
    .function("Rotate", &vtkContextTransform::Rotate)
    .function("GetTransform", &vtkContextTransform::GetTransform, emscripten::allow_raw_pointers())
    .function("MapToParent", &vtkContextTransform::MapToParent)
    .function("MapFromParent", &vtkContextTransform::MapFromParent)
    .function("SetPanMouseButton", &vtkContextTransform::SetPanMouseButton)
    .function("GetPanMouseButton", &vtkContextTransform::GetPanMouseButton)
    .function("SetPanModifier", &vtkContextTransform::SetPanModifier)
    .function("GetPanModifier", &vtkContextTransform::GetPanModifier)
    .function("SetSecondaryPanMouseButton", &vtkContextTransform::SetSecondaryPanMouseButton)
    .function("GetSecondaryPanMouseButton", &vtkContextTransform::GetSecondaryPanMouseButton)
    .function("SetSecondaryPanModifier", &vtkContextTransform::SetSecondaryPanModifier)
    .function("GetSecondaryPanModifier", &vtkContextTransform::GetSecondaryPanModifier)
    .function("SetZoomMouseButton", &vtkContextTransform::SetZoomMouseButton)
    .function("GetZoomMouseButton", &vtkContextTransform::GetZoomMouseButton)
    .function("SetZoomModifier", &vtkContextTransform::SetZoomModifier)
    .function("GetZoomModifier", &vtkContextTransform::GetZoomModifier)
    .function("SetSecondaryZoomMouseButton", &vtkContextTransform::SetSecondaryZoomMouseButton)
    .function("GetSecondaryZoomMouseButton", &vtkContextTransform::GetSecondaryZoomMouseButton)
    .function("SetSecondaryZoomModifier", &vtkContextTransform::SetSecondaryZoomModifier)
    .function("GetSecondaryZoomModifier", &vtkContextTransform::GetSecondaryZoomModifier)
    .function("SetZoomOnMouseWheel", &vtkContextTransform::SetZoomOnMouseWheel)
    .function("GetZoomOnMouseWheel", &vtkContextTransform::GetZoomOnMouseWheel)
    .function("ZoomOnMouseWheelOn", &vtkContextTransform::ZoomOnMouseWheelOn)
    .function("ZoomOnMouseWheelOff", &vtkContextTransform::ZoomOnMouseWheelOff)
    .function("SetPanYOnMouseWheel", &vtkContextTransform::SetPanYOnMouseWheel)
    .function("GetPanYOnMouseWheel", &vtkContextTransform::GetPanYOnMouseWheel)
    .function("PanYOnMouseWheelOn", &vtkContextTransform::PanYOnMouseWheelOn)
    .function("PanYOnMouseWheelOff", &vtkContextTransform::PanYOnMouseWheelOff)
    .function("Hit", &vtkContextTransform::Hit)
    .function("MouseButtonPressEvent", &vtkContextTransform::MouseButtonPressEvent)
    .function("MouseMoveEvent", &vtkContextTransform::MouseMoveEvent)
    .function("MouseWheelEvent", &vtkContextTransform::MouseWheelEvent);
}

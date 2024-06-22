// JavaScript wrapper for vtkInteractorStyleRubberBand3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleRubberBand3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleRubberBand3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBand3D.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleRubberBand3D>(vtkInteractorStyleRubberBand3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleRubberBand3D_class) {
  emscripten::class_<vtkInteractorStyleRubberBand3D, emscripten::base<vtkInteractorStyleTrackballCamera>>("vtkInteractorStyleRubberBand3D")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleRubberBand3D>>("vtkSmartPointer<vtkInteractorStyleRubberBand3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInteractorStyleRubberBand3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBand3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleRubberBand3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleRubberBand3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleRubberBand3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBand3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleRubberBand3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnLeftButtonDown", &vtkInteractorStyleRubberBand3D::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleRubberBand3D::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleRubberBand3D::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleRubberBand3D::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleRubberBand3D::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleRubberBand3D::OnRightButtonUp)
    .function("OnMouseMove", &vtkInteractorStyleRubberBand3D::OnMouseMove)
    .function("OnMouseWheelForward", &vtkInteractorStyleRubberBand3D::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkInteractorStyleRubberBand3D::OnMouseWheelBackward)
    .function("SetRenderOnMouseMove", &vtkInteractorStyleRubberBand3D::SetRenderOnMouseMove)
    .function("GetRenderOnMouseMove", &vtkInteractorStyleRubberBand3D::GetRenderOnMouseMove)
    .function("RenderOnMouseMoveOn", &vtkInteractorStyleRubberBand3D::RenderOnMouseMoveOn)
    .function("RenderOnMouseMoveOff", &vtkInteractorStyleRubberBand3D::RenderOnMouseMoveOff)
    .function("GetInteraction", &vtkInteractorStyleRubberBand3D::GetInteraction);
}
EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkInteractorStyleRubberBand3D_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkInteractorStyleRubberBand3D_SELECT_NORMAL", vtkInteractorStyleRubberBand3D::SELECT_NORMAL },
      { "vtkInteractorStyleRubberBand3D_SELECT_UNION", vtkInteractorStyleRubberBand3D::SELECT_UNION },
      { "vtkInteractorStyleRubberBand3D_NONE", vtkInteractorStyleRubberBand3D::NONE },
      { "vtkInteractorStyleRubberBand3D_PANNING", vtkInteractorStyleRubberBand3D::PANNING },
      { "vtkInteractorStyleRubberBand3D_ZOOMING", vtkInteractorStyleRubberBand3D::ZOOMING },
      { "vtkInteractorStyleRubberBand3D_ROTATING", vtkInteractorStyleRubberBand3D::ROTATING },
      { "vtkInteractorStyleRubberBand3D_SELECTING", vtkInteractorStyleRubberBand3D::SELECTING },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

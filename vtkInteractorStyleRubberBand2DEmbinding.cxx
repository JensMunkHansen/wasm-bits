// JavaScript wrapper for vtkInteractorStyleRubberBand2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractorStyleRubberBand2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkInteractorStyleRubberBand2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleRubberBand2D.h"

template<> void emscripten::internal::raw_destructor<vtkInteractorStyleRubberBand2D>(vtkInteractorStyleRubberBand2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorStyleRubberBand2D_class) {
  emscripten::class_<vtkInteractorStyleRubberBand2D, emscripten::base<vtkInteractorStyle>>("vtkInteractorStyleRubberBand2D")
    .smart_ptr<vtkSmartPointer<vtkInteractorStyleRubberBand2D>>("vtkSmartPointer<vtkInteractorStyleRubberBand2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorStyleRubberBand2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBand2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorStyleRubberBand2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorStyleRubberBand2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorStyleRubberBand2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorStyleRubberBand2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorStyleRubberBand2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnLeftButtonDown", &vtkInteractorStyleRubberBand2D::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkInteractorStyleRubberBand2D::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkInteractorStyleRubberBand2D::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkInteractorStyleRubberBand2D::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkInteractorStyleRubberBand2D::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkInteractorStyleRubberBand2D::OnRightButtonUp)
    .function("OnMouseMove", &vtkInteractorStyleRubberBand2D::OnMouseMove)
    .function("OnMouseWheelForward", &vtkInteractorStyleRubberBand2D::OnMouseWheelForward)
    .function("OnMouseWheelBackward", &vtkInteractorStyleRubberBand2D::OnMouseWheelBackward)
    .function("SetRenderOnMouseMove", &vtkInteractorStyleRubberBand2D::SetRenderOnMouseMove)
    .function("GetRenderOnMouseMove", &vtkInteractorStyleRubberBand2D::GetRenderOnMouseMove)
    .function("RenderOnMouseMoveOn", &vtkInteractorStyleRubberBand2D::RenderOnMouseMoveOn)
    .function("RenderOnMouseMoveOff", &vtkInteractorStyleRubberBand2D::RenderOnMouseMoveOff)
    .function("GetInteraction", &vtkInteractorStyleRubberBand2D::GetInteraction);
}
EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkInteractorStyleRubberBand2D_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkInteractorStyleRubberBand2D_SELECT_NORMAL", vtkInteractorStyleRubberBand2D::SELECT_NORMAL },
      { "vtkInteractorStyleRubberBand2D_SELECT_UNION", vtkInteractorStyleRubberBand2D::SELECT_UNION },
      { "vtkInteractorStyleRubberBand2D_NONE", vtkInteractorStyleRubberBand2D::NONE },
      { "vtkInteractorStyleRubberBand2D_PANNING", vtkInteractorStyleRubberBand2D::PANNING },
      { "vtkInteractorStyleRubberBand2D_ZOOMING", vtkInteractorStyleRubberBand2D::ZOOMING },
      { "vtkInteractorStyleRubberBand2D_SELECTING", vtkInteractorStyleRubberBand2D::SELECTING },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

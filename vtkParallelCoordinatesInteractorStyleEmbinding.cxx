// JavaScript wrapper for vtkParallelCoordinatesInteractorStyle with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkInteractionStyle.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionStyle.js/vtkParallelCoordinatesInteractorStyleEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Style/vtkParallelCoordinatesInteractorStyle.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkParallelCoordinatesInteractorStyle.h"

template<> void emscripten::internal::raw_destructor<vtkParallelCoordinatesInteractorStyle>(vtkParallelCoordinatesInteractorStyle * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelCoordinatesInteractorStyle_class) {
  emscripten::class_<vtkParallelCoordinatesInteractorStyle, emscripten::base<vtkInteractorStyleTrackballCamera>>("vtkParallelCoordinatesInteractorStyle")
    .smart_ptr<vtkSmartPointer<vtkParallelCoordinatesInteractorStyle>>("vtkSmartPointer<vtkParallelCoordinatesInteractorStyle>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelCoordinatesInteractorStyle>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesInteractorStyle::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelCoordinatesInteractorStyle& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelCoordinatesInteractorStyle::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelCoordinatesInteractorStyle::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesInteractorStyle::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelCoordinatesInteractorStyle& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("OnMouseMove", &vtkParallelCoordinatesInteractorStyle::OnMouseMove)
    .function("OnLeftButtonDown", &vtkParallelCoordinatesInteractorStyle::OnLeftButtonDown)
    .function("OnLeftButtonUp", &vtkParallelCoordinatesInteractorStyle::OnLeftButtonUp)
    .function("OnMiddleButtonDown", &vtkParallelCoordinatesInteractorStyle::OnMiddleButtonDown)
    .function("OnMiddleButtonUp", &vtkParallelCoordinatesInteractorStyle::OnMiddleButtonUp)
    .function("OnRightButtonDown", &vtkParallelCoordinatesInteractorStyle::OnRightButtonDown)
    .function("OnRightButtonUp", &vtkParallelCoordinatesInteractorStyle::OnRightButtonUp)
    .function("OnLeave", &vtkParallelCoordinatesInteractorStyle::OnLeave)
    .function("StartInspect", &vtkParallelCoordinatesInteractorStyle::StartInspect)
    .function("Inspect", &vtkParallelCoordinatesInteractorStyle::Inspect)
    .function("EndInspect", &vtkParallelCoordinatesInteractorStyle::EndInspect)
    .function("StartZoom", &vtkParallelCoordinatesInteractorStyle::StartZoom)
    .function("Zoom", &vtkParallelCoordinatesInteractorStyle::Zoom)
    .function("EndZoom", &vtkParallelCoordinatesInteractorStyle::EndZoom)
    .function("StartPan", &vtkParallelCoordinatesInteractorStyle::StartPan)
    .function("Pan", &vtkParallelCoordinatesInteractorStyle::Pan)
    .function("EndPan", &vtkParallelCoordinatesInteractorStyle::EndPan)
    .function("OnChar", &vtkParallelCoordinatesInteractorStyle::OnChar);
}
EMSCRIPTEN_BINDINGS(vtkInteractionStyle_vtkParallelCoordinatesInteractorStyle_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkParallelCoordinatesInteractorStyle_INTERACT_HOVER", vtkParallelCoordinatesInteractorStyle::INTERACT_HOVER },
      { "vtkParallelCoordinatesInteractorStyle_INTERACT_INSPECT", vtkParallelCoordinatesInteractorStyle::INTERACT_INSPECT },
      { "vtkParallelCoordinatesInteractorStyle_INTERACT_ZOOM", vtkParallelCoordinatesInteractorStyle::INTERACT_ZOOM },
      { "vtkParallelCoordinatesInteractorStyle_INTERACT_PAN", vtkParallelCoordinatesInteractorStyle::INTERACT_PAN },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

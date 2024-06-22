// JavaScript wrapper for vtkBalloonRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBalloonRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBalloonRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkTextProperty.h"
#include "vtkProperty2D.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkBalloonRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBalloonRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBalloonRepresentation>(vtkBalloonRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBalloonRepresentation_class) {
  using InteractionStateType=vtkBalloonRepresentation::InteractionStateType;
  emscripten::class_<vtkBalloonRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkBalloonRepresentation")
    .smart_ptr<vtkSmartPointer<vtkBalloonRepresentation>>("vtkSmartPointer<vtkBalloonRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBalloonRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBalloonRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBalloonRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBalloonRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBalloonRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBalloonRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBalloonRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBalloonImage", &vtkBalloonRepresentation::SetBalloonImage, emscripten::allow_raw_pointers())
    .function("GetBalloonImage", &vtkBalloonRepresentation::GetBalloonImage, emscripten::allow_raw_pointers())
    .function("GetBalloonText", emscripten::optional_override([](vtkBalloonRepresentation& self) -> std::string {  return self.GetBalloonText();}))
    .function("SetBalloonText", emscripten::optional_override([](vtkBalloonRepresentation& self, const std::string & arg_0) -> void {  return self.SetBalloonText( arg_0.c_str());}))
    .function("SetImageSize", emscripten::select_overload<void(vtkBalloonRepresentation&, int, int)>([](vtkBalloonRepresentation& self, int arg_0, int arg_1) -> void { return self.SetImageSize( arg_0, arg_1); }))
    .function("SetTextProperty", &vtkBalloonRepresentation::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkBalloonRepresentation::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetFrameProperty", &vtkBalloonRepresentation::SetFrameProperty, emscripten::allow_raw_pointers())
    .function("GetFrameProperty", &vtkBalloonRepresentation::GetFrameProperty, emscripten::allow_raw_pointers())
    .function("SetImageProperty", &vtkBalloonRepresentation::SetImageProperty, emscripten::allow_raw_pointers())
    .function("GetImageProperty", &vtkBalloonRepresentation::GetImageProperty, emscripten::allow_raw_pointers())
    .function("SetBalloonLayout", &vtkBalloonRepresentation::SetBalloonLayout)
    .function("GetBalloonLayout", &vtkBalloonRepresentation::GetBalloonLayout)
    .function("SetBalloonLayoutToImageLeft", &vtkBalloonRepresentation::SetBalloonLayoutToImageLeft)
    .function("SetBalloonLayoutToImageRight", &vtkBalloonRepresentation::SetBalloonLayoutToImageRight)
    .function("SetBalloonLayoutToImageBottom", &vtkBalloonRepresentation::SetBalloonLayoutToImageBottom)
    .function("SetBalloonLayoutToImageTop", &vtkBalloonRepresentation::SetBalloonLayoutToImageTop)
    .function("SetBalloonLayoutToTextLeft", &vtkBalloonRepresentation::SetBalloonLayoutToTextLeft)
    .function("SetBalloonLayoutToTextRight", &vtkBalloonRepresentation::SetBalloonLayoutToTextRight)
    .function("SetBalloonLayoutToTextTop", &vtkBalloonRepresentation::SetBalloonLayoutToTextTop)
    .function("SetBalloonLayoutToTextBottom", &vtkBalloonRepresentation::SetBalloonLayoutToTextBottom)
    .function("SetOffset", emscripten::select_overload<void(vtkBalloonRepresentation&, int, int)>([](vtkBalloonRepresentation& self, int arg_0, int arg_1) -> void { return self.SetOffset( arg_0, arg_1); }))
    .function("SetPadding", &vtkBalloonRepresentation::SetPadding)
    .function("GetPaddingMinValue", &vtkBalloonRepresentation::GetPaddingMinValue)
    .function("GetPaddingMaxValue", &vtkBalloonRepresentation::GetPaddingMaxValue)
    .function("GetPadding", &vtkBalloonRepresentation::GetPadding)
    .function("BuildRepresentation", &vtkBalloonRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkBalloonRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkBalloonRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkBalloonRepresentation::RenderOverlay, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBalloonRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkBalloonRepresentation_ImageLeft", vtkBalloonRepresentation::ImageLeft },
      { "vtkBalloonRepresentation_ImageRight", vtkBalloonRepresentation::ImageRight },
      { "vtkBalloonRepresentation_ImageBottom", vtkBalloonRepresentation::ImageBottom },
      { "vtkBalloonRepresentation_ImageTop", vtkBalloonRepresentation::ImageTop },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBalloonRepresentation_1_2_constants) {
    typedef vtkBalloonRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkBalloonRepresentation_InteractionStateType_Outside", vtkBalloonRepresentation::Outside },
      { "vtkBalloonRepresentation_InteractionStateType_OnText", vtkBalloonRepresentation::OnText },
      { "vtkBalloonRepresentation_InteractionStateType_OnImage", vtkBalloonRepresentation::OnImage },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

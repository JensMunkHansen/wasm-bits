// JavaScript wrapper for vtkCheckerboardRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCheckerboardRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCheckerboardRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageCheckerboard.h"
#include "vtkImageActor.h"
#include "vtkSliderRepresentation3D.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCheckerboardRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkCheckerboardRepresentation>(vtkCheckerboardRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCheckerboardRepresentation_class) {
  emscripten::class_<vtkCheckerboardRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkCheckerboardRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCheckerboardRepresentation>>("vtkSmartPointer<vtkCheckerboardRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCheckerboardRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCheckerboardRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCheckerboardRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCheckerboardRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCheckerboardRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCheckerboardRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCheckerboardRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCheckerboard", &vtkCheckerboardRepresentation::SetCheckerboard, emscripten::allow_raw_pointers())
    .function("GetCheckerboard", &vtkCheckerboardRepresentation::GetCheckerboard, emscripten::allow_raw_pointers())
    .function("SetImageActor", &vtkCheckerboardRepresentation::SetImageActor, emscripten::allow_raw_pointers())
    .function("GetImageActor", &vtkCheckerboardRepresentation::GetImageActor, emscripten::allow_raw_pointers())
    .function("SetCornerOffset", &vtkCheckerboardRepresentation::SetCornerOffset)
    .function("GetCornerOffsetMinValue", &vtkCheckerboardRepresentation::GetCornerOffsetMinValue)
    .function("GetCornerOffsetMaxValue", &vtkCheckerboardRepresentation::GetCornerOffsetMaxValue)
    .function("GetCornerOffset", &vtkCheckerboardRepresentation::GetCornerOffset)
    .function("SliderValueChanged", &vtkCheckerboardRepresentation::SliderValueChanged)
    .function("SetTopRepresentation", &vtkCheckerboardRepresentation::SetTopRepresentation, emscripten::allow_raw_pointers())
    .function("SetRightRepresentation", &vtkCheckerboardRepresentation::SetRightRepresentation, emscripten::allow_raw_pointers())
    .function("SetBottomRepresentation", &vtkCheckerboardRepresentation::SetBottomRepresentation, emscripten::allow_raw_pointers())
    .function("SetLeftRepresentation", &vtkCheckerboardRepresentation::SetLeftRepresentation, emscripten::allow_raw_pointers())
    .function("GetTopRepresentation", &vtkCheckerboardRepresentation::GetTopRepresentation, emscripten::allow_raw_pointers())
    .function("GetRightRepresentation", &vtkCheckerboardRepresentation::GetRightRepresentation, emscripten::allow_raw_pointers())
    .function("GetBottomRepresentation", &vtkCheckerboardRepresentation::GetBottomRepresentation, emscripten::allow_raw_pointers())
    .function("GetLeftRepresentation", &vtkCheckerboardRepresentation::GetLeftRepresentation, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkCheckerboardRepresentation::BuildRepresentation)
    .function("GetActors", &vtkCheckerboardRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCheckerboardRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCheckerboardRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCheckerboardRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCheckerboardRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCheckerboardRepresentation::HasTranslucentPolygonalGeometry);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCheckerboardRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkCheckerboardRepresentation_TopSlider", vtkCheckerboardRepresentation::TopSlider },
      { "vtkCheckerboardRepresentation_RightSlider", vtkCheckerboardRepresentation::RightSlider },
      { "vtkCheckerboardRepresentation_BottomSlider", vtkCheckerboardRepresentation::BottomSlider },
      { "vtkCheckerboardRepresentation_LeftSlider", vtkCheckerboardRepresentation::LeftSlider },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

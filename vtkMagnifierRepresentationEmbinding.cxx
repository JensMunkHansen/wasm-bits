// JavaScript wrapper for vtkMagnifierRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkMagnifierRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkMagnifierRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkProperty2D.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkMagnifierRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkMagnifierRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkMagnifierRepresentation>(vtkMagnifierRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMagnifierRepresentation_class) {
  using InteractionStateType=vtkMagnifierRepresentation::InteractionStateType;
  emscripten::class_<vtkMagnifierRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkMagnifierRepresentation")
    .smart_ptr<vtkSmartPointer<vtkMagnifierRepresentation>>("vtkSmartPointer<vtkMagnifierRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMagnifierRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMagnifierRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMagnifierRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMagnifierRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMagnifierRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMagnifierRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMagnifierRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderer", &vtkMagnifierRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("SetMagnificationFactor", &vtkMagnifierRepresentation::SetMagnificationFactor)
    .function("GetMagnificationFactorMinValue", &vtkMagnifierRepresentation::GetMagnificationFactorMinValue)
    .function("GetMagnificationFactorMaxValue", &vtkMagnifierRepresentation::GetMagnificationFactorMaxValue)
    .function("GetMagnificationFactor", &vtkMagnifierRepresentation::GetMagnificationFactor)
    .function("AddViewProp", &vtkMagnifierRepresentation::AddViewProp, emscripten::allow_raw_pointers())
    .function("GetViewProps", &vtkMagnifierRepresentation::GetViewProps, emscripten::allow_raw_pointers())
    .function("HasViewProp", &vtkMagnifierRepresentation::HasViewProp, emscripten::allow_raw_pointers())
    .function("RemoveViewProp", &vtkMagnifierRepresentation::RemoveViewProp, emscripten::allow_raw_pointers())
    .function("RemoveAllViewProps", &vtkMagnifierRepresentation::RemoveAllViewProps)
    .function("SetSize", emscripten::select_overload<void(vtkMagnifierRepresentation&, int, int)>([](vtkMagnifierRepresentation& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("SetBorder", &vtkMagnifierRepresentation::SetBorder)
    .function("GetBorder", &vtkMagnifierRepresentation::GetBorder)
    .function("BorderOn", &vtkMagnifierRepresentation::BorderOn)
    .function("BorderOff", &vtkMagnifierRepresentation::BorderOff)
    .function("GetBorderProperty", &vtkMagnifierRepresentation::GetBorderProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkMagnifierRepresentation::BuildRepresentation)
    .function("SetInteractionState", &vtkMagnifierRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkMagnifierRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkMagnifierRepresentation::GetInteractionStateMaxValue)
    .function("GetMagnificationRenderer", &vtkMagnifierRepresentation::GetMagnificationRenderer, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkMagnifierRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkMagnifierRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkMagnifierRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkMagnifierRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkMagnifierRepresentation::HasTranslucentPolygonalGeometry)
    .function("GetMTime", &vtkMagnifierRepresentation::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkMagnifierRepresentation_0_2_constants) {
    typedef vtkMagnifierRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkMagnifierRepresentation_InteractionStateType_Invisible", vtkMagnifierRepresentation::Invisible },
      { "vtkMagnifierRepresentation_InteractionStateType_Visible", vtkMagnifierRepresentation::Visible },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

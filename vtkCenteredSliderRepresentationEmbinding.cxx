// JavaScript wrapper for vtkCenteredSliderRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCenteredSliderRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCenteredSliderRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkProperty2D.h"
#include "vtkTextProperty.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCenteredSliderRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkCenteredSliderRepresentation>(vtkCenteredSliderRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCenteredSliderRepresentation_class) {
  emscripten::class_<vtkCenteredSliderRepresentation, emscripten::base<vtkSliderRepresentation>>("vtkCenteredSliderRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCenteredSliderRepresentation>>("vtkSmartPointer<vtkCenteredSliderRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCenteredSliderRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCenteredSliderRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCenteredSliderRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCenteredSliderRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCenteredSliderRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCenteredSliderRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCenteredSliderRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Coordinate", &vtkCenteredSliderRepresentation::GetPoint1Coordinate, emscripten::allow_raw_pointers())
    .function("GetPoint2Coordinate", &vtkCenteredSliderRepresentation::GetPoint2Coordinate, emscripten::allow_raw_pointers())
    .function("SetTitleText", emscripten::optional_override([](vtkCenteredSliderRepresentation& self, const std::string & arg_0) -> void {  return self.SetTitleText( arg_0.c_str());}))
    .function("GetTitleText", emscripten::optional_override([](vtkCenteredSliderRepresentation& self) -> std::string {  return self.GetTitleText();}))
    .function("GetTubeProperty", &vtkCenteredSliderRepresentation::GetTubeProperty, emscripten::allow_raw_pointers())
    .function("GetSliderProperty", &vtkCenteredSliderRepresentation::GetSliderProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkCenteredSliderRepresentation::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetLabelProperty", &vtkCenteredSliderRepresentation::GetLabelProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkCenteredSliderRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkCenteredSliderRepresentation::ComputeInteractionState)
    .function("Highlight", &vtkCenteredSliderRepresentation::Highlight)
    .function("GetActors", &vtkCenteredSliderRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCenteredSliderRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCenteredSliderRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCenteredSliderRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers());
}

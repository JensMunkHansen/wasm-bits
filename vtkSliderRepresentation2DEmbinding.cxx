// JavaScript wrapper for vtkSliderRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSliderRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSliderRepresentation2D.h
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
#include "vtkSliderRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkSliderRepresentation2D>(vtkSliderRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSliderRepresentation2D_class) {
  emscripten::class_<vtkSliderRepresentation2D, emscripten::base<vtkSliderRepresentation>>("vtkSliderRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkSliderRepresentation2D>>("vtkSmartPointer<vtkSliderRepresentation2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSliderRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSliderRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSliderRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSliderRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSliderRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Coordinate", &vtkSliderRepresentation2D::GetPoint1Coordinate, emscripten::allow_raw_pointers())
    .function("GetPoint2Coordinate", &vtkSliderRepresentation2D::GetPoint2Coordinate, emscripten::allow_raw_pointers())
    .function("SetTitleText", emscripten::optional_override([](vtkSliderRepresentation2D& self, const std::string & arg_0) -> void {  return self.SetTitleText( arg_0.c_str());}))
    .function("GetTitleText", emscripten::optional_override([](vtkSliderRepresentation2D& self) -> std::string {  return self.GetTitleText();}))
    .function("GetSliderProperty", &vtkSliderRepresentation2D::GetSliderProperty, emscripten::allow_raw_pointers())
    .function("GetTubeProperty", &vtkSliderRepresentation2D::GetTubeProperty, emscripten::allow_raw_pointers())
    .function("GetCapProperty", &vtkSliderRepresentation2D::GetCapProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkSliderRepresentation2D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetLabelProperty", &vtkSliderRepresentation2D::GetLabelProperty, emscripten::allow_raw_pointers())
    .function("GetTitleProperty", &vtkSliderRepresentation2D::GetTitleProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkSliderRepresentation2D::BuildRepresentation)
    .function("Highlight", &vtkSliderRepresentation2D::Highlight)
    .function("GetActors2D", &vtkSliderRepresentation2D::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkSliderRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkSliderRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkSliderRepresentation2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers());
}

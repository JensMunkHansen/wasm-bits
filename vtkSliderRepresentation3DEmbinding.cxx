// JavaScript wrapper for vtkSliderRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSliderRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSliderRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkProperty.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkSliderRepresentation3D.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkSliderRepresentation3D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSliderRepresentation3D>(vtkSliderRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSliderRepresentation3D_class) {
  emscripten::class_<vtkSliderRepresentation3D, emscripten::base<vtkSliderRepresentation>>("vtkSliderRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkSliderRepresentation3D>>("vtkSmartPointer<vtkSliderRepresentation3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSliderRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSliderRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSliderRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSliderRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSliderRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSliderRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPoint1Coordinate", &vtkSliderRepresentation3D::GetPoint1Coordinate, emscripten::allow_raw_pointers())
    .function("SetPoint1InWorldCoordinates", &vtkSliderRepresentation3D::SetPoint1InWorldCoordinates)
    .function("GetPoint2Coordinate", &vtkSliderRepresentation3D::GetPoint2Coordinate, emscripten::allow_raw_pointers())
    .function("SetPoint2InWorldCoordinates", &vtkSliderRepresentation3D::SetPoint2InWorldCoordinates)
    .function("SetTitleText", emscripten::optional_override([](vtkSliderRepresentation3D& self, const std::string & arg_0) -> void {  return self.SetTitleText( arg_0.c_str());}))
    .function("GetTitleText", emscripten::optional_override([](vtkSliderRepresentation3D& self) -> std::string {  return self.GetTitleText();}))
    .function("SetSliderShape", &vtkSliderRepresentation3D::SetSliderShape)
    .function("GetSliderShapeMinValue", &vtkSliderRepresentation3D::GetSliderShapeMinValue)
    .function("GetSliderShapeMaxValue", &vtkSliderRepresentation3D::GetSliderShapeMaxValue)
    .function("GetSliderShape", &vtkSliderRepresentation3D::GetSliderShape)
    .function("SetSliderShapeToSphere", &vtkSliderRepresentation3D::SetSliderShapeToSphere)
    .function("SetSliderShapeToCylinder", &vtkSliderRepresentation3D::SetSliderShapeToCylinder)
    .function("SetRotation", &vtkSliderRepresentation3D::SetRotation)
    .function("GetRotation", &vtkSliderRepresentation3D::GetRotation)
    .function("GetSliderProperty", &vtkSliderRepresentation3D::GetSliderProperty, emscripten::allow_raw_pointers())
    .function("GetTubeProperty", &vtkSliderRepresentation3D::GetTubeProperty, emscripten::allow_raw_pointers())
    .function("GetCapProperty", &vtkSliderRepresentation3D::GetCapProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkSliderRepresentation3D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkSliderRepresentation3D::BuildRepresentation)
    .function("Highlight", &vtkSliderRepresentation3D::Highlight)
    .function("GetActors", &vtkSliderRepresentation3D::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkSliderRepresentation3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkSliderRepresentation3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkSliderRepresentation3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkSliderRepresentation3D::HasTranslucentPolygonalGeometry)
    .function("GetMTime", &vtkSliderRepresentation3D::GetMTime)
    .function("RegisterPickers", &vtkSliderRepresentation3D::RegisterPickers);
}

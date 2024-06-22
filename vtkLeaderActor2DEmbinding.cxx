// JavaScript wrapper for vtkLeaderActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkLeaderActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkLeaderActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkProp.h"
#include "vtkLeaderActor2D.h"

template<> void emscripten::internal::raw_destructor<vtkLeaderActor2D>(vtkLeaderActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLeaderActor2D_class) {
  emscripten::class_<vtkLeaderActor2D, emscripten::base<vtkActor2D>>("vtkLeaderActor2D")
    .smart_ptr<vtkSmartPointer<vtkLeaderActor2D>>("vtkSmartPointer<vtkLeaderActor2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLeaderActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLeaderActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLeaderActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLeaderActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLeaderActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLeaderActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLeaderActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkLeaderActor2D::SetRadius)
    .function("GetRadius", &vtkLeaderActor2D::GetRadius)
    .function("SetLabel", emscripten::optional_override([](vtkLeaderActor2D& self, const std::string & arg_0) -> void {  return self.SetLabel( arg_0.c_str());}))
    .function("GetLabel", emscripten::optional_override([](vtkLeaderActor2D& self) -> std::string {  return self.GetLabel();}))
    .function("SetLabelTextProperty", &vtkLeaderActor2D::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkLeaderActor2D::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelFactor", &vtkLeaderActor2D::SetLabelFactor)
    .function("GetLabelFactorMinValue", &vtkLeaderActor2D::GetLabelFactorMinValue)
    .function("GetLabelFactorMaxValue", &vtkLeaderActor2D::GetLabelFactorMaxValue)
    .function("GetLabelFactor", &vtkLeaderActor2D::GetLabelFactor)
    .function("SetArrowPlacement", &vtkLeaderActor2D::SetArrowPlacement)
    .function("GetArrowPlacementMinValue", &vtkLeaderActor2D::GetArrowPlacementMinValue)
    .function("GetArrowPlacementMaxValue", &vtkLeaderActor2D::GetArrowPlacementMaxValue)
    .function("GetArrowPlacement", &vtkLeaderActor2D::GetArrowPlacement)
    .function("SetArrowPlacementToNone", &vtkLeaderActor2D::SetArrowPlacementToNone)
    .function("SetArrowPlacementToPoint1", &vtkLeaderActor2D::SetArrowPlacementToPoint1)
    .function("SetArrowPlacementToPoint2", &vtkLeaderActor2D::SetArrowPlacementToPoint2)
    .function("SetArrowPlacementToBoth", &vtkLeaderActor2D::SetArrowPlacementToBoth)
    .function("SetArrowStyle", &vtkLeaderActor2D::SetArrowStyle)
    .function("GetArrowStyleMinValue", &vtkLeaderActor2D::GetArrowStyleMinValue)
    .function("GetArrowStyleMaxValue", &vtkLeaderActor2D::GetArrowStyleMaxValue)
    .function("GetArrowStyle", &vtkLeaderActor2D::GetArrowStyle)
    .function("SetArrowStyleToFilled", &vtkLeaderActor2D::SetArrowStyleToFilled)
    .function("SetArrowStyleToOpen", &vtkLeaderActor2D::SetArrowStyleToOpen)
    .function("SetArrowStyleToHollow", &vtkLeaderActor2D::SetArrowStyleToHollow)
    .function("SetArrowLength", &vtkLeaderActor2D::SetArrowLength)
    .function("GetArrowLengthMinValue", &vtkLeaderActor2D::GetArrowLengthMinValue)
    .function("GetArrowLengthMaxValue", &vtkLeaderActor2D::GetArrowLengthMaxValue)
    .function("GetArrowLength", &vtkLeaderActor2D::GetArrowLength)
    .function("SetArrowWidth", &vtkLeaderActor2D::SetArrowWidth)
    .function("GetArrowWidthMinValue", &vtkLeaderActor2D::GetArrowWidthMinValue)
    .function("GetArrowWidthMaxValue", &vtkLeaderActor2D::GetArrowWidthMaxValue)
    .function("GetArrowWidth", &vtkLeaderActor2D::GetArrowWidth)
    .function("SetMinimumArrowSize", &vtkLeaderActor2D::SetMinimumArrowSize)
    .function("GetMinimumArrowSizeMinValue", &vtkLeaderActor2D::GetMinimumArrowSizeMinValue)
    .function("GetMinimumArrowSizeMaxValue", &vtkLeaderActor2D::GetMinimumArrowSizeMaxValue)
    .function("GetMinimumArrowSize", &vtkLeaderActor2D::GetMinimumArrowSize)
    .function("SetMaximumArrowSize", &vtkLeaderActor2D::SetMaximumArrowSize)
    .function("GetMaximumArrowSizeMinValue", &vtkLeaderActor2D::GetMaximumArrowSizeMinValue)
    .function("GetMaximumArrowSizeMaxValue", &vtkLeaderActor2D::GetMaximumArrowSizeMaxValue)
    .function("GetMaximumArrowSize", &vtkLeaderActor2D::GetMaximumArrowSize)
    .function("SetAutoLabel", &vtkLeaderActor2D::SetAutoLabel)
    .function("GetAutoLabel", &vtkLeaderActor2D::GetAutoLabel)
    .function("AutoLabelOn", &vtkLeaderActor2D::AutoLabelOn)
    .function("AutoLabelOff", &vtkLeaderActor2D::AutoLabelOff)
    .function("SetLabelFormat", emscripten::optional_override([](vtkLeaderActor2D& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkLeaderActor2D& self) -> std::string {  return self.GetLabelFormat();}))
    .function("GetLength", &vtkLeaderActor2D::GetLength)
    .function("GetAngle", &vtkLeaderActor2D::GetAngle)
    .function("RenderOverlay", &vtkLeaderActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLeaderActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkLeaderActor2D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkLeaderActor2D::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkLeaderActor2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkLeaderActor2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetUseFontSizeFromProperty", &vtkLeaderActor2D::SetUseFontSizeFromProperty)
    .function("GetUseFontSizeFromProperty", &vtkLeaderActor2D::GetUseFontSizeFromProperty)
    .function("UseFontSizeFromPropertyOn", &vtkLeaderActor2D::UseFontSizeFromPropertyOn)
    .function("UseFontSizeFromPropertyOff", &vtkLeaderActor2D::UseFontSizeFromPropertyOff);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkLeaderActor2D_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkLeaderActor2D_VTK_ARROW_NONE", vtkLeaderActor2D::VTK_ARROW_NONE },
      { "vtkLeaderActor2D_VTK_ARROW_POINT1", vtkLeaderActor2D::VTK_ARROW_POINT1 },
      { "vtkLeaderActor2D_VTK_ARROW_POINT2", vtkLeaderActor2D::VTK_ARROW_POINT2 },
      { "vtkLeaderActor2D_VTK_ARROW_BOTH", vtkLeaderActor2D::VTK_ARROW_BOTH },
      { "vtkLeaderActor2D_VTK_ARROW_FILLED", vtkLeaderActor2D::VTK_ARROW_FILLED },
      { "vtkLeaderActor2D_VTK_ARROW_OPEN", vtkLeaderActor2D::VTK_ARROW_OPEN },
      { "vtkLeaderActor2D_VTK_ARROW_HOLLOW", vtkLeaderActor2D::VTK_ARROW_HOLLOW },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

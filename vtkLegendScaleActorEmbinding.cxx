// JavaScript wrapper for vtkLegendScaleActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkLegendScaleActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkLegendScaleActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkProperty2D.h"
#include "vtkAxisActor2D.h"
#include "vtkViewport.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkLegendScaleActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkLegendScaleActor_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLegendScaleActor>(vtkLegendScaleActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLegendScaleActor_class) {
  using AttributeLocation=vtkLegendScaleActor::AttributeLocation;
  emscripten::class_<vtkLegendScaleActor, emscripten::base<vtkProp>>("vtkLegendScaleActor")
    .smart_ptr<vtkSmartPointer<vtkLegendScaleActor>>("vtkSmartPointer<vtkLegendScaleActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLegendScaleActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLegendScaleActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLegendScaleActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLegendScaleActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLegendScaleActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLegendScaleActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLegendScaleActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLabelMode", &vtkLegendScaleActor::SetLabelMode)
    .function("GetLabelModeMinValue", &vtkLegendScaleActor::GetLabelModeMinValue)
    .function("GetLabelModeMaxValue", &vtkLegendScaleActor::GetLabelModeMaxValue)
    .function("GetLabelMode", &vtkLegendScaleActor::GetLabelMode)
    .function("SetLabelModeToDistance", &vtkLegendScaleActor::SetLabelModeToDistance)
    .function("SetLabelModeToCoordinates", &vtkLegendScaleActor::SetLabelModeToCoordinates)
    .function("SetRightAxisVisibility", &vtkLegendScaleActor::SetRightAxisVisibility)
    .function("GetRightAxisVisibility", &vtkLegendScaleActor::GetRightAxisVisibility)
    .function("RightAxisVisibilityOn", &vtkLegendScaleActor::RightAxisVisibilityOn)
    .function("RightAxisVisibilityOff", &vtkLegendScaleActor::RightAxisVisibilityOff)
    .function("SetTopAxisVisibility", &vtkLegendScaleActor::SetTopAxisVisibility)
    .function("GetTopAxisVisibility", &vtkLegendScaleActor::GetTopAxisVisibility)
    .function("TopAxisVisibilityOn", &vtkLegendScaleActor::TopAxisVisibilityOn)
    .function("TopAxisVisibilityOff", &vtkLegendScaleActor::TopAxisVisibilityOff)
    .function("SetLeftAxisVisibility", &vtkLegendScaleActor::SetLeftAxisVisibility)
    .function("GetLeftAxisVisibility", &vtkLegendScaleActor::GetLeftAxisVisibility)
    .function("LeftAxisVisibilityOn", &vtkLegendScaleActor::LeftAxisVisibilityOn)
    .function("LeftAxisVisibilityOff", &vtkLegendScaleActor::LeftAxisVisibilityOff)
    .function("SetBottomAxisVisibility", &vtkLegendScaleActor::SetBottomAxisVisibility)
    .function("GetBottomAxisVisibility", &vtkLegendScaleActor::GetBottomAxisVisibility)
    .function("BottomAxisVisibilityOn", &vtkLegendScaleActor::BottomAxisVisibilityOn)
    .function("BottomAxisVisibilityOff", &vtkLegendScaleActor::BottomAxisVisibilityOff)
    .function("SetLegendVisibility", &vtkLegendScaleActor::SetLegendVisibility)
    .function("GetLegendVisibility", &vtkLegendScaleActor::GetLegendVisibility)
    .function("LegendVisibilityOn", &vtkLegendScaleActor::LegendVisibilityOn)
    .function("LegendVisibilityOff", &vtkLegendScaleActor::LegendVisibilityOff)
    .function("AllAxesOn", &vtkLegendScaleActor::AllAxesOn)
    .function("AllAxesOff", &vtkLegendScaleActor::AllAxesOff)
    .function("AllAnnotationsOn", &vtkLegendScaleActor::AllAnnotationsOn)
    .function("AllAnnotationsOff", &vtkLegendScaleActor::AllAnnotationsOff)
    .function("SetGridVisibility", &vtkLegendScaleActor::SetGridVisibility)
    .function("GetGridVisibility", &vtkLegendScaleActor::GetGridVisibility)
    .function("GridVisibilityOn", &vtkLegendScaleActor::GridVisibilityOn)
    .function("GridVisibilityOff", &vtkLegendScaleActor::GridVisibilityOff)
    .function("SetRightBorderOffset", &vtkLegendScaleActor::SetRightBorderOffset)
    .function("GetRightBorderOffsetMinValue", &vtkLegendScaleActor::GetRightBorderOffsetMinValue)
    .function("GetRightBorderOffsetMaxValue", &vtkLegendScaleActor::GetRightBorderOffsetMaxValue)
    .function("GetRightBorderOffset", &vtkLegendScaleActor::GetRightBorderOffset)
    .function("SetTopBorderOffset", &vtkLegendScaleActor::SetTopBorderOffset)
    .function("GetTopBorderOffsetMinValue", &vtkLegendScaleActor::GetTopBorderOffsetMinValue)
    .function("GetTopBorderOffsetMaxValue", &vtkLegendScaleActor::GetTopBorderOffsetMaxValue)
    .function("GetTopBorderOffset", &vtkLegendScaleActor::GetTopBorderOffset)
    .function("SetLeftBorderOffset", &vtkLegendScaleActor::SetLeftBorderOffset)
    .function("GetLeftBorderOffsetMinValue", &vtkLegendScaleActor::GetLeftBorderOffsetMinValue)
    .function("GetLeftBorderOffsetMaxValue", &vtkLegendScaleActor::GetLeftBorderOffsetMaxValue)
    .function("GetLeftBorderOffset", &vtkLegendScaleActor::GetLeftBorderOffset)
    .function("SetBottomBorderOffset", &vtkLegendScaleActor::SetBottomBorderOffset)
    .function("GetBottomBorderOffsetMinValue", &vtkLegendScaleActor::GetBottomBorderOffsetMinValue)
    .function("GetBottomBorderOffsetMaxValue", &vtkLegendScaleActor::GetBottomBorderOffsetMaxValue)
    .function("GetBottomBorderOffset", &vtkLegendScaleActor::GetBottomBorderOffset)
    .function("SetCornerOffsetFactor", &vtkLegendScaleActor::SetCornerOffsetFactor)
    .function("GetCornerOffsetFactorMinValue", &vtkLegendScaleActor::GetCornerOffsetFactorMinValue)
    .function("GetCornerOffsetFactorMaxValue", &vtkLegendScaleActor::GetCornerOffsetFactorMaxValue)
    .function("GetCornerOffsetFactor", &vtkLegendScaleActor::GetCornerOffsetFactor)
    .function("SetNotation", &vtkLegendScaleActor::SetNotation)
    .function("GetNotation", &vtkLegendScaleActor::GetNotation)
    .function("SetPrecision", &vtkLegendScaleActor::SetPrecision)
    .function("GetPrecision", &vtkLegendScaleActor::GetPrecision)
    .function("SetNumberOfHorizontalLabels", &vtkLegendScaleActor::SetNumberOfHorizontalLabels)
    .function("GetNumberOfHorizontalLabels", &vtkLegendScaleActor::GetNumberOfHorizontalLabels)
    .function("SetNumberOfVerticalLabels", &vtkLegendScaleActor::SetNumberOfVerticalLabels)
    .function("GetNumberOfVerticalLabels", &vtkLegendScaleActor::GetNumberOfVerticalLabels)
    .function("SetOrigin", emscripten::select_overload<void(vtkLegendScaleActor&, double, double, double)>([](vtkLegendScaleActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("GetLegendTitleProperty", &vtkLegendScaleActor::GetLegendTitleProperty, emscripten::allow_raw_pointers())
    .function("GetLegendLabelProperty", &vtkLegendScaleActor::GetLegendLabelProperty, emscripten::allow_raw_pointers())
    .function("SetAxesTextProperty", &vtkLegendScaleActor::SetAxesTextProperty, emscripten::allow_raw_pointers())
    .function("SetAxesProperty", &vtkLegendScaleActor::SetAxesProperty, emscripten::allow_raw_pointers())
    .function("GetAxesProperty", &vtkLegendScaleActor::GetAxesProperty, emscripten::allow_raw_pointers())
    .function("SetUseFontSizeFromProperty", &vtkLegendScaleActor::SetUseFontSizeFromProperty)
    .function("SetSnapToGrid", &vtkLegendScaleActor::SetSnapToGrid)
    .function("GetRightAxis", &vtkLegendScaleActor::GetRightAxis, emscripten::allow_raw_pointers())
    .function("GetTopAxis", &vtkLegendScaleActor::GetTopAxis, emscripten::allow_raw_pointers())
    .function("GetLeftAxis", &vtkLegendScaleActor::GetLeftAxis, emscripten::allow_raw_pointers())
    .function("GetBottomAxis", &vtkLegendScaleActor::GetBottomAxis, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkLegendScaleActor::BuildRepresentation, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkLegendScaleActor::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLegendScaleActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkLegendScaleActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLegendScaleActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkLegendScaleActor_0_2_constants) {
    typedef vtkLegendScaleActor::AttributeLocation cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkLegendScaleActor_AttributeLocation_DISTANCE", vtkLegendScaleActor::DISTANCE },
      { "vtkLegendScaleActor_AttributeLocation_COORDINATES", vtkLegendScaleActor::COORDINATES },
      { "vtkLegendScaleActor_AttributeLocation_XY_COORDINATES", vtkLegendScaleActor::XY_COORDINATES },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

// JavaScript wrapper for vtkLineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkLineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkLineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointHandleRepresentation3D.h"
#include "vtkProperty.h"
#include "vtkPolyData.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkRenderer.h"
#include "vtkFollower.h"
#include "vtkLineRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkLineRepresentation>(vtkLineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLineRepresentation_class) {
  emscripten::class_<vtkLineRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkLineRepresentation")
    .smart_ptr<vtkSmartPointer<vtkLineRepresentation>>("vtkSmartPointer<vtkLineRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLineRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHandleRepresentation", &vtkLineRepresentation::SetHandleRepresentation, emscripten::allow_raw_pointers())
    .function("InstantiateHandleRepresentation", &vtkLineRepresentation::InstantiateHandleRepresentation)
    .function("GetPoint1Representation", &vtkLineRepresentation::GetPoint1Representation, emscripten::allow_raw_pointers())
    .function("GetPoint2Representation", &vtkLineRepresentation::GetPoint2Representation, emscripten::allow_raw_pointers())
    .function("GetLineHandleRepresentation", &vtkLineRepresentation::GetLineHandleRepresentation, emscripten::allow_raw_pointers())
    .function("GetEndPointProperty", &vtkLineRepresentation::GetEndPointProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedEndPointProperty", &vtkLineRepresentation::GetSelectedEndPointProperty, emscripten::allow_raw_pointers())
    .function("GetEndPoint2Property", &vtkLineRepresentation::GetEndPoint2Property, emscripten::allow_raw_pointers())
    .function("GetSelectedEndPoint2Property", &vtkLineRepresentation::GetSelectedEndPoint2Property, emscripten::allow_raw_pointers())
    .function("GetLineProperty", &vtkLineRepresentation::GetLineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedLineProperty", &vtkLineRepresentation::GetSelectedLineProperty, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkLineRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkLineRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkLineRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkLineRepresentation::GetTolerance)
    .function("SetResolution", &vtkLineRepresentation::SetResolution)
    .function("GetResolution", &vtkLineRepresentation::GetResolution)
    .function("GetPolyData", &vtkLineRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkLineRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkLineRepresentation::ComputeInteractionState)
    .function("GetActors", &vtkLineRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLineRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLineRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkLineRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkLineRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkLineRepresentation::SetInteractionState)
    .function("GetInteractionStateMinValue", &vtkLineRepresentation::GetInteractionStateMinValue)
    .function("GetInteractionStateMaxValue", &vtkLineRepresentation::GetInteractionStateMaxValue)
    .function("SetRepresentationState", &vtkLineRepresentation::SetRepresentationState)
    .function("GetRepresentationState", &vtkLineRepresentation::GetRepresentationState)
    .function("SetDirectionalLine", &vtkLineRepresentation::SetDirectionalLine)
    .function("GetDirectionalLine", &vtkLineRepresentation::GetDirectionalLine)
    .function("DirectionalLineOn", &vtkLineRepresentation::DirectionalLineOn)
    .function("DirectionalLineOff", &vtkLineRepresentation::DirectionalLineOff)
    .function("GetMTime", &vtkLineRepresentation::GetMTime)
    .function("SetRenderer", &vtkLineRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("SetDistanceAnnotationVisibility", &vtkLineRepresentation::SetDistanceAnnotationVisibility)
    .function("GetDistanceAnnotationVisibility", &vtkLineRepresentation::GetDistanceAnnotationVisibility)
    .function("DistanceAnnotationVisibilityOn", &vtkLineRepresentation::DistanceAnnotationVisibilityOn)
    .function("DistanceAnnotationVisibilityOff", &vtkLineRepresentation::DistanceAnnotationVisibilityOff)
    .function("SetDistanceAnnotationFormat", emscripten::optional_override([](vtkLineRepresentation& self, const std::string & arg_0) -> void {  return self.SetDistanceAnnotationFormat( arg_0.c_str());}))
    .function("GetDistanceAnnotationFormat", emscripten::optional_override([](vtkLineRepresentation& self) -> std::string {  return self.GetDistanceAnnotationFormat();}))
    .function("SetDistanceAnnotationScale", emscripten::select_overload<void(vtkLineRepresentation&, double, double, double)>([](vtkLineRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDistanceAnnotationScale( arg_0, arg_1, arg_2); }))
    .function("GetDistance", &vtkLineRepresentation::GetDistance)
    .function("SetLineColor", &vtkLineRepresentation::SetLineColor)
    .function("SetInteractionColor", emscripten::select_overload<void(vtkLineRepresentation&, double, double, double)>([](vtkLineRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkLineRepresentation&, double, double, double)>([](vtkLineRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("GetDistanceAnnotationProperty", &vtkLineRepresentation::GetDistanceAnnotationProperty, emscripten::allow_raw_pointers())
    .function("GetTextActor", &vtkLineRepresentation::GetTextActor, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkLineRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[11] = {
      { "vtkLineRepresentation_Outside", vtkLineRepresentation::Outside },
      { "vtkLineRepresentation_OnP1", vtkLineRepresentation::OnP1 },
      { "vtkLineRepresentation_OnP2", vtkLineRepresentation::OnP2 },
      { "vtkLineRepresentation_TranslatingP1", vtkLineRepresentation::TranslatingP1 },
      { "vtkLineRepresentation_TranslatingP2", vtkLineRepresentation::TranslatingP2 },
      { "vtkLineRepresentation_OnLine", vtkLineRepresentation::OnLine },
      { "vtkLineRepresentation_Scaling", vtkLineRepresentation::Scaling },
      { "vtkLineRepresentation_RestrictNone", vtkLineRepresentation::RestrictNone },
      { "vtkLineRepresentation_RestrictToX", vtkLineRepresentation::RestrictToX },
      { "vtkLineRepresentation_RestrictToY", vtkLineRepresentation::RestrictToY },
      { "vtkLineRepresentation_RestrictToZ", vtkLineRepresentation::RestrictToZ },
  };
  for (int c = 0; c < 11; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

// JavaScript wrapper for vtkRenderedTreeAreaRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkRenderedTreeAreaRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkRenderedTreeAreaRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkAreaLayoutStrategy.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkLabeledDataMapper.h"
#include "vtkViewTheme.h"
#include "vtkRenderedTreeAreaRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkRenderedTreeAreaRepresentation>(vtkRenderedTreeAreaRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderedTreeAreaRepresentation_class) {
  emscripten::class_<vtkRenderedTreeAreaRepresentation, emscripten::base<vtkRenderedRepresentation>>("vtkRenderedTreeAreaRepresentation")
    .smart_ptr<vtkSmartPointer<vtkRenderedTreeAreaRepresentation>>("vtkSmartPointer<vtkRenderedTreeAreaRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderedTreeAreaRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedTreeAreaRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderedTreeAreaRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderedTreeAreaRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedTreeAreaRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLabelRenderMode", &vtkRenderedTreeAreaRepresentation::SetLabelRenderMode)
    .function("SetAreaLabelArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void {  return self.SetAreaLabelArrayName( arg_0.c_str());}))
    .function("GetAreaLabelArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self) -> std::string {  return self.GetAreaLabelArrayName();}))
    .function("SetAreaSizeArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void {  return self.SetAreaSizeArrayName( arg_0.c_str());}))
    .function("GetAreaSizeArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self) -> std::string {  return self.GetAreaSizeArrayName();}))
    .function("SetAreaLabelPriorityArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void {  return self.SetAreaLabelPriorityArrayName( arg_0.c_str());}))
    .function("GetAreaLabelPriorityArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self) -> std::string {  return self.GetAreaLabelPriorityArrayName();}))
    .function("SetGraphEdgeLabelArrayName", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, const std::string &)>([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void { return self.SetGraphEdgeLabelArrayName( arg_0.c_str()); }))
    .function("SetGraphEdgeLabelArrayName", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, const std::string &, int)>([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0, int arg_1) -> void { return self.SetGraphEdgeLabelArrayName( arg_0.c_str(), arg_1); }))
    .function("GetGraphEdgeLabelArrayName", emscripten::select_overload<std::string(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> std::string { return self.GetGraphEdgeLabelArrayName(); }))
    .function("GetGraphEdgeLabelArrayName", emscripten::select_overload<std::string(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> std::string { return self.GetGraphEdgeLabelArrayName( arg_0); }))
    .function("SetGraphEdgeLabelTextProperty", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, vtkTextProperty*)>([](vtkRenderedTreeAreaRepresentation& self, vtkTextProperty* arg_0) -> void { return self.SetGraphEdgeLabelTextProperty( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetGraphEdgeLabelTextProperty", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, vtkTextProperty*, int)>([](vtkRenderedTreeAreaRepresentation& self, vtkTextProperty* arg_0, int arg_1) -> void { return self.SetGraphEdgeLabelTextProperty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetGraphEdgeLabelTextProperty", emscripten::select_overload<vtkTextProperty*(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> vtkTextProperty* { return self.GetGraphEdgeLabelTextProperty(); }), emscripten::allow_raw_pointers())
    .function("GetGraphEdgeLabelTextProperty", emscripten::select_overload<vtkTextProperty*(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> vtkTextProperty* { return self.GetGraphEdgeLabelTextProperty( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetAreaHoverArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void {  return self.SetAreaHoverArrayName( arg_0.c_str());}))
    .function("GetAreaHoverArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self) -> std::string {  return self.GetAreaHoverArrayName();}))
    .function("SetAreaLabelVisibility", &vtkRenderedTreeAreaRepresentation::SetAreaLabelVisibility)
    .function("GetAreaLabelVisibility", &vtkRenderedTreeAreaRepresentation::GetAreaLabelVisibility)
    .function("AreaLabelVisibilityOn", &vtkRenderedTreeAreaRepresentation::AreaLabelVisibilityOn)
    .function("AreaLabelVisibilityOff", &vtkRenderedTreeAreaRepresentation::AreaLabelVisibilityOff)
    .function("SetAreaLabelTextProperty", &vtkRenderedTreeAreaRepresentation::SetAreaLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetAreaLabelTextProperty", &vtkRenderedTreeAreaRepresentation::GetAreaLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetGraphEdgeLabelVisibility", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, bool)>([](vtkRenderedTreeAreaRepresentation& self, bool arg_0) -> void { return self.SetGraphEdgeLabelVisibility( arg_0); }))
    .function("SetGraphEdgeLabelVisibility", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, bool, int)>([](vtkRenderedTreeAreaRepresentation& self, bool arg_0, int arg_1) -> void { return self.SetGraphEdgeLabelVisibility( arg_0, arg_1); }))
    .function("GetGraphEdgeLabelVisibility", emscripten::select_overload<bool(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> bool { return self.GetGraphEdgeLabelVisibility(); }))
    .function("GetGraphEdgeLabelVisibility", emscripten::select_overload<bool(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> bool { return self.GetGraphEdgeLabelVisibility( arg_0); }))
    .function("GraphEdgeLabelVisibilityOn", &vtkRenderedTreeAreaRepresentation::GraphEdgeLabelVisibilityOn)
    .function("GraphEdgeLabelVisibilityOff", &vtkRenderedTreeAreaRepresentation::GraphEdgeLabelVisibilityOff)
    .function("SetAreaColorArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void {  return self.SetAreaColorArrayName( arg_0.c_str());}))
    .function("GetAreaColorArrayName", emscripten::optional_override([](vtkRenderedTreeAreaRepresentation& self) -> std::string {  return self.GetAreaColorArrayName();}))
    .function("SetColorAreasByArray", &vtkRenderedTreeAreaRepresentation::SetColorAreasByArray)
    .function("GetColorAreasByArray", &vtkRenderedTreeAreaRepresentation::GetColorAreasByArray)
    .function("ColorAreasByArrayOn", &vtkRenderedTreeAreaRepresentation::ColorAreasByArrayOn)
    .function("ColorAreasByArrayOff", &vtkRenderedTreeAreaRepresentation::ColorAreasByArrayOff)
    .function("SetGraphEdgeColorArrayName", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, const std::string &)>([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void { return self.SetGraphEdgeColorArrayName( arg_0.c_str()); }))
    .function("SetGraphEdgeColorArrayName", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, const std::string &, int)>([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0, int arg_1) -> void { return self.SetGraphEdgeColorArrayName( arg_0.c_str(), arg_1); }))
    .function("GetGraphEdgeColorArrayName", emscripten::select_overload<std::string(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> std::string { return self.GetGraphEdgeColorArrayName(); }))
    .function("GetGraphEdgeColorArrayName", emscripten::select_overload<std::string(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> std::string { return self.GetGraphEdgeColorArrayName( arg_0); }))
    .function("SetGraphEdgeColorToSplineFraction", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> void { return self.SetGraphEdgeColorToSplineFraction(); }))
    .function("SetGraphEdgeColorToSplineFraction", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> void { return self.SetGraphEdgeColorToSplineFraction( arg_0); }))
    .function("SetColorGraphEdgesByArray", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, bool)>([](vtkRenderedTreeAreaRepresentation& self, bool arg_0) -> void { return self.SetColorGraphEdgesByArray( arg_0); }))
    .function("SetColorGraphEdgesByArray", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, bool, int)>([](vtkRenderedTreeAreaRepresentation& self, bool arg_0, int arg_1) -> void { return self.SetColorGraphEdgesByArray( arg_0, arg_1); }))
    .function("GetColorGraphEdgesByArray", emscripten::select_overload<bool(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> bool { return self.GetColorGraphEdgesByArray(); }))
    .function("GetColorGraphEdgesByArray", emscripten::select_overload<bool(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> bool { return self.GetColorGraphEdgesByArray( arg_0); }))
    .function("ColorGraphEdgesByArrayOn", &vtkRenderedTreeAreaRepresentation::ColorGraphEdgesByArrayOn)
    .function("ColorGraphEdgesByArrayOff", &vtkRenderedTreeAreaRepresentation::ColorGraphEdgesByArrayOff)
    .function("SetGraphHoverArrayName", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, const std::string &)>([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0) -> void { return self.SetGraphHoverArrayName( arg_0.c_str()); }))
    .function("SetGraphHoverArrayName", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, const std::string &, int)>([](vtkRenderedTreeAreaRepresentation& self, const std::string & arg_0, int arg_1) -> void { return self.SetGraphHoverArrayName( arg_0.c_str(), arg_1); }))
    .function("GetGraphHoverArrayName", emscripten::select_overload<std::string(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> std::string { return self.GetGraphHoverArrayName(); }))
    .function("GetGraphHoverArrayName", emscripten::select_overload<std::string(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> std::string { return self.GetGraphHoverArrayName( arg_0); }))
    .function("SetShrinkPercentage", &vtkRenderedTreeAreaRepresentation::SetShrinkPercentage)
    .function("GetShrinkPercentage", &vtkRenderedTreeAreaRepresentation::GetShrinkPercentage)
    .function("SetGraphBundlingStrength", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, double)>([](vtkRenderedTreeAreaRepresentation& self, double arg_0) -> void { return self.SetGraphBundlingStrength( arg_0); }))
    .function("SetGraphBundlingStrength", emscripten::select_overload<void(vtkRenderedTreeAreaRepresentation&, double, int)>([](vtkRenderedTreeAreaRepresentation& self, double arg_0, int arg_1) -> void { return self.SetGraphBundlingStrength( arg_0, arg_1); }))
    .function("GetGraphBundlingStrength", emscripten::select_overload<double(vtkRenderedTreeAreaRepresentation&)>([](vtkRenderedTreeAreaRepresentation& self) -> double { return self.GetGraphBundlingStrength(); }))
    .function("GetGraphBundlingStrength", emscripten::select_overload<double(vtkRenderedTreeAreaRepresentation&, int)>([](vtkRenderedTreeAreaRepresentation& self, int arg_0) -> double { return self.GetGraphBundlingStrength( arg_0); }))
    .function("SetGraphSplineType", &vtkRenderedTreeAreaRepresentation::SetGraphSplineType)
    .function("GetGraphSplineType", &vtkRenderedTreeAreaRepresentation::GetGraphSplineType)
    .function("SetAreaLayoutStrategy", &vtkRenderedTreeAreaRepresentation::SetAreaLayoutStrategy, emscripten::allow_raw_pointers())
    .function("GetAreaLayoutStrategy", &vtkRenderedTreeAreaRepresentation::GetAreaLayoutStrategy, emscripten::allow_raw_pointers())
    .function("SetAreaToPolyData", &vtkRenderedTreeAreaRepresentation::SetAreaToPolyData, emscripten::allow_raw_pointers())
    .function("GetAreaToPolyData", &vtkRenderedTreeAreaRepresentation::GetAreaToPolyData, emscripten::allow_raw_pointers())
    .function("SetUseRectangularCoordinates", &vtkRenderedTreeAreaRepresentation::SetUseRectangularCoordinates)
    .function("GetUseRectangularCoordinates", &vtkRenderedTreeAreaRepresentation::GetUseRectangularCoordinates)
    .function("UseRectangularCoordinatesOn", &vtkRenderedTreeAreaRepresentation::UseRectangularCoordinatesOn)
    .function("UseRectangularCoordinatesOff", &vtkRenderedTreeAreaRepresentation::UseRectangularCoordinatesOff)
    .function("SetAreaLabelMapper", &vtkRenderedTreeAreaRepresentation::SetAreaLabelMapper, emscripten::allow_raw_pointers())
    .function("GetAreaLabelMapper", &vtkRenderedTreeAreaRepresentation::GetAreaLabelMapper, emscripten::allow_raw_pointers())
    .function("ApplyViewTheme", &vtkRenderedTreeAreaRepresentation::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("SetEdgeScalarBarVisibility", &vtkRenderedTreeAreaRepresentation::SetEdgeScalarBarVisibility)
    .function("GetEdgeScalarBarVisibility", &vtkRenderedTreeAreaRepresentation::GetEdgeScalarBarVisibility);
}

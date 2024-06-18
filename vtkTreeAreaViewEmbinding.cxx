// JavaScript wrapper for vtkTreeAreaView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkTreeAreaViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkTreeAreaView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataRepresentation.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTree.h"
#include "vtkGraph.h"
#include "vtkAreaLayoutStrategy.h"
#include "vtkTreeAreaView.h"

template<> void emscripten::internal::raw_destructor<vtkTreeAreaView>(vtkTreeAreaView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeAreaView_class) {
  emscripten::class_<vtkTreeAreaView, emscripten::base<vtkRenderView>>("vtkTreeAreaView")
    .smart_ptr<vtkSmartPointer<vtkTreeAreaView>>("vtkSmartPointer<vtkTreeAreaView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTreeAreaView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeAreaView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeAreaView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeAreaView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeAreaView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTreeFromInputConnection", &vtkTreeAreaView::SetTreeFromInputConnection, emscripten::allow_raw_pointers())
    .function("SetTreeFromInput", &vtkTreeAreaView::SetTreeFromInput, emscripten::allow_raw_pointers())
    .function("SetGraphFromInputConnection", &vtkTreeAreaView::SetGraphFromInputConnection, emscripten::allow_raw_pointers())
    .function("SetGraphFromInput", &vtkTreeAreaView::SetGraphFromInput, emscripten::allow_raw_pointers())
    .function("SetAreaLabelArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetAreaLabelArrayName( arg_0.c_str());}))
    .function("GetAreaLabelArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetAreaLabelArrayName();}))
    .function("SetAreaSizeArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetAreaSizeArrayName( arg_0.c_str());}))
    .function("GetAreaSizeArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetAreaSizeArrayName();}))
    .function("SetLabelPriorityArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetLabelPriorityArrayName( arg_0.c_str());}))
    .function("GetLabelPriorityArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetLabelPriorityArrayName();}))
    .function("SetEdgeLabelArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetEdgeLabelArrayName( arg_0.c_str());}))
    .function("GetEdgeLabelArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetEdgeLabelArrayName();}))
    .function("SetAreaHoverArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetAreaHoverArrayName( arg_0.c_str());}))
    .function("GetAreaHoverArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetAreaHoverArrayName();}))
    .function("SetAreaLabelVisibility", &vtkTreeAreaView::SetAreaLabelVisibility)
    .function("GetAreaLabelVisibility", &vtkTreeAreaView::GetAreaLabelVisibility)
    .function("AreaLabelVisibilityOn", &vtkTreeAreaView::AreaLabelVisibilityOn)
    .function("AreaLabelVisibilityOff", &vtkTreeAreaView::AreaLabelVisibilityOff)
    .function("SetEdgeLabelVisibility", &vtkTreeAreaView::SetEdgeLabelVisibility)
    .function("GetEdgeLabelVisibility", &vtkTreeAreaView::GetEdgeLabelVisibility)
    .function("EdgeLabelVisibilityOn", &vtkTreeAreaView::EdgeLabelVisibilityOn)
    .function("EdgeLabelVisibilityOff", &vtkTreeAreaView::EdgeLabelVisibilityOff)
    .function("SetAreaColorArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetAreaColorArrayName( arg_0.c_str());}))
    .function("GetAreaColorArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetAreaColorArrayName();}))
    .function("SetColorAreas", &vtkTreeAreaView::SetColorAreas)
    .function("GetColorAreas", &vtkTreeAreaView::GetColorAreas)
    .function("ColorAreasOn", &vtkTreeAreaView::ColorAreasOn)
    .function("ColorAreasOff", &vtkTreeAreaView::ColorAreasOff)
    .function("SetEdgeColorArrayName", emscripten::optional_override([](vtkTreeAreaView& self, const std::string & arg_0) -> void {  return self.SetEdgeColorArrayName( arg_0.c_str());}))
    .function("GetEdgeColorArrayName", emscripten::optional_override([](vtkTreeAreaView& self) -> std::string {  return self.GetEdgeColorArrayName();}))
    .function("SetEdgeColorToSplineFraction", &vtkTreeAreaView::SetEdgeColorToSplineFraction)
    .function("SetShrinkPercentage", &vtkTreeAreaView::SetShrinkPercentage)
    .function("GetShrinkPercentage", &vtkTreeAreaView::GetShrinkPercentage)
    .function("SetColorEdges", &vtkTreeAreaView::SetColorEdges)
    .function("GetColorEdges", &vtkTreeAreaView::GetColorEdges)
    .function("ColorEdgesOn", &vtkTreeAreaView::ColorEdgesOn)
    .function("ColorEdgesOff", &vtkTreeAreaView::ColorEdgesOff)
    .function("SetBundlingStrength", &vtkTreeAreaView::SetBundlingStrength)
    .function("GetBundlingStrength", &vtkTreeAreaView::GetBundlingStrength)
    .function("SetAreaLabelFontSize", &vtkTreeAreaView::SetAreaLabelFontSize)
    .function("GetAreaLabelFontSize", &vtkTreeAreaView::GetAreaLabelFontSize)
    .function("SetEdgeLabelFontSize", &vtkTreeAreaView::SetEdgeLabelFontSize)
    .function("GetEdgeLabelFontSize", &vtkTreeAreaView::GetEdgeLabelFontSize)
    .function("SetLayoutStrategy", &vtkTreeAreaView::SetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("GetLayoutStrategy", &vtkTreeAreaView::GetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("SetUseRectangularCoordinates", &vtkTreeAreaView::SetUseRectangularCoordinates)
    .function("GetUseRectangularCoordinates", &vtkTreeAreaView::GetUseRectangularCoordinates)
    .function("UseRectangularCoordinatesOn", &vtkTreeAreaView::UseRectangularCoordinatesOn)
    .function("UseRectangularCoordinatesOff", &vtkTreeAreaView::UseRectangularCoordinatesOff)
    .function("SetEdgeScalarBarVisibility", &vtkTreeAreaView::SetEdgeScalarBarVisibility)
    .function("GetEdgeScalarBarVisibility", &vtkTreeAreaView::GetEdgeScalarBarVisibility);
}

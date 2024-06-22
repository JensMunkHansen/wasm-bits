// JavaScript wrapper for vtkHierarchicalGraphView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkHierarchicalGraphViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkHierarchicalGraphView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataRepresentation.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkHierarchicalGraphView.h"

template<> void emscripten::internal::raw_destructor<vtkHierarchicalGraphView>(vtkHierarchicalGraphView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalGraphView_class) {
  emscripten::class_<vtkHierarchicalGraphView, emscripten::base<vtkGraphLayoutView>>("vtkHierarchicalGraphView")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalGraphView>>("vtkSmartPointer<vtkHierarchicalGraphView>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHierarchicalGraphView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalGraphView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalGraphView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalGraphView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalGraphView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalGraphView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalGraphView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHierarchyFromInputConnection", &vtkHierarchicalGraphView::SetHierarchyFromInputConnection, emscripten::allow_raw_pointers())
    .function("SetHierarchyFromInput", &vtkHierarchicalGraphView::SetHierarchyFromInput, emscripten::allow_raw_pointers())
    .function("SetGraphFromInputConnection", &vtkHierarchicalGraphView::SetGraphFromInputConnection, emscripten::allow_raw_pointers())
    .function("SetGraphFromInput", &vtkHierarchicalGraphView::SetGraphFromInput, emscripten::allow_raw_pointers())
    .function("SetGraphEdgeLabelArrayName", emscripten::optional_override([](vtkHierarchicalGraphView& self, const std::string & arg_0) -> void {  return self.SetGraphEdgeLabelArrayName( arg_0.c_str());}))
    .function("GetGraphEdgeLabelArrayName", emscripten::optional_override([](vtkHierarchicalGraphView& self) -> std::string {  return self.GetGraphEdgeLabelArrayName();}))
    .function("SetGraphEdgeLabelVisibility", &vtkHierarchicalGraphView::SetGraphEdgeLabelVisibility)
    .function("GetGraphEdgeLabelVisibility", &vtkHierarchicalGraphView::GetGraphEdgeLabelVisibility)
    .function("GraphEdgeLabelVisibilityOn", &vtkHierarchicalGraphView::GraphEdgeLabelVisibilityOn)
    .function("GraphEdgeLabelVisibilityOff", &vtkHierarchicalGraphView::GraphEdgeLabelVisibilityOff)
    .function("SetGraphEdgeColorArrayName", emscripten::optional_override([](vtkHierarchicalGraphView& self, const std::string & arg_0) -> void {  return self.SetGraphEdgeColorArrayName( arg_0.c_str());}))
    .function("GetGraphEdgeColorArrayName", emscripten::optional_override([](vtkHierarchicalGraphView& self) -> std::string {  return self.GetGraphEdgeColorArrayName();}))
    .function("SetGraphEdgeColorToSplineFraction", &vtkHierarchicalGraphView::SetGraphEdgeColorToSplineFraction)
    .function("SetColorGraphEdgesByArray", &vtkHierarchicalGraphView::SetColorGraphEdgesByArray)
    .function("GetColorGraphEdgesByArray", &vtkHierarchicalGraphView::GetColorGraphEdgesByArray)
    .function("ColorGraphEdgesByArrayOn", &vtkHierarchicalGraphView::ColorGraphEdgesByArrayOn)
    .function("ColorGraphEdgesByArrayOff", &vtkHierarchicalGraphView::ColorGraphEdgesByArrayOff)
    .function("SetBundlingStrength", &vtkHierarchicalGraphView::SetBundlingStrength)
    .function("GetBundlingStrength", &vtkHierarchicalGraphView::GetBundlingStrength)
    .function("SetGraphVisibility", &vtkHierarchicalGraphView::SetGraphVisibility)
    .function("GetGraphVisibility", &vtkHierarchicalGraphView::GetGraphVisibility)
    .function("GraphVisibilityOn", &vtkHierarchicalGraphView::GraphVisibilityOn)
    .function("GraphVisibilityOff", &vtkHierarchicalGraphView::GraphVisibilityOff)
    .function("SetGraphEdgeLabelFontSize", &vtkHierarchicalGraphView::SetGraphEdgeLabelFontSize)
    .function("GetGraphEdgeLabelFontSize", &vtkHierarchicalGraphView::GetGraphEdgeLabelFontSize);
}

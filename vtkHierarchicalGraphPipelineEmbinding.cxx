// JavaScript wrapper for vtkHierarchicalGraphPipeline with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkHierarchicalGraphPipelineEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkHierarchicalGraphPipeline.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor.h"
#include "vtkActor2D.h"
#include "vtkTextProperty.h"
#include "vtkSelection.h"
#include "vtkDataRepresentation.h"
#include "vtkAlgorithmOutput.h"
#include "vtkViewTheme.h"
#include "vtkRenderView.h"
#include "vtkHierarchicalGraphPipeline.h"

template<> void emscripten::internal::raw_destructor<vtkHierarchicalGraphPipeline>(vtkHierarchicalGraphPipeline * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalGraphPipeline_class) {
  emscripten::class_<vtkHierarchicalGraphPipeline, emscripten::base<vtkObject>>("vtkHierarchicalGraphPipeline")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalGraphPipeline>>("vtkSmartPointer<vtkHierarchicalGraphPipeline>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHierarchicalGraphPipeline>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalGraphPipeline::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalGraphPipeline::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalGraphPipeline::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalGraphPipeline::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActor", &vtkHierarchicalGraphPipeline::GetActor, emscripten::allow_raw_pointers())
    .function("GetLabelActor", &vtkHierarchicalGraphPipeline::GetLabelActor, emscripten::allow_raw_pointers())
    .function("SetBundlingStrength", &vtkHierarchicalGraphPipeline::SetBundlingStrength)
    .function("GetBundlingStrength", &vtkHierarchicalGraphPipeline::GetBundlingStrength)
    .function("SetLabelArrayName", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self, const std::string & arg_0) -> void {  return self.SetLabelArrayName( arg_0.c_str());}))
    .function("GetLabelArrayName", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self) -> std::string {  return self.GetLabelArrayName();}))
    .function("SetLabelVisibility", &vtkHierarchicalGraphPipeline::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkHierarchicalGraphPipeline::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkHierarchicalGraphPipeline::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkHierarchicalGraphPipeline::LabelVisibilityOff)
    .function("SetLabelTextProperty", &vtkHierarchicalGraphPipeline::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkHierarchicalGraphPipeline::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetColorArrayName", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self, const std::string & arg_0) -> void {  return self.SetColorArrayName( arg_0.c_str());}))
    .function("GetColorArrayName", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self) -> std::string {  return self.GetColorArrayName();}))
    .function("SetColorEdgesByArray", &vtkHierarchicalGraphPipeline::SetColorEdgesByArray)
    .function("GetColorEdgesByArray", &vtkHierarchicalGraphPipeline::GetColorEdgesByArray)
    .function("ColorEdgesByArrayOn", &vtkHierarchicalGraphPipeline::ColorEdgesByArrayOn)
    .function("ColorEdgesByArrayOff", &vtkHierarchicalGraphPipeline::ColorEdgesByArrayOff)
    .function("SetVisibility", &vtkHierarchicalGraphPipeline::SetVisibility)
    .function("GetVisibility", &vtkHierarchicalGraphPipeline::GetVisibility)
    .function("VisibilityOn", &vtkHierarchicalGraphPipeline::VisibilityOn)
    .function("VisibilityOff", &vtkHierarchicalGraphPipeline::VisibilityOff)
    .function("ConvertSelection", &vtkHierarchicalGraphPipeline::ConvertSelection, emscripten::allow_raw_pointers())
    .function("PrepareInputConnections", &vtkHierarchicalGraphPipeline::PrepareInputConnections, emscripten::allow_raw_pointers())
    .function("ApplyViewTheme", &vtkHierarchicalGraphPipeline::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("SetHoverArrayName", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self, const std::string & arg_0) -> void {  return self.SetHoverArrayName( arg_0.c_str());}))
    .function("GetHoverArrayName", emscripten::optional_override([](vtkHierarchicalGraphPipeline& self) -> std::string {  return self.GetHoverArrayName();}))
    .function("SetSplineType", &vtkHierarchicalGraphPipeline::SetSplineType)
    .function("GetSplineType", &vtkHierarchicalGraphPipeline::GetSplineType)
    .function("RegisterProgress", &vtkHierarchicalGraphPipeline::RegisterProgress, emscripten::allow_raw_pointers());
}

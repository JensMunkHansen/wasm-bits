// JavaScript wrapper for vtkSpiderPlotActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkSpiderPlotActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkSpiderPlotActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTextProperty.h"
#include "vtkLegendBoxActor.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkSpiderPlotActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkSpiderPlotActor_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_IV_COLUMN", 0 },
      { "VTK_IV_ROW", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkSpiderPlotActor>(vtkSpiderPlotActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpiderPlotActor_class) {
  emscripten::class_<vtkSpiderPlotActor, emscripten::base<vtkActor2D>>("vtkSpiderPlotActor")
    .smart_ptr<vtkSmartPointer<vtkSpiderPlotActor>>("vtkSmartPointer<vtkSpiderPlotActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSpiderPlotActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpiderPlotActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpiderPlotActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpiderPlotActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpiderPlotActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpiderPlotActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpiderPlotActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkSpiderPlotActor::SetInputData, emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtkSpiderPlotActor::SetInputConnection, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkSpiderPlotActor::GetInput, emscripten::allow_raw_pointers())
    .function("SetIndependentVariables", &vtkSpiderPlotActor::SetIndependentVariables)
    .function("GetIndependentVariablesMinValue", &vtkSpiderPlotActor::GetIndependentVariablesMinValue)
    .function("GetIndependentVariablesMaxValue", &vtkSpiderPlotActor::GetIndependentVariablesMaxValue)
    .function("GetIndependentVariables", &vtkSpiderPlotActor::GetIndependentVariables)
    .function("SetIndependentVariablesToColumns", &vtkSpiderPlotActor::SetIndependentVariablesToColumns)
    .function("SetIndependentVariablesToRows", &vtkSpiderPlotActor::SetIndependentVariablesToRows)
    .function("SetTitleVisibility", &vtkSpiderPlotActor::SetTitleVisibility)
    .function("GetTitleVisibility", &vtkSpiderPlotActor::GetTitleVisibility)
    .function("TitleVisibilityOn", &vtkSpiderPlotActor::TitleVisibilityOn)
    .function("TitleVisibilityOff", &vtkSpiderPlotActor::TitleVisibilityOff)
    .function("SetTitle", emscripten::optional_override([](vtkSpiderPlotActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkSpiderPlotActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetTitleTextProperty", &vtkSpiderPlotActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkSpiderPlotActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelVisibility", &vtkSpiderPlotActor::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkSpiderPlotActor::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkSpiderPlotActor::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkSpiderPlotActor::LabelVisibilityOff)
    .function("SetLabelTextProperty", &vtkSpiderPlotActor::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkSpiderPlotActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetNumberOfRings", &vtkSpiderPlotActor::SetNumberOfRings)
    .function("GetNumberOfRingsMinValue", &vtkSpiderPlotActor::GetNumberOfRingsMinValue)
    .function("GetNumberOfRingsMaxValue", &vtkSpiderPlotActor::GetNumberOfRingsMaxValue)
    .function("GetNumberOfRings", &vtkSpiderPlotActor::GetNumberOfRings)
    .function("SetAxisLabel", emscripten::optional_override([](vtkSpiderPlotActor& self, int arg_0, const std::string & arg_1) -> void {  return self.SetAxisLabel( arg_0, arg_1.c_str());}))
    .function("GetAxisLabel", emscripten::optional_override([](vtkSpiderPlotActor& self, int arg_0) -> std::string {  return self.GetAxisLabel( arg_0);}))
    .function("SetAxisRange", emscripten::select_overload<void(vtkSpiderPlotActor&, int, double, double)>([](vtkSpiderPlotActor& self, int arg_0, double arg_1, double arg_2) -> void { return self.SetAxisRange( arg_0, arg_1, arg_2); }))
    .function("SetPlotColor", emscripten::select_overload<void(vtkSpiderPlotActor&, int, double, double, double)>([](vtkSpiderPlotActor& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetPlotColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetPlotColor", emscripten::optional_override([](vtkSpiderPlotActor& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPlotColor( arg_0)) / sizeof(double);}))
    .function("SetLegendVisibility", &vtkSpiderPlotActor::SetLegendVisibility)
    .function("GetLegendVisibility", &vtkSpiderPlotActor::GetLegendVisibility)
    .function("LegendVisibilityOn", &vtkSpiderPlotActor::LegendVisibilityOn)
    .function("LegendVisibilityOff", &vtkSpiderPlotActor::LegendVisibilityOff)
    .function("GetLegendActor", &vtkSpiderPlotActor::GetLegendActor, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkSpiderPlotActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkSpiderPlotActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkSpiderPlotActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkSpiderPlotActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkSpiderPlotActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

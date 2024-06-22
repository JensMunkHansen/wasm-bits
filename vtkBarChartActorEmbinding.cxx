// JavaScript wrapper for vtkBarChartActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkBarChartActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkBarChartActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkTextProperty.h"
#include "vtkLegendBoxActor.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkBarChartActor.h"

template<> void emscripten::internal::raw_destructor<vtkBarChartActor>(vtkBarChartActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBarChartActor_class) {
  emscripten::class_<vtkBarChartActor, emscripten::base<vtkActor2D>>("vtkBarChartActor")
    .smart_ptr<vtkSmartPointer<vtkBarChartActor>>("vtkSmartPointer<vtkBarChartActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBarChartActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBarChartActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBarChartActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBarChartActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBarChartActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBarChartActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBarChartActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", &vtkBarChartActor::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkBarChartActor::GetInput, emscripten::allow_raw_pointers())
    .function("SetTitleVisibility", &vtkBarChartActor::SetTitleVisibility)
    .function("GetTitleVisibility", &vtkBarChartActor::GetTitleVisibility)
    .function("TitleVisibilityOn", &vtkBarChartActor::TitleVisibilityOn)
    .function("TitleVisibilityOff", &vtkBarChartActor::TitleVisibilityOff)
    .function("SetTitle", emscripten::optional_override([](vtkBarChartActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkBarChartActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetTitleTextProperty", &vtkBarChartActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkBarChartActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelVisibility", &vtkBarChartActor::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkBarChartActor::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkBarChartActor::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkBarChartActor::LabelVisibilityOff)
    .function("SetLabelTextProperty", &vtkBarChartActor::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkBarChartActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetBarColor", emscripten::select_overload<void(vtkBarChartActor&, int, double, double, double)>([](vtkBarChartActor& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetBarColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetBarColor", emscripten::optional_override([](vtkBarChartActor& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBarColor( arg_0)) / sizeof(double);}))
    .function("SetBarLabel", emscripten::optional_override([](vtkBarChartActor& self, int arg_0, const std::string & arg_1) -> void {  return self.SetBarLabel( arg_0, arg_1.c_str());}))
    .function("GetBarLabel", emscripten::optional_override([](vtkBarChartActor& self, int arg_0) -> std::string {  return self.GetBarLabel( arg_0);}))
    .function("SetYTitle", emscripten::optional_override([](vtkBarChartActor& self, const std::string & arg_0) -> void {  return self.SetYTitle( arg_0.c_str());}))
    .function("GetYTitle", emscripten::optional_override([](vtkBarChartActor& self) -> std::string {  return self.GetYTitle();}))
    .function("SetLegendVisibility", &vtkBarChartActor::SetLegendVisibility)
    .function("GetLegendVisibility", &vtkBarChartActor::GetLegendVisibility)
    .function("LegendVisibilityOn", &vtkBarChartActor::LegendVisibilityOn)
    .function("LegendVisibilityOff", &vtkBarChartActor::LegendVisibilityOff)
    .function("GetLegendActor", &vtkBarChartActor::GetLegendActor, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkBarChartActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkBarChartActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkBarChartActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkBarChartActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkBarChartActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

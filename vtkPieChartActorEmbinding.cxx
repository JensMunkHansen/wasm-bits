// JavaScript wrapper for vtkPieChartActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkPieChartActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkPieChartActor.h
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
#include "vtkPieChartActor.h"

template<> void emscripten::internal::raw_destructor<vtkPieChartActor>(vtkPieChartActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPieChartActor_class) {
  emscripten::class_<vtkPieChartActor, emscripten::base<vtkActor2D>>("vtkPieChartActor")
    .smart_ptr<vtkSmartPointer<vtkPieChartActor>>("vtkSmartPointer<vtkPieChartActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPieChartActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPieChartActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPieChartActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPieChartActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPieChartActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPieChartActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPieChartActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkPieChartActor::SetInputData, emscripten::allow_raw_pointers())
    .function("SetInputConnection", &vtkPieChartActor::SetInputConnection, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkPieChartActor::GetInput, emscripten::allow_raw_pointers())
    .function("SetTitleVisibility", &vtkPieChartActor::SetTitleVisibility)
    .function("GetTitleVisibility", &vtkPieChartActor::GetTitleVisibility)
    .function("TitleVisibilityOn", &vtkPieChartActor::TitleVisibilityOn)
    .function("TitleVisibilityOff", &vtkPieChartActor::TitleVisibilityOff)
    .function("SetTitle", emscripten::optional_override([](vtkPieChartActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkPieChartActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetTitleTextProperty", &vtkPieChartActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkPieChartActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelVisibility", &vtkPieChartActor::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkPieChartActor::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkPieChartActor::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkPieChartActor::LabelVisibilityOff)
    .function("SetLabelTextProperty", &vtkPieChartActor::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkPieChartActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("SetPieceColor", emscripten::select_overload<void(vtkPieChartActor&, int, double, double, double)>([](vtkPieChartActor& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetPieceColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetPieceColor", emscripten::optional_override([](vtkPieChartActor& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPieceColor( arg_0)) / sizeof(double);}))
    .function("SetPieceLabel", emscripten::optional_override([](vtkPieChartActor& self, int arg_0, const std::string & arg_1) -> void {  return self.SetPieceLabel( arg_0, arg_1.c_str());}))
    .function("GetPieceLabel", emscripten::optional_override([](vtkPieChartActor& self, int arg_0) -> std::string {  return self.GetPieceLabel( arg_0);}))
    .function("SetLegendVisibility", &vtkPieChartActor::SetLegendVisibility)
    .function("GetLegendVisibility", &vtkPieChartActor::GetLegendVisibility)
    .function("LegendVisibilityOn", &vtkPieChartActor::LegendVisibilityOn)
    .function("LegendVisibilityOff", &vtkPieChartActor::LegendVisibilityOff)
    .function("GetLegendActor", &vtkPieChartActor::GetLegendActor, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkPieChartActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkPieChartActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkPieChartActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkPieChartActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkPieChartActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

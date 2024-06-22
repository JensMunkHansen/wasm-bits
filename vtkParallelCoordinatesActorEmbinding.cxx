// JavaScript wrapper for vtkParallelCoordinatesActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkParallelCoordinatesActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkParallelCoordinatesActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkWindow.h"
#include "vtkParallelCoordinatesActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkParallelCoordinatesActor_0_1_constants) {
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
template<> void emscripten::internal::raw_destructor<vtkParallelCoordinatesActor>(vtkParallelCoordinatesActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelCoordinatesActor_class) {
  emscripten::class_<vtkParallelCoordinatesActor, emscripten::base<vtkActor2D>>("vtkParallelCoordinatesActor")
    .smart_ptr<vtkSmartPointer<vtkParallelCoordinatesActor>>("vtkSmartPointer<vtkParallelCoordinatesActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkParallelCoordinatesActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelCoordinatesActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelCoordinatesActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelCoordinatesActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelCoordinatesActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetIndependentVariables", &vtkParallelCoordinatesActor::SetIndependentVariables)
    .function("GetIndependentVariablesMinValue", &vtkParallelCoordinatesActor::GetIndependentVariablesMinValue)
    .function("GetIndependentVariablesMaxValue", &vtkParallelCoordinatesActor::GetIndependentVariablesMaxValue)
    .function("GetIndependentVariables", &vtkParallelCoordinatesActor::GetIndependentVariables)
    .function("SetIndependentVariablesToColumns", &vtkParallelCoordinatesActor::SetIndependentVariablesToColumns)
    .function("SetIndependentVariablesToRows", &vtkParallelCoordinatesActor::SetIndependentVariablesToRows)
    .function("SetTitle", emscripten::optional_override([](vtkParallelCoordinatesActor& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkParallelCoordinatesActor& self) -> std::string {  return self.GetTitle();}))
    .function("SetNumberOfLabels", &vtkParallelCoordinatesActor::SetNumberOfLabels)
    .function("GetNumberOfLabelsMinValue", &vtkParallelCoordinatesActor::GetNumberOfLabelsMinValue)
    .function("GetNumberOfLabelsMaxValue", &vtkParallelCoordinatesActor::GetNumberOfLabelsMaxValue)
    .function("GetNumberOfLabels", &vtkParallelCoordinatesActor::GetNumberOfLabels)
    .function("SetLabelFormat", emscripten::optional_override([](vtkParallelCoordinatesActor& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkParallelCoordinatesActor& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetTitleTextProperty", &vtkParallelCoordinatesActor::SetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("GetTitleTextProperty", &vtkParallelCoordinatesActor::GetTitleTextProperty, emscripten::allow_raw_pointers())
    .function("SetLabelTextProperty", &vtkParallelCoordinatesActor::SetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", &vtkParallelCoordinatesActor::GetLabelTextProperty, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkParallelCoordinatesActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkParallelCoordinatesActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkParallelCoordinatesActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkParallelCoordinatesActor::HasTranslucentPolygonalGeometry)
    .function("SetInputConnection", &vtkParallelCoordinatesActor::SetInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputData", &vtkParallelCoordinatesActor::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkParallelCoordinatesActor::GetInput, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkParallelCoordinatesActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

// JavaScript wrapper for vtkOrientedGlyphContourRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkOrientedGlyphContourRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkOrientedGlyphContourRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkRenderer.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkOrientedGlyphContourRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkOrientedGlyphContourRepresentation>(vtkOrientedGlyphContourRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientedGlyphContourRepresentation_class) {
  emscripten::class_<vtkOrientedGlyphContourRepresentation, emscripten::base<vtkContourRepresentation>>("vtkOrientedGlyphContourRepresentation")
    .smart_ptr<vtkSmartPointer<vtkOrientedGlyphContourRepresentation>>("vtkSmartPointer<vtkOrientedGlyphContourRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOrientedGlyphContourRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientedGlyphContourRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientedGlyphContourRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientedGlyphContourRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientedGlyphContourRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientedGlyphContourRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientedGlyphContourRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCursorShape", &vtkOrientedGlyphContourRepresentation::SetCursorShape, emscripten::allow_raw_pointers())
    .function("GetCursorShape", &vtkOrientedGlyphContourRepresentation::GetCursorShape, emscripten::allow_raw_pointers())
    .function("SetActiveCursorShape", &vtkOrientedGlyphContourRepresentation::SetActiveCursorShape, emscripten::allow_raw_pointers())
    .function("GetActiveCursorShape", &vtkOrientedGlyphContourRepresentation::GetActiveCursorShape, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkOrientedGlyphContourRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("GetActiveProperty", &vtkOrientedGlyphContourRepresentation::GetActiveProperty, emscripten::allow_raw_pointers())
    .function("GetLinesProperty", &vtkOrientedGlyphContourRepresentation::GetLinesProperty, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkOrientedGlyphContourRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkOrientedGlyphContourRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkOrientedGlyphContourRepresentation::ComputeInteractionState)
    .function("GetActors", &vtkOrientedGlyphContourRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOrientedGlyphContourRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkOrientedGlyphContourRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkOrientedGlyphContourRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkOrientedGlyphContourRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkOrientedGlyphContourRepresentation::HasTranslucentPolygonalGeometry)
    .function("GetContourRepresentationAsPolyData", &vtkOrientedGlyphContourRepresentation::GetContourRepresentationAsPolyData, emscripten::allow_raw_pointers())
    .function("SetAlwaysOnTop", &vtkOrientedGlyphContourRepresentation::SetAlwaysOnTop)
    .function("GetAlwaysOnTop", &vtkOrientedGlyphContourRepresentation::GetAlwaysOnTop)
    .function("AlwaysOnTopOn", &vtkOrientedGlyphContourRepresentation::AlwaysOnTopOn)
    .function("AlwaysOnTopOff", &vtkOrientedGlyphContourRepresentation::AlwaysOnTopOff)
    .function("SetLineColor", &vtkOrientedGlyphContourRepresentation::SetLineColor)
    .function("SetShowSelectedNodes", &vtkOrientedGlyphContourRepresentation::SetShowSelectedNodes);
}

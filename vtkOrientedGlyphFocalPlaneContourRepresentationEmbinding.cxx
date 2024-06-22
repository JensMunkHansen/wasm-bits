// JavaScript wrapper for vtkOrientedGlyphFocalPlaneContourRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkOrientedGlyphFocalPlaneContourRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkOrientedGlyphFocalPlaneContourRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty2D.h"
#include "vtkRenderer.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkMatrix4x4.h"
#include "vtkOrientedGlyphFocalPlaneContourRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkOrientedGlyphFocalPlaneContourRepresentation>(vtkOrientedGlyphFocalPlaneContourRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientedGlyphFocalPlaneContourRepresentation_class) {
  emscripten::class_<vtkOrientedGlyphFocalPlaneContourRepresentation, emscripten::base<vtkFocalPlaneContourRepresentation>>("vtkOrientedGlyphFocalPlaneContourRepresentation")
    .smart_ptr<vtkSmartPointer<vtkOrientedGlyphFocalPlaneContourRepresentation>>("vtkSmartPointer<vtkOrientedGlyphFocalPlaneContourRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOrientedGlyphFocalPlaneContourRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientedGlyphFocalPlaneContourRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientedGlyphFocalPlaneContourRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientedGlyphFocalPlaneContourRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientedGlyphFocalPlaneContourRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientedGlyphFocalPlaneContourRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientedGlyphFocalPlaneContourRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCursorShape", &vtkOrientedGlyphFocalPlaneContourRepresentation::SetCursorShape, emscripten::allow_raw_pointers())
    .function("GetCursorShape", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetCursorShape, emscripten::allow_raw_pointers())
    .function("SetActiveCursorShape", &vtkOrientedGlyphFocalPlaneContourRepresentation::SetActiveCursorShape, emscripten::allow_raw_pointers())
    .function("GetActiveCursorShape", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveCursorShape, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("GetActiveProperty", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveProperty, emscripten::allow_raw_pointers())
    .function("GetLinesProperty", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetLinesProperty, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkOrientedGlyphFocalPlaneContourRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkOrientedGlyphFocalPlaneContourRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkOrientedGlyphFocalPlaneContourRepresentation::ComputeInteractionState)
    .function("GetActors2D", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOrientedGlyphFocalPlaneContourRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkOrientedGlyphFocalPlaneContourRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkOrientedGlyphFocalPlaneContourRepresentation::HasTranslucentPolygonalGeometry)
    .function("GetContourRepresentationAsPolyData", &vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourRepresentationAsPolyData, emscripten::allow_raw_pointers());
}

// JavaScript wrapper for vtkCaptionRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCaptionRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCaptionRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCaptionActor2D.h"
#include "vtkPointHandleRepresentation3D.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCaptionRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkCaptionRepresentation>(vtkCaptionRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCaptionRepresentation_class) {
  emscripten::class_<vtkCaptionRepresentation, emscripten::base<vtkBorderRepresentation>>("vtkCaptionRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCaptionRepresentation>>("vtkSmartPointer<vtkCaptionRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCaptionRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCaptionRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCaptionRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCaptionRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCaptionRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCaptionRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCaptionRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCaptionActor2D", &vtkCaptionRepresentation::SetCaptionActor2D, emscripten::allow_raw_pointers())
    .function("GetCaptionActor2D", &vtkCaptionRepresentation::GetCaptionActor2D, emscripten::allow_raw_pointers())
    .function("SetAnchorRepresentation", &vtkCaptionRepresentation::SetAnchorRepresentation, emscripten::allow_raw_pointers())
    .function("GetAnchorRepresentation", &vtkCaptionRepresentation::GetAnchorRepresentation, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkCaptionRepresentation::BuildRepresentation)
    .function("GetActors2D", &vtkCaptionRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCaptionRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCaptionRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCaptionRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCaptionRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCaptionRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetFontFactor", &vtkCaptionRepresentation::SetFontFactor)
    .function("GetFontFactorMinValue", &vtkCaptionRepresentation::GetFontFactorMinValue)
    .function("GetFontFactorMaxValue", &vtkCaptionRepresentation::GetFontFactorMaxValue)
    .function("GetFontFactor", &vtkCaptionRepresentation::GetFontFactor);
}

// JavaScript wrapper for vtkPlaybackRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPlaybackRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPlaybackRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty2D.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPlaybackRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkPlaybackRepresentation>(vtkPlaybackRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlaybackRepresentation_class) {
  emscripten::class_<vtkPlaybackRepresentation, emscripten::base<vtkBorderRepresentation>>("vtkPlaybackRepresentation")
    .smart_ptr<vtkSmartPointer<vtkPlaybackRepresentation>>("vtkSmartPointer<vtkPlaybackRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPlaybackRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaybackRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlaybackRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlaybackRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlaybackRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlaybackRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlaybackRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetProperty", &vtkPlaybackRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("Play", &vtkPlaybackRepresentation::Play)
    .function("Stop", &vtkPlaybackRepresentation::Stop)
    .function("ForwardOneFrame", &vtkPlaybackRepresentation::ForwardOneFrame)
    .function("BackwardOneFrame", &vtkPlaybackRepresentation::BackwardOneFrame)
    .function("JumpToBeginning", &vtkPlaybackRepresentation::JumpToBeginning)
    .function("JumpToEnd", &vtkPlaybackRepresentation::JumpToEnd)
    .function("BuildRepresentation", &vtkPlaybackRepresentation::BuildRepresentation)
    .function("GetActors2D", &vtkPlaybackRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkPlaybackRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkPlaybackRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkPlaybackRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkPlaybackRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkPlaybackRepresentation::HasTranslucentPolygonalGeometry);
}

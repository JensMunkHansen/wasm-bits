// JavaScript wrapper for vtkResliceCursorLineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorLineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorLineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkResliceCursorActor.h"
#include "vtkResliceCursor.h"
#include "vtkMatrix4x4.h"
#include "vtkResliceCursorLineRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkResliceCursorLineRepresentation>(vtkResliceCursorLineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorLineRepresentation_class) {
  emscripten::class_<vtkResliceCursorLineRepresentation, emscripten::base<vtkResliceCursorRepresentation>>("vtkResliceCursorLineRepresentation")
    .smart_ptr<vtkSmartPointer<vtkResliceCursorLineRepresentation>>("vtkSmartPointer<vtkResliceCursorLineRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkResliceCursorLineRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorLineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorLineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorLineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorLineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorLineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorLineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildRepresentation", &vtkResliceCursorLineRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkResliceCursorLineRepresentation::ComputeInteractionState)
    .function("Highlight", &vtkResliceCursorLineRepresentation::Highlight)
    .function("ReleaseGraphicsResources", &vtkResliceCursorLineRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkResliceCursorLineRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkResliceCursorLineRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkResliceCursorLineRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkResliceCursorLineRepresentation::HasTranslucentPolygonalGeometry)
    .function("GetResliceCursorActor", &vtkResliceCursorLineRepresentation::GetResliceCursorActor, emscripten::allow_raw_pointers())
    .function("GetResliceCursor", &vtkResliceCursorLineRepresentation::GetResliceCursor, emscripten::allow_raw_pointers())
    .function("SetUserMatrix", &vtkResliceCursorLineRepresentation::SetUserMatrix, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkResliceCursorLineRepresentation::SetTolerance);
}

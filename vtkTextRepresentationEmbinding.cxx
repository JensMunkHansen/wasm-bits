// JavaScript wrapper for vtkTextRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTextRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTextRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextActor.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkObject.h"
#include "vtkTextRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkTextRepresentation>(vtkTextRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextRepresentation_class) {
  emscripten::class_<vtkTextRepresentation, emscripten::base<vtkBorderRepresentation>>("vtkTextRepresentation")
    .smart_ptr<vtkSmartPointer<vtkTextRepresentation>>("vtkSmartPointer<vtkTextRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTextActor", &vtkTextRepresentation::SetTextActor, emscripten::allow_raw_pointers())
    .function("GetTextActor", &vtkTextRepresentation::GetTextActor, emscripten::allow_raw_pointers())
    .function("SetText", emscripten::optional_override([](vtkTextRepresentation& self, const std::string & arg_0) -> void {  return self.SetText( arg_0.c_str());}))
    .function("GetText", emscripten::optional_override([](vtkTextRepresentation& self) -> std::string {  return self.GetText();}))
    .function("BuildRepresentation", &vtkTextRepresentation::BuildRepresentation)
    .function("GetActors2D", &vtkTextRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTextRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkTextRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkTextRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkTextRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkTextRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetWindowLocation", &vtkTextRepresentation::SetWindowLocation)
    .function("SetPosition", emscripten::select_overload<void(vtkTextRepresentation&, double, double)>([](vtkTextRepresentation& self, double arg_0, double arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("ExecuteTextPropertyModifiedEvent", emscripten::optional_override([](vtkTextRepresentation& self, vtkObject* arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {  return self.ExecuteTextPropertyModifiedEvent( arg_0, arg_1,reinterpret_cast<void*>(arg_2));}), emscripten::allow_raw_pointers())
    .function("ExecuteTextActorModifiedEvent", emscripten::optional_override([](vtkTextRepresentation& self, vtkObject* arg_0, unsigned long arg_1, std::uintptr_t arg_2) -> void {  return self.ExecuteTextActorModifiedEvent( arg_0, arg_1,reinterpret_cast<void*>(arg_2));}), emscripten::allow_raw_pointers())
    .function("SetPaddingLeft", &vtkTextRepresentation::SetPaddingLeft)
    .function("GetPaddingLeftMinValue", &vtkTextRepresentation::GetPaddingLeftMinValue)
    .function("GetPaddingLeftMaxValue", &vtkTextRepresentation::GetPaddingLeftMaxValue)
    .function("GetPaddingLeft", &vtkTextRepresentation::GetPaddingLeft)
    .function("SetPaddingRight", &vtkTextRepresentation::SetPaddingRight)
    .function("GetPaddingRightMinValue", &vtkTextRepresentation::GetPaddingRightMinValue)
    .function("GetPaddingRightMaxValue", &vtkTextRepresentation::GetPaddingRightMaxValue)
    .function("GetPaddingRight", &vtkTextRepresentation::GetPaddingRight)
    .function("SetPaddingTop", &vtkTextRepresentation::SetPaddingTop)
    .function("GetPaddingTopMinValue", &vtkTextRepresentation::GetPaddingTopMinValue)
    .function("GetPaddingTopMaxValue", &vtkTextRepresentation::GetPaddingTopMaxValue)
    .function("GetPaddingTop", &vtkTextRepresentation::GetPaddingTop)
    .function("SetPaddingBottom", &vtkTextRepresentation::SetPaddingBottom)
    .function("GetPaddingBottomMinValue", &vtkTextRepresentation::GetPaddingBottomMinValue)
    .function("GetPaddingBottomMaxValue", &vtkTextRepresentation::GetPaddingBottomMaxValue)
    .function("GetPaddingBottom", &vtkTextRepresentation::GetPaddingBottom)
    .function("SetPadding", &vtkTextRepresentation::SetPadding);
}

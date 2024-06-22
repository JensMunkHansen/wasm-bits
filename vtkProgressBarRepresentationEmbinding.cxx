// JavaScript wrapper for vtkProgressBarRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkProgressBarRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkProgressBarRepresentation.h
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
#include "vtkProgressBarRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkProgressBarRepresentation>(vtkProgressBarRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgressBarRepresentation_class) {
  emscripten::class_<vtkProgressBarRepresentation, emscripten::base<vtkBorderRepresentation>>("vtkProgressBarRepresentation")
    .smart_ptr<vtkSmartPointer<vtkProgressBarRepresentation>>("vtkSmartPointer<vtkProgressBarRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProgressBarRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgressBarRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgressBarRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgressBarRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgressBarRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgressBarRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgressBarRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetProperty", &vtkProgressBarRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("SetProgressRate", &vtkProgressBarRepresentation::SetProgressRate)
    .function("GetProgressRateMinValue", &vtkProgressBarRepresentation::GetProgressRateMinValue)
    .function("GetProgressRateMaxValue", &vtkProgressBarRepresentation::GetProgressRateMaxValue)
    .function("GetProgressRate", &vtkProgressBarRepresentation::GetProgressRate)
    .function("SetPadding", emscripten::select_overload<void(vtkProgressBarRepresentation&, double, double)>([](vtkProgressBarRepresentation& self, double arg_0, double arg_1) -> void { return self.SetPadding( arg_0, arg_1); }))
    .function("SetDrawFrame", &vtkProgressBarRepresentation::SetDrawFrame)
    .function("GetDrawFrame", &vtkProgressBarRepresentation::GetDrawFrame)
    .function("DrawFrameOn", &vtkProgressBarRepresentation::DrawFrameOn)
    .function("DrawFrameOff", &vtkProgressBarRepresentation::DrawFrameOff)
    .function("SetProgressBarColor", emscripten::select_overload<void(vtkProgressBarRepresentation&, double, double, double)>([](vtkProgressBarRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetProgressBarColor( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkProgressBarRepresentation&, double, double, double)>([](vtkProgressBarRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2); }))
    .function("SetDrawBackground", &vtkProgressBarRepresentation::SetDrawBackground)
    .function("GetDrawBackground", &vtkProgressBarRepresentation::GetDrawBackground)
    .function("DrawBackgroundOn", &vtkProgressBarRepresentation::DrawBackgroundOn)
    .function("DrawBackgroundOff", &vtkProgressBarRepresentation::DrawBackgroundOff)
    .function("BuildRepresentation", &vtkProgressBarRepresentation::BuildRepresentation)
    .function("GetActors2D", &vtkProgressBarRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkProgressBarRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkProgressBarRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkProgressBarRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkProgressBarRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkProgressBarRepresentation::HasTranslucentPolygonalGeometry);
}

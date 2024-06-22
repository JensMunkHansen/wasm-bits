// JavaScript wrapper for vtkDistanceRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDistanceRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDistanceRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkActor.h"
#include "vtkFollower.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkDistanceRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkDistanceRepresentation3D>(vtkDistanceRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistanceRepresentation3D_class) {
  emscripten::class_<vtkDistanceRepresentation3D, emscripten::base<vtkDistanceRepresentation>>("vtkDistanceRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkDistanceRepresentation3D>>("vtkSmartPointer<vtkDistanceRepresentation3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDistanceRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistanceRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistanceRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistanceRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistanceRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDistance", &vtkDistanceRepresentation3D::GetDistance)
    .function("SetGlyphScale", &vtkDistanceRepresentation3D::SetGlyphScale)
    .function("GetGlyphScale", &vtkDistanceRepresentation3D::GetGlyphScale)
    .function("GetLineProperty", &vtkDistanceRepresentation3D::GetLineProperty, emscripten::allow_raw_pointers())
    .function("SetLabelPosition", &vtkDistanceRepresentation3D::SetLabelPosition)
    .function("GetLabelPosition", &vtkDistanceRepresentation3D::GetLabelPosition)
    .function("SetMaximumNumberOfRulerTicks", &vtkDistanceRepresentation3D::SetMaximumNumberOfRulerTicks)
    .function("GetMaximumNumberOfRulerTicksMinValue", &vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicksMinValue)
    .function("GetMaximumNumberOfRulerTicksMaxValue", &vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicksMaxValue)
    .function("GetMaximumNumberOfRulerTicks", &vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicks)
    .function("GetGlyphActor", &vtkDistanceRepresentation3D::GetGlyphActor, emscripten::allow_raw_pointers())
    .function("GetLabelActor", &vtkDistanceRepresentation3D::GetLabelActor, emscripten::allow_raw_pointers())
    .function("SetLabelActor", &vtkDistanceRepresentation3D::SetLabelActor, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkDistanceRepresentation3D::BuildRepresentation)
    .function("ReleaseGraphicsResources", &vtkDistanceRepresentation3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkDistanceRepresentation3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkDistanceRepresentation3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("SetLabelScale", emscripten::select_overload<void(vtkDistanceRepresentation3D&, double, double, double)>([](vtkDistanceRepresentation3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLabelScale( arg_0, arg_1, arg_2); }))
    .function("GetLabelScale", emscripten::optional_override([](vtkDistanceRepresentation3D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetLabelScale()) / sizeof(double);}))
    .function("GetLabelProperty", &vtkDistanceRepresentation3D::GetLabelProperty, emscripten::allow_raw_pointers());
}

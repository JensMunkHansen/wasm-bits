// JavaScript wrapper for vtkViewport with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkViewportEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkViewport.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkActor2DCollection.h"
#include "vtkWindow.h"
#include "vtkAssemblyPath.h"
#include "vtkSmartPointer.h"
#include "vtkViewport.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkViewport_class_enums) {
  emscripten::enum_<vtkViewport::GradientModes>("vtkViewport_GradientModes")
    .value("VTK_GRADIENT_VERTICAL", vtkViewport::GradientModes::VTK_GRADIENT_VERTICAL)
    .value("VTK_GRADIENT_HORIZONTAL", vtkViewport::GradientModes::VTK_GRADIENT_HORIZONTAL)
    .value("VTK_GRADIENT_RADIAL_VIEWPORT_FARTHEST_SIDE", vtkViewport::GradientModes::VTK_GRADIENT_RADIAL_VIEWPORT_FARTHEST_SIDE)
    .value("VTK_GRADIENT_RADIAL_VIEWPORT_FARTHEST_CORNER", vtkViewport::GradientModes::VTK_GRADIENT_RADIAL_VIEWPORT_FARTHEST_CORNER);
}
template<> void emscripten::internal::raw_destructor<vtkViewport>(vtkViewport * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkViewport_class) {
  using GradientModes=vtkViewport::GradientModes;
  emscripten::class_<vtkViewport, emscripten::base<vtkObject>>("vtkViewport")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewport::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkViewport& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkViewport::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkViewport::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewport::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkViewport& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddViewProp", &vtkViewport::AddViewProp, emscripten::allow_raw_pointers())
    .function("GetViewProps", &vtkViewport::GetViewProps, emscripten::allow_raw_pointers())
    .function("HasViewProp", &vtkViewport::HasViewProp, emscripten::allow_raw_pointers())
    .function("RemoveViewProp", &vtkViewport::RemoveViewProp, emscripten::allow_raw_pointers())
    .function("RemoveAllViewProps", &vtkViewport::RemoveAllViewProps)
    .function("AddActor2D", &vtkViewport::AddActor2D, emscripten::allow_raw_pointers())
    .function("RemoveActor2D", &vtkViewport::RemoveActor2D, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkViewport::GetActors2D, emscripten::allow_raw_pointers())
    .function("SetBackground", emscripten::select_overload<void(vtkViewport&, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackground( arg_0, arg_1, arg_2); }))
    .function("SetBackground2", emscripten::select_overload<void(vtkViewport&, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackground2( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundAlpha", &vtkViewport::SetBackgroundAlpha)
    .function("GetBackgroundAlphaMinValue", &vtkViewport::GetBackgroundAlphaMinValue)
    .function("GetBackgroundAlphaMaxValue", &vtkViewport::GetBackgroundAlphaMaxValue)
    .function("GetBackgroundAlpha", &vtkViewport::GetBackgroundAlpha)
    .function("SetGradientBackground", &vtkViewport::SetGradientBackground)
    .function("GetGradientBackground", &vtkViewport::GetGradientBackground)
    .function("GradientBackgroundOn", &vtkViewport::GradientBackgroundOn)
    .function("GradientBackgroundOff", &vtkViewport::GradientBackgroundOff)
    .function("SetDitherGradient", &vtkViewport::SetDitherGradient)
    .function("GetDitherGradient", &vtkViewport::GetDitherGradient)
    .function("DitherGradientOn", &vtkViewport::DitherGradientOn)
    .function("DitherGradientOff", &vtkViewport::DitherGradientOff)
    .function("SetGradientMode", &vtkViewport::SetGradientMode)
    .function("GetGradientMode", &vtkViewport::GetGradientMode)
    .function("SetAspect", emscripten::select_overload<void(vtkViewport&, double, double)>([](vtkViewport& self, double arg_0, double arg_1) -> void { return self.SetAspect( arg_0, arg_1); }))
    .function("ComputeAspect", &vtkViewport::ComputeAspect)
    .function("SetPixelAspect", emscripten::select_overload<void(vtkViewport&, double, double)>([](vtkViewport& self, double arg_0, double arg_1) -> void { return self.SetPixelAspect( arg_0, arg_1); }))
    .function("SetViewport", emscripten::select_overload<void(vtkViewport&, double, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetViewport( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetDisplayPoint", emscripten::select_overload<void(vtkViewport&, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDisplayPoint( arg_0, arg_1, arg_2); }))
    .function("SetViewPoint", emscripten::select_overload<void(vtkViewport&, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetViewPoint( arg_0, arg_1, arg_2); }))
    .function("SetWorldPoint", emscripten::select_overload<void(vtkViewport&, double, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetWorldPoint( arg_0, arg_1, arg_2, arg_3); }))
    .function("IsInViewport", &vtkViewport::IsInViewport)
    .function("DisplayToView", &vtkViewport::DisplayToView)
    .function("ViewToDisplay", emscripten::select_overload<void(vtkViewport&)>([](vtkViewport& self) -> void { return self.ViewToDisplay(); }))
    .function("WorldToView", emscripten::select_overload<void(vtkViewport&)>([](vtkViewport& self) -> void { return self.WorldToView(); }))
    .function("ViewToWorld", emscripten::select_overload<void(vtkViewport&)>([](vtkViewport& self) -> void { return self.ViewToWorld(); }))
    .function("DisplayToWorld", &vtkViewport::DisplayToWorld)
    .function("WorldToDisplay", emscripten::select_overload<void(vtkViewport&)>([](vtkViewport& self) -> void { return self.WorldToDisplay(); }))
    .function("GetTiledSize", emscripten::optional_override([](vtkViewport& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.GetTiledSize(reinterpret_cast<int*>(arg_0 * sizeof(int)),reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("GetTiledSizeAndOrigin", emscripten::optional_override([](vtkViewport& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.GetTiledSizeAndOrigin(reinterpret_cast<int*>(arg_0 * sizeof(int)),reinterpret_cast<int*>(arg_1 * sizeof(int)),reinterpret_cast<int*>(arg_2 * sizeof(int)),reinterpret_cast<int*>(arg_3 * sizeof(int)));}))
    .function("PickPropFrom", emscripten::select_overload<vtkAssemblyPath*(vtkViewport&, double, double, vtkPropCollection*)>([](vtkViewport& self, double arg_0, double arg_1, vtkPropCollection* arg_2) -> vtkAssemblyPath* { return self.PickPropFrom( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("PickPropFrom", emscripten::select_overload<vtkAssemblyPath*(vtkViewport&, double, double, double, double, vtkPropCollection*)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2, double arg_3, vtkPropCollection* arg_4) -> vtkAssemblyPath* { return self.PickPropFrom( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("PickPropFrom", emscripten::select_overload<vtkAssemblyPath*(vtkViewport&, double, double, vtkPropCollection*, int, vtkSmartPointer<vtkSelection>)>([](vtkViewport& self, double arg_0, double arg_1, vtkPropCollection* arg_2, int arg_3, vtkSmartPointer<vtkSelection> arg_4) -> vtkAssemblyPath* { return self.PickPropFrom( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("PickPropFrom", emscripten::select_overload<vtkAssemblyPath*(vtkViewport&, double, double, double, double, vtkPropCollection*, int, vtkSmartPointer<vtkSelection>)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2, double arg_3, vtkPropCollection* arg_4, int arg_5, vtkSmartPointer<vtkSelection> arg_6) -> vtkAssemblyPath* { return self.PickPropFrom( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("GetPickX", &vtkViewport::GetPickX)
    .function("GetPickY", &vtkViewport::GetPickY)
    .function("GetPickWidth", &vtkViewport::GetPickWidth)
    .function("GetPickHeight", &vtkViewport::GetPickHeight)
    .function("GetPickX1", &vtkViewport::GetPickX1)
    .function("GetPickY1", &vtkViewport::GetPickY1)
    .function("GetPickX2", &vtkViewport::GetPickX2)
    .function("GetPickY2", &vtkViewport::GetPickY2)
    .function("GetPickResultProps", &vtkViewport::GetPickResultProps, emscripten::allow_raw_pointers())
    .function("GetPickedZ", &vtkViewport::GetPickedZ)
    .function("SetEnvironmentalBG", emscripten::select_overload<void(vtkViewport&, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetEnvironmentalBG( arg_0, arg_1, arg_2); }))
    .function("SetEnvironmentalBG2", emscripten::select_overload<void(vtkViewport&, double, double, double)>([](vtkViewport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetEnvironmentalBG2( arg_0, arg_1, arg_2); }))
    .function("SetGradientEnvironmentalBG", &vtkViewport::SetGradientEnvironmentalBG)
    .function("GetGradientEnvironmentalBG", &vtkViewport::GetGradientEnvironmentalBG)
    .function("GradientEnvironmentalBGOn", &vtkViewport::GradientEnvironmentalBGOn)
    .function("GradientEnvironmentalBGOff", &vtkViewport::GradientEnvironmentalBGOff);
}

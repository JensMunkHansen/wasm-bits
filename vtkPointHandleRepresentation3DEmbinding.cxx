// JavaScript wrapper for vtkPointHandleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPointHandleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPointHandleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPointHandleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkPointHandleRepresentation3D>(vtkPointHandleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointHandleRepresentation3D_class) {
  emscripten::class_<vtkPointHandleRepresentation3D, emscripten::base<vtkHandleRepresentation>>("vtkPointHandleRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkPointHandleRepresentation3D>>("vtkSmartPointer<vtkPointHandleRepresentation3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointHandleRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointHandleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointHandleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointHandleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointHandleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutline", &vtkPointHandleRepresentation3D::SetOutline)
    .function("GetOutline", &vtkPointHandleRepresentation3D::GetOutline)
    .function("OutlineOn", &vtkPointHandleRepresentation3D::OutlineOn)
    .function("OutlineOff", &vtkPointHandleRepresentation3D::OutlineOff)
    .function("SetXShadows", &vtkPointHandleRepresentation3D::SetXShadows)
    .function("GetXShadows", &vtkPointHandleRepresentation3D::GetXShadows)
    .function("XShadowsOn", &vtkPointHandleRepresentation3D::XShadowsOn)
    .function("XShadowsOff", &vtkPointHandleRepresentation3D::XShadowsOff)
    .function("SetYShadows", &vtkPointHandleRepresentation3D::SetYShadows)
    .function("GetYShadows", &vtkPointHandleRepresentation3D::GetYShadows)
    .function("YShadowsOn", &vtkPointHandleRepresentation3D::YShadowsOn)
    .function("YShadowsOff", &vtkPointHandleRepresentation3D::YShadowsOff)
    .function("SetZShadows", &vtkPointHandleRepresentation3D::SetZShadows)
    .function("GetZShadows", &vtkPointHandleRepresentation3D::GetZShadows)
    .function("ZShadowsOn", &vtkPointHandleRepresentation3D::ZShadowsOn)
    .function("ZShadowsOff", &vtkPointHandleRepresentation3D::ZShadowsOff)
    .function("SetTranslationMode", &vtkPointHandleRepresentation3D::SetTranslationMode)
    .function("GetTranslationMode", &vtkPointHandleRepresentation3D::GetTranslationMode)
    .function("TranslationModeOn", &vtkPointHandleRepresentation3D::TranslationModeOn)
    .function("TranslationModeOff", &vtkPointHandleRepresentation3D::TranslationModeOff)
    .function("AllOn", &vtkPointHandleRepresentation3D::AllOn)
    .function("AllOff", &vtkPointHandleRepresentation3D::AllOff)
    .function("SetProperty", &vtkPointHandleRepresentation3D::SetProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedProperty", &vtkPointHandleRepresentation3D::SetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkPointHandleRepresentation3D::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkPointHandleRepresentation3D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("SetInteractionColor", emscripten::select_overload<void(vtkPointHandleRepresentation3D&, double, double, double)>([](vtkPointHandleRepresentation3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetForegroundColor", emscripten::select_overload<void(vtkPointHandleRepresentation3D&, double, double, double)>([](vtkPointHandleRepresentation3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("SetHotSpotSize", &vtkPointHandleRepresentation3D::SetHotSpotSize)
    .function("GetHotSpotSizeMinValue", &vtkPointHandleRepresentation3D::GetHotSpotSizeMinValue)
    .function("GetHotSpotSizeMaxValue", &vtkPointHandleRepresentation3D::GetHotSpotSizeMaxValue)
    .function("GetHotSpotSize", &vtkPointHandleRepresentation3D::GetHotSpotSize)
    .function("SetHandleSize", &vtkPointHandleRepresentation3D::SetHandleSize)
    .function("BuildRepresentation", &vtkPointHandleRepresentation3D::BuildRepresentation)
    .function("ComputeInteractionState", &vtkPointHandleRepresentation3D::ComputeInteractionState)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkPointHandleRepresentation3D& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkPointHandleRepresentation3D& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkPointHandleRepresentation3D& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkPointHandleRepresentation3D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkPointHandleRepresentation3D::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkPointHandleRepresentation3D::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkPointHandleRepresentation3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkPointHandleRepresentation3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkPointHandleRepresentation3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkPointHandleRepresentation3D::HasTranslucentPolygonalGeometry)
    .function("Highlight", &vtkPointHandleRepresentation3D::Highlight)
    .function("SetSmoothMotion", &vtkPointHandleRepresentation3D::SetSmoothMotion)
    .function("GetSmoothMotion", &vtkPointHandleRepresentation3D::GetSmoothMotion)
    .function("SmoothMotionOn", &vtkPointHandleRepresentation3D::SmoothMotionOn)
    .function("SmoothMotionOff", &vtkPointHandleRepresentation3D::SmoothMotionOff)
    .function("RegisterPickers", &vtkPointHandleRepresentation3D::RegisterPickers)
    .function("SetVisibility", &vtkPointHandleRepresentation3D::SetVisibility)
    .function("Translate", emscripten::select_overload<void(vtkPointHandleRepresentation3D&, std::uintptr_t)>([](vtkPointHandleRepresentation3D& self, std::uintptr_t arg_0) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double))); }));
}

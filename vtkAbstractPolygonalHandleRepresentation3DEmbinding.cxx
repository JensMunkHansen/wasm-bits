// JavaScript wrapper for vtkAbstractPolygonalHandleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAbstractPolygonalHandleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAbstractPolygonalHandleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkAbstractTransform.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkFollower.h"
#include "vtkAbstractPolygonalHandleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractPolygonalHandleRepresentation3D>(vtkAbstractPolygonalHandleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractPolygonalHandleRepresentation3D_class) {
  emscripten::class_<vtkAbstractPolygonalHandleRepresentation3D, emscripten::base<vtkHandleRepresentation>>("vtkAbstractPolygonalHandleRepresentation3D")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPolygonalHandleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractPolygonalHandleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractPolygonalHandleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractPolygonalHandleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHandle", &vtkAbstractPolygonalHandleRepresentation3D::SetHandle, emscripten::allow_raw_pointers())
    .function("GetHandle", &vtkAbstractPolygonalHandleRepresentation3D::GetHandle, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkAbstractPolygonalHandleRepresentation3D::SetProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedProperty", &vtkAbstractPolygonalHandleRepresentation3D::SetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkAbstractPolygonalHandleRepresentation3D::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkAbstractPolygonalHandleRepresentation3D::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkAbstractPolygonalHandleRepresentation3D::GetTransform, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkAbstractPolygonalHandleRepresentation3D::BuildRepresentation)
    .function("ComputeInteractionState", &vtkAbstractPolygonalHandleRepresentation3D::ComputeInteractionState)
    .function("ShallowCopy", &vtkAbstractPolygonalHandleRepresentation3D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkAbstractPolygonalHandleRepresentation3D::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkAbstractPolygonalHandleRepresentation3D::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkAbstractPolygonalHandleRepresentation3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAbstractPolygonalHandleRepresentation3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAbstractPolygonalHandleRepresentation3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAbstractPolygonalHandleRepresentation3D::HasTranslucentPolygonalGeometry)
    .function("SetLabelVisibility", &vtkAbstractPolygonalHandleRepresentation3D::SetLabelVisibility)
    .function("GetLabelVisibility", &vtkAbstractPolygonalHandleRepresentation3D::GetLabelVisibility)
    .function("LabelVisibilityOn", &vtkAbstractPolygonalHandleRepresentation3D::LabelVisibilityOn)
    .function("LabelVisibilityOff", &vtkAbstractPolygonalHandleRepresentation3D::LabelVisibilityOff)
    .function("SetLabelText", emscripten::optional_override([](vtkAbstractPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> void {  return self.SetLabelText( arg_0.c_str());}))
    .function("GetLabelText", emscripten::optional_override([](vtkAbstractPolygonalHandleRepresentation3D& self) -> std::string {  return self.GetLabelText();}))
    .function("SetLabelTextScale", emscripten::select_overload<void(vtkAbstractPolygonalHandleRepresentation3D&, double, double, double)>([](vtkAbstractPolygonalHandleRepresentation3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLabelTextScale( arg_0, arg_1, arg_2); }))
    .function("GetLabelTextScale", emscripten::optional_override([](vtkAbstractPolygonalHandleRepresentation3D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetLabelTextScale()) / sizeof(double);}))
    .function("GetLabelTextActor", &vtkAbstractPolygonalHandleRepresentation3D::GetLabelTextActor, emscripten::allow_raw_pointers())
    .function("SetUniformScale", &vtkAbstractPolygonalHandleRepresentation3D::SetUniformScale)
    .function("SetHandleVisibility", &vtkAbstractPolygonalHandleRepresentation3D::SetHandleVisibility)
    .function("GetHandleVisibility", &vtkAbstractPolygonalHandleRepresentation3D::GetHandleVisibility)
    .function("HandleVisibilityOn", &vtkAbstractPolygonalHandleRepresentation3D::HandleVisibilityOn)
    .function("HandleVisibilityOff", &vtkAbstractPolygonalHandleRepresentation3D::HandleVisibilityOff)
    .function("Highlight", &vtkAbstractPolygonalHandleRepresentation3D::Highlight)
    .function("SetSmoothMotion", &vtkAbstractPolygonalHandleRepresentation3D::SetSmoothMotion)
    .function("GetSmoothMotion", &vtkAbstractPolygonalHandleRepresentation3D::GetSmoothMotion)
    .function("SmoothMotionOn", &vtkAbstractPolygonalHandleRepresentation3D::SmoothMotionOn)
    .function("SmoothMotionOff", &vtkAbstractPolygonalHandleRepresentation3D::SmoothMotionOff)
    .function("RegisterPickers", &vtkAbstractPolygonalHandleRepresentation3D::RegisterPickers)
    .function("Translate", emscripten::select_overload<void(vtkAbstractPolygonalHandleRepresentation3D&, std::uintptr_t)>([](vtkAbstractPolygonalHandleRepresentation3D& self, std::uintptr_t arg_0) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double))); }));
}

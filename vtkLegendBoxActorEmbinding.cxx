// JavaScript wrapper for vtkLegendBoxActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkLegendBoxActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkLegendBoxActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkImageData.h"
#include "vtkTextProperty.h"
#include "vtkProperty2D.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkLegendBoxActor.h"

template<> void emscripten::internal::raw_destructor<vtkLegendBoxActor>(vtkLegendBoxActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLegendBoxActor_class) {
  emscripten::class_<vtkLegendBoxActor, emscripten::base<vtkActor2D>>("vtkLegendBoxActor")
    .smart_ptr<vtkSmartPointer<vtkLegendBoxActor>>("vtkSmartPointer<vtkLegendBoxActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLegendBoxActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLegendBoxActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLegendBoxActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLegendBoxActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLegendBoxActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLegendBoxActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLegendBoxActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfEntries", &vtkLegendBoxActor::SetNumberOfEntries)
    .function("GetNumberOfEntries", &vtkLegendBoxActor::GetNumberOfEntries)
    .function("SetEntrySymbol", &vtkLegendBoxActor::SetEntrySymbol, emscripten::allow_raw_pointers())
    .function("SetEntryIcon", &vtkLegendBoxActor::SetEntryIcon, emscripten::allow_raw_pointers())
    .function("SetEntryString", emscripten::optional_override([](vtkLegendBoxActor& self, int arg_0, const std::string & arg_1) -> void {  return self.SetEntryString( arg_0, arg_1.c_str());}))
    .function("SetEntryColor", emscripten::select_overload<void(vtkLegendBoxActor&, int, double, double, double)>([](vtkLegendBoxActor& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetEntryColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetEntrySymbol", &vtkLegendBoxActor::GetEntrySymbol, emscripten::allow_raw_pointers())
    .function("GetEntryIcon", &vtkLegendBoxActor::GetEntryIcon, emscripten::allow_raw_pointers())
    .function("GetEntryString", emscripten::optional_override([](vtkLegendBoxActor& self, int arg_0) -> std::string {  return self.GetEntryString( arg_0);}))
    .function("SetEntryTextProperty", &vtkLegendBoxActor::SetEntryTextProperty, emscripten::allow_raw_pointers())
    .function("GetEntryTextProperty", &vtkLegendBoxActor::GetEntryTextProperty, emscripten::allow_raw_pointers())
    .function("SetBorder", &vtkLegendBoxActor::SetBorder)
    .function("GetBorder", &vtkLegendBoxActor::GetBorder)
    .function("BorderOn", &vtkLegendBoxActor::BorderOn)
    .function("BorderOff", &vtkLegendBoxActor::BorderOff)
    .function("SetLockBorder", &vtkLegendBoxActor::SetLockBorder)
    .function("GetLockBorder", &vtkLegendBoxActor::GetLockBorder)
    .function("LockBorderOn", &vtkLegendBoxActor::LockBorderOn)
    .function("LockBorderOff", &vtkLegendBoxActor::LockBorderOff)
    .function("SetBox", &vtkLegendBoxActor::SetBox)
    .function("GetBox", &vtkLegendBoxActor::GetBox)
    .function("BoxOn", &vtkLegendBoxActor::BoxOn)
    .function("BoxOff", &vtkLegendBoxActor::BoxOff)
    .function("GetBoxProperty", &vtkLegendBoxActor::GetBoxProperty, emscripten::allow_raw_pointers())
    .function("SetPadding", &vtkLegendBoxActor::SetPadding)
    .function("GetPaddingMinValue", &vtkLegendBoxActor::GetPaddingMinValue)
    .function("GetPaddingMaxValue", &vtkLegendBoxActor::GetPaddingMaxValue)
    .function("GetPadding", &vtkLegendBoxActor::GetPadding)
    .function("SetScalarVisibility", &vtkLegendBoxActor::SetScalarVisibility)
    .function("GetScalarVisibility", &vtkLegendBoxActor::GetScalarVisibility)
    .function("ScalarVisibilityOn", &vtkLegendBoxActor::ScalarVisibilityOn)
    .function("ScalarVisibilityOff", &vtkLegendBoxActor::ScalarVisibilityOff)
    .function("SetUseBackground", &vtkLegendBoxActor::SetUseBackground)
    .function("GetUseBackground", &vtkLegendBoxActor::GetUseBackground)
    .function("UseBackgroundOn", &vtkLegendBoxActor::UseBackgroundOn)
    .function("UseBackgroundOff", &vtkLegendBoxActor::UseBackgroundOff)
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkLegendBoxActor&, double, double, double)>([](vtkLegendBoxActor& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundOpacity", &vtkLegendBoxActor::SetBackgroundOpacity)
    .function("GetBackgroundOpacityMinValue", &vtkLegendBoxActor::GetBackgroundOpacityMinValue)
    .function("GetBackgroundOpacityMaxValue", &vtkLegendBoxActor::GetBackgroundOpacityMaxValue)
    .function("GetBackgroundOpacity", &vtkLegendBoxActor::GetBackgroundOpacity)
    .function("ShallowCopy", &vtkLegendBoxActor::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLegendBoxActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLegendBoxActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkLegendBoxActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkLegendBoxActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkLegendBoxActor::HasTranslucentPolygonalGeometry);
}

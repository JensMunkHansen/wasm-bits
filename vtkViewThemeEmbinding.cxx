// JavaScript wrapper for vtkViewTheme with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewThemeEmbinding.cxx \
 /home/jmh/github/vtk/Views/Core/vtkViewTheme.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkTextProperty.h"
#include "vtkViewTheme.h"

template<> void emscripten::internal::raw_destructor<vtkViewTheme>(vtkViewTheme * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkViewTheme_class) {
  emscripten::class_<vtkViewTheme, emscripten::base<vtkObject>>("vtkViewTheme")
    .smart_ptr<vtkSmartPointer<vtkViewTheme>>("vtkSmartPointer<vtkViewTheme>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkViewTheme>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewTheme::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkViewTheme& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkViewTheme::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkViewTheme::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkViewTheme::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkViewTheme& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointSize", &vtkViewTheme::SetPointSize)
    .function("GetPointSize", &vtkViewTheme::GetPointSize)
    .function("SetLineWidth", &vtkViewTheme::SetLineWidth)
    .function("GetLineWidth", &vtkViewTheme::GetLineWidth)
    .function("SetPointColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPointColor( arg_0, arg_1, arg_2); }))
    .function("SetPointOpacity", &vtkViewTheme::SetPointOpacity)
    .function("GetPointOpacity", &vtkViewTheme::GetPointOpacity)
    .function("SetPointHueRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetPointHueRange( arg_0, arg_1); }))
    .function("GetPointHueRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPointHueRange()); }))
    .function("SetPointSaturationRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetPointSaturationRange( arg_0, arg_1); }))
    .function("GetPointSaturationRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPointSaturationRange()); }))
    .function("SetPointValueRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetPointValueRange( arg_0, arg_1); }))
    .function("GetPointValueRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPointValueRange()); }))
    .function("SetPointAlphaRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetPointAlphaRange( arg_0, arg_1); }))
    .function("GetPointAlphaRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPointAlphaRange()); }))
    .function("GetPointLookupTable", &vtkViewTheme::GetPointLookupTable, emscripten::allow_raw_pointers())
    .function("SetPointLookupTable", &vtkViewTheme::SetPointLookupTable, emscripten::allow_raw_pointers())
    .function("SetScalePointLookupTable", &vtkViewTheme::SetScalePointLookupTable)
    .function("GetScalePointLookupTable", &vtkViewTheme::GetScalePointLookupTable)
    .function("ScalePointLookupTableOn", &vtkViewTheme::ScalePointLookupTableOn)
    .function("ScalePointLookupTableOff", &vtkViewTheme::ScalePointLookupTableOff)
    .function("SetCellColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCellColor( arg_0, arg_1, arg_2); }))
    .function("SetCellOpacity", &vtkViewTheme::SetCellOpacity)
    .function("GetCellOpacity", &vtkViewTheme::GetCellOpacity)
    .function("SetCellHueRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetCellHueRange( arg_0, arg_1); }))
    .function("GetCellHueRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCellHueRange()); }))
    .function("SetCellSaturationRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetCellSaturationRange( arg_0, arg_1); }))
    .function("GetCellSaturationRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCellSaturationRange()); }))
    .function("SetCellValueRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetCellValueRange( arg_0, arg_1); }))
    .function("GetCellValueRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCellValueRange()); }))
    .function("SetCellAlphaRange", emscripten::select_overload<void(vtkViewTheme&, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1) -> void { return self.SetCellAlphaRange( arg_0, arg_1); }))
    .function("GetCellAlphaRange", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCellAlphaRange()); }))
    .function("GetCellLookupTable", &vtkViewTheme::GetCellLookupTable, emscripten::allow_raw_pointers())
    .function("SetCellLookupTable", &vtkViewTheme::SetCellLookupTable, emscripten::allow_raw_pointers())
    .function("SetScaleCellLookupTable", &vtkViewTheme::SetScaleCellLookupTable)
    .function("GetScaleCellLookupTable", &vtkViewTheme::GetScaleCellLookupTable)
    .function("ScaleCellLookupTableOn", &vtkViewTheme::ScaleCellLookupTableOn)
    .function("ScaleCellLookupTableOff", &vtkViewTheme::ScaleCellLookupTableOff)
    .function("SetOutlineColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutlineColor( arg_0, arg_1, arg_2); }))
    .function("SetSelectedPointColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSelectedPointColor( arg_0, arg_1, arg_2); }))
    .function("SetSelectedPointOpacity", &vtkViewTheme::SetSelectedPointOpacity)
    .function("GetSelectedPointOpacity", &vtkViewTheme::GetSelectedPointOpacity)
    .function("SetSelectedCellColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSelectedCellColor( arg_0, arg_1, arg_2); }))
    .function("SetSelectedCellOpacity", &vtkViewTheme::SetSelectedCellOpacity)
    .function("GetSelectedCellOpacity", &vtkViewTheme::GetSelectedCellOpacity)
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundColor2", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor2( arg_0, arg_1, arg_2); }))
    .function("SetPointTextProperty", &vtkViewTheme::SetPointTextProperty, emscripten::allow_raw_pointers())
    .function("GetPointTextProperty", &vtkViewTheme::GetPointTextProperty, emscripten::allow_raw_pointers())
    .function("SetCellTextProperty", &vtkViewTheme::SetCellTextProperty, emscripten::allow_raw_pointers())
    .function("GetCellTextProperty", &vtkViewTheme::GetCellTextProperty, emscripten::allow_raw_pointers())
    .function("SetVertexLabelColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetVertexLabelColor( arg_0, arg_1, arg_2); }))
    .function("GetVertexLabelColor", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetVertexLabelColor()); }))
    .function("SetEdgeLabelColor", emscripten::select_overload<void(vtkViewTheme&, double, double, double)>([](vtkViewTheme& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetEdgeLabelColor( arg_0, arg_1, arg_2); }))
    .function("GetEdgeLabelColor", emscripten::select_overload<std::uintptr_t(vtkViewTheme&)>([](vtkViewTheme& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetEdgeLabelColor()); }))
    .class_function("CreateOceanTheme", &vtkViewTheme::CreateOceanTheme, emscripten::allow_raw_pointers())
    .class_function("CreateMellowTheme", &vtkViewTheme::CreateMellowTheme, emscripten::allow_raw_pointers())
    .class_function("CreateNeonTheme", &vtkViewTheme::CreateNeonTheme, emscripten::allow_raw_pointers())
    .function("LookupMatchesPointTheme", &vtkViewTheme::LookupMatchesPointTheme, emscripten::allow_raw_pointers())
    .function("LookupMatchesCellTheme", &vtkViewTheme::LookupMatchesCellTheme, emscripten::allow_raw_pointers());
}

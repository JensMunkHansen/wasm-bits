// JavaScript wrapper for vtkTextProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextPropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTextProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"

template<> void emscripten::internal::raw_destructor<vtkTextProperty>(vtkTextProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextProperty_class) {
  emscripten::class_<vtkTextProperty, emscripten::base<vtkObject>>("vtkTextProperty")
    .smart_ptr<vtkSmartPointer<vtkTextProperty>>("vtkSmartPointer<vtkTextProperty>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetColor", emscripten::select_overload<void(vtkTextProperty&, double, double, double)>([](vtkTextProperty& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetOpacity", &vtkTextProperty::SetOpacity)
    .function("GetOpacityMinValue", &vtkTextProperty::GetOpacityMinValue)
    .function("GetOpacityMaxValue", &vtkTextProperty::GetOpacityMaxValue)
    .function("GetOpacity", &vtkTextProperty::GetOpacity)
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkTextProperty&, double, double, double)>([](vtkTextProperty& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundOpacity", &vtkTextProperty::SetBackgroundOpacity)
    .function("GetBackgroundOpacityMinValue", &vtkTextProperty::GetBackgroundOpacityMinValue)
    .function("GetBackgroundOpacityMaxValue", &vtkTextProperty::GetBackgroundOpacityMaxValue)
    .function("GetBackgroundOpacity", &vtkTextProperty::GetBackgroundOpacity)
    .function("SetBackgroundRGBA", emscripten::select_overload<void(vtkTextProperty&, double, double, double, double)>([](vtkTextProperty& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetBackgroundRGBA( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetFrameColor", emscripten::select_overload<void(vtkTextProperty&, double, double, double)>([](vtkTextProperty& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFrameColor( arg_0, arg_1, arg_2); }))
    .function("SetFrame", &vtkTextProperty::SetFrame)
    .function("GetFrame", &vtkTextProperty::GetFrame)
    .function("FrameOn", &vtkTextProperty::FrameOn)
    .function("FrameOff", &vtkTextProperty::FrameOff)
    .function("SetFrameWidth", &vtkTextProperty::SetFrameWidth)
    .function("GetFrameWidthMinValue", &vtkTextProperty::GetFrameWidthMinValue)
    .function("GetFrameWidthMaxValue", &vtkTextProperty::GetFrameWidthMaxValue)
    .function("GetFrameWidth", &vtkTextProperty::GetFrameWidth)
    .function("GetFontFamilyAsString", emscripten::select_overload<std::string(vtkTextProperty&)>([](vtkTextProperty& self) -> std::string { return self.GetFontFamilyAsString(); }))
    .class_function("GetFontFamilyAsString", emscripten::select_overload<std::string( int)>([]( int arg_0) -> std::string { return vtkTextProperty::GetFontFamilyAsString( arg_0); }))
    .function("SetFontFamilyAsString", emscripten::optional_override([](vtkTextProperty& self, const std::string & arg_0) -> void {  return self.SetFontFamilyAsString( arg_0.c_str());}))
    .function("SetFontFamily", &vtkTextProperty::SetFontFamily)
    .function("GetFontFamily", &vtkTextProperty::GetFontFamily)
    .function("GetFontFamilyMinValue", &vtkTextProperty::GetFontFamilyMinValue)
    .function("SetFontFamilyToArial", &vtkTextProperty::SetFontFamilyToArial)
    .function("SetFontFamilyToCourier", &vtkTextProperty::SetFontFamilyToCourier)
    .function("SetFontFamilyToTimes", &vtkTextProperty::SetFontFamilyToTimes)
    .class_function("GetFontFamilyFromString", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextProperty::GetFontFamilyFromString( arg_0.c_str());}))
    .function("GetFontFile", emscripten::optional_override([](vtkTextProperty& self) -> std::string {  return self.GetFontFile();}))
    .function("SetFontFile", emscripten::optional_override([](vtkTextProperty& self, const std::string & arg_0) -> void {  return self.SetFontFile( arg_0.c_str());}))
    .function("SetFontSize", &vtkTextProperty::SetFontSize)
    .function("GetFontSizeMinValue", &vtkTextProperty::GetFontSizeMinValue)
    .function("GetFontSizeMaxValue", &vtkTextProperty::GetFontSizeMaxValue)
    .function("GetFontSize", &vtkTextProperty::GetFontSize)
    .function("SetBold", &vtkTextProperty::SetBold)
    .function("GetBold", &vtkTextProperty::GetBold)
    .function("BoldOn", &vtkTextProperty::BoldOn)
    .function("BoldOff", &vtkTextProperty::BoldOff)
    .function("SetItalic", &vtkTextProperty::SetItalic)
    .function("GetItalic", &vtkTextProperty::GetItalic)
    .function("ItalicOn", &vtkTextProperty::ItalicOn)
    .function("ItalicOff", &vtkTextProperty::ItalicOff)
    .function("SetShadow", &vtkTextProperty::SetShadow)
    .function("GetShadow", &vtkTextProperty::GetShadow)
    .function("ShadowOn", &vtkTextProperty::ShadowOn)
    .function("ShadowOff", &vtkTextProperty::ShadowOff)
    .function("SetShadowOffset", emscripten::select_overload<void(vtkTextProperty&, int, int)>([](vtkTextProperty& self, int arg_0, int arg_1) -> void { return self.SetShadowOffset( arg_0, arg_1); }))
    .function("SetJustification", &vtkTextProperty::SetJustification)
    .function("GetJustificationMinValue", &vtkTextProperty::GetJustificationMinValue)
    .function("GetJustificationMaxValue", &vtkTextProperty::GetJustificationMaxValue)
    .function("GetJustification", &vtkTextProperty::GetJustification)
    .function("SetJustificationToLeft", &vtkTextProperty::SetJustificationToLeft)
    .function("SetJustificationToCentered", &vtkTextProperty::SetJustificationToCentered)
    .function("SetJustificationToRight", &vtkTextProperty::SetJustificationToRight)
    .function("GetJustificationAsString", emscripten::optional_override([](vtkTextProperty& self) -> std::string {  return self.GetJustificationAsString();}))
    .function("SetVerticalJustification", &vtkTextProperty::SetVerticalJustification)
    .function("GetVerticalJustificationMinValue", &vtkTextProperty::GetVerticalJustificationMinValue)
    .function("GetVerticalJustificationMaxValue", &vtkTextProperty::GetVerticalJustificationMaxValue)
    .function("GetVerticalJustification", &vtkTextProperty::GetVerticalJustification)
    .function("SetVerticalJustificationToBottom", &vtkTextProperty::SetVerticalJustificationToBottom)
    .function("SetVerticalJustificationToCentered", &vtkTextProperty::SetVerticalJustificationToCentered)
    .function("SetVerticalJustificationToTop", &vtkTextProperty::SetVerticalJustificationToTop)
    .function("GetVerticalJustificationAsString", emscripten::optional_override([](vtkTextProperty& self) -> std::string {  return self.GetVerticalJustificationAsString();}))
    .function("SetUseTightBoundingBox", &vtkTextProperty::SetUseTightBoundingBox)
    .function("GetUseTightBoundingBox", &vtkTextProperty::GetUseTightBoundingBox)
    .function("UseTightBoundingBoxOn", &vtkTextProperty::UseTightBoundingBoxOn)
    .function("UseTightBoundingBoxOff", &vtkTextProperty::UseTightBoundingBoxOff)
    .function("SetOrientation", &vtkTextProperty::SetOrientation)
    .function("GetOrientation", &vtkTextProperty::GetOrientation)
    .function("SetLineSpacing", &vtkTextProperty::SetLineSpacing)
    .function("GetLineSpacing", &vtkTextProperty::GetLineSpacing)
    .function("SetLineOffset", &vtkTextProperty::SetLineOffset)
    .function("GetLineOffset", &vtkTextProperty::GetLineOffset)
    .function("SetCellOffset", &vtkTextProperty::SetCellOffset)
    .function("GetCellOffset", &vtkTextProperty::GetCellOffset)
    .function("SetInteriorLinesVisibility", &vtkTextProperty::SetInteriorLinesVisibility)
    .function("GetInteriorLinesVisibility", &vtkTextProperty::GetInteriorLinesVisibility)
    .function("SetInteriorLinesWidth", &vtkTextProperty::SetInteriorLinesWidth)
    .function("GetInteriorLinesWidth", &vtkTextProperty::GetInteriorLinesWidth)
    .function("SetInteriorLinesColor", emscripten::select_overload<void(vtkTextProperty&, double, double, double)>([](vtkTextProperty& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteriorLinesColor( arg_0, arg_1, arg_2); }))
    .function("ShallowCopy", &vtkTextProperty::ShallowCopy, emscripten::allow_raw_pointers());
}

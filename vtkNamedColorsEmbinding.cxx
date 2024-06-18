// JavaScript wrapper for vtkNamedColors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonColor.js/vtkCommonColor.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonColor.js/vtkNamedColorsEmbinding.cxx \
 /home/jmh/github/vtk/Common/Color/vtkNamedColors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkStringArray.h"
#include "vtkNamedColors.h"

template<> void emscripten::internal::raw_destructor<vtkNamedColors>(vtkNamedColors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNamedColors_class) {
  emscripten::class_<vtkNamedColors, emscripten::base<vtkObject>>("vtkNamedColors")
    .smart_ptr<vtkSmartPointer<vtkNamedColors>>("vtkSmartPointer<vtkNamedColors>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNamedColors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNamedColors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNamedColors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNamedColors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNamedColors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNamedColors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNamedColors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfColors", &vtkNamedColors::GetNumberOfColors)
    .function("ResetColors", &vtkNamedColors::ResetColors)
    .function("ColorExists", &vtkNamedColors::ColorExists)
    .function("GetColor4ub", &vtkNamedColors::GetColor4ub)
    .function("GetColor4d", &vtkNamedColors::GetColor4d)
    .function("GetColor3ub", &vtkNamedColors::GetColor3ub)
    .function("GetColor3d", &vtkNamedColors::GetColor3d)
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const unsigned char&, const unsigned char&, const unsigned char&, const unsigned char&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const unsigned char& arg_1, const unsigned char& arg_2, const unsigned char& arg_3, const unsigned char& arg_4) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const double&, const double&, const double&, const double&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const double& arg_1, const double& arg_2, const double& arg_3, const double& arg_4) -> void { return self.SetColor( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const vtkColor4ub&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const vtkColor4ub& arg_1) -> void { return self.SetColor( arg_0, arg_1); }))
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const vtkColor3ub&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const vtkColor3ub& arg_1) -> void { return self.SetColor( arg_0, arg_1); }))
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const vtkColor4d&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const vtkColor4d& arg_1) -> void { return self.SetColor( arg_0, arg_1); }))
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const vtkColor3d&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const vtkColor3d& arg_1) -> void { return self.SetColor( arg_0, arg_1); }))
    .function("SetColor", emscripten::select_overload<void(vtkNamedColors&, const vtkStdString&, const vtkStdString&)>([](vtkNamedColors& self, const vtkStdString& arg_0, const vtkStdString& arg_1) -> void { return self.SetColor( arg_0, arg_1); }))
    .function("RemoveColor", &vtkNamedColors::RemoveColor)
    .function("GetColorNames", emscripten::select_overload<vtkStdString(vtkNamedColors&)>([](vtkNamedColors& self) -> vtkStdString { return self.GetColorNames(); }))
    .function("GetColorNames", emscripten::select_overload<void(vtkNamedColors&, vtkStringArray*)>([](vtkNamedColors& self, vtkStringArray* arg_0) -> void { return self.GetColorNames( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetSynonyms", &vtkNamedColors::GetSynonyms)
    .function("HTMLColorToRGBA", &vtkNamedColors::HTMLColorToRGBA)
    .function("HTMLColorToRGB", &vtkNamedColors::HTMLColorToRGB)
    .function("RGBToHTMLColor", &vtkNamedColors::RGBToHTMLColor)
    .function("RGBAToHTMLColor", &vtkNamedColors::RGBAToHTMLColor);
}

// JavaScript wrapper for vtkCursor3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCursor3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCursor3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkCursor3D.h"

template<> void emscripten::internal::raw_destructor<vtkCursor3D>(vtkCursor3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCursor3D_class) {
  emscripten::class_<vtkCursor3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkCursor3D")
    .smart_ptr<vtkSmartPointer<vtkCursor3D>>("vtkSmartPointer<vtkCursor3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCursor3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCursor3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCursor3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCursor3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCursor3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCursor3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCursor3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetModelBounds", emscripten::select_overload<void(vtkCursor3D&, double, double, double, double, double, double)>([](vtkCursor3D& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetFocalPoint", emscripten::select_overload<void(vtkCursor3D&, double, double, double)>([](vtkCursor3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFocalPoint( arg_0, arg_1, arg_2); }))
    .function("SetOutline", &vtkCursor3D::SetOutline)
    .function("GetOutline", &vtkCursor3D::GetOutline)
    .function("OutlineOn", &vtkCursor3D::OutlineOn)
    .function("OutlineOff", &vtkCursor3D::OutlineOff)
    .function("SetAxes", &vtkCursor3D::SetAxes)
    .function("GetAxes", &vtkCursor3D::GetAxes)
    .function("AxesOn", &vtkCursor3D::AxesOn)
    .function("AxesOff", &vtkCursor3D::AxesOff)
    .function("SetXShadows", &vtkCursor3D::SetXShadows)
    .function("GetXShadows", &vtkCursor3D::GetXShadows)
    .function("XShadowsOn", &vtkCursor3D::XShadowsOn)
    .function("XShadowsOff", &vtkCursor3D::XShadowsOff)
    .function("SetYShadows", &vtkCursor3D::SetYShadows)
    .function("GetYShadows", &vtkCursor3D::GetYShadows)
    .function("YShadowsOn", &vtkCursor3D::YShadowsOn)
    .function("YShadowsOff", &vtkCursor3D::YShadowsOff)
    .function("SetZShadows", &vtkCursor3D::SetZShadows)
    .function("GetZShadows", &vtkCursor3D::GetZShadows)
    .function("ZShadowsOn", &vtkCursor3D::ZShadowsOn)
    .function("ZShadowsOff", &vtkCursor3D::ZShadowsOff)
    .function("SetTranslationMode", &vtkCursor3D::SetTranslationMode)
    .function("GetTranslationMode", &vtkCursor3D::GetTranslationMode)
    .function("TranslationModeOn", &vtkCursor3D::TranslationModeOn)
    .function("TranslationModeOff", &vtkCursor3D::TranslationModeOff)
    .function("SetWrap", &vtkCursor3D::SetWrap)
    .function("GetWrap", &vtkCursor3D::GetWrap)
    .function("WrapOn", &vtkCursor3D::WrapOn)
    .function("WrapOff", &vtkCursor3D::WrapOff)
    .function("GetFocus", &vtkCursor3D::GetFocus, emscripten::allow_raw_pointers())
    .function("AllOn", &vtkCursor3D::AllOn)
    .function("AllOff", &vtkCursor3D::AllOff);
}

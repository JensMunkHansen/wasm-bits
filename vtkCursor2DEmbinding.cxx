// JavaScript wrapper for vtkCursor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkCursor2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkCursor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCursor2D.h"

template<> void emscripten::internal::raw_destructor<vtkCursor2D>(vtkCursor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCursor2D_class) {
  emscripten::class_<vtkCursor2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkCursor2D")
    .smart_ptr<vtkSmartPointer<vtkCursor2D>>("vtkSmartPointer<vtkCursor2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCursor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCursor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCursor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCursor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCursor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCursor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCursor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetModelBounds", emscripten::select_overload<void(vtkCursor2D&, double, double, double, double, double, double)>([](vtkCursor2D& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetFocalPoint", emscripten::select_overload<void(vtkCursor2D&, double, double, double)>([](vtkCursor2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFocalPoint( arg_0, arg_1, arg_2); }))
    .function("SetOutline", &vtkCursor2D::SetOutline)
    .function("GetOutline", &vtkCursor2D::GetOutline)
    .function("OutlineOn", &vtkCursor2D::OutlineOn)
    .function("OutlineOff", &vtkCursor2D::OutlineOff)
    .function("SetAxes", &vtkCursor2D::SetAxes)
    .function("GetAxes", &vtkCursor2D::GetAxes)
    .function("AxesOn", &vtkCursor2D::AxesOn)
    .function("AxesOff", &vtkCursor2D::AxesOff)
    .function("SetRadius", &vtkCursor2D::SetRadius)
    .function("GetRadiusMinValue", &vtkCursor2D::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkCursor2D::GetRadiusMaxValue)
    .function("GetRadius", &vtkCursor2D::GetRadius)
    .function("SetPoint", &vtkCursor2D::SetPoint)
    .function("GetPoint", &vtkCursor2D::GetPoint)
    .function("PointOn", &vtkCursor2D::PointOn)
    .function("PointOff", &vtkCursor2D::PointOff)
    .function("SetTranslationMode", &vtkCursor2D::SetTranslationMode)
    .function("GetTranslationMode", &vtkCursor2D::GetTranslationMode)
    .function("TranslationModeOn", &vtkCursor2D::TranslationModeOn)
    .function("TranslationModeOff", &vtkCursor2D::TranslationModeOff)
    .function("SetWrap", &vtkCursor2D::SetWrap)
    .function("GetWrap", &vtkCursor2D::GetWrap)
    .function("WrapOn", &vtkCursor2D::WrapOn)
    .function("WrapOff", &vtkCursor2D::WrapOff)
    .function("AllOn", &vtkCursor2D::AllOn)
    .function("AllOff", &vtkCursor2D::AllOff);
}

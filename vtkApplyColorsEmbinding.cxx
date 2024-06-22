// JavaScript wrapper for vtkApplyColors with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkApplyColorsEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkApplyColors.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarsToColors.h"
#include "vtkApplyColors.h"

template<> void emscripten::internal::raw_destructor<vtkApplyColors>(vtkApplyColors * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkApplyColors_class) {
  emscripten::class_<vtkApplyColors, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkApplyColors")
    .smart_ptr<vtkSmartPointer<vtkApplyColors>>("vtkSmartPointer<vtkApplyColors>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkApplyColors>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkApplyColors::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkApplyColors& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkApplyColors::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkApplyColors::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkApplyColors::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkApplyColors& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointLookupTable", &vtkApplyColors::SetPointLookupTable, emscripten::allow_raw_pointers())
    .function("GetPointLookupTable", &vtkApplyColors::GetPointLookupTable, emscripten::allow_raw_pointers())
    .function("SetUsePointLookupTable", &vtkApplyColors::SetUsePointLookupTable)
    .function("GetUsePointLookupTable", &vtkApplyColors::GetUsePointLookupTable)
    .function("UsePointLookupTableOn", &vtkApplyColors::UsePointLookupTableOn)
    .function("UsePointLookupTableOff", &vtkApplyColors::UsePointLookupTableOff)
    .function("SetScalePointLookupTable", &vtkApplyColors::SetScalePointLookupTable)
    .function("GetScalePointLookupTable", &vtkApplyColors::GetScalePointLookupTable)
    .function("ScalePointLookupTableOn", &vtkApplyColors::ScalePointLookupTableOn)
    .function("ScalePointLookupTableOff", &vtkApplyColors::ScalePointLookupTableOff)
    .function("SetDefaultPointColor", emscripten::select_overload<void(vtkApplyColors&, double, double, double)>([](vtkApplyColors& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDefaultPointColor( arg_0, arg_1, arg_2); }))
    .function("SetDefaultPointOpacity", &vtkApplyColors::SetDefaultPointOpacity)
    .function("GetDefaultPointOpacity", &vtkApplyColors::GetDefaultPointOpacity)
    .function("SetSelectedPointColor", emscripten::select_overload<void(vtkApplyColors&, double, double, double)>([](vtkApplyColors& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSelectedPointColor( arg_0, arg_1, arg_2); }))
    .function("SetSelectedPointOpacity", &vtkApplyColors::SetSelectedPointOpacity)
    .function("GetSelectedPointOpacity", &vtkApplyColors::GetSelectedPointOpacity)
    .function("SetPointColorOutputArrayName", emscripten::optional_override([](vtkApplyColors& self, const std::string & arg_0) -> void {  return self.SetPointColorOutputArrayName( arg_0.c_str());}))
    .function("GetPointColorOutputArrayName", emscripten::optional_override([](vtkApplyColors& self) -> std::string {  return self.GetPointColorOutputArrayName();}))
    .function("SetCellLookupTable", &vtkApplyColors::SetCellLookupTable, emscripten::allow_raw_pointers())
    .function("GetCellLookupTable", &vtkApplyColors::GetCellLookupTable, emscripten::allow_raw_pointers())
    .function("SetUseCellLookupTable", &vtkApplyColors::SetUseCellLookupTable)
    .function("GetUseCellLookupTable", &vtkApplyColors::GetUseCellLookupTable)
    .function("UseCellLookupTableOn", &vtkApplyColors::UseCellLookupTableOn)
    .function("UseCellLookupTableOff", &vtkApplyColors::UseCellLookupTableOff)
    .function("SetScaleCellLookupTable", &vtkApplyColors::SetScaleCellLookupTable)
    .function("GetScaleCellLookupTable", &vtkApplyColors::GetScaleCellLookupTable)
    .function("ScaleCellLookupTableOn", &vtkApplyColors::ScaleCellLookupTableOn)
    .function("ScaleCellLookupTableOff", &vtkApplyColors::ScaleCellLookupTableOff)
    .function("SetDefaultCellColor", emscripten::select_overload<void(vtkApplyColors&, double, double, double)>([](vtkApplyColors& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDefaultCellColor( arg_0, arg_1, arg_2); }))
    .function("SetDefaultCellOpacity", &vtkApplyColors::SetDefaultCellOpacity)
    .function("GetDefaultCellOpacity", &vtkApplyColors::GetDefaultCellOpacity)
    .function("SetSelectedCellColor", emscripten::select_overload<void(vtkApplyColors&, double, double, double)>([](vtkApplyColors& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSelectedCellColor( arg_0, arg_1, arg_2); }))
    .function("SetSelectedCellOpacity", &vtkApplyColors::SetSelectedCellOpacity)
    .function("GetSelectedCellOpacity", &vtkApplyColors::GetSelectedCellOpacity)
    .function("SetCellColorOutputArrayName", emscripten::optional_override([](vtkApplyColors& self, const std::string & arg_0) -> void {  return self.SetCellColorOutputArrayName( arg_0.c_str());}))
    .function("GetCellColorOutputArrayName", emscripten::optional_override([](vtkApplyColors& self) -> std::string {  return self.GetCellColorOutputArrayName();}))
    .function("SetUseCurrentAnnotationColor", &vtkApplyColors::SetUseCurrentAnnotationColor)
    .function("GetUseCurrentAnnotationColor", &vtkApplyColors::GetUseCurrentAnnotationColor)
    .function("UseCurrentAnnotationColorOn", &vtkApplyColors::UseCurrentAnnotationColorOn)
    .function("UseCurrentAnnotationColorOff", &vtkApplyColors::UseCurrentAnnotationColorOff)
    .function("GetMTime", &vtkApplyColors::GetMTime);
}

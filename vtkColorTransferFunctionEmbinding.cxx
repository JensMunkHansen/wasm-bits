// JavaScript wrapper for vtkColorTransferFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkColorTransferFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkColorTransferFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkScalarsToColors.h"
#include "vtkIndent.h"
#include "vtkDoubleArray.h"
#include "vtkColorTransferFunction.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkColorTransferFunction_0_1_constants) {
  const struct { const char *name; int value; }
    constants[8] = {
      { "VTK_CTF_RGB", 0 },
      { "VTK_CTF_HSV", 1 },
      { "VTK_CTF_LAB", 2 },
      { "VTK_CTF_DIVERGING", 3 },
      { "VTK_CTF_LAB_CIEDE2000", 4 },
      { "VTK_CTF_STEP", 5 },
      { "VTK_CTF_LINEAR", 0 },
      { "VTK_CTF_LOG10", 1 },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkColorTransferFunction>(vtkColorTransferFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkColorTransferFunction_class) {
  emscripten::class_<vtkColorTransferFunction, emscripten::base<vtkScalarsToColors>>("vtkColorTransferFunction")
    .smart_ptr<vtkSmartPointer<vtkColorTransferFunction>>("vtkSmartPointer<vtkColorTransferFunction>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkColorTransferFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorTransferFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkColorTransferFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkColorTransferFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkColorTransferFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkColorTransferFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkColorTransferFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkColorTransferFunction::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkColorTransferFunction::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetSize", &vtkColorTransferFunction::GetSize)
    .function("AddRGBPoint", emscripten::select_overload<int(vtkColorTransferFunction&, double, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.AddRGBPoint( arg_0, arg_1, arg_2, arg_3); }))
    .function("AddRGBPoint", emscripten::select_overload<int(vtkColorTransferFunction&, double, double, double, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> int { return self.AddRGBPoint( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("AddRGBPoints", emscripten::select_overload<int(vtkColorTransferFunction&, vtkDoubleArray*, vtkDoubleArray*)>([](vtkColorTransferFunction& self, vtkDoubleArray* arg_0, vtkDoubleArray* arg_1) -> int { return self.AddRGBPoints( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddRGBPoints", emscripten::select_overload<int(vtkColorTransferFunction&, vtkDoubleArray*, vtkDoubleArray*, double, double)>([](vtkColorTransferFunction& self, vtkDoubleArray* arg_0, vtkDoubleArray* arg_1, double arg_2, double arg_3) -> int { return self.AddRGBPoints( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("AddHSVPoint", emscripten::select_overload<int(vtkColorTransferFunction&, double, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.AddHSVPoint( arg_0, arg_1, arg_2, arg_3); }))
    .function("AddHSVPoint", emscripten::select_overload<int(vtkColorTransferFunction&, double, double, double, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> int { return self.AddHSVPoint( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("RemovePoint", &vtkColorTransferFunction::RemovePoint)
    .function("AddRGBSegment", &vtkColorTransferFunction::AddRGBSegment)
    .function("AddHSVSegment", &vtkColorTransferFunction::AddHSVSegment)
    .function("RemoveAllPoints", &vtkColorTransferFunction::RemoveAllPoints)
    .function("GetRedValue", &vtkColorTransferFunction::GetRedValue)
    .function("GetGreenValue", &vtkColorTransferFunction::GetGreenValue)
    .function("GetBlueValue", &vtkColorTransferFunction::GetBlueValue)
    .function("MapValue", emscripten::optional_override([](vtkColorTransferFunction& self, double arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.MapValue( arg_0)) / sizeof(unsigned char);}))
    .function("GetTable", emscripten::select_overload<void(vtkColorTransferFunction&, double, double, int, std::uintptr_t)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, int arg_2, std::uintptr_t arg_3) -> void { return self.GetTable( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double))); }))
    .function("GetTable", emscripten::select_overload<void(vtkColorTransferFunction&, double, double, int, std::uintptr_t)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, int arg_2, std::uintptr_t arg_3) -> void { return self.GetTable( arg_0, arg_1, arg_2,reinterpret_cast<float*>(arg_3 * sizeof(float))); }))
    .function("GetTable", emscripten::select_overload<std::uintptr_t(vtkColorTransferFunction&, double, double, int)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, int arg_2) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetTable( arg_0, arg_1, arg_2)); }))
    .function("BuildFunctionFromTable", emscripten::optional_override([](vtkColorTransferFunction& self, double arg_0, double arg_1, int arg_2, std::uintptr_t arg_3) -> void {  return self.BuildFunctionFromTable( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)));}))
    .function("SetClamping", &vtkColorTransferFunction::SetClamping)
    .function("GetClampingMinValue", &vtkColorTransferFunction::GetClampingMinValue)
    .function("GetClampingMaxValue", &vtkColorTransferFunction::GetClampingMaxValue)
    .function("GetClamping", &vtkColorTransferFunction::GetClamping)
    .function("ClampingOn", &vtkColorTransferFunction::ClampingOn)
    .function("ClampingOff", &vtkColorTransferFunction::ClampingOff)
    .function("SetColorSpace", &vtkColorTransferFunction::SetColorSpace)
    .function("GetColorSpaceMinValue", &vtkColorTransferFunction::GetColorSpaceMinValue)
    .function("GetColorSpaceMaxValue", &vtkColorTransferFunction::GetColorSpaceMaxValue)
    .function("SetColorSpaceToRGB", &vtkColorTransferFunction::SetColorSpaceToRGB)
    .function("SetColorSpaceToHSV", &vtkColorTransferFunction::SetColorSpaceToHSV)
    .function("SetColorSpaceToLab", &vtkColorTransferFunction::SetColorSpaceToLab)
    .function("SetColorSpaceToLabCIEDE2000", &vtkColorTransferFunction::SetColorSpaceToLabCIEDE2000)
    .function("SetColorSpaceToDiverging", &vtkColorTransferFunction::SetColorSpaceToDiverging)
    .function("SetColorSpaceToStep", &vtkColorTransferFunction::SetColorSpaceToStep)
    .function("GetColorSpace", &vtkColorTransferFunction::GetColorSpace)
    .function("SetHSVWrap", &vtkColorTransferFunction::SetHSVWrap)
    .function("GetHSVWrap", &vtkColorTransferFunction::GetHSVWrap)
    .function("HSVWrapOn", &vtkColorTransferFunction::HSVWrapOn)
    .function("HSVWrapOff", &vtkColorTransferFunction::HSVWrapOff)
    .function("SetScale", &vtkColorTransferFunction::SetScale)
    .function("SetScaleToLinear", &vtkColorTransferFunction::SetScaleToLinear)
    .function("SetScaleToLog10", &vtkColorTransferFunction::SetScaleToLog10)
    .function("GetScale", &vtkColorTransferFunction::GetScale)
    .function("SetNanColor", emscripten::select_overload<void(vtkColorTransferFunction&, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNanColor( arg_0, arg_1, arg_2); }))
    .function("SetNanOpacity", &vtkColorTransferFunction::SetNanOpacity)
    .function("GetNanOpacity", &vtkColorTransferFunction::GetNanOpacity)
    .function("SetNanColorRGBA", emscripten::select_overload<void(vtkColorTransferFunction&, double, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetNanColorRGBA( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetBelowRangeColor", emscripten::select_overload<void(vtkColorTransferFunction&, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBelowRangeColor( arg_0, arg_1, arg_2); }))
    .function("SetUseBelowRangeColor", &vtkColorTransferFunction::SetUseBelowRangeColor)
    .function("GetUseBelowRangeColor", &vtkColorTransferFunction::GetUseBelowRangeColor)
    .function("UseBelowRangeColorOn", &vtkColorTransferFunction::UseBelowRangeColorOn)
    .function("UseBelowRangeColorOff", &vtkColorTransferFunction::UseBelowRangeColorOff)
    .function("SetAboveRangeColor", emscripten::select_overload<void(vtkColorTransferFunction&, double, double, double)>([](vtkColorTransferFunction& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAboveRangeColor( arg_0, arg_1, arg_2); }))
    .function("SetUseAboveRangeColor", &vtkColorTransferFunction::SetUseAboveRangeColor)
    .function("GetUseAboveRangeColor", &vtkColorTransferFunction::GetUseAboveRangeColor)
    .function("UseAboveRangeColorOn", &vtkColorTransferFunction::UseAboveRangeColorOn)
    .function("UseAboveRangeColorOff", &vtkColorTransferFunction::UseAboveRangeColorOff)
    .function("GetDataPointer", emscripten::optional_override([](vtkColorTransferFunction& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataPointer()) / sizeof(double);}))
    .function("FillFromDataPointer", emscripten::optional_override([](vtkColorTransferFunction& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.FillFromDataPointer( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("MapScalarsThroughTable2", emscripten::optional_override([](vtkColorTransferFunction& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void {  return self.MapScalarsThroughTable2(reinterpret_cast<void*>(arg_0),reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char)), arg_2, arg_3, arg_4, arg_5);}))
    .function("SetAllowDuplicateScalars", &vtkColorTransferFunction::SetAllowDuplicateScalars)
    .function("GetAllowDuplicateScalars", &vtkColorTransferFunction::GetAllowDuplicateScalars)
    .function("AllowDuplicateScalarsOn", &vtkColorTransferFunction::AllowDuplicateScalarsOn)
    .function("AllowDuplicateScalarsOff", &vtkColorTransferFunction::AllowDuplicateScalarsOff)
    .function("GetNumberOfAvailableColors", &vtkColorTransferFunction::GetNumberOfAvailableColors)
    .function("EstimateMinNumberOfSamples", &vtkColorTransferFunction::EstimateMinNumberOfSamples);
}

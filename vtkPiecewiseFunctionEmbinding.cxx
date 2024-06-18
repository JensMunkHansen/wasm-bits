// JavaScript wrapper for vtkPiecewiseFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPiecewiseFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPiecewiseFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPiecewiseFunction.h"

EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPiecewiseFunction_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPiecewiseFunction>(vtkPiecewiseFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPiecewiseFunction_class) {
  using SearchMethod=vtkPiecewiseFunction::SearchMethod;
  emscripten::class_<vtkPiecewiseFunction, emscripten::base<vtkDataObject>>("vtkPiecewiseFunction")
    .smart_ptr<vtkSmartPointer<vtkPiecewiseFunction>>("vtkSmartPointer<vtkPiecewiseFunction>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPiecewiseFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPiecewiseFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPiecewiseFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPiecewiseFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPiecewiseFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPiecewiseFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkPiecewiseFunction::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkPiecewiseFunction::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkPiecewiseFunction::GetDataObjectType)
    .function("GetSize", &vtkPiecewiseFunction::GetSize)
    .function("AddPoint", emscripten::select_overload<int(vtkPiecewiseFunction&, double, double)>([](vtkPiecewiseFunction& self, double arg_0, double arg_1) -> int { return self.AddPoint( arg_0, arg_1); }))
    .function("AddPoint", emscripten::select_overload<int(vtkPiecewiseFunction&, double, double, double, double)>([](vtkPiecewiseFunction& self, double arg_0, double arg_1, double arg_2, double arg_3) -> int { return self.AddPoint( arg_0, arg_1, arg_2, arg_3); }))
    .function("RemovePointByIndex", &vtkPiecewiseFunction::RemovePointByIndex)
    .function("RemovePoint", emscripten::select_overload<int(vtkPiecewiseFunction&, double)>([](vtkPiecewiseFunction& self, double arg_0) -> int { return self.RemovePoint( arg_0); }))
    .function("RemovePoint", emscripten::select_overload<int(vtkPiecewiseFunction&, double, double)>([](vtkPiecewiseFunction& self, double arg_0, double arg_1) -> int { return self.RemovePoint( arg_0, arg_1); }))
    .function("RemoveAllPoints", &vtkPiecewiseFunction::RemoveAllPoints)
    .function("AddSegment", &vtkPiecewiseFunction::AddSegment)
    .function("GetValue", &vtkPiecewiseFunction::GetValue)
    .function("GetDataPointer", emscripten::optional_override([](vtkPiecewiseFunction& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetDataPointer()) / sizeof(double);}))
    .function("FillFromDataPointer", emscripten::optional_override([](vtkPiecewiseFunction& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.FillFromDataPointer( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("GetTable", emscripten::select_overload<void(vtkPiecewiseFunction&, double, double, int, std::uintptr_t, int, int, double)>([](vtkPiecewiseFunction& self, double arg_0, double arg_1, int arg_2, std::uintptr_t arg_3, int arg_4, int arg_5, double arg_6) -> void { return self.GetTable( arg_0, arg_1, arg_2,reinterpret_cast<float*>(arg_3 * sizeof(float)), arg_4, arg_5, arg_6); }))
    .function("GetTable", emscripten::select_overload<void(vtkPiecewiseFunction&, double, double, int, std::uintptr_t, int, int, double)>([](vtkPiecewiseFunction& self, double arg_0, double arg_1, int arg_2, std::uintptr_t arg_3, int arg_4, int arg_5, double arg_6) -> void { return self.GetTable( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4, arg_5, arg_6); }))
    .function("BuildFunctionFromTable", emscripten::optional_override([](vtkPiecewiseFunction& self, double arg_0, double arg_1, int arg_2, std::uintptr_t arg_3, int arg_4) -> void {  return self.BuildFunctionFromTable( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)), arg_4);}))
    .function("SetClamping", &vtkPiecewiseFunction::SetClamping)
    .function("GetClamping", &vtkPiecewiseFunction::GetClamping)
    .function("ClampingOn", &vtkPiecewiseFunction::ClampingOn)
    .function("ClampingOff", &vtkPiecewiseFunction::ClampingOff)
    .function("SetUseLogScale", &vtkPiecewiseFunction::SetUseLogScale)
    .function("GetUseLogScale", &vtkPiecewiseFunction::GetUseLogScale)
    .function("UseLogScaleOn", &vtkPiecewiseFunction::UseLogScaleOn)
    .function("UseLogScaleOff", &vtkPiecewiseFunction::UseLogScaleOff)
    .function("GetType", emscripten::optional_override([](vtkPiecewiseFunction& self) -> std::string {  return self.GetType();}))
    .function("GetFirstNonZeroValue", &vtkPiecewiseFunction::GetFirstNonZeroValue)
    .function("Initialize", &vtkPiecewiseFunction::Initialize)
    .class_function("GetData", emscripten::select_overload<vtkPiecewiseFunction*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkPiecewiseFunction* { return vtkPiecewiseFunction::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPiecewiseFunction*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkPiecewiseFunction* { return vtkPiecewiseFunction::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetAllowDuplicateScalars", &vtkPiecewiseFunction::SetAllowDuplicateScalars)
    .function("GetAllowDuplicateScalars", &vtkPiecewiseFunction::GetAllowDuplicateScalars)
    .function("AllowDuplicateScalarsOn", &vtkPiecewiseFunction::AllowDuplicateScalarsOn)
    .function("AllowDuplicateScalarsOff", &vtkPiecewiseFunction::AllowDuplicateScalarsOff)
    .function("EstimateMinNumberOfSamples", &vtkPiecewiseFunction::EstimateMinNumberOfSamples)
    .function("UpdateSearchMethod", &vtkPiecewiseFunction::UpdateSearchMethod)
    .function("GetAutomaticSearchMethod", &vtkPiecewiseFunction::GetAutomaticSearchMethod)
    .function("SetUseCustomSearchMethod", &vtkPiecewiseFunction::SetUseCustomSearchMethod)
    .function("SetCustomSearchMethod", &vtkPiecewiseFunction::SetCustomSearchMethod)
    .function("GetCustomSearchMethod", &vtkPiecewiseFunction::GetCustomSearchMethod);
}
EMSCRIPTEN_BINDINGS(vtkCommonDataModel_vtkPiecewiseFunction_0_2_constants) {
    typedef vtkPiecewiseFunction::SearchMethod cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkPiecewiseFunction_SearchMethod_BINARY_SEARCH", vtkPiecewiseFunction::BINARY_SEARCH },
      { "vtkPiecewiseFunction_SearchMethod_INTERPOLATION_SEARCH", vtkPiecewiseFunction::INTERPOLATION_SEARCH },
      { "vtkPiecewiseFunction_SearchMethod_MAX_ENUM", vtkPiecewiseFunction::MAX_ENUM },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

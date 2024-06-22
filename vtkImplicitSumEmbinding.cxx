// JavaScript wrapper for vtkImplicitSum with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitSumEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitSum.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkDataArray.h"
#include "vtkImplicitSum.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitSum>(vtkImplicitSum * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitSum_class) {
  emscripten::class_<vtkImplicitSum, emscripten::base<vtkImplicitFunction>>("vtkImplicitSum")
    .smart_ptr<vtkSmartPointer<vtkImplicitSum>>("vtkSmartPointer<vtkImplicitSum>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitSum>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitSum::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitSum& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitSum::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitSum::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitSum::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitSum& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitSum::GetMTime)
    .function("AddFunction", emscripten::select_overload<void(vtkImplicitSum&, vtkImplicitFunction*, double)>([](vtkImplicitSum& self, vtkImplicitFunction* arg_0, double arg_1) -> void { return self.AddFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddFunction", emscripten::select_overload<void(vtkImplicitSum&, vtkImplicitFunction*)>([](vtkImplicitSum& self, vtkImplicitFunction* arg_0) -> void { return self.AddFunction( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveAllFunctions", &vtkImplicitSum::RemoveAllFunctions)
    .function("SetFunctionWeight", &vtkImplicitSum::SetFunctionWeight, emscripten::allow_raw_pointers())
    .function("SetNormalizeByWeight", &vtkImplicitSum::SetNormalizeByWeight)
    .function("GetNormalizeByWeight", &vtkImplicitSum::GetNormalizeByWeight)
    .function("NormalizeByWeightOn", &vtkImplicitSum::NormalizeByWeightOn)
    .function("NormalizeByWeightOff", &vtkImplicitSum::NormalizeByWeightOff)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitSum&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitSum& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitSum&, double, double, double)>([](vtkImplicitSum& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}

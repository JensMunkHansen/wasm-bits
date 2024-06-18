// JavaScript wrapper for vtkImplicitFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkAbstractTransform.h"
#include "vtkImplicitFunction.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitFunction>(vtkImplicitFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitFunction_class) {
  emscripten::class_<vtkImplicitFunction, emscripten::base<vtkObject>>("vtkImplicitFunction")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitFunction::GetMTime)
    .function("FunctionValue", emscripten::select_overload<void(vtkImplicitFunction&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitFunction& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.FunctionValue( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("FunctionValue", emscripten::select_overload<double(vtkImplicitFunction&, double, double, double)>([](vtkImplicitFunction& self, double arg_0, double arg_1, double arg_2) -> double { return self.FunctionValue( arg_0, arg_1, arg_2); }))
    .function("SetTransform", emscripten::select_overload<void(vtkImplicitFunction&, vtkAbstractTransform*)>([](vtkImplicitFunction& self, vtkAbstractTransform* arg_0) -> void { return self.SetTransform( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkImplicitFunction::GetTransform, emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitFunction&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitFunction& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitFunction&, double, double, double)>([](vtkImplicitFunction& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}

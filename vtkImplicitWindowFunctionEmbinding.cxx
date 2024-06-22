// JavaScript wrapper for vtkImplicitWindowFunction with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitWindowFunctionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitWindowFunction.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkDataArray.h"
#include "vtkImplicitWindowFunction.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitWindowFunction>(vtkImplicitWindowFunction * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitWindowFunction_class) {
  emscripten::class_<vtkImplicitWindowFunction, emscripten::base<vtkImplicitFunction>>("vtkImplicitWindowFunction")
    .smart_ptr<vtkSmartPointer<vtkImplicitWindowFunction>>("vtkSmartPointer<vtkImplicitWindowFunction>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitWindowFunction>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitWindowFunction::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitWindowFunction& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitWindowFunction::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitWindowFunction::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitWindowFunction::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitWindowFunction& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImplicitFunction", &vtkImplicitWindowFunction::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkImplicitWindowFunction::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetWindowRange", emscripten::select_overload<void(vtkImplicitWindowFunction&, double, double)>([](vtkImplicitWindowFunction& self, double arg_0, double arg_1) -> void { return self.SetWindowRange( arg_0, arg_1); }))
    .function("SetWindowValues", emscripten::select_overload<void(vtkImplicitWindowFunction&, double, double)>([](vtkImplicitWindowFunction& self, double arg_0, double arg_1) -> void { return self.SetWindowValues( arg_0, arg_1); }))
    .function("GetMTime", &vtkImplicitWindowFunction::GetMTime)
    .function("UsesGarbageCollector", &vtkImplicitWindowFunction::UsesGarbageCollector)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitWindowFunction&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitWindowFunction& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitWindowFunction&, double, double, double)>([](vtkImplicitWindowFunction& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}

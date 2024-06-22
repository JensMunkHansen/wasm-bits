// JavaScript wrapper for vtkAmoebaMinimizer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkCommonMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMath.js/vtkAmoebaMinimizerEmbinding.cxx \
 /home/jmh/github/vtk/Common/Math/vtkAmoebaMinimizer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAmoebaMinimizer.h"

template<> void emscripten::internal::raw_destructor<vtkAmoebaMinimizer>(vtkAmoebaMinimizer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAmoebaMinimizer_class) {
  emscripten::class_<vtkAmoebaMinimizer, emscripten::base<vtkObject>>("vtkAmoebaMinimizer")
    .smart_ptr<vtkSmartPointer<vtkAmoebaMinimizer>>("vtkSmartPointer<vtkAmoebaMinimizer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAmoebaMinimizer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAmoebaMinimizer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAmoebaMinimizer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAmoebaMinimizer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAmoebaMinimizer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAmoebaMinimizer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAmoebaMinimizer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFunction", emscripten::optional_override([](vtkAmoebaMinimizer& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetFunction( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetFunctionArgDelete", emscripten::optional_override([](vtkAmoebaMinimizer& self, emscripten::val arg_0) -> void {  return self.SetFunctionArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("SetParameterValue", emscripten::select_overload<void(vtkAmoebaMinimizer&, const std::string &, double)>([](vtkAmoebaMinimizer& self, const std::string & arg_0, double arg_1) -> void { return self.SetParameterValue( arg_0.c_str(), arg_1); }))
    .function("SetParameterValue", emscripten::select_overload<void(vtkAmoebaMinimizer&, int, double)>([](vtkAmoebaMinimizer& self, int arg_0, double arg_1) -> void { return self.SetParameterValue( arg_0, arg_1); }))
    .function("SetParameterScale", emscripten::select_overload<void(vtkAmoebaMinimizer&, const std::string &, double)>([](vtkAmoebaMinimizer& self, const std::string & arg_0, double arg_1) -> void { return self.SetParameterScale( arg_0.c_str(), arg_1); }))
    .function("SetParameterScale", emscripten::select_overload<void(vtkAmoebaMinimizer&, int, double)>([](vtkAmoebaMinimizer& self, int arg_0, double arg_1) -> void { return self.SetParameterScale( arg_0, arg_1); }))
    .function("GetParameterScale", emscripten::select_overload<double(vtkAmoebaMinimizer&, const std::string &)>([](vtkAmoebaMinimizer& self, const std::string & arg_0) -> double { return self.GetParameterScale( arg_0.c_str()); }))
    .function("GetParameterScale", emscripten::select_overload<double(vtkAmoebaMinimizer&, int)>([](vtkAmoebaMinimizer& self, int arg_0) -> double { return self.GetParameterScale( arg_0); }))
    .function("GetParameterValue", emscripten::select_overload<double(vtkAmoebaMinimizer&, const std::string &)>([](vtkAmoebaMinimizer& self, const std::string & arg_0) -> double { return self.GetParameterValue( arg_0.c_str()); }))
    .function("GetParameterValue", emscripten::select_overload<double(vtkAmoebaMinimizer&, int)>([](vtkAmoebaMinimizer& self, int arg_0) -> double { return self.GetParameterValue( arg_0); }))
    .function("GetParameterName", emscripten::optional_override([](vtkAmoebaMinimizer& self, int arg_0) -> std::string {  return self.GetParameterName( arg_0);}))
    .function("GetNumberOfParameters", &vtkAmoebaMinimizer::GetNumberOfParameters)
    .function("Initialize", &vtkAmoebaMinimizer::Initialize)
    .function("Minimize", &vtkAmoebaMinimizer::Minimize)
    .function("Iterate", &vtkAmoebaMinimizer::Iterate)
    .function("SetFunctionValue", &vtkAmoebaMinimizer::SetFunctionValue)
    .function("GetFunctionValue", &vtkAmoebaMinimizer::GetFunctionValue)
    .function("SetContractionRatio", &vtkAmoebaMinimizer::SetContractionRatio)
    .function("GetContractionRatioMinValue", &vtkAmoebaMinimizer::GetContractionRatioMinValue)
    .function("GetContractionRatioMaxValue", &vtkAmoebaMinimizer::GetContractionRatioMaxValue)
    .function("GetContractionRatio", &vtkAmoebaMinimizer::GetContractionRatio)
    .function("SetExpansionRatio", &vtkAmoebaMinimizer::SetExpansionRatio)
    .function("GetExpansionRatioMinValue", &vtkAmoebaMinimizer::GetExpansionRatioMinValue)
    .function("GetExpansionRatioMaxValue", &vtkAmoebaMinimizer::GetExpansionRatioMaxValue)
    .function("GetExpansionRatio", &vtkAmoebaMinimizer::GetExpansionRatio)
    .function("SetTolerance", &vtkAmoebaMinimizer::SetTolerance)
    .function("GetTolerance", &vtkAmoebaMinimizer::GetTolerance)
    .function("SetParameterTolerance", &vtkAmoebaMinimizer::SetParameterTolerance)
    .function("GetParameterTolerance", &vtkAmoebaMinimizer::GetParameterTolerance)
    .function("SetMaxIterations", &vtkAmoebaMinimizer::SetMaxIterations)
    .function("GetMaxIterations", &vtkAmoebaMinimizer::GetMaxIterations)
    .function("GetIterations", &vtkAmoebaMinimizer::GetIterations)
    .function("GetFunctionEvaluations", &vtkAmoebaMinimizer::GetFunctionEvaluations)
    .function("EvaluateFunction", &vtkAmoebaMinimizer::EvaluateFunction);
}

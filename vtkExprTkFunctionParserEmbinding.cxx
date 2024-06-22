// JavaScript wrapper for vtkExprTkFunctionParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkExprTkFunctionParserEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkExprTkFunctionParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExprTkFunctionParser.h"

EMSCRIPTEN_BINDINGS(vtkCommonMisc_vtkExprTkFunctionParser_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExprTkFunctionParser>(vtkExprTkFunctionParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExprTkFunctionParser_class) {
  emscripten::class_<vtkExprTkFunctionParser, emscripten::base<vtkObject>>("vtkExprTkFunctionParser")
    .smart_ptr<vtkSmartPointer<vtkExprTkFunctionParser>>("vtkSmartPointer<vtkExprTkFunctionParser>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExprTkFunctionParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExprTkFunctionParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExprTkFunctionParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExprTkFunctionParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExprTkFunctionParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExprTkFunctionParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExprTkFunctionParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkExprTkFunctionParser::GetMTime)
    .function("SetFunction", emscripten::optional_override([](vtkExprTkFunctionParser& self, const std::string & arg_0) -> void {  return self.SetFunction( arg_0.c_str());}))
    .function("GetFunction", emscripten::optional_override([](vtkExprTkFunctionParser& self) -> std::string {  return self.GetFunction();}))
    .function("IsScalarResult", &vtkExprTkFunctionParser::IsScalarResult)
    .function("IsVectorResult", &vtkExprTkFunctionParser::IsVectorResult)
    .function("GetScalarResult", &vtkExprTkFunctionParser::GetScalarResult)
    .function("SetScalarVariableValue", emscripten::select_overload<void(vtkExprTkFunctionParser&, const std::string&, double)>([](vtkExprTkFunctionParser& self, const std::string& arg_0, double arg_1) -> void { return self.SetScalarVariableValue( arg_0, arg_1); }))
    .function("SetScalarVariableValue", emscripten::select_overload<void(vtkExprTkFunctionParser&, int, double)>([](vtkExprTkFunctionParser& self, int arg_0, double arg_1) -> void { return self.SetScalarVariableValue( arg_0, arg_1); }))
    .function("GetScalarVariableValue", emscripten::select_overload<double(vtkExprTkFunctionParser&, const std::string&)>([](vtkExprTkFunctionParser& self, const std::string& arg_0) -> double { return self.GetScalarVariableValue( arg_0); }))
    .function("GetScalarVariableValue", emscripten::select_overload<double(vtkExprTkFunctionParser&, int)>([](vtkExprTkFunctionParser& self, int arg_0) -> double { return self.GetScalarVariableValue( arg_0); }))
    .function("SetVectorVariableValue", emscripten::select_overload<void(vtkExprTkFunctionParser&, const std::string&, double, double, double)>([](vtkExprTkFunctionParser& self, const std::string& arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetVectorVariableValue( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetVectorVariableValue", emscripten::select_overload<void(vtkExprTkFunctionParser&, int, double, double, double)>([](vtkExprTkFunctionParser& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetVectorVariableValue( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetNumberOfScalarVariables", &vtkExprTkFunctionParser::GetNumberOfScalarVariables)
    .function("GetScalarVariableIndex", &vtkExprTkFunctionParser::GetScalarVariableIndex)
    .function("GetNumberOfVectorVariables", &vtkExprTkFunctionParser::GetNumberOfVectorVariables)
    .function("GetVectorVariableIndex", &vtkExprTkFunctionParser::GetVectorVariableIndex)
    .function("GetScalarVariableName", &vtkExprTkFunctionParser::GetScalarVariableName)
    .function("GetVectorVariableName", &vtkExprTkFunctionParser::GetVectorVariableName)
    .function("GetScalarVariableNeeded", emscripten::select_overload<bool(vtkExprTkFunctionParser&, int)>([](vtkExprTkFunctionParser& self, int arg_0) -> bool { return self.GetScalarVariableNeeded( arg_0); }))
    .function("GetScalarVariableNeeded", emscripten::select_overload<bool(vtkExprTkFunctionParser&, const std::string&)>([](vtkExprTkFunctionParser& self, const std::string& arg_0) -> bool { return self.GetScalarVariableNeeded( arg_0); }))
    .function("GetVectorVariableNeeded", emscripten::select_overload<bool(vtkExprTkFunctionParser&, int)>([](vtkExprTkFunctionParser& self, int arg_0) -> bool { return self.GetVectorVariableNeeded( arg_0); }))
    .function("GetVectorVariableNeeded", emscripten::select_overload<bool(vtkExprTkFunctionParser&, const std::string&)>([](vtkExprTkFunctionParser& self, const std::string& arg_0) -> bool { return self.GetVectorVariableNeeded( arg_0); }))
    .function("RemoveAllVariables", &vtkExprTkFunctionParser::RemoveAllVariables)
    .function("RemoveScalarVariables", &vtkExprTkFunctionParser::RemoveScalarVariables)
    .function("RemoveVectorVariables", &vtkExprTkFunctionParser::RemoveVectorVariables)
    .function("SetReplaceInvalidValues", &vtkExprTkFunctionParser::SetReplaceInvalidValues)
    .function("GetReplaceInvalidValues", &vtkExprTkFunctionParser::GetReplaceInvalidValues)
    .function("ReplaceInvalidValuesOn", &vtkExprTkFunctionParser::ReplaceInvalidValuesOn)
    .function("ReplaceInvalidValuesOff", &vtkExprTkFunctionParser::ReplaceInvalidValuesOff)
    .function("SetReplacementValue", &vtkExprTkFunctionParser::SetReplacementValue)
    .function("GetReplacementValue", &vtkExprTkFunctionParser::GetReplacementValue)
    .function("InvalidateFunction", &vtkExprTkFunctionParser::InvalidateFunction)
    .class_function("SanitizeName", emscripten::optional_override([]( const std::string & arg_0) -> std::string {  return vtkExprTkFunctionParser::SanitizeName( arg_0.c_str());}));
}

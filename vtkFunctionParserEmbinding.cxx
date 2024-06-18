// JavaScript wrapper for vtkFunctionParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkCommonMisc.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonMisc.js/vtkFunctionParserEmbinding.cxx \
 /home/jmh/github/vtk/Common/Misc/vtkFunctionParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFunctionParser.h"

EMSCRIPTEN_BINDINGS(vtkCommonMisc_vtkFunctionParser_0_1_constants) {
  const struct { const char *name; int value; }
    constants[50] = {
      { "VTK_PARSER_IMMEDIATE", 1 },
      { "VTK_PARSER_UNARY_MINUS", 2 },
      { "VTK_PARSER_UNARY_PLUS", 3 },
      { "VTK_PARSER_ADD", 4 },
      { "VTK_PARSER_SUBTRACT", 5 },
      { "VTK_PARSER_MULTIPLY", 6 },
      { "VTK_PARSER_DIVIDE", 7 },
      { "VTK_PARSER_POWER", 8 },
      { "VTK_PARSER_ABSOLUTE_VALUE", 9 },
      { "VTK_PARSER_EXPONENT", 10 },
      { "VTK_PARSER_CEILING", 11 },
      { "VTK_PARSER_FLOOR", 12 },
      { "VTK_PARSER_LOGARITHM", 13 },
      { "VTK_PARSER_LOGARITHME", 14 },
      { "VTK_PARSER_LOGARITHM10", 15 },
      { "VTK_PARSER_SQUARE_ROOT", 16 },
      { "VTK_PARSER_SINE", 17 },
      { "VTK_PARSER_COSINE", 18 },
      { "VTK_PARSER_TANGENT", 19 },
      { "VTK_PARSER_ARCSINE", 20 },
      { "VTK_PARSER_ARCCOSINE", 21 },
      { "VTK_PARSER_ARCTANGENT", 22 },
      { "VTK_PARSER_HYPERBOLIC_SINE", 23 },
      { "VTK_PARSER_HYPERBOLIC_COSINE", 24 },
      { "VTK_PARSER_HYPERBOLIC_TANGENT", 25 },
      { "VTK_PARSER_MIN", 26 },
      { "VTK_PARSER_MAX", 27 },
      { "VTK_PARSER_SIGN", 29 },
      { "VTK_PARSER_CROSS", 28 },
      { "VTK_PARSER_VECTOR_UNARY_MINUS", 30 },
      { "VTK_PARSER_VECTOR_UNARY_PLUS", 31 },
      { "VTK_PARSER_DOT_PRODUCT", 32 },
      { "VTK_PARSER_VECTOR_ADD", 33 },
      { "VTK_PARSER_VECTOR_SUBTRACT", 34 },
      { "VTK_PARSER_SCALAR_TIMES_VECTOR", 35 },
      { "VTK_PARSER_VECTOR_TIMES_SCALAR", 36 },
      { "VTK_PARSER_VECTOR_OVER_SCALAR", 37 },
      { "VTK_PARSER_MAGNITUDE", 38 },
      { "VTK_PARSER_NORMALIZE", 39 },
      { "VTK_PARSER_IHAT", 40 },
      { "VTK_PARSER_JHAT", 41 },
      { "VTK_PARSER_KHAT", 42 },
      { "VTK_PARSER_IF", 43 },
      { "VTK_PARSER_VECTOR_IF", 44 },
      { "VTK_PARSER_LESS_THAN", 45 },
      { "VTK_PARSER_GREATER_THAN", 46 },
      { "VTK_PARSER_EQUAL_TO", 47 },
      { "VTK_PARSER_AND", 48 },
      { "VTK_PARSER_OR", 49 },
      { "VTK_PARSER_BEGIN_VARIABLES", 50 },
  };
  for (int c = 0; c < 50; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkCommonMisc_vtkFunctionParser_1_1_constants) {
  emscripten::constant("VTK_PARSER_ERROR_RESULT", VTK_FLOAT_MAX);
}
template<> void emscripten::internal::raw_destructor<vtkFunctionParser>(vtkFunctionParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFunctionParser_class) {
  emscripten::class_<vtkFunctionParser, emscripten::base<vtkObject>>("vtkFunctionParser")
    .smart_ptr<vtkSmartPointer<vtkFunctionParser>>("vtkSmartPointer<vtkFunctionParser>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFunctionParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFunctionParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFunctionParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFunctionParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFunctionParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFunctionParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFunctionParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkFunctionParser::GetMTime)
    .function("SetFunction", emscripten::optional_override([](vtkFunctionParser& self, const std::string & arg_0) -> void {  return self.SetFunction( arg_0.c_str());}))
    .function("GetFunction", emscripten::optional_override([](vtkFunctionParser& self) -> std::string {  return self.GetFunction();}))
    .function("IsScalarResult", &vtkFunctionParser::IsScalarResult)
    .function("IsVectorResult", &vtkFunctionParser::IsVectorResult)
    .function("GetScalarResult", &vtkFunctionParser::GetScalarResult)
    .function("SetScalarVariableValue", emscripten::select_overload<void(vtkFunctionParser&, const std::string &, double)>([](vtkFunctionParser& self, const std::string & arg_0, double arg_1) -> void { return self.SetScalarVariableValue( arg_0.c_str(), arg_1); }))
    .function("SetScalarVariableValue", emscripten::select_overload<void(vtkFunctionParser&, const std::string&, double)>([](vtkFunctionParser& self, const std::string& arg_0, double arg_1) -> void { return self.SetScalarVariableValue( arg_0, arg_1); }))
    .function("SetScalarVariableValue", emscripten::select_overload<void(vtkFunctionParser&, int, double)>([](vtkFunctionParser& self, int arg_0, double arg_1) -> void { return self.SetScalarVariableValue( arg_0, arg_1); }))
    .function("GetScalarVariableValue", emscripten::select_overload<double(vtkFunctionParser&, const std::string &)>([](vtkFunctionParser& self, const std::string & arg_0) -> double { return self.GetScalarVariableValue( arg_0.c_str()); }))
    .function("GetScalarVariableValue", emscripten::select_overload<double(vtkFunctionParser&, const std::string&)>([](vtkFunctionParser& self, const std::string& arg_0) -> double { return self.GetScalarVariableValue( arg_0); }))
    .function("GetScalarVariableValue", emscripten::select_overload<double(vtkFunctionParser&, int)>([](vtkFunctionParser& self, int arg_0) -> double { return self.GetScalarVariableValue( arg_0); }))
    .function("SetVectorVariableValue", emscripten::select_overload<void(vtkFunctionParser&, const std::string &, double, double, double)>([](vtkFunctionParser& self, const std::string & arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetVectorVariableValue( arg_0.c_str(), arg_1, arg_2, arg_3); }))
    .function("SetVectorVariableValue", emscripten::select_overload<void(vtkFunctionParser&, const std::string&, double, double, double)>([](vtkFunctionParser& self, const std::string& arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetVectorVariableValue( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetVectorVariableValue", emscripten::select_overload<void(vtkFunctionParser&, int, double, double, double)>([](vtkFunctionParser& self, int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetVectorVariableValue( arg_0, arg_1, arg_2, arg_3); }))
    .function("GetNumberOfScalarVariables", &vtkFunctionParser::GetNumberOfScalarVariables)
    .function("GetScalarVariableIndex", emscripten::select_overload<int(vtkFunctionParser&, const std::string &)>([](vtkFunctionParser& self, const std::string & arg_0) -> int { return self.GetScalarVariableIndex( arg_0.c_str()); }))
    .function("GetScalarVariableIndex", emscripten::select_overload<int(vtkFunctionParser&, const std::string&)>([](vtkFunctionParser& self, const std::string& arg_0) -> int { return self.GetScalarVariableIndex( arg_0); }))
    .function("GetNumberOfVectorVariables", &vtkFunctionParser::GetNumberOfVectorVariables)
    .function("GetVectorVariableIndex", emscripten::select_overload<int(vtkFunctionParser&, const std::string &)>([](vtkFunctionParser& self, const std::string & arg_0) -> int { return self.GetVectorVariableIndex( arg_0.c_str()); }))
    .function("GetVectorVariableIndex", emscripten::select_overload<int(vtkFunctionParser&, const std::string&)>([](vtkFunctionParser& self, const std::string& arg_0) -> int { return self.GetVectorVariableIndex( arg_0); }))
    .function("GetScalarVariableName", emscripten::optional_override([](vtkFunctionParser& self, int arg_0) -> std::string {  return self.GetScalarVariableName( arg_0);}))
    .function("GetVectorVariableName", emscripten::optional_override([](vtkFunctionParser& self, int arg_0) -> std::string {  return self.GetVectorVariableName( arg_0);}))
    .function("GetScalarVariableNeeded", emscripten::select_overload<bool(vtkFunctionParser&, int)>([](vtkFunctionParser& self, int arg_0) -> bool { return self.GetScalarVariableNeeded( arg_0); }))
    .function("GetScalarVariableNeeded", emscripten::select_overload<bool(vtkFunctionParser&, const std::string &)>([](vtkFunctionParser& self, const std::string & arg_0) -> bool { return self.GetScalarVariableNeeded( arg_0.c_str()); }))
    .function("GetScalarVariableNeeded", emscripten::select_overload<bool(vtkFunctionParser&, const std::string&)>([](vtkFunctionParser& self, const std::string& arg_0) -> bool { return self.GetScalarVariableNeeded( arg_0); }))
    .function("GetVectorVariableNeeded", emscripten::select_overload<bool(vtkFunctionParser&, int)>([](vtkFunctionParser& self, int arg_0) -> bool { return self.GetVectorVariableNeeded( arg_0); }))
    .function("GetVectorVariableNeeded", emscripten::select_overload<bool(vtkFunctionParser&, const std::string &)>([](vtkFunctionParser& self, const std::string & arg_0) -> bool { return self.GetVectorVariableNeeded( arg_0.c_str()); }))
    .function("GetVectorVariableNeeded", emscripten::select_overload<bool(vtkFunctionParser&, const std::string&)>([](vtkFunctionParser& self, const std::string& arg_0) -> bool { return self.GetVectorVariableNeeded( arg_0); }))
    .function("RemoveAllVariables", &vtkFunctionParser::RemoveAllVariables)
    .function("RemoveScalarVariables", &vtkFunctionParser::RemoveScalarVariables)
    .function("RemoveVectorVariables", &vtkFunctionParser::RemoveVectorVariables)
    .function("SetReplaceInvalidValues", &vtkFunctionParser::SetReplaceInvalidValues)
    .function("GetReplaceInvalidValues", &vtkFunctionParser::GetReplaceInvalidValues)
    .function("ReplaceInvalidValuesOn", &vtkFunctionParser::ReplaceInvalidValuesOn)
    .function("ReplaceInvalidValuesOff", &vtkFunctionParser::ReplaceInvalidValuesOff)
    .function("SetReplacementValue", &vtkFunctionParser::SetReplacementValue)
    .function("GetReplacementValue", &vtkFunctionParser::GetReplacementValue)
    .function("InvalidateFunction", &vtkFunctionParser::InvalidateFunction);
}

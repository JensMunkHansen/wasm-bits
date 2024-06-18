// JavaScript wrapper for vtkArrayCalculator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkArrayCalculatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkArrayCalculator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTuple.h"
#include "vtkDataSet.h"
#include "vtkArrayCalculator.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkArrayCalculator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkArrayCalculator>(vtkArrayCalculator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayCalculator_class) {
  using FunctionParserTypes=vtkArrayCalculator::FunctionParserTypes;
  emscripten::class_<vtkArrayCalculator, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkArrayCalculator")
    .smart_ptr<vtkSmartPointer<vtkArrayCalculator>>("vtkSmartPointer<vtkArrayCalculator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayCalculator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayCalculator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayCalculator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayCalculator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayCalculator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFunction", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0) -> void {  return self.SetFunction( arg_0.c_str());}))
    .function("GetFunction", emscripten::optional_override([](vtkArrayCalculator& self) -> std::string {  return self.GetFunction();}))
    .function("AddScalarArrayName", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0, int arg_1) -> void {  return self.AddScalarArrayName( arg_0.c_str(), arg_1);}))
    .function("AddVectorArrayName", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void {  return self.AddVectorArrayName( arg_0.c_str(), arg_1, arg_2, arg_3);}))
    .function("AddScalarVariable", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0, const std::string & arg_1, int arg_2) -> void {  return self.AddScalarVariable( arg_0.c_str(), arg_1.c_str(), arg_2);}))
    .function("AddVectorVariable", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4) -> void {  return self.AddVectorVariable( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3, arg_4);}))
    .function("AddCoordinateScalarVariable", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0, int arg_1) -> void {  return self.AddCoordinateScalarVariable( arg_0.c_str(), arg_1);}))
    .function("AddCoordinateVectorVariable", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0, int arg_1, int arg_2, int arg_3) -> void {  return self.AddCoordinateVectorVariable( arg_0.c_str(), arg_1, arg_2, arg_3);}))
    .function("SetResultArrayName", emscripten::optional_override([](vtkArrayCalculator& self, const std::string & arg_0) -> void {  return self.SetResultArrayName( arg_0.c_str());}))
    .function("GetResultArrayName", emscripten::optional_override([](vtkArrayCalculator& self) -> std::string {  return self.GetResultArrayName();}))
    .function("GetResultArrayType", &vtkArrayCalculator::GetResultArrayType)
    .function("SetResultArrayType", &vtkArrayCalculator::SetResultArrayType)
    .function("GetCoordinateResults", &vtkArrayCalculator::GetCoordinateResults)
    .function("SetCoordinateResults", &vtkArrayCalculator::SetCoordinateResults)
    .function("CoordinateResultsOn", &vtkArrayCalculator::CoordinateResultsOn)
    .function("CoordinateResultsOff", &vtkArrayCalculator::CoordinateResultsOff)
    .function("GetResultNormals", &vtkArrayCalculator::GetResultNormals)
    .function("SetResultNormals", &vtkArrayCalculator::SetResultNormals)
    .function("ResultNormalsOn", &vtkArrayCalculator::ResultNormalsOn)
    .function("ResultNormalsOff", &vtkArrayCalculator::ResultNormalsOff)
    .function("GetResultTCoords", &vtkArrayCalculator::GetResultTCoords)
    .function("SetResultTCoords", &vtkArrayCalculator::SetResultTCoords)
    .function("ResultTCoordsOn", &vtkArrayCalculator::ResultTCoordsOn)
    .function("ResultTCoordsOff", &vtkArrayCalculator::ResultTCoordsOff)
    .function("GetAttributeTypeAsString", emscripten::optional_override([](vtkArrayCalculator& self) -> std::string {  return self.GetAttributeTypeAsString();}))
    .function("SetAttributeType", &vtkArrayCalculator::SetAttributeType)
    .function("GetAttributeType", &vtkArrayCalculator::GetAttributeType)
    .function("SetAttributeTypeToDefault", &vtkArrayCalculator::SetAttributeTypeToDefault)
    .function("SetAttributeTypeToPointData", &vtkArrayCalculator::SetAttributeTypeToPointData)
    .function("SetAttributeTypeToCellData", &vtkArrayCalculator::SetAttributeTypeToCellData)
    .function("SetAttributeTypeToEdgeData", &vtkArrayCalculator::SetAttributeTypeToEdgeData)
    .function("SetAttributeTypeToVertexData", &vtkArrayCalculator::SetAttributeTypeToVertexData)
    .function("SetAttributeTypeToRowData", &vtkArrayCalculator::SetAttributeTypeToRowData)
    .function("RemoveAllVariables", &vtkArrayCalculator::RemoveAllVariables)
    .function("RemoveScalarVariables", &vtkArrayCalculator::RemoveScalarVariables)
    .function("RemoveVectorVariables", &vtkArrayCalculator::RemoveVectorVariables)
    .function("RemoveCoordinateScalarVariables", &vtkArrayCalculator::RemoveCoordinateScalarVariables)
    .function("RemoveCoordinateVectorVariables", &vtkArrayCalculator::RemoveCoordinateVectorVariables)
    .function("GetScalarArrayNames", &vtkArrayCalculator::GetScalarArrayNames)
    .function("GetScalarArrayName", &vtkArrayCalculator::GetScalarArrayName)
    .function("GetVectorArrayNames", &vtkArrayCalculator::GetVectorArrayNames)
    .function("GetVectorArrayName", &vtkArrayCalculator::GetVectorArrayName)
    .function("GetScalarVariableNames", &vtkArrayCalculator::GetScalarVariableNames)
    .function("GetScalarVariableName", &vtkArrayCalculator::GetScalarVariableName)
    .function("GetVectorVariableNames", &vtkArrayCalculator::GetVectorVariableNames)
    .function("GetVectorVariableName", &vtkArrayCalculator::GetVectorVariableName)
    .function("GetSelectedScalarComponents", &vtkArrayCalculator::GetSelectedScalarComponents)
    .function("GetSelectedScalarComponent", &vtkArrayCalculator::GetSelectedScalarComponent)
    .function("GetSelectedVectorComponents", emscripten::select_overload<vtkTuple<int, 3>(vtkArrayCalculator&, int)>([](vtkArrayCalculator& self, int arg_0) -> vtkTuple<int, 3> { return self.GetSelectedVectorComponents( arg_0); }))
    .function("GetNumberOfScalarArrays", &vtkArrayCalculator::GetNumberOfScalarArrays)
    .function("GetNumberOfVectorArrays", &vtkArrayCalculator::GetNumberOfVectorArrays)
    .function("SetReplaceInvalidValues", &vtkArrayCalculator::SetReplaceInvalidValues)
    .function("GetReplaceInvalidValues", &vtkArrayCalculator::GetReplaceInvalidValues)
    .function("ReplaceInvalidValuesOn", &vtkArrayCalculator::ReplaceInvalidValuesOn)
    .function("ReplaceInvalidValuesOff", &vtkArrayCalculator::ReplaceInvalidValuesOff)
    .function("SetReplacementValue", &vtkArrayCalculator::SetReplacementValue)
    .function("GetReplacementValue", &vtkArrayCalculator::GetReplacementValue)
    .function("SetIgnoreMissingArrays", &vtkArrayCalculator::SetIgnoreMissingArrays)
    .function("GetIgnoreMissingArrays", &vtkArrayCalculator::GetIgnoreMissingArrays)
    .function("IgnoreMissingArraysOn", &vtkArrayCalculator::IgnoreMissingArraysOn)
    .function("IgnoreMissingArraysOff", &vtkArrayCalculator::IgnoreMissingArraysOff)
    .function("SetFunctionParserType", &vtkArrayCalculator::SetFunctionParserType)
    .function("SetFunctionParserTypeToFunctionParser", &vtkArrayCalculator::SetFunctionParserTypeToFunctionParser)
    .function("SetFunctionParserTypeToExprTkFunctionParser", &vtkArrayCalculator::SetFunctionParserTypeToExprTkFunctionParser)
    .function("GetFunctionParserType", &vtkArrayCalculator::GetFunctionParserType)
    .function("GetDataSetOutput", &vtkArrayCalculator::GetDataSetOutput, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkArrayCalculator_0_2_constants) {
  emscripten::constant("DEFAULT_ATTRIBUTE_TYPE", -1);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkArrayCalculator_1_2_constants) {
    typedef vtkArrayCalculator::FunctionParserTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkArrayCalculator_FunctionParserTypes_FunctionParser", vtkArrayCalculator::FunctionParser },
      { "vtkArrayCalculator_FunctionParserTypes_ExprTkFunctionParser", vtkArrayCalculator::ExprTkFunctionParser },
      { "vtkArrayCalculator_FunctionParserTypes_NumberOfFunctionParserTypes", vtkArrayCalculator::NumberOfFunctionParserTypes },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

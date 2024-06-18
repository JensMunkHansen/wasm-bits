// JavaScript wrapper for vtkStatisticsAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkStatisticsAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkStatisticsAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkStringArray.h"
#include "vtkStdString.h"
#include "vtkDataObjectCollection.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkStatisticsAlgorithm.h"

EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkStatisticsAlgorithm_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkStatisticsAlgorithm>(vtkStatisticsAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStatisticsAlgorithm_class) {
  using InputPorts=vtkStatisticsAlgorithm::InputPorts;
  using OutputIndices=vtkStatisticsAlgorithm::OutputIndices;
  emscripten::class_<vtkStatisticsAlgorithm, emscripten::base<vtkTableAlgorithm>>("vtkStatisticsAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStatisticsAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStatisticsAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStatisticsAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStatisticsAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStatisticsAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStatisticsAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLearnOptionParameterConnection", &vtkStatisticsAlgorithm::SetLearnOptionParameterConnection, emscripten::allow_raw_pointers())
    .function("SetLearnOptionParameters", &vtkStatisticsAlgorithm::SetLearnOptionParameters, emscripten::allow_raw_pointers())
    .function("SetInputModelConnection", &vtkStatisticsAlgorithm::SetInputModelConnection, emscripten::allow_raw_pointers())
    .function("SetInputModel", &vtkStatisticsAlgorithm::SetInputModel, emscripten::allow_raw_pointers())
    .function("SetLearnOption", &vtkStatisticsAlgorithm::SetLearnOption)
    .function("GetLearnOption", &vtkStatisticsAlgorithm::GetLearnOption)
    .function("SetDeriveOption", &vtkStatisticsAlgorithm::SetDeriveOption)
    .function("GetDeriveOption", &vtkStatisticsAlgorithm::GetDeriveOption)
    .function("SetAssessOption", &vtkStatisticsAlgorithm::SetAssessOption)
    .function("GetAssessOption", &vtkStatisticsAlgorithm::GetAssessOption)
    .function("SetTestOption", &vtkStatisticsAlgorithm::SetTestOption)
    .function("GetTestOption", &vtkStatisticsAlgorithm::GetTestOption)
    .function("SetNumberOfPrimaryTables", &vtkStatisticsAlgorithm::SetNumberOfPrimaryTables)
    .function("GetNumberOfPrimaryTables", &vtkStatisticsAlgorithm::GetNumberOfPrimaryTables)
    .function("SetAssessNames", &vtkStatisticsAlgorithm::SetAssessNames, emscripten::allow_raw_pointers())
    .function("GetAssessNames", &vtkStatisticsAlgorithm::GetAssessNames, emscripten::allow_raw_pointers())
    .function("SetColumnStatus", emscripten::optional_override([](vtkStatisticsAlgorithm& self, const std::string & arg_0, int arg_1) -> void {  return self.SetColumnStatus( arg_0.c_str(), arg_1);}))
    .function("ResetAllColumnStates", &vtkStatisticsAlgorithm::ResetAllColumnStates)
    .function("RequestSelectedColumns", &vtkStatisticsAlgorithm::RequestSelectedColumns)
    .function("ResetRequests", &vtkStatisticsAlgorithm::ResetRequests)
    .function("GetNumberOfRequests", &vtkStatisticsAlgorithm::GetNumberOfRequests)
    .function("GetNumberOfColumnsForRequest", &vtkStatisticsAlgorithm::GetNumberOfColumnsForRequest)
    .function("GetColumnForRequest", emscripten::select_overload<std::string(vtkStatisticsAlgorithm&, int, int)>([](vtkStatisticsAlgorithm& self, int arg_0, int arg_1) -> std::string { return self.GetColumnForRequest( arg_0, arg_1); }))
    .function("AddColumn", emscripten::optional_override([](vtkStatisticsAlgorithm& self, const std::string & arg_0) -> void {  return self.AddColumn( arg_0.c_str());}))
    .function("AddColumnPair", emscripten::optional_override([](vtkStatisticsAlgorithm& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddColumnPair( arg_0.c_str(), arg_1.c_str());}))
    .function("SetParameter", emscripten::optional_override([](vtkStatisticsAlgorithm& self, const std::string & arg_0, int arg_1, vtkVariant arg_2) -> bool {  return self.SetParameter( arg_0.c_str(), arg_1, arg_2);}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkStatisticsAlgorithm_0_2_constants) {
    typedef vtkStatisticsAlgorithm::InputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkStatisticsAlgorithm_InputPorts_INPUT_DATA", vtkStatisticsAlgorithm::INPUT_DATA },
      { "vtkStatisticsAlgorithm_InputPorts_LEARN_PARAMETERS", vtkStatisticsAlgorithm::LEARN_PARAMETERS },
      { "vtkStatisticsAlgorithm_InputPorts_INPUT_MODEL", vtkStatisticsAlgorithm::INPUT_MODEL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkStatisticsAlgorithm_1_2_constants) {
    typedef vtkStatisticsAlgorithm::OutputIndices cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkStatisticsAlgorithm_OutputIndices_OUTPUT_DATA", vtkStatisticsAlgorithm::OUTPUT_DATA },
      { "vtkStatisticsAlgorithm_OutputIndices_OUTPUT_MODEL", vtkStatisticsAlgorithm::OUTPUT_MODEL },
      { "vtkStatisticsAlgorithm_OutputIndices_OUTPUT_TEST", vtkStatisticsAlgorithm::OUTPUT_TEST },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

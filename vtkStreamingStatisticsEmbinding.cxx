// JavaScript wrapper for vtkStreamingStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkStreamingStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkStreamingStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStatisticsAlgorithm.h"
#include "vtkStreamingStatistics.h"

EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkStreamingStatistics_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkStreamingStatistics>(vtkStreamingStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStreamingStatistics_class) {
  using InputPorts=vtkStreamingStatistics::InputPorts;
  using OutputIndices=vtkStreamingStatistics::OutputIndices;
  emscripten::class_<vtkStreamingStatistics, emscripten::base<vtkTableAlgorithm>>("vtkStreamingStatistics")
    .smart_ptr<vtkSmartPointer<vtkStreamingStatistics>>("vtkSmartPointer<vtkStreamingStatistics>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStreamingStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamingStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStreamingStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStreamingStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStreamingStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamingStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStreamingStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStatisticsAlgorithm", &vtkStreamingStatistics::SetStatisticsAlgorithm, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkStreamingStatistics_0_2_constants) {
    typedef vtkStreamingStatistics::InputPorts cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkStreamingStatistics_InputPorts_INPUT_DATA", vtkStreamingStatistics::INPUT_DATA },
      { "vtkStreamingStatistics_InputPorts_LEARN_PARAMETERS", vtkStreamingStatistics::LEARN_PARAMETERS },
      { "vtkStreamingStatistics_InputPorts_INPUT_MODEL", vtkStreamingStatistics::INPUT_MODEL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkStreamingStatistics_1_2_constants) {
    typedef vtkStreamingStatistics::OutputIndices cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkStreamingStatistics_OutputIndices_OUTPUT_DATA", vtkStreamingStatistics::OUTPUT_DATA },
      { "vtkStreamingStatistics_OutputIndices_OUTPUT_MODEL", vtkStreamingStatistics::OUTPUT_MODEL },
      { "vtkStreamingStatistics_OutputIndices_OUTPUT_TEST", vtkStreamingStatistics::OUTPUT_TEST },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

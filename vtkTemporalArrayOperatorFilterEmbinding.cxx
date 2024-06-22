// JavaScript wrapper for vtkTemporalArrayOperatorFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTemporalArrayOperatorFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTemporalArrayOperatorFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalArrayOperatorFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkTemporalArrayOperatorFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTemporalArrayOperatorFilter>(vtkTemporalArrayOperatorFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalArrayOperatorFilter_class) {
  using OperatorType=vtkTemporalArrayOperatorFilter::OperatorType;
  emscripten::class_<vtkTemporalArrayOperatorFilter, emscripten::base<vtkMultiTimeStepAlgorithm>>("vtkTemporalArrayOperatorFilter")
    .smart_ptr<vtkSmartPointer<vtkTemporalArrayOperatorFilter>>("vtkSmartPointer<vtkTemporalArrayOperatorFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalArrayOperatorFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalArrayOperatorFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalArrayOperatorFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalArrayOperatorFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalArrayOperatorFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalArrayOperatorFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalArrayOperatorFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOperator", &vtkTemporalArrayOperatorFilter::SetOperator)
    .function("GetOperator", &vtkTemporalArrayOperatorFilter::GetOperator)
    .function("SetFirstTimeStepIndex", &vtkTemporalArrayOperatorFilter::SetFirstTimeStepIndex)
    .function("GetFirstTimeStepIndex", &vtkTemporalArrayOperatorFilter::GetFirstTimeStepIndex)
    .function("SetSecondTimeStepIndex", &vtkTemporalArrayOperatorFilter::SetSecondTimeStepIndex)
    .function("GetSecondTimeStepIndex", &vtkTemporalArrayOperatorFilter::GetSecondTimeStepIndex)
    .function("SetOutputArrayNameSuffix", emscripten::optional_override([](vtkTemporalArrayOperatorFilter& self, const std::string & arg_0) -> void {  return self.SetOutputArrayNameSuffix( arg_0.c_str());}))
    .function("GetOutputArrayNameSuffix", emscripten::optional_override([](vtkTemporalArrayOperatorFilter& self) -> std::string {  return self.GetOutputArrayNameSuffix();}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkTemporalArrayOperatorFilter_0_2_constants) {
    typedef vtkTemporalArrayOperatorFilter::OperatorType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkTemporalArrayOperatorFilter_OperatorType_ADD", vtkTemporalArrayOperatorFilter::ADD },
      { "vtkTemporalArrayOperatorFilter_OperatorType_SUB", vtkTemporalArrayOperatorFilter::SUB },
      { "vtkTemporalArrayOperatorFilter_OperatorType_MUL", vtkTemporalArrayOperatorFilter::MUL },
      { "vtkTemporalArrayOperatorFilter_OperatorType_DIV", vtkTemporalArrayOperatorFilter::DIV },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

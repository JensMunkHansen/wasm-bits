// JavaScript wrapper for vtkTemporalInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTemporalInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTemporalInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalInterpolator.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHybrid_vtkTemporalInterpolator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTemporalInterpolator>(vtkTemporalInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalInterpolator_class) {
  emscripten::class_<vtkTemporalInterpolator, emscripten::base<vtkMultiTimeStepAlgorithm>>("vtkTemporalInterpolator")
    .smart_ptr<vtkSmartPointer<vtkTemporalInterpolator>>("vtkSmartPointer<vtkTemporalInterpolator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDiscreteTimeStepInterval", &vtkTemporalInterpolator::SetDiscreteTimeStepInterval)
    .function("GetDiscreteTimeStepInterval", &vtkTemporalInterpolator::GetDiscreteTimeStepInterval)
    .function("SetResampleFactor", &vtkTemporalInterpolator::SetResampleFactor)
    .function("GetResampleFactor", &vtkTemporalInterpolator::GetResampleFactor)
    .function("SetCacheData", &vtkTemporalInterpolator::SetCacheData)
    .function("GetCacheData", &vtkTemporalInterpolator::GetCacheData);
}

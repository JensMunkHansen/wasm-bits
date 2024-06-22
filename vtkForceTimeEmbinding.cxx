// JavaScript wrapper for vtkForceTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkForceTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkForceTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkForceTime.h"

template<> void emscripten::internal::raw_destructor<vtkForceTime>(vtkForceTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkForceTime_class) {
  emscripten::class_<vtkForceTime, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkForceTime")
    .smart_ptr<vtkSmartPointer<vtkForceTime>>("vtkSmartPointer<vtkForceTime>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkForceTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForceTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkForceTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkForceTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkForceTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForceTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkForceTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetForcedTime", &vtkForceTime::SetForcedTime)
    .function("GetForcedTime", &vtkForceTime::GetForcedTime)
    .function("SetIgnorePipelineTime", &vtkForceTime::SetIgnorePipelineTime)
    .function("GetIgnorePipelineTime", &vtkForceTime::GetIgnorePipelineTime)
    .function("IgnorePipelineTimeOn", &vtkForceTime::IgnorePipelineTimeOn)
    .function("IgnorePipelineTimeOff", &vtkForceTime::IgnorePipelineTimeOff);
}

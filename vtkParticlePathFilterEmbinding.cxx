// JavaScript wrapper for vtkParticlePathFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkParticlePathFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkParticlePathFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkParticlePathFilter.h"

template<> void emscripten::internal::raw_destructor<vtkParticlePathFilter>(vtkParticlePathFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParticlePathFilter_class) {
  emscripten::class_<vtkParticlePathFilter, emscripten::base<vtkParticleTracerBase>>("vtkParticlePathFilter")
    .smart_ptr<vtkSmartPointer<vtkParticlePathFilter>>("vtkSmartPointer<vtkParticlePathFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParticlePathFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticlePathFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParticlePathFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParticlePathFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParticlePathFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticlePathFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParticlePathFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

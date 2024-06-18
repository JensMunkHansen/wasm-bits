// JavaScript wrapper for vtkParticleTracer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkParticleTracerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkParticleTracer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParticleTracer.h"

template<> void emscripten::internal::raw_destructor<vtkParticleTracer>(vtkParticleTracer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParticleTracer_class) {
  emscripten::class_<vtkParticleTracer, emscripten::base<vtkParticleTracerBase>>("vtkParticleTracer")
    .smart_ptr<vtkSmartPointer<vtkParticleTracer>>("vtkSmartPointer<vtkParticleTracer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParticleTracer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticleTracer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParticleTracer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParticleTracer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParticleTracer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParticleTracer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParticleTracer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

// JavaScript wrapper for vtkPoissonDiskSampler with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPoissonDiskSamplerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPoissonDiskSampler.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkPoissonDiskSampler.h"

template<> void emscripten::internal::raw_destructor<vtkPoissonDiskSampler>(vtkPoissonDiskSampler * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPoissonDiskSampler_class) {
  emscripten::class_<vtkPoissonDiskSampler, emscripten::base<vtkPointSetAlgorithm>>("vtkPoissonDiskSampler")
    .smart_ptr<vtkSmartPointer<vtkPoissonDiskSampler>>("vtkSmartPointer<vtkPoissonDiskSampler>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPoissonDiskSampler>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPoissonDiskSampler::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPoissonDiskSampler& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPoissonDiskSampler::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPoissonDiskSampler::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPoissonDiskSampler::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPoissonDiskSampler& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkPoissonDiskSampler::SetRadius)
    .function("GetRadius", &vtkPoissonDiskSampler::GetRadius)
    .function("SetLocator", &vtkPoissonDiskSampler::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkPoissonDiskSampler::GetLocator, emscripten::allow_raw_pointers());
}

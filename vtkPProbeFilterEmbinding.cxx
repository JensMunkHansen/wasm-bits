// JavaScript wrapper for vtkPProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPProbeFilter>(vtkPProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPProbeFilter_class) {
  emscripten::class_<vtkPProbeFilter, emscripten::base<vtkCompositeDataProbeFilter>>("vtkPProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkPProbeFilter>>("vtkSmartPointer<vtkPProbeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPProbeFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPProbeFilter::GetController, emscripten::allow_raw_pointers());
}

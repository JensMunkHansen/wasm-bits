// JavaScript wrapper for vtkPHyperTreeGridProbeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPHyperTreeGridProbeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPHyperTreeGridProbeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPHyperTreeGridProbeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPHyperTreeGridProbeFilter>(vtkPHyperTreeGridProbeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPHyperTreeGridProbeFilter_class) {
  emscripten::class_<vtkPHyperTreeGridProbeFilter, emscripten::base<vtkHyperTreeGridProbeFilter>>("vtkPHyperTreeGridProbeFilter")
    .smart_ptr<vtkSmartPointer<vtkPHyperTreeGridProbeFilter>>("vtkSmartPointer<vtkPHyperTreeGridProbeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPHyperTreeGridProbeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPHyperTreeGridProbeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPHyperTreeGridProbeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPHyperTreeGridProbeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPHyperTreeGridProbeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPHyperTreeGridProbeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPHyperTreeGridProbeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPHyperTreeGridProbeFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPHyperTreeGridProbeFilter::GetController, emscripten::allow_raw_pointers());
}

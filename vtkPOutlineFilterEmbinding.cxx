// JavaScript wrapper for vtkPOutlineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPOutlineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPOutlineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPOutlineFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPOutlineFilter>(vtkPOutlineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPOutlineFilter_class) {
  emscripten::class_<vtkPOutlineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkPOutlineFilter")
    .smart_ptr<vtkSmartPointer<vtkPOutlineFilter>>("vtkSmartPointer<vtkPOutlineFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPOutlineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPOutlineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPOutlineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPOutlineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPOutlineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPOutlineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPOutlineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPOutlineFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPOutlineFilter::GetController, emscripten::allow_raw_pointers());
}

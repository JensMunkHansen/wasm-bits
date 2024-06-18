// JavaScript wrapper for vtkRectilinearGridOutlineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkRectilinearGridOutlineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkRectilinearGridOutlineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGridOutlineFilter.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridOutlineFilter>(vtkRectilinearGridOutlineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridOutlineFilter_class) {
  emscripten::class_<vtkRectilinearGridOutlineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkRectilinearGridOutlineFilter")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridOutlineFilter>>("vtkSmartPointer<vtkRectilinearGridOutlineFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRectilinearGridOutlineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridOutlineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridOutlineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridOutlineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridOutlineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridOutlineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridOutlineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

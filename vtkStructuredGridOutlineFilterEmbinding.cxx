// JavaScript wrapper for vtkStructuredGridOutlineFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStructuredGridOutlineFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStructuredGridOutlineFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGridOutlineFilter.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridOutlineFilter>(vtkStructuredGridOutlineFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridOutlineFilter_class) {
  emscripten::class_<vtkStructuredGridOutlineFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkStructuredGridOutlineFilter")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridOutlineFilter>>("vtkSmartPointer<vtkStructuredGridOutlineFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredGridOutlineFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridOutlineFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridOutlineFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridOutlineFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridOutlineFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridOutlineFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridOutlineFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

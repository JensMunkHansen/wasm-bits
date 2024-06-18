// JavaScript wrapper for vtkSimpleElevationFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSimpleElevationFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSimpleElevationFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSimpleElevationFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSimpleElevationFilter>(vtkSimpleElevationFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSimpleElevationFilter_class) {
  emscripten::class_<vtkSimpleElevationFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkSimpleElevationFilter")
    .smart_ptr<vtkSmartPointer<vtkSimpleElevationFilter>>("vtkSmartPointer<vtkSimpleElevationFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSimpleElevationFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleElevationFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSimpleElevationFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSimpleElevationFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSimpleElevationFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSimpleElevationFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSimpleElevationFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVector", emscripten::select_overload<void(vtkSimpleElevationFilter&, double, double, double)>([](vtkSimpleElevationFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetVector( arg_0, arg_1, arg_2); }));
}

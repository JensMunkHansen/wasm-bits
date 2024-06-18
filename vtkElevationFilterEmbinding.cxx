// JavaScript wrapper for vtkElevationFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkElevationFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkElevationFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkElevationFilter.h"

template<> void emscripten::internal::raw_destructor<vtkElevationFilter>(vtkElevationFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkElevationFilter_class) {
  emscripten::class_<vtkElevationFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkElevationFilter")
    .smart_ptr<vtkSmartPointer<vtkElevationFilter>>("vtkSmartPointer<vtkElevationFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkElevationFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkElevationFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkElevationFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkElevationFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkElevationFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkElevationFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkElevationFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLowPoint", emscripten::select_overload<void(vtkElevationFilter&, double, double, double)>([](vtkElevationFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLowPoint( arg_0, arg_1, arg_2); }))
    .function("SetHighPoint", emscripten::select_overload<void(vtkElevationFilter&, double, double, double)>([](vtkElevationFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetHighPoint( arg_0, arg_1, arg_2); }))
    .function("SetScalarRange", emscripten::select_overload<void(vtkElevationFilter&, double, double)>([](vtkElevationFilter& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }));
}

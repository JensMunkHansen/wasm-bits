// JavaScript wrapper for vtkPointOccupancyFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPointOccupancyFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPointOccupancyFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointOccupancyFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPointOccupancyFilter>(vtkPointOccupancyFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointOccupancyFilter_class) {
  emscripten::class_<vtkPointOccupancyFilter, emscripten::base<vtkImageAlgorithm>>("vtkPointOccupancyFilter")
    .smart_ptr<vtkSmartPointer<vtkPointOccupancyFilter>>("vtkSmartPointer<vtkPointOccupancyFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointOccupancyFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointOccupancyFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointOccupancyFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointOccupancyFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointOccupancyFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointOccupancyFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointOccupancyFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSampleDimensions", emscripten::select_overload<void(vtkPointOccupancyFilter&, int, int, int)>([](vtkPointOccupancyFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleDimensions( arg_0, arg_1, arg_2); }))
    .function("SetModelBounds", emscripten::select_overload<void(vtkPointOccupancyFilter&, double, double, double, double, double, double)>([](vtkPointOccupancyFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetModelBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetEmptyValue", &vtkPointOccupancyFilter::SetEmptyValue)
    .function("GetEmptyValue", &vtkPointOccupancyFilter::GetEmptyValue)
    .function("SetOccupiedValue", &vtkPointOccupancyFilter::SetOccupiedValue)
    .function("GetOccupiedValue", &vtkPointOccupancyFilter::GetOccupiedValue);
}

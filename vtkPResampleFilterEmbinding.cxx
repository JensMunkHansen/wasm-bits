// JavaScript wrapper for vtkPResampleFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPResampleFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPResampleFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPResampleFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPResampleFilter>(vtkPResampleFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPResampleFilter_class) {
  emscripten::class_<vtkPResampleFilter, emscripten::base<vtkImageAlgorithm>>("vtkPResampleFilter")
    .smart_ptr<vtkSmartPointer<vtkPResampleFilter>>("vtkSmartPointer<vtkPResampleFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPResampleFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPResampleFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPResampleFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPResampleFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPResampleFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPResampleFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPResampleFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPResampleFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPResampleFilter::GetController, emscripten::allow_raw_pointers())
    .function("SetUseInputBounds", &vtkPResampleFilter::SetUseInputBounds)
    .function("GetUseInputBounds", &vtkPResampleFilter::GetUseInputBounds)
    .function("UseInputBoundsOn", &vtkPResampleFilter::UseInputBoundsOn)
    .function("UseInputBoundsOff", &vtkPResampleFilter::UseInputBoundsOff)
    .function("SetCustomSamplingBounds", emscripten::select_overload<void(vtkPResampleFilter&, double, double, double, double, double, double)>([](vtkPResampleFilter& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetCustomSamplingBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSamplingDimension", emscripten::select_overload<void(vtkPResampleFilter&, int, int, int)>([](vtkPResampleFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSamplingDimension( arg_0, arg_1, arg_2); }));
}

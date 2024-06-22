// JavaScript wrapper for vtkAlignImageDataSetFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkAlignImageDataSetFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkAlignImageDataSetFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkAlignImageDataSetFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAlignImageDataSetFilter>(vtkAlignImageDataSetFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAlignImageDataSetFilter_class) {
  emscripten::class_<vtkAlignImageDataSetFilter, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkAlignImageDataSetFilter")
    .smart_ptr<vtkSmartPointer<vtkAlignImageDataSetFilter>>("vtkSmartPointer<vtkAlignImageDataSetFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAlignImageDataSetFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAlignImageDataSetFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAlignImageDataSetFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAlignImageDataSetFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAlignImageDataSetFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAlignImageDataSetFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAlignImageDataSetFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkAlignImageDataSetFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAlignImageDataSetFilter::GetController, emscripten::allow_raw_pointers())
    .function("SetMinimumExtent", emscripten::select_overload<void(vtkAlignImageDataSetFilter&, int, int, int)>([](vtkAlignImageDataSetFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetMinimumExtent( arg_0, arg_1, arg_2); }));
}

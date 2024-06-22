// JavaScript wrapper for vtkMultiBlockMergeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMultiBlockMergeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMultiBlockMergeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkMultiBlockMergeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockMergeFilter>(vtkMultiBlockMergeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockMergeFilter_class) {
  emscripten::class_<vtkMultiBlockMergeFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkMultiBlockMergeFilter")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockMergeFilter>>("vtkSmartPointer<vtkMultiBlockMergeFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMultiBlockMergeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockMergeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockMergeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockMergeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockMergeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockMergeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockMergeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddInputData", emscripten::select_overload<void(vtkMultiBlockMergeFilter&, vtkDataObject*)>([](vtkMultiBlockMergeFilter& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkMultiBlockMergeFilter&, int, vtkDataObject*)>([](vtkMultiBlockMergeFilter& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}

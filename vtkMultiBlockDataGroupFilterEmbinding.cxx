// JavaScript wrapper for vtkMultiBlockDataGroupFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkMultiBlockDataGroupFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkMultiBlockDataGroupFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkMultiBlockDataGroupFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockDataGroupFilter>(vtkMultiBlockDataGroupFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockDataGroupFilter_class) {
  emscripten::class_<vtkMultiBlockDataGroupFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkMultiBlockDataGroupFilter")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockDataGroupFilter>>("vtkSmartPointer<vtkMultiBlockDataGroupFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiBlockDataGroupFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockDataGroupFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockDataGroupFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockDataGroupFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockDataGroupFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockDataGroupFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockDataGroupFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddInputData", emscripten::select_overload<void(vtkMultiBlockDataGroupFilter&, vtkDataObject*)>([](vtkMultiBlockDataGroupFilter& self, vtkDataObject* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("AddInputData", emscripten::select_overload<void(vtkMultiBlockDataGroupFilter&, int, vtkDataObject*)>([](vtkMultiBlockDataGroupFilter& self, int arg_0, vtkDataObject* arg_1) -> void { return self.AddInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
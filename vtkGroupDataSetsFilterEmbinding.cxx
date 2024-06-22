// JavaScript wrapper for vtkGroupDataSetsFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkGroupDataSetsFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkGroupDataSetsFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGroupDataSetsFilter.h"

template<> void emscripten::internal::raw_destructor<vtkGroupDataSetsFilter>(vtkGroupDataSetsFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGroupDataSetsFilter_class) {
  emscripten::class_<vtkGroupDataSetsFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkGroupDataSetsFilter")
    .smart_ptr<vtkSmartPointer<vtkGroupDataSetsFilter>>("vtkSmartPointer<vtkGroupDataSetsFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGroupDataSetsFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGroupDataSetsFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGroupDataSetsFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGroupDataSetsFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGroupDataSetsFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGroupDataSetsFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGroupDataSetsFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputType", &vtkGroupDataSetsFilter::SetOutputType)
    .function("GetOutputType", &vtkGroupDataSetsFilter::GetOutputType)
    .function("SetOutputTypeToPartitionedDataSet", &vtkGroupDataSetsFilter::SetOutputTypeToPartitionedDataSet)
    .function("SetOutputTypeToPartitionedDataSetCollection", &vtkGroupDataSetsFilter::SetOutputTypeToPartitionedDataSetCollection)
    .function("SetOutputTypeToMultiBlockDataSet", &vtkGroupDataSetsFilter::SetOutputTypeToMultiBlockDataSet)
    .function("SetInputName", emscripten::optional_override([](vtkGroupDataSetsFilter& self, int arg_0, const std::string & arg_1) -> void {  return self.SetInputName( arg_0, arg_1.c_str());}))
    .function("GetInputName", emscripten::optional_override([](vtkGroupDataSetsFilter& self, int arg_0) -> std::string {  return self.GetInputName( arg_0);}))
    .function("ClearInputNames", &vtkGroupDataSetsFilter::ClearInputNames);
}

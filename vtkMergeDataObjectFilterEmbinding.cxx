// JavaScript wrapper for vtkMergeDataObjectFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMergeDataObjectFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMergeDataObjectFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkMergeDataObjectFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMergeDataObjectFilter>(vtkMergeDataObjectFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeDataObjectFilter_class) {
  emscripten::class_<vtkMergeDataObjectFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkMergeDataObjectFilter")
    .smart_ptr<vtkSmartPointer<vtkMergeDataObjectFilter>>("vtkSmartPointer<vtkMergeDataObjectFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMergeDataObjectFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeDataObjectFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeDataObjectFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeDataObjectFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeDataObjectFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeDataObjectFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeDataObjectFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataObjectInputData", &vtkMergeDataObjectFilter::SetDataObjectInputData, emscripten::allow_raw_pointers())
    .function("GetDataObject", &vtkMergeDataObjectFilter::GetDataObject, emscripten::allow_raw_pointers())
    .function("SetOutputField", &vtkMergeDataObjectFilter::SetOutputField)
    .function("GetOutputField", &vtkMergeDataObjectFilter::GetOutputField)
    .function("SetOutputFieldToDataObjectField", &vtkMergeDataObjectFilter::SetOutputFieldToDataObjectField)
    .function("SetOutputFieldToPointDataField", &vtkMergeDataObjectFilter::SetOutputFieldToPointDataField)
    .function("SetOutputFieldToCellDataField", &vtkMergeDataObjectFilter::SetOutputFieldToCellDataField);
}

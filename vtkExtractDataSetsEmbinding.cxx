// JavaScript wrapper for vtkExtractDataSets with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractDataSetsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractDataSets.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractDataSets.h"

template<> void emscripten::internal::raw_destructor<vtkExtractDataSets>(vtkExtractDataSets * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractDataSets_class) {
  emscripten::class_<vtkExtractDataSets, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkExtractDataSets")
    .smart_ptr<vtkSmartPointer<vtkExtractDataSets>>("vtkSmartPointer<vtkExtractDataSets>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractDataSets>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractDataSets::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractDataSets& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractDataSets::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractDataSets::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractDataSets::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractDataSets& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddDataSet", &vtkExtractDataSets::AddDataSet)
    .function("ClearDataSetList", &vtkExtractDataSets::ClearDataSetList);
}

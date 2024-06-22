// JavaScript wrapper for vtkExtractHierarchicalBins with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkExtractHierarchicalBinsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkExtractHierarchicalBins.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHierarchicalBinningFilter.h"
#include "vtkExtractHierarchicalBins.h"

template<> void emscripten::internal::raw_destructor<vtkExtractHierarchicalBins>(vtkExtractHierarchicalBins * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractHierarchicalBins_class) {
  emscripten::class_<vtkExtractHierarchicalBins, emscripten::base<vtkPointCloudFilter>>("vtkExtractHierarchicalBins")
    .smart_ptr<vtkSmartPointer<vtkExtractHierarchicalBins>>("vtkSmartPointer<vtkExtractHierarchicalBins>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractHierarchicalBins>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractHierarchicalBins::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractHierarchicalBins& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractHierarchicalBins::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractHierarchicalBins::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractHierarchicalBins::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractHierarchicalBins& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLevel", &vtkExtractHierarchicalBins::SetLevel)
    .function("GetLevel", &vtkExtractHierarchicalBins::GetLevel)
    .function("SetBin", &vtkExtractHierarchicalBins::SetBin)
    .function("GetBin", &vtkExtractHierarchicalBins::GetBin)
    .function("SetBinningFilter", &vtkExtractHierarchicalBins::SetBinningFilter, emscripten::allow_raw_pointers())
    .function("GetBinningFilter", &vtkExtractHierarchicalBins::GetBinningFilter, emscripten::allow_raw_pointers());
}

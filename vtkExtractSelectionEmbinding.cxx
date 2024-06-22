// JavaScript wrapper for vtkExtractSelection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractSelectionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractSelection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkExtractSelection.h"

EMSCRIPTEN_BINDINGS(vtkFiltersExtraction_vtkExtractSelection_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExtractSelection>(vtkExtractSelection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelection_class) {
  emscripten::class_<vtkExtractSelection, emscripten::base<vtkDataObjectAlgorithm>>("vtkExtractSelection")
    .smart_ptr<vtkSmartPointer<vtkExtractSelection>>("vtkSmartPointer<vtkExtractSelection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractSelection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSelectionConnection", &vtkExtractSelection::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetPreserveTopology", &vtkExtractSelection::SetPreserveTopology)
    .function("GetPreserveTopology", &vtkExtractSelection::GetPreserveTopology)
    .function("PreserveTopologyOn", &vtkExtractSelection::PreserveTopologyOn)
    .function("PreserveTopologyOff", &vtkExtractSelection::PreserveTopologyOff)
    .function("GetHyperTreeGridToUnstructuredGrid", &vtkExtractSelection::GetHyperTreeGridToUnstructuredGrid)
    .function("SetHyperTreeGridToUnstructuredGrid", &vtkExtractSelection::SetHyperTreeGridToUnstructuredGrid)
    .function("HyperTreeGridToUnstructuredGridOn", &vtkExtractSelection::HyperTreeGridToUnstructuredGridOn)
    .function("HyperTreeGridToUnstructuredGridOff", &vtkExtractSelection::HyperTreeGridToUnstructuredGridOff);
}

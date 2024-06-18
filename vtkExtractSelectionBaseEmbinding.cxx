// JavaScript wrapper for vtkExtractSelectionBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkExtractSelectionBaseEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkExtractSelectionBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkExtractSelectionBase.h"

template<> void emscripten::internal::raw_destructor<vtkExtractSelectionBase>(vtkExtractSelectionBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelectionBase_class) {
  emscripten::class_<vtkExtractSelectionBase, emscripten::base<vtkDataObjectAlgorithm>>("vtkExtractSelectionBase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectionBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelectionBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelectionBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelectionBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectionBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelectionBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSelectionConnection", &vtkExtractSelectionBase::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetPreserveTopology", &vtkExtractSelectionBase::SetPreserveTopology)
    .function("GetPreserveTopology", &vtkExtractSelectionBase::GetPreserveTopology)
    .function("PreserveTopologyOn", &vtkExtractSelectionBase::PreserveTopologyOn)
    .function("PreserveTopologyOff", &vtkExtractSelectionBase::PreserveTopologyOff);
}

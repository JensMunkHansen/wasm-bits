// JavaScript wrapper for vtkExtractBlockUsingDataAssembly with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractBlockUsingDataAssemblyEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractBlockUsingDataAssembly.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractBlockUsingDataAssembly.h"

template<> void emscripten::internal::raw_destructor<vtkExtractBlockUsingDataAssembly>(vtkExtractBlockUsingDataAssembly * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractBlockUsingDataAssembly_class) {
  emscripten::class_<vtkExtractBlockUsingDataAssembly, emscripten::base<vtkCompositeDataSetAlgorithm>>("vtkExtractBlockUsingDataAssembly")
    .smart_ptr<vtkSmartPointer<vtkExtractBlockUsingDataAssembly>>("vtkSmartPointer<vtkExtractBlockUsingDataAssembly>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractBlockUsingDataAssembly>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractBlockUsingDataAssembly::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractBlockUsingDataAssembly::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractBlockUsingDataAssembly::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractBlockUsingDataAssembly::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddSelector", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self, const std::string & arg_0) -> bool {  return self.AddSelector( arg_0.c_str());}))
    .function("ClearSelectors", &vtkExtractBlockUsingDataAssembly::ClearSelectors)
    .function("SetSelector", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self, const std::string & arg_0) -> void {  return self.SetSelector( arg_0.c_str());}))
    .function("GetNumberOfSelectors", &vtkExtractBlockUsingDataAssembly::GetNumberOfSelectors)
    .function("GetSelector", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self, int arg_0) -> std::string {  return self.GetSelector( arg_0);}))
    .function("SetAssemblyName", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self, const std::string & arg_0) -> void {  return self.SetAssemblyName( arg_0.c_str());}))
    .function("GetAssemblyName", emscripten::optional_override([](vtkExtractBlockUsingDataAssembly& self) -> std::string {  return self.GetAssemblyName();}))
    .function("SetSelectSubtrees", &vtkExtractBlockUsingDataAssembly::SetSelectSubtrees)
    .function("GetSelectSubtrees", &vtkExtractBlockUsingDataAssembly::GetSelectSubtrees)
    .function("SelectSubtreesOn", &vtkExtractBlockUsingDataAssembly::SelectSubtreesOn)
    .function("SelectSubtreesOff", &vtkExtractBlockUsingDataAssembly::SelectSubtreesOff)
    .function("SetPruneDataAssembly", &vtkExtractBlockUsingDataAssembly::SetPruneDataAssembly)
    .function("GetPruneDataAssembly", &vtkExtractBlockUsingDataAssembly::GetPruneDataAssembly)
    .function("PruneDataAssemblyOn", &vtkExtractBlockUsingDataAssembly::PruneDataAssemblyOn)
    .function("PruneDataAssemblyOff", &vtkExtractBlockUsingDataAssembly::PruneDataAssemblyOff);
}

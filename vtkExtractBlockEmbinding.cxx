// JavaScript wrapper for vtkExtractBlock with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractBlockEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractBlock.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractBlock.h"

template<> void emscripten::internal::raw_destructor<vtkExtractBlock>(vtkExtractBlock * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractBlock_class) {
  emscripten::class_<vtkExtractBlock, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkExtractBlock")
    .smart_ptr<vtkSmartPointer<vtkExtractBlock>>("vtkSmartPointer<vtkExtractBlock>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractBlock>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractBlock::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractBlock& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractBlock::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractBlock::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractBlock::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractBlock& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddIndex", &vtkExtractBlock::AddIndex)
    .function("RemoveIndex", &vtkExtractBlock::RemoveIndex)
    .function("RemoveAllIndices", &vtkExtractBlock::RemoveAllIndices)
    .function("SetPruneOutput", &vtkExtractBlock::SetPruneOutput)
    .function("GetPruneOutput", &vtkExtractBlock::GetPruneOutput)
    .function("PruneOutputOn", &vtkExtractBlock::PruneOutputOn)
    .function("PruneOutputOff", &vtkExtractBlock::PruneOutputOff)
    .function("SetMaintainStructure", &vtkExtractBlock::SetMaintainStructure)
    .function("GetMaintainStructure", &vtkExtractBlock::GetMaintainStructure)
    .function("MaintainStructureOn", &vtkExtractBlock::MaintainStructureOn)
    .function("MaintainStructureOff", &vtkExtractBlock::MaintainStructureOff);
}

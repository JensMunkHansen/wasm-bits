// JavaScript wrapper for vtkERFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOERF.js/vtkIOERF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOERF.js/vtkERFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/ERF/vtkERFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"
#include "vtkERFReader.h"

template<> void emscripten::internal::raw_destructor<vtkERFReader>(vtkERFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkERFReader_class) {
  emscripten::class_<vtkERFReader, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkERFReader")
    .smart_ptr<vtkSmartPointer<vtkERFReader>>("vtkSmartPointer<vtkERFReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkERFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkERFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkERFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkERFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkERFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkERFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkERFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", &vtkERFReader::SetFileName)
    .function("GetFileName", &vtkERFReader::GetFileName)
    .function("GetStagesSelection", &vtkERFReader::GetStagesSelection, emscripten::allow_raw_pointers())
    .function("GetVariablesSelection", &vtkERFReader::GetVariablesSelection, emscripten::allow_raw_pointers())
    .function("GetBlocksSelection", &vtkERFReader::GetBlocksSelection, emscripten::allow_raw_pointers())
    .function("EnableAllVariables", &vtkERFReader::EnableAllVariables)
    .function("EnableAllBlocks", &vtkERFReader::EnableAllBlocks)
    .function("SetVariablesStatus", emscripten::optional_override([](vtkERFReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetVariablesStatus( arg_0.c_str(), arg_1);}))
    .function("SetStagesStatus", emscripten::optional_override([](vtkERFReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetStagesStatus( arg_0.c_str(), arg_1);}))
    .function("SetBlocksStatus", emscripten::optional_override([](vtkERFReader& self, const std::string & arg_0, int arg_1) -> void {  return self.SetBlocksStatus( arg_0.c_str(), arg_1);}))
    .function("GetStage", &vtkERFReader::GetStage);
}

// JavaScript wrapper for vtkEnSightWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkEnSightWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkEnSightWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"
#include "vtkEnSightWriter.h"

template<> void emscripten::internal::raw_destructor<vtkEnSightWriter>(vtkEnSightWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightWriter_class) {
  emscripten::class_<vtkEnSightWriter, emscripten::base<vtkWriter>>("vtkEnSightWriter")
    .smart_ptr<vtkSmartPointer<vtkEnSightWriter>>("vtkSmartPointer<vtkEnSightWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEnSightWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProcessNumber", &vtkEnSightWriter::SetProcessNumber)
    .function("GetProcessNumber", &vtkEnSightWriter::GetProcessNumber)
    .function("SetPath", emscripten::optional_override([](vtkEnSightWriter& self, const std::string & arg_0) -> void {  return self.SetPath( arg_0.c_str());}))
    .function("GetPath", emscripten::optional_override([](vtkEnSightWriter& self) -> std::string {  return self.GetPath();}))
    .function("SetBaseName", emscripten::optional_override([](vtkEnSightWriter& self, const std::string & arg_0) -> void {  return self.SetBaseName( arg_0.c_str());}))
    .function("GetBaseName", emscripten::optional_override([](vtkEnSightWriter& self) -> std::string {  return self.GetBaseName();}))
    .function("SetFileName", emscripten::optional_override([](vtkEnSightWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkEnSightWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetTimeStep", &vtkEnSightWriter::SetTimeStep)
    .function("GetTimeStep", &vtkEnSightWriter::GetTimeStep)
    .function("SetGhostLevel", &vtkEnSightWriter::SetGhostLevel)
    .function("GetGhostLevel", &vtkEnSightWriter::GetGhostLevel)
    .function("SetTransientGeometry", &vtkEnSightWriter::SetTransientGeometry)
    .function("GetTransientGeometry", &vtkEnSightWriter::GetTransientGeometry)
    .function("SetNumberOfBlocks", &vtkEnSightWriter::SetNumberOfBlocks)
    .function("GetNumberOfBlocks", &vtkEnSightWriter::GetNumberOfBlocks)
    .function("WriteNodeIDsOn", &vtkEnSightWriter::WriteNodeIDsOn)
    .function("WriteNodeIDsOff", &vtkEnSightWriter::WriteNodeIDsOff)
    .function("SetWriteNodeIDs", &vtkEnSightWriter::SetWriteNodeIDs)
    .function("GetWriteNodeIDs", &vtkEnSightWriter::GetWriteNodeIDs)
    .function("WriteElementIDsOn", &vtkEnSightWriter::WriteElementIDsOn)
    .function("WriteElementIDsOff", &vtkEnSightWriter::WriteElementIDsOff)
    .function("SetWriteElementIDs", &vtkEnSightWriter::SetWriteElementIDs)
    .function("GetWriteElementIDs", &vtkEnSightWriter::GetWriteElementIDs)
    .function("SetBlockIDs", emscripten::optional_override([](vtkEnSightWriter& self, std::uintptr_t arg_0) -> void {  return self.SetBlockIDs(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetBlockIDs", emscripten::optional_override([](vtkEnSightWriter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBlockIDs()) / sizeof(int);}))
    .function("SetInputData", &vtkEnSightWriter::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkEnSightWriter::GetInput, emscripten::allow_raw_pointers())
    .function("WriteCaseFile", &vtkEnSightWriter::WriteCaseFile)
    .function("WriteSOSCaseFile", &vtkEnSightWriter::WriteSOSCaseFile);
}

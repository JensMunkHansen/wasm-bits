// JavaScript wrapper for vtkExodusIIWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkIOExodus.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkExodusIIWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Exodus/vtkExodusIIWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkModelMetadata.h"
#include "vtkExodusIIWriter.h"

template<> void emscripten::internal::raw_destructor<vtkExodusIIWriter>(vtkExodusIIWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExodusIIWriter_class) {
  emscripten::class_<vtkExodusIIWriter, emscripten::base<vtkWriter>>("vtkExodusIIWriter")
    .smart_ptr<vtkSmartPointer<vtkExodusIIWriter>>("vtkSmartPointer<vtkExodusIIWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExodusIIWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIIWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExodusIIWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExodusIIWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExodusIIWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIIWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExodusIIWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetModelMetadata", &vtkExodusIIWriter::SetModelMetadata, emscripten::allow_raw_pointers())
    .function("GetModelMetadata", &vtkExodusIIWriter::GetModelMetadata, emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkExodusIIWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkExodusIIWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetStoreDoubles", &vtkExodusIIWriter::SetStoreDoubles)
    .function("GetStoreDoubles", &vtkExodusIIWriter::GetStoreDoubles)
    .function("SetGhostLevel", &vtkExodusIIWriter::SetGhostLevel)
    .function("GetGhostLevel", &vtkExodusIIWriter::GetGhostLevel)
    .function("SetWriteOutBlockIdArray", &vtkExodusIIWriter::SetWriteOutBlockIdArray)
    .function("GetWriteOutBlockIdArray", &vtkExodusIIWriter::GetWriteOutBlockIdArray)
    .function("WriteOutBlockIdArrayOn", &vtkExodusIIWriter::WriteOutBlockIdArrayOn)
    .function("WriteOutBlockIdArrayOff", &vtkExodusIIWriter::WriteOutBlockIdArrayOff)
    .function("SetWriteOutGlobalNodeIdArray", &vtkExodusIIWriter::SetWriteOutGlobalNodeIdArray)
    .function("GetWriteOutGlobalNodeIdArray", &vtkExodusIIWriter::GetWriteOutGlobalNodeIdArray)
    .function("WriteOutGlobalNodeIdArrayOn", &vtkExodusIIWriter::WriteOutGlobalNodeIdArrayOn)
    .function("WriteOutGlobalNodeIdArrayOff", &vtkExodusIIWriter::WriteOutGlobalNodeIdArrayOff)
    .function("SetWriteOutGlobalElementIdArray", &vtkExodusIIWriter::SetWriteOutGlobalElementIdArray)
    .function("GetWriteOutGlobalElementIdArray", &vtkExodusIIWriter::GetWriteOutGlobalElementIdArray)
    .function("WriteOutGlobalElementIdArrayOn", &vtkExodusIIWriter::WriteOutGlobalElementIdArrayOn)
    .function("WriteOutGlobalElementIdArrayOff", &vtkExodusIIWriter::WriteOutGlobalElementIdArrayOff)
    .function("SetWriteAllTimeSteps", &vtkExodusIIWriter::SetWriteAllTimeSteps)
    .function("GetWriteAllTimeSteps", &vtkExodusIIWriter::GetWriteAllTimeSteps)
    .function("WriteAllTimeStepsOn", &vtkExodusIIWriter::WriteAllTimeStepsOn)
    .function("WriteAllTimeStepsOff", &vtkExodusIIWriter::WriteAllTimeStepsOff)
    .function("SetBlockIdArrayName", emscripten::optional_override([](vtkExodusIIWriter& self, const std::string & arg_0) -> void {  return self.SetBlockIdArrayName( arg_0.c_str());}))
    .function("GetBlockIdArrayName", emscripten::optional_override([](vtkExodusIIWriter& self) -> std::string {  return self.GetBlockIdArrayName();}))
    .function("SetIgnoreMetaDataWarning", &vtkExodusIIWriter::SetIgnoreMetaDataWarning)
    .function("GetIgnoreMetaDataWarning", &vtkExodusIIWriter::GetIgnoreMetaDataWarning)
    .function("IgnoreMetaDataWarningOn", &vtkExodusIIWriter::IgnoreMetaDataWarningOn)
    .function("IgnoreMetaDataWarningOff", &vtkExodusIIWriter::IgnoreMetaDataWarningOff);
}

// JavaScript wrapper for vtkGLTFExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkGLTFExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkGLTFExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGLTFExporter.h"

template<> void emscripten::internal::raw_destructor<vtkGLTFExporter>(vtkGLTFExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLTFExporter_class) {
  emscripten::class_<vtkGLTFExporter, emscripten::base<vtkExporter>>("vtkGLTFExporter")
    .smart_ptr<vtkSmartPointer<vtkGLTFExporter>>("vtkSmartPointer<vtkGLTFExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGLTFExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLTFExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLTFExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLTFExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLTFExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkGLTFExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGLTFExporter& self) -> std::string {  return self.GetFileName();}))
    .function("GetInlineData", &vtkGLTFExporter::GetInlineData)
    .function("SetInlineData", &vtkGLTFExporter::SetInlineData)
    .function("InlineDataOn", &vtkGLTFExporter::InlineDataOn)
    .function("InlineDataOff", &vtkGLTFExporter::InlineDataOff)
    .function("GetSaveNormal", &vtkGLTFExporter::GetSaveNormal)
    .function("SetSaveNormal", &vtkGLTFExporter::SetSaveNormal)
    .function("SaveNormalOn", &vtkGLTFExporter::SaveNormalOn)
    .function("SaveNormalOff", &vtkGLTFExporter::SaveNormalOff)
    .function("GetSaveBatchId", &vtkGLTFExporter::GetSaveBatchId)
    .function("SetSaveBatchId", &vtkGLTFExporter::SetSaveBatchId)
    .function("SaveBatchIdOn", &vtkGLTFExporter::SaveBatchIdOn)
    .function("SaveBatchIdOff", &vtkGLTFExporter::SaveBatchIdOff)
    .function("GetSaveNaNValues", &vtkGLTFExporter::GetSaveNaNValues)
    .function("SetSaveNaNValues", &vtkGLTFExporter::SetSaveNaNValues)
    .function("SaveNaNValuesOn", &vtkGLTFExporter::SaveNaNValuesOn)
    .function("SaveNaNValuesOff", &vtkGLTFExporter::SaveNaNValuesOff)
    .function("WriteToString", &vtkGLTFExporter::WriteToString);
}

// JavaScript wrapper for vtkJSONSceneExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkJSONSceneExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkJSONSceneExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkJSONSceneExporter.h"

template<> void emscripten::internal::raw_destructor<vtkJSONSceneExporter>(vtkJSONSceneExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJSONSceneExporter_class) {
  emscripten::class_<vtkJSONSceneExporter, emscripten::base<vtkExporter>>("vtkJSONSceneExporter")
    .smart_ptr<vtkSmartPointer<vtkJSONSceneExporter>>("vtkSmartPointer<vtkJSONSceneExporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkJSONSceneExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONSceneExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJSONSceneExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJSONSceneExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJSONSceneExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONSceneExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJSONSceneExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkJSONSceneExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkJSONSceneExporter& self) -> std::string {  return self.GetFileName();}))
    .function("SetWriteTextures", &vtkJSONSceneExporter::SetWriteTextures)
    .function("GetWriteTextures", &vtkJSONSceneExporter::GetWriteTextures)
    .function("SetWriteTextureLODs", &vtkJSONSceneExporter::SetWriteTextureLODs)
    .function("GetWriteTextureLODs", &vtkJSONSceneExporter::GetWriteTextureLODs)
    .function("SetTextureLODsBaseSize", &vtkJSONSceneExporter::SetTextureLODsBaseSize)
    .function("GetTextureLODsBaseSize", &vtkJSONSceneExporter::GetTextureLODsBaseSize)
    .function("SetTextureLODsBaseUrl", emscripten::optional_override([](vtkJSONSceneExporter& self, const std::string & arg_0) -> void {  return self.SetTextureLODsBaseUrl( arg_0.c_str());}))
    .function("GetTextureLODsBaseUrl", emscripten::optional_override([](vtkJSONSceneExporter& self) -> std::string {  return self.GetTextureLODsBaseUrl();}))
    .function("SetWritePolyLODs", &vtkJSONSceneExporter::SetWritePolyLODs)
    .function("GetWritePolyLODs", &vtkJSONSceneExporter::GetWritePolyLODs)
    .function("SetPolyLODsBaseSize", &vtkJSONSceneExporter::SetPolyLODsBaseSize)
    .function("GetPolyLODsBaseSize", &vtkJSONSceneExporter::GetPolyLODsBaseSize)
    .function("SetPolyLODsBaseUrl", emscripten::optional_override([](vtkJSONSceneExporter& self, const std::string & arg_0) -> void {  return self.SetPolyLODsBaseUrl( arg_0.c_str());}))
    .function("GetPolyLODsBaseUrl", emscripten::optional_override([](vtkJSONSceneExporter& self) -> std::string {  return self.GetPolyLODsBaseUrl();}));
}

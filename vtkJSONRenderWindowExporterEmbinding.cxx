// JavaScript wrapper for vtkJSONRenderWindowExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkJSONRenderWindowExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkJSONRenderWindowExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVtkJSSceneGraphSerializer.h"
#include "vtkArchiver.h"
#include "vtkJSONRenderWindowExporter.h"

template<> void emscripten::internal::raw_destructor<vtkJSONRenderWindowExporter>(vtkJSONRenderWindowExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkJSONRenderWindowExporter_class) {
  emscripten::class_<vtkJSONRenderWindowExporter, emscripten::base<vtkExporter>>("vtkJSONRenderWindowExporter")
    .smart_ptr<vtkSmartPointer<vtkJSONRenderWindowExporter>>("vtkSmartPointer<vtkJSONRenderWindowExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkJSONRenderWindowExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONRenderWindowExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkJSONRenderWindowExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkJSONRenderWindowExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkJSONRenderWindowExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkJSONRenderWindowExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkJSONRenderWindowExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSerializer", &vtkJSONRenderWindowExporter::SetSerializer, emscripten::allow_raw_pointers())
    .function("GetSerializer", &vtkJSONRenderWindowExporter::GetSerializer, emscripten::allow_raw_pointers())
    .function("SetArchiver", &vtkJSONRenderWindowExporter::SetArchiver, emscripten::allow_raw_pointers())
    .function("GetArchiver", &vtkJSONRenderWindowExporter::GetArchiver, emscripten::allow_raw_pointers())
    .function("WriteData", &vtkJSONRenderWindowExporter::WriteData)
    .function("SetCompactOutput", &vtkJSONRenderWindowExporter::SetCompactOutput)
    .function("GetCompactOutput", &vtkJSONRenderWindowExporter::GetCompactOutput)
    .function("CompactOutputOn", &vtkJSONRenderWindowExporter::CompactOutputOn)
    .function("CompactOutputOff", &vtkJSONRenderWindowExporter::CompactOutputOff);
}

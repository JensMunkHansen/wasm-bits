// JavaScript wrapper for vtkVRMLExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkVRMLExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkVRMLExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVRMLExporter.h"

template<> void emscripten::internal::raw_destructor<vtkVRMLExporter>(vtkVRMLExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVRMLExporter_class) {
  emscripten::class_<vtkVRMLExporter, emscripten::base<vtkExporter>>("vtkVRMLExporter")
    .smart_ptr<vtkSmartPointer<vtkVRMLExporter>>("vtkSmartPointer<vtkVRMLExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVRMLExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVRMLExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVRMLExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVRMLExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVRMLExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVRMLExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVRMLExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkVRMLExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkVRMLExporter& self) -> std::string {  return self.GetFileName();}))
    .function("SetSpeed", &vtkVRMLExporter::SetSpeed)
    .function("GetSpeed", &vtkVRMLExporter::GetSpeed);
}

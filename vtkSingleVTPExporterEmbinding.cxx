// JavaScript wrapper for vtkSingleVTPExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkSingleVTPExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkSingleVTPExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSingleVTPExporter.h"

template<> void emscripten::internal::raw_destructor<vtkSingleVTPExporter>(vtkSingleVTPExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSingleVTPExporter_class) {
  emscripten::class_<vtkSingleVTPExporter, emscripten::base<vtkExporter>>("vtkSingleVTPExporter")
    .smart_ptr<vtkSmartPointer<vtkSingleVTPExporter>>("vtkSmartPointer<vtkSingleVTPExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSingleVTPExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSingleVTPExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSingleVTPExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSingleVTPExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSingleVTPExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSingleVTPExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSingleVTPExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilePrefix", emscripten::optional_override([](vtkSingleVTPExporter& self, const std::string & arg_0) -> void {  return self.SetFilePrefix( arg_0.c_str());}))
    .function("GetFilePrefix", emscripten::optional_override([](vtkSingleVTPExporter& self) -> std::string {  return self.GetFilePrefix();}))
    .function("SetFileName", emscripten::optional_override([](vtkSingleVTPExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}));
}

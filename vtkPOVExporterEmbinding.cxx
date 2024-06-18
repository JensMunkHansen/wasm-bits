// JavaScript wrapper for vtkPOVExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkPOVExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkPOVExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPOVExporter.h"

template<> void emscripten::internal::raw_destructor<vtkPOVExporter>(vtkPOVExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPOVExporter_class) {
  emscripten::class_<vtkPOVExporter, emscripten::base<vtkExporter>>("vtkPOVExporter")
    .smart_ptr<vtkSmartPointer<vtkPOVExporter>>("vtkSmartPointer<vtkPOVExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPOVExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPOVExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPOVExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPOVExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPOVExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPOVExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPOVExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkPOVExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkPOVExporter& self) -> std::string {  return self.GetFileName();}));
}

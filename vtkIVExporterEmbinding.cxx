// JavaScript wrapper for vtkIVExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIVExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkIVExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIVExporter.h"

template<> void emscripten::internal::raw_destructor<vtkIVExporter>(vtkIVExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIVExporter_class) {
  emscripten::class_<vtkIVExporter, emscripten::base<vtkExporter>>("vtkIVExporter")
    .smart_ptr<vtkSmartPointer<vtkIVExporter>>("vtkSmartPointer<vtkIVExporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIVExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIVExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIVExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIVExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIVExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIVExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIVExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkIVExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkIVExporter& self) -> std::string {  return self.GetFileName();}));
}

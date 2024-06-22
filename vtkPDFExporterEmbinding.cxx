// JavaScript wrapper for vtkPDFExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExportPDF.js/vtkIOExportPDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExportPDF.js/vtkPDFExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/ExportPDF/vtkPDFExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPDFExporter.h"

template<> void emscripten::internal::raw_destructor<vtkPDFExporter>(vtkPDFExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPDFExporter_class) {
  emscripten::class_<vtkPDFExporter, emscripten::base<vtkExporter>>("vtkPDFExporter")
    .smart_ptr<vtkSmartPointer<vtkPDFExporter>>("vtkSmartPointer<vtkPDFExporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPDFExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDFExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPDFExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPDFExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPDFExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDFExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPDFExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTitle", emscripten::optional_override([](vtkPDFExporter& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkPDFExporter& self) -> std::string {  return self.GetTitle();}))
    .function("SetFileName", emscripten::optional_override([](vtkPDFExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkPDFExporter& self) -> std::string {  return self.GetFileName();}));
}

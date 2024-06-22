// JavaScript wrapper for vtkOBJExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkOBJExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkOBJExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOBJExporter.h"

template<> void emscripten::internal::raw_destructor<vtkOBJExporter>(vtkOBJExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOBJExporter_class) {
  emscripten::class_<vtkOBJExporter, emscripten::base<vtkExporter>>("vtkOBJExporter")
    .smart_ptr<vtkSmartPointer<vtkOBJExporter>>("vtkSmartPointer<vtkOBJExporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOBJExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOBJExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOBJExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOBJExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOBJExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFilePrefix", emscripten::optional_override([](vtkOBJExporter& self, const std::string & arg_0) -> void {  return self.SetFilePrefix( arg_0.c_str());}))
    .function("GetFilePrefix", emscripten::optional_override([](vtkOBJExporter& self) -> std::string {  return self.GetFilePrefix();}))
    .function("SetOBJFileComment", emscripten::optional_override([](vtkOBJExporter& self, const std::string & arg_0) -> void {  return self.SetOBJFileComment( arg_0.c_str());}))
    .function("GetOBJFileComment", emscripten::optional_override([](vtkOBJExporter& self) -> std::string {  return self.GetOBJFileComment();}))
    .function("SetMTLFileComment", emscripten::optional_override([](vtkOBJExporter& self, const std::string & arg_0) -> void {  return self.SetMTLFileComment( arg_0.c_str());}))
    .function("GetMTLFileComment", emscripten::optional_override([](vtkOBJExporter& self) -> std::string {  return self.GetMTLFileComment();}));
}

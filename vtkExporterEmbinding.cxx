// JavaScript wrapper for vtkExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"
#include "vtkExporter.h"

template<> void emscripten::internal::raw_destructor<vtkExporter>(vtkExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExporter_class) {
  emscripten::class_<vtkExporter, emscripten::base<vtkObject>>("vtkExporter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Write", &vtkExporter::Write)
    .function("Update", &vtkExporter::Update)
    .function("SetRenderWindow", &vtkExporter::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetRenderWindow", &vtkExporter::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("SetActiveRenderer", &vtkExporter::SetActiveRenderer, emscripten::allow_raw_pointers())
    .function("GetActiveRenderer", &vtkExporter::GetActiveRenderer, emscripten::allow_raw_pointers())
    .function("SetInput", &vtkExporter::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkExporter::GetInput, emscripten::allow_raw_pointers())
    .function("SetStartWrite", emscripten::optional_override([](vtkExporter& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetStartWrite( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetEndWrite", emscripten::optional_override([](vtkExporter& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetEndWrite( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetStartWriteArgDelete", emscripten::optional_override([](vtkExporter& self, emscripten::val arg_0) -> void {  return self.SetStartWriteArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("SetEndWriteArgDelete", emscripten::optional_override([](vtkExporter& self, emscripten::val arg_0) -> void {  return self.SetEndWriteArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("GetMTime", &vtkExporter::GetMTime);
}

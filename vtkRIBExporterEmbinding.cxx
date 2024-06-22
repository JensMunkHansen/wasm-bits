// JavaScript wrapper for vtkRIBExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkRIBExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkRIBExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRIBExporter.h"

template<> void emscripten::internal::raw_destructor<vtkRIBExporter>(vtkRIBExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRIBExporter_class) {
  emscripten::class_<vtkRIBExporter, emscripten::base<vtkExporter>>("vtkRIBExporter")
    .smart_ptr<vtkSmartPointer<vtkRIBExporter>>("vtkSmartPointer<vtkRIBExporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRIBExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRIBExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRIBExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRIBExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRIBExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRIBExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRIBExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSize", emscripten::select_overload<void(vtkRIBExporter&, int, int)>([](vtkRIBExporter& self, int arg_0, int arg_1) -> void { return self.SetSize( arg_0, arg_1); }))
    .function("SetPixelSamples", emscripten::select_overload<void(vtkRIBExporter&, int, int)>([](vtkRIBExporter& self, int arg_0, int arg_1) -> void { return self.SetPixelSamples( arg_0, arg_1); }))
    .function("SetFilePrefix", emscripten::optional_override([](vtkRIBExporter& self, const std::string & arg_0) -> void {  return self.SetFilePrefix( arg_0.c_str());}))
    .function("GetFilePrefix", emscripten::optional_override([](vtkRIBExporter& self) -> std::string {  return self.GetFilePrefix();}))
    .function("SetTexturePrefix", emscripten::optional_override([](vtkRIBExporter& self, const std::string & arg_0) -> void {  return self.SetTexturePrefix( arg_0.c_str());}))
    .function("GetTexturePrefix", emscripten::optional_override([](vtkRIBExporter& self) -> std::string {  return self.GetTexturePrefix();}))
    .function("SetBackground", &vtkRIBExporter::SetBackground)
    .function("GetBackground", &vtkRIBExporter::GetBackground)
    .function("BackgroundOn", &vtkRIBExporter::BackgroundOn)
    .function("BackgroundOff", &vtkRIBExporter::BackgroundOff)
    .function("SetExportArrays", &vtkRIBExporter::SetExportArrays)
    .function("GetExportArraysMinValue", &vtkRIBExporter::GetExportArraysMinValue)
    .function("GetExportArraysMaxValue", &vtkRIBExporter::GetExportArraysMaxValue)
    .function("ExportArraysOn", &vtkRIBExporter::ExportArraysOn)
    .function("ExportArraysOff", &vtkRIBExporter::ExportArraysOff)
    .function("GetExportArrays", &vtkRIBExporter::GetExportArrays);
}

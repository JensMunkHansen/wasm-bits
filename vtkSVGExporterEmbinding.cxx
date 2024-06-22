// JavaScript wrapper for vtkSVGExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkSVGExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkSVGExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSVGExporter.h"

template<> void emscripten::internal::raw_destructor<vtkSVGExporter>(vtkSVGExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSVGExporter_class) {
  emscripten::class_<vtkSVGExporter, emscripten::base<vtkExporter>>("vtkSVGExporter")
    .smart_ptr<vtkSmartPointer<vtkSVGExporter>>("vtkSmartPointer<vtkSVGExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSVGExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSVGExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSVGExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSVGExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSVGExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSVGExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSVGExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTitle", emscripten::optional_override([](vtkSVGExporter& self, const std::string & arg_0) -> void {  return self.SetTitle( arg_0.c_str());}))
    .function("GetTitle", emscripten::optional_override([](vtkSVGExporter& self) -> std::string {  return self.GetTitle();}))
    .function("SetDescription", emscripten::optional_override([](vtkSVGExporter& self, const std::string & arg_0) -> void {  return self.SetDescription( arg_0.c_str());}))
    .function("GetDescription", emscripten::optional_override([](vtkSVGExporter& self) -> std::string {  return self.GetDescription();}))
    .function("SetFileName", emscripten::optional_override([](vtkSVGExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSVGExporter& self) -> std::string {  return self.GetFileName();}))
    .function("SetTextAsPath", &vtkSVGExporter::SetTextAsPath)
    .function("GetTextAsPath", &vtkSVGExporter::GetTextAsPath)
    .function("TextAsPathOn", &vtkSVGExporter::TextAsPathOn)
    .function("TextAsPathOff", &vtkSVGExporter::TextAsPathOff)
    .function("SetDrawBackground", &vtkSVGExporter::SetDrawBackground)
    .function("GetDrawBackground", &vtkSVGExporter::GetDrawBackground)
    .function("DrawBackgroundOn", &vtkSVGExporter::DrawBackgroundOn)
    .function("DrawBackgroundOff", &vtkSVGExporter::DrawBackgroundOff)
    .function("SetSubdivisionThreshold", &vtkSVGExporter::SetSubdivisionThreshold)
    .function("GetSubdivisionThreshold", &vtkSVGExporter::GetSubdivisionThreshold);
}

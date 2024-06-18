// JavaScript wrapper for vtkOOGLExporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkOOGLExporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkOOGLExporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOOGLExporter.h"

template<> void emscripten::internal::raw_destructor<vtkOOGLExporter>(vtkOOGLExporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOOGLExporter_class) {
  emscripten::class_<vtkOOGLExporter, emscripten::base<vtkExporter>>("vtkOOGLExporter")
    .smart_ptr<vtkSmartPointer<vtkOOGLExporter>>("vtkSmartPointer<vtkOOGLExporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOOGLExporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOOGLExporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOOGLExporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOOGLExporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOOGLExporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOOGLExporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOOGLExporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkOOGLExporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkOOGLExporter& self) -> std::string {  return self.GetFileName();}));
}

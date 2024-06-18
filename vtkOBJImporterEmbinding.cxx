// JavaScript wrapper for vtkOBJImporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkIOImport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkOBJImporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Import/vtkOBJImporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOBJImporter.h"

template<> void emscripten::internal::raw_destructor<vtkOBJImporter>(vtkOBJImporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOBJImporter_class) {
  emscripten::class_<vtkOBJImporter, emscripten::base<vtkImporter>>("vtkOBJImporter")
    .smart_ptr<vtkSmartPointer<vtkOBJImporter>>("vtkSmartPointer<vtkOBJImporter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOBJImporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJImporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOBJImporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOBJImporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOBJImporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOBJImporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOBJImporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkOBJImporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("SetFileNameMTL", emscripten::optional_override([](vtkOBJImporter& self, const std::string & arg_0) -> void {  return self.SetFileNameMTL( arg_0.c_str());}))
    .function("SetTexturePath", emscripten::optional_override([](vtkOBJImporter& self, const std::string & arg_0) -> void {  return self.SetTexturePath( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkOBJImporter& self) -> std::string {  return self.GetFileName();}))
    .function("GetFileNameMTL", emscripten::optional_override([](vtkOBJImporter& self) -> std::string {  return self.GetFileNameMTL();}))
    .function("GetTexturePath", emscripten::optional_override([](vtkOBJImporter& self) -> std::string {  return self.GetTexturePath();}))
    .function("GetOutputsDescription", &vtkOBJImporter::GetOutputsDescription)
    .function("GetOutputDescription", &vtkOBJImporter::GetOutputDescription);
}

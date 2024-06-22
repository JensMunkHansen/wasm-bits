// JavaScript wrapper for vtk3DSImporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkIOImport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtk3DSImporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Import/vtk3DSImporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtk3DSImporter.h"

template<> void emscripten::internal::raw_destructor<vtk3DSImporter>(vtk3DSImporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtk3DSImporter_class) {
  emscripten::class_<vtk3DSImporter, emscripten::base<vtkImporter>>("vtk3DSImporter")
    .smart_ptr<vtkSmartPointer<vtk3DSImporter>>("vtkSmartPointer<vtk3DSImporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtk3DSImporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DSImporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtk3DSImporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtk3DSImporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtk3DSImporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DSImporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtk3DSImporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtk3DSImporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtk3DSImporter& self) -> std::string {  return self.GetFileName();}))
    .function("SetComputeNormals", &vtk3DSImporter::SetComputeNormals)
    .function("GetComputeNormals", &vtk3DSImporter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtk3DSImporter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtk3DSImporter::ComputeNormalsOff)
    .function("GetOutputsDescription", &vtk3DSImporter::GetOutputsDescription);
}

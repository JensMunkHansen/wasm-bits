// JavaScript wrapper for vtkVRMLImporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkIOImport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkVRMLImporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Import/vtkVRMLImporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkObject.h"
#include "vtkVRMLImporter.h"

template<> void emscripten::internal::raw_destructor<vtkVRMLImporter>(vtkVRMLImporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVRMLImporter_class) {
  emscripten::class_<vtkVRMLImporter, emscripten::base<vtkImporter>>("vtkVRMLImporter")
    .smart_ptr<vtkSmartPointer<vtkVRMLImporter>>("vtkSmartPointer<vtkVRMLImporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVRMLImporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVRMLImporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVRMLImporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVRMLImporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVRMLImporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVRMLImporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVRMLImporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkVRMLImporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkVRMLImporter& self) -> std::string {  return self.GetFileName();}))
    .function("SetShapeResolution", &vtkVRMLImporter::SetShapeResolution)
    .function("GetShapeResolution", &vtkVRMLImporter::GetShapeResolution)
    .function("GetVRMLDEFObject", emscripten::optional_override([](vtkVRMLImporter& self, const std::string & arg_0) -> vtkObject* {  return self.GetVRMLDEFObject( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("GetOutputsDescription", &vtkVRMLImporter::GetOutputsDescription);
}

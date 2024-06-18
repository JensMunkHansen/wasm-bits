// JavaScript wrapper for vtkImporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkIOImport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkImporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Import/vtkImporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkDataAssembly.h"
#include "vtkRenderWindow.h"
#include "vtkDoubleArray.h"
#include "vtkImporter.h"

template<> void emscripten::internal::raw_destructor<vtkImporter>(vtkImporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImporter_class) {
  emscripten::class_<vtkImporter, emscripten::base<vtkObject>>("vtkImporter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRenderer", &vtkImporter::GetRenderer, emscripten::allow_raw_pointers())
    .function("GetSceneHierarchy", &vtkImporter::GetSceneHierarchy, emscripten::allow_raw_pointers())
    .function("SetRenderWindow", &vtkImporter::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetRenderWindow", &vtkImporter::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("Read", &vtkImporter::Read)
    .function("Update", &vtkImporter::Update)
    .function("GetOutputsDescription", &vtkImporter::GetOutputsDescription)
    .function("GetNumberOfAnimations", &vtkImporter::GetNumberOfAnimations)
    .function("GetAnimationName", &vtkImporter::GetAnimationName)
    .function("EnableAnimation", &vtkImporter::EnableAnimation)
    .function("DisableAnimation", &vtkImporter::DisableAnimation)
    .function("IsAnimationEnabled", &vtkImporter::IsAnimationEnabled)
    .function("GetNumberOfCameras", &vtkImporter::GetNumberOfCameras)
    .function("GetCameraName", &vtkImporter::GetCameraName)
    .function("SetCamera", &vtkImporter::SetCamera)
    .function("UpdateTimeStep", &vtkImporter::UpdateTimeStep);
}

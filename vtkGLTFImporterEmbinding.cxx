// JavaScript wrapper for vtkGLTFImporter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkIOImport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImport.js/vtkGLTFImporterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Import/vtkGLTFImporter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkDoubleArray.h"
#include "vtkGLTFImporter.h"

template<> void emscripten::internal::raw_destructor<vtkGLTFImporter>(vtkGLTFImporter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLTFImporter_class) {
  emscripten::class_<vtkGLTFImporter, emscripten::base<vtkImporter>>("vtkGLTFImporter")
    .smart_ptr<vtkSmartPointer<vtkGLTFImporter>>("vtkSmartPointer<vtkGLTFImporter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGLTFImporter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFImporter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLTFImporter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLTFImporter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLTFImporter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFImporter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLTFImporter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkGLTFImporter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGLTFImporter& self) -> std::string {  return self.GetFileName();}))
    .function("GetCamera", &vtkGLTFImporter::GetCamera)
    .function("GetOutputsDescription", &vtkGLTFImporter::GetOutputsDescription)
    .function("UpdateTimeStep", &vtkGLTFImporter::UpdateTimeStep)
    .function("GetNumberOfAnimations", &vtkGLTFImporter::GetNumberOfAnimations)
    .function("GetAnimationName", &vtkGLTFImporter::GetAnimationName)
    .function("EnableAnimation", &vtkGLTFImporter::EnableAnimation)
    .function("DisableAnimation", &vtkGLTFImporter::DisableAnimation)
    .function("IsAnimationEnabled", &vtkGLTFImporter::IsAnimationEnabled)
    .function("GetNumberOfCameras", &vtkGLTFImporter::GetNumberOfCameras)
    .function("GetCameraName", &vtkGLTFImporter::GetCameraName)
    .function("SetCamera", &vtkGLTFImporter::SetCamera);
}

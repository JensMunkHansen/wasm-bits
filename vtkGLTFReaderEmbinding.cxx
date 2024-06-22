// JavaScript wrapper for vtkGLTFReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkGLTFReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkGLTFReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkResourceStream.h"
#include "vtkURILoader.h"
#include "vtkStringArray.h"
#include "vtkDataArraySelection.h"
#include "vtkGLTFReader.h"

template<> void emscripten::internal::raw_destructor<vtkGLTFReader>(vtkGLTFReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLTFReader_class) {
  emscripten::class_<vtkGLTFReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkGLTFReader")
    .smart_ptr<vtkSmartPointer<vtkGLTFReader>>("vtkSmartPointer<vtkGLTFReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGLTFReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLTFReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLTFReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLTFReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLTFReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfTextures", &vtkGLTFReader::GetNumberOfTextures)
    .function("GetTexture", &vtkGLTFReader::GetTexture)
    .function("SetFileName", emscripten::optional_override([](vtkGLTFReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGLTFReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetStream", &vtkGLTFReader::SetStream, emscripten::allow_raw_pointers())
    .function("GetStream", &vtkGLTFReader::GetStream, emscripten::allow_raw_pointers())
    .function("SetGLBStart", &vtkGLTFReader::SetGLBStart)
    .function("GetGLBStart", &vtkGLTFReader::GetGLBStart)
    .function("SetURILoader", &vtkGLTFReader::SetURILoader, emscripten::allow_raw_pointers())
    .function("GetURILoader", &vtkGLTFReader::GetURILoader, emscripten::allow_raw_pointers())
    .function("SetApplyDeformationsToGeometry", &vtkGLTFReader::SetApplyDeformationsToGeometry)
    .function("GetApplyDeformationsToGeometry", &vtkGLTFReader::GetApplyDeformationsToGeometry)
    .function("ApplyDeformationsToGeometryOn", &vtkGLTFReader::ApplyDeformationsToGeometryOn)
    .function("ApplyDeformationsToGeometryOff", &vtkGLTFReader::ApplyDeformationsToGeometryOff)
    .function("GetNumberOfAnimations", &vtkGLTFReader::GetNumberOfAnimations)
    .function("GetAnimationName", &vtkGLTFReader::GetAnimationName)
    .function("GetAnimationDuration", &vtkGLTFReader::GetAnimationDuration)
    .function("EnableAnimation", &vtkGLTFReader::EnableAnimation)
    .function("DisableAnimation", &vtkGLTFReader::DisableAnimation)
    .function("IsAnimationEnabled", &vtkGLTFReader::IsAnimationEnabled)
    .function("GetSceneName", &vtkGLTFReader::GetSceneName)
    .function("GetNumberOfScenes", &vtkGLTFReader::GetNumberOfScenes)
    .function("GetCurrentScene", &vtkGLTFReader::GetCurrentScene)
    .function("SetCurrentScene", &vtkGLTFReader::SetCurrentScene)
    .function("SetScene", &vtkGLTFReader::SetScene)
    .function("GetFrameRate", &vtkGLTFReader::GetFrameRate)
    .function("SetFrameRate", &vtkGLTFReader::SetFrameRate)
    .function("SetOutputPointsPrecision", &vtkGLTFReader::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkGLTFReader::GetOutputPointsPrecision)
    .function("GetAllSceneNames", &vtkGLTFReader::GetAllSceneNames, emscripten::allow_raw_pointers())
    .function("GetAnimationSelection", &vtkGLTFReader::GetAnimationSelection, emscripten::allow_raw_pointers());
}

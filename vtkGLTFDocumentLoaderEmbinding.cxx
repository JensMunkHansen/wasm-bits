// JavaScript wrapper for vtkGLTFDocumentLoader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkGLTFDocumentLoaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkGLTFDocumentLoader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkResourceStream.h"
#include "vtkURILoader.h"
#include "vtkSmartPointer.h"
#include "vtkGLTFDocumentLoader.h"

EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkGLTFDocumentLoader_class_enums) {
  emscripten::enum_<vtkGLTFDocumentLoader::Target>("vtkGLTFDocumentLoader_Target")
    .value("ARRAY_BUFFER", vtkGLTFDocumentLoader::Target::ARRAY_BUFFER)
    .value("ELEMENT_ARRAY_BUFFER", vtkGLTFDocumentLoader::Target::ELEMENT_ARRAY_BUFFER);
  emscripten::enum_<vtkGLTFDocumentLoader::AccessorType>("vtkGLTFDocumentLoader_AccessorType")
    .value("SCALAR", vtkGLTFDocumentLoader::AccessorType::SCALAR)
    .value("VEC2", vtkGLTFDocumentLoader::AccessorType::VEC2)
    .value("VEC3", vtkGLTFDocumentLoader::AccessorType::VEC3)
    .value("VEC4", vtkGLTFDocumentLoader::AccessorType::VEC4)
    .value("MAT2", vtkGLTFDocumentLoader::AccessorType::MAT2)
    .value("MAT3", vtkGLTFDocumentLoader::AccessorType::MAT3)
    .value("MAT4", vtkGLTFDocumentLoader::AccessorType::MAT4)
    .value("INVALID", vtkGLTFDocumentLoader::AccessorType::INVALID);
  emscripten::enum_<vtkGLTFDocumentLoader::ComponentType>("vtkGLTFDocumentLoader_ComponentType")
    .value("BYTE", vtkGLTFDocumentLoader::ComponentType::BYTE)
    .value("UNSIGNED_BYTE", vtkGLTFDocumentLoader::ComponentType::UNSIGNED_BYTE)
    .value("SHORT", vtkGLTFDocumentLoader::ComponentType::SHORT)
    .value("UNSIGNED_SHORT", vtkGLTFDocumentLoader::ComponentType::UNSIGNED_SHORT)
    .value("UNSIGNED_INT", vtkGLTFDocumentLoader::ComponentType::UNSIGNED_INT)
    .value("FLOAT", vtkGLTFDocumentLoader::ComponentType::FLOAT);
}
template<> void emscripten::internal::raw_destructor<vtkGLTFDocumentLoader>(vtkGLTFDocumentLoader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGLTFDocumentLoader_class) {
  using Target=vtkGLTFDocumentLoader::Target;
  using AccessorType=vtkGLTFDocumentLoader::AccessorType;
  using ComponentType=vtkGLTFDocumentLoader::ComponentType;
  emscripten::class_<vtkGLTFDocumentLoader, emscripten::base<vtkObject>>("vtkGLTFDocumentLoader")
    .smart_ptr<vtkSmartPointer<vtkGLTFDocumentLoader>>("vtkSmartPointer<vtkGLTFDocumentLoader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGLTFDocumentLoader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFDocumentLoader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGLTFDocumentLoader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGLTFDocumentLoader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGLTFDocumentLoader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGLTFDocumentLoader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGLTFDocumentLoader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ApplyAnimation", &vtkGLTFDocumentLoader::ApplyAnimation)
    .function("ResetAnimation", &vtkGLTFDocumentLoader::ResetAnimation)
    .function("LoadModelMetaDataFromFile", &vtkGLTFDocumentLoader::LoadModelMetaDataFromFile)
    .function("LoadModelMetaDataFromStream", &vtkGLTFDocumentLoader::LoadModelMetaDataFromStream, emscripten::allow_raw_pointers())
    .function("BuildModelVTKGeometry", &vtkGLTFDocumentLoader::BuildModelVTKGeometry)
    .class_function("GetNumberOfComponentsForType", &vtkGLTFDocumentLoader::GetNumberOfComponentsForType)
    .function("GetSupportedExtensions", &vtkGLTFDocumentLoader::GetSupportedExtensions)
    .function("GetUsedExtensions", &vtkGLTFDocumentLoader::GetUsedExtensions)
    .function("BuildGlobalTransforms", emscripten::select_overload<void(vtkGLTFDocumentLoader&, unsigned int, vtkSmartPointer<vtkMatrix4x4>)>([](vtkGLTFDocumentLoader& self, unsigned int arg_0, vtkSmartPointer<vtkMatrix4x4> arg_1) -> void { return self.BuildGlobalTransforms( arg_0, arg_1); }))
    .function("BuildGlobalTransforms", emscripten::select_overload<void(vtkGLTFDocumentLoader&)>([](vtkGLTFDocumentLoader& self) -> void { return self.BuildGlobalTransforms(); }))
    .function("PrepareData", &vtkGLTFDocumentLoader::PrepareData)
    .function("SetGLBStart", &vtkGLTFDocumentLoader::SetGLBStart)
    .function("GetGLBStart", &vtkGLTFDocumentLoader::GetGLBStart);
}

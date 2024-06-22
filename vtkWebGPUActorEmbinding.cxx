// JavaScript wrapper for vtkWebGPUActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkRenderingWebGPU.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingWebGPU.js/vtkWebGPUActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/WebGPU/vtkWebGPUActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkMapper.h"
#include "vtkSmartPointer.h"
#include "vtkWebGPUActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUActor_class_enums) {
  emscripten::enum_<vtkWebGPUActor::MapperRenderType>("vtkWebGPUActor_MapperRenderType")
    .value("None", vtkWebGPUActor::MapperRenderType::None)
    .value("UpdateBuffers", vtkWebGPUActor::MapperRenderType::UpdateBuffers)
    .value("RenderPassEncode", vtkWebGPUActor::MapperRenderType::RenderPassEncode)
    .value("RenderBundleEncode", vtkWebGPUActor::MapperRenderType::RenderBundleEncode);
}
template<> void emscripten::internal::raw_destructor<vtkWebGPUActor>(vtkWebGPUActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWebGPUActor_class) {
  using MapperRenderType=vtkWebGPUActor::MapperRenderType;
  using ShadingTypeEnum=vtkWebGPUActor::ShadingTypeEnum;
  using DirectionalMaskEnum=vtkWebGPUActor::DirectionalMaskEnum;
  emscripten::class_<vtkWebGPUActor, emscripten::base<vtkActor>>("vtkWebGPUActor")
    .smart_ptr<vtkSmartPointer<vtkWebGPUActor>>("vtkSmartPointer<vtkWebGPUActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWebGPUActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWebGPUActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWebGPUActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWebGPUActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWebGPUActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWebGPUActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CacheActorTransforms", &vtkWebGPUActor::CacheActorTransforms)
    .function("CacheActorRenderOptions", &vtkWebGPUActor::CacheActorRenderOptions)
    .function("CacheActorShadeOptions", &vtkWebGPUActor::CacheActorShadeOptions)
    .function("GetCachedActorInformation", emscripten::optional_override([](vtkWebGPUActor& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCachedActorInformation());}))
    .class_function("GetCacheSizeBytes", &vtkWebGPUActor::GetCacheSizeBytes)
    .function("Render", &vtkWebGPUActor::Render, emscripten::allow_raw_pointers())
    .function("Update", &vtkWebGPUActor::Update, emscripten::allow_raw_pointers())
    .function("HasOpaqueGeometry", &vtkWebGPUActor::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkWebGPUActor::HasTranslucentPolygonalGeometry)
    .function("UpdateKeyMatrices", &vtkWebGPUActor::UpdateKeyMatrices)
    .function("SetShadingType", &vtkWebGPUActor::SetShadingType)
    .function("SetDirectionalMaskType", &vtkWebGPUActor::SetDirectionalMaskType)
    .function("SetMapperRenderPipelineOutdated", &vtkWebGPUActor::SetMapperRenderPipelineOutdated)
    .function("GetMapperRenderType", &vtkWebGPUActor::GetMapperRenderType)
    .function("SetDynamicOffsets", &vtkWebGPUActor::SetDynamicOffsets);
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUActor_0_2_constants) {
    typedef vtkWebGPUActor::ShadingTypeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkWebGPUActor_ShadingTypeEnum_Global", vtkWebGPUActor::Global },
      { "vtkWebGPUActor_ShadingTypeEnum_Smooth", vtkWebGPUActor::Smooth },
      { "vtkWebGPUActor_ShadingTypeEnum_Flat", vtkWebGPUActor::Flat },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingWebGPU_vtkWebGPUActor_1_2_constants) {
    typedef vtkWebGPUActor::DirectionalMaskEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkWebGPUActor_DirectionalMaskEnum_NoNormals", vtkWebGPUActor::NoNormals },
      { "vtkWebGPUActor_DirectionalMaskEnum_PointNormals", vtkWebGPUActor::PointNormals },
      { "vtkWebGPUActor_DirectionalMaskEnum_PointTangents", vtkWebGPUActor::PointTangents },
      { "vtkWebGPUActor_DirectionalMaskEnum_CellNormals", vtkWebGPUActor::CellNormals },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

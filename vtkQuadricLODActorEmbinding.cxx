// JavaScript wrapper for vtkQuadricLODActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLOD.js/vtkRenderingLOD.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLOD.js/vtkQuadricLODActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/LOD/vtkQuadricLODActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadricClustering.h"
#include "vtkCamera.h"
#include "vtkRenderer.h"
#include "vtkMapper.h"
#include "vtkWindow.h"
#include "vtkProp.h"
#include "vtkQuadricLODActor.h"

EMSCRIPTEN_BINDINGS(vtkRenderingLOD_vtkQuadricLODActor_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkQuadricLODActor>(vtkQuadricLODActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadricLODActor_class) {
  using DataConfigurationEnum=vtkQuadricLODActor::DataConfigurationEnum;
  using PropTypeEnum=vtkQuadricLODActor::PropTypeEnum;
  emscripten::class_<vtkQuadricLODActor, emscripten::base<vtkActor>>("vtkQuadricLODActor")
    .smart_ptr<vtkSmartPointer<vtkQuadricLODActor>>("vtkSmartPointer<vtkQuadricLODActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadricLODActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadricLODActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadricLODActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadricLODActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadricLODActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadricLODActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadricLODActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDeferLODConstruction", &vtkQuadricLODActor::SetDeferLODConstruction)
    .function("GetDeferLODConstruction", &vtkQuadricLODActor::GetDeferLODConstruction)
    .function("DeferLODConstructionOn", &vtkQuadricLODActor::DeferLODConstructionOn)
    .function("DeferLODConstructionOff", &vtkQuadricLODActor::DeferLODConstructionOff)
    .function("SetStatic", &vtkQuadricLODActor::SetStatic)
    .function("GetStatic", &vtkQuadricLODActor::GetStatic)
    .function("StaticOn", &vtkQuadricLODActor::StaticOn)
    .function("StaticOff", &vtkQuadricLODActor::StaticOff)
    .function("SetDataConfiguration", &vtkQuadricLODActor::SetDataConfiguration)
    .function("GetDataConfigurationMinValue", &vtkQuadricLODActor::GetDataConfigurationMinValue)
    .function("GetDataConfigurationMaxValue", &vtkQuadricLODActor::GetDataConfigurationMaxValue)
    .function("GetDataConfiguration", &vtkQuadricLODActor::GetDataConfiguration)
    .function("SetDataConfigurationToUnknown", &vtkQuadricLODActor::SetDataConfigurationToUnknown)
    .function("SetDataConfigurationToXLine", &vtkQuadricLODActor::SetDataConfigurationToXLine)
    .function("SetDataConfigurationToYLine", &vtkQuadricLODActor::SetDataConfigurationToYLine)
    .function("SetDataConfigurationToZLine", &vtkQuadricLODActor::SetDataConfigurationToZLine)
    .function("SetDataConfigurationToXYPlane", &vtkQuadricLODActor::SetDataConfigurationToXYPlane)
    .function("SetDataConfigurationToYZPlane", &vtkQuadricLODActor::SetDataConfigurationToYZPlane)
    .function("SetDataConfigurationToXZPlane", &vtkQuadricLODActor::SetDataConfigurationToXZPlane)
    .function("SetDataConfigurationToXYZVolume", &vtkQuadricLODActor::SetDataConfigurationToXYZVolume)
    .function("SetCollapseDimensionRatio", &vtkQuadricLODActor::SetCollapseDimensionRatio)
    .function("GetCollapseDimensionRatioMinValue", &vtkQuadricLODActor::GetCollapseDimensionRatioMinValue)
    .function("GetCollapseDimensionRatioMaxValue", &vtkQuadricLODActor::GetCollapseDimensionRatioMaxValue)
    .function("GetCollapseDimensionRatio", &vtkQuadricLODActor::GetCollapseDimensionRatio)
    .function("SetLODFilter", &vtkQuadricLODActor::SetLODFilter, emscripten::allow_raw_pointers())
    .function("GetLODFilter", &vtkQuadricLODActor::GetLODFilter, emscripten::allow_raw_pointers())
    .function("SetPropType", &vtkQuadricLODActor::SetPropType)
    .function("GetPropTypeMinValue", &vtkQuadricLODActor::GetPropTypeMinValue)
    .function("GetPropTypeMaxValue", &vtkQuadricLODActor::GetPropTypeMaxValue)
    .function("GetPropType", &vtkQuadricLODActor::GetPropType)
    .function("SetPropTypeToFollower", &vtkQuadricLODActor::SetPropTypeToFollower)
    .function("SetPropTypeToActor", &vtkQuadricLODActor::SetPropTypeToActor)
    .function("SetCamera", &vtkQuadricLODActor::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkQuadricLODActor::GetCamera, emscripten::allow_raw_pointers())
    .function("Render", &vtkQuadricLODActor::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkQuadricLODActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkQuadricLODActor::ShallowCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingLOD_vtkQuadricLODActor_0_2_constants) {
    typedef vtkQuadricLODActor::DataConfigurationEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkQuadricLODActor_DataConfigurationEnum_UNKNOWN", vtkQuadricLODActor::UNKNOWN },
      { "vtkQuadricLODActor_DataConfigurationEnum_XLINE", vtkQuadricLODActor::XLINE },
      { "vtkQuadricLODActor_DataConfigurationEnum_YLINE", vtkQuadricLODActor::YLINE },
      { "vtkQuadricLODActor_DataConfigurationEnum_ZLINE", vtkQuadricLODActor::ZLINE },
      { "vtkQuadricLODActor_DataConfigurationEnum_XYPLANE", vtkQuadricLODActor::XYPLANE },
      { "vtkQuadricLODActor_DataConfigurationEnum_XZPLANE", vtkQuadricLODActor::XZPLANE },
      { "vtkQuadricLODActor_DataConfigurationEnum_YZPLANE", vtkQuadricLODActor::YZPLANE },
      { "vtkQuadricLODActor_DataConfigurationEnum_XYZVOLUME", vtkQuadricLODActor::XYZVOLUME },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingLOD_vtkQuadricLODActor_1_2_constants) {
    typedef vtkQuadricLODActor::PropTypeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkQuadricLODActor_PropTypeEnum_FOLLOWER", vtkQuadricLODActor::FOLLOWER },
      { "vtkQuadricLODActor_PropTypeEnum_ACTOR", vtkQuadricLODActor::ACTOR },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

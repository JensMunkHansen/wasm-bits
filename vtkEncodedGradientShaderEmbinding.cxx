// JavaScript wrapper for vtkEncodedGradientShader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkEncodedGradientShaderEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkEncodedGradientShader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkEncodedGradientEstimator.h"
#include "vtkEncodedGradientShader.h"

EMSCRIPTEN_BINDINGS(vtkRenderingVolume_vtkEncodedGradientShader_0_1_constants) {
  emscripten::constant("VTK_MAX_SHADING_TABLES", 100);
}
template<> void emscripten::internal::raw_destructor<vtkEncodedGradientShader>(vtkEncodedGradientShader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEncodedGradientShader_class) {
  emscripten::class_<vtkEncodedGradientShader, emscripten::base<vtkObject>>("vtkEncodedGradientShader")
    .smart_ptr<vtkSmartPointer<vtkEncodedGradientShader>>("vtkSmartPointer<vtkEncodedGradientShader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEncodedGradientShader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEncodedGradientShader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEncodedGradientShader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEncodedGradientShader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEncodedGradientShader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEncodedGradientShader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEncodedGradientShader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetZeroNormalDiffuseIntensity", &vtkEncodedGradientShader::SetZeroNormalDiffuseIntensity)
    .function("GetZeroNormalDiffuseIntensityMinValue", &vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMinValue)
    .function("GetZeroNormalDiffuseIntensityMaxValue", &vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMaxValue)
    .function("GetZeroNormalDiffuseIntensity", &vtkEncodedGradientShader::GetZeroNormalDiffuseIntensity)
    .function("SetZeroNormalSpecularIntensity", &vtkEncodedGradientShader::SetZeroNormalSpecularIntensity)
    .function("GetZeroNormalSpecularIntensityMinValue", &vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMinValue)
    .function("GetZeroNormalSpecularIntensityMaxValue", &vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMaxValue)
    .function("GetZeroNormalSpecularIntensity", &vtkEncodedGradientShader::GetZeroNormalSpecularIntensity)
    .function("UpdateShadingTable", &vtkEncodedGradientShader::UpdateShadingTable, emscripten::allow_raw_pointers())
    .function("GetRedDiffuseShadingTable", emscripten::optional_override([](vtkEncodedGradientShader& self, vtkVolume* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetRedDiffuseShadingTable( arg_0)) / sizeof(float);}), emscripten::allow_raw_pointers())
    .function("GetGreenDiffuseShadingTable", emscripten::optional_override([](vtkEncodedGradientShader& self, vtkVolume* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGreenDiffuseShadingTable( arg_0)) / sizeof(float);}), emscripten::allow_raw_pointers())
    .function("GetBlueDiffuseShadingTable", emscripten::optional_override([](vtkEncodedGradientShader& self, vtkVolume* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBlueDiffuseShadingTable( arg_0)) / sizeof(float);}), emscripten::allow_raw_pointers())
    .function("GetRedSpecularShadingTable", emscripten::optional_override([](vtkEncodedGradientShader& self, vtkVolume* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetRedSpecularShadingTable( arg_0)) / sizeof(float);}), emscripten::allow_raw_pointers())
    .function("GetGreenSpecularShadingTable", emscripten::optional_override([](vtkEncodedGradientShader& self, vtkVolume* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetGreenSpecularShadingTable( arg_0)) / sizeof(float);}), emscripten::allow_raw_pointers())
    .function("GetBlueSpecularShadingTable", emscripten::optional_override([](vtkEncodedGradientShader& self, vtkVolume* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetBlueSpecularShadingTable( arg_0)) / sizeof(float);}), emscripten::allow_raw_pointers())
    .function("SetActiveComponent", &vtkEncodedGradientShader::SetActiveComponent)
    .function("GetActiveComponentMinValue", &vtkEncodedGradientShader::GetActiveComponentMinValue)
    .function("GetActiveComponentMaxValue", &vtkEncodedGradientShader::GetActiveComponentMaxValue)
    .function("GetActiveComponent", &vtkEncodedGradientShader::GetActiveComponent);
}

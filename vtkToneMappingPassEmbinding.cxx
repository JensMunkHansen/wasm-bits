// JavaScript wrapper for vtkToneMappingPass with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkToneMappingPassEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkToneMappingPass.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderState.h"
#include "vtkWindow.h"
#include "vtkToneMappingPass.h"

template<> void emscripten::internal::raw_destructor<vtkToneMappingPass>(vtkToneMappingPass * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkToneMappingPass_class) {
  emscripten::class_<vtkToneMappingPass, emscripten::base<vtkImageProcessingPass>>("vtkToneMappingPass")
    .smart_ptr<vtkSmartPointer<vtkToneMappingPass>>("vtkSmartPointer<vtkToneMappingPass>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkToneMappingPass>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToneMappingPass::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkToneMappingPass& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkToneMappingPass::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkToneMappingPass::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkToneMappingPass::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkToneMappingPass& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReleaseGraphicsResources", &vtkToneMappingPass::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetGenericFilmicDefaultPresets", &vtkToneMappingPass::SetGenericFilmicDefaultPresets)
    .function("SetGenericFilmicUncharted2Presets", &vtkToneMappingPass::SetGenericFilmicUncharted2Presets)
    .function("SetToneMappingType", &vtkToneMappingPass::SetToneMappingType)
    .function("GetToneMappingTypeMinValue", &vtkToneMappingPass::GetToneMappingTypeMinValue)
    .function("GetToneMappingTypeMaxValue", &vtkToneMappingPass::GetToneMappingTypeMaxValue)
    .function("GetToneMappingType", &vtkToneMappingPass::GetToneMappingType)
    .function("GetExposure", &vtkToneMappingPass::GetExposure)
    .function("SetExposure", &vtkToneMappingPass::SetExposure)
    .function("SetContrast", &vtkToneMappingPass::SetContrast)
    .function("GetContrastMinValue", &vtkToneMappingPass::GetContrastMinValue)
    .function("GetContrastMaxValue", &vtkToneMappingPass::GetContrastMaxValue)
    .function("GetContrast", &vtkToneMappingPass::GetContrast)
    .function("SetShoulder", &vtkToneMappingPass::SetShoulder)
    .function("GetShoulderMinValue", &vtkToneMappingPass::GetShoulderMinValue)
    .function("GetShoulderMaxValue", &vtkToneMappingPass::GetShoulderMaxValue)
    .function("GetShoulder", &vtkToneMappingPass::GetShoulder)
    .function("SetMidIn", &vtkToneMappingPass::SetMidIn)
    .function("GetMidInMinValue", &vtkToneMappingPass::GetMidInMinValue)
    .function("GetMidInMaxValue", &vtkToneMappingPass::GetMidInMaxValue)
    .function("GetMidIn", &vtkToneMappingPass::GetMidIn)
    .function("SetMidOut", &vtkToneMappingPass::SetMidOut)
    .function("GetMidOutMinValue", &vtkToneMappingPass::GetMidOutMinValue)
    .function("GetMidOutMaxValue", &vtkToneMappingPass::GetMidOutMaxValue)
    .function("GetMidOut", &vtkToneMappingPass::GetMidOut)
    .function("SetHdrMax", &vtkToneMappingPass::SetHdrMax)
    .function("GetHdrMaxMinValue", &vtkToneMappingPass::GetHdrMaxMinValue)
    .function("GetHdrMaxMaxValue", &vtkToneMappingPass::GetHdrMaxMaxValue)
    .function("GetHdrMax", &vtkToneMappingPass::GetHdrMax)
    .function("SetUseACES", &vtkToneMappingPass::SetUseACES)
    .function("GetUseACES", &vtkToneMappingPass::GetUseACES);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkToneMappingPass_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkToneMappingPass_Clamp", vtkToneMappingPass::Clamp },
      { "vtkToneMappingPass_Reinhard", vtkToneMappingPass::Reinhard },
      { "vtkToneMappingPass_Exponential", vtkToneMappingPass::Exponential },
      { "vtkToneMappingPass_GenericFilmic", vtkToneMappingPass::GenericFilmic },
      { "vtkToneMappingPass_NeutralPBR", vtkToneMappingPass::NeutralPBR },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

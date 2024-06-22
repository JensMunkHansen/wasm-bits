// JavaScript wrapper for vtkImageBlend with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageBlendEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageBlend.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkImageStencilData.h"
#include "vtkImageBlend.h"

EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkImageBlend_0_1_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "VTK_IMAGE_BLEND_MODE_NORMAL", 0 },
      { "VTK_IMAGE_BLEND_MODE_COMPOUND", 1 },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageBlend>(vtkImageBlend * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageBlend_class) {
  emscripten::class_<vtkImageBlend, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageBlend")
    .smart_ptr<vtkSmartPointer<vtkImageBlend>>("vtkSmartPointer<vtkImageBlend>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageBlend>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageBlend::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageBlend& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageBlend::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageBlend::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageBlend::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageBlend& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ReplaceNthInputConnection", &vtkImageBlend::ReplaceNthInputConnection, emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageBlend&, int, vtkDataObject*)>([](vtkImageBlend& self, int arg_0, vtkDataObject* arg_1) -> void { return self.SetInputData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetInputData", emscripten::select_overload<void(vtkImageBlend&, vtkDataObject*)>([](vtkImageBlend& self, vtkDataObject* arg_0) -> void { return self.SetInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageBlend&, int)>([](vtkImageBlend& self, int arg_0) -> vtkDataObject* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkDataObject*(vtkImageBlend&)>([](vtkImageBlend& self) -> vtkDataObject* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfInputs", &vtkImageBlend::GetNumberOfInputs)
    .function("SetOpacity", &vtkImageBlend::SetOpacity)
    .function("GetOpacity", &vtkImageBlend::GetOpacity)
    .function("SetStencilConnection", &vtkImageBlend::SetStencilConnection, emscripten::allow_raw_pointers())
    .function("SetStencilData", &vtkImageBlend::SetStencilData, emscripten::allow_raw_pointers())
    .function("GetStencil", &vtkImageBlend::GetStencil, emscripten::allow_raw_pointers())
    .function("SetBlendMode", &vtkImageBlend::SetBlendMode)
    .function("GetBlendModeMinValue", &vtkImageBlend::GetBlendModeMinValue)
    .function("GetBlendModeMaxValue", &vtkImageBlend::GetBlendModeMaxValue)
    .function("GetBlendMode", &vtkImageBlend::GetBlendMode)
    .function("SetBlendModeToNormal", &vtkImageBlend::SetBlendModeToNormal)
    .function("SetBlendModeToCompound", &vtkImageBlend::SetBlendModeToCompound)
    .function("GetBlendModeAsString", emscripten::optional_override([](vtkImageBlend& self) -> std::string {  return self.GetBlendModeAsString();}))
    .function("SetCompoundThreshold", &vtkImageBlend::SetCompoundThreshold)
    .function("GetCompoundThreshold", &vtkImageBlend::GetCompoundThreshold)
    .function("SetCompoundAlpha", &vtkImageBlend::SetCompoundAlpha)
    .function("GetCompoundAlpha", &vtkImageBlend::GetCompoundAlpha)
    .function("CompoundAlphaOn", &vtkImageBlend::CompoundAlphaOn)
    .function("CompoundAlphaOff", &vtkImageBlend::CompoundAlphaOff);
}

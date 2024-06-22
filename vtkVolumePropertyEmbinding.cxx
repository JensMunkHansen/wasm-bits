// JavaScript wrapper for vtkVolumeProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkVolumePropertyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkVolumeProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"
#include "vtkColorTransferFunction.h"
#include "vtkImageData.h"
#include "vtkContourValues.h"
#include "vtkImplicitFunction.h"
#include "vtkTimeStamp.h"
#include "vtkVolumeProperty.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkVolumeProperty_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkVolumeProperty>(vtkVolumeProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeProperty_class) {
  using TransferMode=vtkVolumeProperty::TransferMode;
  emscripten::class_<vtkVolumeProperty, emscripten::base<vtkObject>>("vtkVolumeProperty")
    .smart_ptr<vtkSmartPointer<vtkVolumeProperty>>("vtkSmartPointer<vtkVolumeProperty>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumeProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("DeepCopy", &vtkVolumeProperty::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkVolumeProperty::GetMTime)
    .function("SetIndependentComponents", &vtkVolumeProperty::SetIndependentComponents)
    .function("GetIndependentComponentsMinValue", &vtkVolumeProperty::GetIndependentComponentsMinValue)
    .function("GetIndependentComponentsMaxValue", &vtkVolumeProperty::GetIndependentComponentsMaxValue)
    .function("GetIndependentComponents", &vtkVolumeProperty::GetIndependentComponents)
    .function("IndependentComponentsOn", &vtkVolumeProperty::IndependentComponentsOn)
    .function("IndependentComponentsOff", &vtkVolumeProperty::IndependentComponentsOff)
    .function("SetInterpolationType", &vtkVolumeProperty::SetInterpolationType)
    .function("GetInterpolationTypeMinValue", &vtkVolumeProperty::GetInterpolationTypeMinValue)
    .function("GetInterpolationTypeMaxValue", &vtkVolumeProperty::GetInterpolationTypeMaxValue)
    .function("GetInterpolationType", &vtkVolumeProperty::GetInterpolationType)
    .function("SetInterpolationTypeToNearest", &vtkVolumeProperty::SetInterpolationTypeToNearest)
    .function("SetInterpolationTypeToLinear", &vtkVolumeProperty::SetInterpolationTypeToLinear)
    .function("GetInterpolationTypeAsString", emscripten::optional_override([](vtkVolumeProperty& self) -> std::string {  return self.GetInterpolationTypeAsString();}))
    .function("SetComponentWeight", &vtkVolumeProperty::SetComponentWeight)
    .function("GetComponentWeight", &vtkVolumeProperty::GetComponentWeight)
    .function("SetColor", emscripten::select_overload<void(vtkVolumeProperty&, int, vtkPiecewiseFunction*)>([](vtkVolumeProperty& self, int arg_0, vtkPiecewiseFunction* arg_1) -> void { return self.SetColor( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetColor", emscripten::select_overload<void(vtkVolumeProperty&, int, vtkColorTransferFunction*)>([](vtkVolumeProperty& self, int arg_0, vtkColorTransferFunction* arg_1) -> void { return self.SetColor( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetColor", emscripten::select_overload<void(vtkVolumeProperty&, vtkPiecewiseFunction*)>([](vtkVolumeProperty& self, vtkPiecewiseFunction* arg_0) -> void { return self.SetColor( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetColor", emscripten::select_overload<void(vtkVolumeProperty&, vtkColorTransferFunction*)>([](vtkVolumeProperty& self, vtkColorTransferFunction* arg_0) -> void { return self.SetColor( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetColorChannels", emscripten::select_overload<int(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> int { return self.GetColorChannels( arg_0); }))
    .function("GetColorChannels", emscripten::select_overload<int(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> int { return self.GetColorChannels(); }))
    .function("GetGrayTransferFunction", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkPiecewiseFunction* { return self.GetGrayTransferFunction( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetGrayTransferFunction", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkPiecewiseFunction* { return self.GetGrayTransferFunction(); }), emscripten::allow_raw_pointers())
    .function("GetRGBTransferFunction", emscripten::select_overload<vtkColorTransferFunction*(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkColorTransferFunction* { return self.GetRGBTransferFunction( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetRGBTransferFunction", emscripten::select_overload<vtkColorTransferFunction*(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkColorTransferFunction* { return self.GetRGBTransferFunction(); }), emscripten::allow_raw_pointers())
    .function("SetScalarOpacity", emscripten::select_overload<void(vtkVolumeProperty&, int, vtkPiecewiseFunction*)>([](vtkVolumeProperty& self, int arg_0, vtkPiecewiseFunction* arg_1) -> void { return self.SetScalarOpacity( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetScalarOpacity", emscripten::select_overload<void(vtkVolumeProperty&, vtkPiecewiseFunction*)>([](vtkVolumeProperty& self, vtkPiecewiseFunction* arg_0) -> void { return self.SetScalarOpacity( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarOpacity", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkPiecewiseFunction* { return self.GetScalarOpacity( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetScalarOpacity", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkPiecewiseFunction* { return self.GetScalarOpacity(); }), emscripten::allow_raw_pointers())
    .function("SetScalarOpacityUnitDistance", emscripten::select_overload<void(vtkVolumeProperty&, int, double)>([](vtkVolumeProperty& self, int arg_0, double arg_1) -> void { return self.SetScalarOpacityUnitDistance( arg_0, arg_1); }))
    .function("SetScalarOpacityUnitDistance", emscripten::select_overload<void(vtkVolumeProperty&, double)>([](vtkVolumeProperty& self, double arg_0) -> void { return self.SetScalarOpacityUnitDistance( arg_0); }))
    .function("GetScalarOpacityUnitDistance", emscripten::select_overload<double(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> double { return self.GetScalarOpacityUnitDistance( arg_0); }))
    .function("GetScalarOpacityUnitDistance", emscripten::select_overload<double(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> double { return self.GetScalarOpacityUnitDistance(); }))
    .function("SetGradientOpacity", emscripten::select_overload<void(vtkVolumeProperty&, int, vtkPiecewiseFunction*)>([](vtkVolumeProperty& self, int arg_0, vtkPiecewiseFunction* arg_1) -> void { return self.SetGradientOpacity( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetGradientOpacity", emscripten::select_overload<void(vtkVolumeProperty&, vtkPiecewiseFunction*)>([](vtkVolumeProperty& self, vtkPiecewiseFunction* arg_0) -> void { return self.SetGradientOpacity( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetTransferFunction2D", emscripten::select_overload<void(vtkVolumeProperty&, int, vtkImageData*)>([](vtkVolumeProperty& self, int arg_0, vtkImageData* arg_1) -> void { return self.SetTransferFunction2D( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetTransferFunction2D", emscripten::select_overload<void(vtkVolumeProperty&, vtkImageData*)>([](vtkVolumeProperty& self, vtkImageData* arg_0) -> void { return self.SetTransferFunction2D( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetTransferFunction2D", emscripten::select_overload<vtkImageData*(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkImageData* { return self.GetTransferFunction2D( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetTransferFunction2D", emscripten::select_overload<vtkImageData*(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkImageData* { return self.GetTransferFunction2D(); }), emscripten::allow_raw_pointers())
    .function("SetTransferFunctionMode", &vtkVolumeProperty::SetTransferFunctionMode)
    .function("GetTransferFunctionModeMinValue", &vtkVolumeProperty::GetTransferFunctionModeMinValue)
    .function("GetTransferFunctionModeMaxValue", &vtkVolumeProperty::GetTransferFunctionModeMaxValue)
    .function("GetTransferFunctionMode", &vtkVolumeProperty::GetTransferFunctionMode)
    .function("SetTransferFunctionModeTo1D", &vtkVolumeProperty::SetTransferFunctionModeTo1D)
    .function("SetTransferFunctionModeTo2D", &vtkVolumeProperty::SetTransferFunctionModeTo2D)
    .function("GetGradientOpacity", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkPiecewiseFunction* { return self.GetGradientOpacity( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetGradientOpacity", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkPiecewiseFunction* { return self.GetGradientOpacity(); }), emscripten::allow_raw_pointers())
    .function("SetDisableGradientOpacity", emscripten::select_overload<void(vtkVolumeProperty&, int, int)>([](vtkVolumeProperty& self, int arg_0, int arg_1) -> void { return self.SetDisableGradientOpacity( arg_0, arg_1); }))
    .function("SetDisableGradientOpacity", emscripten::select_overload<void(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> void { return self.SetDisableGradientOpacity( arg_0); }))
    .function("DisableGradientOpacityOn", emscripten::select_overload<void(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> void { return self.DisableGradientOpacityOn( arg_0); }))
    .function("DisableGradientOpacityOn", emscripten::select_overload<void(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> void { return self.DisableGradientOpacityOn(); }))
    .function("DisableGradientOpacityOff", emscripten::select_overload<void(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> void { return self.DisableGradientOpacityOff( arg_0); }))
    .function("DisableGradientOpacityOff", emscripten::select_overload<void(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> void { return self.DisableGradientOpacityOff(); }))
    .function("GetDisableGradientOpacity", emscripten::select_overload<int(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> int { return self.GetDisableGradientOpacity( arg_0); }))
    .function("GetDisableGradientOpacity", emscripten::select_overload<int(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> int { return self.GetDisableGradientOpacity(); }))
    .function("GetStoredGradientOpacity", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkPiecewiseFunction* { return self.GetStoredGradientOpacity( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetStoredGradientOpacity", emscripten::select_overload<vtkPiecewiseFunction*(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkPiecewiseFunction* { return self.GetStoredGradientOpacity(); }), emscripten::allow_raw_pointers())
    .function("HasGradientOpacity", &vtkVolumeProperty::HasGradientOpacity)
    .function("HasLabelGradientOpacity", &vtkVolumeProperty::HasLabelGradientOpacity)
    .function("SetShade", emscripten::select_overload<void(vtkVolumeProperty&, int, int)>([](vtkVolumeProperty& self, int arg_0, int arg_1) -> void { return self.SetShade( arg_0, arg_1); }))
    .function("SetShade", emscripten::select_overload<void(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> void { return self.SetShade( arg_0); }))
    .function("GetShade", emscripten::select_overload<int(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> int { return self.GetShade( arg_0); }))
    .function("GetShade", emscripten::select_overload<int(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> int { return self.GetShade(); }))
    .function("ShadeOn", emscripten::select_overload<void(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> void { return self.ShadeOn( arg_0); }))
    .function("ShadeOn", emscripten::select_overload<void(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> void { return self.ShadeOn(); }))
    .function("ShadeOff", emscripten::select_overload<void(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> void { return self.ShadeOff( arg_0); }))
    .function("ShadeOff", emscripten::select_overload<void(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> void { return self.ShadeOff(); }))
    .function("SetAmbient", emscripten::select_overload<void(vtkVolumeProperty&, int, double)>([](vtkVolumeProperty& self, int arg_0, double arg_1) -> void { return self.SetAmbient( arg_0, arg_1); }))
    .function("SetAmbient", emscripten::select_overload<void(vtkVolumeProperty&, double)>([](vtkVolumeProperty& self, double arg_0) -> void { return self.SetAmbient( arg_0); }))
    .function("GetAmbient", emscripten::select_overload<double(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> double { return self.GetAmbient( arg_0); }))
    .function("GetAmbient", emscripten::select_overload<double(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> double { return self.GetAmbient(); }))
    .function("SetDiffuse", emscripten::select_overload<void(vtkVolumeProperty&, int, double)>([](vtkVolumeProperty& self, int arg_0, double arg_1) -> void { return self.SetDiffuse( arg_0, arg_1); }))
    .function("SetDiffuse", emscripten::select_overload<void(vtkVolumeProperty&, double)>([](vtkVolumeProperty& self, double arg_0) -> void { return self.SetDiffuse( arg_0); }))
    .function("GetDiffuse", emscripten::select_overload<double(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> double { return self.GetDiffuse( arg_0); }))
    .function("GetDiffuse", emscripten::select_overload<double(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> double { return self.GetDiffuse(); }))
    .function("SetSpecular", emscripten::select_overload<void(vtkVolumeProperty&, int, double)>([](vtkVolumeProperty& self, int arg_0, double arg_1) -> void { return self.SetSpecular( arg_0, arg_1); }))
    .function("SetSpecular", emscripten::select_overload<void(vtkVolumeProperty&, double)>([](vtkVolumeProperty& self, double arg_0) -> void { return self.SetSpecular( arg_0); }))
    .function("GetSpecular", emscripten::select_overload<double(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> double { return self.GetSpecular( arg_0); }))
    .function("GetSpecular", emscripten::select_overload<double(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> double { return self.GetSpecular(); }))
    .function("SetSpecularPower", emscripten::select_overload<void(vtkVolumeProperty&, int, double)>([](vtkVolumeProperty& self, int arg_0, double arg_1) -> void { return self.SetSpecularPower( arg_0, arg_1); }))
    .function("SetSpecularPower", emscripten::select_overload<void(vtkVolumeProperty&, double)>([](vtkVolumeProperty& self, double arg_0) -> void { return self.SetSpecularPower( arg_0); }))
    .function("GetSpecularPower", emscripten::select_overload<double(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> double { return self.GetSpecularPower( arg_0); }))
    .function("GetSpecularPower", emscripten::select_overload<double(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> double { return self.GetSpecularPower(); }))
    .function("GetIsoSurfaceValues", &vtkVolumeProperty::GetIsoSurfaceValues, emscripten::allow_raw_pointers())
    .function("SetSliceFunction", &vtkVolumeProperty::SetSliceFunction, emscripten::allow_raw_pointers())
    .function("GetSliceFunction", &vtkVolumeProperty::GetSliceFunction, emscripten::allow_raw_pointers())
    .function("SetScatteringAnisotropy", &vtkVolumeProperty::SetScatteringAnisotropy)
    .function("GetScatteringAnisotropyMinValue", &vtkVolumeProperty::GetScatteringAnisotropyMinValue)
    .function("GetScatteringAnisotropyMaxValue", &vtkVolumeProperty::GetScatteringAnisotropyMaxValue)
    .function("GetScatteringAnisotropy", &vtkVolumeProperty::GetScatteringAnisotropy)
    .function("UpdateMTimes", &vtkVolumeProperty::UpdateMTimes)
    .function("GetGradientOpacityMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkTimeStamp { return self.GetGradientOpacityMTime( arg_0); }))
    .function("GetGradientOpacityMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkTimeStamp { return self.GetGradientOpacityMTime(); }))
    .function("GetScalarOpacityMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkTimeStamp { return self.GetScalarOpacityMTime( arg_0); }))
    .function("GetScalarOpacityMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkTimeStamp { return self.GetScalarOpacityMTime(); }))
    .function("GetRGBTransferFunctionMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkTimeStamp { return self.GetRGBTransferFunctionMTime( arg_0); }))
    .function("GetRGBTransferFunctionMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkTimeStamp { return self.GetRGBTransferFunctionMTime(); }))
    .function("GetGrayTransferFunctionMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&, int)>([](vtkVolumeProperty& self, int arg_0) -> vtkTimeStamp { return self.GetGrayTransferFunctionMTime( arg_0); }))
    .function("GetGrayTransferFunctionMTime", emscripten::select_overload<vtkTimeStamp(vtkVolumeProperty&)>([](vtkVolumeProperty& self) -> vtkTimeStamp { return self.GetGrayTransferFunctionMTime(); }))
    .function("SetUseClippedVoxelIntensity", &vtkVolumeProperty::SetUseClippedVoxelIntensity)
    .function("GetUseClippedVoxelIntensity", &vtkVolumeProperty::GetUseClippedVoxelIntensity)
    .function("UseClippedVoxelIntensityOn", &vtkVolumeProperty::UseClippedVoxelIntensityOn)
    .function("UseClippedVoxelIntensityOff", &vtkVolumeProperty::UseClippedVoxelIntensityOff)
    .function("SetClippedVoxelIntensity", &vtkVolumeProperty::SetClippedVoxelIntensity)
    .function("GetClippedVoxelIntensity", &vtkVolumeProperty::GetClippedVoxelIntensity)
    .function("SetLabelColor", &vtkVolumeProperty::SetLabelColor, emscripten::allow_raw_pointers())
    .function("GetLabelColor", &vtkVolumeProperty::GetLabelColor, emscripten::allow_raw_pointers())
    .function("SetLabelScalarOpacity", &vtkVolumeProperty::SetLabelScalarOpacity, emscripten::allow_raw_pointers())
    .function("GetLabelScalarOpacity", &vtkVolumeProperty::GetLabelScalarOpacity, emscripten::allow_raw_pointers())
    .function("SetLabelGradientOpacity", &vtkVolumeProperty::SetLabelGradientOpacity, emscripten::allow_raw_pointers())
    .function("GetLabelGradientOpacity", &vtkVolumeProperty::GetLabelGradientOpacity, emscripten::allow_raw_pointers())
    .function("GetLabelColorMTime", &vtkVolumeProperty::GetLabelColorMTime)
    .function("GetLabelScalarOpacityMTime", &vtkVolumeProperty::GetLabelScalarOpacityMTime)
    .function("GetLabelGradientOpacityMTime", &vtkVolumeProperty::GetLabelGradientOpacityMTime)
    .function("GetNumberOfLabels", &vtkVolumeProperty::GetNumberOfLabels);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkVolumeProperty_0_2_constants) {
    typedef vtkVolumeProperty::TransferMode cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkVolumeProperty_TransferMode_TF_1D", vtkVolumeProperty::TF_1D },
      { "vtkVolumeProperty_TransferMode_TF_2D", vtkVolumeProperty::TF_2D },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

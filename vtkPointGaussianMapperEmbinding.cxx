// JavaScript wrapper for vtkPointGaussianMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPointGaussianMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPointGaussianMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"
#include "vtkPointGaussianMapper.h"

template<> void emscripten::internal::raw_destructor<vtkPointGaussianMapper>(vtkPointGaussianMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointGaussianMapper_class) {
  emscripten::class_<vtkPointGaussianMapper, emscripten::base<vtkPolyDataMapper>>("vtkPointGaussianMapper")
    .smart_ptr<vtkSmartPointer<vtkPointGaussianMapper>>("vtkSmartPointer<vtkPointGaussianMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointGaussianMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointGaussianMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointGaussianMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointGaussianMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointGaussianMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointGaussianMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointGaussianMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFunction", &vtkPointGaussianMapper::SetScaleFunction, emscripten::allow_raw_pointers())
    .function("GetScaleFunction", &vtkPointGaussianMapper::GetScaleFunction, emscripten::allow_raw_pointers())
    .function("SetScaleTableSize", &vtkPointGaussianMapper::SetScaleTableSize)
    .function("GetScaleTableSize", &vtkPointGaussianMapper::GetScaleTableSize)
    .function("SetScaleArray", emscripten::optional_override([](vtkPointGaussianMapper& self, const std::string & arg_0) -> void {  return self.SetScaleArray( arg_0.c_str());}))
    .function("GetScaleArray", emscripten::optional_override([](vtkPointGaussianMapper& self) -> std::string {  return self.GetScaleArray();}))
    .function("SetScaleArrayComponent", &vtkPointGaussianMapper::SetScaleArrayComponent)
    .function("GetScaleArrayComponent", &vtkPointGaussianMapper::GetScaleArrayComponent)
    .function("SetAnisotropic", &vtkPointGaussianMapper::SetAnisotropic)
    .function("GetAnisotropic", &vtkPointGaussianMapper::GetAnisotropic)
    .function("AnisotropicOn", &vtkPointGaussianMapper::AnisotropicOn)
    .function("AnisotropicOff", &vtkPointGaussianMapper::AnisotropicOff)
    .function("SetScaleFactor", &vtkPointGaussianMapper::SetScaleFactor)
    .function("GetScaleFactor", &vtkPointGaussianMapper::GetScaleFactor)
    .function("SetRotationArray", emscripten::optional_override([](vtkPointGaussianMapper& self, const std::string & arg_0) -> void {  return self.SetRotationArray( arg_0.c_str());}))
    .function("GetRotationArray", emscripten::optional_override([](vtkPointGaussianMapper& self) -> std::string {  return self.GetRotationArray();}))
    .function("SetEmissive", &vtkPointGaussianMapper::SetEmissive)
    .function("GetEmissive", &vtkPointGaussianMapper::GetEmissive)
    .function("EmissiveOn", &vtkPointGaussianMapper::EmissiveOn)
    .function("EmissiveOff", &vtkPointGaussianMapper::EmissiveOff)
    .function("SetScalarOpacityFunction", &vtkPointGaussianMapper::SetScalarOpacityFunction, emscripten::allow_raw_pointers())
    .function("GetScalarOpacityFunction", &vtkPointGaussianMapper::GetScalarOpacityFunction, emscripten::allow_raw_pointers())
    .function("SetOpacityTableSize", &vtkPointGaussianMapper::SetOpacityTableSize)
    .function("GetOpacityTableSize", &vtkPointGaussianMapper::GetOpacityTableSize)
    .function("SetOpacityArray", emscripten::optional_override([](vtkPointGaussianMapper& self, const std::string & arg_0) -> void {  return self.SetOpacityArray( arg_0.c_str());}))
    .function("GetOpacityArray", emscripten::optional_override([](vtkPointGaussianMapper& self) -> std::string {  return self.GetOpacityArray();}))
    .function("SetOpacityArrayComponent", &vtkPointGaussianMapper::SetOpacityArrayComponent)
    .function("GetOpacityArrayComponent", &vtkPointGaussianMapper::GetOpacityArrayComponent)
    .function("SetSplatShaderCode", emscripten::optional_override([](vtkPointGaussianMapper& self, const std::string & arg_0) -> void {  return self.SetSplatShaderCode( arg_0.c_str());}))
    .function("GetSplatShaderCode", emscripten::optional_override([](vtkPointGaussianMapper& self) -> std::string {  return self.GetSplatShaderCode();}))
    .function("SetBoundScale", &vtkPointGaussianMapper::SetBoundScale)
    .function("GetBoundScale", &vtkPointGaussianMapper::GetBoundScale)
    .function("SetLowpassMatrix", emscripten::select_overload<void(vtkPointGaussianMapper&, float, float, float)>([](vtkPointGaussianMapper& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetLowpassMatrix( arg_0, arg_1, arg_2); }))
    .function("GetSupportsSelection", &vtkPointGaussianMapper::GetSupportsSelection);
}

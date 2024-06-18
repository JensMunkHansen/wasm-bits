// JavaScript wrapper for vtkAbstractVolumeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAbstractVolumeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAbstractVolumeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataObject.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkAbstractVolumeMapper.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractVolumeMapper>(vtkAbstractVolumeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractVolumeMapper_class) {
  emscripten::class_<vtkAbstractVolumeMapper, emscripten::base<vtkAbstractMapper3D>>("vtkAbstractVolumeMapper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractVolumeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractVolumeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractVolumeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractVolumeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractVolumeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractVolumeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataSetInput", &vtkAbstractVolumeMapper::GetDataSetInput, emscripten::allow_raw_pointers())
    .function("GetDataObjectInput", &vtkAbstractVolumeMapper::GetDataObjectInput, emscripten::allow_raw_pointers())
    .function("SetScalarMode", &vtkAbstractVolumeMapper::SetScalarMode)
    .function("GetScalarMode", &vtkAbstractVolumeMapper::GetScalarMode)
    .function("SetArrayAccessMode", &vtkAbstractVolumeMapper::SetArrayAccessMode)
    .function("SetScalarModeToDefault", &vtkAbstractVolumeMapper::SetScalarModeToDefault)
    .function("SetScalarModeToUsePointData", &vtkAbstractVolumeMapper::SetScalarModeToUsePointData)
    .function("SetScalarModeToUseCellData", &vtkAbstractVolumeMapper::SetScalarModeToUseCellData)
    .function("SetScalarModeToUsePointFieldData", &vtkAbstractVolumeMapper::SetScalarModeToUsePointFieldData)
    .function("SetScalarModeToUseCellFieldData", &vtkAbstractVolumeMapper::SetScalarModeToUseCellFieldData)
    .function("SelectScalarArray", emscripten::select_overload<void(vtkAbstractVolumeMapper&, int)>([](vtkAbstractVolumeMapper& self, int arg_0) -> void { return self.SelectScalarArray( arg_0); }))
    .function("SelectScalarArray", emscripten::select_overload<void(vtkAbstractVolumeMapper&, const std::string &)>([](vtkAbstractVolumeMapper& self, const std::string & arg_0) -> void { return self.SelectScalarArray( arg_0.c_str()); }))
    .function("GetArrayName", emscripten::optional_override([](vtkAbstractVolumeMapper& self) -> std::string {  return self.GetArrayName();}))
    .function("GetArrayId", &vtkAbstractVolumeMapper::GetArrayId)
    .function("GetArrayAccessMode", &vtkAbstractVolumeMapper::GetArrayAccessMode)
    .function("GetScalarModeAsString", emscripten::optional_override([](vtkAbstractVolumeMapper& self) -> std::string {  return self.GetScalarModeAsString();}))
    .function("GetGradientMagnitudeScale", emscripten::select_overload<float(vtkAbstractVolumeMapper&)>([](vtkAbstractVolumeMapper& self) -> float { return self.GetGradientMagnitudeScale(); }))
    .function("GetGradientMagnitudeScale", emscripten::select_overload<float(vtkAbstractVolumeMapper&, int)>([](vtkAbstractVolumeMapper& self, int arg_0) -> float { return self.GetGradientMagnitudeScale( arg_0); }))
    .function("GetGradientMagnitudeBias", emscripten::select_overload<float(vtkAbstractVolumeMapper&)>([](vtkAbstractVolumeMapper& self) -> float { return self.GetGradientMagnitudeBias(); }))
    .function("GetGradientMagnitudeBias", emscripten::select_overload<float(vtkAbstractVolumeMapper&, int)>([](vtkAbstractVolumeMapper& self, int arg_0) -> float { return self.GetGradientMagnitudeBias( arg_0); }))
    .function("ReleaseGraphicsResources", &vtkAbstractVolumeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

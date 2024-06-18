// JavaScript wrapper for vtkVolume with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkVolumeEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkVolume.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractVolumeMapper.h"
#include "vtkVolumeProperty.h"
#include "vtkPropCollection.h"
#include "vtkProp.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"

template<> void emscripten::internal::raw_destructor<vtkVolume>(vtkVolume * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolume_class) {
  emscripten::class_<vtkVolume, emscripten::base<vtkProp3D>>("vtkVolume")
    .smart_ptr<vtkSmartPointer<vtkVolume>>("vtkSmartPointer<vtkVolume>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVolume>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolume::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolume& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolume::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolume::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolume::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolume& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMapper", &vtkVolume::SetMapper, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkVolume::GetMapper, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkVolume::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkVolume::GetProperty, emscripten::allow_raw_pointers())
    .function("GetVolumes", &vtkVolume::GetVolumes, emscripten::allow_raw_pointers())
    .function("Update", &vtkVolume::Update)
    .function("GetMinXBound", &vtkVolume::GetMinXBound)
    .function("GetMaxXBound", &vtkVolume::GetMaxXBound)
    .function("GetMinYBound", &vtkVolume::GetMinYBound)
    .function("GetMaxYBound", &vtkVolume::GetMaxYBound)
    .function("GetMinZBound", &vtkVolume::GetMinZBound)
    .function("GetMaxZBound", &vtkVolume::GetMaxZBound)
    .function("GetMTime", &vtkVolume::GetMTime)
    .function("GetRedrawMTime", &vtkVolume::GetRedrawMTime)
    .function("ShallowCopy", &vtkVolume::ShallowCopy, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkVolume::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkVolume::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetCorrectedScalarOpacityArray", emscripten::select_overload<std::uintptr_t(vtkVolume&, int)>([](vtkVolume& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCorrectedScalarOpacityArray( arg_0)); }))
    .function("GetCorrectedScalarOpacityArray", emscripten::select_overload<std::uintptr_t(vtkVolume&)>([](vtkVolume& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetCorrectedScalarOpacityArray()); }))
    .function("GetScalarOpacityArray", emscripten::select_overload<std::uintptr_t(vtkVolume&, int)>([](vtkVolume& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetScalarOpacityArray( arg_0)); }))
    .function("GetScalarOpacityArray", emscripten::select_overload<std::uintptr_t(vtkVolume&)>([](vtkVolume& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetScalarOpacityArray()); }))
    .function("GetGradientOpacityArray", emscripten::select_overload<std::uintptr_t(vtkVolume&, int)>([](vtkVolume& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetGradientOpacityArray( arg_0)); }))
    .function("GetGradientOpacityArray", emscripten::select_overload<std::uintptr_t(vtkVolume&)>([](vtkVolume& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetGradientOpacityArray()); }))
    .function("GetGrayArray", emscripten::select_overload<std::uintptr_t(vtkVolume&, int)>([](vtkVolume& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetGrayArray( arg_0)); }))
    .function("GetGrayArray", emscripten::select_overload<std::uintptr_t(vtkVolume&)>([](vtkVolume& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetGrayArray()); }))
    .function("GetRGBArray", emscripten::select_overload<std::uintptr_t(vtkVolume&, int)>([](vtkVolume& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBArray( arg_0)); }))
    .function("GetRGBArray", emscripten::select_overload<std::uintptr_t(vtkVolume&)>([](vtkVolume& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetRGBArray()); }))
    .function("GetGradientOpacityConstant", emscripten::select_overload<float(vtkVolume&, int)>([](vtkVolume& self, int arg_0) -> float { return self.GetGradientOpacityConstant( arg_0); }))
    .function("GetGradientOpacityConstant", emscripten::select_overload<float(vtkVolume&)>([](vtkVolume& self) -> float { return self.GetGradientOpacityConstant(); }))
    .function("GetArraySize", &vtkVolume::GetArraySize)
    .function("UpdateTransferFunctions", &vtkVolume::UpdateTransferFunctions, emscripten::allow_raw_pointers())
    .function("UpdateScalarOpacityforSampleSize", &vtkVolume::UpdateScalarOpacityforSampleSize, emscripten::allow_raw_pointers())
    .function("GetSupportsSelection", &vtkVolume::GetSupportsSelection);
}

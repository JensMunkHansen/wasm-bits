// JavaScript wrapper for vtkCellPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCellPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCellPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkAbstractCellLocator.h"
#include "vtkTexture.h"
#include "vtkCellPicker.h"

template<> void emscripten::internal::raw_destructor<vtkCellPicker>(vtkCellPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellPicker_class) {
  emscripten::class_<vtkCellPicker, emscripten::base<vtkPicker>>("vtkCellPicker")
    .smart_ptr<vtkSmartPointer<vtkCellPicker>>("vtkSmartPointer<vtkCellPicker>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Pick", &vtkCellPicker::Pick, emscripten::allow_raw_pointers())
    .function("AddLocator", &vtkCellPicker::AddLocator, emscripten::allow_raw_pointers())
    .function("RemoveLocator", &vtkCellPicker::RemoveLocator, emscripten::allow_raw_pointers())
    .function("RemoveAllLocators", &vtkCellPicker::RemoveAllLocators)
    .function("SetVolumeOpacityIsovalue", &vtkCellPicker::SetVolumeOpacityIsovalue)
    .function("GetVolumeOpacityIsovalue", &vtkCellPicker::GetVolumeOpacityIsovalue)
    .function("SetUseVolumeGradientOpacity", &vtkCellPicker::SetUseVolumeGradientOpacity)
    .function("UseVolumeGradientOpacityOn", &vtkCellPicker::UseVolumeGradientOpacityOn)
    .function("UseVolumeGradientOpacityOff", &vtkCellPicker::UseVolumeGradientOpacityOff)
    .function("GetUseVolumeGradientOpacity", &vtkCellPicker::GetUseVolumeGradientOpacity)
    .function("SetPickClippingPlanes", &vtkCellPicker::SetPickClippingPlanes)
    .function("PickClippingPlanesOn", &vtkCellPicker::PickClippingPlanesOn)
    .function("PickClippingPlanesOff", &vtkCellPicker::PickClippingPlanesOff)
    .function("GetPickClippingPlanes", &vtkCellPicker::GetPickClippingPlanes)
    .function("GetClippingPlaneId", &vtkCellPicker::GetClippingPlaneId)
    .function("GetPointId", &vtkCellPicker::GetPointId)
    .function("GetCellId", &vtkCellPicker::GetCellId)
    .function("GetSubId", &vtkCellPicker::GetSubId)
    .function("GetTexture", &vtkCellPicker::GetTexture, emscripten::allow_raw_pointers())
    .function("SetPickTextureData", &vtkCellPicker::SetPickTextureData)
    .function("PickTextureDataOn", &vtkCellPicker::PickTextureDataOn)
    .function("PickTextureDataOff", &vtkCellPicker::PickTextureDataOff)
    .function("GetPickTextureData", &vtkCellPicker::GetPickTextureData);
}

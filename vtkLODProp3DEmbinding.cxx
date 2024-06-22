// JavaScript wrapper for vtkLODProp3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLODProp3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLODProp3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMapper.h"
#include "vtkProperty.h"
#include "vtkTexture.h"
#include "vtkAbstractVolumeMapper.h"
#include "vtkVolumeProperty.h"
#include "vtkImageMapper3D.h"
#include "vtkImageProperty.h"
#include "vtkAbstractMapper3D.h"
#include "vtkPropCollection.h"
#include "vtkProp.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkLODProp3D.h"


EMSCRIPTEN_BINDINGS(vtkLODProp3DEntry_t_class) {
  emscripten::class_<vtkLODProp3DEntry_t>("vtkLODProp3DEntry_t");
}
template<> void emscripten::internal::raw_destructor<vtkLODProp3D>(vtkLODProp3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLODProp3D_class) {
  emscripten::class_<vtkLODProp3D, emscripten::base<vtkProp3D>>("vtkLODProp3D")
    .smart_ptr<vtkSmartPointer<vtkLODProp3D>>("vtkSmartPointer<vtkLODProp3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLODProp3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLODProp3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLODProp3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLODProp3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLODProp3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLODProp3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLODProp3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkMapper*, vtkProperty*, vtkProperty*, vtkTexture*, double)>([](vtkLODProp3D& self, vtkMapper* arg_0, vtkProperty* arg_1, vtkProperty* arg_2, vtkTexture* arg_3, double arg_4) -> int { return self.AddLOD( arg_0, arg_1, arg_2, arg_3, arg_4); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkMapper*, vtkProperty*, vtkTexture*, double)>([](vtkLODProp3D& self, vtkMapper* arg_0, vtkProperty* arg_1, vtkTexture* arg_2, double arg_3) -> int { return self.AddLOD( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkMapper*, vtkProperty*, vtkProperty*, double)>([](vtkLODProp3D& self, vtkMapper* arg_0, vtkProperty* arg_1, vtkProperty* arg_2, double arg_3) -> int { return self.AddLOD( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkMapper*, vtkProperty*, double)>([](vtkLODProp3D& self, vtkMapper* arg_0, vtkProperty* arg_1, double arg_2) -> int { return self.AddLOD( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkMapper*, vtkTexture*, double)>([](vtkLODProp3D& self, vtkMapper* arg_0, vtkTexture* arg_1, double arg_2) -> int { return self.AddLOD( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkAbstractVolumeMapper*, vtkVolumeProperty*, double)>([](vtkLODProp3D& self, vtkAbstractVolumeMapper* arg_0, vtkVolumeProperty* arg_1, double arg_2) -> int { return self.AddLOD( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkImageMapper3D*, vtkImageProperty*, double)>([](vtkLODProp3D& self, vtkImageMapper3D* arg_0, vtkImageProperty* arg_1, double arg_2) -> int { return self.AddLOD( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkMapper*, double)>([](vtkLODProp3D& self, vtkMapper* arg_0, double arg_1) -> int { return self.AddLOD( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkAbstractVolumeMapper*, double)>([](vtkLODProp3D& self, vtkAbstractVolumeMapper* arg_0, double arg_1) -> int { return self.AddLOD( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("AddLOD", emscripten::select_overload<int(vtkLODProp3D&, vtkImageMapper3D*, double)>([](vtkLODProp3D& self, vtkImageMapper3D* arg_0, double arg_1) -> int { return self.AddLOD( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetNumberOfLODs", &vtkLODProp3D::GetNumberOfLODs)
    .function("GetCurrentIndex", &vtkLODProp3D::GetCurrentIndex)
    .function("RemoveLOD", &vtkLODProp3D::RemoveLOD)
    .function("SetLODProperty", emscripten::select_overload<void(vtkLODProp3D&, int, vtkProperty*)>([](vtkLODProp3D& self, int arg_0, vtkProperty* arg_1) -> void { return self.SetLODProperty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetLODProperty", emscripten::select_overload<void(vtkLODProp3D&, int, vtkVolumeProperty*)>([](vtkLODProp3D& self, int arg_0, vtkVolumeProperty* arg_1) -> void { return self.SetLODProperty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetLODProperty", emscripten::select_overload<void(vtkLODProp3D&, int, vtkImageProperty*)>([](vtkLODProp3D& self, int arg_0, vtkImageProperty* arg_1) -> void { return self.SetLODProperty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetLODMapper", emscripten::select_overload<void(vtkLODProp3D&, int, vtkMapper*)>([](vtkLODProp3D& self, int arg_0, vtkMapper* arg_1) -> void { return self.SetLODMapper( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetLODMapper", emscripten::select_overload<void(vtkLODProp3D&, int, vtkAbstractVolumeMapper*)>([](vtkLODProp3D& self, int arg_0, vtkAbstractVolumeMapper* arg_1) -> void { return self.SetLODMapper( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetLODMapper", emscripten::select_overload<void(vtkLODProp3D&, int, vtkImageMapper3D*)>([](vtkLODProp3D& self, int arg_0, vtkImageMapper3D* arg_1) -> void { return self.SetLODMapper( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetLODMapper", emscripten::select_overload<vtkAbstractMapper3D*(vtkLODProp3D&, int)>([](vtkLODProp3D& self, int arg_0) -> vtkAbstractMapper3D* { return self.GetLODMapper( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetLODBackfaceProperty", &vtkLODProp3D::SetLODBackfaceProperty, emscripten::allow_raw_pointers())
    .function("SetLODTexture", &vtkLODProp3D::SetLODTexture, emscripten::allow_raw_pointers())
    .function("EnableLOD", &vtkLODProp3D::EnableLOD)
    .function("DisableLOD", &vtkLODProp3D::DisableLOD)
    .function("IsLODEnabled", &vtkLODProp3D::IsLODEnabled)
    .function("SetLODLevel", &vtkLODProp3D::SetLODLevel)
    .function("GetLODLevel", &vtkLODProp3D::GetLODLevel)
    .function("GetLODIndexLevel", &vtkLODProp3D::GetLODIndexLevel)
    .function("GetLODEstimatedRenderTime", &vtkLODProp3D::GetLODEstimatedRenderTime)
    .function("GetLODIndexEstimatedRenderTime", &vtkLODProp3D::GetLODIndexEstimatedRenderTime)
    .function("SetAutomaticLODSelection", &vtkLODProp3D::SetAutomaticLODSelection)
    .function("GetAutomaticLODSelectionMinValue", &vtkLODProp3D::GetAutomaticLODSelectionMinValue)
    .function("GetAutomaticLODSelectionMaxValue", &vtkLODProp3D::GetAutomaticLODSelectionMaxValue)
    .function("GetAutomaticLODSelection", &vtkLODProp3D::GetAutomaticLODSelection)
    .function("AutomaticLODSelectionOn", &vtkLODProp3D::AutomaticLODSelectionOn)
    .function("AutomaticLODSelectionOff", &vtkLODProp3D::AutomaticLODSelectionOff)
    .function("SetSelectedLODID", &vtkLODProp3D::SetSelectedLODID)
    .function("GetSelectedLODID", &vtkLODProp3D::GetSelectedLODID)
    .function("GetLastRenderedLODID", &vtkLODProp3D::GetLastRenderedLODID)
    .function("GetPickLODID", &vtkLODProp3D::GetPickLODID)
    .function("GetActors", &vtkLODProp3D::GetActors, emscripten::allow_raw_pointers())
    .function("GetVolumes", &vtkLODProp3D::GetVolumes, emscripten::allow_raw_pointers())
    .function("SetSelectedPickLODID", &vtkLODProp3D::SetSelectedPickLODID)
    .function("GetSelectedPickLODID", &vtkLODProp3D::GetSelectedPickLODID)
    .function("SetAutomaticPickLODSelection", &vtkLODProp3D::SetAutomaticPickLODSelection)
    .function("GetAutomaticPickLODSelectionMinValue", &vtkLODProp3D::GetAutomaticPickLODSelectionMinValue)
    .function("GetAutomaticPickLODSelectionMaxValue", &vtkLODProp3D::GetAutomaticPickLODSelectionMaxValue)
    .function("GetAutomaticPickLODSelection", &vtkLODProp3D::GetAutomaticPickLODSelection)
    .function("AutomaticPickLODSelectionOn", &vtkLODProp3D::AutomaticPickLODSelectionOn)
    .function("AutomaticPickLODSelectionOff", &vtkLODProp3D::AutomaticPickLODSelectionOff)
    .function("ShallowCopy", &vtkLODProp3D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLODProp3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkLODProp3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkLODProp3D::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkLODProp3D::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkLODProp3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetAllocatedRenderTime", &vtkLODProp3D::SetAllocatedRenderTime, emscripten::allow_raw_pointers())
    .function("RestoreEstimatedRenderTime", &vtkLODProp3D::RestoreEstimatedRenderTime)
    .function("AddEstimatedRenderTime", &vtkLODProp3D::AddEstimatedRenderTime, emscripten::allow_raw_pointers());
}

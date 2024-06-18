// JavaScript wrapper for vtkCompositePolyDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCompositePolyDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCompositePolyDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkAbstractMapper.h"
#include "vtkWindow.h"
#include "vtkCompositeDataDisplayAttributes.h"
#include "vtkInformation.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkCompositePolyDataMapper.h"

template<> void emscripten::internal::raw_destructor<vtkCompositePolyDataMapper>(vtkCompositePolyDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositePolyDataMapper_class) {
  emscripten::class_<vtkCompositePolyDataMapper, emscripten::base<vtkPolyDataMapper>>("vtkCompositePolyDataMapper")
    .smart_ptr<vtkSmartPointer<vtkCompositePolyDataMapper>>("vtkSmartPointer<vtkCompositePolyDataMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositePolyDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositePolyDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositePolyDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositePolyDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositePolyDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositePolyDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositePolyDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkCompositePolyDataMapper::Render, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCompositePolyDataMapper::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCompositePolyDataMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("HasOpaqueGeometry", &vtkCompositePolyDataMapper::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkCompositePolyDataMapper::HasTranslucentPolygonalGeometry)
    .function("SetCompositeDataDisplayAttributes", &vtkCompositePolyDataMapper::SetCompositeDataDisplayAttributes, emscripten::allow_raw_pointers())
    .function("GetCompositeDataDisplayAttributes", &vtkCompositePolyDataMapper::GetCompositeDataDisplayAttributes, emscripten::allow_raw_pointers())
    .function("SetBlockVisibility", &vtkCompositePolyDataMapper::SetBlockVisibility)
    .function("GetBlockVisibility", &vtkCompositePolyDataMapper::GetBlockVisibility)
    .function("RemoveBlockVisibility", &vtkCompositePolyDataMapper::RemoveBlockVisibility)
    .function("RemoveBlockVisibilities", &vtkCompositePolyDataMapper::RemoveBlockVisibilities)
    .function("SetBlockColor", emscripten::select_overload<void(vtkCompositePolyDataMapper&, unsigned int, double, double, double)>([](vtkCompositePolyDataMapper& self, unsigned int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetBlockColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("RemoveBlockColor", &vtkCompositePolyDataMapper::RemoveBlockColor)
    .function("RemoveBlockColors", &vtkCompositePolyDataMapper::RemoveBlockColors)
    .function("SetBlockOpacity", &vtkCompositePolyDataMapper::SetBlockOpacity)
    .function("GetBlockOpacity", &vtkCompositePolyDataMapper::GetBlockOpacity)
    .function("RemoveBlockOpacity", &vtkCompositePolyDataMapper::RemoveBlockOpacity)
    .function("RemoveBlockOpacities", &vtkCompositePolyDataMapper::RemoveBlockOpacities)
    .function("SetBlockScalarMode", &vtkCompositePolyDataMapper::SetBlockScalarMode)
    .function("GetBlockScalarMode", &vtkCompositePolyDataMapper::GetBlockScalarMode)
    .function("RemoveBlockScalarMode", &vtkCompositePolyDataMapper::RemoveBlockScalarMode)
    .function("RemoveBlockScalarModes", &vtkCompositePolyDataMapper::RemoveBlockScalarModes)
    .function("SetBlockArrayAccessMode", &vtkCompositePolyDataMapper::SetBlockArrayAccessMode)
    .function("GetBlockArrayAccessMode", &vtkCompositePolyDataMapper::GetBlockArrayAccessMode)
    .function("RemoveBlockArrayAccessMode", &vtkCompositePolyDataMapper::RemoveBlockArrayAccessMode)
    .function("RemoveBlockArrayAccessModes", &vtkCompositePolyDataMapper::RemoveBlockArrayAccessModes)
    .function("SetBlockArrayComponent", &vtkCompositePolyDataMapper::SetBlockArrayComponent)
    .function("GetBlockArrayComponent", &vtkCompositePolyDataMapper::GetBlockArrayComponent)
    .function("RemoveBlockArrayComponent", &vtkCompositePolyDataMapper::RemoveBlockArrayComponent)
    .function("RemoveBlockArrayComponents", &vtkCompositePolyDataMapper::RemoveBlockArrayComponents)
    .function("SetBlockArrayId", &vtkCompositePolyDataMapper::SetBlockArrayId)
    .function("GetBlockArrayId", &vtkCompositePolyDataMapper::GetBlockArrayId)
    .function("RemoveBlockArrayId", &vtkCompositePolyDataMapper::RemoveBlockArrayId)
    .function("RemoveBlockArrayIds", &vtkCompositePolyDataMapper::RemoveBlockArrayIds)
    .function("SetBlockArrayName", &vtkCompositePolyDataMapper::SetBlockArrayName)
    .function("GetBlockArrayName", &vtkCompositePolyDataMapper::GetBlockArrayName)
    .function("RemoveBlockArrayName", &vtkCompositePolyDataMapper::RemoveBlockArrayName)
    .function("RemoveBlockArrayNames", &vtkCompositePolyDataMapper::RemoveBlockArrayNames)
    .function("SetBlockFieldDataTupleId", &vtkCompositePolyDataMapper::SetBlockFieldDataTupleId)
    .function("GetBlockFieldDataTupleId", &vtkCompositePolyDataMapper::GetBlockFieldDataTupleId)
    .function("RemoveBlockFieldDataTupleId", &vtkCompositePolyDataMapper::RemoveBlockFieldDataTupleId)
    .function("RemoveBlockFieldDataTupleIds", &vtkCompositePolyDataMapper::RemoveBlockFieldDataTupleIds)
    .function("SetColorMissingArraysWithNanColor", &vtkCompositePolyDataMapper::SetColorMissingArraysWithNanColor)
    .function("GetColorMissingArraysWithNanColor", &vtkCompositePolyDataMapper::GetColorMissingArraysWithNanColor)
    .function("ColorMissingArraysWithNanColorOn", &vtkCompositePolyDataMapper::ColorMissingArraysWithNanColorOn)
    .function("ColorMissingArraysWithNanColorOff", &vtkCompositePolyDataMapper::ColorMissingArraysWithNanColorOff)
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkCompositePolyDataMapper&, int, int, int, int, const std::string &)>([](vtkCompositePolyDataMapper& self, int arg_0, int arg_1, int arg_2, int arg_3, const std::string & arg_4) -> void { return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3, arg_4.c_str()); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkCompositePolyDataMapper&, int, int, int, int, int)>([](vtkCompositePolyDataMapper& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) -> void { return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3, arg_4); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkCompositePolyDataMapper&, int, int, int, const std::string &, const std::string &)>([](vtkCompositePolyDataMapper& self, int arg_0, int arg_1, int arg_2, const std::string & arg_3, const std::string & arg_4) -> void { return self.SetInputArrayToProcess( arg_0, arg_1, arg_2, arg_3.c_str(), arg_4.c_str()); }))
    .function("SetInputArrayToProcess", emscripten::select_overload<void(vtkCompositePolyDataMapper&, int, vtkInformation*)>([](vtkCompositePolyDataMapper& self, int arg_0, vtkInformation* arg_1) -> void { return self.SetInputArrayToProcess( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkCompositePolyDataMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("SetVBOShiftScaleMethod", &vtkCompositePolyDataMapper::SetVBOShiftScaleMethod)
    .function("SetPauseShiftScale", &vtkCompositePolyDataMapper::SetPauseShiftScale)
    .function("GetMTime", &vtkCompositePolyDataMapper::GetMTime)
    .function("SetPointIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetPointIdArrayName( arg_0.c_str());}))
    .function("GetPointIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self) -> std::string {  return self.GetPointIdArrayName();}))
    .function("SetCellIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetCellIdArrayName( arg_0.c_str());}))
    .function("GetCellIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self) -> std::string {  return self.GetCellIdArrayName();}))
    .function("SetProcessIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetProcessIdArrayName( arg_0.c_str());}))
    .function("GetProcessIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self) -> std::string {  return self.GetProcessIdArrayName();}))
    .function("SetCompositeIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self, const std::string & arg_0) -> void {  return self.SetCompositeIdArrayName( arg_0.c_str());}))
    .function("GetCompositeIdArrayName", emscripten::optional_override([](vtkCompositePolyDataMapper& self) -> std::string {  return self.GetCompositeIdArrayName();}));
}

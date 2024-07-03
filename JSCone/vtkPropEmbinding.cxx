// JavaScript wrapper for vtkProp with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPropEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkProp.h
*/
#include "vtkEmbindSmartPointerTraits.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPropCollection.h"
#include "vtkAssemblyPath.h"
#include "vtkMatrix4x4.h"
#include "vtkInformation.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkAssemblyPaths.h"
#include "vtkHardwareSelector.h"
#include "vtkObject.h"
#include "vtkShaderProperty.h"
#include "vtkProp.h"

template<> void emscripten::internal::raw_destructor<vtkProp>(vtkProp * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProp_class) {
  emscripten::class_<vtkProp, emscripten::base<vtkObject>>("vtkProp")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProp& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProp::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProp::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProp& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActors", &vtkProp::GetActors, emscripten::allow_raw_pointers())
    .function("GetActors2D", &vtkProp::GetActors2D, emscripten::allow_raw_pointers())
    .function("GetVolumes", &vtkProp::GetVolumes, emscripten::allow_raw_pointers())
    .function("SetVisibility", &vtkProp::SetVisibility)
    .function("GetVisibility", &vtkProp::GetVisibility)
    .function("VisibilityOn", &vtkProp::VisibilityOn)
    .function("VisibilityOff", &vtkProp::VisibilityOff)
    .function("SetPickable", &vtkProp::SetPickable)
    .function("GetPickable", &vtkProp::GetPickable)
    .function("PickableOn", &vtkProp::PickableOn)
    .function("PickableOff", &vtkProp::PickableOff)
    .function("Pick", &vtkProp::Pick)
    .function("SetDragable", &vtkProp::SetDragable)
    .function("GetDragable", &vtkProp::GetDragable)
    .function("DragableOn", &vtkProp::DragableOn)
    .function("DragableOff", &vtkProp::DragableOff)
    .function("GetRedrawMTime", &vtkProp::GetRedrawMTime)
    .function("SetUseBounds", &vtkProp::SetUseBounds)
    .function("GetUseBounds", &vtkProp::GetUseBounds)
    .function("UseBoundsOn", &vtkProp::UseBoundsOn)
    .function("UseBoundsOff", &vtkProp::UseBoundsOff)
    .function("ShallowCopy", &vtkProp::ShallowCopy, emscripten::allow_raw_pointers())
    .function("InitPathTraversal", &vtkProp::InitPathTraversal)
    .function("GetNextPath", &vtkProp::GetNextPath, emscripten::allow_raw_pointers())
    .function("GetNumberOfPaths", &vtkProp::GetNumberOfPaths)
    .function("PokeMatrix", &vtkProp::PokeMatrix, emscripten::allow_raw_pointers())
    .function("GetMatrix", &vtkProp::GetMatrix, emscripten::allow_raw_pointers())
    .function("GetPropertyKeys", &vtkProp::GetPropertyKeys, emscripten::allow_raw_pointers())
    .function("SetPropertyKeys", &vtkProp::SetPropertyKeys, emscripten::allow_raw_pointers())
    .function("HasKeys", &vtkProp::HasKeys, emscripten::allow_raw_pointers())
    .class_function("GeneralTextureUnit", &vtkProp::GeneralTextureUnit, emscripten::allow_raw_pointers())
    .class_function("GeneralTextureTransform", &vtkProp::GeneralTextureTransform, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkProp::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkProp::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkProp::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkProp::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderFilteredOpaqueGeometry", &vtkProp::RenderFilteredOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderFilteredTranslucentPolygonalGeometry", &vtkProp::RenderFilteredTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderFilteredVolumetricGeometry", &vtkProp::RenderFilteredVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("RenderFilteredOverlay", &vtkProp::RenderFilteredOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkProp::HasTranslucentPolygonalGeometry)
    .function("HasOpaqueGeometry", &vtkProp::HasOpaqueGeometry)
    .function("ReleaseGraphicsResources", &vtkProp::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetEstimatedRenderTime", emscripten::select_overload<double(vtkProp&, vtkViewport*)>([](vtkProp& self, vtkViewport* arg_0) -> double { return self.GetEstimatedRenderTime( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetEstimatedRenderTime", emscripten::select_overload<double(vtkProp&)>([](vtkProp& self) -> double { return self.GetEstimatedRenderTime(); }))
    .function("SetEstimatedRenderTime", &vtkProp::SetEstimatedRenderTime)
    .function("RestoreEstimatedRenderTime", &vtkProp::RestoreEstimatedRenderTime)
    .function("AddEstimatedRenderTime", &vtkProp::AddEstimatedRenderTime, emscripten::allow_raw_pointers())
    .function("SetAllocatedRenderTime", &vtkProp::SetAllocatedRenderTime, emscripten::allow_raw_pointers())
    .function("GetAllocatedRenderTime", &vtkProp::GetAllocatedRenderTime)
    .function("SetRenderTimeMultiplier", &vtkProp::SetRenderTimeMultiplier)
    .function("GetRenderTimeMultiplier", &vtkProp::GetRenderTimeMultiplier)
    .function("BuildPaths", &vtkProp::BuildPaths, emscripten::allow_raw_pointers())
    .function("GetSupportsSelection", &vtkProp::GetSupportsSelection)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkProp& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1);}), emscripten::allow_raw_pointers())
    .function("GetNumberOfConsumers", &vtkProp::GetNumberOfConsumers)
    .function("AddConsumer", &vtkProp::AddConsumer, emscripten::allow_raw_pointers())
    .function("RemoveConsumer", &vtkProp::RemoveConsumer, emscripten::allow_raw_pointers())
    .function("GetConsumer", &vtkProp::GetConsumer, emscripten::allow_raw_pointers())
    .function("IsConsumer", &vtkProp::IsConsumer, emscripten::allow_raw_pointers())
    .function("SetShaderProperty", &vtkProp::SetShaderProperty, emscripten::allow_raw_pointers())
    .function("GetShaderProperty", &vtkProp::GetShaderProperty, emscripten::allow_raw_pointers())
    .function("IsRenderingTranslucentPolygonalGeometry", &vtkProp::IsRenderingTranslucentPolygonalGeometry);
}

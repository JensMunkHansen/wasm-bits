// JavaScript wrapper for vtkActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkRenderer.h"
#include "vtkMapper.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkProperty.h"
#include "vtkTexture.h"
#include "vtkHardwareSelector.h"
#include "vtkActor.h"

template<> void emscripten::internal::raw_destructor<vtkActor>(vtkActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkActor_class) {
  emscripten::class_<vtkActor, emscripten::base<vtkProp3D>>("vtkActor")
    .smart_ptr<vtkSmartPointer<vtkActor>>("vtkSmartPointer<vtkActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActors", &vtkActor::GetActors, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkActor::HasTranslucentPolygonalGeometry)
    .function("HasOpaqueGeometry", &vtkActor::HasOpaqueGeometry)
    .function("Render", &vtkActor::Render, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkActor::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkActor::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkActor::GetProperty, emscripten::allow_raw_pointers())
    .function("MakeProperty", &vtkActor::MakeProperty, emscripten::allow_raw_pointers())
    .function("SetBackfaceProperty", &vtkActor::SetBackfaceProperty, emscripten::allow_raw_pointers())
    .function("GetBackfaceProperty", &vtkActor::GetBackfaceProperty, emscripten::allow_raw_pointers())
    .function("SetTexture", &vtkActor::SetTexture, emscripten::allow_raw_pointers())
    .function("GetTexture", &vtkActor::GetTexture, emscripten::allow_raw_pointers())
    .function("SetMapper", &vtkActor::SetMapper, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkActor::GetMapper, emscripten::allow_raw_pointers())
    .function("ApplyProperties", &vtkActor::ApplyProperties)
    .function("GetMTime", &vtkActor::GetMTime)
    .function("GetRedrawMTime", &vtkActor::GetRedrawMTime)
    .function("GetForceOpaque", &vtkActor::GetForceOpaque)
    .function("SetForceOpaque", &vtkActor::SetForceOpaque)
    .function("ForceOpaqueOn", &vtkActor::ForceOpaqueOn)
    .function("ForceOpaqueOff", &vtkActor::ForceOpaqueOff)
    .function("GetForceTranslucent", &vtkActor::GetForceTranslucent)
    .function("SetForceTranslucent", &vtkActor::SetForceTranslucent)
    .function("ForceTranslucentOn", &vtkActor::ForceTranslucentOn)
    .function("ForceTranslucentOff", &vtkActor::ForceTranslucentOff)
    .function("GetSupportsSelection", &vtkActor::GetSupportsSelection)
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkActor& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1);}), emscripten::allow_raw_pointers())
    .function("IsRenderingTranslucentPolygonalGeometry", &vtkActor::IsRenderingTranslucentPolygonalGeometry)
    .function("SetIsRenderingTranslucentPolygonalGeometry", &vtkActor::SetIsRenderingTranslucentPolygonalGeometry);
}

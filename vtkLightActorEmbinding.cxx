// JavaScript wrapper for vtkLightActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLightActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLightActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLight.h"
#include "vtkProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkLightActor.h"

template<> void emscripten::internal::raw_destructor<vtkLightActor>(vtkLightActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLightActor_class) {
  emscripten::class_<vtkLightActor, emscripten::base<vtkProp3D>>("vtkLightActor")
    .smart_ptr<vtkSmartPointer<vtkLightActor>>("vtkSmartPointer<vtkLightActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLightActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLightActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLightActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLightActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLightActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLightActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLight", &vtkLightActor::SetLight, emscripten::allow_raw_pointers())
    .function("GetLight", &vtkLightActor::GetLight, emscripten::allow_raw_pointers())
    .function("SetClippingRange", emscripten::select_overload<void(vtkLightActor&, double, double)>([](vtkLightActor& self, double arg_0, double arg_1) -> void { return self.SetClippingRange( arg_0, arg_1); }))
    .function("GetConeProperty", &vtkLightActor::GetConeProperty, emscripten::allow_raw_pointers())
    .function("GetFrustumProperty", &vtkLightActor::GetFrustumProperty, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLightActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkLightActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkLightActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkLightActor::GetMTime);
}

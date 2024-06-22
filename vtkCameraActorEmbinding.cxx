// JavaScript wrapper for vtkCameraActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCameraActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCameraActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkProperty.h"
#include "vtkCameraActor.h"

template<> void emscripten::internal::raw_destructor<vtkCameraActor>(vtkCameraActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraActor_class) {
  emscripten::class_<vtkCameraActor, emscripten::base<vtkProp3D>>("vtkCameraActor")
    .smart_ptr<vtkSmartPointer<vtkCameraActor>>("vtkSmartPointer<vtkCameraActor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCamera", &vtkCameraActor::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkCameraActor::GetCamera, emscripten::allow_raw_pointers())
    .function("SetWidthByHeightRatio", &vtkCameraActor::SetWidthByHeightRatio)
    .function("GetWidthByHeightRatio", &vtkCameraActor::GetWidthByHeightRatio)
    .function("RenderOpaqueGeometry", &vtkCameraActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCameraActor::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkCameraActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkCameraActor::GetMTime)
    .function("GetProperty", &vtkCameraActor::GetProperty, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkCameraActor::SetProperty, emscripten::allow_raw_pointers());
}

// JavaScript wrapper for vtkProp3DFollower with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkProp3DFollowerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkProp3DFollower.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp3D.h"
#include "vtkCamera.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkProp.h"
#include "vtkAssemblyPath.h"
#include "vtkProp3DFollower.h"

template<> void emscripten::internal::raw_destructor<vtkProp3DFollower>(vtkProp3DFollower * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProp3DFollower_class) {
  emscripten::class_<vtkProp3DFollower, emscripten::base<vtkProp3D>>("vtkProp3DFollower")
    .smart_ptr<vtkSmartPointer<vtkProp3DFollower>>("vtkSmartPointer<vtkProp3DFollower>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProp3DFollower>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DFollower::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProp3DFollower& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProp3DFollower::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProp3DFollower::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DFollower::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProp3DFollower& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProp3D", &vtkProp3DFollower::SetProp3D, emscripten::allow_raw_pointers())
    .function("GetProp3D", &vtkProp3DFollower::GetProp3D, emscripten::allow_raw_pointers())
    .function("SetCamera", &vtkProp3DFollower::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkProp3DFollower::GetCamera, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkProp3DFollower::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkProp3DFollower::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkProp3DFollower::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkProp3DFollower::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkProp3DFollower::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("ComputeMatrix", &vtkProp3DFollower::ComputeMatrix)
    .function("ShallowCopy", &vtkProp3DFollower::ShallowCopy, emscripten::allow_raw_pointers())
    .function("InitPathTraversal", &vtkProp3DFollower::InitPathTraversal)
    .function("GetNextPath", &vtkProp3DFollower::GetNextPath, emscripten::allow_raw_pointers());
}

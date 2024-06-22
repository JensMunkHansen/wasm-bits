// JavaScript wrapper for vtkFollower with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkFollowerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkFollower.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkViewport.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkProp.h"
#include "vtkFollower.h"

template<> void emscripten::internal::raw_destructor<vtkFollower>(vtkFollower * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFollower_class) {
  emscripten::class_<vtkFollower, emscripten::base<vtkActor>>("vtkFollower")
    .smart_ptr<vtkSmartPointer<vtkFollower>>("vtkSmartPointer<vtkFollower>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFollower>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFollower::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFollower& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFollower::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFollower::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFollower::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFollower& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCamera", &vtkFollower::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkFollower::GetCamera, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkFollower::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkFollower::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("Render", emscripten::select_overload<void(vtkFollower&, vtkRenderer*)>([](vtkFollower& self, vtkRenderer* arg_0) -> void { return self.Render( arg_0); }), emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkFollower::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("ComputeMatrix", &vtkFollower::ComputeMatrix)
    .function("ShallowCopy", &vtkFollower::ShallowCopy, emscripten::allow_raw_pointers());
}

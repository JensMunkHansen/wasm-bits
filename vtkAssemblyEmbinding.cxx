// JavaScript wrapper for vtkAssembly with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkAssemblyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkAssembly.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp3D.h"
#include "vtkProp3DCollection.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkAssemblyPath.h"
#include "vtkProp.h"
#include "vtkAssemblyPaths.h"
#include "vtkAssembly.h"

template<> void emscripten::internal::raw_destructor<vtkAssembly>(vtkAssembly * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAssembly_class) {
  emscripten::class_<vtkAssembly, emscripten::base<vtkProp3D>>("vtkAssembly")
    .smart_ptr<vtkSmartPointer<vtkAssembly>>("vtkSmartPointer<vtkAssembly>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAssembly>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssembly::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAssembly& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAssembly::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAssembly::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAssembly::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAssembly& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddPart", &vtkAssembly::AddPart, emscripten::allow_raw_pointers())
    .function("RemovePart", &vtkAssembly::RemovePart, emscripten::allow_raw_pointers())
    .function("GetParts", &vtkAssembly::GetParts, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkAssembly::GetActors, emscripten::allow_raw_pointers())
    .function("GetVolumes", &vtkAssembly::GetVolumes, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAssembly::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAssembly::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkAssembly::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAssembly::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkAssembly::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("InitPathTraversal", &vtkAssembly::InitPathTraversal)
    .function("GetNextPath", &vtkAssembly::GetNextPath, emscripten::allow_raw_pointers())
    .function("GetNumberOfPaths", &vtkAssembly::GetNumberOfPaths)
    .function("GetMTime", &vtkAssembly::GetMTime)
    .function("ShallowCopy", &vtkAssembly::ShallowCopy, emscripten::allow_raw_pointers())
    .function("BuildPaths", &vtkAssembly::BuildPaths, emscripten::allow_raw_pointers());
}

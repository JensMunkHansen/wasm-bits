// JavaScript wrapper for vtkPropAssembly with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPropAssemblyEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPropAssembly.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkAssemblyPath.h"
#include "vtkAssemblyPaths.h"
#include "vtkPropAssembly.h"

template<> void emscripten::internal::raw_destructor<vtkPropAssembly>(vtkPropAssembly * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPropAssembly_class) {
  emscripten::class_<vtkPropAssembly, emscripten::base<vtkProp>>("vtkPropAssembly")
    .smart_ptr<vtkSmartPointer<vtkPropAssembly>>("vtkSmartPointer<vtkPropAssembly>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPropAssembly>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropAssembly::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPropAssembly& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPropAssembly::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPropAssembly::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPropAssembly::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPropAssembly& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddPart", &vtkPropAssembly::AddPart, emscripten::allow_raw_pointers())
    .function("RemovePart", &vtkPropAssembly::RemovePart, emscripten::allow_raw_pointers())
    .function("GetParts", &vtkPropAssembly::GetParts, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkPropAssembly::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkPropAssembly::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkPropAssembly::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkPropAssembly::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkPropAssembly::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkPropAssembly::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkPropAssembly::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkPropAssembly::GetMTime)
    .function("InitPathTraversal", &vtkPropAssembly::InitPathTraversal)
    .function("GetNextPath", &vtkPropAssembly::GetNextPath, emscripten::allow_raw_pointers())
    .function("GetNumberOfPaths", &vtkPropAssembly::GetNumberOfPaths)
    .function("BuildPaths", &vtkPropAssembly::BuildPaths, emscripten::allow_raw_pointers());
}

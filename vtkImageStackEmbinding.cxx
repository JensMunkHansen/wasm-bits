// JavaScript wrapper for vtkImageStack with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkRenderingImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingImage.js/vtkImageStackEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Image/vtkImageStack.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSlice.h"
#include "vtkImageSliceCollection.h"
#include "vtkImageMapper3D.h"
#include "vtkImageProperty.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkAssemblyPath.h"
#include "vtkAssemblyPaths.h"
#include "vtkImageStack.h"

template<> void emscripten::internal::raw_destructor<vtkImageStack>(vtkImageStack * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageStack_class) {
  emscripten::class_<vtkImageStack, emscripten::base<vtkImageSlice>>("vtkImageStack")
    .smart_ptr<vtkSmartPointer<vtkImageStack>>("vtkSmartPointer<vtkImageStack>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageStack>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStack::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageStack& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageStack::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageStack::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStack::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageStack& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddImage", &vtkImageStack::AddImage, emscripten::allow_raw_pointers())
    .function("RemoveImage", &vtkImageStack::RemoveImage, emscripten::allow_raw_pointers())
    .function("HasImage", &vtkImageStack::HasImage, emscripten::allow_raw_pointers())
    .function("GetImages", emscripten::select_overload<vtkImageSliceCollection*(vtkImageStack&)>([](vtkImageStack& self) -> vtkImageSliceCollection* { return self.GetImages(); }), emscripten::allow_raw_pointers())
    .function("GetImages", emscripten::select_overload<void(vtkImageStack&, vtkPropCollection*)>([](vtkImageStack& self, vtkPropCollection* arg_0) -> void { return self.GetImages( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetActiveLayer", &vtkImageStack::SetActiveLayer)
    .function("GetActiveLayer", &vtkImageStack::GetActiveLayer)
    .function("GetActiveImage", &vtkImageStack::GetActiveImage, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkImageStack::GetMapper, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkImageStack::GetProperty, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkImageStack::GetMTime)
    .function("GetRedrawMTime", &vtkImageStack::GetRedrawMTime)
    .function("ShallowCopy", &vtkImageStack::ShallowCopy, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkImageStack::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkImageStack::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkImageStack::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkImageStack::HasTranslucentPolygonalGeometry)
    .function("ReleaseGraphicsResources", &vtkImageStack::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("InitPathTraversal", &vtkImageStack::InitPathTraversal)
    .function("GetNextPath", &vtkImageStack::GetNextPath, emscripten::allow_raw_pointers())
    .function("GetNumberOfPaths", &vtkImageStack::GetNumberOfPaths)
    .function("BuildPaths", &vtkImageStack::BuildPaths, emscripten::allow_raw_pointers());
}

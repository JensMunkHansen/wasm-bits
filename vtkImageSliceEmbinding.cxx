// JavaScript wrapper for vtkImageSlice with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkImageSliceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkImageSlice.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMapper3D.h"
#include "vtkImageProperty.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"
#include "vtkImageSlice.h"

template<> void emscripten::internal::raw_destructor<vtkImageSlice>(vtkImageSlice * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSlice_class) {
  emscripten::class_<vtkImageSlice, emscripten::base<vtkProp3D>>("vtkImageSlice")
    .smart_ptr<vtkSmartPointer<vtkImageSlice>>("vtkSmartPointer<vtkImageSlice>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageSlice>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSlice::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSlice& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSlice::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSlice::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSlice::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSlice& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMapper", &vtkImageSlice::SetMapper, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkImageSlice::GetMapper, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkImageSlice::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkImageSlice::GetProperty, emscripten::allow_raw_pointers())
    .function("Update", &vtkImageSlice::Update)
    .function("GetMinXBound", &vtkImageSlice::GetMinXBound)
    .function("GetMaxXBound", &vtkImageSlice::GetMaxXBound)
    .function("GetMinYBound", &vtkImageSlice::GetMinYBound)
    .function("GetMaxYBound", &vtkImageSlice::GetMaxYBound)
    .function("GetMinZBound", &vtkImageSlice::GetMinZBound)
    .function("GetMaxZBound", &vtkImageSlice::GetMaxZBound)
    .function("GetMTime", &vtkImageSlice::GetMTime)
    .function("GetRedrawMTime", &vtkImageSlice::GetRedrawMTime)
    .function("GetForceTranslucent", &vtkImageSlice::GetForceTranslucent)
    .function("SetForceTranslucent", &vtkImageSlice::SetForceTranslucent)
    .function("ForceTranslucentOn", &vtkImageSlice::ForceTranslucentOn)
    .function("ForceTranslucentOff", &vtkImageSlice::ForceTranslucentOff)
    .function("ShallowCopy", &vtkImageSlice::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetImages", &vtkImageSlice::GetImages, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkImageSlice::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkImageSlice::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkImageSlice::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkImageSlice::HasTranslucentPolygonalGeometry)
    .function("Render", &vtkImageSlice::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkImageSlice::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetStackedImagePass", &vtkImageSlice::SetStackedImagePass);
}

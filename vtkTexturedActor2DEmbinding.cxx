// JavaScript wrapper for vtkTexturedActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTexturedActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTexturedActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkTexture.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkProp.h"
#include "vtkTexturedActor2D.h"

template<> void emscripten::internal::raw_destructor<vtkTexturedActor2D>(vtkTexturedActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTexturedActor2D_class) {
  emscripten::class_<vtkTexturedActor2D, emscripten::base<vtkActor2D>>("vtkTexturedActor2D")
    .smart_ptr<vtkSmartPointer<vtkTexturedActor2D>>("vtkSmartPointer<vtkTexturedActor2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTexturedActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTexturedActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTexturedActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTexturedActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTexturedActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTexture", &vtkTexturedActor2D::SetTexture, emscripten::allow_raw_pointers())
    .function("GetTexture", &vtkTexturedActor2D::GetTexture, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTexturedActor2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkTexturedActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkTexturedActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkTexturedActor2D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTexturedActor2D::GetMTime)
    .function("ShallowCopy", &vtkTexturedActor2D::ShallowCopy, emscripten::allow_raw_pointers());
}

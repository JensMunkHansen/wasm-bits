// JavaScript wrapper for vtkTextActor3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextActor3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTextActor3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkTextActor3D.h"

template<> void emscripten::internal::raw_destructor<vtkTextActor3D>(vtkTextActor3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextActor3D_class) {
  emscripten::class_<vtkTextActor3D, emscripten::base<vtkProp3D>>("vtkTextActor3D")
    .smart_ptr<vtkSmartPointer<vtkTextActor3D>>("vtkSmartPointer<vtkTextActor3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextActor3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextActor3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextActor3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextActor3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextActor3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextActor3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextActor3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInput", emscripten::optional_override([](vtkTextActor3D& self, const std::string & arg_0) -> void {  return self.SetInput( arg_0.c_str());}))
    .function("GetInput", emscripten::optional_override([](vtkTextActor3D& self) -> std::string {  return self.GetInput();}))
    .function("SetTextProperty", &vtkTextActor3D::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkTextActor3D::GetTextProperty, emscripten::allow_raw_pointers())
    .class_function("GetRenderedDPI", &vtkTextActor3D::GetRenderedDPI)
    .function("ShallowCopy", &vtkTextActor3D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTextActor3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetForceOpaque", &vtkTextActor3D::SetForceOpaque)
    .function("GetForceOpaque", &vtkTextActor3D::GetForceOpaque)
    .function("ForceOpaqueOn", &vtkTextActor3D::ForceOpaqueOn)
    .function("ForceOpaqueOff", &vtkTextActor3D::ForceOpaqueOff)
    .function("SetForceTranslucent", &vtkTextActor3D::SetForceTranslucent)
    .function("GetForceTranslucent", &vtkTextActor3D::GetForceTranslucent)
    .function("ForceTranslucentOn", &vtkTextActor3D::ForceTranslucentOn)
    .function("ForceTranslucentOff", &vtkTextActor3D::ForceTranslucentOff)
    .function("RenderOpaqueGeometry", &vtkTextActor3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkTextActor3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkTextActor3D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkTextActor3D::HasTranslucentPolygonalGeometry);
}

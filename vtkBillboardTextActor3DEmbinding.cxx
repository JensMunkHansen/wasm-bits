// JavaScript wrapper for vtkBillboardTextActor3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkBillboardTextActor3DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkBillboardTextActor3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkTextProperty.h"
#include "vtkWindow.h"
#include "vtkBillboardTextActor3D.h"

template<> void emscripten::internal::raw_destructor<vtkBillboardTextActor3D>(vtkBillboardTextActor3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBillboardTextActor3D_class) {
  emscripten::class_<vtkBillboardTextActor3D, emscripten::base<vtkProp3D>>("vtkBillboardTextActor3D")
    .smart_ptr<vtkSmartPointer<vtkBillboardTextActor3D>>("vtkSmartPointer<vtkBillboardTextActor3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBillboardTextActor3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBillboardTextActor3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBillboardTextActor3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBillboardTextActor3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBillboardTextActor3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBillboardTextActor3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBillboardTextActor3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetActors", &vtkBillboardTextActor3D::GetActors, emscripten::allow_raw_pointers())
    .function("UpdateGeometry", &vtkBillboardTextActor3D::UpdateGeometry, emscripten::allow_raw_pointers())
    .function("SetInput", emscripten::optional_override([](vtkBillboardTextActor3D& self, const std::string & arg_0) -> void {  return self.SetInput( arg_0.c_str());}))
    .function("GetInput", emscripten::optional_override([](vtkBillboardTextActor3D& self) -> std::string {  return self.GetInput();}))
    .function("SetDisplayOffset", emscripten::select_overload<void(vtkBillboardTextActor3D&, int, int)>([](vtkBillboardTextActor3D& self, int arg_0, int arg_1) -> void { return self.SetDisplayOffset( arg_0, arg_1); }))
    .function("SetTextProperty", &vtkBillboardTextActor3D::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkBillboardTextActor3D::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetForceOpaque", &vtkBillboardTextActor3D::SetForceOpaque)
    .function("GetForceOpaque", &vtkBillboardTextActor3D::GetForceOpaque)
    .function("ForceOpaqueOn", &vtkBillboardTextActor3D::ForceOpaqueOn)
    .function("ForceOpaqueOff", &vtkBillboardTextActor3D::ForceOpaqueOff)
    .function("SetForceTranslucent", &vtkBillboardTextActor3D::SetForceTranslucent)
    .function("GetForceTranslucent", &vtkBillboardTextActor3D::GetForceTranslucent)
    .function("ForceTranslucentOn", &vtkBillboardTextActor3D::ForceTranslucentOn)
    .function("ForceTranslucentOff", &vtkBillboardTextActor3D::ForceTranslucentOff)
    .function("HasTranslucentPolygonalGeometry", &vtkBillboardTextActor3D::HasTranslucentPolygonalGeometry)
    .function("RenderOpaqueGeometry", &vtkBillboardTextActor3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkBillboardTextActor3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkBillboardTextActor3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}

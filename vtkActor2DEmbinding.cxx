// JavaScript wrapper for vtkActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkViewport.h"
#include "vtkMapper2D.h"
#include "vtkProperty2D.h"
#include "vtkCoordinate.h"
#include "vtkPropCollection.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkActor2D.h"

template<> void emscripten::internal::raw_destructor<vtkActor2D>(vtkActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkActor2D_class) {
  emscripten::class_<vtkActor2D, emscripten::base<vtkProp>>("vtkActor2D")
    .smart_ptr<vtkSmartPointer<vtkActor2D>>("vtkSmartPointer<vtkActor2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkActor2D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkActor2D::HasTranslucentPolygonalGeometry)
    .function("SetMapper", &vtkActor2D::SetMapper, emscripten::allow_raw_pointers())
    .function("GetMapper", &vtkActor2D::GetMapper, emscripten::allow_raw_pointers())
    .function("SetLayerNumber", &vtkActor2D::SetLayerNumber)
    .function("GetLayerNumber", &vtkActor2D::GetLayerNumber)
    .function("GetProperty", &vtkActor2D::GetProperty, emscripten::allow_raw_pointers())
    .function("SetProperty", &vtkActor2D::SetProperty, emscripten::allow_raw_pointers())
    .function("GetPositionCoordinate", &vtkActor2D::GetPositionCoordinate, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkActor2D&, double, double)>([](vtkActor2D& self, double arg_0, double arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetDisplayPosition", &vtkActor2D::SetDisplayPosition)
    .function("GetPosition2Coordinate", &vtkActor2D::GetPosition2Coordinate, emscripten::allow_raw_pointers())
    .function("SetPosition2", emscripten::select_overload<void(vtkActor2D&, double, double)>([](vtkActor2D& self, double arg_0, double arg_1) -> void { return self.SetPosition2( arg_0, arg_1); }))
    .function("SetWidth", &vtkActor2D::SetWidth)
    .function("GetWidth", &vtkActor2D::GetWidth)
    .function("SetHeight", &vtkActor2D::SetHeight)
    .function("GetHeight", &vtkActor2D::GetHeight)
    .function("GetMTime", &vtkActor2D::GetMTime)
    .function("GetActors2D", &vtkActor2D::GetActors2D, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkActor2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkActor2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetActualPositionCoordinate", &vtkActor2D::GetActualPositionCoordinate, emscripten::allow_raw_pointers())
    .function("GetActualPosition2Coordinate", &vtkActor2D::GetActualPosition2Coordinate, emscripten::allow_raw_pointers());
}

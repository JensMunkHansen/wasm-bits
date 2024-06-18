// JavaScript wrapper for vtkRadialGridActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRadialGridActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkRadialGridActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkPropCollection.h"
#include "vtkTextProperty.h"
#include "vtkPoints.h"
#include "vtkRadialGridActor2D.h"

template<> void emscripten::internal::raw_destructor<vtkRadialGridActor2D>(vtkRadialGridActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRadialGridActor2D_class) {
  emscripten::class_<vtkRadialGridActor2D, emscripten::base<vtkActor2D>>("vtkRadialGridActor2D")
    .smart_ptr<vtkSmartPointer<vtkRadialGridActor2D>>("vtkSmartPointer<vtkRadialGridActor2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRadialGridActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRadialGridActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRadialGridActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRadialGridActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRadialGridActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRadialGridActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRadialGridActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkRadialGridActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkRadialGridActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("HasOpaqueGeometry", &vtkRadialGridActor2D::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkRadialGridActor2D::HasTranslucentPolygonalGeometry)
    .function("GetActors2D", &vtkRadialGridActor2D::GetActors2D, emscripten::allow_raw_pointers())
    .function("SetTextProperty", &vtkRadialGridActor2D::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkRadialGridActor2D::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetNumberOfAxes", &vtkRadialGridActor2D::SetNumberOfAxes)
    .function("GetNumberOfAxesMinValue", &vtkRadialGridActor2D::GetNumberOfAxesMinValue)
    .function("GetNumberOfAxesMaxValue", &vtkRadialGridActor2D::GetNumberOfAxesMaxValue)
    .function("GetNumberOfAxes", &vtkRadialGridActor2D::GetNumberOfAxes)
    .function("SetStartAngle", &vtkRadialGridActor2D::SetStartAngle)
    .function("GetStartAngle", &vtkRadialGridActor2D::GetStartAngle)
    .function("SetEndAngle", &vtkRadialGridActor2D::SetEndAngle)
    .function("GetEndAngle", &vtkRadialGridActor2D::GetEndAngle)
    .function("SetOrigin", emscripten::select_overload<void(vtkRadialGridActor2D&, double, double)>([](vtkRadialGridActor2D& self, double arg_0, double arg_1) -> void { return self.SetOrigin( arg_0, arg_1); }))
    .function("SetNumberOfTicks", &vtkRadialGridActor2D::SetNumberOfTicks)
    .function("GetNumberOfTicksMinValue", &vtkRadialGridActor2D::GetNumberOfTicksMinValue)
    .function("GetNumberOfTicksMaxValue", &vtkRadialGridActor2D::GetNumberOfTicksMaxValue)
    .function("GetNumberOfTicks", &vtkRadialGridActor2D::GetNumberOfTicks)
    .function("SetAxesViewportLength", &vtkRadialGridActor2D::SetAxesViewportLength)
    .function("GetAxesViewportLengthMinValue", &vtkRadialGridActor2D::GetAxesViewportLengthMinValue)
    .function("GetAxesViewportLengthMaxValue", &vtkRadialGridActor2D::GetAxesViewportLengthMaxValue)
    .function("GetAxesViewportLength", &vtkRadialGridActor2D::GetAxesViewportLength)
    .function("GetFirstAxesPoints", &vtkRadialGridActor2D::GetFirstAxesPoints, emscripten::allow_raw_pointers())
    .function("GetLastAxesPoints", &vtkRadialGridActor2D::GetLastAxesPoints, emscripten::allow_raw_pointers());
}

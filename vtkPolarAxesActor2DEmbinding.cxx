// JavaScript wrapper for vtkPolarAxesActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkPolarAxesActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkPolarAxesActor2D.h
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
#include "vtkPolarAxesActor2D.h"

template<> void emscripten::internal::raw_destructor<vtkPolarAxesActor2D>(vtkPolarAxesActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolarAxesActor2D_class) {
  emscripten::class_<vtkPolarAxesActor2D, emscripten::base<vtkActor2D>>("vtkPolarAxesActor2D")
    .smart_ptr<vtkSmartPointer<vtkPolarAxesActor2D>>("vtkSmartPointer<vtkPolarAxesActor2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolarAxesActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolarAxesActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolarAxesActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolarAxesActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolarAxesActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolarAxesActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolarAxesActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkPolarAxesActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkPolarAxesActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("HasOpaqueGeometry", &vtkPolarAxesActor2D::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkPolarAxesActor2D::HasTranslucentPolygonalGeometry)
    .function("GetActors2D", &vtkPolarAxesActor2D::GetActors2D, emscripten::allow_raw_pointers())
    .function("SetAxesTextProperty", &vtkPolarAxesActor2D::SetAxesTextProperty, emscripten::allow_raw_pointers())
    .function("GetAxesTextProperty", &vtkPolarAxesActor2D::GetAxesTextProperty, emscripten::allow_raw_pointers())
    .function("SetNumberOfAxes", &vtkPolarAxesActor2D::SetNumberOfAxes)
    .function("GetNumberOfAxes", &vtkPolarAxesActor2D::GetNumberOfAxes)
    .function("SetNumberOfAxesTicks", &vtkPolarAxesActor2D::SetNumberOfAxesTicks)
    .function("GetNumberOfAxesTicks", &vtkPolarAxesActor2D::GetNumberOfAxesTicks)
    .function("SetAxesLength", &vtkPolarAxesActor2D::SetAxesLength)
    .function("GetAxesLength", &vtkPolarAxesActor2D::GetAxesLength)
    .function("SetStartAngle", &vtkPolarAxesActor2D::SetStartAngle)
    .function("GetStartAngle", &vtkPolarAxesActor2D::GetStartAngle)
    .function("SetEndAngle", &vtkPolarAxesActor2D::SetEndAngle)
    .function("GetEndAngle", &vtkPolarAxesActor2D::GetEndAngle)
    .function("SetOrigin", emscripten::select_overload<void(vtkPolarAxesActor2D&, double, double)>([](vtkPolarAxesActor2D& self, double arg_0, double arg_1) -> void { return self.SetOrigin( arg_0, arg_1); }));
}

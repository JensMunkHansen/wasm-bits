// JavaScript wrapper for vtkDistanceRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDistanceRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDistanceRepresentation2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAxisActor2D.h"
#include "vtkProperty2D.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkDistanceRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkDistanceRepresentation2D>(vtkDistanceRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistanceRepresentation2D_class) {
  emscripten::class_<vtkDistanceRepresentation2D, emscripten::base<vtkDistanceRepresentation>>("vtkDistanceRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkDistanceRepresentation2D>>("vtkSmartPointer<vtkDistanceRepresentation2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDistanceRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistanceRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistanceRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistanceRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistanceRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistanceRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDistance", &vtkDistanceRepresentation2D::GetDistance)
    .function("GetAxis", &vtkDistanceRepresentation2D::GetAxis, emscripten::allow_raw_pointers())
    .function("GetAxisProperty", &vtkDistanceRepresentation2D::GetAxisProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkDistanceRepresentation2D::BuildRepresentation)
    .function("ReleaseGraphicsResources", &vtkDistanceRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkDistanceRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkDistanceRepresentation2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers());
}

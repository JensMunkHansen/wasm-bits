// JavaScript wrapper for vtkAngleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAngleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAngleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkActor.h"
#include "vtkFollower.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkAngleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkAngleRepresentation3D>(vtkAngleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAngleRepresentation3D_class) {
  emscripten::class_<vtkAngleRepresentation3D, emscripten::base<vtkAngleRepresentation>>("vtkAngleRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkAngleRepresentation3D>>("vtkSmartPointer<vtkAngleRepresentation3D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAngleRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAngleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAngleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAngleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAngleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAngle", &vtkAngleRepresentation3D::GetAngle)
    .function("GetRay1", &vtkAngleRepresentation3D::GetRay1, emscripten::allow_raw_pointers())
    .function("GetRay2", &vtkAngleRepresentation3D::GetRay2, emscripten::allow_raw_pointers())
    .function("GetArc", &vtkAngleRepresentation3D::GetArc, emscripten::allow_raw_pointers())
    .function("GetTextActor", &vtkAngleRepresentation3D::GetTextActor, emscripten::allow_raw_pointers())
    .function("GetTextActorScale", emscripten::optional_override([](vtkAngleRepresentation3D& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetTextActorScale()) / sizeof(double);}))
    .function("BuildRepresentation", &vtkAngleRepresentation3D::BuildRepresentation)
    .function("ReleaseGraphicsResources", &vtkAngleRepresentation3D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkAngleRepresentation3D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkAngleRepresentation3D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkAngleRepresentation3D::HasTranslucentPolygonalGeometry);
}

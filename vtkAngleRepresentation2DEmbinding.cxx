// JavaScript wrapper for vtkAngleRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAngleRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAngleRepresentation2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLeaderActor2D.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkAngleRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkAngleRepresentation2D>(vtkAngleRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAngleRepresentation2D_class) {
  emscripten::class_<vtkAngleRepresentation2D, emscripten::base<vtkAngleRepresentation>>("vtkAngleRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkAngleRepresentation2D>>("vtkSmartPointer<vtkAngleRepresentation2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAngleRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAngleRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAngleRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAngleRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAngleRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAngleRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAngle", &vtkAngleRepresentation2D::GetAngle)
    .function("GetRay1", &vtkAngleRepresentation2D::GetRay1, emscripten::allow_raw_pointers())
    .function("GetRay2", &vtkAngleRepresentation2D::GetRay2, emscripten::allow_raw_pointers())
    .function("GetArc", &vtkAngleRepresentation2D::GetArc, emscripten::allow_raw_pointers())
    .function("SetForce3DArcPlacement", &vtkAngleRepresentation2D::SetForce3DArcPlacement)
    .function("GetForce3DArcPlacement", &vtkAngleRepresentation2D::GetForce3DArcPlacement)
    .function("BuildRepresentation", &vtkAngleRepresentation2D::BuildRepresentation)
    .function("ReleaseGraphicsResources", &vtkAngleRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkAngleRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers());
}

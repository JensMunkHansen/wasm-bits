// JavaScript wrapper for vtkTexturedButtonRepresentation2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTexturedButtonRepresentation2DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTexturedButtonRepresentation2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty2D.h"
#include "vtkImageData.h"
#include "vtkBalloonRepresentation.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkTexturedButtonRepresentation2D.h"

template<> void emscripten::internal::raw_destructor<vtkTexturedButtonRepresentation2D>(vtkTexturedButtonRepresentation2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTexturedButtonRepresentation2D_class) {
  emscripten::class_<vtkTexturedButtonRepresentation2D, emscripten::base<vtkButtonRepresentation>>("vtkTexturedButtonRepresentation2D")
    .smart_ptr<vtkSmartPointer<vtkTexturedButtonRepresentation2D>>("vtkSmartPointer<vtkTexturedButtonRepresentation2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTexturedButtonRepresentation2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedButtonRepresentation2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTexturedButtonRepresentation2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTexturedButtonRepresentation2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTexturedButtonRepresentation2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedButtonRepresentation2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTexturedButtonRepresentation2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProperty", &vtkTexturedButtonRepresentation2D::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkTexturedButtonRepresentation2D::GetProperty, emscripten::allow_raw_pointers())
    .function("SetHoveringProperty", &vtkTexturedButtonRepresentation2D::SetHoveringProperty, emscripten::allow_raw_pointers())
    .function("GetHoveringProperty", &vtkTexturedButtonRepresentation2D::GetHoveringProperty, emscripten::allow_raw_pointers())
    .function("SetSelectingProperty", &vtkTexturedButtonRepresentation2D::SetSelectingProperty, emscripten::allow_raw_pointers())
    .function("GetSelectingProperty", &vtkTexturedButtonRepresentation2D::GetSelectingProperty, emscripten::allow_raw_pointers())
    .function("SetButtonTexture", &vtkTexturedButtonRepresentation2D::SetButtonTexture, emscripten::allow_raw_pointers())
    .function("GetButtonTexture", &vtkTexturedButtonRepresentation2D::GetButtonTexture, emscripten::allow_raw_pointers())
    .function("GetBalloon", &vtkTexturedButtonRepresentation2D::GetBalloon, emscripten::allow_raw_pointers())
    .function("ComputeInteractionState", &vtkTexturedButtonRepresentation2D::ComputeInteractionState)
    .function("BuildRepresentation", &vtkTexturedButtonRepresentation2D::BuildRepresentation)
    .function("Highlight", &vtkTexturedButtonRepresentation2D::Highlight)
    .function("ShallowCopy", &vtkTexturedButtonRepresentation2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkTexturedButtonRepresentation2D::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTexturedButtonRepresentation2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkTexturedButtonRepresentation2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkTexturedButtonRepresentation2D::HasTranslucentPolygonalGeometry);
}

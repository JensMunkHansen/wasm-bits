// JavaScript wrapper for vtkTexturedButtonRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTexturedButtonRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTexturedButtonRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkProperty.h"
#include "vtkImageData.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkTexturedButtonRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkTexturedButtonRepresentation>(vtkTexturedButtonRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTexturedButtonRepresentation_class) {
  emscripten::class_<vtkTexturedButtonRepresentation, emscripten::base<vtkButtonRepresentation>>("vtkTexturedButtonRepresentation")
    .smart_ptr<vtkSmartPointer<vtkTexturedButtonRepresentation>>("vtkSmartPointer<vtkTexturedButtonRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTexturedButtonRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedButtonRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTexturedButtonRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTexturedButtonRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTexturedButtonRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTexturedButtonRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTexturedButtonRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetButtonGeometry", &vtkTexturedButtonRepresentation::SetButtonGeometry, emscripten::allow_raw_pointers())
    .function("SetButtonGeometryConnection", &vtkTexturedButtonRepresentation::SetButtonGeometryConnection, emscripten::allow_raw_pointers())
    .function("GetButtonGeometry", &vtkTexturedButtonRepresentation::GetButtonGeometry, emscripten::allow_raw_pointers())
    .function("SetFollowCamera", &vtkTexturedButtonRepresentation::SetFollowCamera)
    .function("GetFollowCamera", &vtkTexturedButtonRepresentation::GetFollowCamera)
    .function("FollowCameraOn", &vtkTexturedButtonRepresentation::FollowCameraOn)
    .function("FollowCameraOff", &vtkTexturedButtonRepresentation::FollowCameraOff)
    .function("SetProperty", &vtkTexturedButtonRepresentation::SetProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkTexturedButtonRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("SetHoveringProperty", &vtkTexturedButtonRepresentation::SetHoveringProperty, emscripten::allow_raw_pointers())
    .function("GetHoveringProperty", &vtkTexturedButtonRepresentation::GetHoveringProperty, emscripten::allow_raw_pointers())
    .function("SetSelectingProperty", &vtkTexturedButtonRepresentation::SetSelectingProperty, emscripten::allow_raw_pointers())
    .function("GetSelectingProperty", &vtkTexturedButtonRepresentation::GetSelectingProperty, emscripten::allow_raw_pointers())
    .function("SetButtonTexture", &vtkTexturedButtonRepresentation::SetButtonTexture, emscripten::allow_raw_pointers())
    .function("GetButtonTexture", &vtkTexturedButtonRepresentation::GetButtonTexture, emscripten::allow_raw_pointers())
    .function("ComputeInteractionState", &vtkTexturedButtonRepresentation::ComputeInteractionState)
    .function("BuildRepresentation", &vtkTexturedButtonRepresentation::BuildRepresentation)
    .function("Highlight", &vtkTexturedButtonRepresentation::Highlight)
    .function("ShallowCopy", &vtkTexturedButtonRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkTexturedButtonRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTexturedButtonRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkTexturedButtonRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkTexturedButtonRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkTexturedButtonRepresentation::HasTranslucentPolygonalGeometry)
    .function("RegisterPickers", &vtkTexturedButtonRepresentation::RegisterPickers);
}

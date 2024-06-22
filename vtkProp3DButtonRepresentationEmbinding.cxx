// JavaScript wrapper for vtkProp3DButtonRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkProp3DButtonRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkProp3DButtonRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp3D.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkProp3DButtonRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkProp3DButtonRepresentation>(vtkProp3DButtonRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProp3DButtonRepresentation_class) {
  emscripten::class_<vtkProp3DButtonRepresentation, emscripten::base<vtkButtonRepresentation>>("vtkProp3DButtonRepresentation")
    .smart_ptr<vtkSmartPointer<vtkProp3DButtonRepresentation>>("vtkSmartPointer<vtkProp3DButtonRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkProp3DButtonRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DButtonRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProp3DButtonRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProp3DButtonRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProp3DButtonRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProp3DButtonRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProp3DButtonRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetButtonProp", &vtkProp3DButtonRepresentation::SetButtonProp, emscripten::allow_raw_pointers())
    .function("GetButtonProp", &vtkProp3DButtonRepresentation::GetButtonProp, emscripten::allow_raw_pointers())
    .function("SetFollowCamera", &vtkProp3DButtonRepresentation::SetFollowCamera)
    .function("GetFollowCamera", &vtkProp3DButtonRepresentation::GetFollowCamera)
    .function("FollowCameraOn", &vtkProp3DButtonRepresentation::FollowCameraOn)
    .function("FollowCameraOff", &vtkProp3DButtonRepresentation::FollowCameraOff)
    .function("SetState", &vtkProp3DButtonRepresentation::SetState)
    .function("ComputeInteractionState", &vtkProp3DButtonRepresentation::ComputeInteractionState)
    .function("BuildRepresentation", &vtkProp3DButtonRepresentation::BuildRepresentation)
    .function("ShallowCopy", &vtkProp3DButtonRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkProp3DButtonRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkProp3DButtonRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkProp3DButtonRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderVolumetricGeometry", &vtkProp3DButtonRepresentation::RenderVolumetricGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkProp3DButtonRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkProp3DButtonRepresentation::HasTranslucentPolygonalGeometry)
    .function("RegisterPickers", &vtkProp3DButtonRepresentation::RegisterPickers);
}

// JavaScript wrapper for vtkCameraRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCameraRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCameraRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkCameraInterpolator.h"
#include "vtkProperty2D.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCameraRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkCameraRepresentation>(vtkCameraRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCameraRepresentation_class) {
  emscripten::class_<vtkCameraRepresentation, emscripten::base<vtkBorderRepresentation>>("vtkCameraRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCameraRepresentation>>("vtkSmartPointer<vtkCameraRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCameraRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCameraRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCameraRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCameraRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCameraRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCameraRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCamera", &vtkCameraRepresentation::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkCameraRepresentation::GetCamera, emscripten::allow_raw_pointers())
    .function("SetInterpolator", &vtkCameraRepresentation::SetInterpolator, emscripten::allow_raw_pointers())
    .function("GetInterpolator", &vtkCameraRepresentation::GetInterpolator, emscripten::allow_raw_pointers())
    .function("SetNumberOfFrames", &vtkCameraRepresentation::SetNumberOfFrames)
    .function("GetNumberOfFramesMinValue", &vtkCameraRepresentation::GetNumberOfFramesMinValue)
    .function("GetNumberOfFramesMaxValue", &vtkCameraRepresentation::GetNumberOfFramesMaxValue)
    .function("GetNumberOfFrames", &vtkCameraRepresentation::GetNumberOfFrames)
    .function("GetProperty", &vtkCameraRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("AddCameraToPath", &vtkCameraRepresentation::AddCameraToPath)
    .function("AnimatePath", &vtkCameraRepresentation::AnimatePath, emscripten::allow_raw_pointers())
    .function("InitializePath", &vtkCameraRepresentation::InitializePath)
    .function("BuildRepresentation", &vtkCameraRepresentation::BuildRepresentation)
    .function("GetActors2D", &vtkCameraRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCameraRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCameraRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCameraRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCameraRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCameraRepresentation::HasTranslucentPolygonalGeometry);
}

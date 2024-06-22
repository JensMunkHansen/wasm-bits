// JavaScript wrapper for vtkRectilinearWipeRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkRectilinearWipeRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkRectilinearWipeRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageRectilinearWipe.h"
#include "vtkImageActor.h"
#include "vtkProperty2D.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkRectilinearWipeRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkRectilinearWipeRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkRectilinearWipeRepresentation>(vtkRectilinearWipeRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearWipeRepresentation_class) {
  using InteractionStateType=vtkRectilinearWipeRepresentation::InteractionStateType;
  emscripten::class_<vtkRectilinearWipeRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkRectilinearWipeRepresentation")
    .smart_ptr<vtkSmartPointer<vtkRectilinearWipeRepresentation>>("vtkSmartPointer<vtkRectilinearWipeRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearWipeRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearWipeRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearWipeRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearWipeRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearWipeRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearWipeRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearWipeRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRectilinearWipe", &vtkRectilinearWipeRepresentation::SetRectilinearWipe, emscripten::allow_raw_pointers())
    .function("GetRectilinearWipe", &vtkRectilinearWipeRepresentation::GetRectilinearWipe, emscripten::allow_raw_pointers())
    .function("SetImageActor", &vtkRectilinearWipeRepresentation::SetImageActor, emscripten::allow_raw_pointers())
    .function("GetImageActor", &vtkRectilinearWipeRepresentation::GetImageActor, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkRectilinearWipeRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkRectilinearWipeRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkRectilinearWipeRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkRectilinearWipeRepresentation::GetTolerance)
    .function("GetProperty", &vtkRectilinearWipeRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkRectilinearWipeRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkRectilinearWipeRepresentation::ComputeInteractionState)
    .function("GetActors2D", &vtkRectilinearWipeRepresentation::GetActors2D, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkRectilinearWipeRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkRectilinearWipeRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkRectilinearWipeRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkRectilinearWipeRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkRectilinearWipeRepresentation::HasTranslucentPolygonalGeometry);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkRectilinearWipeRepresentation_0_2_constants) {
    typedef vtkRectilinearWipeRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkRectilinearWipeRepresentation_InteractionStateType_Outside", vtkRectilinearWipeRepresentation::Outside },
      { "vtkRectilinearWipeRepresentation_InteractionStateType_MovingHPane", vtkRectilinearWipeRepresentation::MovingHPane },
      { "vtkRectilinearWipeRepresentation_InteractionStateType_MovingVPane", vtkRectilinearWipeRepresentation::MovingVPane },
      { "vtkRectilinearWipeRepresentation_InteractionStateType_MovingCenter", vtkRectilinearWipeRepresentation::MovingCenter },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

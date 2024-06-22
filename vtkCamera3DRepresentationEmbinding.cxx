// JavaScript wrapper for vtkCamera3DRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkCamera3DRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkCamera3DRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCamera.h"
#include "vtkPropCollection.h"
#include "vtkCamera3DRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkCamera3DRepresentation>(vtkCamera3DRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCamera3DRepresentation_class) {
  emscripten::class_<vtkCamera3DRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkCamera3DRepresentation")
    .smart_ptr<vtkSmartPointer<vtkCamera3DRepresentation>>("vtkSmartPointer<vtkCamera3DRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCamera3DRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCamera3DRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCamera3DRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCamera3DRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCamera3DRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCamera3DRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCamera3DRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildRepresentation", &vtkCamera3DRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkCamera3DRepresentation::ComputeInteractionState)
    .function("ReleaseGraphicsResources", &vtkCamera3DRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCamera3DRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCamera3DRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCamera3DRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetCamera", &vtkCamera3DRepresentation::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkCamera3DRepresentation::GetCamera, emscripten::allow_raw_pointers())
    .function("SetFrontHandleDistance", &vtkCamera3DRepresentation::SetFrontHandleDistance)
    .function("GetFrontHandleDistanceMinValue", &vtkCamera3DRepresentation::GetFrontHandleDistanceMinValue)
    .function("GetFrontHandleDistanceMaxValue", &vtkCamera3DRepresentation::GetFrontHandleDistanceMaxValue)
    .function("GetFrontHandleDistance", &vtkCamera3DRepresentation::GetFrontHandleDistance)
    .function("SetUpHandleDistance", &vtkCamera3DRepresentation::SetUpHandleDistance)
    .function("GetUpHandleDistanceMinValue", &vtkCamera3DRepresentation::GetUpHandleDistanceMinValue)
    .function("GetUpHandleDistanceMaxValue", &vtkCamera3DRepresentation::GetUpHandleDistanceMaxValue)
    .function("GetUpHandleDistance", &vtkCamera3DRepresentation::GetUpHandleDistance)
    .function("SetTranslationAxisToXAxis", &vtkCamera3DRepresentation::SetTranslationAxisToXAxis)
    .function("SetTranslationAxisToYAxis", &vtkCamera3DRepresentation::SetTranslationAxisToYAxis)
    .function("SetTranslationAxisToZAxis", &vtkCamera3DRepresentation::SetTranslationAxisToZAxis)
    .function("SetTranslationAxisToNone", &vtkCamera3DRepresentation::SetTranslationAxisToNone)
    .function("SetTranslationAxis", &vtkCamera3DRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkCamera3DRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkCamera3DRepresentation::GetTranslationAxisMaxValue)
    .function("GetTranslationAxis", &vtkCamera3DRepresentation::GetTranslationAxis)
    .function("SetTranslatingAll", &vtkCamera3DRepresentation::SetTranslatingAll)
    .function("GetTranslatingAll", &vtkCamera3DRepresentation::GetTranslatingAll)
    .function("TranslatingAllOn", &vtkCamera3DRepresentation::TranslatingAllOn)
    .function("TranslatingAllOff", &vtkCamera3DRepresentation::TranslatingAllOff)
    .function("SetFrustumVisibility", &vtkCamera3DRepresentation::SetFrustumVisibility)
    .function("GetFrustumVisibility", &vtkCamera3DRepresentation::GetFrustumVisibility)
    .function("FrustumVisibilityOn", &vtkCamera3DRepresentation::FrustumVisibilityOn)
    .function("FrustumVisibilityOff", &vtkCamera3DRepresentation::FrustumVisibilityOff)
    .function("SetSecondaryHandlesVisibility", &vtkCamera3DRepresentation::SetSecondaryHandlesVisibility)
    .function("GetSecondaryHandlesVisibility", &vtkCamera3DRepresentation::GetSecondaryHandlesVisibility)
    .function("SecondaryHandlesVisibilityOn", &vtkCamera3DRepresentation::SecondaryHandlesVisibilityOn)
    .function("SecondaryHandlesVisibilityOff", &vtkCamera3DRepresentation::SecondaryHandlesVisibilityOff)
    .function("SetInteractionState", &vtkCamera3DRepresentation::SetInteractionState)
    .function("RegisterPickers", &vtkCamera3DRepresentation::RegisterPickers)
    .function("GetActors", &vtkCamera3DRepresentation::GetActors, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkCamera3DRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "vtkCamera3DRepresentation_Outside", vtkCamera3DRepresentation::Outside },
      { "vtkCamera3DRepresentation_Translating", vtkCamera3DRepresentation::Translating },
      { "vtkCamera3DRepresentation_TranslatingPosition", vtkCamera3DRepresentation::TranslatingPosition },
      { "vtkCamera3DRepresentation_TranslatingNearTarget", vtkCamera3DRepresentation::TranslatingNearTarget },
      { "vtkCamera3DRepresentation_TranslatingTarget", vtkCamera3DRepresentation::TranslatingTarget },
      { "vtkCamera3DRepresentation_TranslatingUp", vtkCamera3DRepresentation::TranslatingUp },
      { "vtkCamera3DRepresentation_Scaling", vtkCamera3DRepresentation::Scaling },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

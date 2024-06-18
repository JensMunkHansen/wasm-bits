// JavaScript wrapper for vtkSphereHandleRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkSphereHandleRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkSphereHandleRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProperty.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkSphereHandleRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkSphereHandleRepresentation>(vtkSphereHandleRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSphereHandleRepresentation_class) {
  emscripten::class_<vtkSphereHandleRepresentation, emscripten::base<vtkHandleRepresentation>>("vtkSphereHandleRepresentation")
    .smart_ptr<vtkSmartPointer<vtkSphereHandleRepresentation>>("vtkSmartPointer<vtkSphereHandleRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSphereHandleRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereHandleRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSphereHandleRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSphereHandleRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSphereHandleRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSphereHandleRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSphereHandleRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTranslationMode", &vtkSphereHandleRepresentation::SetTranslationMode)
    .function("GetTranslationMode", &vtkSphereHandleRepresentation::GetTranslationMode)
    .function("TranslationModeOn", &vtkSphereHandleRepresentation::TranslationModeOn)
    .function("TranslationModeOff", &vtkSphereHandleRepresentation::TranslationModeOff)
    .function("SetSphereRadius", &vtkSphereHandleRepresentation::SetSphereRadius)
    .function("GetSphereRadius", &vtkSphereHandleRepresentation::GetSphereRadius)
    .function("SetProperty", &vtkSphereHandleRepresentation::SetProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedProperty", &vtkSphereHandleRepresentation::SetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetProperty", &vtkSphereHandleRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkSphereHandleRepresentation::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("SetHotSpotSize", &vtkSphereHandleRepresentation::SetHotSpotSize)
    .function("GetHotSpotSizeMinValue", &vtkSphereHandleRepresentation::GetHotSpotSizeMinValue)
    .function("GetHotSpotSizeMaxValue", &vtkSphereHandleRepresentation::GetHotSpotSizeMaxValue)
    .function("GetHotSpotSize", &vtkSphereHandleRepresentation::GetHotSpotSize)
    .function("SetHandleSize", &vtkSphereHandleRepresentation::SetHandleSize)
    .function("BuildRepresentation", &vtkSphereHandleRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkSphereHandleRepresentation::ComputeInteractionState)
    .function("ShallowCopy", &vtkSphereHandleRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkSphereHandleRepresentation::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkSphereHandleRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkSphereHandleRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkSphereHandleRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkSphereHandleRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkSphereHandleRepresentation::HasTranslucentPolygonalGeometry)
    .function("Highlight", &vtkSphereHandleRepresentation::Highlight)
    .function("RegisterPickers", &vtkSphereHandleRepresentation::RegisterPickers)
    .function("SetVisibility", &vtkSphereHandleRepresentation::SetVisibility)
    .function("Translate", emscripten::select_overload<void(vtkSphereHandleRepresentation&, std::uintptr_t)>([](vtkSphereHandleRepresentation& self, std::uintptr_t arg_0) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double))); }));
}

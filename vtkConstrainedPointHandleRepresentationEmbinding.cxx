// JavaScript wrapper for vtkConstrainedPointHandleRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkConstrainedPointHandleRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkConstrainedPointHandleRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkPlane.h"
#include "vtkPlaneCollection.h"
#include "vtkPlanes.h"
#include "vtkRenderer.h"
#include "vtkProperty.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkProp.h"
#include "vtkConstrainedPointHandleRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkConstrainedPointHandleRepresentation>(vtkConstrainedPointHandleRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConstrainedPointHandleRepresentation_class) {
  emscripten::class_<vtkConstrainedPointHandleRepresentation, emscripten::base<vtkHandleRepresentation>>("vtkConstrainedPointHandleRepresentation")
    .smart_ptr<vtkSmartPointer<vtkConstrainedPointHandleRepresentation>>("vtkSmartPointer<vtkConstrainedPointHandleRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConstrainedPointHandleRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstrainedPointHandleRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConstrainedPointHandleRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConstrainedPointHandleRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConstrainedPointHandleRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConstrainedPointHandleRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConstrainedPointHandleRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCursorShape", &vtkConstrainedPointHandleRepresentation::SetCursorShape, emscripten::allow_raw_pointers())
    .function("GetCursorShape", &vtkConstrainedPointHandleRepresentation::GetCursorShape, emscripten::allow_raw_pointers())
    .function("SetActiveCursorShape", &vtkConstrainedPointHandleRepresentation::SetActiveCursorShape, emscripten::allow_raw_pointers())
    .function("GetActiveCursorShape", &vtkConstrainedPointHandleRepresentation::GetActiveCursorShape, emscripten::allow_raw_pointers())
    .function("SetProjectionNormal", &vtkConstrainedPointHandleRepresentation::SetProjectionNormal)
    .function("GetProjectionNormalMinValue", &vtkConstrainedPointHandleRepresentation::GetProjectionNormalMinValue)
    .function("GetProjectionNormalMaxValue", &vtkConstrainedPointHandleRepresentation::GetProjectionNormalMaxValue)
    .function("GetProjectionNormal", emscripten::select_overload<int(vtkConstrainedPointHandleRepresentation&)>([](vtkConstrainedPointHandleRepresentation& self) -> int { return self.GetProjectionNormal(); }))
    .function("SetProjectionNormalToXAxis", &vtkConstrainedPointHandleRepresentation::SetProjectionNormalToXAxis)
    .function("SetProjectionNormalToYAxis", &vtkConstrainedPointHandleRepresentation::SetProjectionNormalToYAxis)
    .function("SetProjectionNormalToZAxis", &vtkConstrainedPointHandleRepresentation::SetProjectionNormalToZAxis)
    .function("SetProjectionNormalToOblique", &vtkConstrainedPointHandleRepresentation::SetProjectionNormalToOblique)
    .function("SetObliquePlane", &vtkConstrainedPointHandleRepresentation::SetObliquePlane, emscripten::allow_raw_pointers())
    .function("GetObliquePlane", &vtkConstrainedPointHandleRepresentation::GetObliquePlane, emscripten::allow_raw_pointers())
    .function("SetProjectionPosition", &vtkConstrainedPointHandleRepresentation::SetProjectionPosition)
    .function("GetProjectionPosition", &vtkConstrainedPointHandleRepresentation::GetProjectionPosition)
    .function("AddBoundingPlane", &vtkConstrainedPointHandleRepresentation::AddBoundingPlane, emscripten::allow_raw_pointers())
    .function("RemoveBoundingPlane", &vtkConstrainedPointHandleRepresentation::RemoveBoundingPlane, emscripten::allow_raw_pointers())
    .function("RemoveAllBoundingPlanes", &vtkConstrainedPointHandleRepresentation::RemoveAllBoundingPlanes)
    .function("SetBoundingPlanes", emscripten::select_overload<void(vtkConstrainedPointHandleRepresentation&, vtkPlaneCollection*)>([](vtkConstrainedPointHandleRepresentation& self, vtkPlaneCollection* arg_0) -> void { return self.SetBoundingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetBoundingPlanes", emscripten::select_overload<void(vtkConstrainedPointHandleRepresentation&, vtkPlanes*)>([](vtkConstrainedPointHandleRepresentation& self, vtkPlanes* arg_0) -> void { return self.SetBoundingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetBoundingPlanes", &vtkConstrainedPointHandleRepresentation::GetBoundingPlanes, emscripten::allow_raw_pointers())
    .function("SetPosition", emscripten::select_overload<void(vtkConstrainedPointHandleRepresentation&, double, double, double)>([](vtkConstrainedPointHandleRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("GetPosition", emscripten::select_overload<std::uintptr_t(vtkConstrainedPointHandleRepresentation&)>([](vtkConstrainedPointHandleRepresentation& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetPosition()); }))
    .function("GetProperty", &vtkConstrainedPointHandleRepresentation::GetProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedProperty", &vtkConstrainedPointHandleRepresentation::GetSelectedProperty, emscripten::allow_raw_pointers())
    .function("GetActiveProperty", &vtkConstrainedPointHandleRepresentation::GetActiveProperty, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkConstrainedPointHandleRepresentation::SetRenderer, emscripten::allow_raw_pointers())
    .function("BuildRepresentation", &vtkConstrainedPointHandleRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkConstrainedPointHandleRepresentation::ComputeInteractionState)
    .function("GetActors", &vtkConstrainedPointHandleRepresentation::GetActors, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkConstrainedPointHandleRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkConstrainedPointHandleRepresentation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkConstrainedPointHandleRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkConstrainedPointHandleRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkConstrainedPointHandleRepresentation::HasTranslucentPolygonalGeometry)
    .function("ShallowCopy", &vtkConstrainedPointHandleRepresentation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Highlight", &vtkConstrainedPointHandleRepresentation::Highlight)
    .function("Translate", emscripten::select_overload<void(vtkConstrainedPointHandleRepresentation&, std::uintptr_t, std::uintptr_t)>([](vtkConstrainedPointHandleRepresentation& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return self.Translate(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }));
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkConstrainedPointHandleRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkConstrainedPointHandleRepresentation_XAxis", vtkConstrainedPointHandleRepresentation::XAxis },
      { "vtkConstrainedPointHandleRepresentation_YAxis", vtkConstrainedPointHandleRepresentation::YAxis },
      { "vtkConstrainedPointHandleRepresentation_ZAxis", vtkConstrainedPointHandleRepresentation::ZAxis },
      { "vtkConstrainedPointHandleRepresentation_Oblique", vtkConstrainedPointHandleRepresentation::Oblique },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

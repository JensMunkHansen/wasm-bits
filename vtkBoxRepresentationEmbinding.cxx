// JavaScript wrapper for vtkBoxRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBoxRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBoxRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlanes.h"
#include "vtkPlane.h"
#include "vtkTransform.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPropCollection.h"
#include "vtkBoxRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkBoxRepresentation>(vtkBoxRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoxRepresentation_class) {
  emscripten::class_<vtkBoxRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkBoxRepresentation")
    .smart_ptr<vtkSmartPointer<vtkBoxRepresentation>>("vtkSmartPointer<vtkBoxRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBoxRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoxRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoxRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoxRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoxRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPlanes", &vtkBoxRepresentation::GetPlanes, emscripten::allow_raw_pointers())
    .function("GetUnderlyingPlane", &vtkBoxRepresentation::GetUnderlyingPlane, emscripten::allow_raw_pointers())
    .function("SetInsideOut", &vtkBoxRepresentation::SetInsideOut)
    .function("GetInsideOut", &vtkBoxRepresentation::GetInsideOut)
    .function("InsideOutOn", &vtkBoxRepresentation::InsideOutOn)
    .function("InsideOutOff", &vtkBoxRepresentation::InsideOutOff)
    .function("GetTransform", &vtkBoxRepresentation::GetTransform, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkBoxRepresentation::SetTransform, emscripten::allow_raw_pointers())
    .function("GetPolyData", &vtkBoxRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkBoxRepresentation::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkBoxRepresentation::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetFaceProperty", &vtkBoxRepresentation::GetFaceProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedFaceProperty", &vtkBoxRepresentation::GetSelectedFaceProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkBoxRepresentation::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkBoxRepresentation::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("SetForegroundColor", emscripten::select_overload<void(vtkBoxRepresentation&, double, double, double)>([](vtkBoxRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetForegroundColor( arg_0, arg_1, arg_2); }))
    .function("SetInteractionColor", emscripten::select_overload<void(vtkBoxRepresentation&, double, double, double)>([](vtkBoxRepresentation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetInteractionColor( arg_0, arg_1, arg_2); }))
    .function("SetOutlineFaceWires", &vtkBoxRepresentation::SetOutlineFaceWires)
    .function("GetOutlineFaceWires", &vtkBoxRepresentation::GetOutlineFaceWires)
    .function("OutlineFaceWiresOn", &vtkBoxRepresentation::OutlineFaceWiresOn)
    .function("OutlineFaceWiresOff", &vtkBoxRepresentation::OutlineFaceWiresOff)
    .function("SetOutlineCursorWires", &vtkBoxRepresentation::SetOutlineCursorWires)
    .function("GetOutlineCursorWires", &vtkBoxRepresentation::GetOutlineCursorWires)
    .function("OutlineCursorWiresOn", &vtkBoxRepresentation::OutlineCursorWiresOn)
    .function("OutlineCursorWiresOff", &vtkBoxRepresentation::OutlineCursorWiresOff)
    .function("HandlesOn", &vtkBoxRepresentation::HandlesOn)
    .function("HandlesOff", &vtkBoxRepresentation::HandlesOff)
    .function("BuildRepresentation", &vtkBoxRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkBoxRepresentation::ComputeInteractionState)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkBoxRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkBoxRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkBoxRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers())
    .function("EndComplexInteraction", emscripten::optional_override([](vtkBoxRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.EndComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkBoxRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkBoxRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkBoxRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkBoxRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkBoxRepresentation::SetInteractionState)
    .function("GetTwoPlaneMode", &vtkBoxRepresentation::GetTwoPlaneMode)
    .function("SetTwoPlaneMode", &vtkBoxRepresentation::SetTwoPlaneMode)
    .function("GetSnapToAxes", &vtkBoxRepresentation::GetSnapToAxes)
    .function("SetSnapToAxes", &vtkBoxRepresentation::SetSnapToAxes)
    .function("StepForward", &vtkBoxRepresentation::StepForward)
    .function("StepBackward", &vtkBoxRepresentation::StepBackward)
    .function("RegisterPickers", &vtkBoxRepresentation::RegisterPickers)
    .function("GetTranslationAxis", &vtkBoxRepresentation::GetTranslationAxis)
    .function("SetTranslationAxis", &vtkBoxRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkBoxRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkBoxRepresentation::GetTranslationAxisMaxValue)
    .function("SetXTranslationAxisOn", &vtkBoxRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkBoxRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkBoxRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkBoxRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkBoxRepresentation::IsTranslationConstrained)
    .function("GetActors", &vtkBoxRepresentation::GetActors, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBoxRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "vtkBoxRepresentation_Outside", vtkBoxRepresentation::Outside },
      { "vtkBoxRepresentation_MoveF0", vtkBoxRepresentation::MoveF0 },
      { "vtkBoxRepresentation_MoveF1", vtkBoxRepresentation::MoveF1 },
      { "vtkBoxRepresentation_MoveF2", vtkBoxRepresentation::MoveF2 },
      { "vtkBoxRepresentation_MoveF3", vtkBoxRepresentation::MoveF3 },
      { "vtkBoxRepresentation_MoveF4", vtkBoxRepresentation::MoveF4 },
      { "vtkBoxRepresentation_MoveF5", vtkBoxRepresentation::MoveF5 },
      { "vtkBoxRepresentation_Translating", vtkBoxRepresentation::Translating },
      { "vtkBoxRepresentation_Rotating", vtkBoxRepresentation::Rotating },
      { "vtkBoxRepresentation_Scaling", vtkBoxRepresentation::Scaling },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

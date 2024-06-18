// JavaScript wrapper for vtkTensorRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkTensorRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkTensorRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkProperty.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAbstractWidget.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkTensorRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkTensorRepresentation>(vtkTensorRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTensorRepresentation_class) {
  emscripten::class_<vtkTensorRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkTensorRepresentation")
    .smart_ptr<vtkSmartPointer<vtkTensorRepresentation>>("vtkSmartPointer<vtkTensorRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTensorRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTensorRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTensorRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTensorRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTensorRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTensorRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPolyData", &vtkTensorRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetHandleProperty", &vtkTensorRepresentation::GetHandleProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedHandleProperty", &vtkTensorRepresentation::GetSelectedHandleProperty, emscripten::allow_raw_pointers())
    .function("GetFaceProperty", &vtkTensorRepresentation::GetFaceProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedFaceProperty", &vtkTensorRepresentation::GetSelectedFaceProperty, emscripten::allow_raw_pointers())
    .function("GetOutlineProperty", &vtkTensorRepresentation::GetOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedOutlineProperty", &vtkTensorRepresentation::GetSelectedOutlineProperty, emscripten::allow_raw_pointers())
    .function("GetEllipsoidProperty", &vtkTensorRepresentation::GetEllipsoidProperty, emscripten::allow_raw_pointers())
    .function("SetOutlineFaceWires", &vtkTensorRepresentation::SetOutlineFaceWires)
    .function("GetOutlineFaceWires", &vtkTensorRepresentation::GetOutlineFaceWires)
    .function("OutlineFaceWiresOn", &vtkTensorRepresentation::OutlineFaceWiresOn)
    .function("OutlineFaceWiresOff", &vtkTensorRepresentation::OutlineFaceWiresOff)
    .function("SetOutlineCursorWires", &vtkTensorRepresentation::SetOutlineCursorWires)
    .function("GetOutlineCursorWires", &vtkTensorRepresentation::GetOutlineCursorWires)
    .function("OutlineCursorWiresOn", &vtkTensorRepresentation::OutlineCursorWiresOn)
    .function("OutlineCursorWiresOff", &vtkTensorRepresentation::OutlineCursorWiresOff)
    .function("HandlesOn", &vtkTensorRepresentation::HandlesOn)
    .function("HandlesOff", &vtkTensorRepresentation::HandlesOff)
    .function("SetTensorEllipsoid", &vtkTensorRepresentation::SetTensorEllipsoid)
    .function("GetTensorEllipsoid", &vtkTensorRepresentation::GetTensorEllipsoid)
    .function("TensorEllipsoidOn", &vtkTensorRepresentation::TensorEllipsoidOn)
    .function("TensorEllipsoidOff", &vtkTensorRepresentation::TensorEllipsoidOff)
    .function("BuildRepresentation", &vtkTensorRepresentation::BuildRepresentation)
    .function("ComputeInteractionState", &vtkTensorRepresentation::ComputeInteractionState)
    .function("StartComplexInteraction", emscripten::optional_override([](vtkTensorRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.StartComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComplexInteraction", emscripten::optional_override([](vtkTensorRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.ComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ComputeComplexInteractionState", emscripten::optional_override([](vtkTensorRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3, int arg_4) -> int {  return self.ComputeComplexInteractionState( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3), arg_4);}), emscripten::allow_raw_pointers())
    .function("EndComplexInteraction", emscripten::optional_override([](vtkTensorRepresentation& self, vtkRenderWindowInteractor* arg_0, vtkAbstractWidget* arg_1, unsigned long arg_2, std::uintptr_t arg_3) -> void {  return self.EndComplexInteraction( arg_0, arg_1, arg_2,reinterpret_cast<void*>(arg_3));}), emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTensorRepresentation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkTensorRepresentation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkTensorRepresentation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkTensorRepresentation::HasTranslucentPolygonalGeometry)
    .function("SetInteractionState", &vtkTensorRepresentation::SetInteractionState)
    .function("GetSnapToAxes", &vtkTensorRepresentation::GetSnapToAxes)
    .function("SetSnapToAxes", &vtkTensorRepresentation::SetSnapToAxes)
    .function("StepForward", &vtkTensorRepresentation::StepForward)
    .function("StepBackward", &vtkTensorRepresentation::StepBackward)
    .function("RegisterPickers", &vtkTensorRepresentation::RegisterPickers)
    .function("GetTranslationAxis", &vtkTensorRepresentation::GetTranslationAxis)
    .function("SetTranslationAxis", &vtkTensorRepresentation::SetTranslationAxis)
    .function("GetTranslationAxisMinValue", &vtkTensorRepresentation::GetTranslationAxisMinValue)
    .function("GetTranslationAxisMaxValue", &vtkTensorRepresentation::GetTranslationAxisMaxValue)
    .function("SetXTranslationAxisOn", &vtkTensorRepresentation::SetXTranslationAxisOn)
    .function("SetYTranslationAxisOn", &vtkTensorRepresentation::SetYTranslationAxisOn)
    .function("SetZTranslationAxisOn", &vtkTensorRepresentation::SetZTranslationAxisOn)
    .function("SetTranslationAxisOff", &vtkTensorRepresentation::SetTranslationAxisOff)
    .function("IsTranslationConstrained", &vtkTensorRepresentation::IsTranslationConstrained);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkTensorRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[10] = {
      { "vtkTensorRepresentation_Outside", vtkTensorRepresentation::Outside },
      { "vtkTensorRepresentation_MoveF0", vtkTensorRepresentation::MoveF0 },
      { "vtkTensorRepresentation_MoveF1", vtkTensorRepresentation::MoveF1 },
      { "vtkTensorRepresentation_MoveF2", vtkTensorRepresentation::MoveF2 },
      { "vtkTensorRepresentation_MoveF3", vtkTensorRepresentation::MoveF3 },
      { "vtkTensorRepresentation_MoveF4", vtkTensorRepresentation::MoveF4 },
      { "vtkTensorRepresentation_MoveF5", vtkTensorRepresentation::MoveF5 },
      { "vtkTensorRepresentation_Translating", vtkTensorRepresentation::Translating },
      { "vtkTensorRepresentation_Rotating", vtkTensorRepresentation::Rotating },
      { "vtkTensorRepresentation_Scaling", vtkTensorRepresentation::Scaling },
  };
  for (int c = 0; c < 10; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

// JavaScript wrapper for vtkResliceCursorRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkResliceCursorRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkResliceCursorRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkImageAlgorithm.h"
#include "vtkImageActor.h"
#include "vtkScalarsToColors.h"
#include "vtkImageMapToColors.h"
#include "vtkResliceCursor.h"
#include "vtkTextProperty.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"
#include "vtkPlaneSource.h"
#include "vtkResliceCursorRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkResliceCursorRepresentation_0_1_constants) {
  emscripten::constant("VTK_RESLICE_CURSOR_REPRESENTATION_MAX_TEXTBUFF", 128);
}
template<> void emscripten::internal::raw_destructor<vtkResliceCursorRepresentation>(vtkResliceCursorRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkResliceCursorRepresentation_class) {
  emscripten::class_<vtkResliceCursorRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkResliceCursorRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkResliceCursorRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkResliceCursorRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkResliceCursorRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkResliceCursorRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkResliceCursorRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkResliceCursorRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkResliceCursorRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkResliceCursorRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkResliceCursorRepresentation::GetTolerance)
    .function("SetShowReslicedImage", &vtkResliceCursorRepresentation::SetShowReslicedImage)
    .function("GetShowReslicedImage", &vtkResliceCursorRepresentation::GetShowReslicedImage)
    .function("ShowReslicedImageOn", &vtkResliceCursorRepresentation::ShowReslicedImageOn)
    .function("ShowReslicedImageOff", &vtkResliceCursorRepresentation::ShowReslicedImageOff)
    .function("SetRestrictPlaneToVolume", &vtkResliceCursorRepresentation::SetRestrictPlaneToVolume)
    .function("GetRestrictPlaneToVolume", &vtkResliceCursorRepresentation::GetRestrictPlaneToVolume)
    .function("RestrictPlaneToVolumeOn", &vtkResliceCursorRepresentation::RestrictPlaneToVolumeOn)
    .function("RestrictPlaneToVolumeOff", &vtkResliceCursorRepresentation::RestrictPlaneToVolumeOff)
    .function("SetThicknessLabelFormat", emscripten::optional_override([](vtkResliceCursorRepresentation& self, const std::string & arg_0) -> void {  return self.SetThicknessLabelFormat( arg_0.c_str());}))
    .function("GetThicknessLabelFormat", emscripten::optional_override([](vtkResliceCursorRepresentation& self) -> std::string {  return self.GetThicknessLabelFormat();}))
    .function("GetThicknessLabelText", emscripten::optional_override([](vtkResliceCursorRepresentation& self) -> std::string {  return self.GetThicknessLabelText();}))
    .function("GetThicknessLabelPosition", emscripten::select_overload<std::uintptr_t(vtkResliceCursorRepresentation&)>([](vtkResliceCursorRepresentation& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetThicknessLabelPosition()); }))
    .function("BuildRepresentation", &vtkResliceCursorRepresentation::BuildRepresentation)
    .function("GetResliceAxes", &vtkResliceCursorRepresentation::GetResliceAxes, emscripten::allow_raw_pointers())
    .function("GetReslice", &vtkResliceCursorRepresentation::GetReslice, emscripten::allow_raw_pointers())
    .function("GetImageActor", &vtkResliceCursorRepresentation::GetImageActor, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkResliceCursorRepresentation::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkResliceCursorRepresentation::GetLookupTable, emscripten::allow_raw_pointers())
    .function("GetColorMap", &vtkResliceCursorRepresentation::GetColorMap, emscripten::allow_raw_pointers())
    .function("SetColorMap", &vtkResliceCursorRepresentation::SetColorMap, emscripten::allow_raw_pointers())
    .function("SetWindowLevel", &vtkResliceCursorRepresentation::SetWindowLevel)
    .function("GetWindow", &vtkResliceCursorRepresentation::GetWindow)
    .function("GetLevel", &vtkResliceCursorRepresentation::GetLevel)
    .function("SetDisplayText", &vtkResliceCursorRepresentation::SetDisplayText)
    .function("GetDisplayText", &vtkResliceCursorRepresentation::GetDisplayText)
    .function("DisplayTextOn", &vtkResliceCursorRepresentation::DisplayTextOn)
    .function("DisplayTextOff", &vtkResliceCursorRepresentation::DisplayTextOff)
    .function("SetTextProperty", &vtkResliceCursorRepresentation::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkResliceCursorRepresentation::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetUseImageActor", &vtkResliceCursorRepresentation::SetUseImageActor)
    .function("GetUseImageActor", &vtkResliceCursorRepresentation::GetUseImageActor)
    .function("UseImageActorOn", &vtkResliceCursorRepresentation::UseImageActorOn)
    .function("UseImageActorOff", &vtkResliceCursorRepresentation::UseImageActorOff)
    .function("SetManipulationMode", &vtkResliceCursorRepresentation::SetManipulationMode)
    .function("GetManipulationMode", &vtkResliceCursorRepresentation::GetManipulationMode)
    .function("ActivateText", &vtkResliceCursorRepresentation::ActivateText)
    .function("ManageTextDisplay", &vtkResliceCursorRepresentation::ManageTextDisplay)
    .function("InitializeReslicePlane", &vtkResliceCursorRepresentation::InitializeReslicePlane)
    .function("ResetCamera", &vtkResliceCursorRepresentation::ResetCamera)
    .function("GetPlaneSource", &vtkResliceCursorRepresentation::GetPlaneSource, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkResliceCursorRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[13] = {
      { "vtkResliceCursorRepresentation_Outside", vtkResliceCursorRepresentation::Outside },
      { "vtkResliceCursorRepresentation_NearCenter", vtkResliceCursorRepresentation::NearCenter },
      { "vtkResliceCursorRepresentation_NearAxis1", vtkResliceCursorRepresentation::NearAxis1 },
      { "vtkResliceCursorRepresentation_NearAxis2", vtkResliceCursorRepresentation::NearAxis2 },
      { "vtkResliceCursorRepresentation_OnCenter", vtkResliceCursorRepresentation::OnCenter },
      { "vtkResliceCursorRepresentation_OnAxis1", vtkResliceCursorRepresentation::OnAxis1 },
      { "vtkResliceCursorRepresentation_OnAxis2", vtkResliceCursorRepresentation::OnAxis2 },
      { "vtkResliceCursorRepresentation_None", vtkResliceCursorRepresentation::None },
      { "vtkResliceCursorRepresentation_PanAndRotate", vtkResliceCursorRepresentation::PanAndRotate },
      { "vtkResliceCursorRepresentation_RotateBothAxes", vtkResliceCursorRepresentation::RotateBothAxes },
      { "vtkResliceCursorRepresentation_ResizeThickness", vtkResliceCursorRepresentation::ResizeThickness },
      { "vtkResliceCursorRepresentation_WindowLevelling", vtkResliceCursorRepresentation::WindowLevelling },
      { "vtkResliceCursorRepresentation_TranslateSingleAxis", vtkResliceCursorRepresentation::TranslateSingleAxis },
  };
  for (int c = 0; c < 13; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

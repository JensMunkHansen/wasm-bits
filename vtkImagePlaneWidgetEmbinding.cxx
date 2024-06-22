// JavaScript wrapper for vtkImagePlaneWidget with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkImagePlaneWidgetEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkImagePlaneWidget.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageData.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkTexture.h"
#include "vtkImageMapToColors.h"
#include "vtkProperty.h"
#include "vtkAbstractPropPicker.h"
#include "vtkLookupTable.h"
#include "vtkTextProperty.h"
#include "vtkMatrix4x4.h"
#include "vtkImageReslice.h"
#include "vtkImagePlaneWidget.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImagePlaneWidget_0_1_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "VTK_NEAREST_RESLICE", 0 },
      { "VTK_LINEAR_RESLICE", 1 },
      { "VTK_CUBIC_RESLICE", 2 },
      { "VTK_IMAGE_PLANE_WIDGET_MAX_TEXTBUFF", 128 },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImagePlaneWidget_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImagePlaneWidget>(vtkImagePlaneWidget * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImagePlaneWidget_class) {
  emscripten::class_<vtkImagePlaneWidget, emscripten::base<vtkPolyDataSourceWidget>>("vtkImagePlaneWidget")
    .smart_ptr<vtkSmartPointer<vtkImagePlaneWidget>>("vtkSmartPointer<vtkImagePlaneWidget>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImagePlaneWidget>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImagePlaneWidget::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImagePlaneWidget& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImagePlaneWidget::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImagePlaneWidget::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImagePlaneWidget::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImagePlaneWidget& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkImagePlaneWidget::SetEnabled)
    .function("PlaceWidget", emscripten::select_overload<void(vtkImagePlaneWidget&)>([](vtkImagePlaneWidget& self) -> void { return self.PlaceWidget(); }))
    .function("PlaceWidget", emscripten::select_overload<void(vtkImagePlaneWidget&, double, double, double, double, double, double)>([](vtkImagePlaneWidget& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.PlaceWidget( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetInputConnection", &vtkImagePlaneWidget::SetInputConnection, emscripten::allow_raw_pointers())
    .function("SetOrigin", emscripten::select_overload<void(vtkImagePlaneWidget&, double, double, double)>([](vtkImagePlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetPoint1", emscripten::select_overload<void(vtkImagePlaneWidget&, double, double, double)>([](vtkImagePlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint1( arg_0, arg_1, arg_2); }))
    .function("SetPoint2", emscripten::select_overload<void(vtkImagePlaneWidget&, double, double, double)>([](vtkImagePlaneWidget& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPoint2( arg_0, arg_1, arg_2); }))
    .function("GetSliceIndex", &vtkImagePlaneWidget::GetSliceIndex)
    .function("SetSliceIndex", &vtkImagePlaneWidget::SetSliceIndex)
    .function("GetSlicePosition", &vtkImagePlaneWidget::GetSlicePosition)
    .function("SetSlicePosition", &vtkImagePlaneWidget::SetSlicePosition)
    .function("SetResliceInterpolate", &vtkImagePlaneWidget::SetResliceInterpolate)
    .function("GetResliceInterpolate", &vtkImagePlaneWidget::GetResliceInterpolate)
    .function("SetResliceInterpolateToNearestNeighbour", &vtkImagePlaneWidget::SetResliceInterpolateToNearestNeighbour)
    .function("SetResliceInterpolateToLinear", &vtkImagePlaneWidget::SetResliceInterpolateToLinear)
    .function("SetResliceInterpolateToCubic", &vtkImagePlaneWidget::SetResliceInterpolateToCubic)
    .function("GetResliceOutput", &vtkImagePlaneWidget::GetResliceOutput, emscripten::allow_raw_pointers())
    .function("SetRestrictPlaneToVolume", &vtkImagePlaneWidget::SetRestrictPlaneToVolume)
    .function("GetRestrictPlaneToVolume", &vtkImagePlaneWidget::GetRestrictPlaneToVolume)
    .function("RestrictPlaneToVolumeOn", &vtkImagePlaneWidget::RestrictPlaneToVolumeOn)
    .function("RestrictPlaneToVolumeOff", &vtkImagePlaneWidget::RestrictPlaneToVolumeOff)
    .function("SetUserControlledLookupTable", &vtkImagePlaneWidget::SetUserControlledLookupTable)
    .function("GetUserControlledLookupTable", &vtkImagePlaneWidget::GetUserControlledLookupTable)
    .function("UserControlledLookupTableOn", &vtkImagePlaneWidget::UserControlledLookupTableOn)
    .function("UserControlledLookupTableOff", &vtkImagePlaneWidget::UserControlledLookupTableOff)
    .function("SetTextureInterpolate", &vtkImagePlaneWidget::SetTextureInterpolate)
    .function("GetTextureInterpolate", &vtkImagePlaneWidget::GetTextureInterpolate)
    .function("TextureInterpolateOn", &vtkImagePlaneWidget::TextureInterpolateOn)
    .function("TextureInterpolateOff", &vtkImagePlaneWidget::TextureInterpolateOff)
    .function("SetTextureVisibility", &vtkImagePlaneWidget::SetTextureVisibility)
    .function("GetTextureVisibility", &vtkImagePlaneWidget::GetTextureVisibility)
    .function("TextureVisibilityOn", &vtkImagePlaneWidget::TextureVisibilityOn)
    .function("TextureVisibilityOff", &vtkImagePlaneWidget::TextureVisibilityOff)
    .function("GetPolyData", &vtkImagePlaneWidget::GetPolyData, emscripten::allow_raw_pointers())
    .function("GetPolyDataAlgorithm", &vtkImagePlaneWidget::GetPolyDataAlgorithm, emscripten::allow_raw_pointers())
    .function("UpdatePlacement", &vtkImagePlaneWidget::UpdatePlacement)
    .function("GetTexture", &vtkImagePlaneWidget::GetTexture, emscripten::allow_raw_pointers())
    .function("GetColorMap", &vtkImagePlaneWidget::GetColorMap, emscripten::allow_raw_pointers())
    .function("SetColorMap", &vtkImagePlaneWidget::SetColorMap, emscripten::allow_raw_pointers())
    .function("SetPlaneProperty", &vtkImagePlaneWidget::SetPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetPlaneProperty", &vtkImagePlaneWidget::GetPlaneProperty, emscripten::allow_raw_pointers())
    .function("SetSelectedPlaneProperty", &vtkImagePlaneWidget::SetSelectedPlaneProperty, emscripten::allow_raw_pointers())
    .function("GetSelectedPlaneProperty", &vtkImagePlaneWidget::GetSelectedPlaneProperty, emscripten::allow_raw_pointers())
    .function("SetPlaneOrientation", &vtkImagePlaneWidget::SetPlaneOrientation)
    .function("GetPlaneOrientation", &vtkImagePlaneWidget::GetPlaneOrientation)
    .function("SetPlaneOrientationToXAxes", &vtkImagePlaneWidget::SetPlaneOrientationToXAxes)
    .function("SetPlaneOrientationToYAxes", &vtkImagePlaneWidget::SetPlaneOrientationToYAxes)
    .function("SetPlaneOrientationToZAxes", &vtkImagePlaneWidget::SetPlaneOrientationToZAxes)
    .function("SetPicker", &vtkImagePlaneWidget::SetPicker, emscripten::allow_raw_pointers())
    .function("SetLookupTable", &vtkImagePlaneWidget::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkImagePlaneWidget::GetLookupTable, emscripten::allow_raw_pointers())
    .function("SetDisplayText", &vtkImagePlaneWidget::SetDisplayText)
    .function("GetDisplayText", &vtkImagePlaneWidget::GetDisplayText)
    .function("DisplayTextOn", &vtkImagePlaneWidget::DisplayTextOn)
    .function("DisplayTextOff", &vtkImagePlaneWidget::DisplayTextOff)
    .function("SetCursorProperty", &vtkImagePlaneWidget::SetCursorProperty, emscripten::allow_raw_pointers())
    .function("GetCursorProperty", &vtkImagePlaneWidget::GetCursorProperty, emscripten::allow_raw_pointers())
    .function("SetMarginProperty", &vtkImagePlaneWidget::SetMarginProperty, emscripten::allow_raw_pointers())
    .function("GetMarginProperty", &vtkImagePlaneWidget::GetMarginProperty, emscripten::allow_raw_pointers())
    .function("SetMarginSizeX", &vtkImagePlaneWidget::SetMarginSizeX)
    .function("GetMarginSizeXMinValue", &vtkImagePlaneWidget::GetMarginSizeXMinValue)
    .function("GetMarginSizeXMaxValue", &vtkImagePlaneWidget::GetMarginSizeXMaxValue)
    .function("GetMarginSizeX", &vtkImagePlaneWidget::GetMarginSizeX)
    .function("SetMarginSizeY", &vtkImagePlaneWidget::SetMarginSizeY)
    .function("GetMarginSizeYMinValue", &vtkImagePlaneWidget::GetMarginSizeYMinValue)
    .function("GetMarginSizeYMaxValue", &vtkImagePlaneWidget::GetMarginSizeYMaxValue)
    .function("GetMarginSizeY", &vtkImagePlaneWidget::GetMarginSizeY)
    .function("SetTextProperty", &vtkImagePlaneWidget::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkImagePlaneWidget::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetTexturePlaneProperty", &vtkImagePlaneWidget::SetTexturePlaneProperty, emscripten::allow_raw_pointers())
    .function("GetTexturePlaneProperty", &vtkImagePlaneWidget::GetTexturePlaneProperty, emscripten::allow_raw_pointers())
    .function("SetWindowLevel", &vtkImagePlaneWidget::SetWindowLevel)
    .function("GetWindow", &vtkImagePlaneWidget::GetWindow)
    .function("GetLevel", &vtkImagePlaneWidget::GetLevel)
    .function("GetCursorDataStatus", &vtkImagePlaneWidget::GetCursorDataStatus)
    .function("GetCurrentImageValue", &vtkImagePlaneWidget::GetCurrentImageValue)
    .function("GetResliceAxes", &vtkImagePlaneWidget::GetResliceAxes, emscripten::allow_raw_pointers())
    .function("GetReslice", &vtkImagePlaneWidget::GetReslice, emscripten::allow_raw_pointers())
    .function("SetUseContinuousCursor", &vtkImagePlaneWidget::SetUseContinuousCursor)
    .function("GetUseContinuousCursor", &vtkImagePlaneWidget::GetUseContinuousCursor)
    .function("UseContinuousCursorOn", &vtkImagePlaneWidget::UseContinuousCursorOn)
    .function("UseContinuousCursorOff", &vtkImagePlaneWidget::UseContinuousCursorOff)
    .function("SetInteraction", &vtkImagePlaneWidget::SetInteraction)
    .function("GetInteraction", &vtkImagePlaneWidget::GetInteraction)
    .function("InteractionOn", &vtkImagePlaneWidget::InteractionOn)
    .function("InteractionOff", &vtkImagePlaneWidget::InteractionOff)
    .function("SetLeftButtonAction", &vtkImagePlaneWidget::SetLeftButtonAction)
    .function("GetLeftButtonActionMinValue", &vtkImagePlaneWidget::GetLeftButtonActionMinValue)
    .function("GetLeftButtonActionMaxValue", &vtkImagePlaneWidget::GetLeftButtonActionMaxValue)
    .function("GetLeftButtonAction", &vtkImagePlaneWidget::GetLeftButtonAction)
    .function("SetMiddleButtonAction", &vtkImagePlaneWidget::SetMiddleButtonAction)
    .function("GetMiddleButtonActionMinValue", &vtkImagePlaneWidget::GetMiddleButtonActionMinValue)
    .function("GetMiddleButtonActionMaxValue", &vtkImagePlaneWidget::GetMiddleButtonActionMaxValue)
    .function("GetMiddleButtonAction", &vtkImagePlaneWidget::GetMiddleButtonAction)
    .function("SetRightButtonAction", &vtkImagePlaneWidget::SetRightButtonAction)
    .function("GetRightButtonActionMinValue", &vtkImagePlaneWidget::GetRightButtonActionMinValue)
    .function("GetRightButtonActionMaxValue", &vtkImagePlaneWidget::GetRightButtonActionMaxValue)
    .function("GetRightButtonAction", &vtkImagePlaneWidget::GetRightButtonAction)
    .function("SetLeftButtonAutoModifier", &vtkImagePlaneWidget::SetLeftButtonAutoModifier)
    .function("GetLeftButtonAutoModifierMinValue", &vtkImagePlaneWidget::GetLeftButtonAutoModifierMinValue)
    .function("GetLeftButtonAutoModifierMaxValue", &vtkImagePlaneWidget::GetLeftButtonAutoModifierMaxValue)
    .function("GetLeftButtonAutoModifier", &vtkImagePlaneWidget::GetLeftButtonAutoModifier)
    .function("SetMiddleButtonAutoModifier", &vtkImagePlaneWidget::SetMiddleButtonAutoModifier)
    .function("GetMiddleButtonAutoModifierMinValue", &vtkImagePlaneWidget::GetMiddleButtonAutoModifierMinValue)
    .function("GetMiddleButtonAutoModifierMaxValue", &vtkImagePlaneWidget::GetMiddleButtonAutoModifierMaxValue)
    .function("GetMiddleButtonAutoModifier", &vtkImagePlaneWidget::GetMiddleButtonAutoModifier)
    .function("SetRightButtonAutoModifier", &vtkImagePlaneWidget::SetRightButtonAutoModifier)
    .function("GetRightButtonAutoModifierMinValue", &vtkImagePlaneWidget::GetRightButtonAutoModifierMinValue)
    .function("GetRightButtonAutoModifierMaxValue", &vtkImagePlaneWidget::GetRightButtonAutoModifierMaxValue)
    .function("GetRightButtonAutoModifier", &vtkImagePlaneWidget::GetRightButtonAutoModifier);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkImagePlaneWidget_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkImagePlaneWidget_VTK_CURSOR_ACTION", vtkImagePlaneWidget::VTK_CURSOR_ACTION },
      { "vtkImagePlaneWidget_VTK_SLICE_MOTION_ACTION", vtkImagePlaneWidget::VTK_SLICE_MOTION_ACTION },
      { "vtkImagePlaneWidget_VTK_WINDOW_LEVEL_ACTION", vtkImagePlaneWidget::VTK_WINDOW_LEVEL_ACTION },
      { "vtkImagePlaneWidget_VTK_NO_MODIFIER", vtkImagePlaneWidget::VTK_NO_MODIFIER },
      { "vtkImagePlaneWidget_VTK_SHIFT_MODIFIER", vtkImagePlaneWidget::VTK_SHIFT_MODIFIER },
      { "vtkImagePlaneWidget_VTK_CONTROL_MODIFIER", vtkImagePlaneWidget::VTK_CONTROL_MODIFIER },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

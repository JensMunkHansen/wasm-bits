// JavaScript wrapper for vtkRenderView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkRenderViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkRenderView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorObserver.h"
#include "vtkRenderWindow.h"
#include "vtkViewTheme.h"
#include "vtkAbstractTransform.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTexture.h"
#include "vtkRenderView.h"

template<> void emscripten::internal::raw_destructor<vtkRenderView>(vtkRenderView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderView_class) {
  emscripten::class_<vtkRenderView, emscripten::base<vtkRenderViewBase>>("vtkRenderView")
    .smart_ptr<vtkSmartPointer<vtkRenderView>>("vtkSmartPointer<vtkRenderView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRenderView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInteractor", &vtkRenderView::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetInteractorStyle", &vtkRenderView::SetInteractorStyle, emscripten::allow_raw_pointers())
    .function("GetInteractorStyle", &vtkRenderView::GetInteractorStyle, emscripten::allow_raw_pointers())
    .function("SetRenderWindow", &vtkRenderView::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("SetInteractionMode", &vtkRenderView::SetInteractionMode)
    .function("GetInteractionMode", &vtkRenderView::GetInteractionMode)
    .function("SetInteractionModeTo2D", &vtkRenderView::SetInteractionModeTo2D)
    .function("SetInteractionModeTo3D", &vtkRenderView::SetInteractionModeTo3D)
    .function("Render", &vtkRenderView::Render)
    .function("ApplyViewTheme", &vtkRenderView::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkRenderView::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkRenderView::GetTransform, emscripten::allow_raw_pointers())
    .function("SetDisplayHoverText", &vtkRenderView::SetDisplayHoverText)
    .function("GetDisplayHoverText", &vtkRenderView::GetDisplayHoverText)
    .function("DisplayHoverTextOn", &vtkRenderView::DisplayHoverTextOn)
    .function("DisplayHoverTextOff", &vtkRenderView::DisplayHoverTextOff)
    .function("SetSelectionMode", &vtkRenderView::SetSelectionMode)
    .function("GetSelectionModeMinValue", &vtkRenderView::GetSelectionModeMinValue)
    .function("GetSelectionModeMaxValue", &vtkRenderView::GetSelectionModeMaxValue)
    .function("GetSelectionMode", &vtkRenderView::GetSelectionMode)
    .function("SetSelectionModeToSurface", &vtkRenderView::SetSelectionModeToSurface)
    .function("SetSelectionModeToFrustum", &vtkRenderView::SetSelectionModeToFrustum)
    .function("AddLabels", &vtkRenderView::AddLabels, emscripten::allow_raw_pointers())
    .function("RemoveLabels", &vtkRenderView::RemoveLabels, emscripten::allow_raw_pointers())
    .function("SetIconTexture", &vtkRenderView::SetIconTexture, emscripten::allow_raw_pointers())
    .function("GetIconTexture", &vtkRenderView::GetIconTexture, emscripten::allow_raw_pointers())
    .function("SetIconSize", emscripten::select_overload<void(vtkRenderView&, int, int)>([](vtkRenderView& self, int arg_0, int arg_1) -> void { return self.SetIconSize( arg_0, arg_1); }))
    .function("SetDisplaySize", emscripten::select_overload<void(vtkRenderView&, int, int)>([](vtkRenderView& self, int arg_0, int arg_1) -> void { return self.SetDisplaySize( arg_0, arg_1); }))
    .function("GetDisplaySize", emscripten::select_overload<std::uintptr_t(vtkRenderView&)>([](vtkRenderView& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetDisplaySize()); }))
    .function("SetLabelPlacementMode", &vtkRenderView::SetLabelPlacementMode)
    .function("GetLabelPlacementMode", &vtkRenderView::GetLabelPlacementMode)
    .function("SetLabelPlacementModeToNoOverlap", &vtkRenderView::SetLabelPlacementModeToNoOverlap)
    .function("SetLabelPlacementModeToAll", &vtkRenderView::SetLabelPlacementModeToAll)
    .function("SetLabelRenderMode", &vtkRenderView::SetLabelRenderMode)
    .function("GetLabelRenderMode", &vtkRenderView::GetLabelRenderMode)
    .function("SetLabelRenderModeToFreetype", &vtkRenderView::SetLabelRenderModeToFreetype)
    .function("SetLabelRenderModeToQt", &vtkRenderView::SetLabelRenderModeToQt)
    .function("SetRenderOnMouseMove", &vtkRenderView::SetRenderOnMouseMove)
    .function("GetRenderOnMouseMove", &vtkRenderView::GetRenderOnMouseMove)
    .function("RenderOnMouseMoveOn", &vtkRenderView::RenderOnMouseMoveOn)
    .function("RenderOnMouseMoveOff", &vtkRenderView::RenderOnMouseMoveOff);
}
EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkRenderView_0_2_constants) {
  const struct { const char *name; int value; }
    constants[9] = {
      { "vtkRenderView_INTERACTION_MODE_2D", vtkRenderView::INTERACTION_MODE_2D },
      { "vtkRenderView_INTERACTION_MODE_3D", vtkRenderView::INTERACTION_MODE_3D },
      { "vtkRenderView_INTERACTION_MODE_UNKNOWN", vtkRenderView::INTERACTION_MODE_UNKNOWN },
      { "vtkRenderView_SURFACE", vtkRenderView::SURFACE },
      { "vtkRenderView_FRUSTUM", vtkRenderView::FRUSTUM },
      { "vtkRenderView_NO_OVERLAP", vtkRenderView::NO_OVERLAP },
      { "vtkRenderView_ALL", vtkRenderView::ALL },
      { "vtkRenderView_FREETYPE", vtkRenderView::FREETYPE },
      { "vtkRenderView_QT", vtkRenderView::QT },
  };
  for (int c = 0; c < 9; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

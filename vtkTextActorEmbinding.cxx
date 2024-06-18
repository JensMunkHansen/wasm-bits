// JavaScript wrapper for vtkTextActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkTextActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkTextActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkTextActor.h"

template<> void emscripten::internal::raw_destructor<vtkTextActor>(vtkTextActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTextActor_class) {
  emscripten::class_<vtkTextActor, emscripten::base<vtkTexturedActor2D>>("vtkTextActor")
    .smart_ptr<vtkSmartPointer<vtkTextActor>>("vtkSmartPointer<vtkTextActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTextActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTextActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTextActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTextActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTextActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTextActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkTextActor::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetInput", emscripten::optional_override([](vtkTextActor& self, const std::string & arg_0) -> void {  return self.SetInput( arg_0.c_str());}))
    .function("GetInput", emscripten::optional_override([](vtkTextActor& self) -> std::string {  return self.GetInput();}))
    .function("SetMinimumSize", emscripten::select_overload<void(vtkTextActor&, int, int)>([](vtkTextActor& self, int arg_0, int arg_1) -> void { return self.SetMinimumSize( arg_0, arg_1); }))
    .function("SetMaximumLineHeight", &vtkTextActor::SetMaximumLineHeight)
    .function("GetMaximumLineHeight", &vtkTextActor::GetMaximumLineHeight)
    .function("SetTextScaleMode", &vtkTextActor::SetTextScaleMode)
    .function("GetTextScaleModeMinValue", &vtkTextActor::GetTextScaleModeMinValue)
    .function("GetTextScaleModeMaxValue", &vtkTextActor::GetTextScaleModeMaxValue)
    .function("GetTextScaleMode", &vtkTextActor::GetTextScaleMode)
    .function("SetTextScaleModeToNone", &vtkTextActor::SetTextScaleModeToNone)
    .function("SetTextScaleModeToProp", &vtkTextActor::SetTextScaleModeToProp)
    .function("SetTextScaleModeToViewport", &vtkTextActor::SetTextScaleModeToViewport)
    .function("SetUseBorderAlign", &vtkTextActor::SetUseBorderAlign)
    .function("GetUseBorderAlign", &vtkTextActor::GetUseBorderAlign)
    .function("UseBorderAlignOn", &vtkTextActor::UseBorderAlignOn)
    .function("UseBorderAlignOff", &vtkTextActor::UseBorderAlignOff)
    .function("SetAlignmentPoint", &vtkTextActor::SetAlignmentPoint)
    .function("GetAlignmentPoint", &vtkTextActor::GetAlignmentPoint)
    .function("SetOrientation", &vtkTextActor::SetOrientation)
    .function("GetOrientation", &vtkTextActor::GetOrientation)
    .function("SetTextProperty", &vtkTextActor::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkTextActor::GetTextProperty, emscripten::allow_raw_pointers())
    .function("SetConstrainedFontSize", emscripten::select_overload<int(vtkTextActor&, vtkViewport*, int, int)>([](vtkTextActor& self, vtkViewport* arg_0, int arg_1, int arg_2) -> int { return self.SetConstrainedFontSize( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("SetConstrainedFontSize", emscripten::select_overload<int( vtkTextActor*, vtkViewport*, int, int)>([]( vtkTextActor* arg_0, vtkViewport* arg_1, int arg_2, int arg_3) -> int { return vtkTextActor::SetConstrainedFontSize( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("SetNonLinearFontScale", &vtkTextActor::SetNonLinearFontScale)
    .function("SpecifiedToDisplay", emscripten::optional_override([](vtkTextActor& self, std::uintptr_t arg_0, vtkViewport* arg_1, int arg_2) -> void {  return self.SpecifiedToDisplay(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("DisplayToSpecified", emscripten::optional_override([](vtkTextActor& self, std::uintptr_t arg_0, vtkViewport* arg_1, int arg_2) -> void {  return self.DisplayToSpecified(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("ComputeScaledFont", &vtkTextActor::ComputeScaledFont, emscripten::allow_raw_pointers())
    .function("GetScaledTextProperty", &vtkTextActor::GetScaledTextProperty, emscripten::allow_raw_pointers())
    .class_function("GetFontScale", &vtkTextActor::GetFontScale, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkTextActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkTextActor::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkTextActor::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkTextActor::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkTextActor::HasTranslucentPolygonalGeometry);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkTextActor_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkTextActor_TEXT_SCALE_MODE_NONE", vtkTextActor::TEXT_SCALE_MODE_NONE },
      { "vtkTextActor_TEXT_SCALE_MODE_PROP", vtkTextActor::TEXT_SCALE_MODE_PROP },
      { "vtkTextActor_TEXT_SCALE_MODE_VIEWPORT", vtkTextActor::TEXT_SCALE_MODE_VIEWPORT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

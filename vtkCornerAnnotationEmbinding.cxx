// JavaScript wrapper for vtkCornerAnnotation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkCornerAnnotationEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkCornerAnnotation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkWindow.h"
#include "vtkImageActor.h"
#include "vtkImageMapToWindowLevelColors.h"
#include "vtkTextProperty.h"
#include "vtkCornerAnnotation.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCornerAnnotation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCornerAnnotation>(vtkCornerAnnotation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCornerAnnotation_class) {
  using TextPosition=vtkCornerAnnotation::TextPosition;
  emscripten::class_<vtkCornerAnnotation, emscripten::base<vtkActor2D>>("vtkCornerAnnotation")
    .smart_ptr<vtkSmartPointer<vtkCornerAnnotation>>("vtkSmartPointer<vtkCornerAnnotation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCornerAnnotation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCornerAnnotation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCornerAnnotation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCornerAnnotation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCornerAnnotation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCornerAnnotation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCornerAnnotation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOpaqueGeometry", &vtkCornerAnnotation::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCornerAnnotation::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCornerAnnotation::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCornerAnnotation::HasTranslucentPolygonalGeometry)
    .function("SetMaximumLineHeight", &vtkCornerAnnotation::SetMaximumLineHeight)
    .function("GetMaximumLineHeight", &vtkCornerAnnotation::GetMaximumLineHeight)
    .function("SetMinimumFontSize", &vtkCornerAnnotation::SetMinimumFontSize)
    .function("GetMinimumFontSize", &vtkCornerAnnotation::GetMinimumFontSize)
    .function("SetMaximumFontSize", &vtkCornerAnnotation::SetMaximumFontSize)
    .function("GetMaximumFontSize", &vtkCornerAnnotation::GetMaximumFontSize)
    .function("SetLinearFontScaleFactor", &vtkCornerAnnotation::SetLinearFontScaleFactor)
    .function("GetLinearFontScaleFactor", &vtkCornerAnnotation::GetLinearFontScaleFactor)
    .function("SetNonlinearFontScaleFactor", &vtkCornerAnnotation::SetNonlinearFontScaleFactor)
    .function("GetNonlinearFontScaleFactor", &vtkCornerAnnotation::GetNonlinearFontScaleFactor)
    .function("ReleaseGraphicsResources", &vtkCornerAnnotation::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetText", emscripten::optional_override([](vtkCornerAnnotation& self, int arg_0, const std::string & arg_1) -> void {  return self.SetText( arg_0, arg_1.c_str());}))
    .function("GetText", emscripten::optional_override([](vtkCornerAnnotation& self, int arg_0) -> std::string {  return self.GetText( arg_0);}))
    .function("ClearAllTexts", &vtkCornerAnnotation::ClearAllTexts)
    .function("CopyAllTextsFrom", &vtkCornerAnnotation::CopyAllTextsFrom, emscripten::allow_raw_pointers())
    .function("GetAllTexts", &vtkCornerAnnotation::GetAllTexts)
    .function("SetAllTexts", &vtkCornerAnnotation::SetAllTexts)
    .function("SetImageActor", &vtkCornerAnnotation::SetImageActor, emscripten::allow_raw_pointers())
    .function("GetImageActor", &vtkCornerAnnotation::GetImageActor, emscripten::allow_raw_pointers())
    .function("SetWindowLevel", &vtkCornerAnnotation::SetWindowLevel, emscripten::allow_raw_pointers())
    .function("GetWindowLevel", &vtkCornerAnnotation::GetWindowLevel, emscripten::allow_raw_pointers())
    .function("SetLevelShift", &vtkCornerAnnotation::SetLevelShift)
    .function("GetLevelShift", &vtkCornerAnnotation::GetLevelShift)
    .function("SetLevelScale", &vtkCornerAnnotation::SetLevelScale)
    .function("GetLevelScale", &vtkCornerAnnotation::GetLevelScale)
    .function("SetTextProperty", &vtkCornerAnnotation::SetTextProperty, emscripten::allow_raw_pointers())
    .function("GetTextProperty", &vtkCornerAnnotation::GetTextProperty, emscripten::allow_raw_pointers())
    .function("ShowSliceAndImageOn", &vtkCornerAnnotation::ShowSliceAndImageOn)
    .function("ShowSliceAndImageOff", &vtkCornerAnnotation::ShowSliceAndImageOff)
    .function("SetShowSliceAndImage", &vtkCornerAnnotation::SetShowSliceAndImage)
    .function("GetShowSliceAndImage", &vtkCornerAnnotation::GetShowSliceAndImage);
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCornerAnnotation_0_2_constants) {
    typedef vtkCornerAnnotation::TextPosition cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkCornerAnnotation_TextPosition_LowerLeft", vtkCornerAnnotation::LowerLeft },
      { "vtkCornerAnnotation_TextPosition_LowerRight", vtkCornerAnnotation::LowerRight },
      { "vtkCornerAnnotation_TextPosition_UpperLeft", vtkCornerAnnotation::UpperLeft },
      { "vtkCornerAnnotation_TextPosition_UpperRight", vtkCornerAnnotation::UpperRight },
      { "vtkCornerAnnotation_TextPosition_LowerEdge", vtkCornerAnnotation::LowerEdge },
      { "vtkCornerAnnotation_TextPosition_RightEdge", vtkCornerAnnotation::RightEdge },
      { "vtkCornerAnnotation_TextPosition_LeftEdge", vtkCornerAnnotation::LeftEdge },
      { "vtkCornerAnnotation_TextPosition_UpperEdge", vtkCornerAnnotation::UpperEdge },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkCornerAnnotation_1_2_constants) {
  emscripten::constant("NumTextPositions", 8);
}

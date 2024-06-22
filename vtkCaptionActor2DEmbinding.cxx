// JavaScript wrapper for vtkCaptionActor2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkCaptionActor2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkCaptionActor2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkTextActor.h"
#include "vtkTextProperty.h"
#include "vtkProp.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkCaptionActor2D.h"

template<> void emscripten::internal::raw_destructor<vtkCaptionActor2D>(vtkCaptionActor2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCaptionActor2D_class) {
  emscripten::class_<vtkCaptionActor2D, emscripten::base<vtkActor2D>>("vtkCaptionActor2D")
    .smart_ptr<vtkSmartPointer<vtkCaptionActor2D>>("vtkSmartPointer<vtkCaptionActor2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCaptionActor2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCaptionActor2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCaptionActor2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCaptionActor2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCaptionActor2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCaptionActor2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCaptionActor2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCaption", emscripten::optional_override([](vtkCaptionActor2D& self, const std::string & arg_0) -> void {  return self.SetCaption( arg_0.c_str());}))
    .function("GetCaption", emscripten::optional_override([](vtkCaptionActor2D& self) -> std::string {  return self.GetCaption();}))
    .function("GetAttachmentPointCoordinate", &vtkCaptionActor2D::GetAttachmentPointCoordinate, emscripten::allow_raw_pointers())
    .function("SetAttachmentPoint", emscripten::select_overload<void(vtkCaptionActor2D&, double, double, double)>([](vtkCaptionActor2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetAttachmentPoint( arg_0, arg_1, arg_2); }))
    .function("SetBorder", &vtkCaptionActor2D::SetBorder)
    .function("GetBorder", &vtkCaptionActor2D::GetBorder)
    .function("BorderOn", &vtkCaptionActor2D::BorderOn)
    .function("BorderOff", &vtkCaptionActor2D::BorderOff)
    .function("SetLeader", &vtkCaptionActor2D::SetLeader)
    .function("GetLeader", &vtkCaptionActor2D::GetLeader)
    .function("LeaderOn", &vtkCaptionActor2D::LeaderOn)
    .function("LeaderOff", &vtkCaptionActor2D::LeaderOff)
    .function("SetThreeDimensionalLeader", &vtkCaptionActor2D::SetThreeDimensionalLeader)
    .function("GetThreeDimensionalLeader", &vtkCaptionActor2D::GetThreeDimensionalLeader)
    .function("ThreeDimensionalLeaderOn", &vtkCaptionActor2D::ThreeDimensionalLeaderOn)
    .function("ThreeDimensionalLeaderOff", &vtkCaptionActor2D::ThreeDimensionalLeaderOff)
    .function("SetLeaderGlyphData", &vtkCaptionActor2D::SetLeaderGlyphData, emscripten::allow_raw_pointers())
    .function("SetLeaderGlyphConnection", &vtkCaptionActor2D::SetLeaderGlyphConnection, emscripten::allow_raw_pointers())
    .function("GetLeaderGlyph", &vtkCaptionActor2D::GetLeaderGlyph, emscripten::allow_raw_pointers())
    .function("SetLeaderGlyphSize", &vtkCaptionActor2D::SetLeaderGlyphSize)
    .function("GetLeaderGlyphSizeMinValue", &vtkCaptionActor2D::GetLeaderGlyphSizeMinValue)
    .function("GetLeaderGlyphSizeMaxValue", &vtkCaptionActor2D::GetLeaderGlyphSizeMaxValue)
    .function("GetLeaderGlyphSize", &vtkCaptionActor2D::GetLeaderGlyphSize)
    .function("SetMaximumLeaderGlyphSize", &vtkCaptionActor2D::SetMaximumLeaderGlyphSize)
    .function("GetMaximumLeaderGlyphSizeMinValue", &vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMinValue)
    .function("GetMaximumLeaderGlyphSizeMaxValue", &vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMaxValue)
    .function("GetMaximumLeaderGlyphSize", &vtkCaptionActor2D::GetMaximumLeaderGlyphSize)
    .function("SetPadding", &vtkCaptionActor2D::SetPadding)
    .function("GetPaddingMinValue", &vtkCaptionActor2D::GetPaddingMinValue)
    .function("GetPaddingMaxValue", &vtkCaptionActor2D::GetPaddingMaxValue)
    .function("GetPadding", &vtkCaptionActor2D::GetPadding)
    .function("GetTextActor", &vtkCaptionActor2D::GetTextActor, emscripten::allow_raw_pointers())
    .function("SetCaptionTextProperty", &vtkCaptionActor2D::SetCaptionTextProperty, emscripten::allow_raw_pointers())
    .function("GetCaptionTextProperty", &vtkCaptionActor2D::GetCaptionTextProperty, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCaptionActor2D::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetAttachEdgeOnly", &vtkCaptionActor2D::SetAttachEdgeOnly)
    .function("GetAttachEdgeOnly", &vtkCaptionActor2D::GetAttachEdgeOnly)
    .function("AttachEdgeOnlyOn", &vtkCaptionActor2D::AttachEdgeOnlyOn)
    .function("AttachEdgeOnlyOff", &vtkCaptionActor2D::AttachEdgeOnlyOff)
    .function("ReleaseGraphicsResources", &vtkCaptionActor2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkCaptionActor2D::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderTranslucentPolygonalGeometry", &vtkCaptionActor2D::RenderTranslucentPolygonalGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkCaptionActor2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCaptionActor2D::HasTranslucentPolygonalGeometry);
}

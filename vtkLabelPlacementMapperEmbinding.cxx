// JavaScript wrapper for vtkLabelPlacementMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelPlacementMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelPlacementMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkLabelRenderStrategy.h"
#include "vtkCoordinate.h"
#include "vtkWindow.h"
#include "vtkLabelPlacementMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelPlacementMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLabelPlacementMapper>(vtkLabelPlacementMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelPlacementMapper_class) {
  using LabelShape=vtkLabelPlacementMapper::LabelShape;
  using LabelStyle=vtkLabelPlacementMapper::LabelStyle;
  emscripten::class_<vtkLabelPlacementMapper, emscripten::base<vtkMapper2D>>("vtkLabelPlacementMapper")
    .smart_ptr<vtkSmartPointer<vtkLabelPlacementMapper>>("vtkSmartPointer<vtkLabelPlacementMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLabelPlacementMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelPlacementMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelPlacementMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelPlacementMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelPlacementMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelPlacementMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelPlacementMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkLabelPlacementMapper::RenderOverlay, emscripten::allow_raw_pointers())
    .function("SetRenderStrategy", &vtkLabelPlacementMapper::SetRenderStrategy, emscripten::allow_raw_pointers())
    .function("GetRenderStrategy", &vtkLabelPlacementMapper::GetRenderStrategy, emscripten::allow_raw_pointers())
    .function("SetMaximumLabelFraction", &vtkLabelPlacementMapper::SetMaximumLabelFraction)
    .function("GetMaximumLabelFractionMinValue", &vtkLabelPlacementMapper::GetMaximumLabelFractionMinValue)
    .function("GetMaximumLabelFractionMaxValue", &vtkLabelPlacementMapper::GetMaximumLabelFractionMaxValue)
    .function("GetMaximumLabelFraction", &vtkLabelPlacementMapper::GetMaximumLabelFraction)
    .function("SetIteratorType", &vtkLabelPlacementMapper::SetIteratorType)
    .function("GetIteratorType", &vtkLabelPlacementMapper::GetIteratorType)
    .function("GetPositionsAsNormals", &vtkLabelPlacementMapper::GetPositionsAsNormals)
    .function("SetPositionsAsNormals", &vtkLabelPlacementMapper::SetPositionsAsNormals)
    .function("PositionsAsNormalsOn", &vtkLabelPlacementMapper::PositionsAsNormalsOn)
    .function("PositionsAsNormalsOff", &vtkLabelPlacementMapper::PositionsAsNormalsOff)
    .function("GetGeneratePerturbedLabelSpokes", &vtkLabelPlacementMapper::GetGeneratePerturbedLabelSpokes)
    .function("SetGeneratePerturbedLabelSpokes", &vtkLabelPlacementMapper::SetGeneratePerturbedLabelSpokes)
    .function("GeneratePerturbedLabelSpokesOn", &vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOn)
    .function("GeneratePerturbedLabelSpokesOff", &vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOff)
    .function("GetUseDepthBuffer", &vtkLabelPlacementMapper::GetUseDepthBuffer)
    .function("SetUseDepthBuffer", &vtkLabelPlacementMapper::SetUseDepthBuffer)
    .function("UseDepthBufferOn", &vtkLabelPlacementMapper::UseDepthBufferOn)
    .function("UseDepthBufferOff", &vtkLabelPlacementMapper::UseDepthBufferOff)
    .function("SetPlaceAllLabels", &vtkLabelPlacementMapper::SetPlaceAllLabels)
    .function("GetPlaceAllLabels", &vtkLabelPlacementMapper::GetPlaceAllLabels)
    .function("PlaceAllLabelsOn", &vtkLabelPlacementMapper::PlaceAllLabelsOn)
    .function("PlaceAllLabelsOff", &vtkLabelPlacementMapper::PlaceAllLabelsOff)
    .function("SetOutputTraversedBounds", &vtkLabelPlacementMapper::SetOutputTraversedBounds)
    .function("GetOutputTraversedBounds", &vtkLabelPlacementMapper::GetOutputTraversedBounds)
    .function("OutputTraversedBoundsOn", &vtkLabelPlacementMapper::OutputTraversedBoundsOn)
    .function("OutputTraversedBoundsOff", &vtkLabelPlacementMapper::OutputTraversedBoundsOff)
    .function("SetShape", &vtkLabelPlacementMapper::SetShape)
    .function("GetShapeMinValue", &vtkLabelPlacementMapper::GetShapeMinValue)
    .function("GetShapeMaxValue", &vtkLabelPlacementMapper::GetShapeMaxValue)
    .function("GetShape", &vtkLabelPlacementMapper::GetShape)
    .function("SetShapeToNone", &vtkLabelPlacementMapper::SetShapeToNone)
    .function("SetShapeToRect", &vtkLabelPlacementMapper::SetShapeToRect)
    .function("SetShapeToRoundedRect", &vtkLabelPlacementMapper::SetShapeToRoundedRect)
    .function("SetStyle", &vtkLabelPlacementMapper::SetStyle)
    .function("GetStyleMinValue", &vtkLabelPlacementMapper::GetStyleMinValue)
    .function("GetStyleMaxValue", &vtkLabelPlacementMapper::GetStyleMaxValue)
    .function("GetStyle", &vtkLabelPlacementMapper::GetStyle)
    .function("SetStyleToFilled", &vtkLabelPlacementMapper::SetStyleToFilled)
    .function("SetStyleToOutline", &vtkLabelPlacementMapper::SetStyleToOutline)
    .function("SetMargin", &vtkLabelPlacementMapper::SetMargin)
    .function("GetMargin", &vtkLabelPlacementMapper::GetMargin)
    .function("SetBackgroundColor", emscripten::select_overload<void(vtkLabelPlacementMapper&, double, double, double)>([](vtkLabelPlacementMapper& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBackgroundColor( arg_0, arg_1, arg_2); }))
    .function("SetBackgroundOpacity", &vtkLabelPlacementMapper::SetBackgroundOpacity)
    .function("GetBackgroundOpacityMinValue", &vtkLabelPlacementMapper::GetBackgroundOpacityMinValue)
    .function("GetBackgroundOpacityMaxValue", &vtkLabelPlacementMapper::GetBackgroundOpacityMaxValue)
    .function("GetBackgroundOpacity", &vtkLabelPlacementMapper::GetBackgroundOpacity)
    .function("GetAnchorTransform", &vtkLabelPlacementMapper::GetAnchorTransform, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLabelPlacementMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelPlacementMapper_0_2_constants) {
    typedef vtkLabelPlacementMapper::LabelShape cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkLabelPlacementMapper_LabelShape_NONE", vtkLabelPlacementMapper::NONE },
      { "vtkLabelPlacementMapper_LabelShape_RECT", vtkLabelPlacementMapper::RECT },
      { "vtkLabelPlacementMapper_LabelShape_ROUNDED_RECT", vtkLabelPlacementMapper::ROUNDED_RECT },
      { "vtkLabelPlacementMapper_LabelShape_NUMBER_OF_LABEL_SHAPES", vtkLabelPlacementMapper::NUMBER_OF_LABEL_SHAPES },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelPlacementMapper_1_2_constants) {
    typedef vtkLabelPlacementMapper::LabelStyle cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkLabelPlacementMapper_LabelStyle_FILLED", vtkLabelPlacementMapper::FILLED },
      { "vtkLabelPlacementMapper_LabelStyle_OUTLINE", vtkLabelPlacementMapper::OUTLINE },
      { "vtkLabelPlacementMapper_LabelStyle_NUMBER_OF_LABEL_STYLES", vtkLabelPlacementMapper::NUMBER_OF_LABEL_STYLES },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

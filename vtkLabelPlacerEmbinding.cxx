// JavaScript wrapper for vtkLabelPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkCoordinate.h"
#include "vtkLabelPlacer.h"

EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelPlacer_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLabelPlacer>(vtkLabelPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelPlacer_class) {
  using LabelGravity=vtkLabelPlacer::LabelGravity;
  using OutputCoordinates=vtkLabelPlacer::OutputCoordinates;
  emscripten::class_<vtkLabelPlacer, emscripten::base<vtkPolyDataAlgorithm>>("vtkLabelPlacer")
    .smart_ptr<vtkSmartPointer<vtkLabelPlacer>>("vtkSmartPointer<vtkLabelPlacer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLabelPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRenderer", &vtkLabelPlacer::GetRenderer, emscripten::allow_raw_pointers())
    .function("SetRenderer", &vtkLabelPlacer::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetAnchorTransform", &vtkLabelPlacer::GetAnchorTransform, emscripten::allow_raw_pointers())
    .function("SetGravity", &vtkLabelPlacer::SetGravity)
    .function("GetGravity", &vtkLabelPlacer::GetGravity)
    .function("SetMaximumLabelFraction", &vtkLabelPlacer::SetMaximumLabelFraction)
    .function("GetMaximumLabelFractionMinValue", &vtkLabelPlacer::GetMaximumLabelFractionMinValue)
    .function("GetMaximumLabelFractionMaxValue", &vtkLabelPlacer::GetMaximumLabelFractionMaxValue)
    .function("GetMaximumLabelFraction", &vtkLabelPlacer::GetMaximumLabelFraction)
    .function("SetIteratorType", &vtkLabelPlacer::SetIteratorType)
    .function("GetIteratorType", &vtkLabelPlacer::GetIteratorType)
    .function("GetMTime", &vtkLabelPlacer::GetMTime)
    .function("GetPositionsAsNormals", &vtkLabelPlacer::GetPositionsAsNormals)
    .function("SetPositionsAsNormals", &vtkLabelPlacer::SetPositionsAsNormals)
    .function("PositionsAsNormalsOn", &vtkLabelPlacer::PositionsAsNormalsOn)
    .function("PositionsAsNormalsOff", &vtkLabelPlacer::PositionsAsNormalsOff)
    .function("GetGeneratePerturbedLabelSpokes", &vtkLabelPlacer::GetGeneratePerturbedLabelSpokes)
    .function("SetGeneratePerturbedLabelSpokes", &vtkLabelPlacer::SetGeneratePerturbedLabelSpokes)
    .function("GeneratePerturbedLabelSpokesOn", &vtkLabelPlacer::GeneratePerturbedLabelSpokesOn)
    .function("GeneratePerturbedLabelSpokesOff", &vtkLabelPlacer::GeneratePerturbedLabelSpokesOff)
    .function("GetUseDepthBuffer", &vtkLabelPlacer::GetUseDepthBuffer)
    .function("SetUseDepthBuffer", &vtkLabelPlacer::SetUseDepthBuffer)
    .function("UseDepthBufferOn", &vtkLabelPlacer::UseDepthBufferOn)
    .function("UseDepthBufferOff", &vtkLabelPlacer::UseDepthBufferOff)
    .function("GetOutputTraversedBounds", &vtkLabelPlacer::GetOutputTraversedBounds)
    .function("SetOutputTraversedBounds", &vtkLabelPlacer::SetOutputTraversedBounds)
    .function("OutputTraversedBoundsOn", &vtkLabelPlacer::OutputTraversedBoundsOn)
    .function("OutputTraversedBoundsOff", &vtkLabelPlacer::OutputTraversedBoundsOff)
    .function("GetOutputCoordinateSystem", &vtkLabelPlacer::GetOutputCoordinateSystem)
    .function("SetOutputCoordinateSystem", &vtkLabelPlacer::SetOutputCoordinateSystem)
    .function("GetOutputCoordinateSystemMinValue", &vtkLabelPlacer::GetOutputCoordinateSystemMinValue)
    .function("GetOutputCoordinateSystemMaxValue", &vtkLabelPlacer::GetOutputCoordinateSystemMaxValue)
    .function("OutputCoordinateSystemWorld", &vtkLabelPlacer::OutputCoordinateSystemWorld)
    .function("OutputCoordinateSystemDisplay", &vtkLabelPlacer::OutputCoordinateSystemDisplay);
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelPlacer_0_2_constants) {
    typedef vtkLabelPlacer::LabelGravity cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[21] = {
      { "vtkLabelPlacer_LabelGravity_VerticalBottomBit", vtkLabelPlacer::VerticalBottomBit },
      { "vtkLabelPlacer_LabelGravity_VerticalBaselineBit", vtkLabelPlacer::VerticalBaselineBit },
      { "vtkLabelPlacer_LabelGravity_VerticalCenterBit", vtkLabelPlacer::VerticalCenterBit },
      { "vtkLabelPlacer_LabelGravity_VerticalTopBit", vtkLabelPlacer::VerticalTopBit },
      { "vtkLabelPlacer_LabelGravity_HorizontalLeftBit", vtkLabelPlacer::HorizontalLeftBit },
      { "vtkLabelPlacer_LabelGravity_HorizontalCenterBit", vtkLabelPlacer::HorizontalCenterBit },
      { "vtkLabelPlacer_LabelGravity_HorizontalRightBit", vtkLabelPlacer::HorizontalRightBit },
      { "vtkLabelPlacer_LabelGravity_VerticalBitMask", vtkLabelPlacer::VerticalBitMask },
      { "vtkLabelPlacer_LabelGravity_HorizontalBitMask", vtkLabelPlacer::HorizontalBitMask },
      { "vtkLabelPlacer_LabelGravity_LowerLeft", vtkLabelPlacer::LowerLeft },
      { "vtkLabelPlacer_LabelGravity_LowerCenter", vtkLabelPlacer::LowerCenter },
      { "vtkLabelPlacer_LabelGravity_LowerRight", vtkLabelPlacer::LowerRight },
      { "vtkLabelPlacer_LabelGravity_BaselineLeft", vtkLabelPlacer::BaselineLeft },
      { "vtkLabelPlacer_LabelGravity_BaselineCenter", vtkLabelPlacer::BaselineCenter },
      { "vtkLabelPlacer_LabelGravity_BaselineRight", vtkLabelPlacer::BaselineRight },
      { "vtkLabelPlacer_LabelGravity_CenterLeft", vtkLabelPlacer::CenterLeft },
      { "vtkLabelPlacer_LabelGravity_CenterCenter", vtkLabelPlacer::CenterCenter },
      { "vtkLabelPlacer_LabelGravity_CenterRight", vtkLabelPlacer::CenterRight },
      { "vtkLabelPlacer_LabelGravity_UpperLeft", vtkLabelPlacer::UpperLeft },
      { "vtkLabelPlacer_LabelGravity_UpperCenter", vtkLabelPlacer::UpperCenter },
      { "vtkLabelPlacer_LabelGravity_UpperRight", vtkLabelPlacer::UpperRight },
  };
  for (int c = 0; c < 21; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabelPlacer_1_2_constants) {
    typedef vtkLabelPlacer::OutputCoordinates cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkLabelPlacer_OutputCoordinates_WORLD", vtkLabelPlacer::WORLD },
      { "vtkLabelPlacer_OutputCoordinates_DISPLAY", vtkLabelPlacer::DISPLAY },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

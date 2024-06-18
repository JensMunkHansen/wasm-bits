// JavaScript wrapper for vtkAffineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAffineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAffineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkProp.h"
#include "vtkAffineRepresentation.h"

EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAffineRepresentation_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAffineRepresentation>(vtkAffineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineRepresentation_class) {
  using InteractionStateType=vtkAffineRepresentation::InteractionStateType;
  emscripten::class_<vtkAffineRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkAffineRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkAffineRepresentation::SetTolerance)
    .function("GetToleranceMinValue", &vtkAffineRepresentation::GetToleranceMinValue)
    .function("GetToleranceMaxValue", &vtkAffineRepresentation::GetToleranceMaxValue)
    .function("GetTolerance", &vtkAffineRepresentation::GetTolerance)
    .function("ShallowCopy", &vtkAffineRepresentation::ShallowCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkAffineRepresentation_0_2_constants) {
    typedef vtkAffineRepresentation::InteractionStateType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[20] = {
      { "vtkAffineRepresentation_InteractionStateType_Outside", vtkAffineRepresentation::Outside },
      { "vtkAffineRepresentation_InteractionStateType_Rotate", vtkAffineRepresentation::Rotate },
      { "vtkAffineRepresentation_InteractionStateType_Translate", vtkAffineRepresentation::Translate },
      { "vtkAffineRepresentation_InteractionStateType_TranslateX", vtkAffineRepresentation::TranslateX },
      { "vtkAffineRepresentation_InteractionStateType_TranslateY", vtkAffineRepresentation::TranslateY },
      { "vtkAffineRepresentation_InteractionStateType_ScaleWEdge", vtkAffineRepresentation::ScaleWEdge },
      { "vtkAffineRepresentation_InteractionStateType_ScaleEEdge", vtkAffineRepresentation::ScaleEEdge },
      { "vtkAffineRepresentation_InteractionStateType_ScaleNEdge", vtkAffineRepresentation::ScaleNEdge },
      { "vtkAffineRepresentation_InteractionStateType_ScaleSEdge", vtkAffineRepresentation::ScaleSEdge },
      { "vtkAffineRepresentation_InteractionStateType_ScaleNE", vtkAffineRepresentation::ScaleNE },
      { "vtkAffineRepresentation_InteractionStateType_ScaleSW", vtkAffineRepresentation::ScaleSW },
      { "vtkAffineRepresentation_InteractionStateType_ScaleNW", vtkAffineRepresentation::ScaleNW },
      { "vtkAffineRepresentation_InteractionStateType_ScaleSE", vtkAffineRepresentation::ScaleSE },
      { "vtkAffineRepresentation_InteractionStateType_ShearEEdge", vtkAffineRepresentation::ShearEEdge },
      { "vtkAffineRepresentation_InteractionStateType_ShearWEdge", vtkAffineRepresentation::ShearWEdge },
      { "vtkAffineRepresentation_InteractionStateType_ShearNEdge", vtkAffineRepresentation::ShearNEdge },
      { "vtkAffineRepresentation_InteractionStateType_ShearSEdge", vtkAffineRepresentation::ShearSEdge },
      { "vtkAffineRepresentation_InteractionStateType_MoveOriginX", vtkAffineRepresentation::MoveOriginX },
      { "vtkAffineRepresentation_InteractionStateType_MoveOriginY", vtkAffineRepresentation::MoveOriginY },
      { "vtkAffineRepresentation_InteractionStateType_MoveOrigin", vtkAffineRepresentation::MoveOrigin },
  };
  for (int c = 0; c < 20; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

// JavaScript wrapper for vtkParallelCoordinatesView with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkParallelCoordinatesViewEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkParallelCoordinatesView.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewTheme.h"
#include "vtkParallelCoordinatesView.h"

template<> void emscripten::internal::raw_destructor<vtkParallelCoordinatesView>(vtkParallelCoordinatesView * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelCoordinatesView_class) {
  emscripten::class_<vtkParallelCoordinatesView, emscripten::base<vtkRenderView>>("vtkParallelCoordinatesView")
    .smart_ptr<vtkSmartPointer<vtkParallelCoordinatesView>>("vtkSmartPointer<vtkParallelCoordinatesView>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelCoordinatesView>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesView::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelCoordinatesView& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelCoordinatesView::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelCoordinatesView::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesView::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelCoordinatesView& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBrushMode", &vtkParallelCoordinatesView::SetBrushMode)
    .function("SetBrushModeToLasso", &vtkParallelCoordinatesView::SetBrushModeToLasso)
    .function("SetBrushModeToAngle", &vtkParallelCoordinatesView::SetBrushModeToAngle)
    .function("SetBrushModeToFunction", &vtkParallelCoordinatesView::SetBrushModeToFunction)
    .function("SetBrushModeToAxisThreshold", &vtkParallelCoordinatesView::SetBrushModeToAxisThreshold)
    .function("GetBrushMode", &vtkParallelCoordinatesView::GetBrushMode)
    .function("SetBrushOperator", &vtkParallelCoordinatesView::SetBrushOperator)
    .function("SetBrushOperatorToAdd", &vtkParallelCoordinatesView::SetBrushOperatorToAdd)
    .function("SetBrushOperatorToSubtract", &vtkParallelCoordinatesView::SetBrushOperatorToSubtract)
    .function("SetBrushOperatorToIntersect", &vtkParallelCoordinatesView::SetBrushOperatorToIntersect)
    .function("SetBrushOperatorToReplace", &vtkParallelCoordinatesView::SetBrushOperatorToReplace)
    .function("GetBrushOperator", &vtkParallelCoordinatesView::GetBrushOperator)
    .function("SetInspectMode", &vtkParallelCoordinatesView::SetInspectMode)
    .function("SetInspectModeToManipulateAxes", &vtkParallelCoordinatesView::SetInspectModeToManipulateAxes)
    .function("SetInpsectModeToSelectData", &vtkParallelCoordinatesView::SetInpsectModeToSelectData)
    .function("GetInspectMode", &vtkParallelCoordinatesView::GetInspectMode)
    .function("SetMaximumNumberOfBrushPoints", &vtkParallelCoordinatesView::SetMaximumNumberOfBrushPoints)
    .function("GetMaximumNumberOfBrushPoints", &vtkParallelCoordinatesView::GetMaximumNumberOfBrushPoints)
    .function("SetCurrentBrushClass", &vtkParallelCoordinatesView::SetCurrentBrushClass)
    .function("GetCurrentBrushClass", &vtkParallelCoordinatesView::GetCurrentBrushClass)
    .function("ApplyViewTheme", &vtkParallelCoordinatesView::ApplyViewTheme, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkParallelCoordinatesView_0_2_constants) {
  const struct { const char *name; int value; }
    constants[13] = {
      { "vtkParallelCoordinatesView_VTK_BRUSH_LASSO", vtkParallelCoordinatesView::VTK_BRUSH_LASSO },
      { "vtkParallelCoordinatesView_VTK_BRUSH_ANGLE", vtkParallelCoordinatesView::VTK_BRUSH_ANGLE },
      { "vtkParallelCoordinatesView_VTK_BRUSH_FUNCTION", vtkParallelCoordinatesView::VTK_BRUSH_FUNCTION },
      { "vtkParallelCoordinatesView_VTK_BRUSH_AXISTHRESHOLD", vtkParallelCoordinatesView::VTK_BRUSH_AXISTHRESHOLD },
      { "vtkParallelCoordinatesView_VTK_BRUSH_MODECOUNT", vtkParallelCoordinatesView::VTK_BRUSH_MODECOUNT },
      { "vtkParallelCoordinatesView_VTK_BRUSHOPERATOR_ADD", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_ADD },
      { "vtkParallelCoordinatesView_VTK_BRUSHOPERATOR_SUBTRACT", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_SUBTRACT },
      { "vtkParallelCoordinatesView_VTK_BRUSHOPERATOR_INTERSECT", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_INTERSECT },
      { "vtkParallelCoordinatesView_VTK_BRUSHOPERATOR_REPLACE", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_REPLACE },
      { "vtkParallelCoordinatesView_VTK_BRUSHOPERATOR_MODECOUNT", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_MODECOUNT },
      { "vtkParallelCoordinatesView_VTK_INSPECT_MANIPULATE_AXES", vtkParallelCoordinatesView::VTK_INSPECT_MANIPULATE_AXES },
      { "vtkParallelCoordinatesView_VTK_INSPECT_SELECT_DATA", vtkParallelCoordinatesView::VTK_INSPECT_SELECT_DATA },
      { "vtkParallelCoordinatesView_VTK_INSPECT_MODECOUNT", vtkParallelCoordinatesView::VTK_INSPECT_MODECOUNT },
  };
  for (int c = 0; c < 13; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

// JavaScript wrapper for vtkContourRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkContourRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkContourRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointPlacer.h"
#include "vtkContourLineInterpolator.h"
#include "vtkWindow.h"
#include "vtkViewport.h"
#include "vtkPolyData.h"
#include "vtkContourRepresentation.h"


EMSCRIPTEN_BINDINGS(vtkContourRepresentationPoint_class) {
  emscripten::class_<vtkContourRepresentationPoint>("vtkContourRepresentationPoint");
}

EMSCRIPTEN_BINDINGS(vtkContourRepresentationNode_class) {
  emscripten::class_<vtkContourRepresentationNode>("vtkContourRepresentationNode");
}

EMSCRIPTEN_BINDINGS(vtkContourRepresentationInternals_class) {
  emscripten::class_<vtkContourRepresentationInternals>("vtkContourRepresentationInternals")
    .function("ClearNodes", &vtkContourRepresentationInternals::ClearNodes);
}
template<> void emscripten::internal::raw_destructor<vtkContourRepresentation>(vtkContourRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourRepresentation_class) {
  emscripten::class_<vtkContourRepresentation, emscripten::base<vtkWidgetRepresentation>>("vtkContourRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddNodeAtWorldPosition", emscripten::select_overload<int(vtkContourRepresentation&, double, double, double)>([](vtkContourRepresentation& self, double arg_0, double arg_1, double arg_2) -> int { return self.AddNodeAtWorldPosition( arg_0, arg_1, arg_2); }))
    .function("AddNodeAtDisplayPosition", emscripten::select_overload<int(vtkContourRepresentation&, int, int)>([](vtkContourRepresentation& self, int arg_0, int arg_1) -> int { return self.AddNodeAtDisplayPosition( arg_0, arg_1); }))
    .function("ActivateNode", emscripten::select_overload<int(vtkContourRepresentation&, int, int)>([](vtkContourRepresentation& self, int arg_0, int arg_1) -> int { return self.ActivateNode( arg_0, arg_1); }))
    .function("SetActiveNodeToDisplayPosition", emscripten::select_overload<int(vtkContourRepresentation&, int, int)>([](vtkContourRepresentation& self, int arg_0, int arg_1) -> int { return self.SetActiveNodeToDisplayPosition( arg_0, arg_1); }))
    .function("ToggleActiveNodeSelected", &vtkContourRepresentation::ToggleActiveNodeSelected)
    .function("GetActiveNodeSelected", &vtkContourRepresentation::GetActiveNodeSelected)
    .function("GetNthNodeSelected", &vtkContourRepresentation::GetNthNodeSelected)
    .function("SetNthNodeSelected", &vtkContourRepresentation::SetNthNodeSelected)
    .function("GetNumberOfNodes", &vtkContourRepresentation::GetNumberOfNodes)
    .function("SetNthNodeDisplayPosition", emscripten::select_overload<int(vtkContourRepresentation&, int, int, int)>([](vtkContourRepresentation& self, int arg_0, int arg_1, int arg_2) -> int { return self.SetNthNodeDisplayPosition( arg_0, arg_1, arg_2); }))
    .function("GetNumberOfIntermediatePoints", &vtkContourRepresentation::GetNumberOfIntermediatePoints)
    .function("DeleteLastNode", &vtkContourRepresentation::DeleteLastNode)
    .function("DeleteActiveNode", &vtkContourRepresentation::DeleteActiveNode)
    .function("DeleteNthNode", &vtkContourRepresentation::DeleteNthNode)
    .function("ClearAllNodes", &vtkContourRepresentation::ClearAllNodes)
    .function("AddNodeOnContour", &vtkContourRepresentation::AddNodeOnContour)
    .function("SetPixelTolerance", &vtkContourRepresentation::SetPixelTolerance)
    .function("GetPixelToleranceMinValue", &vtkContourRepresentation::GetPixelToleranceMinValue)
    .function("GetPixelToleranceMaxValue", &vtkContourRepresentation::GetPixelToleranceMaxValue)
    .function("GetPixelTolerance", &vtkContourRepresentation::GetPixelTolerance)
    .function("SetWorldTolerance", &vtkContourRepresentation::SetWorldTolerance)
    .function("GetWorldToleranceMinValue", &vtkContourRepresentation::GetWorldToleranceMinValue)
    .function("GetWorldToleranceMaxValue", &vtkContourRepresentation::GetWorldToleranceMaxValue)
    .function("GetWorldTolerance", &vtkContourRepresentation::GetWorldTolerance)
    .function("GetCurrentOperation", &vtkContourRepresentation::GetCurrentOperation)
    .function("SetCurrentOperation", &vtkContourRepresentation::SetCurrentOperation)
    .function("GetCurrentOperationMinValue", &vtkContourRepresentation::GetCurrentOperationMinValue)
    .function("GetCurrentOperationMaxValue", &vtkContourRepresentation::GetCurrentOperationMaxValue)
    .function("SetCurrentOperationToInactive", &vtkContourRepresentation::SetCurrentOperationToInactive)
    .function("SetCurrentOperationToTranslate", &vtkContourRepresentation::SetCurrentOperationToTranslate)
    .function("SetCurrentOperationToShift", &vtkContourRepresentation::SetCurrentOperationToShift)
    .function("SetCurrentOperationToScale", &vtkContourRepresentation::SetCurrentOperationToScale)
    .function("SetPointPlacer", &vtkContourRepresentation::SetPointPlacer, emscripten::allow_raw_pointers())
    .function("GetPointPlacer", &vtkContourRepresentation::GetPointPlacer, emscripten::allow_raw_pointers())
    .function("SetLineInterpolator", &vtkContourRepresentation::SetLineInterpolator, emscripten::allow_raw_pointers())
    .function("GetLineInterpolator", &vtkContourRepresentation::GetLineInterpolator, emscripten::allow_raw_pointers())
    .function("SetClosedLoop", &vtkContourRepresentation::SetClosedLoop)
    .function("GetClosedLoop", &vtkContourRepresentation::GetClosedLoop)
    .function("ClosedLoopOn", &vtkContourRepresentation::ClosedLoopOn)
    .function("ClosedLoopOff", &vtkContourRepresentation::ClosedLoopOff)
    .function("SetShowSelectedNodes", &vtkContourRepresentation::SetShowSelectedNodes)
    .function("GetShowSelectedNodes", &vtkContourRepresentation::GetShowSelectedNodes)
    .function("ShowSelectedNodesOn", &vtkContourRepresentation::ShowSelectedNodesOn)
    .function("ShowSelectedNodesOff", &vtkContourRepresentation::ShowSelectedNodesOff)
    .function("GetNodePolyData", &vtkContourRepresentation::GetNodePolyData, emscripten::allow_raw_pointers())
    .function("SetRebuildLocator", &vtkContourRepresentation::SetRebuildLocator);
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkContourRepresentation_0_2_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "vtkContourRepresentation_Outside", vtkContourRepresentation::Outside },
      { "vtkContourRepresentation_Nearby", vtkContourRepresentation::Nearby },
      { "vtkContourRepresentation_Inactive", vtkContourRepresentation::Inactive },
      { "vtkContourRepresentation_Translate", vtkContourRepresentation::Translate },
      { "vtkContourRepresentation_Shift", vtkContourRepresentation::Shift },
      { "vtkContourRepresentation_Scale", vtkContourRepresentation::Scale },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

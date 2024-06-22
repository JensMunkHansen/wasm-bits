// JavaScript wrapper for vtkDendrogramItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkDendrogramItemEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkDendrogramItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkVector.h"
#include "vtkContext2D.h"
#include "vtkStdString.h"
#include "vtkContextMouseEvent.h"
#include "vtkDendrogramItem.h"

template<> void emscripten::internal::raw_destructor<vtkDendrogramItem>(vtkDendrogramItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDendrogramItem_class) {
  emscripten::class_<vtkDendrogramItem, emscripten::base<vtkContextItem>>("vtkDendrogramItem")
    .smart_ptr<vtkSmartPointer<vtkDendrogramItem>>("vtkSmartPointer<vtkDendrogramItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDendrogramItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDendrogramItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDendrogramItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDendrogramItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDendrogramItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDendrogramItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDendrogramItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTree", &vtkDendrogramItem::SetTree, emscripten::allow_raw_pointers())
    .function("GetTree", &vtkDendrogramItem::GetTree, emscripten::allow_raw_pointers())
    .function("CollapseToNumberOfLeafNodes", &vtkDendrogramItem::CollapseToNumberOfLeafNodes)
    .function("GetPrunedTree", &vtkDendrogramItem::GetPrunedTree, emscripten::allow_raw_pointers())
    .function("SetColorArray", emscripten::optional_override([](vtkDendrogramItem& self, const std::string & arg_0) -> void {  return self.SetColorArray( arg_0.c_str());}))
    .function("SetExtendLeafNodes", &vtkDendrogramItem::SetExtendLeafNodes)
    .function("GetExtendLeafNodes", &vtkDendrogramItem::GetExtendLeafNodes)
    .function("ExtendLeafNodesOn", &vtkDendrogramItem::ExtendLeafNodesOn)
    .function("ExtendLeafNodesOff", &vtkDendrogramItem::ExtendLeafNodesOff)
    .function("SetOrientation", emscripten::select_overload<void(vtkDendrogramItem&, int)>([](vtkDendrogramItem& self, int arg_0) -> void { return self.SetOrientation( arg_0); }))
    .function("GetOrientation", &vtkDendrogramItem::GetOrientation)
    .function("GetAngleForOrientation", &vtkDendrogramItem::GetAngleForOrientation)
    .function("GetTextAngleForOrientation", &vtkDendrogramItem::GetTextAngleForOrientation)
    .function("SetDrawLabels", &vtkDendrogramItem::SetDrawLabels)
    .function("GetDrawLabels", &vtkDendrogramItem::GetDrawLabels)
    .function("DrawLabelsOn", &vtkDendrogramItem::DrawLabelsOn)
    .function("DrawLabelsOff", &vtkDendrogramItem::DrawLabelsOff)
    .function("SetPosition", emscripten::select_overload<void(vtkDendrogramItem&, float, float)>([](vtkDendrogramItem& self, float arg_0, float arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetPosition", emscripten::select_overload<void(vtkDendrogramItem&, const vtkVector2f&)>([](vtkDendrogramItem& self, const vtkVector2f& arg_0) -> void { return self.SetPosition( arg_0); }))
    .function("GetPositionVector", &vtkDendrogramItem::GetPositionVector)
    .function("GetLeafSpacing", &vtkDendrogramItem::GetLeafSpacing)
    .function("SetLeafSpacing", &vtkDendrogramItem::SetLeafSpacing)
    .function("PrepareToPaint", &vtkDendrogramItem::PrepareToPaint, emscripten::allow_raw_pointers())
    .function("ComputeLabelWidth", &vtkDendrogramItem::ComputeLabelWidth, emscripten::allow_raw_pointers())
    .function("GetLabelWidth", &vtkDendrogramItem::GetLabelWidth)
    .function("Paint", &vtkDendrogramItem::Paint, emscripten::allow_raw_pointers())
    .function("GetLineWidth", &vtkDendrogramItem::GetLineWidth)
    .function("SetLineWidth", &vtkDendrogramItem::SetLineWidth)
    .function("SetDisplayNumberOfCollapsedLeafNodes", &vtkDendrogramItem::SetDisplayNumberOfCollapsedLeafNodes)
    .function("GetDisplayNumberOfCollapsedLeafNodes", &vtkDendrogramItem::GetDisplayNumberOfCollapsedLeafNodes)
    .function("DisplayNumberOfCollapsedLeafNodesOn", &vtkDendrogramItem::DisplayNumberOfCollapsedLeafNodesOn)
    .function("DisplayNumberOfCollapsedLeafNodesOff", &vtkDendrogramItem::DisplayNumberOfCollapsedLeafNodesOff)
    .function("GetDistanceArrayName", &vtkDendrogramItem::GetDistanceArrayName)
    .function("SetDistanceArrayName", &vtkDendrogramItem::SetDistanceArrayName)
    .function("GetVertexNameArrayName", &vtkDendrogramItem::GetVertexNameArrayName)
    .function("SetVertexNameArrayName", &vtkDendrogramItem::SetVertexNameArrayName)
    .function("Hit", &vtkDendrogramItem::Hit)
    .function("MouseDoubleClickEvent", &vtkDendrogramItem::MouseDoubleClickEvent);
}
EMSCRIPTEN_BINDINGS(vtkViewsInfovis_vtkDendrogramItem_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkDendrogramItem_LEFT_TO_RIGHT", vtkDendrogramItem::LEFT_TO_RIGHT },
      { "vtkDendrogramItem_UP_TO_DOWN", vtkDendrogramItem::UP_TO_DOWN },
      { "vtkDendrogramItem_RIGHT_TO_LEFT", vtkDendrogramItem::RIGHT_TO_LEFT },
      { "vtkDendrogramItem_DOWN_TO_UP", vtkDendrogramItem::DOWN_TO_UP },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}

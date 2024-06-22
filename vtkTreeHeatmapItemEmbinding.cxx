// JavaScript wrapper for vtkTreeHeatmapItem with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkTreeHeatmapItemEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkTreeHeatmapItem.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkTable.h"
#include "vtkDendrogramItem.h"
#include "vtkHeatmapItem.h"
#include "vtkContextMouseEvent.h"
#include "vtkTreeHeatmapItem.h"

template<> void emscripten::internal::raw_destructor<vtkTreeHeatmapItem>(vtkTreeHeatmapItem * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeHeatmapItem_class) {
  emscripten::class_<vtkTreeHeatmapItem, emscripten::base<vtkContextItem>>("vtkTreeHeatmapItem")
    .smart_ptr<vtkSmartPointer<vtkTreeHeatmapItem>>("vtkSmartPointer<vtkTreeHeatmapItem>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeHeatmapItem>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeHeatmapItem::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeHeatmapItem& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeHeatmapItem::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeHeatmapItem::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeHeatmapItem::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeHeatmapItem& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTree", &vtkTreeHeatmapItem::SetTree, emscripten::allow_raw_pointers())
    .function("GetTree", &vtkTreeHeatmapItem::GetTree, emscripten::allow_raw_pointers())
    .function("SetColumnTree", &vtkTreeHeatmapItem::SetColumnTree, emscripten::allow_raw_pointers())
    .function("GetColumnTree", &vtkTreeHeatmapItem::GetColumnTree, emscripten::allow_raw_pointers())
    .function("SetTable", &vtkTreeHeatmapItem::SetTable, emscripten::allow_raw_pointers())
    .function("GetTable", &vtkTreeHeatmapItem::GetTable, emscripten::allow_raw_pointers())
    .function("GetDendrogram", &vtkTreeHeatmapItem::GetDendrogram, emscripten::allow_raw_pointers())
    .function("SetDendrogram", &vtkTreeHeatmapItem::SetDendrogram, emscripten::allow_raw_pointers())
    .function("GetHeatmap", &vtkTreeHeatmapItem::GetHeatmap, emscripten::allow_raw_pointers())
    .function("SetHeatmap", &vtkTreeHeatmapItem::SetHeatmap, emscripten::allow_raw_pointers())
    .function("ReorderTable", &vtkTreeHeatmapItem::ReorderTable)
    .function("ReverseTableRows", &vtkTreeHeatmapItem::ReverseTableRows)
    .function("ReverseTableColumns", &vtkTreeHeatmapItem::ReverseTableColumns)
    .function("SetOrientation", &vtkTreeHeatmapItem::SetOrientation)
    .function("GetOrientation", &vtkTreeHeatmapItem::GetOrientation)
    .function("CollapseToNumberOfLeafNodes", &vtkTreeHeatmapItem::CollapseToNumberOfLeafNodes)
    .function("GetTreeLineWidth", &vtkTreeHeatmapItem::GetTreeLineWidth)
    .function("SetTreeLineWidth", &vtkTreeHeatmapItem::SetTreeLineWidth)
    .function("GetPrunedTree", &vtkTreeHeatmapItem::GetPrunedTree, emscripten::allow_raw_pointers())
    .function("SetTreeColorArray", emscripten::optional_override([](vtkTreeHeatmapItem& self, const std::string & arg_0) -> void {  return self.SetTreeColorArray( arg_0.c_str());}))
    .function("Hit", &vtkTreeHeatmapItem::Hit)
    .function("MouseDoubleClickEvent", &vtkTreeHeatmapItem::MouseDoubleClickEvent);
}

// JavaScript wrapper for vtkKdTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkKdTreeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkKdTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBSPCuts.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"
#include "vtkIdList.h"
#include "vtkIntArray.h"
#include "vtkPointSet.h"
#include "vtkPoints.h"
#include "vtkIdTypeArray.h"
#include "vtkPolyData.h"
#include "vtkKdNode.h"
#include "vtkKdTree.h"

template<> void emscripten::internal::raw_destructor<vtkKdTree>(vtkKdTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKdTree_class) {
  emscripten::class_<vtkKdTree, emscripten::base<vtkLocator>>("vtkKdTree")
    .smart_ptr<vtkSmartPointer<vtkKdTree>>("vtkSmartPointer<vtkKdTree>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKdTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKdTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKdTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKdTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKdTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKdTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("TimingOn", &vtkKdTree::TimingOn)
    .function("TimingOff", &vtkKdTree::TimingOff)
    .function("SetTiming", &vtkKdTree::SetTiming)
    .function("GetTiming", &vtkKdTree::GetTiming)
    .function("SetMinCells", &vtkKdTree::SetMinCells)
    .function("GetMinCells", &vtkKdTree::GetMinCells)
    .function("GetNumberOfRegionsOrLess", &vtkKdTree::GetNumberOfRegionsOrLess)
    .function("SetNumberOfRegionsOrLess", &vtkKdTree::SetNumberOfRegionsOrLess)
    .function("GetNumberOfRegionsOrMore", &vtkKdTree::GetNumberOfRegionsOrMore)
    .function("SetNumberOfRegionsOrMore", &vtkKdTree::SetNumberOfRegionsOrMore)
    .function("GetFudgeFactor", &vtkKdTree::GetFudgeFactor)
    .function("SetFudgeFactor", &vtkKdTree::SetFudgeFactor)
    .function("GetCuts", &vtkKdTree::GetCuts, emscripten::allow_raw_pointers())
    .function("SetCuts", emscripten::select_overload<void(vtkKdTree&, vtkBSPCuts*)>([](vtkKdTree& self, vtkBSPCuts* arg_0) -> void { return self.SetCuts( arg_0); }), emscripten::allow_raw_pointers())
    .function("OmitXPartitioning", &vtkKdTree::OmitXPartitioning)
    .function("OmitYPartitioning", &vtkKdTree::OmitYPartitioning)
    .function("OmitZPartitioning", &vtkKdTree::OmitZPartitioning)
    .function("OmitXYPartitioning", &vtkKdTree::OmitXYPartitioning)
    .function("OmitYZPartitioning", &vtkKdTree::OmitYZPartitioning)
    .function("OmitZXPartitioning", &vtkKdTree::OmitZXPartitioning)
    .function("OmitNoPartitioning", &vtkKdTree::OmitNoPartitioning)
    .function("SetDataSet", &vtkKdTree::SetDataSet, emscripten::allow_raw_pointers())
    .function("AddDataSet", &vtkKdTree::AddDataSet, emscripten::allow_raw_pointers())
    .function("RemoveDataSet", emscripten::select_overload<void(vtkKdTree&, int)>([](vtkKdTree& self, int arg_0) -> void { return self.RemoveDataSet( arg_0); }))
    .function("RemoveDataSet", emscripten::select_overload<void(vtkKdTree&, vtkDataSet*)>([](vtkKdTree& self, vtkDataSet* arg_0) -> void { return self.RemoveDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveAllDataSets", &vtkKdTree::RemoveAllDataSets)
    .function("GetNumberOfDataSets", &vtkKdTree::GetNumberOfDataSets)
    .function("GetDataSet", emscripten::select_overload<vtkDataSet*(vtkKdTree&, int)>([](vtkKdTree& self, int arg_0) -> vtkDataSet* { return self.GetDataSet( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataSet", emscripten::select_overload<vtkDataSet*(vtkKdTree&)>([](vtkKdTree& self) -> vtkDataSet* { return self.GetDataSet(); }), emscripten::allow_raw_pointers())
    .function("GetDataSets", &vtkKdTree::GetDataSets, emscripten::allow_raw_pointers())
    .function("GetDataSetIndex", &vtkKdTree::GetDataSetIndex, emscripten::allow_raw_pointers())
    .function("GetBounds", emscripten::optional_override([](vtkKdTree& self, std::uintptr_t arg_0) -> void {  return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetNewBounds", emscripten::optional_override([](vtkKdTree& self, std::uintptr_t arg_0) -> void {  return self.SetNewBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetNumberOfRegions", &vtkKdTree::GetNumberOfRegions)
    .function("PrintTree", &vtkKdTree::PrintTree)
    .function("PrintVerboseTree", &vtkKdTree::PrintVerboseTree)
    .function("PrintRegion", &vtkKdTree::PrintRegion)
    .function("CreateCellLists", emscripten::select_overload<void(vtkKdTree&, int, std::uintptr_t, int)>([](vtkKdTree& self, int arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.CreateCellLists( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2); }))
    .function("CreateCellLists", emscripten::select_overload<void(vtkKdTree&, vtkDataSet*, std::uintptr_t, int)>([](vtkKdTree& self, vtkDataSet* arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.CreateCellLists( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2); }), emscripten::allow_raw_pointers())
    .function("CreateCellLists", emscripten::select_overload<void(vtkKdTree&, std::uintptr_t, int)>([](vtkKdTree& self, std::uintptr_t arg_0, int arg_1) -> void { return self.CreateCellLists(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1); }))
    .function("CreateCellLists", emscripten::select_overload<void(vtkKdTree&)>([](vtkKdTree& self) -> void { return self.CreateCellLists(); }))
    .function("SetIncludeRegionBoundaryCells", &vtkKdTree::SetIncludeRegionBoundaryCells)
    .function("GetIncludeRegionBoundaryCells", &vtkKdTree::GetIncludeRegionBoundaryCells)
    .function("IncludeRegionBoundaryCellsOn", &vtkKdTree::IncludeRegionBoundaryCellsOn)
    .function("IncludeRegionBoundaryCellsOff", &vtkKdTree::IncludeRegionBoundaryCellsOff)
    .function("DeleteCellLists", &vtkKdTree::DeleteCellLists)
    .function("GetCellList", &vtkKdTree::GetCellList, emscripten::allow_raw_pointers())
    .function("GetBoundaryCellList", &vtkKdTree::GetBoundaryCellList, emscripten::allow_raw_pointers())
    .function("GetCellLists", emscripten::select_overload<int(vtkKdTree&, vtkIntArray*, int, vtkIdList*, vtkIdList*)>([](vtkKdTree& self, vtkIntArray* arg_0, int arg_1, vtkIdList* arg_2, vtkIdList* arg_3) -> int { return self.GetCellLists( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetCellLists", emscripten::select_overload<int(vtkKdTree&, vtkIntArray*, vtkDataSet*, vtkIdList*, vtkIdList*)>([](vtkKdTree& self, vtkIntArray* arg_0, vtkDataSet* arg_1, vtkIdList* arg_2, vtkIdList* arg_3) -> int { return self.GetCellLists( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetCellLists", emscripten::select_overload<int(vtkKdTree&, vtkIntArray*, vtkIdList*, vtkIdList*)>([](vtkKdTree& self, vtkIntArray* arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> int { return self.GetCellLists( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetRegionContainingCell", emscripten::select_overload<int(vtkKdTree&, vtkDataSet*, int)>([](vtkKdTree& self, vtkDataSet* arg_0, int arg_1) -> int { return self.GetRegionContainingCell( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetRegionContainingCell", emscripten::select_overload<int(vtkKdTree&, int, int)>([](vtkKdTree& self, int arg_0, int arg_1) -> int { return self.GetRegionContainingCell( arg_0, arg_1); }))
    .function("GetRegionContainingCell", emscripten::select_overload<int(vtkKdTree&, int)>([](vtkKdTree& self, int arg_0) -> int { return self.GetRegionContainingCell( arg_0); }))
    .function("AllGetRegionContainingCell", emscripten::optional_override([](vtkKdTree& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.AllGetRegionContainingCell()) / sizeof(int);}))
    .function("GetRegionContainingPoint", &vtkKdTree::GetRegionContainingPoint)
    .function("BuildLocator", &vtkKdTree::BuildLocator)
    .function("ForceBuildLocator", &vtkKdTree::ForceBuildLocator)
    .function("BuildLocatorFromPoints", emscripten::select_overload<void(vtkKdTree&, vtkPointSet*)>([](vtkKdTree& self, vtkPointSet* arg_0) -> void { return self.BuildLocatorFromPoints( arg_0); }), emscripten::allow_raw_pointers())
    .function("BuildLocatorFromPoints", emscripten::select_overload<void(vtkKdTree&, vtkPoints*)>([](vtkKdTree& self, vtkPoints* arg_0) -> void { return self.BuildLocatorFromPoints( arg_0); }), emscripten::allow_raw_pointers())
    .function("BuildMapForDuplicatePoints", &vtkKdTree::BuildMapForDuplicatePoints, emscripten::allow_raw_pointers())
    .function("FindPoint", emscripten::select_overload<int(vtkKdTree&, std::uintptr_t)>([](vtkKdTree& self, std::uintptr_t arg_0) -> int { return self.FindPoint(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("FindPoint", emscripten::select_overload<int(vtkKdTree&, double, double, double)>([](vtkKdTree& self, double arg_0, double arg_1, double arg_2) -> int { return self.FindPoint( arg_0, arg_1, arg_2); }))
    .function("GetPointsInRegion", &vtkKdTree::GetPointsInRegion, emscripten::allow_raw_pointers())
    .function("FreeSearchStructure", &vtkKdTree::FreeSearchStructure)
    .function("GenerateRepresentation", emscripten::select_overload<void(vtkKdTree&, int, vtkPolyData*)>([](vtkKdTree& self, int arg_0, vtkPolyData* arg_1) -> void { return self.GenerateRepresentation( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GenerateRepresentation", emscripten::select_overload<void(vtkKdTree&, std::uintptr_t, int, vtkPolyData*)>([](vtkKdTree& self, std::uintptr_t arg_0, int arg_1, vtkPolyData* arg_2) -> void { return self.GenerateRepresentation(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GenerateRepresentationUsingDataBoundsOn", &vtkKdTree::GenerateRepresentationUsingDataBoundsOn)
    .function("GenerateRepresentationUsingDataBoundsOff", &vtkKdTree::GenerateRepresentationUsingDataBoundsOff)
    .function("SetGenerateRepresentationUsingDataBounds", &vtkKdTree::SetGenerateRepresentationUsingDataBounds)
    .function("GetGenerateRepresentationUsingDataBounds", &vtkKdTree::GetGenerateRepresentationUsingDataBounds)
    .function("NewGeometry", emscripten::select_overload<int(vtkKdTree&)>([](vtkKdTree& self) -> int { return self.NewGeometry(); }))
    .function("InvalidateGeometry", &vtkKdTree::InvalidateGeometry)
    .class_function("CopyTree", &vtkKdTree::CopyTree, emscripten::allow_raw_pointers())
    .function("FindPointsInArea", emscripten::select_overload<void(vtkKdTree&, std::uintptr_t, vtkIdTypeArray*, bool)>([](vtkKdTree& self, std::uintptr_t arg_0, vtkIdTypeArray* arg_1, bool arg_2) -> void { return self.FindPointsInArea(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1, arg_2); }), emscripten::allow_raw_pointers());
}

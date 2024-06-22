// JavaScript wrapper for vtkPKdTree with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPKdTreeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPKdTree.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkIntArray.h"
#include "vtkIdList.h"
#include "vtkDataSet.h"
#include "vtkPKdTree.h"

template<> void emscripten::internal::raw_destructor<vtkPKdTree>(vtkPKdTree * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPKdTree_class) {
  emscripten::class_<vtkPKdTree, emscripten::base<vtkKdTree>>("vtkPKdTree")
    .smart_ptr<vtkSmartPointer<vtkPKdTree>>("vtkSmartPointer<vtkPKdTree>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPKdTree>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPKdTree::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPKdTree& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPKdTree::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPKdTree::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPKdTree::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPKdTree& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildLocator", &vtkPKdTree::BuildLocator)
    .function("GetTotalNumberOfCells", &vtkPKdTree::GetTotalNumberOfCells)
    .function("CreateProcessCellCountData", &vtkPKdTree::CreateProcessCellCountData)
    .function("CreateGlobalDataArrayBounds", &vtkPKdTree::CreateGlobalDataArrayBounds)
    .function("SetController", &vtkPKdTree::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPKdTree::GetController, emscripten::allow_raw_pointers())
    .function("GetRegionAssignment", &vtkPKdTree::GetRegionAssignment)
    .function("AssignRegions", emscripten::optional_override([](vtkPKdTree& self, std::uintptr_t arg_0, int arg_1) -> int {  return self.AssignRegions(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}))
    .function("AssignRegionsRoundRobin", &vtkPKdTree::AssignRegionsRoundRobin)
    .function("AssignRegionsContiguous", &vtkPKdTree::AssignRegionsContiguous)
    .function("GetRegionAssignmentMap", emscripten::optional_override([](vtkPKdTree& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetRegionAssignmentMap()) / sizeof(int);}))
    .function("GetRegionAssignmentMapLength", &vtkPKdTree::GetRegionAssignmentMapLength)
    .function("GetRegionAssignmentList", &vtkPKdTree::GetRegionAssignmentList, emscripten::allow_raw_pointers())
    .function("GetAllProcessesBorderingOnPoint", &vtkPKdTree::GetAllProcessesBorderingOnPoint, emscripten::allow_raw_pointers())
    .function("GetProcessAssignedToRegion", &vtkPKdTree::GetProcessAssignedToRegion)
    .function("HasData", &vtkPKdTree::HasData)
    .function("GetProcessCellCountForRegion", &vtkPKdTree::GetProcessCellCountForRegion)
    .function("GetTotalProcessesInRegion", &vtkPKdTree::GetTotalProcessesInRegion)
    .function("GetProcessListForRegion", &vtkPKdTree::GetProcessListForRegion, emscripten::allow_raw_pointers())
    .function("GetProcessesCellCountForRegion", emscripten::optional_override([](vtkPKdTree& self, int arg_0, std::uintptr_t arg_1, int arg_2) -> int {  return self.GetProcessesCellCountForRegion( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}))
    .function("GetTotalRegionsForProcess", &vtkPKdTree::GetTotalRegionsForProcess)
    .function("GetRegionListForProcess", &vtkPKdTree::GetRegionListForProcess, emscripten::allow_raw_pointers())
    .function("GetRegionsCellCountForProcess", emscripten::optional_override([](vtkPKdTree& self, int arg_0, std::uintptr_t arg_1, int arg_2) -> int {  return self.GetRegionsCellCountForProcess( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)), arg_2);}))
    .function("GetCellListsForProcessRegions", emscripten::select_overload<int(vtkPKdTree&, int, int, vtkIdList*, vtkIdList*)>([](vtkPKdTree& self, int arg_0, int arg_1, vtkIdList* arg_2, vtkIdList* arg_3) -> int { return self.GetCellListsForProcessRegions( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetCellListsForProcessRegions", emscripten::select_overload<int(vtkPKdTree&, int, vtkDataSet*, vtkIdList*, vtkIdList*)>([](vtkPKdTree& self, int arg_0, vtkDataSet* arg_1, vtkIdList* arg_2, vtkIdList* arg_3) -> int { return self.GetCellListsForProcessRegions( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("GetCellListsForProcessRegions", emscripten::select_overload<int(vtkPKdTree&, int, vtkIdList*, vtkIdList*)>([](vtkPKdTree& self, int arg_0, vtkIdList* arg_1, vtkIdList* arg_2) -> int { return self.GetCellListsForProcessRegions( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers());
}

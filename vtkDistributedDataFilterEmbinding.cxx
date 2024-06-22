// JavaScript wrapper for vtkDistributedDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkDistributedDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkDistributedDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPKdTree.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkBSPCuts.h"
#include "vtkDistributedDataFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkDistributedDataFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDistributedDataFilter>(vtkDistributedDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistributedDataFilter_class) {
  using BoundaryModes=vtkDistributedDataFilter::BoundaryModes;
  emscripten::class_<vtkDistributedDataFilter, emscripten::base<vtkDataObjectAlgorithm>>("vtkDistributedDataFilter")
    .smart_ptr<vtkSmartPointer<vtkDistributedDataFilter>>("vtkSmartPointer<vtkDistributedDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDistributedDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistributedDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistributedDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistributedDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistributedDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistributedDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistributedDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkDistributedDataFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkDistributedDataFilter::GetController, emscripten::allow_raw_pointers())
    .function("GetKdtree", &vtkDistributedDataFilter::GetKdtree, emscripten::allow_raw_pointers())
    .function("RetainKdtreeOn", &vtkDistributedDataFilter::RetainKdtreeOn)
    .function("RetainKdtreeOff", &vtkDistributedDataFilter::RetainKdtreeOff)
    .function("GetRetainKdtree", &vtkDistributedDataFilter::GetRetainKdtree)
    .function("SetRetainKdtree", &vtkDistributedDataFilter::SetRetainKdtree)
    .function("IncludeAllIntersectingCellsOn", &vtkDistributedDataFilter::IncludeAllIntersectingCellsOn)
    .function("IncludeAllIntersectingCellsOff", &vtkDistributedDataFilter::IncludeAllIntersectingCellsOff)
    .function("GetIncludeAllIntersectingCells", &vtkDistributedDataFilter::GetIncludeAllIntersectingCells)
    .function("SetIncludeAllIntersectingCells", &vtkDistributedDataFilter::SetIncludeAllIntersectingCells)
    .function("ClipCellsOn", &vtkDistributedDataFilter::ClipCellsOn)
    .function("ClipCellsOff", &vtkDistributedDataFilter::ClipCellsOff)
    .function("GetClipCells", &vtkDistributedDataFilter::GetClipCells)
    .function("SetClipCells", &vtkDistributedDataFilter::SetClipCells)
    .function("SetBoundaryMode", &vtkDistributedDataFilter::SetBoundaryMode)
    .function("SetBoundaryModeToAssignToOneRegion", &vtkDistributedDataFilter::SetBoundaryModeToAssignToOneRegion)
    .function("SetBoundaryModeToAssignToAllIntersectingRegions", &vtkDistributedDataFilter::SetBoundaryModeToAssignToAllIntersectingRegions)
    .function("SetBoundaryModeToSplitBoundaryCells", &vtkDistributedDataFilter::SetBoundaryModeToSplitBoundaryCells)
    .function("GetBoundaryMode", &vtkDistributedDataFilter::GetBoundaryMode)
    .function("UseMinimalMemoryOn", &vtkDistributedDataFilter::UseMinimalMemoryOn)
    .function("UseMinimalMemoryOff", &vtkDistributedDataFilter::UseMinimalMemoryOff)
    .function("GetUseMinimalMemory", &vtkDistributedDataFilter::GetUseMinimalMemory)
    .function("SetUseMinimalMemory", &vtkDistributedDataFilter::SetUseMinimalMemory)
    .function("GetMinimumGhostLevel", &vtkDistributedDataFilter::GetMinimumGhostLevel)
    .function("SetMinimumGhostLevel", &vtkDistributedDataFilter::SetMinimumGhostLevel)
    .function("TimingOn", &vtkDistributedDataFilter::TimingOn)
    .function("TimingOff", &vtkDistributedDataFilter::TimingOff)
    .function("SetTiming", &vtkDistributedDataFilter::SetTiming)
    .function("GetTiming", &vtkDistributedDataFilter::GetTiming)
    .function("GetCuts", &vtkDistributedDataFilter::GetCuts, emscripten::allow_raw_pointers())
    .function("SetCuts", &vtkDistributedDataFilter::SetCuts, emscripten::allow_raw_pointers())
    .function("SetUserRegionAssignments", emscripten::optional_override([](vtkDistributedDataFilter& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.SetUserRegionAssignments(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1);}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersParallel_vtkDistributedDataFilter_0_2_constants) {
    typedef vtkDistributedDataFilter::BoundaryModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDistributedDataFilter_BoundaryModes_ASSIGN_TO_ONE_REGION", vtkDistributedDataFilter::ASSIGN_TO_ONE_REGION },
      { "vtkDistributedDataFilter_BoundaryModes_ASSIGN_TO_ALL_INTERSECTING_REGIONS", vtkDistributedDataFilter::ASSIGN_TO_ALL_INTERSECTING_REGIONS },
      { "vtkDistributedDataFilter_BoundaryModes_SPLIT_BOUNDARY_CELLS", vtkDistributedDataFilter::SPLIT_BOUNDARY_CELLS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

// JavaScript wrapper for vtkHyperTreeGridVisibleLeavesSize with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridVisibleLeavesSizeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridVisibleLeavesSize.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridVisibleLeavesSize.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridVisibleLeavesSize>(vtkHyperTreeGridVisibleLeavesSize * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridVisibleLeavesSize_class) {
  emscripten::class_<vtkHyperTreeGridVisibleLeavesSize, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridVisibleLeavesSize")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridVisibleLeavesSize>>("vtkSmartPointer<vtkHyperTreeGridVisibleLeavesSize>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridVisibleLeavesSize>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridVisibleLeavesSize::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridVisibleLeavesSize& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridVisibleLeavesSize::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridVisibleLeavesSize::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridVisibleLeavesSize::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridVisibleLeavesSize& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellSizeArrayName", &vtkHyperTreeGridVisibleLeavesSize::GetCellSizeArrayName)
    .function("SetCellSizeArrayName", &vtkHyperTreeGridVisibleLeavesSize::SetCellSizeArrayName)
    .function("GetValidCellArrayName", &vtkHyperTreeGridVisibleLeavesSize::GetValidCellArrayName)
    .function("SetValidCellArrayName", &vtkHyperTreeGridVisibleLeavesSize::SetValidCellArrayName);
}

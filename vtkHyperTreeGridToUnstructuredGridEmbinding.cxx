// JavaScript wrapper for vtkHyperTreeGridToUnstructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridToUnstructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridToUnstructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridToUnstructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridToUnstructuredGrid>(vtkHyperTreeGridToUnstructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridToUnstructuredGrid_class) {
  emscripten::class_<vtkHyperTreeGridToUnstructuredGrid, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridToUnstructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridToUnstructuredGrid>>("vtkSmartPointer<vtkHyperTreeGridToUnstructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridToUnstructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridToUnstructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridToUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridToUnstructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridToUnstructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridToUnstructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridToUnstructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetAddOriginalIds", &vtkHyperTreeGridToUnstructuredGrid::GetAddOriginalIds)
    .function("SetAddOriginalIds", &vtkHyperTreeGridToUnstructuredGrid::SetAddOriginalIds)
    .function("AddOriginalIdsOn", &vtkHyperTreeGridToUnstructuredGrid::AddOriginalIdsOn)
    .function("AddOriginalIdsOff", &vtkHyperTreeGridToUnstructuredGrid::AddOriginalIdsOff);
}

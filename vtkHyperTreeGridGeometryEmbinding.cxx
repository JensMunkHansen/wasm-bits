// JavaScript wrapper for vtkHyperTreeGridGeometry with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridGeometryEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridGeometry.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGeometry.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridGeometry>(vtkHyperTreeGridGeometry * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridGeometry_class) {
  emscripten::class_<vtkHyperTreeGridGeometry, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridGeometry")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridGeometry>>("vtkSmartPointer<vtkHyperTreeGridGeometry>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridGeometry>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGeometry::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridGeometry& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridGeometry::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridGeometry::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridGeometry::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridGeometry& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMerging", &vtkHyperTreeGridGeometry::SetMerging)
    .function("GetMerging", &vtkHyperTreeGridGeometry::GetMerging)
    .function("SetPassThroughCellIds", &vtkHyperTreeGridGeometry::SetPassThroughCellIds)
    .function("GetPassThroughCellIds", &vtkHyperTreeGridGeometry::GetPassThroughCellIds)
    .function("PassThroughCellIdsOn", &vtkHyperTreeGridGeometry::PassThroughCellIdsOn)
    .function("PassThroughCellIdsOff", &vtkHyperTreeGridGeometry::PassThroughCellIdsOff)
    .function("SetOriginalCellIdArrayName", &vtkHyperTreeGridGeometry::SetOriginalCellIdArrayName)
    .function("GetOriginalCellIdArrayName", &vtkHyperTreeGridGeometry::GetOriginalCellIdArrayName);
}

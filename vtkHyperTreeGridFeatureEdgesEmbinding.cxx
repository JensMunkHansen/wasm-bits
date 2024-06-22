// JavaScript wrapper for vtkHyperTreeGridFeatureEdges with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridFeatureEdgesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridFeatureEdges.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridFeatureEdges.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridFeatureEdges>(vtkHyperTreeGridFeatureEdges * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridFeatureEdges_class) {
  emscripten::class_<vtkHyperTreeGridFeatureEdges, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridFeatureEdges")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridFeatureEdges>>("vtkSmartPointer<vtkHyperTreeGridFeatureEdges>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridFeatureEdges>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridFeatureEdges::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridFeatureEdges& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridFeatureEdges::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridFeatureEdges::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridFeatureEdges::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridFeatureEdges& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMergePoints", &vtkHyperTreeGridFeatureEdges::SetMergePoints)
    .function("GetMergePoints", &vtkHyperTreeGridFeatureEdges::GetMergePoints);
}

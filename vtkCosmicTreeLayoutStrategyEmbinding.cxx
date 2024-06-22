// JavaScript wrapper for vtkCosmicTreeLayoutStrategy with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkCosmicTreeLayoutStrategyEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkCosmicTreeLayoutStrategy.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkCosmicTreeLayoutStrategy.h"

EMSCRIPTEN_BINDINGS(vtkInfovisLayout_vtkCosmicTreeLayoutStrategy_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCosmicTreeLayoutStrategy>(vtkCosmicTreeLayoutStrategy * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCosmicTreeLayoutStrategy_class) {
  emscripten::class_<vtkCosmicTreeLayoutStrategy, emscripten::base<vtkGraphLayoutStrategy>>("vtkCosmicTreeLayoutStrategy")
    .smart_ptr<vtkSmartPointer<vtkCosmicTreeLayoutStrategy>>("vtkSmartPointer<vtkCosmicTreeLayoutStrategy>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCosmicTreeLayoutStrategy>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCosmicTreeLayoutStrategy::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCosmicTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCosmicTreeLayoutStrategy::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCosmicTreeLayoutStrategy::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCosmicTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCosmicTreeLayoutStrategy& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Layout", &vtkCosmicTreeLayoutStrategy::Layout)
    .function("SetSizeLeafNodesOnly", &vtkCosmicTreeLayoutStrategy::SetSizeLeafNodesOnly)
    .function("GetSizeLeafNodesOnly", &vtkCosmicTreeLayoutStrategy::GetSizeLeafNodesOnly)
    .function("SizeLeafNodesOnlyOn", &vtkCosmicTreeLayoutStrategy::SizeLeafNodesOnlyOn)
    .function("SizeLeafNodesOnlyOff", &vtkCosmicTreeLayoutStrategy::SizeLeafNodesOnlyOff)
    .function("SetLayoutDepth", &vtkCosmicTreeLayoutStrategy::SetLayoutDepth)
    .function("GetLayoutDepth", &vtkCosmicTreeLayoutStrategy::GetLayoutDepth)
    .function("SetLayoutRoot", &vtkCosmicTreeLayoutStrategy::SetLayoutRoot)
    .function("GetLayoutRoot", &vtkCosmicTreeLayoutStrategy::GetLayoutRoot)
    .function("SetNodeSizeArrayName", emscripten::optional_override([](vtkCosmicTreeLayoutStrategy& self, const std::string & arg_0) -> void {  return self.SetNodeSizeArrayName( arg_0.c_str());}))
    .function("GetNodeSizeArrayName", emscripten::optional_override([](vtkCosmicTreeLayoutStrategy& self) -> std::string {  return self.GetNodeSizeArrayName();}));
}

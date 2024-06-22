// JavaScript wrapper for vtkExtractSelectedGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkExtractSelectedGraphEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkExtractSelectedGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkExtractSelectedGraph.h"

template<> void emscripten::internal::raw_destructor<vtkExtractSelectedGraph>(vtkExtractSelectedGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractSelectedGraph_class) {
  emscripten::class_<vtkExtractSelectedGraph, emscripten::base<vtkGraphAlgorithm>>("vtkExtractSelectedGraph")
    .smart_ptr<vtkSmartPointer<vtkExtractSelectedGraph>>("vtkSmartPointer<vtkExtractSelectedGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractSelectedGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractSelectedGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractSelectedGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractSelectedGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractSelectedGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractSelectedGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSelectionConnection", &vtkExtractSelectedGraph::SetSelectionConnection, emscripten::allow_raw_pointers())
    .function("SetAnnotationLayersConnection", &vtkExtractSelectedGraph::SetAnnotationLayersConnection, emscripten::allow_raw_pointers())
    .function("SetRemoveIsolatedVertices", &vtkExtractSelectedGraph::SetRemoveIsolatedVertices)
    .function("GetRemoveIsolatedVertices", &vtkExtractSelectedGraph::GetRemoveIsolatedVertices)
    .function("RemoveIsolatedVerticesOn", &vtkExtractSelectedGraph::RemoveIsolatedVerticesOn)
    .function("RemoveIsolatedVerticesOff", &vtkExtractSelectedGraph::RemoveIsolatedVerticesOff)
    .function("FillInputPortInformation", &vtkExtractSelectedGraph::FillInputPortInformation, emscripten::allow_raw_pointers());
}

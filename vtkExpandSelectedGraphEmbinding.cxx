// JavaScript wrapper for vtkExpandSelectedGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkExpandSelectedGraphEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkExpandSelectedGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkExpandSelectedGraph.h"

template<> void emscripten::internal::raw_destructor<vtkExpandSelectedGraph>(vtkExpandSelectedGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExpandSelectedGraph_class) {
  emscripten::class_<vtkExpandSelectedGraph, emscripten::base<vtkSelectionAlgorithm>>("vtkExpandSelectedGraph")
    .smart_ptr<vtkSmartPointer<vtkExpandSelectedGraph>>("vtkSmartPointer<vtkExpandSelectedGraph>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExpandSelectedGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExpandSelectedGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExpandSelectedGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExpandSelectedGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExpandSelectedGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExpandSelectedGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExpandSelectedGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraphConnection", &vtkExpandSelectedGraph::SetGraphConnection, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkExpandSelectedGraph::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("SetBFSDistance", &vtkExpandSelectedGraph::SetBFSDistance)
    .function("GetBFSDistance", &vtkExpandSelectedGraph::GetBFSDistance)
    .function("SetIncludeShortestPaths", &vtkExpandSelectedGraph::SetIncludeShortestPaths)
    .function("GetIncludeShortestPaths", &vtkExpandSelectedGraph::GetIncludeShortestPaths)
    .function("IncludeShortestPathsOn", &vtkExpandSelectedGraph::IncludeShortestPathsOn)
    .function("IncludeShortestPathsOff", &vtkExpandSelectedGraph::IncludeShortestPathsOff)
    .function("SetDomain", emscripten::optional_override([](vtkExpandSelectedGraph& self, const std::string & arg_0) -> void {  return self.SetDomain( arg_0.c_str());}))
    .function("GetDomain", emscripten::optional_override([](vtkExpandSelectedGraph& self) -> std::string {  return self.GetDomain();}))
    .function("SetUseDomain", &vtkExpandSelectedGraph::SetUseDomain)
    .function("GetUseDomain", &vtkExpandSelectedGraph::GetUseDomain)
    .function("UseDomainOn", &vtkExpandSelectedGraph::UseDomainOn)
    .function("UseDomainOff", &vtkExpandSelectedGraph::UseDomainOff);
}

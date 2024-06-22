// JavaScript wrapper for vtkStreamGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkStreamGraphEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkStreamGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStreamGraph.h"

template<> void emscripten::internal::raw_destructor<vtkStreamGraph>(vtkStreamGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStreamGraph_class) {
  emscripten::class_<vtkStreamGraph, emscripten::base<vtkGraphAlgorithm>>("vtkStreamGraph")
    .smart_ptr<vtkSmartPointer<vtkStreamGraph>>("vtkSmartPointer<vtkStreamGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStreamGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStreamGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStreamGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStreamGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStreamGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUseEdgeWindow", &vtkStreamGraph::SetUseEdgeWindow)
    .function("GetUseEdgeWindow", &vtkStreamGraph::GetUseEdgeWindow)
    .function("UseEdgeWindowOn", &vtkStreamGraph::UseEdgeWindowOn)
    .function("UseEdgeWindowOff", &vtkStreamGraph::UseEdgeWindowOff)
    .function("SetEdgeWindowArrayName", emscripten::optional_override([](vtkStreamGraph& self, const std::string & arg_0) -> void {  return self.SetEdgeWindowArrayName( arg_0.c_str());}))
    .function("GetEdgeWindowArrayName", emscripten::optional_override([](vtkStreamGraph& self) -> std::string {  return self.GetEdgeWindowArrayName();}))
    .function("SetEdgeWindow", &vtkStreamGraph::SetEdgeWindow)
    .function("GetEdgeWindow", &vtkStreamGraph::GetEdgeWindow);
}

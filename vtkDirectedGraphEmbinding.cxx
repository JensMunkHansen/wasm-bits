// JavaScript wrapper for vtkDirectedGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDirectedGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDirectedGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkGraph.h"
#include "vtkDirectedGraph.h"

template<> void emscripten::internal::raw_destructor<vtkDirectedGraph>(vtkDirectedGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDirectedGraph_class) {
  emscripten::class_<vtkDirectedGraph, emscripten::base<vtkGraph>>("vtkDirectedGraph")
    .smart_ptr<vtkSmartPointer<vtkDirectedGraph>>("vtkSmartPointer<vtkDirectedGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDirectedGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectedGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDirectedGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDirectedGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDirectedGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectedGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDirectedGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkDirectedGraph::GetDataObjectType)
    .class_function("GetData", emscripten::select_overload<vtkDirectedGraph*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkDirectedGraph* { return vtkDirectedGraph::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkDirectedGraph*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkDirectedGraph* { return vtkDirectedGraph::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("IsStructureValid", &vtkDirectedGraph::IsStructureValid, emscripten::allow_raw_pointers());
}

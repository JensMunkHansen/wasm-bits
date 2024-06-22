// JavaScript wrapper for vtkDirectedAcyclicGraph with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDirectedAcyclicGraphEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDirectedAcyclicGraph.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDirectedAcyclicGraph.h"

template<> void emscripten::internal::raw_destructor<vtkDirectedAcyclicGraph>(vtkDirectedAcyclicGraph * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDirectedAcyclicGraph_class) {
  emscripten::class_<vtkDirectedAcyclicGraph, emscripten::base<vtkDirectedGraph>>("vtkDirectedAcyclicGraph")
    .smart_ptr<vtkSmartPointer<vtkDirectedAcyclicGraph>>("vtkSmartPointer<vtkDirectedAcyclicGraph>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDirectedAcyclicGraph>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectedAcyclicGraph::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDirectedAcyclicGraph& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDirectedAcyclicGraph::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDirectedAcyclicGraph::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDirectedAcyclicGraph::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDirectedAcyclicGraph& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkDirectedAcyclicGraph::GetDataObjectType)
    .class_function("GetData", emscripten::select_overload<vtkDirectedAcyclicGraph*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkDirectedAcyclicGraph* { return vtkDirectedAcyclicGraph::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkDirectedAcyclicGraph*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkDirectedAcyclicGraph* { return vtkDirectedAcyclicGraph::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}

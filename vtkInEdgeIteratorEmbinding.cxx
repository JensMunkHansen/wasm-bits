// JavaScript wrapper for vtkInEdgeIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkInEdgeIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkInEdgeIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphEdge.h"
#include "vtkInEdgeIterator.h"

template<> void emscripten::internal::raw_destructor<vtkInEdgeIterator>(vtkInEdgeIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInEdgeIterator_class) {
  emscripten::class_<vtkInEdgeIterator, emscripten::base<vtkObject>>("vtkInEdgeIterator")
    .smart_ptr<vtkSmartPointer<vtkInEdgeIterator>>("vtkSmartPointer<vtkInEdgeIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkInEdgeIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInEdgeIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInEdgeIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInEdgeIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInEdgeIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInEdgeIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInEdgeIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkInEdgeIterator::Initialize, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkInEdgeIterator::GetGraph, emscripten::allow_raw_pointers())
    .function("GetVertex", &vtkInEdgeIterator::GetVertex)
    .function("Next", &vtkInEdgeIterator::Next)
    .function("NextGraphEdge", &vtkInEdgeIterator::NextGraphEdge, emscripten::allow_raw_pointers())
    .function("HasNext", &vtkInEdgeIterator::HasNext);
}
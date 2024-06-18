// JavaScript wrapper for vtkOutEdgeIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkOutEdgeIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkOutEdgeIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphEdge.h"
#include "vtkOutEdgeIterator.h"

template<> void emscripten::internal::raw_destructor<vtkOutEdgeIterator>(vtkOutEdgeIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutEdgeIterator_class) {
  emscripten::class_<vtkOutEdgeIterator, emscripten::base<vtkObject>>("vtkOutEdgeIterator")
    .smart_ptr<vtkSmartPointer<vtkOutEdgeIterator>>("vtkSmartPointer<vtkOutEdgeIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOutEdgeIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutEdgeIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutEdgeIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutEdgeIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutEdgeIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutEdgeIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutEdgeIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkOutEdgeIterator::Initialize, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkOutEdgeIterator::GetGraph, emscripten::allow_raw_pointers())
    .function("GetVertex", &vtkOutEdgeIterator::GetVertex)
    .function("Next", &vtkOutEdgeIterator::Next)
    .function("NextGraphEdge", &vtkOutEdgeIterator::NextGraphEdge, emscripten::allow_raw_pointers())
    .function("HasNext", &vtkOutEdgeIterator::HasNext);
}

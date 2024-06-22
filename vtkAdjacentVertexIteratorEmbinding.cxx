// JavaScript wrapper for vtkAdjacentVertexIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAdjacentVertexIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAdjacentVertexIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkAdjacentVertexIterator.h"

template<> void emscripten::internal::raw_destructor<vtkAdjacentVertexIterator>(vtkAdjacentVertexIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAdjacentVertexIterator_class) {
  emscripten::class_<vtkAdjacentVertexIterator, emscripten::base<vtkObject>>("vtkAdjacentVertexIterator")
    .smart_ptr<vtkSmartPointer<vtkAdjacentVertexIterator>>("vtkSmartPointer<vtkAdjacentVertexIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAdjacentVertexIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdjacentVertexIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAdjacentVertexIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAdjacentVertexIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAdjacentVertexIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdjacentVertexIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAdjacentVertexIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkAdjacentVertexIterator::Initialize, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkAdjacentVertexIterator::GetGraph, emscripten::allow_raw_pointers())
    .function("GetVertex", &vtkAdjacentVertexIterator::GetVertex)
    .function("Next", &vtkAdjacentVertexIterator::Next)
    .function("HasNext", &vtkAdjacentVertexIterator::HasNext);
}

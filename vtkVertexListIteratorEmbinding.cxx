// JavaScript wrapper for vtkVertexListIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkVertexListIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkVertexListIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkVertexListIterator.h"

template<> void emscripten::internal::raw_destructor<vtkVertexListIterator>(vtkVertexListIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVertexListIterator_class) {
  emscripten::class_<vtkVertexListIterator, emscripten::base<vtkObject>>("vtkVertexListIterator")
    .smart_ptr<vtkSmartPointer<vtkVertexListIterator>>("vtkSmartPointer<vtkVertexListIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVertexListIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertexListIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVertexListIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVertexListIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVertexListIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertexListIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVertexListIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraph", &vtkVertexListIterator::SetGraph, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkVertexListIterator::GetGraph, emscripten::allow_raw_pointers())
    .function("Next", &vtkVertexListIterator::Next)
    .function("HasNext", &vtkVertexListIterator::HasNext);
}

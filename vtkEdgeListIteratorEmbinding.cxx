// JavaScript wrapper for vtkEdgeListIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkEdgeListIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkEdgeListIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkGraphEdge.h"
#include "vtkEdgeListIterator.h"

template<> void emscripten::internal::raw_destructor<vtkEdgeListIterator>(vtkEdgeListIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEdgeListIterator_class) {
  emscripten::class_<vtkEdgeListIterator, emscripten::base<vtkObject>>("vtkEdgeListIterator")
    .smart_ptr<vtkSmartPointer<vtkEdgeListIterator>>("vtkSmartPointer<vtkEdgeListIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkEdgeListIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeListIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEdgeListIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEdgeListIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEdgeListIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEdgeListIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEdgeListIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetGraph", &vtkEdgeListIterator::GetGraph, emscripten::allow_raw_pointers())
    .function("SetGraph", &vtkEdgeListIterator::SetGraph, emscripten::allow_raw_pointers())
    .function("Next", &vtkEdgeListIterator::Next)
    .function("NextGraphEdge", &vtkEdgeListIterator::NextGraphEdge, emscripten::allow_raw_pointers())
    .function("HasNext", &vtkEdgeListIterator::HasNext);
}

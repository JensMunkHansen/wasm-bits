// JavaScript wrapper for vtkTreeIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTreeIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTreeIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTree.h"
#include "vtkTreeIterator.h"

template<> void emscripten::internal::raw_destructor<vtkTreeIterator>(vtkTreeIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeIterator_class) {
  emscripten::class_<vtkTreeIterator, emscripten::base<vtkObject>>("vtkTreeIterator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTree", &vtkTreeIterator::SetTree, emscripten::allow_raw_pointers())
    .function("GetTree", &vtkTreeIterator::GetTree, emscripten::allow_raw_pointers())
    .function("SetStartVertex", &vtkTreeIterator::SetStartVertex)
    .function("GetStartVertex", &vtkTreeIterator::GetStartVertex)
    .function("Next", &vtkTreeIterator::Next)
    .function("HasNext", &vtkTreeIterator::HasNext)
    .function("Restart", &vtkTreeIterator::Restart);
}

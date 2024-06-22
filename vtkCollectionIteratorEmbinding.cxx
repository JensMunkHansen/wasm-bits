// JavaScript wrapper for vtkCollectionIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCollectionIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkCollectionIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCollection.h"
#include "vtkObject.h"
#include "vtkCollectionIterator.h"

template<> void emscripten::internal::raw_destructor<vtkCollectionIterator>(vtkCollectionIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollectionIterator_class) {
  emscripten::class_<vtkCollectionIterator, emscripten::base<vtkObject>>("vtkCollectionIterator")
    .smart_ptr<vtkSmartPointer<vtkCollectionIterator>>("vtkSmartPointer<vtkCollectionIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCollectionIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectionIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollectionIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollectionIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollectionIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectionIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollectionIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCollection", &vtkCollectionIterator::SetCollection, emscripten::allow_raw_pointers())
    .function("GetCollection", &vtkCollectionIterator::GetCollection, emscripten::allow_raw_pointers())
    .function("InitTraversal", &vtkCollectionIterator::InitTraversal)
    .function("GoToFirstItem", &vtkCollectionIterator::GoToFirstItem)
    .function("GoToNextItem", &vtkCollectionIterator::GoToNextItem)
    .function("IsDoneWithTraversal", &vtkCollectionIterator::IsDoneWithTraversal)
    .function("GetCurrentObject", &vtkCollectionIterator::GetCurrentObject, emscripten::allow_raw_pointers());
}

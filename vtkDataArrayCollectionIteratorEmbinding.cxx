// JavaScript wrapper for vtkDataArrayCollectionIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDataArrayCollectionIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDataArrayCollectionIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCollection.h"
#include "vtkDataArrayCollection.h"
#include "vtkDataArray.h"
#include "vtkDataArrayCollectionIterator.h"

template<> void emscripten::internal::raw_destructor<vtkDataArrayCollectionIterator>(vtkDataArrayCollectionIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataArrayCollectionIterator_class) {
  emscripten::class_<vtkDataArrayCollectionIterator, emscripten::base<vtkCollectionIterator>>("vtkDataArrayCollectionIterator")
    .smart_ptr<vtkSmartPointer<vtkDataArrayCollectionIterator>>("vtkSmartPointer<vtkDataArrayCollectionIterator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDataArrayCollectionIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArrayCollectionIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataArrayCollectionIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataArrayCollectionIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataArrayCollectionIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArrayCollectionIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataArrayCollectionIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCollection", emscripten::select_overload<void(vtkDataArrayCollectionIterator&, vtkCollection*)>([](vtkDataArrayCollectionIterator& self, vtkCollection* arg_0) -> void { return self.SetCollection( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetCollection", emscripten::select_overload<void(vtkDataArrayCollectionIterator&, vtkDataArrayCollection*)>([](vtkDataArrayCollectionIterator& self, vtkDataArrayCollection* arg_0) -> void { return self.SetCollection( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataArray", &vtkDataArrayCollectionIterator::GetDataArray, emscripten::allow_raw_pointers());
}

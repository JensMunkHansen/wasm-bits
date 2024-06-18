// JavaScript wrapper for vtkGenericPointIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkGenericPointIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkGenericPointIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericPointIterator.h"

template<> void emscripten::internal::raw_destructor<vtkGenericPointIterator>(vtkGenericPointIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericPointIterator_class) {
  emscripten::class_<vtkGenericPointIterator, emscripten::base<vtkObject>>("vtkGenericPointIterator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericPointIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericPointIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericPointIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericPointIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericPointIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericPointIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

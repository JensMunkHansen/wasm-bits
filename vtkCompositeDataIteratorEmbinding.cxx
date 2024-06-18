// JavaScript wrapper for vtkCompositeDataIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCompositeDataIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCompositeDataIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkCompositeDataIterator.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeDataIterator>(vtkCompositeDataIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeDataIterator_class) {
  emscripten::class_<vtkCompositeDataIterator, emscripten::base<vtkObject>>("vtkCompositeDataIterator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeDataIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeDataIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeDataIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeDataIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeDataIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDataSet", &vtkCompositeDataIterator::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkCompositeDataIterator::GetDataSet, emscripten::allow_raw_pointers())
    .function("InitTraversal", &vtkCompositeDataIterator::InitTraversal)
    .function("InitReverseTraversal", &vtkCompositeDataIterator::InitReverseTraversal)
    .function("SetSkipEmptyNodes", &vtkCompositeDataIterator::SetSkipEmptyNodes)
    .function("GetSkipEmptyNodes", &vtkCompositeDataIterator::GetSkipEmptyNodes)
    .function("SkipEmptyNodesOn", &vtkCompositeDataIterator::SkipEmptyNodesOn)
    .function("SkipEmptyNodesOff", &vtkCompositeDataIterator::SkipEmptyNodesOff)
    .function("GetReverse", &vtkCompositeDataIterator::GetReverse);
}

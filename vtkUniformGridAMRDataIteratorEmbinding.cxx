// JavaScript wrapper for vtkUniformGridAMRDataIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUniformGridAMRDataIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUniformGridAMRDataIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkDataObject.h"
#include "vtkUniformGridAMRDataIterator.h"

template<> void emscripten::internal::raw_destructor<vtkUniformGridAMRDataIterator>(vtkUniformGridAMRDataIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformGridAMRDataIterator_class) {
  emscripten::class_<vtkUniformGridAMRDataIterator, emscripten::base<vtkCompositeDataIterator>>("vtkUniformGridAMRDataIterator")
    .smart_ptr<vtkSmartPointer<vtkUniformGridAMRDataIterator>>("vtkSmartPointer<vtkUniformGridAMRDataIterator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUniformGridAMRDataIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridAMRDataIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformGridAMRDataIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformGridAMRDataIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformGridAMRDataIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridAMRDataIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformGridAMRDataIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCurrentMetaData", &vtkUniformGridAMRDataIterator::GetCurrentMetaData, emscripten::allow_raw_pointers())
    .function("HasCurrentMetaData", &vtkUniformGridAMRDataIterator::HasCurrentMetaData)
    .function("GetCurrentDataObject", &vtkUniformGridAMRDataIterator::GetCurrentDataObject, emscripten::allow_raw_pointers())
    .function("GetCurrentFlatIndex", &vtkUniformGridAMRDataIterator::GetCurrentFlatIndex)
    .function("GetCurrentLevel", &vtkUniformGridAMRDataIterator::GetCurrentLevel)
    .function("GetCurrentIndex", &vtkUniformGridAMRDataIterator::GetCurrentIndex)
    .function("GoToFirstItem", &vtkUniformGridAMRDataIterator::GoToFirstItem)
    .function("GoToNextItem", &vtkUniformGridAMRDataIterator::GoToNextItem)
    .function("IsDoneWithTraversal", &vtkUniformGridAMRDataIterator::IsDoneWithTraversal);
}

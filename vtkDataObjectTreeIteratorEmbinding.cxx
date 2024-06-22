// JavaScript wrapper for vtkDataObjectTreeIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataObjectTreeIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataObjectTreeIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkDataObjectTreeIterator.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectTreeIterator>(vtkDataObjectTreeIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectTreeIterator_class) {
  emscripten::class_<vtkDataObjectTreeIterator, emscripten::base<vtkCompositeDataIterator>>("vtkDataObjectTreeIterator")
    .smart_ptr<vtkSmartPointer<vtkDataObjectTreeIterator>>("vtkSmartPointer<vtkDataObjectTreeIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataObjectTreeIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTreeIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectTreeIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectTreeIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectTreeIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTreeIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectTreeIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GoToFirstItem", &vtkDataObjectTreeIterator::GoToFirstItem)
    .function("GoToNextItem", &vtkDataObjectTreeIterator::GoToNextItem)
    .function("IsDoneWithTraversal", &vtkDataObjectTreeIterator::IsDoneWithTraversal)
    .function("GetCurrentDataObject", &vtkDataObjectTreeIterator::GetCurrentDataObject, emscripten::allow_raw_pointers())
    .function("GetCurrentMetaData", &vtkDataObjectTreeIterator::GetCurrentMetaData, emscripten::allow_raw_pointers())
    .function("HasCurrentMetaData", &vtkDataObjectTreeIterator::HasCurrentMetaData)
    .function("GetCurrentFlatIndex", &vtkDataObjectTreeIterator::GetCurrentFlatIndex)
    .function("SetVisitOnlyLeaves", &vtkDataObjectTreeIterator::SetVisitOnlyLeaves)
    .function("GetVisitOnlyLeaves", &vtkDataObjectTreeIterator::GetVisitOnlyLeaves)
    .function("VisitOnlyLeavesOn", &vtkDataObjectTreeIterator::VisitOnlyLeavesOn)
    .function("VisitOnlyLeavesOff", &vtkDataObjectTreeIterator::VisitOnlyLeavesOff)
    .function("SetTraverseSubTree", &vtkDataObjectTreeIterator::SetTraverseSubTree)
    .function("GetTraverseSubTree", &vtkDataObjectTreeIterator::GetTraverseSubTree)
    .function("TraverseSubTreeOn", &vtkDataObjectTreeIterator::TraverseSubTreeOn)
    .function("TraverseSubTreeOff", &vtkDataObjectTreeIterator::TraverseSubTreeOff);
}

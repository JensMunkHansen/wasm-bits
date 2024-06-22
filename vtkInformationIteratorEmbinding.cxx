// JavaScript wrapper for vtkInformationIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationKey.h"
#include "vtkInformationIterator.h"

template<> void emscripten::internal::raw_destructor<vtkInformationIterator>(vtkInformationIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationIterator_class) {
  emscripten::class_<vtkInformationIterator, emscripten::base<vtkObject>>("vtkInformationIterator")
    .smart_ptr<vtkSmartPointer<vtkInformationIterator>>("vtkSmartPointer<vtkInformationIterator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInformationIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInformation", &vtkInformationIterator::SetInformation, emscripten::allow_raw_pointers())
    .function("GetInformation", &vtkInformationIterator::GetInformation, emscripten::allow_raw_pointers())
    .function("SetInformationWeak", &vtkInformationIterator::SetInformationWeak, emscripten::allow_raw_pointers())
    .function("InitTraversal", &vtkInformationIterator::InitTraversal)
    .function("GoToFirstItem", &vtkInformationIterator::GoToFirstItem)
    .function("GoToNextItem", &vtkInformationIterator::GoToNextItem)
    .function("IsDoneWithTraversal", &vtkInformationIterator::IsDoneWithTraversal)
    .function("GetCurrentKey", &vtkInformationIterator::GetCurrentKey, emscripten::allow_raw_pointers());
}

// JavaScript wrapper for vtkPointSetCellIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPointSetCellIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPointSetCellIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointSetCellIterator.h"

template<> void emscripten::internal::raw_destructor<vtkPointSetCellIterator>(vtkPointSetCellIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSetCellIterator_class) {
  emscripten::class_<vtkPointSetCellIterator, emscripten::base<vtkCellIterator>>("vtkPointSetCellIterator")
    .smart_ptr<vtkSmartPointer<vtkPointSetCellIterator>>("vtkSmartPointer<vtkPointSetCellIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointSetCellIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetCellIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSetCellIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSetCellIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSetCellIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetCellIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSetCellIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsDoneWithTraversal", &vtkPointSetCellIterator::IsDoneWithTraversal)
    .function("GetCellId", &vtkPointSetCellIterator::GetCellId);
}

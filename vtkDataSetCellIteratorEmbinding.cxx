// JavaScript wrapper for vtkDataSetCellIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataSetCellIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataSetCellIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetCellIterator.h"

template<> void emscripten::internal::raw_destructor<vtkDataSetCellIterator>(vtkDataSetCellIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataSetCellIterator_class) {
  emscripten::class_<vtkDataSetCellIterator, emscripten::base<vtkCellIterator>>("vtkDataSetCellIterator")
    .smart_ptr<vtkSmartPointer<vtkDataSetCellIterator>>("vtkSmartPointer<vtkDataSetCellIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataSetCellIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetCellIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataSetCellIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataSetCellIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataSetCellIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataSetCellIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataSetCellIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsDoneWithTraversal", &vtkDataSetCellIterator::IsDoneWithTraversal)
    .function("GetCellId", &vtkDataSetCellIterator::GetCellId);
}

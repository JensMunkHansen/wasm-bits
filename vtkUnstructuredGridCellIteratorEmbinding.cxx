// JavaScript wrapper for vtkUnstructuredGridCellIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUnstructuredGridCellIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUnstructuredGridCellIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridCellIterator.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridCellIterator>(vtkUnstructuredGridCellIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridCellIterator_class) {
  emscripten::class_<vtkUnstructuredGridCellIterator, emscripten::base<vtkCellIterator>>("vtkUnstructuredGridCellIterator")
    .smart_ptr<vtkSmartPointer<vtkUnstructuredGridCellIterator>>("vtkSmartPointer<vtkUnstructuredGridCellIterator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnstructuredGridCellIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridCellIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridCellIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridCellIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridCellIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridCellIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridCellIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsDoneWithTraversal", &vtkUnstructuredGridCellIterator::IsDoneWithTraversal)
    .function("GetCellId", &vtkUnstructuredGridCellIterator::GetCellId)
    .function("GoToCell", &vtkUnstructuredGridCellIterator::GoToCell);
}

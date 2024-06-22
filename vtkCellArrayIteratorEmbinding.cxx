// JavaScript wrapper for vtkCellArrayIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellArrayIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellArrayIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellArray.h"
#include "vtkIdList.h"
#include "vtkCellArrayIterator.h"

template<> void emscripten::internal::raw_destructor<vtkCellArrayIterator>(vtkCellArrayIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellArrayIterator_class) {
  emscripten::class_<vtkCellArrayIterator, emscripten::base<vtkObject>>("vtkCellArrayIterator")
    .smart_ptr<vtkSmartPointer<vtkCellArrayIterator>>("vtkSmartPointer<vtkCellArrayIterator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellArrayIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellArrayIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellArrayIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellArrayIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellArrayIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellArrayIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellArrayIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCellArray", &vtkCellArrayIterator::GetCellArray, emscripten::allow_raw_pointers())
    .function("GoToCell", &vtkCellArrayIterator::GoToCell)
    .function("GetCellAtId", emscripten::select_overload<void(vtkCellArrayIterator&, int, vtkIdList*)>([](vtkCellArrayIterator& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellAtId( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellAtId", emscripten::select_overload<vtkIdList*(vtkCellArrayIterator&, int)>([](vtkCellArrayIterator& self, int arg_0) -> vtkIdList* { return self.GetCellAtId( arg_0); }), emscripten::allow_raw_pointers())
    .function("GoToFirstCell", &vtkCellArrayIterator::GoToFirstCell)
    .function("GoToNextCell", &vtkCellArrayIterator::GoToNextCell)
    .function("IsDoneWithTraversal", &vtkCellArrayIterator::IsDoneWithTraversal)
    .function("GetCurrentCellId", &vtkCellArrayIterator::GetCurrentCellId)
    .function("GetCurrentCell", emscripten::select_overload<void(vtkCellArrayIterator&, vtkIdList*)>([](vtkCellArrayIterator& self, vtkIdList* arg_0) -> void { return self.GetCurrentCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetCurrentCell", emscripten::select_overload<vtkIdList*(vtkCellArrayIterator&)>([](vtkCellArrayIterator& self) -> vtkIdList* { return self.GetCurrentCell(); }), emscripten::allow_raw_pointers())
    .function("ReplaceCurrentCell", emscripten::select_overload<void(vtkCellArrayIterator&, vtkIdList*)>([](vtkCellArrayIterator& self, vtkIdList* arg_0) -> void { return self.ReplaceCurrentCell( arg_0); }), emscripten::allow_raw_pointers())
    .function("ReplaceCurrentCell", emscripten::select_overload<void(vtkCellArrayIterator&, int, std::uintptr_t)>([](vtkCellArrayIterator& self, int arg_0, std::uintptr_t arg_1) -> void { return self.ReplaceCurrentCell( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }))
    .function("ReverseCurrentCell", &vtkCellArrayIterator::ReverseCurrentCell);
}

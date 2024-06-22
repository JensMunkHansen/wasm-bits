// JavaScript wrapper for vtkSortDataArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkSortDataArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkSortDataArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkAbstractArray.h"
#include "vtkSortDataArray.h"

template<> void emscripten::internal::raw_destructor<vtkSortDataArray>(vtkSortDataArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSortDataArray_class) {
  emscripten::class_<vtkSortDataArray, emscripten::base<vtkObject>>("vtkSortDataArray")
    .smart_ptr<vtkSmartPointer<vtkSortDataArray>>("vtkSmartPointer<vtkSortDataArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSortDataArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSortDataArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSortDataArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSortDataArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSortDataArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSortDataArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSortDataArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Sort", emscripten::select_overload<void( vtkIdList*)>([]( vtkIdList* arg_0) -> void { return vtkSortDataArray::Sort( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkAbstractArray*)>([]( vtkAbstractArray* arg_0) -> void { return vtkSortDataArray::Sort( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkIdList*, int)>([]( vtkIdList* arg_0, int arg_1) -> void { return vtkSortDataArray::Sort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkAbstractArray*, int)>([]( vtkAbstractArray* arg_0, int arg_1) -> void { return vtkSortDataArray::Sort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkAbstractArray*, vtkAbstractArray*)>([]( vtkAbstractArray* arg_0, vtkAbstractArray* arg_1) -> void { return vtkSortDataArray::Sort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkAbstractArray*, vtkIdList*)>([]( vtkAbstractArray* arg_0, vtkIdList* arg_1) -> void { return vtkSortDataArray::Sort( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkAbstractArray*, vtkAbstractArray*, int)>([]( vtkAbstractArray* arg_0, vtkAbstractArray* arg_1, int arg_2) -> void { return vtkSortDataArray::Sort( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("Sort", emscripten::select_overload<void( vtkAbstractArray*, vtkIdList*, int)>([]( vtkAbstractArray* arg_0, vtkIdList* arg_1, int arg_2) -> void { return vtkSortDataArray::Sort( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("SortArrayByComponent", emscripten::select_overload<void( vtkAbstractArray*, int)>([]( vtkAbstractArray* arg_0, int arg_1) -> void { return vtkSortDataArray::SortArrayByComponent( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("SortArrayByComponent", emscripten::select_overload<void( vtkAbstractArray*, int, int)>([]( vtkAbstractArray* arg_0, int arg_1, int arg_2) -> void { return vtkSortDataArray::SortArrayByComponent( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("InitializeSortIndices", emscripten::optional_override([]( int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(vtkSortDataArray::InitializeSortIndices( arg_0)) / sizeof(int);}))
    .class_function("GenerateSortIndices", emscripten::optional_override([]( int arg_0, std::uintptr_t arg_1, int arg_2, int arg_3, int arg_4, std::uintptr_t arg_5) -> void {  return vtkSortDataArray::GenerateSortIndices( arg_0,reinterpret_cast<void*>(arg_1), arg_2, arg_3, arg_4,reinterpret_cast<int*>(arg_5 * sizeof(int)));}))
    .class_function("ShuffleArray", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3, vtkAbstractArray* arg_4, std::uintptr_t arg_5, int arg_6) -> void {  return vtkSortDataArray::ShuffleArray(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2, arg_3, arg_4,reinterpret_cast<void*>(arg_5), arg_6);}), emscripten::allow_raw_pointers())
    .class_function("ShuffleIdList", emscripten::optional_override([]( std::uintptr_t arg_0, int arg_1, vtkIdList* arg_2, std::uintptr_t arg_3, int arg_4) -> void {  return vtkSortDataArray::ShuffleIdList(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int)), arg_4);}), emscripten::allow_raw_pointers());
}

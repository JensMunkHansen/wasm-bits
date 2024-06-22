// JavaScript wrapper for vtkLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkLongLongArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkLongLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkLongLongArray>(vtkLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLongLongArray_class) {
  emscripten::class_<vtkLongLongArray, emscripten::base<vtkDataArray>>("vtkLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkLongLongArray>>("vtkSmartPointer<vtkLongLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkLongLongArray::GetDataType)
    .function("GetValue", &vtkLongLongArray::GetValue)
    .function("SetValue", &vtkLongLongArray::SetValue)
    .function("SetNumberOfValues", &vtkLongLongArray::SetNumberOfValues)
    .function("InsertValue", &vtkLongLongArray::InsertValue)
    .function("InsertNextValue", &vtkLongLongArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkLongLongArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(long long);}))
    .function("GetPointer", emscripten::optional_override([](vtkLongLongArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(long long);}))
    .function("SetArray", emscripten::select_overload<void(vtkLongLongArray&, std::uintptr_t, int, int)>([](vtkLongLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<long long*>(arg_0 * sizeof(long long)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkLongLongArray&, std::uintptr_t, int, int, int)>([](vtkLongLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<long long*>(arg_0 * sizeof(long long)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkLongLongArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkLongLongArray::GetDataTypeValueMax);
}

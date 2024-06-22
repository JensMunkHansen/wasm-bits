// JavaScript wrapper for vtkLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkLongArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkLongArray>(vtkLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLongArray_class) {
  emscripten::class_<vtkLongArray, emscripten::base<vtkDataArray>>("vtkLongArray")
    .smart_ptr<vtkSmartPointer<vtkLongArray>>("vtkSmartPointer<vtkLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkLongArray::GetDataType)
    .function("GetValue", &vtkLongArray::GetValue)
    .function("SetValue", &vtkLongArray::SetValue)
    .function("SetNumberOfValues", &vtkLongArray::SetNumberOfValues)
    .function("InsertValue", &vtkLongArray::InsertValue)
    .function("InsertNextValue", &vtkLongArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkLongArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(long);}))
    .function("GetPointer", emscripten::optional_override([](vtkLongArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(long);}))
    .function("SetArray", emscripten::select_overload<void(vtkLongArray&, std::uintptr_t, int, int)>([](vtkLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<long*>(arg_0 * sizeof(long)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkLongArray&, std::uintptr_t, int, int, int)>([](vtkLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<long*>(arg_0 * sizeof(long)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkLongArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkLongArray::GetDataTypeValueMax);
}
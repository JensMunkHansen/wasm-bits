// JavaScript wrapper for vtkUnsignedLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkUnsignedLongLongArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkUnsignedLongLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkUnsignedLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkUnsignedLongLongArray>(vtkUnsignedLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnsignedLongLongArray_class) {
  emscripten::class_<vtkUnsignedLongLongArray, emscripten::base<vtkDataArray>>("vtkUnsignedLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkUnsignedLongLongArray>>("vtkSmartPointer<vtkUnsignedLongLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnsignedLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnsignedLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnsignedLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkUnsignedLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkUnsignedLongLongArray::GetDataType)
    .function("GetValue", &vtkUnsignedLongLongArray::GetValue)
    .function("SetValue", &vtkUnsignedLongLongArray::SetValue)
    .function("SetNumberOfValues", &vtkUnsignedLongLongArray::SetNumberOfValues)
    .function("InsertValue", &vtkUnsignedLongLongArray::InsertValue)
    .function("InsertNextValue", &vtkUnsignedLongLongArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkUnsignedLongLongArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(unsigned long long);}))
    .function("GetPointer", emscripten::optional_override([](vtkUnsignedLongLongArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(unsigned long long);}))
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedLongLongArray&, std::uintptr_t, int, int)>([](vtkUnsignedLongLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedLongLongArray&, std::uintptr_t, int, int, int)>([](vtkUnsignedLongLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<unsigned long long*>(arg_0 * sizeof(unsigned long long)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkUnsignedLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkUnsignedLongLongArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkUnsignedLongLongArray::GetDataTypeValueMax);
}

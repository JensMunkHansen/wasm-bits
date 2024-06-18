// JavaScript wrapper for vtkUnsignedLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkUnsignedLongArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkUnsignedLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkUnsignedLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkUnsignedLongArray>(vtkUnsignedLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnsignedLongArray_class) {
  emscripten::class_<vtkUnsignedLongArray, emscripten::base<vtkDataArray>>("vtkUnsignedLongArray")
    .smart_ptr<vtkSmartPointer<vtkUnsignedLongArray>>("vtkSmartPointer<vtkUnsignedLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnsignedLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnsignedLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnsignedLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkUnsignedLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkUnsignedLongArray::GetDataType)
    .function("GetValue", &vtkUnsignedLongArray::GetValue)
    .function("SetValue", &vtkUnsignedLongArray::SetValue)
    .function("SetNumberOfValues", &vtkUnsignedLongArray::SetNumberOfValues)
    .function("InsertValue", &vtkUnsignedLongArray::InsertValue)
    .function("InsertNextValue", &vtkUnsignedLongArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkUnsignedLongArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(unsigned long);}))
    .function("GetPointer", emscripten::optional_override([](vtkUnsignedLongArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(unsigned long);}))
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedLongArray&, std::uintptr_t, int, int)>([](vtkUnsignedLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedLongArray&, std::uintptr_t, int, int, int)>([](vtkUnsignedLongArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<unsigned long*>(arg_0 * sizeof(unsigned long)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkUnsignedLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkUnsignedLongArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkUnsignedLongArray::GetDataTypeValueMax);
}

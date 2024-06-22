// JavaScript wrapper for vtkSignedCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkSignedCharArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkSignedCharArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkSignedCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkSignedCharArray>(vtkSignedCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSignedCharArray_class) {
  emscripten::class_<vtkSignedCharArray, emscripten::base<vtkDataArray>>("vtkSignedCharArray")
    .smart_ptr<vtkSmartPointer<vtkSignedCharArray>>("vtkSmartPointer<vtkSignedCharArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSignedCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSignedCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSignedCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSignedCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSignedCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSignedCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSignedCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkSignedCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkSignedCharArray::GetDataType)
    .function("GetValue", &vtkSignedCharArray::GetValue)
    .function("SetValue", &vtkSignedCharArray::SetValue)
    .function("SetNumberOfValues", &vtkSignedCharArray::SetNumberOfValues)
    .function("InsertValue", &vtkSignedCharArray::InsertValue)
    .function("InsertNextValue", &vtkSignedCharArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkSignedCharArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(signed char);}))
    .function("GetPointer", emscripten::optional_override([](vtkSignedCharArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(signed char);}))
    .function("SetArray", emscripten::select_overload<void(vtkSignedCharArray&, std::uintptr_t, int, int)>([](vtkSignedCharArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<signed char*>(arg_0 * sizeof(signed char)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkSignedCharArray&, std::uintptr_t, int, int, int)>([](vtkSignedCharArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<signed char*>(arg_0 * sizeof(signed char)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkSignedCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkSignedCharArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkSignedCharArray::GetDataTypeValueMax);
}

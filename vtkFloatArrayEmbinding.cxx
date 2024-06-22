// JavaScript wrapper for vtkFloatArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkFloatArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkFloatArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkFloatArray.h"

template<> void emscripten::internal::raw_destructor<vtkFloatArray>(vtkFloatArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFloatArray_class) {
  emscripten::class_<vtkFloatArray, emscripten::base<vtkDataArray>>("vtkFloatArray")
    .smart_ptr<vtkSmartPointer<vtkFloatArray>>("vtkSmartPointer<vtkFloatArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFloatArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFloatArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFloatArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFloatArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFloatArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFloatArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFloatArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkFloatArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkFloatArray::GetDataType)
    .function("GetValue", &vtkFloatArray::GetValue)
    .function("SetValue", &vtkFloatArray::SetValue)
    .function("SetNumberOfValues", &vtkFloatArray::SetNumberOfValues)
    .function("InsertValue", &vtkFloatArray::InsertValue)
    .function("InsertNextValue", &vtkFloatArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkFloatArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(float);}))
    .function("GetPointer", emscripten::optional_override([](vtkFloatArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(float);}))
    .function("SetArray", emscripten::select_overload<void(vtkFloatArray&, std::uintptr_t, int, int)>([](vtkFloatArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkFloatArray&, std::uintptr_t, int, int, int)>([](vtkFloatArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkFloatArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkFloatArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkFloatArray::GetDataTypeValueMax);
}

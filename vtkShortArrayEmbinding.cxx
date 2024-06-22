// JavaScript wrapper for vtkShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkShortArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkShortArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkShortArray>(vtkShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkShortArray_class) {
  emscripten::class_<vtkShortArray, emscripten::base<vtkDataArray>>("vtkShortArray")
    .smart_ptr<vtkSmartPointer<vtkShortArray>>("vtkSmartPointer<vtkShortArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkShortArray::GetDataType)
    .function("GetValue", &vtkShortArray::GetValue)
    .function("SetValue", &vtkShortArray::SetValue)
    .function("SetNumberOfValues", &vtkShortArray::SetNumberOfValues)
    .function("InsertValue", &vtkShortArray::InsertValue)
    .function("InsertNextValue", &vtkShortArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkShortArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(short);}))
    .function("GetPointer", emscripten::optional_override([](vtkShortArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(short);}))
    .function("SetArray", emscripten::select_overload<void(vtkShortArray&, std::uintptr_t, int, int)>([](vtkShortArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<short*>(arg_0 * sizeof(short)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkShortArray&, std::uintptr_t, int, int, int)>([](vtkShortArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<short*>(arg_0 * sizeof(short)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkShortArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkShortArray::GetDataTypeValueMax);
}

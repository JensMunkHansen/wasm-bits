// JavaScript wrapper for vtkIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkIntArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkIntArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkIntArray>(vtkIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIntArray_class) {
  emscripten::class_<vtkIntArray, emscripten::base<vtkDataArray>>("vtkIntArray")
    .smart_ptr<vtkSmartPointer<vtkIntArray>>("vtkSmartPointer<vtkIntArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkIntArray::GetDataType)
    .function("GetValue", &vtkIntArray::GetValue)
    .function("SetValue", &vtkIntArray::SetValue)
    .function("SetNumberOfValues", &vtkIntArray::SetNumberOfValues)
    .function("InsertValue", &vtkIntArray::InsertValue)
    .function("InsertNextValue", &vtkIntArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkIntArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(int);}))
    .function("GetPointer", emscripten::optional_override([](vtkIntArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(int);}))
    .function("SetArray", emscripten::select_overload<void(vtkIntArray&, std::uintptr_t, int, int)>([](vtkIntArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkIntArray&, std::uintptr_t, int, int, int)>([](vtkIntArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkIntArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkIntArray::GetDataTypeValueMax);
}

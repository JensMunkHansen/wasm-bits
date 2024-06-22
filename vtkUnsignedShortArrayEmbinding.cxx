// JavaScript wrapper for vtkUnsignedShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkUnsignedShortArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkUnsignedShortArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkUnsignedShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkUnsignedShortArray>(vtkUnsignedShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnsignedShortArray_class) {
  emscripten::class_<vtkUnsignedShortArray, emscripten::base<vtkDataArray>>("vtkUnsignedShortArray")
    .smart_ptr<vtkSmartPointer<vtkUnsignedShortArray>>("vtkSmartPointer<vtkUnsignedShortArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUnsignedShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnsignedShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnsignedShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkUnsignedShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkUnsignedShortArray::GetDataType)
    .function("GetValue", &vtkUnsignedShortArray::GetValue)
    .function("SetValue", &vtkUnsignedShortArray::SetValue)
    .function("SetNumberOfValues", &vtkUnsignedShortArray::SetNumberOfValues)
    .function("InsertValue", &vtkUnsignedShortArray::InsertValue)
    .function("InsertNextValue", &vtkUnsignedShortArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkUnsignedShortArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(unsigned short);}))
    .function("GetPointer", emscripten::optional_override([](vtkUnsignedShortArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(unsigned short);}))
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedShortArray&, std::uintptr_t, int, int)>([](vtkUnsignedShortArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedShortArray&, std::uintptr_t, int, int, int)>([](vtkUnsignedShortArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<unsigned short*>(arg_0 * sizeof(unsigned short)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkUnsignedShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkUnsignedShortArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkUnsignedShortArray::GetDataTypeValueMax);
}

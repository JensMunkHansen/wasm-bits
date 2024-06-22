// JavaScript wrapper for vtkUnsignedIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkUnsignedIntArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkUnsignedIntArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkUnsignedIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkUnsignedIntArray>(vtkUnsignedIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnsignedIntArray_class) {
  emscripten::class_<vtkUnsignedIntArray, emscripten::base<vtkDataArray>>("vtkUnsignedIntArray")
    .smart_ptr<vtkSmartPointer<vtkUnsignedIntArray>>("vtkSmartPointer<vtkUnsignedIntArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUnsignedIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnsignedIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnsignedIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnsignedIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkUnsignedIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkUnsignedIntArray::GetDataType)
    .function("GetValue", &vtkUnsignedIntArray::GetValue)
    .function("SetValue", &vtkUnsignedIntArray::SetValue)
    .function("SetNumberOfValues", &vtkUnsignedIntArray::SetNumberOfValues)
    .function("InsertValue", &vtkUnsignedIntArray::InsertValue)
    .function("InsertNextValue", &vtkUnsignedIntArray::InsertNextValue)
    .function("WritePointer", emscripten::optional_override([](vtkUnsignedIntArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(unsigned int);}))
    .function("GetPointer", emscripten::optional_override([](vtkUnsignedIntArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(unsigned int);}))
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedIntArray&, std::uintptr_t, int, int)>([](vtkUnsignedIntArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetArray(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int)), arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetArray", emscripten::select_overload<void(vtkUnsignedIntArray&, std::uintptr_t, int, int, int)>([](vtkUnsignedIntArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetArray(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int)), arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("FastDownCast", &vtkUnsignedIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .class_function("GetDataTypeValueMin", &vtkUnsignedIntArray::GetDataTypeValueMin)
    .class_function("GetDataTypeValueMax", &vtkUnsignedIntArray::GetDataTypeValueMax);
}

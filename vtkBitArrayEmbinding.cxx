// JavaScript wrapper for vtkBitArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkBitArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkBitArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkArrayIterator.h"
#include "vtkBitArray.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkBitArray_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBitArray>(vtkBitArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBitArray_class) {
  using DeleteMethod=vtkBitArray::DeleteMethod;
  emscripten::class_<vtkBitArray, emscripten::base<vtkDataArray>>("vtkBitArray")
    .smart_ptr<vtkSmartPointer<vtkBitArray>>("vtkSmartPointer<vtkBitArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBitArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBitArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBitArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBitArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBitArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBitArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBitArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Allocate", &vtkBitArray::Allocate)
    .function("Initialize", &vtkBitArray::Initialize)
    .function("GetDataType", &vtkBitArray::GetDataType)
    .function("GetDataTypeSize", &vtkBitArray::GetDataTypeSize)
    .function("SetNumberOfTuples", &vtkBitArray::SetNumberOfTuples)
    .function("SetNumberOfValues", &vtkBitArray::SetNumberOfValues)
    .function("SetTuple", emscripten::select_overload<void(vtkBitArray&, int, int, vtkAbstractArray*)>([](vtkBitArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2) -> void { return self.SetTuple( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertTuple", emscripten::select_overload<void(vtkBitArray&, int, int, vtkAbstractArray*)>([](vtkBitArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2) -> void { return self.InsertTuple( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertTuples", emscripten::select_overload<void(vtkBitArray&, vtkIdList*, vtkIdList*, vtkAbstractArray*)>([](vtkBitArray& self, vtkIdList* arg_0, vtkIdList* arg_1, vtkAbstractArray* arg_2) -> void { return self.InsertTuples( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertTuples", emscripten::select_overload<void(vtkBitArray&, int, int, int, vtkAbstractArray*)>([](vtkBitArray& self, int arg_0, int arg_1, int arg_2, vtkAbstractArray* arg_3) -> void { return self.InsertTuples( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("InsertTuplesStartingAt", &vtkBitArray::InsertTuplesStartingAt, emscripten::allow_raw_pointers())
    .function("InsertNextTuple", emscripten::select_overload<int(vtkBitArray&, int, vtkAbstractArray*)>([](vtkBitArray& self, int arg_0, vtkAbstractArray* arg_1) -> int { return self.InsertNextTuple( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveTuple", &vtkBitArray::RemoveTuple)
    .function("RemoveFirstTuple", &vtkBitArray::RemoveFirstTuple)
    .function("RemoveLastTuple", &vtkBitArray::RemoveLastTuple)
    .function("SetComponent", &vtkBitArray::SetComponent)
    .function("Squeeze", &vtkBitArray::Squeeze)
    .function("Resize", &vtkBitArray::Resize)
    .function("GetValue", &vtkBitArray::GetValue)
    .function("SetValue", &vtkBitArray::SetValue)
    .function("InsertValue", &vtkBitArray::InsertValue)
    .function("SetVariantValue", &vtkBitArray::SetVariantValue)
    .function("InsertVariantValue", &vtkBitArray::InsertVariantValue)
    .function("InsertNextValue", &vtkBitArray::InsertNextValue)
    .function("InsertComponent", &vtkBitArray::InsertComponent)
    .function("GetPointer", emscripten::optional_override([](vtkBitArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointer( arg_0)) / sizeof(unsigned char);}))
    .function("WritePointer", emscripten::optional_override([](vtkBitArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WritePointer( arg_0, arg_1)) / sizeof(unsigned char);}))
    .function("WriteVoidPointer", emscripten::optional_override([](vtkBitArray& self, int arg_0, int arg_1) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.WriteVoidPointer( arg_0, arg_1));}))
    .function("GetVoidPointer", emscripten::optional_override([](vtkBitArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetVoidPointer( arg_0));}))
    .function("DeepCopy", emscripten::select_overload<void(vtkBitArray&, vtkDataArray*)>([](vtkBitArray& self, vtkDataArray* arg_0) -> void { return self.DeepCopy( arg_0); }), emscripten::allow_raw_pointers())
    .function("DeepCopy", emscripten::select_overload<void(vtkBitArray&, vtkAbstractArray*)>([](vtkBitArray& self, vtkAbstractArray* arg_0) -> void { return self.DeepCopy( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetVoidArray", emscripten::select_overload<void(vtkBitArray&, std::uintptr_t, int, int)>([](vtkBitArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetVoidArray(reinterpret_cast<void*>(arg_0), arg_1, arg_2); }))
    .function("SetVoidArray", emscripten::select_overload<void(vtkBitArray&, std::uintptr_t, int, int, int)>([](vtkBitArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetVoidArray(reinterpret_cast<void*>(arg_0), arg_1, arg_2, arg_3); }))
    .function("SetArrayFreeFunction", emscripten::optional_override([](vtkBitArray& self, emscripten::val arg_0) -> void {  return self.SetArrayFreeFunction( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("NewIterator", &vtkBitArray::NewIterator, emscripten::allow_raw_pointers())
    .function("LookupValue", emscripten::select_overload<int(vtkBitArray&, vtkVariant)>([](vtkBitArray& self, vtkVariant arg_0) -> int { return self.LookupValue( arg_0); }))
    .function("LookupValue", emscripten::select_overload<int(vtkBitArray&, int)>([](vtkBitArray& self, int arg_0) -> int { return self.LookupValue( arg_0); }))
    .function("LookupValue", emscripten::select_overload<void(vtkBitArray&, vtkVariant, vtkIdList*)>([](vtkBitArray& self, vtkVariant arg_0, vtkIdList* arg_1) -> void { return self.LookupValue( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("LookupValue", emscripten::select_overload<void(vtkBitArray&, int, vtkIdList*)>([](vtkBitArray& self, int arg_0, vtkIdList* arg_1) -> void { return self.LookupValue( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DataChanged", &vtkBitArray::DataChanged)
    .function("ClearLookup", &vtkBitArray::ClearLookup);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkBitArray_0_2_constants) {
    typedef vtkBitArray::DeleteMethod cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkBitArray_DeleteMethod_VTK_DATA_ARRAY_FREE", vtkBitArray::VTK_DATA_ARRAY_FREE },
      { "vtkBitArray_DeleteMethod_VTK_DATA_ARRAY_DELETE", vtkBitArray::VTK_DATA_ARRAY_DELETE },
      { "vtkBitArray_DeleteMethod_VTK_DATA_ARRAY_ALIGNED_FREE", vtkBitArray::VTK_DATA_ARRAY_ALIGNED_FREE },
      { "vtkBitArray_DeleteMethod_VTK_DATA_ARRAY_USER_DEFINED", vtkBitArray::VTK_DATA_ARRAY_USER_DEFINED },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

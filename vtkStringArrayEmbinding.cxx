// JavaScript wrapper for vtkStringArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkStringArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkStringArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkIdList.h"
#include "vtkStdString.h"
#include "vtkArrayIterator.h"
#include "vtkStringArray.h"

EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkStringArray_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkStringArray>(vtkStringArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStringArray_class) {
  using DeleteMethod=vtkStringArray::DeleteMethod;
  emscripten::class_<vtkStringArray, emscripten::base<vtkAbstractArray>>("vtkStringArray")
    .smart_ptr<vtkSmartPointer<vtkStringArray>>("vtkSmartPointer<vtkStringArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStringArray>)
    .class_function("ExtendedNew", &vtkStringArray::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStringArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStringArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStringArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStringArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStringArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataType", &vtkStringArray::GetDataType)
    .function("IsNumeric", &vtkStringArray::IsNumeric)
    .function("Initialize", &vtkStringArray::Initialize)
    .function("GetDataTypeSize", &vtkStringArray::GetDataTypeSize)
    .function("Squeeze", &vtkStringArray::Squeeze)
    .function("Resize", &vtkStringArray::Resize)
    .function("SetTuple", &vtkStringArray::SetTuple, emscripten::allow_raw_pointers())
    .function("InsertTuple", &vtkStringArray::InsertTuple, emscripten::allow_raw_pointers())
    .function("InsertTuples", emscripten::select_overload<void(vtkStringArray&, vtkIdList*, vtkIdList*, vtkAbstractArray*)>([](vtkStringArray& self, vtkIdList* arg_0, vtkIdList* arg_1, vtkAbstractArray* arg_2) -> void { return self.InsertTuples( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertTuples", emscripten::select_overload<void(vtkStringArray&, int, int, int, vtkAbstractArray*)>([](vtkStringArray& self, int arg_0, int arg_1, int arg_2, vtkAbstractArray* arg_3) -> void { return self.InsertTuples( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("InsertTuplesStartingAt", &vtkStringArray::InsertTuplesStartingAt, emscripten::allow_raw_pointers())
    .function("InsertNextTuple", &vtkStringArray::InsertNextTuple, emscripten::allow_raw_pointers())
    .function("InterpolateTuple", emscripten::select_overload<void(vtkStringArray&, int, vtkIdList*, vtkAbstractArray*, std::uintptr_t)>([](vtkStringArray& self, int arg_0, vtkIdList* arg_1, vtkAbstractArray* arg_2, std::uintptr_t arg_3) -> void { return self.InterpolateTuple( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("InterpolateTuple", emscripten::select_overload<void(vtkStringArray&, int, int, vtkAbstractArray*, int, vtkAbstractArray*, double)>([](vtkStringArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2, int arg_3, vtkAbstractArray* arg_4, double arg_5) -> void { return self.InterpolateTuple( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("GetTuples", emscripten::select_overload<void(vtkStringArray&, vtkIdList*, vtkAbstractArray*)>([](vtkStringArray& self, vtkIdList* arg_0, vtkAbstractArray* arg_1) -> void { return self.GetTuples( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetTuples", emscripten::select_overload<void(vtkStringArray&, int, int, vtkAbstractArray*)>([](vtkStringArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2) -> void { return self.GetTuples( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Allocate", &vtkStringArray::Allocate)
    .function("GetValue", emscripten::select_overload<vtkStdString(vtkStringArray&, int)>([](vtkStringArray& self, int arg_0) -> vtkStdString { return self.GetValue( arg_0); }))
    .function("SetValue", emscripten::select_overload<void(vtkStringArray&, int, vtkStdString)>([](vtkStringArray& self, int arg_0, vtkStdString arg_1) -> void { return self.SetValue( arg_0, arg_1); }))
    .function("SetValue", emscripten::select_overload<void(vtkStringArray&, int, const std::string &)>([](vtkStringArray& self, int arg_0, const std::string & arg_1) -> void { return self.SetValue( arg_0, arg_1.c_str()); }))
    .function("SetNumberOfTuples", &vtkStringArray::SetNumberOfTuples)
    .function("GetNumberOfValues", &vtkStringArray::GetNumberOfValues)
    .function("GetNumberOfElementComponents", &vtkStringArray::GetNumberOfElementComponents)
    .function("GetElementComponentSize", &vtkStringArray::GetElementComponentSize)
    .function("InsertValue", emscripten::select_overload<void(vtkStringArray&, int, vtkStdString)>([](vtkStringArray& self, int arg_0, vtkStdString arg_1) -> void { return self.InsertValue( arg_0, arg_1); }))
    .function("InsertValue", emscripten::select_overload<void(vtkStringArray&, int, const std::string &)>([](vtkStringArray& self, int arg_0, const std::string & arg_1) -> void { return self.InsertValue( arg_0, arg_1.c_str()); }))
    .function("SetVariantValue", &vtkStringArray::SetVariantValue)
    .function("InsertVariantValue", &vtkStringArray::InsertVariantValue)
    .function("InsertNextValue", emscripten::select_overload<int(vtkStringArray&, vtkStdString)>([](vtkStringArray& self, vtkStdString arg_0) -> int { return self.InsertNextValue( arg_0); }))
    .function("InsertNextValue", emscripten::select_overload<int(vtkStringArray&, const std::string &)>([](vtkStringArray& self, const std::string & arg_0) -> int { return self.InsertNextValue( arg_0.c_str()); }))
    .function("GetVoidPointer", emscripten::optional_override([](vtkStringArray& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetVoidPointer( arg_0));}))
    .function("DeepCopy", &vtkStringArray::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetVoidArray", emscripten::select_overload<void(vtkStringArray&, std::uintptr_t, int, int)>([](vtkStringArray& self, std::uintptr_t arg_0, int arg_1, int arg_2) -> void { return self.SetVoidArray(reinterpret_cast<void*>(arg_0), arg_1, arg_2); }))
    .function("SetVoidArray", emscripten::select_overload<void(vtkStringArray&, std::uintptr_t, int, int, int)>([](vtkStringArray& self, std::uintptr_t arg_0, int arg_1, int arg_2, int arg_3) -> void { return self.SetVoidArray(reinterpret_cast<void*>(arg_0), arg_1, arg_2, arg_3); }))
    .function("SetArrayFreeFunction", emscripten::optional_override([](vtkStringArray& self, emscripten::val arg_0) -> void {  return self.SetArrayFreeFunction( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("GetActualMemorySize", &vtkStringArray::GetActualMemorySize)
    .function("NewIterator", &vtkStringArray::NewIterator, emscripten::allow_raw_pointers())
    .function("GetDataSize", &vtkStringArray::GetDataSize)
    .function("LookupValue", emscripten::select_overload<int(vtkStringArray&, vtkVariant)>([](vtkStringArray& self, vtkVariant arg_0) -> int { return self.LookupValue( arg_0); }))
    .function("LookupValue", emscripten::select_overload<int(vtkStringArray&, const vtkStdString&)>([](vtkStringArray& self, const vtkStdString& arg_0) -> int { return self.LookupValue( arg_0); }))
    .function("LookupValue", emscripten::select_overload<int(vtkStringArray&, const std::string &)>([](vtkStringArray& self, const std::string & arg_0) -> int { return self.LookupValue( arg_0.c_str()); }))
    .function("LookupValue", emscripten::select_overload<void(vtkStringArray&, vtkVariant, vtkIdList*)>([](vtkStringArray& self, vtkVariant arg_0, vtkIdList* arg_1) -> void { return self.LookupValue( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("LookupValue", emscripten::select_overload<void(vtkStringArray&, const vtkStdString&, vtkIdList*)>([](vtkStringArray& self, const vtkStdString& arg_0, vtkIdList* arg_1) -> void { return self.LookupValue( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("LookupValue", emscripten::select_overload<void(vtkStringArray&, const std::string &, vtkIdList*)>([](vtkStringArray& self, const std::string & arg_0, vtkIdList* arg_1) -> void { return self.LookupValue( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("DataChanged", &vtkStringArray::DataChanged)
    .function("DataElementChanged", &vtkStringArray::DataElementChanged)
    .function("ClearLookup", &vtkStringArray::ClearLookup);
}
EMSCRIPTEN_BINDINGS(vtkCommonCore_vtkStringArray_0_2_constants) {
    typedef vtkStringArray::DeleteMethod cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkStringArray_DeleteMethod_VTK_DATA_ARRAY_FREE", vtkStringArray::VTK_DATA_ARRAY_FREE },
      { "vtkStringArray_DeleteMethod_VTK_DATA_ARRAY_DELETE", vtkStringArray::VTK_DATA_ARRAY_DELETE },
      { "vtkStringArray_DeleteMethod_VTK_DATA_ARRAY_ALIGNED_FREE", vtkStringArray::VTK_DATA_ARRAY_ALIGNED_FREE },
      { "vtkStringArray_DeleteMethod_VTK_DATA_ARRAY_USER_DEFINED", vtkStringArray::VTK_DATA_ARRAY_USER_DEFINED },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

// JavaScript wrapper for vtkFieldData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkFieldDataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkFieldData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkUnsignedCharArray.h"
#include "vtkFieldData.h"

template<> void emscripten::internal::raw_destructor<vtkFieldData>(vtkFieldData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFieldData_class) {
  emscripten::class_<vtkFieldData, emscripten::base<vtkObject>>("vtkFieldData")
    .smart_ptr<vtkSmartPointer<vtkFieldData>>("vtkSmartPointer<vtkFieldData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFieldData>)
    .class_function("ExtendedNew", &vtkFieldData::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFieldData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFieldData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFieldData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFieldData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFieldData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFieldData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkFieldData::Initialize)
    .function("Allocate", &vtkFieldData::Allocate)
    .function("CopyStructure", &vtkFieldData::CopyStructure, emscripten::allow_raw_pointers())
    .function("AllocateArrays", &vtkFieldData::AllocateArrays)
    .function("GetNumberOfArrays", &vtkFieldData::GetNumberOfArrays)
    .function("AddArray", &vtkFieldData::AddArray, emscripten::allow_raw_pointers())
    .function("NullData", &vtkFieldData::NullData)
    .function("RemoveArray", emscripten::select_overload<void(vtkFieldData&, const std::string &)>([](vtkFieldData& self, const std::string & arg_0) -> void { return self.RemoveArray( arg_0.c_str()); }))
    .function("RemoveArray", emscripten::select_overload<void(vtkFieldData&, int)>([](vtkFieldData& self, int arg_0) -> void { return self.RemoveArray( arg_0); }))
    .function("GetArray", emscripten::select_overload<vtkDataArray*(vtkFieldData&, int)>([](vtkFieldData& self, int arg_0) -> vtkDataArray* { return self.GetArray( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetArray", emscripten::select_overload<vtkDataArray*(vtkFieldData&, const std::string &)>([](vtkFieldData& self, const std::string & arg_0) -> vtkDataArray* { return self.GetArray( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("GetAbstractArray", emscripten::select_overload<vtkAbstractArray*(vtkFieldData&, int)>([](vtkFieldData& self, int arg_0) -> vtkAbstractArray* { return self.GetAbstractArray( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetAbstractArray", emscripten::select_overload<vtkAbstractArray*(vtkFieldData&, const std::string &)>([](vtkFieldData& self, const std::string & arg_0) -> vtkAbstractArray* { return self.GetAbstractArray( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .function("HasArray", emscripten::optional_override([](vtkFieldData& self, const std::string & arg_0) -> int {  return self.HasArray( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkFieldData& self, int arg_0) -> std::string {  return self.GetArrayName( arg_0);}))
    .function("PassData", &vtkFieldData::PassData, emscripten::allow_raw_pointers())
    .function("CopyFieldOn", emscripten::optional_override([](vtkFieldData& self, const std::string & arg_0) -> void {  return self.CopyFieldOn( arg_0.c_str());}))
    .function("CopyFieldOff", emscripten::optional_override([](vtkFieldData& self, const std::string & arg_0) -> void {  return self.CopyFieldOff( arg_0.c_str());}))
    .function("CopyAllOn", &vtkFieldData::CopyAllOn)
    .function("CopyAllOff", &vtkFieldData::CopyAllOff)
    .function("DeepCopy", &vtkFieldData::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkFieldData::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Squeeze", &vtkFieldData::Squeeze)
    .function("Reset", &vtkFieldData::Reset)
    .function("GetActualMemorySize", &vtkFieldData::GetActualMemorySize)
    .function("GetMTime", &vtkFieldData::GetMTime)
    .function("GetField", &vtkFieldData::GetField, emscripten::allow_raw_pointers())
    .function("GetNumberOfComponents", &vtkFieldData::GetNumberOfComponents)
    .function("GetNumberOfTuples", &vtkFieldData::GetNumberOfTuples)
    .function("SetNumberOfTuples", &vtkFieldData::SetNumberOfTuples)
    .function("SetTuple", &vtkFieldData::SetTuple, emscripten::allow_raw_pointers())
    .function("InsertTuple", &vtkFieldData::InsertTuple, emscripten::allow_raw_pointers())
    .function("InsertNextTuple", &vtkFieldData::InsertNextTuple, emscripten::allow_raw_pointers())
    .function("GetGhostsToSkip", &vtkFieldData::GetGhostsToSkip)
    .function("SetGhostsToSkip", &vtkFieldData::SetGhostsToSkip)
    .function("HasAnyGhostBitSet", &vtkFieldData::HasAnyGhostBitSet)
    .function("GetGhostArray", &vtkFieldData::GetGhostArray, emscripten::allow_raw_pointers());
}

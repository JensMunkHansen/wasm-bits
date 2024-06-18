// JavaScript wrapper for vtkDataArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkDataArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkDataArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkLookupTable.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationStringKey.h"
#include "vtkInformation.h"
#include "vtkDataArray.h"

template<> void emscripten::internal::raw_destructor<vtkDataArray>(vtkDataArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataArray_class) {
  emscripten::class_<vtkDataArray, emscripten::base<vtkAbstractArray>>("vtkDataArray")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FastDownCast", &vtkDataArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("IsNumeric", &vtkDataArray::IsNumeric)
    .function("GetElementComponentSize", &vtkDataArray::GetElementComponentSize)
    .function("InsertTuple", emscripten::select_overload<void(vtkDataArray&, int, int, vtkAbstractArray*)>([](vtkDataArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2) -> void { return self.InsertTuple( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertNextTuple", emscripten::select_overload<int(vtkDataArray&, int, vtkAbstractArray*)>([](vtkDataArray& self, int arg_0, vtkAbstractArray* arg_1) -> int { return self.InsertNextTuple( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("InsertTuples", emscripten::select_overload<void(vtkDataArray&, vtkIdList*, vtkIdList*, vtkAbstractArray*)>([](vtkDataArray& self, vtkIdList* arg_0, vtkIdList* arg_1, vtkAbstractArray* arg_2) -> void { return self.InsertTuples( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InsertTuples", emscripten::select_overload<void(vtkDataArray&, int, int, int, vtkAbstractArray*)>([](vtkDataArray& self, int arg_0, int arg_1, int arg_2, vtkAbstractArray* arg_3) -> void { return self.InsertTuples( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("InsertTuplesStartingAt", &vtkDataArray::InsertTuplesStartingAt, emscripten::allow_raw_pointers())
    .function("SetTuple", emscripten::select_overload<void(vtkDataArray&, int, int, vtkAbstractArray*)>([](vtkDataArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2) -> void { return self.SetTuple( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("GetTuples", emscripten::select_overload<void(vtkDataArray&, vtkIdList*, vtkAbstractArray*)>([](vtkDataArray& self, vtkIdList* arg_0, vtkAbstractArray* arg_1) -> void { return self.GetTuples( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetTuples", emscripten::select_overload<void(vtkDataArray&, int, int, vtkAbstractArray*)>([](vtkDataArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2) -> void { return self.GetTuples( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("InterpolateTuple", emscripten::select_overload<void(vtkDataArray&, int, vtkIdList*, vtkAbstractArray*, std::uintptr_t)>([](vtkDataArray& self, int arg_0, vtkIdList* arg_1, vtkAbstractArray* arg_2, std::uintptr_t arg_3) -> void { return self.InterpolateTuple( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double))); }), emscripten::allow_raw_pointers())
    .function("InterpolateTuple", emscripten::select_overload<void(vtkDataArray&, int, int, vtkAbstractArray*, int, vtkAbstractArray*, double)>([](vtkDataArray& self, int arg_0, int arg_1, vtkAbstractArray* arg_2, int arg_3, vtkAbstractArray* arg_4, double arg_5) -> void { return self.InterpolateTuple( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }), emscripten::allow_raw_pointers())
    .function("GetIntegerTuple", emscripten::optional_override([](vtkDataArray& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetIntegerTuple( arg_0,reinterpret_cast<long long*>(arg_1 * sizeof(long long)));}))
    .function("SetIntegerTuple", emscripten::optional_override([](vtkDataArray& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetIntegerTuple( arg_0,reinterpret_cast<long long*>(arg_1 * sizeof(long long)));}))
    .function("GetUnsignedTuple", emscripten::optional_override([](vtkDataArray& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetUnsignedTuple( arg_0,reinterpret_cast<unsigned long long*>(arg_1 * sizeof(unsigned long long)));}))
    .function("SetUnsignedTuple", emscripten::optional_override([](vtkDataArray& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetUnsignedTuple( arg_0,reinterpret_cast<unsigned long long*>(arg_1 * sizeof(unsigned long long)));}))
    .function("GetTuple1", &vtkDataArray::GetTuple1)
    .function("SetTuple1", &vtkDataArray::SetTuple1)
    .function("SetTuple2", &vtkDataArray::SetTuple2)
    .function("SetTuple3", &vtkDataArray::SetTuple3)
    .function("SetTuple4", &vtkDataArray::SetTuple4)
    .function("SetTuple6", &vtkDataArray::SetTuple6)
    .function("SetTuple9", &vtkDataArray::SetTuple9)
    .function("InsertTuple1", &vtkDataArray::InsertTuple1)
    .function("InsertTuple2", &vtkDataArray::InsertTuple2)
    .function("InsertTuple3", &vtkDataArray::InsertTuple3)
    .function("InsertTuple4", &vtkDataArray::InsertTuple4)
    .function("InsertTuple6", &vtkDataArray::InsertTuple6)
    .function("InsertTuple9", &vtkDataArray::InsertTuple9)
    .function("InsertNextTuple1", &vtkDataArray::InsertNextTuple1)
    .function("InsertNextTuple2", &vtkDataArray::InsertNextTuple2)
    .function("InsertNextTuple3", &vtkDataArray::InsertNextTuple3)
    .function("InsertNextTuple4", &vtkDataArray::InsertNextTuple4)
    .function("InsertNextTuple6", &vtkDataArray::InsertNextTuple6)
    .function("InsertNextTuple9", &vtkDataArray::InsertNextTuple9)
    .function("RemoveFirstTuple", &vtkDataArray::RemoveFirstTuple)
    .function("RemoveLastTuple", &vtkDataArray::RemoveLastTuple)
    .function("GetComponent", &vtkDataArray::GetComponent)
    .function("SetComponent", &vtkDataArray::SetComponent)
    .function("InsertComponent", &vtkDataArray::InsertComponent)
    .function("GetData", &vtkDataArray::GetData, emscripten::allow_raw_pointers())
    .function("DeepCopy", emscripten::select_overload<void(vtkDataArray&, vtkAbstractArray*)>([](vtkDataArray& self, vtkAbstractArray* arg_0) -> void { return self.DeepCopy( arg_0); }), emscripten::allow_raw_pointers())
    .function("DeepCopy", emscripten::select_overload<void(vtkDataArray&, vtkDataArray*)>([](vtkDataArray& self, vtkDataArray* arg_0) -> void { return self.DeepCopy( arg_0); }), emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkDataArray::ShallowCopy, emscripten::allow_raw_pointers())
    .function("FillComponent", &vtkDataArray::FillComponent)
    .function("Fill", &vtkDataArray::Fill)
    .function("CopyComponent", &vtkDataArray::CopyComponent, emscripten::allow_raw_pointers())
    .function("GetActualMemorySize", &vtkDataArray::GetActualMemorySize)
    .function("CreateDefaultLookupTable", &vtkDataArray::CreateDefaultLookupTable)
    .function("SetLookupTable", &vtkDataArray::SetLookupTable, emscripten::allow_raw_pointers())
    .function("GetLookupTable", &vtkDataArray::GetLookupTable, emscripten::allow_raw_pointers())
    .function("GetDataTypeMin", emscripten::select_overload<double(vtkDataArray&)>([](vtkDataArray& self) -> double { return self.GetDataTypeMin(); }))
    .class_function("GetDataTypeMin", emscripten::select_overload<double( int)>([]( int arg_0) -> double { return vtkDataArray::GetDataTypeMin( arg_0); }))
    .function("GetDataTypeMax", emscripten::select_overload<double(vtkDataArray&)>([](vtkDataArray& self) -> double { return self.GetDataTypeMax(); }))
    .class_function("GetDataTypeMax", emscripten::select_overload<double( int)>([]( int arg_0) -> double { return vtkDataArray::GetDataTypeMax( arg_0); }))
    .function("GetMaxNorm", &vtkDataArray::GetMaxNorm)
    .class_function("CreateDataArray", &vtkDataArray::CreateDataArray, emscripten::allow_raw_pointers())
    .class_function("COMPONENT_RANGE", &vtkDataArray::COMPONENT_RANGE, emscripten::allow_raw_pointers())
    .class_function("L2_NORM_RANGE", &vtkDataArray::L2_NORM_RANGE, emscripten::allow_raw_pointers())
    .class_function("L2_NORM_FINITE_RANGE", &vtkDataArray::L2_NORM_FINITE_RANGE, emscripten::allow_raw_pointers())
    .function("Modified", &vtkDataArray::Modified)
    .class_function("UNITS_LABEL", &vtkDataArray::UNITS_LABEL, emscripten::allow_raw_pointers())
    .function("CopyInformation", &vtkDataArray::CopyInformation, emscripten::allow_raw_pointers())
    .function("GetArrayType", &vtkDataArray::GetArrayType);
}

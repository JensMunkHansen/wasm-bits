// JavaScript wrapper for vtkTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkTableEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSetAttributes.h"
#include "vtkVariantArray.h"
#include "vtkAbstractArray.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"
#include "vtkFieldData.h"
#include "vtkTable.h"

template<> void emscripten::internal::raw_destructor<vtkTable>(vtkTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTable_class) {
  emscripten::class_<vtkTable, emscripten::base<vtkDataObject>>("vtkTable")
    .smart_ptr<vtkSmartPointer<vtkTable>>("vtkSmartPointer<vtkTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTable>)
    .class_function("ExtendedNew", &vtkTable::ExtendedNew, emscripten::allow_raw_pointers())
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Dump", &vtkTable::Dump)
    .function("GetDataObjectType", &vtkTable::GetDataObjectType)
    .function("GetActualMemorySize", &vtkTable::GetActualMemorySize)
    .function("GetRowData", &vtkTable::GetRowData, emscripten::allow_raw_pointers())
    .function("SetRowData", &vtkTable::SetRowData, emscripten::allow_raw_pointers())
    .function("GetNumberOfRows", &vtkTable::GetNumberOfRows)
    .function("SetNumberOfRows", &vtkTable::SetNumberOfRows)
    .function("SqueezeRows", &vtkTable::SqueezeRows)
    .function("GetRow", emscripten::select_overload<vtkVariantArray*(vtkTable&, int)>([](vtkTable& self, int arg_0) -> vtkVariantArray* { return self.GetRow( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetRow", emscripten::select_overload<void(vtkTable&, int, vtkVariantArray*)>([](vtkTable& self, int arg_0, vtkVariantArray* arg_1) -> void { return self.GetRow( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetRow", &vtkTable::SetRow, emscripten::allow_raw_pointers())
    .function("InsertRow", &vtkTable::InsertRow)
    .function("InsertRows", &vtkTable::InsertRows)
    .function("InsertNextBlankRow", &vtkTable::InsertNextBlankRow)
    .function("InsertNextRow", &vtkTable::InsertNextRow, emscripten::allow_raw_pointers())
    .function("RemoveRow", &vtkTable::RemoveRow)
    .function("RemoveRows", &vtkTable::RemoveRows)
    .function("RemoveAllRows", &vtkTable::RemoveAllRows)
    .function("GetNumberOfColumns", &vtkTable::GetNumberOfColumns)
    .function("GetColumnName", emscripten::optional_override([](vtkTable& self, int arg_0) -> std::string {  return self.GetColumnName( arg_0);}))
    .function("GetColumnByName", emscripten::optional_override([](vtkTable& self, const std::string & arg_0) -> vtkAbstractArray* {  return self.GetColumnByName( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("GetColumnIndex", emscripten::optional_override([](vtkTable& self, const std::string & arg_0) -> int {  return self.GetColumnIndex( arg_0.c_str());}))
    .function("GetColumn", &vtkTable::GetColumn, emscripten::allow_raw_pointers())
    .function("AddColumn", &vtkTable::AddColumn, emscripten::allow_raw_pointers())
    .function("InsertColumn", &vtkTable::InsertColumn, emscripten::allow_raw_pointers())
    .function("RemoveColumnByName", emscripten::optional_override([](vtkTable& self, const std::string & arg_0) -> void {  return self.RemoveColumnByName( arg_0.c_str());}))
    .function("RemoveColumn", &vtkTable::RemoveColumn)
    .function("RemoveAllColumns", &vtkTable::RemoveAllColumns)
    .function("GetValue", &vtkTable::GetValue)
    .function("GetValueByName", emscripten::optional_override([](vtkTable& self, int arg_0, const std::string & arg_1) -> vtkVariant {  return self.GetValueByName( arg_0, arg_1.c_str());}))
    .function("SetValue", &vtkTable::SetValue)
    .function("SetValueByName", emscripten::optional_override([](vtkTable& self, int arg_0, const std::string & arg_1, vtkVariant arg_2) -> void {  return self.SetValueByName( arg_0, arg_1.c_str(), arg_2);}))
    .function("Initialize", &vtkTable::Initialize)
    .class_function("GetData", emscripten::select_overload<vtkTable*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkTable* { return vtkTable::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkTable*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkTable* { return vtkTable::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkTable::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkTable::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetAttributesAsFieldData", &vtkTable::GetAttributesAsFieldData, emscripten::allow_raw_pointers())
    .function("GetNumberOfElements", &vtkTable::GetNumberOfElements);
}

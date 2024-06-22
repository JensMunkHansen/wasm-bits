// JavaScript wrapper for vtkPassArrays with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkPassArraysEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkPassArrays.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPassArrays.h"

template<> void emscripten::internal::raw_destructor<vtkPassArrays>(vtkPassArrays * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPassArrays_class) {
  emscripten::class_<vtkPassArrays, emscripten::base<vtkDataObjectAlgorithm>>("vtkPassArrays")
    .smart_ptr<vtkSmartPointer<vtkPassArrays>>("vtkSmartPointer<vtkPassArrays>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPassArrays>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassArrays::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPassArrays::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPassArrays::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPassArrays::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddArray", emscripten::optional_override([](vtkPassArrays& self, int arg_0, const std::string & arg_1) -> void {  return self.AddArray( arg_0, arg_1.c_str());}))
    .function("AddPointDataArray", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> void {  return self.AddPointDataArray( arg_0.c_str());}))
    .function("AddCellDataArray", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> void {  return self.AddCellDataArray( arg_0.c_str());}))
    .function("AddFieldDataArray", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> void {  return self.AddFieldDataArray( arg_0.c_str());}))
    .function("RemoveArray", emscripten::optional_override([](vtkPassArrays& self, int arg_0, const std::string & arg_1) -> void {  return self.RemoveArray( arg_0, arg_1.c_str());}))
    .function("RemovePointDataArray", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> void {  return self.RemovePointDataArray( arg_0.c_str());}))
    .function("RemoveCellDataArray", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> void {  return self.RemoveCellDataArray( arg_0.c_str());}))
    .function("RemoveFieldDataArray", emscripten::optional_override([](vtkPassArrays& self, const std::string & arg_0) -> void {  return self.RemoveFieldDataArray( arg_0.c_str());}))
    .function("ClearArrays", &vtkPassArrays::ClearArrays)
    .function("ClearPointDataArrays", &vtkPassArrays::ClearPointDataArrays)
    .function("ClearCellDataArrays", &vtkPassArrays::ClearCellDataArrays)
    .function("ClearFieldDataArrays", &vtkPassArrays::ClearFieldDataArrays)
    .function("SetRemoveArrays", &vtkPassArrays::SetRemoveArrays)
    .function("GetRemoveArrays", &vtkPassArrays::GetRemoveArrays)
    .function("RemoveArraysOn", &vtkPassArrays::RemoveArraysOn)
    .function("RemoveArraysOff", &vtkPassArrays::RemoveArraysOff)
    .function("SetUseFieldTypes", &vtkPassArrays::SetUseFieldTypes)
    .function("GetUseFieldTypes", &vtkPassArrays::GetUseFieldTypes)
    .function("UseFieldTypesOn", &vtkPassArrays::UseFieldTypesOn)
    .function("UseFieldTypesOff", &vtkPassArrays::UseFieldTypesOff)
    .function("AddFieldType", &vtkPassArrays::AddFieldType)
    .function("ClearFieldTypes", &vtkPassArrays::ClearFieldTypes);
}

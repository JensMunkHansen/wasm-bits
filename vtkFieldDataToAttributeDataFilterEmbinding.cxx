// JavaScript wrapper for vtkFieldDataToAttributeDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFieldDataToAttributeDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkFieldDataToAttributeDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkDataArray.h"
#include "vtkFieldData.h"
#include "vtkObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkFieldDataToAttributeDataFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkFieldDataToAttributeDataFilter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "VTK_DATA_OBJECT_FIELD", 0 },
      { "VTK_POINT_DATA_FIELD", 1 },
      { "VTK_CELL_DATA_FIELD", 2 },
      { "VTK_CELL_DATA", 0 },
      { "VTK_POINT_DATA", 1 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkFieldDataToAttributeDataFilter>(vtkFieldDataToAttributeDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFieldDataToAttributeDataFilter_class) {
  emscripten::class_<vtkFieldDataToAttributeDataFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkFieldDataToAttributeDataFilter")
    .smart_ptr<vtkSmartPointer<vtkFieldDataToAttributeDataFilter>>("vtkSmartPointer<vtkFieldDataToAttributeDataFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkFieldDataToAttributeDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFieldDataToAttributeDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFieldDataToAttributeDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFieldDataToAttributeDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFieldDataToAttributeDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputField", &vtkFieldDataToAttributeDataFilter::SetInputField)
    .function("GetInputField", &vtkFieldDataToAttributeDataFilter::GetInputField)
    .function("SetInputFieldToDataObjectField", &vtkFieldDataToAttributeDataFilter::SetInputFieldToDataObjectField)
    .function("SetInputFieldToPointDataField", &vtkFieldDataToAttributeDataFilter::SetInputFieldToPointDataField)
    .function("SetInputFieldToCellDataField", &vtkFieldDataToAttributeDataFilter::SetInputFieldToCellDataField)
    .function("SetOutputAttributeData", &vtkFieldDataToAttributeDataFilter::SetOutputAttributeData)
    .function("GetOutputAttributeData", &vtkFieldDataToAttributeDataFilter::GetOutputAttributeData)
    .function("SetOutputAttributeDataToCellData", &vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToCellData)
    .function("SetOutputAttributeDataToPointData", &vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToPointData)
    .function("SetScalarComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int, int, int, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetScalarComponent( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4, arg_5); }))
    .function("SetScalarComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetScalarComponent( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetScalarComponentArrayName", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, int arg_0) -> std::string {  return self.GetScalarComponentArrayName( arg_0);}))
    .function("GetScalarComponentArrayComponent", &vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayComponent)
    .function("GetScalarComponentMinRange", &vtkFieldDataToAttributeDataFilter::GetScalarComponentMinRange)
    .function("GetScalarComponentMaxRange", &vtkFieldDataToAttributeDataFilter::GetScalarComponentMaxRange)
    .function("GetScalarComponentNormalizeFlag", &vtkFieldDataToAttributeDataFilter::GetScalarComponentNormalizeFlag)
    .function("SetVectorComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int, int, int, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetVectorComponent( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4, arg_5); }))
    .function("SetVectorComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetVectorComponent( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetVectorComponentArrayName", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, int arg_0) -> std::string {  return self.GetVectorComponentArrayName( arg_0);}))
    .function("GetVectorComponentArrayComponent", &vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayComponent)
    .function("GetVectorComponentMinRange", &vtkFieldDataToAttributeDataFilter::GetVectorComponentMinRange)
    .function("GetVectorComponentMaxRange", &vtkFieldDataToAttributeDataFilter::GetVectorComponentMaxRange)
    .function("GetVectorComponentNormalizeFlag", &vtkFieldDataToAttributeDataFilter::GetVectorComponentNormalizeFlag)
    .function("SetNormalComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int, int, int, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetNormalComponent( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4, arg_5); }))
    .function("SetNormalComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetNormalComponent( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetNormalComponentArrayName", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, int arg_0) -> std::string {  return self.GetNormalComponentArrayName( arg_0);}))
    .function("GetNormalComponentArrayComponent", &vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayComponent)
    .function("GetNormalComponentMinRange", &vtkFieldDataToAttributeDataFilter::GetNormalComponentMinRange)
    .function("GetNormalComponentMaxRange", &vtkFieldDataToAttributeDataFilter::GetNormalComponentMaxRange)
    .function("GetNormalComponentNormalizeFlag", &vtkFieldDataToAttributeDataFilter::GetNormalComponentNormalizeFlag)
    .function("SetTensorComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int, int, int, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetTensorComponent( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4, arg_5); }))
    .function("SetTensorComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetTensorComponent( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetTensorComponentArrayName", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, int arg_0) -> std::string {  return self.GetTensorComponentArrayName( arg_0);}))
    .function("GetTensorComponentArrayComponent", &vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayComponent)
    .function("GetTensorComponentMinRange", &vtkFieldDataToAttributeDataFilter::GetTensorComponentMinRange)
    .function("GetTensorComponentMaxRange", &vtkFieldDataToAttributeDataFilter::GetTensorComponentMaxRange)
    .function("GetTensorComponentNormalizeFlag", &vtkFieldDataToAttributeDataFilter::GetTensorComponentNormalizeFlag)
    .function("SetTCoordComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int, int, int, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetTCoordComponent( arg_0, arg_1.c_str(), arg_2, arg_3, arg_4, arg_5); }))
    .function("SetTCoordComponent", emscripten::select_overload<void(vtkFieldDataToAttributeDataFilter&, int, const std::string &, int)>([](vtkFieldDataToAttributeDataFilter& self, int arg_0, const std::string & arg_1, int arg_2) -> void { return self.SetTCoordComponent( arg_0, arg_1.c_str(), arg_2); }))
    .function("GetTCoordComponentArrayName", emscripten::optional_override([](vtkFieldDataToAttributeDataFilter& self, int arg_0) -> std::string {  return self.GetTCoordComponentArrayName( arg_0);}))
    .function("GetTCoordComponentArrayComponent", &vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayComponent)
    .function("GetTCoordComponentMinRange", &vtkFieldDataToAttributeDataFilter::GetTCoordComponentMinRange)
    .function("GetTCoordComponentMaxRange", &vtkFieldDataToAttributeDataFilter::GetTCoordComponentMaxRange)
    .function("GetTCoordComponentNormalizeFlag", &vtkFieldDataToAttributeDataFilter::GetTCoordComponentNormalizeFlag)
    .function("SetDefaultNormalize", &vtkFieldDataToAttributeDataFilter::SetDefaultNormalize)
    .function("GetDefaultNormalize", &vtkFieldDataToAttributeDataFilter::GetDefaultNormalize)
    .function("DefaultNormalizeOn", &vtkFieldDataToAttributeDataFilter::DefaultNormalizeOn)
    .function("DefaultNormalizeOff", &vtkFieldDataToAttributeDataFilter::DefaultNormalizeOff)
    .class_function("ConstructArray", &vtkFieldDataToAttributeDataFilter::ConstructArray, emscripten::allow_raw_pointers())
    .class_function("GetFieldArray", emscripten::optional_override([]( vtkFieldData* arg_0, const std::string & arg_1, int arg_2) -> vtkDataArray* {  return vtkFieldDataToAttributeDataFilter::GetFieldArray( arg_0, arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers());
}

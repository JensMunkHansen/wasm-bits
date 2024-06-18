// JavaScript wrapper for vtkPackLabels with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkPackLabelsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkPackLabels.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkIdTypeArray.h"
#include "vtkPackLabels.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPackLabels_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPackLabels>(vtkPackLabels * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPackLabels_class) {
  using DefaultScalarType=vtkPackLabels::DefaultScalarType;
  emscripten::class_<vtkPackLabels, emscripten::base<vtkDataSetAlgorithm>>("vtkPackLabels")
    .smart_ptr<vtkSmartPointer<vtkPackLabels>>("vtkSmartPointer<vtkPackLabels>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPackLabels>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPackLabels::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPackLabels& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPackLabels::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPackLabels::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPackLabels::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPackLabels& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLabels", &vtkPackLabels::GetLabels, emscripten::allow_raw_pointers())
    .function("GetNumberOfLabels", &vtkPackLabels::GetNumberOfLabels)
    .function("GetLabelsCount", &vtkPackLabels::GetLabelsCount, emscripten::allow_raw_pointers())
    .function("SetSortBy", &vtkPackLabels::SetSortBy)
    .function("GetSortByMinValue", &vtkPackLabels::GetSortByMinValue)
    .function("GetSortByMaxValue", &vtkPackLabels::GetSortByMaxValue)
    .function("GetSortBy", &vtkPackLabels::GetSortBy)
    .function("SortByLabelValue", &vtkPackLabels::SortByLabelValue)
    .function("SortByLabelCount", &vtkPackLabels::SortByLabelCount)
    .function("SetOutputScalarType", &vtkPackLabels::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkPackLabels::GetOutputScalarType)
    .function("SetOutputScalarTypeToDefault", &vtkPackLabels::SetOutputScalarTypeToDefault)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkPackLabels::SetOutputScalarTypeToUnsignedChar)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkPackLabels::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkPackLabels::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkPackLabels::SetOutputScalarTypeToUnsignedLong)
    .function("SetBackgroundValue", &vtkPackLabels::SetBackgroundValue)
    .function("GetBackgroundValue", &vtkPackLabels::GetBackgroundValue)
    .function("SetPassPointData", &vtkPackLabels::SetPassPointData)
    .function("GetPassPointData", &vtkPackLabels::GetPassPointData)
    .function("PassPointDataOn", &vtkPackLabels::PassPointDataOn)
    .function("PassPointDataOff", &vtkPackLabels::PassPointDataOff)
    .function("SetPassCellData", &vtkPackLabels::SetPassCellData)
    .function("GetPassCellData", &vtkPackLabels::GetPassCellData)
    .function("PassCellDataOn", &vtkPackLabels::PassCellDataOn)
    .function("PassCellDataOff", &vtkPackLabels::PassCellDataOff)
    .function("SetPassFieldData", &vtkPackLabels::SetPassFieldData)
    .function("GetPassFieldData", &vtkPackLabels::GetPassFieldData)
    .function("PassFieldDataOn", &vtkPackLabels::PassFieldDataOn)
    .function("PassFieldDataOff", &vtkPackLabels::PassFieldDataOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPackLabels_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkPackLabels_SORT_BY_LABEL_VALUE", vtkPackLabels::SORT_BY_LABEL_VALUE },
      { "vtkPackLabels_SORT_BY_LABEL_COUNT", vtkPackLabels::SORT_BY_LABEL_COUNT },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkPackLabels_1_2_constants) {
  emscripten::constant("VTK_DEFAULT_TYPE", static_cast<int>(-1));
}

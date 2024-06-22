// JavaScript wrapper for vtkAttributeDataToTableFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAttributeDataToTableFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAttributeDataToTableFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAttributeDataToTableFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAttributeDataToTableFilter>(vtkAttributeDataToTableFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAttributeDataToTableFilter_class) {
  emscripten::class_<vtkAttributeDataToTableFilter, emscripten::base<vtkTableAlgorithm>>("vtkAttributeDataToTableFilter")
    .smart_ptr<vtkSmartPointer<vtkAttributeDataToTableFilter>>("vtkSmartPointer<vtkAttributeDataToTableFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAttributeDataToTableFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeDataToTableFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAttributeDataToTableFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAttributeDataToTableFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAttributeDataToTableFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAttributeDataToTableFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAttributeDataToTableFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFieldAssociation", &vtkAttributeDataToTableFilter::SetFieldAssociation)
    .function("GetFieldAssociation", &vtkAttributeDataToTableFilter::GetFieldAssociation)
    .function("SetAddMetaData", &vtkAttributeDataToTableFilter::SetAddMetaData)
    .function("GetAddMetaData", &vtkAttributeDataToTableFilter::GetAddMetaData)
    .function("AddMetaDataOn", &vtkAttributeDataToTableFilter::AddMetaDataOn)
    .function("AddMetaDataOff", &vtkAttributeDataToTableFilter::AddMetaDataOff)
    .function("SetGenerateOriginalIds", &vtkAttributeDataToTableFilter::SetGenerateOriginalIds)
    .function("GetGenerateOriginalIds", &vtkAttributeDataToTableFilter::GetGenerateOriginalIds)
    .function("GenerateOriginalIdsOn", &vtkAttributeDataToTableFilter::GenerateOriginalIdsOn)
    .function("GenerateOriginalIdsOff", &vtkAttributeDataToTableFilter::GenerateOriginalIdsOff)
    .function("SetGenerateCellConnectivity", &vtkAttributeDataToTableFilter::SetGenerateCellConnectivity)
    .function("GetGenerateCellConnectivity", &vtkAttributeDataToTableFilter::GetGenerateCellConnectivity)
    .function("GenerateCellConnectivityOn", &vtkAttributeDataToTableFilter::GenerateCellConnectivityOn)
    .function("GenerateCellConnectivityOff", &vtkAttributeDataToTableFilter::GenerateCellConnectivityOff);
}

// JavaScript wrapper for vtkDataAssemblyUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataAssemblyUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataAssemblyUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCompositeDataSet.h"
#include "vtkDataAssembly.h"
#include "vtkPartitionedDataSetCollection.h"
#include "vtkDataAssemblyUtilities.h"

template<> void emscripten::internal::raw_destructor<vtkDataAssemblyUtilities>(vtkDataAssemblyUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataAssemblyUtilities_class) {
  emscripten::class_<vtkDataAssemblyUtilities, emscripten::base<vtkObject>>("vtkDataAssemblyUtilities")
    .smart_ptr<vtkSmartPointer<vtkDataAssemblyUtilities>>("vtkSmartPointer<vtkDataAssemblyUtilities>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataAssemblyUtilities>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataAssemblyUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataAssemblyUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataAssemblyUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataAssemblyUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataAssemblyUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataAssemblyUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("HierarchyName", emscripten::optional_override([]() -> std::string {  return vtkDataAssemblyUtilities::HierarchyName();}))
    .class_function("GetDataAssembly", emscripten::optional_override([]( const std::string & arg_0, vtkCompositeDataSet* arg_1) -> vtkSmartPointer<vtkDataAssembly> {  return vtkDataAssemblyUtilities::GetDataAssembly( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("GenerateHierarchy", &vtkDataAssemblyUtilities::GenerateHierarchy, emscripten::allow_raw_pointers())
    .class_function("GenerateCompositeDataSetFromHierarchy", &vtkDataAssemblyUtilities::GenerateCompositeDataSetFromHierarchy, emscripten::allow_raw_pointers())
    .class_function("GetSelectedCompositeIds", &vtkDataAssemblyUtilities::GetSelectedCompositeIds, emscripten::allow_raw_pointers())
    .class_function("GetSelectorForCompositeId", &vtkDataAssemblyUtilities::GetSelectorForCompositeId, emscripten::allow_raw_pointers())
    .class_function("GetSelectorsForCompositeIds", emscripten::select_overload<std::vector<std::string>( const std::vector<unsigned int>&, vtkDataAssembly*)>([]( const std::vector<unsigned int>& arg_0, vtkDataAssembly* arg_1) -> std::vector<std::string> { return vtkDataAssemblyUtilities::GetSelectorsForCompositeIds( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetSelectorsForCompositeIds", emscripten::select_overload<std::vector<std::string>( const std::vector<unsigned int>&, vtkDataAssembly*, vtkDataAssembly*)>([]( const std::vector<unsigned int>& arg_0, vtkDataAssembly* arg_1, vtkDataAssembly* arg_2) -> std::vector<std::string> { return vtkDataAssemblyUtilities::GetSelectorsForCompositeIds( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .class_function("GetSelectorsCompositeIdsForCompositeIds", &vtkDataAssemblyUtilities::GetSelectorsCompositeIdsForCompositeIds, emscripten::allow_raw_pointers());
}

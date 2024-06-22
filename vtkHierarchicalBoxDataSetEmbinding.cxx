// JavaScript wrapper for vtkHierarchicalBoxDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHierarchicalBoxDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHierarchicalBoxDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataIterator.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkHierarchicalBoxDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkHierarchicalBoxDataSet>(vtkHierarchicalBoxDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHierarchicalBoxDataSet_class) {
  emscripten::class_<vtkHierarchicalBoxDataSet, emscripten::base<vtkOverlappingAMR>>("vtkHierarchicalBoxDataSet")
    .smart_ptr<vtkSmartPointer<vtkHierarchicalBoxDataSet>>("vtkSmartPointer<vtkHierarchicalBoxDataSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHierarchicalBoxDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalBoxDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHierarchicalBoxDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHierarchicalBoxDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHierarchicalBoxDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHierarchicalBoxDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHierarchicalBoxDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("NewIterator", &vtkHierarchicalBoxDataSet::NewIterator, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkHierarchicalBoxDataSet::GetDataObjectType)
    .class_function("GetData", emscripten::select_overload<vtkHierarchicalBoxDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkHierarchicalBoxDataSet* { return vtkHierarchicalBoxDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkHierarchicalBoxDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkHierarchicalBoxDataSet* { return vtkHierarchicalBoxDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}

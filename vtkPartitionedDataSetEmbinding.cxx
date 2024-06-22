// JavaScript wrapper for vtkPartitionedDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPartitionedDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPartitionedDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkCompositeDataIterator.h"
#include "vtkPartitionedDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkPartitionedDataSet>(vtkPartitionedDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionedDataSet_class) {
  emscripten::class_<vtkPartitionedDataSet, emscripten::base<vtkDataObjectTree>>("vtkPartitionedDataSet")
    .smart_ptr<vtkSmartPointer<vtkPartitionedDataSet>>("vtkSmartPointer<vtkPartitionedDataSet>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPartitionedDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionedDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionedDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionedDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionedDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkPartitionedDataSet::GetDataObjectType)
    .function("SetNumberOfPartitions", &vtkPartitionedDataSet::SetNumberOfPartitions)
    .function("GetNumberOfPartitions", &vtkPartitionedDataSet::GetNumberOfPartitions)
    .function("GetPartition", &vtkPartitionedDataSet::GetPartition, emscripten::allow_raw_pointers())
    .function("GetPartitionAsDataObject", &vtkPartitionedDataSet::GetPartitionAsDataObject, emscripten::allow_raw_pointers())
    .function("SetPartition", &vtkPartitionedDataSet::SetPartition, emscripten::allow_raw_pointers())
    .function("HasMetaData", emscripten::select_overload<int(vtkPartitionedDataSet&, unsigned int)>([](vtkPartitionedDataSet& self, unsigned int arg_0) -> int { return self.HasMetaData( arg_0); }))
    .function("HasMetaData", emscripten::select_overload<int(vtkPartitionedDataSet&, vtkCompositeDataIterator*)>([](vtkPartitionedDataSet& self, vtkCompositeDataIterator* arg_0) -> int { return self.HasMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", emscripten::select_overload<vtkInformation*(vtkPartitionedDataSet&, unsigned int)>([](vtkPartitionedDataSet& self, unsigned int arg_0) -> vtkInformation* { return self.GetMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", emscripten::select_overload<vtkInformation*(vtkPartitionedDataSet&, vtkCompositeDataIterator*)>([](vtkPartitionedDataSet& self, vtkCompositeDataIterator* arg_0) -> vtkInformation* { return self.GetMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPartitionedDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkPartitionedDataSet* { return vtkPartitionedDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPartitionedDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkPartitionedDataSet* { return vtkPartitionedDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("RemoveNullPartitions", &vtkPartitionedDataSet::RemoveNullPartitions);
}

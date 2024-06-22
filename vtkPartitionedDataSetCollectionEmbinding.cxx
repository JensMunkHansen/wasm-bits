// JavaScript wrapper for vtkPartitionedDataSetCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPartitionedDataSetCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPartitionedDataSetCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSet.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkInformation.h"
#include "vtkDataAssembly.h"
#include "vtkInformationVector.h"
#include "vtkCompositeDataIterator.h"
#include "vtkCompositeDataSet.h"
#include "vtkPartitionedDataSetCollection.h"

template<> void emscripten::internal::raw_destructor<vtkPartitionedDataSetCollection>(vtkPartitionedDataSetCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionedDataSetCollection_class) {
  emscripten::class_<vtkPartitionedDataSetCollection, emscripten::base<vtkDataObjectTree>>("vtkPartitionedDataSetCollection")
    .smart_ptr<vtkSmartPointer<vtkPartitionedDataSetCollection>>("vtkSmartPointer<vtkPartitionedDataSetCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPartitionedDataSetCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionedDataSetCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionedDataSetCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkPartitionedDataSetCollection::GetDataObjectType)
    .function("SetNumberOfPartitionedDataSets", &vtkPartitionedDataSetCollection::SetNumberOfPartitionedDataSets)
    .function("GetNumberOfPartitionedDataSets", &vtkPartitionedDataSetCollection::GetNumberOfPartitionedDataSets)
    .function("GetPartitionedDataSet", &vtkPartitionedDataSetCollection::GetPartitionedDataSet, emscripten::allow_raw_pointers())
    .function("SetPartitionedDataSet", &vtkPartitionedDataSetCollection::SetPartitionedDataSet, emscripten::allow_raw_pointers())
    .function("RemovePartitionedDataSet", &vtkPartitionedDataSetCollection::RemovePartitionedDataSet)
    .function("SetPartition", &vtkPartitionedDataSetCollection::SetPartition, emscripten::allow_raw_pointers())
    .function("GetPartition", &vtkPartitionedDataSetCollection::GetPartition, emscripten::allow_raw_pointers())
    .function("GetPartitionAsDataObject", &vtkPartitionedDataSetCollection::GetPartitionAsDataObject, emscripten::allow_raw_pointers())
    .function("GetNumberOfPartitions", &vtkPartitionedDataSetCollection::GetNumberOfPartitions)
    .function("SetNumberOfPartitions", &vtkPartitionedDataSetCollection::SetNumberOfPartitions)
    .function("HasMetaData", emscripten::select_overload<int(vtkPartitionedDataSetCollection&, unsigned int)>([](vtkPartitionedDataSetCollection& self, unsigned int arg_0) -> int { return self.HasMetaData( arg_0); }))
    .function("HasMetaData", emscripten::select_overload<int(vtkPartitionedDataSetCollection&, vtkCompositeDataIterator*)>([](vtkPartitionedDataSetCollection& self, vtkCompositeDataIterator* arg_0) -> int { return self.HasMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", emscripten::select_overload<vtkInformation*(vtkPartitionedDataSetCollection&, unsigned int)>([](vtkPartitionedDataSetCollection& self, unsigned int arg_0) -> vtkInformation* { return self.GetMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetMetaData", emscripten::select_overload<vtkInformation*(vtkPartitionedDataSetCollection&, vtkCompositeDataIterator*)>([](vtkPartitionedDataSetCollection& self, vtkCompositeDataIterator* arg_0) -> vtkInformation* { return self.GetMetaData( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetDataAssembly", &vtkPartitionedDataSetCollection::GetDataAssembly, emscripten::allow_raw_pointers())
    .function("SetDataAssembly", &vtkPartitionedDataSetCollection::SetDataAssembly, emscripten::allow_raw_pointers())
    .function("GetCompositeIndex", emscripten::select_overload<unsigned int(vtkPartitionedDataSetCollection&, unsigned int)>([](vtkPartitionedDataSetCollection& self, unsigned int arg_0) -> unsigned int { return self.GetCompositeIndex( arg_0); }))
    .function("GetCompositeIndex", emscripten::select_overload<unsigned int(vtkPartitionedDataSetCollection&, unsigned int, unsigned int)>([](vtkPartitionedDataSetCollection& self, unsigned int arg_0, unsigned int arg_1) -> unsigned int { return self.GetCompositeIndex( arg_0, arg_1); }))
    .class_function("GetData", emscripten::select_overload<vtkPartitionedDataSetCollection*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkPartitionedDataSetCollection* { return vtkPartitionedDataSetCollection::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkPartitionedDataSetCollection*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkPartitionedDataSetCollection* { return vtkPartitionedDataSetCollection::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkPartitionedDataSetCollection::GetMTime)
    .function("CompositeShallowCopy", &vtkPartitionedDataSetCollection::CompositeShallowCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkPartitionedDataSetCollection::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkPartitionedDataSetCollection::DeepCopy, emscripten::allow_raw_pointers())
    .function("CopyStructure", &vtkPartitionedDataSetCollection::CopyStructure, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkPartitionedDataSetCollection::Initialize);
}

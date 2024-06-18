// JavaScript wrapper for vtkAggregateToPartitionedDataSetCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkAggregateToPartitionedDataSetCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkAggregateToPartitionedDataSetCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkDataObject.h"
#include "vtkAggregateToPartitionedDataSetCollection.h"

template<> void emscripten::internal::raw_destructor<vtkAggregateToPartitionedDataSetCollection>(vtkAggregateToPartitionedDataSetCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAggregateToPartitionedDataSetCollection_class) {
  emscripten::class_<vtkAggregateToPartitionedDataSetCollection, emscripten::base<vtkExecutionAggregator>>("vtkAggregateToPartitionedDataSetCollection")
    .smart_ptr<vtkSmartPointer<vtkAggregateToPartitionedDataSetCollection>>("vtkSmartPointer<vtkAggregateToPartitionedDataSetCollection>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAggregateToPartitionedDataSetCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAggregateToPartitionedDataSetCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAggregateToPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAggregateToPartitionedDataSetCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAggregateToPartitionedDataSetCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAggregateToPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAggregateToPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RequestDataObject", &vtkAggregateToPartitionedDataSetCollection::RequestDataObject, emscripten::allow_raw_pointers())
    .function("Aggregate", &vtkAggregateToPartitionedDataSetCollection::Aggregate, emscripten::allow_raw_pointers())
    .function("GetOutputDataObject", &vtkAggregateToPartitionedDataSetCollection::GetOutputDataObject)
    .function("Clear", &vtkAggregateToPartitionedDataSetCollection::Clear);
}

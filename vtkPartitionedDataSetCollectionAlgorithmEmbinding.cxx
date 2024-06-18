// JavaScript wrapper for vtkPartitionedDataSetCollectionAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkPartitionedDataSetCollectionAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkPartitionedDataSetCollectionAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSetCollection.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPartitionedDataSetCollectionAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkPartitionedDataSetCollectionAlgorithm>(vtkPartitionedDataSetCollectionAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionedDataSetCollectionAlgorithm_class) {
  emscripten::class_<vtkPartitionedDataSetCollectionAlgorithm, emscripten::base<vtkAlgorithm>>("vtkPartitionedDataSetCollectionAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetCollectionAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionedDataSetCollectionAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionedDataSetCollectionAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionedDataSetCollectionAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetCollectionAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionedDataSetCollectionAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPartitionedDataSetCollection*(vtkPartitionedDataSetCollectionAlgorithm&)>([](vtkPartitionedDataSetCollectionAlgorithm& self) -> vtkPartitionedDataSetCollection* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPartitionedDataSetCollection*(vtkPartitionedDataSetCollectionAlgorithm&, int)>([](vtkPartitionedDataSetCollectionAlgorithm& self, int arg_0) -> vtkPartitionedDataSetCollection* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}

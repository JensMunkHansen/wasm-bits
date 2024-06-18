// JavaScript wrapper for vtkPartitionedDataSetAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkPartitionedDataSetAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkPartitionedDataSetAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSet.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkPartitionedDataSetAlgorithm.h"

template<> void emscripten::internal::raw_destructor<vtkPartitionedDataSetAlgorithm>(vtkPartitionedDataSetAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionedDataSetAlgorithm_class) {
  emscripten::class_<vtkPartitionedDataSetAlgorithm, emscripten::base<vtkAlgorithm>>("vtkPartitionedDataSetAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionedDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionedDataSetAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionedDataSetAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionedDataSetAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", emscripten::select_overload<vtkPartitionedDataSet*(vtkPartitionedDataSetAlgorithm&)>([](vtkPartitionedDataSetAlgorithm& self) -> vtkPartitionedDataSet* { return self.GetOutput(); }), emscripten::allow_raw_pointers())
    .function("GetOutput", emscripten::select_overload<vtkPartitionedDataSet*(vtkPartitionedDataSetAlgorithm&, int)>([](vtkPartitionedDataSetAlgorithm& self, int arg_0) -> vtkPartitionedDataSet* { return self.GetOutput( arg_0); }), emscripten::allow_raw_pointers());
}

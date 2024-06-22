// JavaScript wrapper for vtkUniformGridPartitioner with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkUniformGridPartitionerEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkUniformGridPartitioner.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniformGridPartitioner.h"

template<> void emscripten::internal::raw_destructor<vtkUniformGridPartitioner>(vtkUniformGridPartitioner * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformGridPartitioner_class) {
  emscripten::class_<vtkUniformGridPartitioner, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkUniformGridPartitioner")
    .smart_ptr<vtkSmartPointer<vtkUniformGridPartitioner>>("vtkSmartPointer<vtkUniformGridPartitioner>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkUniformGridPartitioner>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridPartitioner::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformGridPartitioner& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformGridPartitioner::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformGridPartitioner::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGridPartitioner::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformGridPartitioner& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPartitions", &vtkUniformGridPartitioner::GetNumberOfPartitions)
    .function("SetNumberOfPartitions", &vtkUniformGridPartitioner::SetNumberOfPartitions)
    .function("GetNumberOfGhostLayers", &vtkUniformGridPartitioner::GetNumberOfGhostLayers)
    .function("SetNumberOfGhostLayers", &vtkUniformGridPartitioner::SetNumberOfGhostLayers)
    .function("GetDuplicateNodes", &vtkUniformGridPartitioner::GetDuplicateNodes)
    .function("SetDuplicateNodes", &vtkUniformGridPartitioner::SetDuplicateNodes)
    .function("DuplicateNodesOn", &vtkUniformGridPartitioner::DuplicateNodesOn)
    .function("DuplicateNodesOff", &vtkUniformGridPartitioner::DuplicateNodesOff);
}

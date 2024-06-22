// JavaScript wrapper for vtkStructuredGridPartitioner with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkStructuredGridPartitionerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkStructuredGridPartitioner.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGridPartitioner.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredGridPartitioner>(vtkStructuredGridPartitioner * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredGridPartitioner_class) {
  emscripten::class_<vtkStructuredGridPartitioner, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkStructuredGridPartitioner")
    .smart_ptr<vtkSmartPointer<vtkStructuredGridPartitioner>>("vtkSmartPointer<vtkStructuredGridPartitioner>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStructuredGridPartitioner>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridPartitioner::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredGridPartitioner& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredGridPartitioner::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredGridPartitioner::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredGridPartitioner::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredGridPartitioner& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPartitions", &vtkStructuredGridPartitioner::GetNumberOfPartitions)
    .function("SetNumberOfPartitions", &vtkStructuredGridPartitioner::SetNumberOfPartitions)
    .function("GetNumberOfGhostLayers", &vtkStructuredGridPartitioner::GetNumberOfGhostLayers)
    .function("SetNumberOfGhostLayers", &vtkStructuredGridPartitioner::SetNumberOfGhostLayers)
    .function("GetDuplicateNodes", &vtkStructuredGridPartitioner::GetDuplicateNodes)
    .function("SetDuplicateNodes", &vtkStructuredGridPartitioner::SetDuplicateNodes)
    .function("DuplicateNodesOn", &vtkStructuredGridPartitioner::DuplicateNodesOn)
    .function("DuplicateNodesOff", &vtkStructuredGridPartitioner::DuplicateNodesOff);
}

// JavaScript wrapper for vtkRectilinearGridPartitioner with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkRectilinearGridPartitionerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkRectilinearGridPartitioner.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGridPartitioner.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearGridPartitioner>(vtkRectilinearGridPartitioner * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearGridPartitioner_class) {
  emscripten::class_<vtkRectilinearGridPartitioner, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkRectilinearGridPartitioner")
    .smart_ptr<vtkSmartPointer<vtkRectilinearGridPartitioner>>("vtkSmartPointer<vtkRectilinearGridPartitioner>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRectilinearGridPartitioner>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridPartitioner::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearGridPartitioner& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearGridPartitioner::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearGridPartitioner::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearGridPartitioner::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearGridPartitioner& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfPartitions", &vtkRectilinearGridPartitioner::GetNumberOfPartitions)
    .function("SetNumberOfPartitions", &vtkRectilinearGridPartitioner::SetNumberOfPartitions)
    .function("GetNumberOfGhostLayers", &vtkRectilinearGridPartitioner::GetNumberOfGhostLayers)
    .function("SetNumberOfGhostLayers", &vtkRectilinearGridPartitioner::SetNumberOfGhostLayers)
    .function("GetDuplicateNodes", &vtkRectilinearGridPartitioner::GetDuplicateNodes)
    .function("SetDuplicateNodes", &vtkRectilinearGridPartitioner::SetDuplicateNodes)
    .function("DuplicateNodesOn", &vtkRectilinearGridPartitioner::DuplicateNodesOn)
    .function("DuplicateNodesOff", &vtkRectilinearGridPartitioner::DuplicateNodesOff);
}

// JavaScript wrapper for vtkExtentRCBPartitioner with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExtentRCBPartitionerEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExtentRCBPartitioner.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtentRCBPartitioner.h"

template<> void emscripten::internal::raw_destructor<vtkExtentRCBPartitioner>(vtkExtentRCBPartitioner * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtentRCBPartitioner_class) {
  emscripten::class_<vtkExtentRCBPartitioner, emscripten::base<vtkObject>>("vtkExtentRCBPartitioner")
    .smart_ptr<vtkSmartPointer<vtkExtentRCBPartitioner>>("vtkSmartPointer<vtkExtentRCBPartitioner>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtentRCBPartitioner>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtentRCBPartitioner::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtentRCBPartitioner& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtentRCBPartitioner::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtentRCBPartitioner::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtentRCBPartitioner::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtentRCBPartitioner& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPartitions", &vtkExtentRCBPartitioner::SetNumberOfPartitions)
    .function("SetGlobalExtent", emscripten::select_overload<void(vtkExtentRCBPartitioner&, int, int, int, int, int, int)>([](vtkExtentRCBPartitioner& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetGlobalExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetDuplicateNodes", &vtkExtentRCBPartitioner::SetDuplicateNodes)
    .function("GetDuplicateNodes", &vtkExtentRCBPartitioner::GetDuplicateNodes)
    .function("DuplicateNodesOn", &vtkExtentRCBPartitioner::DuplicateNodesOn)
    .function("DuplicateNodesOff", &vtkExtentRCBPartitioner::DuplicateNodesOff)
    .function("SetNumberOfGhostLayers", &vtkExtentRCBPartitioner::SetNumberOfGhostLayers)
    .function("GetNumberOfGhostLayers", &vtkExtentRCBPartitioner::GetNumberOfGhostLayers)
    .function("GetNumExtents", &vtkExtentRCBPartitioner::GetNumExtents)
    .function("Partition", &vtkExtentRCBPartitioner::Partition);
}

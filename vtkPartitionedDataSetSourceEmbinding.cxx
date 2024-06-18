// JavaScript wrapper for vtkPartitionedDataSetSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPartitionedDataSetSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPartitionedDataSetSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricFunction.h"
#include "vtkPartitionedDataSetSource.h"

template<> void emscripten::internal::raw_destructor<vtkPartitionedDataSetSource>(vtkPartitionedDataSetSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionedDataSetSource_class) {
  emscripten::class_<vtkPartitionedDataSetSource, emscripten::base<vtkPartitionedDataSetAlgorithm>>("vtkPartitionedDataSetSource")
    .smart_ptr<vtkSmartPointer<vtkPartitionedDataSetSource>>("vtkSmartPointer<vtkPartitionedDataSetSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPartitionedDataSetSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionedDataSetSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionedDataSetSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionedDataSetSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionedDataSetSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("EnableRank", &vtkPartitionedDataSetSource::EnableRank)
    .function("EnableAllRanks", &vtkPartitionedDataSetSource::EnableAllRanks)
    .function("DisableRank", &vtkPartitionedDataSetSource::DisableRank)
    .function("DisableAllRanks", &vtkPartitionedDataSetSource::DisableAllRanks)
    .function("IsEnabledRank", &vtkPartitionedDataSetSource::IsEnabledRank)
    .function("SetNumberOfPartitions", &vtkPartitionedDataSetSource::SetNumberOfPartitions)
    .function("GetNumberOfPartitionsMinValue", &vtkPartitionedDataSetSource::GetNumberOfPartitionsMinValue)
    .function("GetNumberOfPartitionsMaxValue", &vtkPartitionedDataSetSource::GetNumberOfPartitionsMaxValue)
    .function("GetNumberOfPartitions", &vtkPartitionedDataSetSource::GetNumberOfPartitions)
    .function("SetParametricFunction", &vtkPartitionedDataSetSource::SetParametricFunction, emscripten::allow_raw_pointers())
    .function("GetParametricFunction", &vtkPartitionedDataSetSource::GetParametricFunction, emscripten::allow_raw_pointers());
}

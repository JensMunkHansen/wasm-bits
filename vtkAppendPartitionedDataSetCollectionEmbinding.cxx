// JavaScript wrapper for vtkAppendPartitionedDataSetCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendPartitionedDataSetCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendPartitionedDataSetCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAppendPartitionedDataSetCollection.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkAppendPartitionedDataSetCollection_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkAppendPartitionedDataSetCollection>(vtkAppendPartitionedDataSetCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendPartitionedDataSetCollection_class) {
  using AppendModes=vtkAppendPartitionedDataSetCollection::AppendModes;
  emscripten::class_<vtkAppendPartitionedDataSetCollection, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkAppendPartitionedDataSetCollection")
    .smart_ptr<vtkSmartPointer<vtkAppendPartitionedDataSetCollection>>("vtkSmartPointer<vtkAppendPartitionedDataSetCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendPartitionedDataSetCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendPartitionedDataSetCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendPartitionedDataSetCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendPartitionedDataSetCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetAppendMode", &vtkAppendPartitionedDataSetCollection::SetAppendMode)
    .function("GetAppendModeMinValue", &vtkAppendPartitionedDataSetCollection::GetAppendModeMinValue)
    .function("GetAppendModeMaxValue", &vtkAppendPartitionedDataSetCollection::GetAppendModeMaxValue)
    .function("SetAppendModeToAppendPartitions", &vtkAppendPartitionedDataSetCollection::SetAppendModeToAppendPartitions)
    .function("SetAppendModeToMergePartitions", &vtkAppendPartitionedDataSetCollection::SetAppendModeToMergePartitions)
    .function("GetAppendMode", &vtkAppendPartitionedDataSetCollection::GetAppendMode)
    .function("SetAppendFieldData", &vtkAppendPartitionedDataSetCollection::SetAppendFieldData)
    .function("GetAppendFieldData", &vtkAppendPartitionedDataSetCollection::GetAppendFieldData)
    .function("AppendFieldDataOn", &vtkAppendPartitionedDataSetCollection::AppendFieldDataOn)
    .function("AppendFieldDataOff", &vtkAppendPartitionedDataSetCollection::AppendFieldDataOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkAppendPartitionedDataSetCollection_0_2_constants) {
    typedef vtkAppendPartitionedDataSetCollection::AppendModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkAppendPartitionedDataSetCollection_AppendModes_APPEND_PARTITIONS", vtkAppendPartitionedDataSetCollection::APPEND_PARTITIONS },
      { "vtkAppendPartitionedDataSetCollection_AppendModes_MERGE_PARTITIONS", vtkAppendPartitionedDataSetCollection::MERGE_PARTITIONS },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

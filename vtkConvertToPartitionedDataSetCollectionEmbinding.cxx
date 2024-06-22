// JavaScript wrapper for vtkConvertToPartitionedDataSetCollection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkConvertToPartitionedDataSetCollectionEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkConvertToPartitionedDataSetCollection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConvertToPartitionedDataSetCollection.h"

template<> void emscripten::internal::raw_destructor<vtkConvertToPartitionedDataSetCollection>(vtkConvertToPartitionedDataSetCollection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvertToPartitionedDataSetCollection_class) {
  emscripten::class_<vtkConvertToPartitionedDataSetCollection, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkConvertToPartitionedDataSetCollection")
    .smart_ptr<vtkSmartPointer<vtkConvertToPartitionedDataSetCollection>>("vtkSmartPointer<vtkConvertToPartitionedDataSetCollection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConvertToPartitionedDataSetCollection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToPartitionedDataSetCollection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvertToPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvertToPartitionedDataSetCollection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvertToPartitionedDataSetCollection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToPartitionedDataSetCollection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvertToPartitionedDataSetCollection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}

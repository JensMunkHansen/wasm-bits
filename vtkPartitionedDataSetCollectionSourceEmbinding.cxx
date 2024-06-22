// JavaScript wrapper for vtkPartitionedDataSetCollectionSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkPartitionedDataSetCollectionSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkPartitionedDataSetCollectionSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSetCollectionSource.h"

template<> void emscripten::internal::raw_destructor<vtkPartitionedDataSetCollectionSource>(vtkPartitionedDataSetCollectionSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPartitionedDataSetCollectionSource_class) {
  emscripten::class_<vtkPartitionedDataSetCollectionSource, emscripten::base<vtkPartitionedDataSetCollectionAlgorithm>>("vtkPartitionedDataSetCollectionSource")
    .smart_ptr<vtkSmartPointer<vtkPartitionedDataSetCollectionSource>>("vtkSmartPointer<vtkPartitionedDataSetCollectionSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPartitionedDataSetCollectionSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetCollectionSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPartitionedDataSetCollectionSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPartitionedDataSetCollectionSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPartitionedDataSetCollectionSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPartitionedDataSetCollectionSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPartitionedDataSetCollectionSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfShapes", &vtkPartitionedDataSetCollectionSource::SetNumberOfShapes)
    .function("GetNumberOfShapesMinValue", &vtkPartitionedDataSetCollectionSource::GetNumberOfShapesMinValue)
    .function("GetNumberOfShapesMaxValue", &vtkPartitionedDataSetCollectionSource::GetNumberOfShapesMaxValue)
    .function("GetNumberOfShapes", &vtkPartitionedDataSetCollectionSource::GetNumberOfShapes);
}

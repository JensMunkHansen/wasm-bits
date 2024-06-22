// JavaScript wrapper for vtkMergeFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMergeFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMergeFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkAlgorithmOutput.h"
#include "vtkMergeFilter.h"

template<> void emscripten::internal::raw_destructor<vtkMergeFilter>(vtkMergeFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMergeFilter_class) {
  emscripten::class_<vtkMergeFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkMergeFilter")
    .smart_ptr<vtkSmartPointer<vtkMergeFilter>>("vtkSmartPointer<vtkMergeFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMergeFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMergeFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMergeFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMergeFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMergeFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMergeFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGeometryInputData", &vtkMergeFilter::SetGeometryInputData, emscripten::allow_raw_pointers())
    .function("GetGeometry", &vtkMergeFilter::GetGeometry, emscripten::allow_raw_pointers())
    .function("SetGeometryConnection", &vtkMergeFilter::SetGeometryConnection, emscripten::allow_raw_pointers())
    .function("SetScalarsData", &vtkMergeFilter::SetScalarsData, emscripten::allow_raw_pointers())
    .function("GetScalars", &vtkMergeFilter::GetScalars, emscripten::allow_raw_pointers())
    .function("SetScalarsConnection", &vtkMergeFilter::SetScalarsConnection, emscripten::allow_raw_pointers())
    .function("SetVectorsData", &vtkMergeFilter::SetVectorsData, emscripten::allow_raw_pointers())
    .function("GetVectors", &vtkMergeFilter::GetVectors, emscripten::allow_raw_pointers())
    .function("SetVectorsConnection", &vtkMergeFilter::SetVectorsConnection, emscripten::allow_raw_pointers())
    .function("SetNormalsData", &vtkMergeFilter::SetNormalsData, emscripten::allow_raw_pointers())
    .function("GetNormals", &vtkMergeFilter::GetNormals, emscripten::allow_raw_pointers())
    .function("SetNormalsConnection", &vtkMergeFilter::SetNormalsConnection, emscripten::allow_raw_pointers())
    .function("SetTCoordsData", &vtkMergeFilter::SetTCoordsData, emscripten::allow_raw_pointers())
    .function("GetTCoords", &vtkMergeFilter::GetTCoords, emscripten::allow_raw_pointers())
    .function("SetTCoordsConnection", &vtkMergeFilter::SetTCoordsConnection, emscripten::allow_raw_pointers())
    .function("SetTensorsData", &vtkMergeFilter::SetTensorsData, emscripten::allow_raw_pointers())
    .function("GetTensors", &vtkMergeFilter::GetTensors, emscripten::allow_raw_pointers())
    .function("SetTensorsConnection", &vtkMergeFilter::SetTensorsConnection, emscripten::allow_raw_pointers())
    .function("AddField", emscripten::optional_override([](vtkMergeFilter& self, const std::string & arg_0, vtkDataSet* arg_1) -> void {  return self.AddField( arg_0.c_str(), arg_1);}), emscripten::allow_raw_pointers());
}

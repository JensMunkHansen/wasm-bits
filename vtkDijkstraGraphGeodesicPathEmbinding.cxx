// JavaScript wrapper for vtkDijkstraGraphGeodesicPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkDijkstraGraphGeodesicPathEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkDijkstraGraphGeodesicPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkPoints.h"
#include "vtkDoubleArray.h"
#include "vtkDijkstraGraphGeodesicPath.h"

template<> void emscripten::internal::raw_destructor<vtkDijkstraGraphGeodesicPath>(vtkDijkstraGraphGeodesicPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDijkstraGraphGeodesicPath_class) {
  emscripten::class_<vtkDijkstraGraphGeodesicPath, emscripten::base<vtkGraphGeodesicPath>>("vtkDijkstraGraphGeodesicPath")
    .smart_ptr<vtkSmartPointer<vtkDijkstraGraphGeodesicPath>>("vtkSmartPointer<vtkDijkstraGraphGeodesicPath>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDijkstraGraphGeodesicPath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDijkstraGraphGeodesicPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDijkstraGraphGeodesicPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDijkstraGraphGeodesicPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDijkstraGraphGeodesicPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDijkstraGraphGeodesicPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDijkstraGraphGeodesicPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetIdList", &vtkDijkstraGraphGeodesicPath::GetIdList, emscripten::allow_raw_pointers())
    .function("SetStopWhenEndReached", &vtkDijkstraGraphGeodesicPath::SetStopWhenEndReached)
    .function("GetStopWhenEndReached", &vtkDijkstraGraphGeodesicPath::GetStopWhenEndReached)
    .function("StopWhenEndReachedOn", &vtkDijkstraGraphGeodesicPath::StopWhenEndReachedOn)
    .function("StopWhenEndReachedOff", &vtkDijkstraGraphGeodesicPath::StopWhenEndReachedOff)
    .function("SetUseScalarWeights", &vtkDijkstraGraphGeodesicPath::SetUseScalarWeights)
    .function("GetUseScalarWeights", &vtkDijkstraGraphGeodesicPath::GetUseScalarWeights)
    .function("UseScalarWeightsOn", &vtkDijkstraGraphGeodesicPath::UseScalarWeightsOn)
    .function("UseScalarWeightsOff", &vtkDijkstraGraphGeodesicPath::UseScalarWeightsOff)
    .function("SetRepelPathFromVertices", &vtkDijkstraGraphGeodesicPath::SetRepelPathFromVertices)
    .function("GetRepelPathFromVertices", &vtkDijkstraGraphGeodesicPath::GetRepelPathFromVertices)
    .function("RepelPathFromVerticesOn", &vtkDijkstraGraphGeodesicPath::RepelPathFromVerticesOn)
    .function("RepelPathFromVerticesOff", &vtkDijkstraGraphGeodesicPath::RepelPathFromVerticesOff)
    .function("SetRepelVertices", &vtkDijkstraGraphGeodesicPath::SetRepelVertices, emscripten::allow_raw_pointers())
    .function("GetRepelVertices", &vtkDijkstraGraphGeodesicPath::GetRepelVertices, emscripten::allow_raw_pointers())
    .function("GetCumulativeWeights", &vtkDijkstraGraphGeodesicPath::GetCumulativeWeights, emscripten::allow_raw_pointers());
}

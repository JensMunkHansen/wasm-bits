// JavaScript wrapper for vtkDijkstraImageGeodesicPath with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkDijkstraImageGeodesicPathEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkDijkstraImageGeodesicPath.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkImageData.h"
#include "vtkDijkstraImageGeodesicPath.h"

template<> void emscripten::internal::raw_destructor<vtkDijkstraImageGeodesicPath>(vtkDijkstraImageGeodesicPath * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDijkstraImageGeodesicPath_class) {
  emscripten::class_<vtkDijkstraImageGeodesicPath, emscripten::base<vtkDijkstraGraphGeodesicPath>>("vtkDijkstraImageGeodesicPath")
    .smart_ptr<vtkSmartPointer<vtkDijkstraImageGeodesicPath>>("vtkSmartPointer<vtkDijkstraImageGeodesicPath>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDijkstraImageGeodesicPath>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDijkstraImageGeodesicPath::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDijkstraImageGeodesicPath& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDijkstraImageGeodesicPath::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDijkstraImageGeodesicPath::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDijkstraImageGeodesicPath::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDijkstraImageGeodesicPath& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputData", &vtkDijkstraImageGeodesicPath::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInputAsImageData", &vtkDijkstraImageGeodesicPath::GetInputAsImageData, emscripten::allow_raw_pointers())
    .function("SetImageWeight", &vtkDijkstraImageGeodesicPath::SetImageWeight)
    .function("GetImageWeight", &vtkDijkstraImageGeodesicPath::GetImageWeight)
    .function("SetEdgeLengthWeight", &vtkDijkstraImageGeodesicPath::SetEdgeLengthWeight)
    .function("GetEdgeLengthWeight", &vtkDijkstraImageGeodesicPath::GetEdgeLengthWeight)
    .function("SetCurvatureWeight", &vtkDijkstraImageGeodesicPath::SetCurvatureWeight)
    .function("GetCurvatureWeightMinValue", &vtkDijkstraImageGeodesicPath::GetCurvatureWeightMinValue)
    .function("GetCurvatureWeightMaxValue", &vtkDijkstraImageGeodesicPath::GetCurvatureWeightMaxValue)
    .function("GetCurvatureWeight", &vtkDijkstraImageGeodesicPath::GetCurvatureWeight);
}

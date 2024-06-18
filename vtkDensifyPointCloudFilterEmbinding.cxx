// JavaScript wrapper for vtkDensifyPointCloudFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkDensifyPointCloudFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkDensifyPointCloudFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDensifyPointCloudFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkDensifyPointCloudFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkDensifyPointCloudFilter>(vtkDensifyPointCloudFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDensifyPointCloudFilter_class) {
  emscripten::class_<vtkDensifyPointCloudFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkDensifyPointCloudFilter")
    .smart_ptr<vtkSmartPointer<vtkDensifyPointCloudFilter>>("vtkSmartPointer<vtkDensifyPointCloudFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDensifyPointCloudFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDensifyPointCloudFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDensifyPointCloudFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDensifyPointCloudFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDensifyPointCloudFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDensifyPointCloudFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDensifyPointCloudFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNeighborhoodType", &vtkDensifyPointCloudFilter::SetNeighborhoodType)
    .function("GetNeighborhoodType", &vtkDensifyPointCloudFilter::GetNeighborhoodType)
    .function("SetNeighborhoodTypeToRadius", &vtkDensifyPointCloudFilter::SetNeighborhoodTypeToRadius)
    .function("SetNeighborhoodTypeToNClosest", &vtkDensifyPointCloudFilter::SetNeighborhoodTypeToNClosest)
    .function("SetRadius", &vtkDensifyPointCloudFilter::SetRadius)
    .function("GetRadiusMinValue", &vtkDensifyPointCloudFilter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkDensifyPointCloudFilter::GetRadiusMaxValue)
    .function("GetRadius", &vtkDensifyPointCloudFilter::GetRadius)
    .function("SetNumberOfClosestPoints", &vtkDensifyPointCloudFilter::SetNumberOfClosestPoints)
    .function("GetNumberOfClosestPointsMinValue", &vtkDensifyPointCloudFilter::GetNumberOfClosestPointsMinValue)
    .function("GetNumberOfClosestPointsMaxValue", &vtkDensifyPointCloudFilter::GetNumberOfClosestPointsMaxValue)
    .function("GetNumberOfClosestPoints", &vtkDensifyPointCloudFilter::GetNumberOfClosestPoints)
    .function("SetTargetDistance", &vtkDensifyPointCloudFilter::SetTargetDistance)
    .function("GetTargetDistanceMinValue", &vtkDensifyPointCloudFilter::GetTargetDistanceMinValue)
    .function("GetTargetDistanceMaxValue", &vtkDensifyPointCloudFilter::GetTargetDistanceMaxValue)
    .function("GetTargetDistance", &vtkDensifyPointCloudFilter::GetTargetDistance)
    .function("SetMaximumNumberOfIterations", &vtkDensifyPointCloudFilter::SetMaximumNumberOfIterations)
    .function("GetMaximumNumberOfIterationsMinValue", &vtkDensifyPointCloudFilter::GetMaximumNumberOfIterationsMinValue)
    .function("GetMaximumNumberOfIterationsMaxValue", &vtkDensifyPointCloudFilter::GetMaximumNumberOfIterationsMaxValue)
    .function("GetMaximumNumberOfIterations", &vtkDensifyPointCloudFilter::GetMaximumNumberOfIterations)
    .function("SetMaximumNumberOfPoints", &vtkDensifyPointCloudFilter::SetMaximumNumberOfPoints)
    .function("GetMaximumNumberOfPointsMinValue", &vtkDensifyPointCloudFilter::GetMaximumNumberOfPointsMinValue)
    .function("GetMaximumNumberOfPointsMaxValue", &vtkDensifyPointCloudFilter::GetMaximumNumberOfPointsMaxValue)
    .function("GetMaximumNumberOfPoints", &vtkDensifyPointCloudFilter::GetMaximumNumberOfPoints)
    .function("SetInterpolateAttributeData", &vtkDensifyPointCloudFilter::SetInterpolateAttributeData)
    .function("GetInterpolateAttributeData", &vtkDensifyPointCloudFilter::GetInterpolateAttributeData)
    .function("InterpolateAttributeDataOn", &vtkDensifyPointCloudFilter::InterpolateAttributeDataOn)
    .function("InterpolateAttributeDataOff", &vtkDensifyPointCloudFilter::InterpolateAttributeDataOff);
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkDensifyPointCloudFilter_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkDensifyPointCloudFilter_RADIUS", vtkDensifyPointCloudFilter::RADIUS },
      { "vtkDensifyPointCloudFilter_N_CLOSEST", vtkDensifyPointCloudFilter::N_CLOSEST },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}

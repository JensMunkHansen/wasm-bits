// JavaScript wrapper for vtkPointCloudFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPointCloudFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPointCloudFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointCloudFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPointCloudFilter>(vtkPointCloudFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointCloudFilter_class) {
  emscripten::class_<vtkPointCloudFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkPointCloudFilter")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointCloudFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointCloudFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointCloudFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointCloudFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointCloudFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointCloudFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPointMap", emscripten::optional_override([](vtkPointCloudFilter& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointMap()) / sizeof(int);}))
    .function("GetNumberOfPointsRemoved", &vtkPointCloudFilter::GetNumberOfPointsRemoved)
    .function("SetGenerateOutliers", &vtkPointCloudFilter::SetGenerateOutliers)
    .function("GetGenerateOutliers", &vtkPointCloudFilter::GetGenerateOutliers)
    .function("GenerateOutliersOn", &vtkPointCloudFilter::GenerateOutliersOn)
    .function("GenerateOutliersOff", &vtkPointCloudFilter::GenerateOutliersOff)
    .function("SetGenerateVertices", &vtkPointCloudFilter::SetGenerateVertices)
    .function("GetGenerateVertices", &vtkPointCloudFilter::GetGenerateVertices)
    .function("GenerateVerticesOn", &vtkPointCloudFilter::GenerateVerticesOn)
    .function("GenerateVerticesOff", &vtkPointCloudFilter::GenerateVerticesOff);
}

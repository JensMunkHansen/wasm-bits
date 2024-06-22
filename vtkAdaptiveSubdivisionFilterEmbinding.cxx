// JavaScript wrapper for vtkAdaptiveSubdivisionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkAdaptiveSubdivisionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkAdaptiveSubdivisionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"
#include "vtkAdaptiveSubdivisionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAdaptiveSubdivisionFilter>(vtkAdaptiveSubdivisionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAdaptiveSubdivisionFilter_class) {
  emscripten::class_<vtkAdaptiveSubdivisionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkAdaptiveSubdivisionFilter")
    .smart_ptr<vtkSmartPointer<vtkAdaptiveSubdivisionFilter>>("vtkSmartPointer<vtkAdaptiveSubdivisionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAdaptiveSubdivisionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdaptiveSubdivisionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAdaptiveSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAdaptiveSubdivisionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAdaptiveSubdivisionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdaptiveSubdivisionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAdaptiveSubdivisionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaximumEdgeLength", &vtkAdaptiveSubdivisionFilter::SetMaximumEdgeLength)
    .function("GetMaximumEdgeLengthMinValue", &vtkAdaptiveSubdivisionFilter::GetMaximumEdgeLengthMinValue)
    .function("GetMaximumEdgeLengthMaxValue", &vtkAdaptiveSubdivisionFilter::GetMaximumEdgeLengthMaxValue)
    .function("GetMaximumEdgeLength", &vtkAdaptiveSubdivisionFilter::GetMaximumEdgeLength)
    .function("SetMaximumTriangleArea", &vtkAdaptiveSubdivisionFilter::SetMaximumTriangleArea)
    .function("GetMaximumTriangleAreaMinValue", &vtkAdaptiveSubdivisionFilter::GetMaximumTriangleAreaMinValue)
    .function("GetMaximumTriangleAreaMaxValue", &vtkAdaptiveSubdivisionFilter::GetMaximumTriangleAreaMaxValue)
    .function("GetMaximumTriangleArea", &vtkAdaptiveSubdivisionFilter::GetMaximumTriangleArea)
    .function("SetMaximumNumberOfTriangles", &vtkAdaptiveSubdivisionFilter::SetMaximumNumberOfTriangles)
    .function("GetMaximumNumberOfTrianglesMinValue", &vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfTrianglesMinValue)
    .function("GetMaximumNumberOfTrianglesMaxValue", &vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfTrianglesMaxValue)
    .function("GetMaximumNumberOfTriangles", &vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfTriangles)
    .function("SetMaximumNumberOfPasses", &vtkAdaptiveSubdivisionFilter::SetMaximumNumberOfPasses)
    .function("GetMaximumNumberOfPassesMinValue", &vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfPassesMinValue)
    .function("GetMaximumNumberOfPassesMaxValue", &vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfPassesMaxValue)
    .function("GetMaximumNumberOfPasses", &vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfPasses)
    .function("SetLocator", &vtkAdaptiveSubdivisionFilter::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkAdaptiveSubdivisionFilter::GetLocator, emscripten::allow_raw_pointers())
    .function("SetOutputPointsPrecision", &vtkAdaptiveSubdivisionFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkAdaptiveSubdivisionFilter::GetOutputPointsPrecision)
    .function("CreateDefaultLocator", &vtkAdaptiveSubdivisionFilter::CreateDefaultLocator)
    .function("GetMTime", &vtkAdaptiveSubdivisionFilter::GetMTime);
}

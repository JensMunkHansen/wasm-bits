// JavaScript wrapper for vtkAdaptiveDataSetSurfaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkAdaptiveDataSetSurfaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkAdaptiveDataSetSurfaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkAdaptiveDataSetSurfaceFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAdaptiveDataSetSurfaceFilter>(vtkAdaptiveDataSetSurfaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAdaptiveDataSetSurfaceFilter_class) {
  emscripten::class_<vtkAdaptiveDataSetSurfaceFilter, emscripten::base<vtkGeometryFilter>>("vtkAdaptiveDataSetSurfaceFilter")
    .smart_ptr<vtkSmartPointer<vtkAdaptiveDataSetSurfaceFilter>>("vtkSmartPointer<vtkAdaptiveDataSetSurfaceFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAdaptiveDataSetSurfaceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdaptiveDataSetSurfaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAdaptiveDataSetSurfaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAdaptiveDataSetSurfaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAdaptiveDataSetSurfaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAdaptiveDataSetSurfaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAdaptiveDataSetSurfaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRenderer", &vtkAdaptiveDataSetSurfaceFilter::SetRenderer, emscripten::allow_raw_pointers())
    .function("GetRenderer", &vtkAdaptiveDataSetSurfaceFilter::GetRenderer, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAdaptiveDataSetSurfaceFilter::GetMTime)
    .function("SetCircleSelection", &vtkAdaptiveDataSetSurfaceFilter::SetCircleSelection)
    .function("GetCircleSelection", &vtkAdaptiveDataSetSurfaceFilter::GetCircleSelection)
    .function("SetBBSelection", &vtkAdaptiveDataSetSurfaceFilter::SetBBSelection)
    .function("GetBBSelection", &vtkAdaptiveDataSetSurfaceFilter::GetBBSelection)
    .function("SetViewPointDepend", &vtkAdaptiveDataSetSurfaceFilter::SetViewPointDepend)
    .function("GetViewPointDepend", &vtkAdaptiveDataSetSurfaceFilter::GetViewPointDepend)
    .function("SetFixedLevelMax", &vtkAdaptiveDataSetSurfaceFilter::SetFixedLevelMax)
    .function("GetFixedLevelMax", &vtkAdaptiveDataSetSurfaceFilter::GetFixedLevelMax)
    .function("SetScale", &vtkAdaptiveDataSetSurfaceFilter::SetScale)
    .function("GetScale", &vtkAdaptiveDataSetSurfaceFilter::GetScale)
    .function("SetDynamicDecimateLevelMax", &vtkAdaptiveDataSetSurfaceFilter::SetDynamicDecimateLevelMax)
    .function("GetDynamicDecimateLevelMax", &vtkAdaptiveDataSetSurfaceFilter::GetDynamicDecimateLevelMax);
}

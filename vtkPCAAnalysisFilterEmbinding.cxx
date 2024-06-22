// JavaScript wrapper for vtkPCAAnalysisFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkPCAAnalysisFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkPCAAnalysisFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkFloatArray.h"
#include "vtkPointSet.h"
#include "vtkPCAAnalysisFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPCAAnalysisFilter>(vtkPCAAnalysisFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPCAAnalysisFilter_class) {
  emscripten::class_<vtkPCAAnalysisFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkPCAAnalysisFilter")
    .smart_ptr<vtkSmartPointer<vtkPCAAnalysisFilter>>("vtkSmartPointer<vtkPCAAnalysisFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPCAAnalysisFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCAAnalysisFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPCAAnalysisFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPCAAnalysisFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPCAAnalysisFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCAAnalysisFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPCAAnalysisFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEvals", &vtkPCAAnalysisFilter::GetEvals, emscripten::allow_raw_pointers())
    .function("GetParameterisedShape", &vtkPCAAnalysisFilter::GetParameterisedShape, emscripten::allow_raw_pointers())
    .function("GetShapeParameters", &vtkPCAAnalysisFilter::GetShapeParameters, emscripten::allow_raw_pointers())
    .function("GetModesRequiredFor", &vtkPCAAnalysisFilter::GetModesRequiredFor);
}

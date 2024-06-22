// JavaScript wrapper for vtkProcrustesAlignmentFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkProcrustesAlignmentFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkProcrustesAlignmentFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLandmarkTransform.h"
#include "vtkPoints.h"
#include "vtkProcrustesAlignmentFilter.h"

template<> void emscripten::internal::raw_destructor<vtkProcrustesAlignmentFilter>(vtkProcrustesAlignmentFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProcrustesAlignmentFilter_class) {
  emscripten::class_<vtkProcrustesAlignmentFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkProcrustesAlignmentFilter")
    .smart_ptr<vtkSmartPointer<vtkProcrustesAlignmentFilter>>("vtkSmartPointer<vtkProcrustesAlignmentFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProcrustesAlignmentFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProcrustesAlignmentFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProcrustesAlignmentFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProcrustesAlignmentFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProcrustesAlignmentFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProcrustesAlignmentFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProcrustesAlignmentFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetLandmarkTransform", &vtkProcrustesAlignmentFilter::GetLandmarkTransform, emscripten::allow_raw_pointers())
    .function("GetMeanPoints", &vtkProcrustesAlignmentFilter::GetMeanPoints, emscripten::allow_raw_pointers())
    .function("SetStartFromCentroid", &vtkProcrustesAlignmentFilter::SetStartFromCentroid)
    .function("GetStartFromCentroid", &vtkProcrustesAlignmentFilter::GetStartFromCentroid)
    .function("StartFromCentroidOn", &vtkProcrustesAlignmentFilter::StartFromCentroidOn)
    .function("StartFromCentroidOff", &vtkProcrustesAlignmentFilter::StartFromCentroidOff)
    .function("SetOutputPointsPrecision", &vtkProcrustesAlignmentFilter::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkProcrustesAlignmentFilter::GetOutputPointsPrecision);
}

// JavaScript wrapper for vtkIntersectionPolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkIntersectionPolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkIntersectionPolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkIntersectionPolyDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkIntersectionPolyDataFilter>(vtkIntersectionPolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIntersectionPolyDataFilter_class) {
  emscripten::class_<vtkIntersectionPolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkIntersectionPolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkIntersectionPolyDataFilter>>("vtkSmartPointer<vtkIntersectionPolyDataFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkIntersectionPolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIntersectionPolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIntersectionPolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIntersectionPolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIntersectionPolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIntersectionPolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIntersectionPolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfIntersectionPoints", &vtkIntersectionPolyDataFilter::GetNumberOfIntersectionPoints)
    .function("GetNumberOfIntersectionLines", &vtkIntersectionPolyDataFilter::GetNumberOfIntersectionLines)
    .function("GetSplitFirstOutput", &vtkIntersectionPolyDataFilter::GetSplitFirstOutput)
    .function("SetSplitFirstOutput", &vtkIntersectionPolyDataFilter::SetSplitFirstOutput)
    .function("SplitFirstOutputOn", &vtkIntersectionPolyDataFilter::SplitFirstOutputOn)
    .function("SplitFirstOutputOff", &vtkIntersectionPolyDataFilter::SplitFirstOutputOff)
    .function("GetSplitSecondOutput", &vtkIntersectionPolyDataFilter::GetSplitSecondOutput)
    .function("SetSplitSecondOutput", &vtkIntersectionPolyDataFilter::SetSplitSecondOutput)
    .function("SplitSecondOutputOn", &vtkIntersectionPolyDataFilter::SplitSecondOutputOn)
    .function("SplitSecondOutputOff", &vtkIntersectionPolyDataFilter::SplitSecondOutputOff)
    .function("GetComputeIntersectionPointArray", &vtkIntersectionPolyDataFilter::GetComputeIntersectionPointArray)
    .function("SetComputeIntersectionPointArray", &vtkIntersectionPolyDataFilter::SetComputeIntersectionPointArray)
    .function("ComputeIntersectionPointArrayOn", &vtkIntersectionPolyDataFilter::ComputeIntersectionPointArrayOn)
    .function("ComputeIntersectionPointArrayOff", &vtkIntersectionPolyDataFilter::ComputeIntersectionPointArrayOff)
    .function("GetCheckInput", &vtkIntersectionPolyDataFilter::GetCheckInput)
    .function("SetCheckInput", &vtkIntersectionPolyDataFilter::SetCheckInput)
    .function("CheckInputOn", &vtkIntersectionPolyDataFilter::CheckInputOn)
    .function("CheckInputOff", &vtkIntersectionPolyDataFilter::CheckInputOff)
    .function("GetCheckMesh", &vtkIntersectionPolyDataFilter::GetCheckMesh)
    .function("SetCheckMesh", &vtkIntersectionPolyDataFilter::SetCheckMesh)
    .function("CheckMeshOn", &vtkIntersectionPolyDataFilter::CheckMeshOn)
    .function("CheckMeshOff", &vtkIntersectionPolyDataFilter::CheckMeshOff)
    .function("GetStatus", &vtkIntersectionPolyDataFilter::GetStatus)
    .function("GetTolerance", &vtkIntersectionPolyDataFilter::GetTolerance)
    .function("SetTolerance", &vtkIntersectionPolyDataFilter::SetTolerance)
    .function("GetRelativeSubtriangleArea", &vtkIntersectionPolyDataFilter::GetRelativeSubtriangleArea)
    .function("SetRelativeSubtriangleArea", &vtkIntersectionPolyDataFilter::SetRelativeSubtriangleArea)
    .class_function("CleanAndCheckInput", &vtkIntersectionPolyDataFilter::CleanAndCheckInput, emscripten::allow_raw_pointers());
}

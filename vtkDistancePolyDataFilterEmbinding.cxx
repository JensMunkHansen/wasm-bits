// JavaScript wrapper for vtkDistancePolyDataFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDistancePolyDataFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDistancePolyDataFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkDistancePolyDataFilter.h"

template<> void emscripten::internal::raw_destructor<vtkDistancePolyDataFilter>(vtkDistancePolyDataFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistancePolyDataFilter_class) {
  emscripten::class_<vtkDistancePolyDataFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkDistancePolyDataFilter")
    .smart_ptr<vtkSmartPointer<vtkDistancePolyDataFilter>>("vtkSmartPointer<vtkDistancePolyDataFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDistancePolyDataFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistancePolyDataFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistancePolyDataFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistancePolyDataFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistancePolyDataFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistancePolyDataFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistancePolyDataFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSignedDistance", &vtkDistancePolyDataFilter::SetSignedDistance)
    .function("GetSignedDistance", &vtkDistancePolyDataFilter::GetSignedDistance)
    .function("SignedDistanceOn", &vtkDistancePolyDataFilter::SignedDistanceOn)
    .function("SignedDistanceOff", &vtkDistancePolyDataFilter::SignedDistanceOff)
    .function("SetNegateDistance", &vtkDistancePolyDataFilter::SetNegateDistance)
    .function("GetNegateDistance", &vtkDistancePolyDataFilter::GetNegateDistance)
    .function("NegateDistanceOn", &vtkDistancePolyDataFilter::NegateDistanceOn)
    .function("NegateDistanceOff", &vtkDistancePolyDataFilter::NegateDistanceOff)
    .function("SetComputeSecondDistance", &vtkDistancePolyDataFilter::SetComputeSecondDistance)
    .function("GetComputeSecondDistance", &vtkDistancePolyDataFilter::GetComputeSecondDistance)
    .function("ComputeSecondDistanceOn", &vtkDistancePolyDataFilter::ComputeSecondDistanceOn)
    .function("ComputeSecondDistanceOff", &vtkDistancePolyDataFilter::ComputeSecondDistanceOff)
    .function("GetSecondDistanceOutput", &vtkDistancePolyDataFilter::GetSecondDistanceOutput, emscripten::allow_raw_pointers())
    .function("SetComputeCellCenterDistance", &vtkDistancePolyDataFilter::SetComputeCellCenterDistance)
    .function("GetComputeCellCenterDistance", &vtkDistancePolyDataFilter::GetComputeCellCenterDistance)
    .function("ComputeCellCenterDistanceOn", &vtkDistancePolyDataFilter::ComputeCellCenterDistanceOn)
    .function("ComputeCellCenterDistanceOff", &vtkDistancePolyDataFilter::ComputeCellCenterDistanceOff)
    .function("SetComputeDirection", &vtkDistancePolyDataFilter::SetComputeDirection)
    .function("GetComputeDirection", &vtkDistancePolyDataFilter::GetComputeDirection)
    .function("ComputeDirectionOn", &vtkDistancePolyDataFilter::ComputeDirectionOn)
    .function("ComputeDirectionOff", &vtkDistancePolyDataFilter::ComputeDirectionOff);
}

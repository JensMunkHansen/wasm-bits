// JavaScript wrapper for vtkAMRResampleFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkAMRResampleFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkAMRResampleFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAMRResampleFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAMRResampleFilter>(vtkAMRResampleFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRResampleFilter_class) {
  emscripten::class_<vtkAMRResampleFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkAMRResampleFilter")
    .smart_ptr<vtkSmartPointer<vtkAMRResampleFilter>>("vtkSmartPointer<vtkAMRResampleFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAMRResampleFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRResampleFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRResampleFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRResampleFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRResampleFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRResampleFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRResampleFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfSamples", emscripten::select_overload<void(vtkAMRResampleFilter&, int, int, int)>([](vtkAMRResampleFilter& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetNumberOfSamples( arg_0, arg_1, arg_2); }))
    .function("SetTransferToNodes", &vtkAMRResampleFilter::SetTransferToNodes)
    .function("GetTransferToNodes", &vtkAMRResampleFilter::GetTransferToNodes)
    .function("SetDemandDrivenMode", &vtkAMRResampleFilter::SetDemandDrivenMode)
    .function("GetDemandDrivenMode", &vtkAMRResampleFilter::GetDemandDrivenMode)
    .function("SetNumberOfPartitions", &vtkAMRResampleFilter::SetNumberOfPartitions)
    .function("GetNumberOfPartitions", &vtkAMRResampleFilter::GetNumberOfPartitions)
    .function("SetMin", emscripten::select_overload<void(vtkAMRResampleFilter&, double, double, double)>([](vtkAMRResampleFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMin( arg_0, arg_1, arg_2); }))
    .function("SetMax", emscripten::select_overload<void(vtkAMRResampleFilter&, double, double, double)>([](vtkAMRResampleFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetMax( arg_0, arg_1, arg_2); }))
    .function("SetUseBiasVector", &vtkAMRResampleFilter::SetUseBiasVector)
    .function("GetUseBiasVector", &vtkAMRResampleFilter::GetUseBiasVector)
    .function("SetBiasVector", emscripten::select_overload<void(vtkAMRResampleFilter&, double, double, double)>([](vtkAMRResampleFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBiasVector( arg_0, arg_1, arg_2); }))
    .function("SetController", &vtkAMRResampleFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAMRResampleFilter::GetController, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkAMRResampleFilter::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("FillOutputPortInformation", &vtkAMRResampleFilter::FillOutputPortInformation, emscripten::allow_raw_pointers());
}

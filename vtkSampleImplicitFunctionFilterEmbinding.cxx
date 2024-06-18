// JavaScript wrapper for vtkSampleImplicitFunctionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkSampleImplicitFunctionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkSampleImplicitFunctionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkSampleImplicitFunctionFilter.h"

template<> void emscripten::internal::raw_destructor<vtkSampleImplicitFunctionFilter>(vtkSampleImplicitFunctionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSampleImplicitFunctionFilter_class) {
  emscripten::class_<vtkSampleImplicitFunctionFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkSampleImplicitFunctionFilter")
    .smart_ptr<vtkSmartPointer<vtkSampleImplicitFunctionFilter>>("vtkSmartPointer<vtkSampleImplicitFunctionFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSampleImplicitFunctionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSampleImplicitFunctionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSampleImplicitFunctionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSampleImplicitFunctionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSampleImplicitFunctionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSampleImplicitFunctionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSampleImplicitFunctionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImplicitFunction", &vtkSampleImplicitFunctionFilter::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtkSampleImplicitFunctionFilter::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetComputeGradients", &vtkSampleImplicitFunctionFilter::SetComputeGradients)
    .function("GetComputeGradients", &vtkSampleImplicitFunctionFilter::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkSampleImplicitFunctionFilter::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkSampleImplicitFunctionFilter::ComputeGradientsOff)
    .function("SetScalarArrayName", emscripten::optional_override([](vtkSampleImplicitFunctionFilter& self, const std::string & arg_0) -> void {  return self.SetScalarArrayName( arg_0.c_str());}))
    .function("GetScalarArrayName", emscripten::optional_override([](vtkSampleImplicitFunctionFilter& self) -> std::string {  return self.GetScalarArrayName();}))
    .function("SetGradientArrayName", emscripten::optional_override([](vtkSampleImplicitFunctionFilter& self, const std::string & arg_0) -> void {  return self.SetGradientArrayName( arg_0.c_str());}))
    .function("GetGradientArrayName", emscripten::optional_override([](vtkSampleImplicitFunctionFilter& self) -> std::string {  return self.GetGradientArrayName();}))
    .function("GetMTime", &vtkSampleImplicitFunctionFilter::GetMTime);
}

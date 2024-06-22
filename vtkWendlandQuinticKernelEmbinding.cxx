// JavaScript wrapper for vtkWendlandQuinticKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkWendlandQuinticKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkWendlandQuinticKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkDataSet.h"
#include "vtkPointData.h"
#include "vtkWendlandQuinticKernel.h"

template<> void emscripten::internal::raw_destructor<vtkWendlandQuinticKernel>(vtkWendlandQuinticKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWendlandQuinticKernel_class) {
  emscripten::class_<vtkWendlandQuinticKernel, emscripten::base<vtkSPHKernel>>("vtkWendlandQuinticKernel")
    .smart_ptr<vtkSmartPointer<vtkWendlandQuinticKernel>>("vtkSmartPointer<vtkWendlandQuinticKernel>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWendlandQuinticKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWendlandQuinticKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWendlandQuinticKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWendlandQuinticKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWendlandQuinticKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWendlandQuinticKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWendlandQuinticKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkWendlandQuinticKernel::Initialize, emscripten::allow_raw_pointers())
    .function("ComputeFunctionWeight", &vtkWendlandQuinticKernel::ComputeFunctionWeight)
    .function("ComputeDerivWeight", &vtkWendlandQuinticKernel::ComputeDerivWeight);
}
